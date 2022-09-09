/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/discovery/v3/discovery.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "envoy/service/discovery/v3/discovery.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/rpc/status.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_service_discovery_v3_ResourceLocator_submsgs[1] = {
  {.submsg = &envoy_service_discovery_v3_ResourceLocator_DynamicParametersEntry_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_ResourceLocator__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Map | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_ResourceLocator_msg_init = {
  &envoy_service_discovery_v3_ResourceLocator_submsgs[0],
  &envoy_service_discovery_v3_ResourceLocator__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Field envoy_service_discovery_v3_ResourceLocator_DynamicParametersEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_ResourceLocator_DynamicParametersEntry_msg_init = {
  NULL,
  &envoy_service_discovery_v3_ResourceLocator_DynamicParametersEntry__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_ResourceName_submsgs[1] = {
  {.submsg = &envoy_service_discovery_v3_DynamicParameterConstraints_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_ResourceName__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_ResourceName_msg_init = {
  &envoy_service_discovery_v3_ResourceName_submsgs[0],
  &envoy_service_discovery_v3_ResourceName__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_DiscoveryRequest_submsgs[3] = {
  {.submsg = &envoy_config_core_v3_Node_msg_init},
  {.submsg = &google_rpc_Status_msg_init},
  {.submsg = &envoy_service_discovery_v3_ResourceLocator_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DiscoveryRequest__fields[7] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(20, 40), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(28, 56), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(36, 72), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(40, 80), UPB_SIZE(0, 0), 2, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DiscoveryRequest_msg_init = {
  &envoy_service_discovery_v3_DiscoveryRequest_submsgs[0],
  &envoy_service_discovery_v3_DiscoveryRequest__fields[0],
  UPB_SIZE(48, 88), 7, kUpb_ExtMode_NonExtendable, 7, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_DiscoveryResponse_submsgs[2] = {
  {.submsg = &google_protobuf_Any_msg_init},
  {.submsg = &envoy_config_core_v3_ControlPlane_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DiscoveryResponse__fields[6] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(1, 1), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(24, 48), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(32, 64), UPB_SIZE(1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DiscoveryResponse_msg_init = {
  &envoy_service_discovery_v3_DiscoveryResponse_submsgs[0],
  &envoy_service_discovery_v3_DiscoveryResponse__fields[0],
  UPB_SIZE(40, 72), 6, kUpb_ExtMode_NonExtendable, 6, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_DeltaDiscoveryRequest_submsgs[5] = {
  {.submsg = &envoy_config_core_v3_Node_msg_init},
  {.submsg = &envoy_service_discovery_v3_DeltaDiscoveryRequest_InitialResourceVersionsEntry_msg_init},
  {.submsg = &google_rpc_Status_msg_init},
  {.submsg = &envoy_service_discovery_v3_ResourceLocator_msg_init},
  {.submsg = &envoy_service_discovery_v3_ResourceLocator_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DeltaDiscoveryRequest__fields[9] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(20, 40), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(24, 48), UPB_SIZE(0, 0), 1, 11, kUpb_FieldMode_Map | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(28, 56), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(36, 72), UPB_SIZE(2, 2), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(40, 80), UPB_SIZE(0, 0), 3, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(44, 88), UPB_SIZE(0, 0), 4, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DeltaDiscoveryRequest_msg_init = {
  &envoy_service_discovery_v3_DeltaDiscoveryRequest_submsgs[0],
  &envoy_service_discovery_v3_DeltaDiscoveryRequest__fields[0],
  UPB_SIZE(48, 96), 9, kUpb_ExtMode_NonExtendable, 9, 255, 0,
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DeltaDiscoveryRequest_InitialResourceVersionsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DeltaDiscoveryRequest_InitialResourceVersionsEntry_msg_init = {
  NULL,
  &envoy_service_discovery_v3_DeltaDiscoveryRequest_InitialResourceVersionsEntry__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_DeltaDiscoveryResponse_submsgs[3] = {
  {.submsg = &envoy_service_discovery_v3_Resource_msg_init},
  {.submsg = &envoy_config_core_v3_ControlPlane_msg_init},
  {.submsg = &envoy_service_discovery_v3_ResourceName_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DeltaDiscoveryResponse__fields[7] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(24, 48), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(32, 64), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(36, 72), UPB_SIZE(1, 1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(40, 80), UPB_SIZE(0, 0), 2, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DeltaDiscoveryResponse_msg_init = {
  &envoy_service_discovery_v3_DeltaDiscoveryResponse_submsgs[0],
  &envoy_service_discovery_v3_DeltaDiscoveryResponse__fields[0],
  UPB_SIZE(48, 88), 7, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_DynamicParameterConstraints_submsgs[4] = {
  {.submsg = &envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_msg_init},
  {.submsg = &envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList_msg_init},
  {.submsg = &envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList_msg_init},
  {.submsg = &envoy_service_discovery_v3_DynamicParameterConstraints_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DynamicParameterConstraints__fields[4] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DynamicParameterConstraints_msg_init = {
  &envoy_service_discovery_v3_DynamicParameterConstraints_submsgs[0],
  &envoy_service_discovery_v3_DynamicParameterConstraints__fields[0],
  UPB_SIZE(8, 16), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_submsgs[1] = {
  {.submsg = &envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_Exists_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint__fields[3] = {
  {1, UPB_SIZE(12, 24), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_msg_init = {
  &envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_submsgs[0],
  &envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint__fields[0],
  UPB_SIZE(24, 40), 3, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

const upb_MiniTable envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_Exists_msg_init = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList_submsgs[1] = {
  {.submsg = &envoy_service_discovery_v3_DynamicParameterConstraints_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList_msg_init = {
  &envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList_submsgs[0],
  &envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList__fields[0],
  UPB_SIZE(8, 8), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_discovery_v3_Resource_submsgs[4] = {
  {.submsg = &google_protobuf_Any_msg_init},
  {.submsg = &google_protobuf_Duration_msg_init},
  {.submsg = &envoy_service_discovery_v3_Resource_CacheControl_msg_init},
  {.submsg = &envoy_service_discovery_v3_ResourceName_msg_init},
};

static const upb_MiniTable_Field envoy_service_discovery_v3_Resource__fields[7] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(24, 48), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(28, 56), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(32, 64), UPB_SIZE(3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(36, 72), UPB_SIZE(4, 4), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_Resource_msg_init = {
  &envoy_service_discovery_v3_Resource_submsgs[0],
  &envoy_service_discovery_v3_Resource__fields[0],
  UPB_SIZE(40, 80), 7, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable_Field envoy_service_discovery_v3_Resource_CacheControl__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_discovery_v3_Resource_CacheControl_msg_init = {
  NULL,
  &envoy_service_discovery_v3_Resource_CacheControl__fields[0],
  UPB_SIZE(8, 8), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[14] = {
  &envoy_service_discovery_v3_ResourceLocator_msg_init,
  &envoy_service_discovery_v3_ResourceLocator_DynamicParametersEntry_msg_init,
  &envoy_service_discovery_v3_ResourceName_msg_init,
  &envoy_service_discovery_v3_DiscoveryRequest_msg_init,
  &envoy_service_discovery_v3_DiscoveryResponse_msg_init,
  &envoy_service_discovery_v3_DeltaDiscoveryRequest_msg_init,
  &envoy_service_discovery_v3_DeltaDiscoveryRequest_InitialResourceVersionsEntry_msg_init,
  &envoy_service_discovery_v3_DeltaDiscoveryResponse_msg_init,
  &envoy_service_discovery_v3_DynamicParameterConstraints_msg_init,
  &envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_msg_init,
  &envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_Exists_msg_init,
  &envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList_msg_init,
  &envoy_service_discovery_v3_Resource_msg_init,
  &envoy_service_discovery_v3_Resource_CacheControl_msg_init,
};

const upb_MiniTable_File envoy_service_discovery_v3_discovery_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  14,
  0,
  0,
};

#include "upb/port_undef.inc"

