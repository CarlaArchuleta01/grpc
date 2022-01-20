/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/address.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/api/v2/core/address.upb.h"
#include "envoy/api/v2/core/socket_option.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_field envoy_api_v2_core_Pipe__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), 0, 0, 13, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_Pipe_msginit = {
  NULL,
  &envoy_api_v2_core_Pipe__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_field envoy_api_v2_core_SocketAddress__fields[6] = {
  {1, UPB_SIZE(0, 0), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(24, 40), UPB_SIZE(-33, -57), 0, 13, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(24, 40), UPB_SIZE(-33, -57), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(16, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(4, 4), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_SocketAddress_msginit = {
  NULL,
  &envoy_api_v2_core_SocketAddress__fields[0],
  UPB_SIZE(40, 64), 6, _UPB_MSGEXT_NONE, 6, 255,
};

static const upb_msglayout_sub envoy_api_v2_core_TcpKeepalive_submsgs[1] = {
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_api_v2_core_TcpKeepalive__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 24), 3, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_TcpKeepalive_msginit = {
  &envoy_api_v2_core_TcpKeepalive_submsgs[0],
  &envoy_api_v2_core_TcpKeepalive__fields[0],
  UPB_SIZE(16, 32), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_api_v2_core_BindConfig_submsgs[3] = {
  {.submsg = &envoy_api_v2_core_SocketAddress_msginit},
  {.submsg = &envoy_api_v2_core_SocketOption_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_msglayout_field envoy_api_v2_core_BindConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 24), 0, 1, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_BindConfig_msginit = {
  &envoy_api_v2_core_BindConfig_submsgs[0],
  &envoy_api_v2_core_BindConfig__fields[0],
  UPB_SIZE(16, 32), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_api_v2_core_Address_submsgs[2] = {
  {.submsg = &envoy_api_v2_core_Pipe_msginit},
  {.submsg = &envoy_api_v2_core_SocketAddress_msginit},
};

static const upb_msglayout_field envoy_api_v2_core_Address__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_Address_msginit = {
  &envoy_api_v2_core_Address_submsgs[0],
  &envoy_api_v2_core_Address__fields[0],
  UPB_SIZE(8, 16), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_api_v2_core_CidrRange_submsgs[1] = {
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_api_v2_core_CidrRange__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_api_v2_core_CidrRange_msginit = {
  &envoy_api_v2_core_CidrRange_submsgs[0],
  &envoy_api_v2_core_CidrRange__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout *messages_layout[6] = {
  &envoy_api_v2_core_Pipe_msginit,
  &envoy_api_v2_core_SocketAddress_msginit,
  &envoy_api_v2_core_TcpKeepalive_msginit,
  &envoy_api_v2_core_BindConfig_msginit,
  &envoy_api_v2_core_Address_msginit,
  &envoy_api_v2_core_CidrRange_msginit,
};

const upb_msglayout_file envoy_api_v2_core_address_proto_upb_file_layout = {
  messages_layout,
  NULL,
  6,
  0,
};

#include "upb/port_undef.inc"

