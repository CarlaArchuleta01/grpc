/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/context_params.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "xds/core/v3/context_params.upb.h"
#include "xds/annotations/v3/status.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub xds_core_v3_ContextParams_submsgs[1] = {
  {.submsg = &xds_core_v3_ContextParams_ParamsEntry_msg_init},
};

static const upb_MiniTable_Field xds_core_v3_ContextParams__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Map | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_core_v3_ContextParams_msg_init = {
  &xds_core_v3_ContextParams_submsgs[0],
  &xds_core_v3_ContextParams__fields[0],
  UPB_SIZE(8, 8), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field xds_core_v3_ContextParams_ParamsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds_core_v3_ContextParams_ParamsEntry_msg_init = {
  NULL,
  &xds_core_v3_ContextParams_ParamsEntry__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &xds_core_v3_ContextParams_msg_init,
  &xds_core_v3_ContextParams_ParamsEntry_msg_init,
};

const upb_MiniTable_File xds_core_v3_context_params_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

