/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/status/v3/csds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "envoy/service/status/v3/csds.upb.h"
#include "envoy/admin/v3/config_dump_shared.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/type/matcher/v3/node.upb.h"
#include "google/api/annotations.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/timestamp.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_service_status_v3_ClientStatusRequest_submsgs[2] = {
  {.submsg = &envoy_type_matcher_v3_NodeMatcher_msg_init},
  {.submsg = &envoy_config_core_v3_Node_msg_init},
};

static const upb_MiniTable_Field envoy_service_status_v3_ClientStatusRequest__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_status_v3_ClientStatusRequest_msg_init = {
  &envoy_service_status_v3_ClientStatusRequest_submsgs[0],
  &envoy_service_status_v3_ClientStatusRequest__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_status_v3_PerXdsConfig_submsgs[5] = {
  {.submsg = &envoy_admin_v3_ListenersConfigDump_msg_init},
  {.submsg = &envoy_admin_v3_ClustersConfigDump_msg_init},
  {.submsg = &envoy_admin_v3_RoutesConfigDump_msg_init},
  {.submsg = &envoy_admin_v3_ScopedRoutesConfigDump_msg_init},
  {.submsg = &envoy_admin_v3_EndpointsConfigDump_msg_init},
};

static const upb_MiniTable_Field envoy_service_status_v3_PerXdsConfig__fields[7] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(12, 16), UPB_SIZE(-5, -5), 4, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(8, 8), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_status_v3_PerXdsConfig_msg_init = {
  &envoy_service_status_v3_PerXdsConfig_submsgs[0],
  &envoy_service_status_v3_PerXdsConfig__fields[0],
  UPB_SIZE(16, 24), 7, kUpb_ExtMode_NonExtendable, 7, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_status_v3_ClientConfig_submsgs[3] = {
  {.submsg = &envoy_config_core_v3_Node_msg_init},
  {.submsg = &envoy_service_status_v3_PerXdsConfig_msg_init},
  {.submsg = &envoy_service_status_v3_ClientConfig_GenericXdsConfig_msg_init},
};

static const upb_MiniTable_Field envoy_service_status_v3_ClientConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), 1, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), UPB_SIZE(0, 0), 2, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_status_v3_ClientConfig_msg_init = {
  &envoy_service_status_v3_ClientConfig_submsgs[0],
  &envoy_service_status_v3_ClientConfig__fields[0],
  UPB_SIZE(16, 32), 3, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_status_v3_ClientConfig_GenericXdsConfig_submsgs[3] = {
  {.submsg = &google_protobuf_Any_msg_init},
  {.submsg = &google_protobuf_Timestamp_msg_init},
  {.submsg = &envoy_admin_v3_UpdateFailureState_msg_init},
};

static const upb_MiniTable_Field envoy_service_status_v3_ClientConfig_GenericXdsConfig__fields[9] = {
  {1, UPB_SIZE(16, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(24, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(32, 48), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(40, 64), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(44, 72), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 4), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(8, 8), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(48, 80), UPB_SIZE(3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(12, 12), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_status_v3_ClientConfig_GenericXdsConfig_msg_init = {
  &envoy_service_status_v3_ClientConfig_GenericXdsConfig_submsgs[0],
  &envoy_service_status_v3_ClientConfig_GenericXdsConfig__fields[0],
  UPB_SIZE(56, 88), 9, kUpb_ExtMode_NonExtendable, 9, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_status_v3_ClientStatusResponse_submsgs[1] = {
  {.submsg = &envoy_service_status_v3_ClientConfig_msg_init},
};

static const upb_MiniTable_Field envoy_service_status_v3_ClientStatusResponse__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_status_v3_ClientStatusResponse_msg_init = {
  &envoy_service_status_v3_ClientStatusResponse_submsgs[0],
  &envoy_service_status_v3_ClientStatusResponse__fields[0],
  UPB_SIZE(8, 8), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[5] = {
  &envoy_service_status_v3_ClientStatusRequest_msg_init,
  &envoy_service_status_v3_PerXdsConfig_msg_init,
  &envoy_service_status_v3_ClientConfig_msg_init,
  &envoy_service_status_v3_ClientConfig_GenericXdsConfig_msg_init,
  &envoy_service_status_v3_ClientStatusResponse_msg_init,
};

const upb_MiniTable_File envoy_service_status_v3_csds_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  5,
  0,
  0,
};

#include "upb/port_undef.inc"

