/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/config_source.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/api/v2/core/config_source.upb.h"
#include "envoy/api/v2/core/grpc_service.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_api_v2_core_ApiConfigSource_submsgs[3] = {
  {.submsg = &envoy_api_v2_core_GrpcService_msginit},
  {.submsg = &envoy_api_v2_core_RateLimitSettings_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_msglayout_field envoy_api_v2_core_ApiConfigSource__fields[8] = {
  {1, UPB_SIZE(4, 4), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(28, 40), 0, 0, 9, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(16, 16), 1, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(32, 48), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(20, 24), 2, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(24, 32), 3, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(12, 12), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {8, UPB_SIZE(8, 8), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_ApiConfigSource_msginit = {
  &envoy_api_v2_core_ApiConfigSource_submsgs[0],
  &envoy_api_v2_core_ApiConfigSource__fields[0],
  UPB_SIZE(40, 56), 8, _UPB_MSGEXT_NONE, 8, 255,
};

const upb_msglayout envoy_api_v2_core_AggregatedConfigSource_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, _UPB_MSGEXT_NONE, 0, 255,
};

static const upb_msglayout_field envoy_api_v2_core_SelfConfigSource__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_SelfConfigSource_msginit = {
  NULL,
  &envoy_api_v2_core_SelfConfigSource__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_api_v2_core_RateLimitSettings_submsgs[2] = {
  {.submsg = &google_protobuf_DoubleValue_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_api_v2_core_RateLimitSettings__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_RateLimitSettings_msginit = {
  &envoy_api_v2_core_RateLimitSettings_submsgs[0],
  &envoy_api_v2_core_RateLimitSettings__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_api_v2_core_ConfigSource_submsgs[4] = {
  {.submsg = &envoy_api_v2_core_AggregatedConfigSource_msginit},
  {.submsg = &envoy_api_v2_core_ApiConfigSource_msginit},
  {.submsg = &envoy_api_v2_core_SelfConfigSource_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_msglayout_field envoy_api_v2_core_ConfigSource__fields[6] = {
  {1, UPB_SIZE(12, 16), UPB_SIZE(-21, -33), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 16), UPB_SIZE(-21, -33), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 16), UPB_SIZE(-21, -33), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(8, 8), 1, 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(12, 16), UPB_SIZE(-21, -33), 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(4, 4), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_ConfigSource_msginit = {
  &envoy_api_v2_core_ConfigSource_submsgs[0],
  &envoy_api_v2_core_ConfigSource__fields[0],
  UPB_SIZE(24, 48), 6, _UPB_MSGEXT_NONE, 6, 255,
};

static const upb_msglayout *messages_layout[5] = {
  &envoy_api_v2_core_ApiConfigSource_msginit,
  &envoy_api_v2_core_AggregatedConfigSource_msginit,
  &envoy_api_v2_core_SelfConfigSource_msginit,
  &envoy_api_v2_core_RateLimitSettings_msginit,
  &envoy_api_v2_core_ConfigSource_msginit,
};

const upb_msglayout_file envoy_api_v2_core_config_source_proto_upb_file_layout = {
  messages_layout,
  NULL,
  5,
  0,
};

#include "upb/port_undef.inc"

