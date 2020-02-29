/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// Generates Objective C gRPC service interface out of Protobuf IDL.

#include <memory>

#include "src/compiler/config.h"
#include "src/compiler/objective_c_generator.h"
#include "src/compiler/objective_c_generator_helpers.h"

#include <google/protobuf/compiler/objectivec/objectivec_helpers.h>

using ::google::protobuf::compiler::objectivec::
    IsProtobufLibraryBundledProtoFile;
using ::google::protobuf::compiler::objectivec::ProtobufLibraryFrameworkName;
using ::grpc_objective_c_generator::FrameworkImport;
using ::grpc_objective_c_generator::LocalImport;
using ::grpc_objective_c_generator::PreprocIfElse;
using ::grpc_objective_c_generator::PreprocIfNot;
using ::grpc_objective_c_generator::SystemImport;

namespace {

inline ::std::string ImportProtoHeaders(
    const grpc::protobuf::FileDescriptor* dep, const char* indent,
    const ::std::string& framework) {
  ::std::string header = grpc_objective_c_generator::MessageHeaderName(dep);

  if (!IsProtobufLibraryBundledProtoFile(dep)) {
    if (framework.empty()) {
      return indent + LocalImport(header);
    } else {
      return indent + FrameworkImport(header, framework);
    }
  }

  ::std::string base_name = header;
  grpc_generator::StripPrefix(&base_name, "google/protobuf/");
  // create the import code snippet
  ::std::string framework_header =
      ::std::string(ProtobufLibraryFrameworkName) + "/" + base_name;

  static const ::std::string kFrameworkImportsCondition =
      "GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS";
  return PreprocIfElse(kFrameworkImportsCondition,
                       indent + SystemImport(framework_header),
                       indent + LocalImport(header));
}

}  // namespace

class ObjectiveCGrpcGenerator : public grpc::protobuf::compiler::CodeGenerator {
 public:
  ObjectiveCGrpcGenerator() {}
  virtual ~ObjectiveCGrpcGenerator() {}

 public:
  virtual bool Generate(const grpc::protobuf::FileDescriptor* file,
                        const ::std::string& parameter,
                        grpc::protobuf::compiler::GeneratorContext* context,
                        ::std::string* error) const {
    if (file->service_count() == 0) {
      // No services.  Do nothing.
      return true;
    }

    ::std::string framework;
    std::vector<::std::string> params_list =
        grpc_generator::tokenize(parameter, ",");
    for (auto param_str = params_list.begin(); param_str != params_list.end();
         ++param_str) {
      std::vector<::std::string> param =
          grpc_generator::tokenize(*param_str, "=");
      if (param[0] == "generate_for_named_framework") {
        if (param.size() != 2) {
          *error =
              std::string("Format: generate_for_named_framework=<Framework>");
          return false;
        } else if (param[1].empty()) {
          *error =
              std::string("Name of framework cannot be empty for parameter: ") +
              param[0];
          return false;
        }
        framework = param[1];
      }
    }

    static const ::std::string kNonNullBegin = "NS_ASSUME_NONNULL_BEGIN\n";
    static const ::std::string kNonNullEnd = "NS_ASSUME_NONNULL_END\n";
    static const ::std::string kProtocolOnly = "GPB_GRPC_PROTOCOL_ONLY";
    static const ::std::string kForwardDeclare =
        "GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO";

    ::std::string file_name =
        google::protobuf::compiler::objectivec::FilePath(file);

    grpc_objective_c_generator::Parameters generator_params;
    generator_params.no_v1_compatibility = false;

    if (!parameter.empty()) {
      std::vector<std::string> parameters_list =
          grpc_generator::tokenize(parameter, ",");
      for (auto parameter_string = parameters_list.begin();
           parameter_string != parameters_list.end(); parameter_string++) {
        std::vector<std::string> param =
            grpc_generator::tokenize(*parameter_string, "=");
        if (param[0] == "no_v1_compatibility") {
          generator_params.no_v1_compatibility = true;
        }
      }
    }

    {
      // Generate .pbrpc.h

      ::std::string imports;
      if (framework.empty()) {
        imports = LocalImport(file_name + ".pbobjc.h");
      } else {
        imports = FrameworkImport(file_name + ".pbobjc.h", framework);
      }

      ::std::string system_imports =
          SystemImport("ProtoRPC/ProtoService.h") +
          (generator_params.no_v1_compatibility
               ? SystemImport("ProtoRPC/ProtoRPC.h")
               : SystemImport("ProtoRPC/ProtoRPCLegacy.h"));
      if (!generator_params.no_v1_compatibility) {
        system_imports += SystemImport("RxLibrary/GRXWriteable.h") +
                          SystemImport("RxLibrary/GRXWriter.h");
      }

      ::std::string forward_declarations =
          "@class GRPCUnaryProtoCall;\n"
          "@class GRPCStreamingProtoCall;\n"
          "@class GRPCCallOptions;\n"
          "@protocol GRPCProtoResponseHandler;\n";
      if (!generator_params.no_v1_compatibility) {
        forward_declarations += "@class GRPCProtoCall;\n";
      }
      forward_declarations += "\n";

      ::std::string class_declarations =
          grpc_objective_c_generator::GetAllMessageClasses(file);

      ::std::string class_imports;
      for (int i = 0; i < file->dependency_count(); i++) {
        class_imports +=
            ImportProtoHeaders(file->dependency(i), "  ", framework);
      }

      ::std::string ng_protocols;
      for (int i = 0; i < file->service_count(); i++) {
        const grpc::protobuf::ServiceDescriptor* service = file->service(i);
        ng_protocols += grpc_objective_c_generator::GetV2Protocol(service);
      }

      ::std::string protocols;
      for (int i = 0; i < file->service_count(); i++) {
        const grpc::protobuf::ServiceDescriptor* service = file->service(i);
        protocols +=
            grpc_objective_c_generator::GetProtocol(service, generator_params);
      }

      ::std::string interfaces;
      for (int i = 0; i < file->service_count(); i++) {
        const grpc::protobuf::ServiceDescriptor* service = file->service(i);
        interfaces +=
            grpc_objective_c_generator::GetInterface(service, generator_params);
      }

      Write(context, file_name + ".pbrpc.h",
            PreprocIfNot(kForwardDeclare, imports) + "\n" +
                PreprocIfNot(kProtocolOnly, system_imports) + "\n" +
                class_declarations + "\n" +
                PreprocIfNot(kForwardDeclare, class_imports) + "\n" +
                forward_declarations + "\n" + kNonNullBegin + "\n" +
                ng_protocols + protocols + "\n" +
                PreprocIfNot(kProtocolOnly, interfaces) + "\n" + kNonNullEnd +
                "\n");
    }

    {
      // Generate .pbrpc.m

      ::std::string imports;
      if (framework.empty()) {
        imports = LocalImport(file_name + ".pbrpc.h") +
                  LocalImport(file_name + ".pbobjc.h");
      } else {
        imports = FrameworkImport(file_name + ".pbrpc.h", framework) +
                  FrameworkImport(file_name + ".pbobjc.h", framework);
      }
      imports += (generator_params.no_v1_compatibility
                      ? SystemImport("ProtoRPC/ProtoRPC.h")
                      : SystemImport("ProtoRPC/ProtoRPCLegacy.h"));
      if (!generator_params.no_v1_compatibility) {
        imports += SystemImport("RxLibrary/GRXWriter+Immediate.h");
      }

      ::std::string class_imports;
      for (int i = 0; i < file->dependency_count(); i++) {
        class_imports += ImportProtoHeaders(file->dependency(i), "", framework);
      }

      ::std::string definitions;
      for (int i = 0; i < file->service_count(); i++) {
        const grpc::protobuf::ServiceDescriptor* service = file->service(i);
        definitions +=
            grpc_objective_c_generator::GetSource(service, generator_params);
      }

      Write(context, file_name + ".pbrpc.m",
            PreprocIfNot(kProtocolOnly,
                         imports + "\n" + class_imports + "\n" + definitions));
    }

    return true;
  }

 private:
  // Write the given code into the given file.
  void Write(grpc::protobuf::compiler::GeneratorContext* context,
             const ::std::string& filename, const ::std::string& code) const {
    std::unique_ptr<grpc::protobuf::io::ZeroCopyOutputStream> output(
        context->Open(filename));
    grpc::protobuf::io::CodedOutputStream coded_out(output.get());
    coded_out.WriteRaw(code.data(), code.size());
  }
};

int main(int argc, char* argv[]) {
  ObjectiveCGrpcGenerator generator;
  return grpc::protobuf::compiler::PluginMain(argc, argv, &generator);
}
