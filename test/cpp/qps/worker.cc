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

#include <signal.h>

#include <chrono>
#include <thread>
#include <vector>

#include <gflags/gflags.h>
#include <grpc/grpc.h>
#include <grpc/support/time.h>

#include "test/cpp/qps/qps_worker.h"
#include "test/cpp/util/test_config.h"
#include "test/cpp/util/test_credentials_provider.h"

DEFINE_int32(driver_port, 0, "Port for communication with driver");
DEFINE_int32(server_port, 0, "Port for operation as a server");
DEFINE_string(credential_type, grpc::testing::kInsecureCredentialsType,
              "Credential type for communication with driver");
DEFINE_string(driver_port_result_path, "",
              "Path for the file to have a driver port once it starts to "
              "listen with the port. It is for external runners to know "
              "the real port when driver_port is specified 0 meaning that "
              "the port will be determined later."
              "This path must be accessible from the worker.");

static bool got_sigint = false;

static void sigint_handler(int /*x*/) { got_sigint = true; }

namespace grpc {
namespace testing {

std::vector<grpc::testing::Server*>* g_inproc_servers = nullptr;

static void RunServer() {
  QpsWorker worker(FLAGS_driver_port, FLAGS_server_port, FLAGS_credential_type,
                   FLAGS_driver_port_result_path);

  while (!got_sigint && !worker.Done()) {
    gpr_sleep_until(gpr_time_add(gpr_now(GPR_CLOCK_REALTIME),
                                 gpr_time_from_seconds(5, GPR_TIMESPAN)));
  }
}

}  // namespace testing
}  // namespace grpc

int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);

  signal(SIGINT, sigint_handler);

  grpc::testing::RunServer();

  return 0;
}
