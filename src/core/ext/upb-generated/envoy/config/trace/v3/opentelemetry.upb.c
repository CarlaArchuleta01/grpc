/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v3/opentelemetry.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "envoy/config/trace/v3/opentelemetry.upb.h"
#include "envoy/config/core/v3/grpc_service.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_trace_v3_OpenTelemetryConfig_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_GrpcService_msg_init},
};

static const upb_MiniTable_Field envoy_config_trace_v3_OpenTelemetryConfig__fields[1] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_trace_v3_OpenTelemetryConfig_msg_init = {
  &envoy_config_trace_v3_OpenTelemetryConfig_submsgs[0],
  &envoy_config_trace_v3_OpenTelemetryConfig__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy_config_trace_v3_OpenTelemetryConfig_msg_init,
};

const upb_MiniTable_File envoy_config_trace_v3_opentelemetry_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

