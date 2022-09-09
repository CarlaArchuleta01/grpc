/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/config_source.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/config_source.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/grpc_service.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "xds/core/v3/authority.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_core_v3_ApiConfigSource_submsgs[5] = {
  {.submsg = &google_protobuf_Duration_msg_init},
  {.submsg = &envoy_config_core_v3_GrpcService_msg_init},
  {.submsg = &google_protobuf_Duration_msg_init},
  {.submsg = &envoy_config_core_v3_RateLimitSettings_msg_init},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msg_init},
};

static const upb_MiniTable_Field envoy_config_core_v3_ApiConfigSource__fields[9] = {
  {1, UPB_SIZE(4, 4), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(20, 24), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(24, 32), UPB_SIZE(0, 0), 1, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(28, 40), UPB_SIZE(2, 2), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(32, 48), UPB_SIZE(3, 3), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(8, 8), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(12, 12), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(36, 56), UPB_SIZE(0, 0), 4, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_ApiConfigSource_msg_init = {
  &envoy_config_core_v3_ApiConfigSource_submsgs[0],
  &envoy_config_core_v3_ApiConfigSource__fields[0],
  UPB_SIZE(40, 64), 9, kUpb_ExtMode_NonExtendable, 9, 255, 0,
};

const upb_MiniTable envoy_config_core_v3_AggregatedConfigSource_msg_init = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_SelfConfigSource__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_SelfConfigSource_msg_init = {
  NULL,
  &envoy_config_core_v3_SelfConfigSource__fields[0],
  UPB_SIZE(8, 8), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_RateLimitSettings_submsgs[2] = {
  {.submsg = &google_protobuf_UInt32Value_msg_init},
  {.submsg = &google_protobuf_DoubleValue_msg_init},
};

static const upb_MiniTable_Field envoy_config_core_v3_RateLimitSettings__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_RateLimitSettings_msg_init = {
  &envoy_config_core_v3_RateLimitSettings_submsgs[0],
  &envoy_config_core_v3_RateLimitSettings__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_PathConfigSource_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_WatchedDirectory_msg_init},
};

static const upb_MiniTable_Field envoy_config_core_v3_PathConfigSource__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_PathConfigSource_msg_init = {
  &envoy_config_core_v3_PathConfigSource_submsgs[0],
  &envoy_config_core_v3_PathConfigSource__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_ConfigSource_submsgs[6] = {
  {.submsg = &envoy_config_core_v3_ApiConfigSource_msg_init},
  {.submsg = &envoy_config_core_v3_AggregatedConfigSource_msg_init},
  {.submsg = &google_protobuf_Duration_msg_init},
  {.submsg = &envoy_config_core_v3_SelfConfigSource_msg_init},
  {.submsg = &xds_core_v3_Authority_msg_init},
  {.submsg = &envoy_config_core_v3_PathConfigSource_msg_init},
};

static const upb_MiniTable_Field envoy_config_core_v3_ConfigSource__fields[8] = {
  {1, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(20, 32), UPB_SIZE(1, 1), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(8, 8), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(24, 40), UPB_SIZE(0, 0), 4, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 5, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_ConfigSource_msg_init = {
  &envoy_config_core_v3_ConfigSource_submsgs[0],
  &envoy_config_core_v3_ConfigSource__fields[0],
  UPB_SIZE(32, 48), 8, kUpb_ExtMode_NonExtendable, 8, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_ExtensionConfigSource_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msg_init},
  {.submsg = &google_protobuf_Any_msg_init},
};

static const upb_MiniTable_Field envoy_config_core_v3_ExtensionConfigSource__fields[4] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(1, 1), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 24), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_ExtensionConfigSource_msg_init = {
  &envoy_config_core_v3_ExtensionConfigSource_submsgs[0],
  &envoy_config_core_v3_ExtensionConfigSource__fields[0],
  UPB_SIZE(16, 32), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable *messages_layout[7] = {
  &envoy_config_core_v3_ApiConfigSource_msg_init,
  &envoy_config_core_v3_AggregatedConfigSource_msg_init,
  &envoy_config_core_v3_SelfConfigSource_msg_init,
  &envoy_config_core_v3_RateLimitSettings_msg_init,
  &envoy_config_core_v3_PathConfigSource_msg_init,
  &envoy_config_core_v3_ConfigSource_msg_init,
  &envoy_config_core_v3_ExtensionConfigSource_msg_init,
};

const upb_MiniTable_File envoy_config_core_v3_config_source_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  7,
  0,
  0,
};

#include "upb/port_undef.inc"

