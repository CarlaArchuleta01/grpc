/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/resource_name.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "xds/core/v3/resource_name.upb.h"
#include "xds/annotations/v3/status.upb.h"
#include "xds/core/v3/context_params.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub xds_core_v3_ResourceName_submsgs[1] = {
  {.submsg = &xds_core_v3_ContextParams_msg_init},
};

static const upb_MiniTable_Field xds_core_v3_ResourceName__fields[4] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(20, 40), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(28, 56), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_core_v3_ResourceName_msg_init = {
  &xds_core_v3_ResourceName_submsgs[0],
  &xds_core_v3_ResourceName__fields[0],
  UPB_SIZE(32, 64), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &xds_core_v3_ResourceName_msg_init,
};

const upb_MiniTable_File xds_core_v3_resource_name_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

