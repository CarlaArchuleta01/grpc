/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/node.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/type/matcher/node.upb.h"
#include "envoy/type/matcher/string.upb.h"
#include "envoy/type/matcher/struct.upb.h"
#include "udpa/annotations/status.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_type_matcher_NodeMatcher_submsgs[2] = {
  {.submsg = &envoy_type_matcher_StringMatcher_msginit},
  {.submsg = &envoy_type_matcher_StructMatcher_msginit},
};

static const upb_msglayout_field envoy_type_matcher_NodeMatcher__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 1, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_type_matcher_NodeMatcher_msginit = {
  &envoy_type_matcher_NodeMatcher_submsgs[0],
  &envoy_type_matcher_NodeMatcher__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout *messages_layout[1] = {
  &envoy_type_matcher_NodeMatcher_msginit,
};

const upb_msglayout_file envoy_type_matcher_node_proto_upb_file_layout = {
  messages_layout,
  NULL,
  1,
  0,
};

#include "upb/port_undef.inc"

