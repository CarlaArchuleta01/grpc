
# Copyright 2017 gRPC authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# AUTO-GENERATED BY make_grpcio_tools.py!
CC_FILES=[
    'google/protobuf/any.cc',
    'google/protobuf/any_lite.cc',
    'google/protobuf/arena.cc',
    'google/protobuf/arena_align.cc',
    'google/protobuf/arena_config.cc',
    'google/protobuf/arenastring.cc',
    'google/protobuf/arenaz_sampler.cc',
    'google/protobuf/compiler/code_generator.cc',
    'google/protobuf/compiler/command_line_interface.cc',
    'google/protobuf/compiler/cpp/enum.cc',
    'google/protobuf/compiler/cpp/extension.cc',
    'google/protobuf/compiler/cpp/field.cc',
    'google/protobuf/compiler/cpp/field_generators/enum_field.cc',
    'google/protobuf/compiler/cpp/field_generators/map_field.cc',
    'google/protobuf/compiler/cpp/field_generators/message_field.cc',
    'google/protobuf/compiler/cpp/field_generators/primitive_field.cc',
    'google/protobuf/compiler/cpp/field_generators/string_field.cc',
    'google/protobuf/compiler/cpp/file.cc',
    'google/protobuf/compiler/cpp/generator.cc',
    'google/protobuf/compiler/cpp/helpers.cc',
    'google/protobuf/compiler/cpp/message.cc',
    'google/protobuf/compiler/cpp/padding_optimizer.cc',
    'google/protobuf/compiler/cpp/parse_function_generator.cc',
    'google/protobuf/compiler/cpp/service.cc',
    'google/protobuf/compiler/cpp/tracker.cc',
    'google/protobuf/compiler/csharp/csharp_doc_comment.cc',
    'google/protobuf/compiler/csharp/csharp_enum.cc',
    'google/protobuf/compiler/csharp/csharp_enum_field.cc',
    'google/protobuf/compiler/csharp/csharp_field_base.cc',
    'google/protobuf/compiler/csharp/csharp_generator.cc',
    'google/protobuf/compiler/csharp/csharp_helpers.cc',
    'google/protobuf/compiler/csharp/csharp_map_field.cc',
    'google/protobuf/compiler/csharp/csharp_message.cc',
    'google/protobuf/compiler/csharp/csharp_message_field.cc',
    'google/protobuf/compiler/csharp/csharp_primitive_field.cc',
    'google/protobuf/compiler/csharp/csharp_reflection_class.cc',
    'google/protobuf/compiler/csharp/csharp_repeated_enum_field.cc',
    'google/protobuf/compiler/csharp/csharp_repeated_message_field.cc',
    'google/protobuf/compiler/csharp/csharp_repeated_primitive_field.cc',
    'google/protobuf/compiler/csharp/csharp_source_generator_base.cc',
    'google/protobuf/compiler/csharp/csharp_wrapper_field.cc',
    'google/protobuf/compiler/csharp/names.cc',
    'google/protobuf/compiler/importer.cc',
    'google/protobuf/compiler/java/context.cc',
    'google/protobuf/compiler/java/doc_comment.cc',
    'google/protobuf/compiler/java/enum.cc',
    'google/protobuf/compiler/java/enum_field.cc',
    'google/protobuf/compiler/java/enum_field_lite.cc',
    'google/protobuf/compiler/java/enum_lite.cc',
    'google/protobuf/compiler/java/extension.cc',
    'google/protobuf/compiler/java/extension_lite.cc',
    'google/protobuf/compiler/java/field.cc',
    'google/protobuf/compiler/java/file.cc',
    'google/protobuf/compiler/java/generator.cc',
    'google/protobuf/compiler/java/generator_factory.cc',
    'google/protobuf/compiler/java/helpers.cc',
    'google/protobuf/compiler/java/kotlin_generator.cc',
    'google/protobuf/compiler/java/map_field.cc',
    'google/protobuf/compiler/java/map_field_lite.cc',
    'google/protobuf/compiler/java/message.cc',
    'google/protobuf/compiler/java/message_builder.cc',
    'google/protobuf/compiler/java/message_builder_lite.cc',
    'google/protobuf/compiler/java/message_field.cc',
    'google/protobuf/compiler/java/message_field_lite.cc',
    'google/protobuf/compiler/java/message_lite.cc',
    'google/protobuf/compiler/java/message_serialization.cc',
    'google/protobuf/compiler/java/name_resolver.cc',
    'google/protobuf/compiler/java/names.cc',
    'google/protobuf/compiler/java/primitive_field.cc',
    'google/protobuf/compiler/java/primitive_field_lite.cc',
    'google/protobuf/compiler/java/service.cc',
    'google/protobuf/compiler/java/shared_code_generator.cc',
    'google/protobuf/compiler/java/string_field.cc',
    'google/protobuf/compiler/java/string_field_lite.cc',
    'google/protobuf/compiler/main.cc',
    'google/protobuf/compiler/objectivec/enum.cc',
    'google/protobuf/compiler/objectivec/enum_field.cc',
    'google/protobuf/compiler/objectivec/extension.cc',
    'google/protobuf/compiler/objectivec/field.cc',
    'google/protobuf/compiler/objectivec/file.cc',
    'google/protobuf/compiler/objectivec/generator.cc',
    'google/protobuf/compiler/objectivec/helpers.cc',
    'google/protobuf/compiler/objectivec/import_writer.cc',
    'google/protobuf/compiler/objectivec/line_consumer.cc',
    'google/protobuf/compiler/objectivec/map_field.cc',
    'google/protobuf/compiler/objectivec/message.cc',
    'google/protobuf/compiler/objectivec/message_field.cc',
    'google/protobuf/compiler/objectivec/names.cc',
    'google/protobuf/compiler/objectivec/oneof.cc',
    'google/protobuf/compiler/objectivec/primitive_field.cc',
    'google/protobuf/compiler/objectivec/text_format_decode_data.cc',
    'google/protobuf/compiler/parser.cc',
    'google/protobuf/compiler/php/names.cc',
    'google/protobuf/compiler/php/php_generator.cc',
    'google/protobuf/compiler/plugin.cc',
    'google/protobuf/compiler/plugin.pb.cc',
    'google/protobuf/compiler/python/generator.cc',
    'google/protobuf/compiler/python/helpers.cc',
    'google/protobuf/compiler/python/pyi_generator.cc',
    'google/protobuf/compiler/retention.cc',
    'google/protobuf/compiler/ruby/ruby_generator.cc',
    'google/protobuf/compiler/subprocess.cc',
    'google/protobuf/compiler/zip_writer.cc',
    'google/protobuf/descriptor.cc',
    'google/protobuf/descriptor.pb.cc',
    'google/protobuf/descriptor_database.cc',
    'google/protobuf/dynamic_message.cc',
    'google/protobuf/extension_set.cc',
    'google/protobuf/extension_set_heavy.cc',
    'google/protobuf/generated_enum_util.cc',
    'google/protobuf/generated_message_bases.cc',
    'google/protobuf/generated_message_reflection.cc',
    'google/protobuf/generated_message_tctable_full.cc',
    'google/protobuf/generated_message_tctable_gen.cc',
    'google/protobuf/generated_message_tctable_lite.cc',
    'google/protobuf/generated_message_util.cc',
    'google/protobuf/implicit_weak_message.cc',
    'google/protobuf/inlined_string_field.cc',
    'google/protobuf/io/coded_stream.cc',
    'google/protobuf/io/gzip_stream.cc',
    'google/protobuf/io/io_win32.cc',
    'google/protobuf/io/printer.cc',
    'google/protobuf/io/strtod.cc',
    'google/protobuf/io/tokenizer.cc',
    'google/protobuf/io/zero_copy_sink.cc',
    'google/protobuf/io/zero_copy_stream.cc',
    'google/protobuf/io/zero_copy_stream_impl.cc',
    'google/protobuf/io/zero_copy_stream_impl_lite.cc',
    'google/protobuf/json/internal/lexer.cc',
    'google/protobuf/json/internal/message_path.cc',
    'google/protobuf/json/internal/parser.cc',
    'google/protobuf/json/internal/unparser.cc',
    'google/protobuf/json/internal/untyped_message.cc',
    'google/protobuf/json/internal/writer.cc',
    'google/protobuf/json/internal/zero_copy_buffered_stream.cc',
    'google/protobuf/json/json.cc',
    'google/protobuf/map.cc',
    'google/protobuf/map_field.cc',
    'google/protobuf/message.cc',
    'google/protobuf/message_lite.cc',
    'google/protobuf/parse_context.cc',
    'google/protobuf/reflection_ops.cc',
    'google/protobuf/repeated_field.cc',
    'google/protobuf/repeated_ptr_field.cc',
    'google/protobuf/service.cc',
    'google/protobuf/stubs/common.cc',
    'google/protobuf/text_format.cc',
    'google/protobuf/unknown_field_set.cc',
    'google/protobuf/util/delimited_message_util.cc',
    'google/protobuf/util/field_comparator.cc',
    'google/protobuf/util/field_mask_util.cc',
    'google/protobuf/util/message_differencer.cc',
    'google/protobuf/util/time_util.cc',
    'google/protobuf/util/type_resolver_util.cc',
    'google/protobuf/wire_format.cc',
    'google/protobuf/wire_format_lite.cc',
    'google/protobuf/wkt/google/protobuf/any.pb.cc',
    'google/protobuf/wkt/google/protobuf/api.pb.cc',
    'google/protobuf/wkt/google/protobuf/duration.pb.cc',
    'google/protobuf/wkt/google/protobuf/empty.pb.cc',
    'google/protobuf/wkt/google/protobuf/field_mask.pb.cc',
    'google/protobuf/wkt/google/protobuf/source_context.pb.cc',
    'google/protobuf/wkt/google/protobuf/struct.pb.cc',
    'google/protobuf/wkt/google/protobuf/timestamp.pb.cc',
    'google/protobuf/wkt/google/protobuf/type.pb.cc',
    'google/protobuf/wkt/google/protobuf/wrappers.pb.cc'
]

PROTO_FILES=[
    'google/protobuf/any.proto',
    'google/protobuf/api.proto',
    'google/protobuf/compiler/plugin.proto',
    'google/protobuf/descriptor.proto',
    'google/protobuf/duration.proto',
    'google/protobuf/empty.proto',
    'google/protobuf/field_mask.proto',
    'google/protobuf/source_context.proto',
    'google/protobuf/struct.proto',
    'google/protobuf/timestamp.proto',
    'google/protobuf/type.proto',
    'google/protobuf/wrappers.proto'
]

CC_INCLUDE='third_party/protobuf/src'
PROTO_INCLUDE='third_party/protobuf/src'

PROTOBUF_SUBMODULE_VERSION="ec1a192689871dc63c83d7491e38c364c11b4527"
