/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/string.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/type/matcher/string.upb.h"
#include "envoy/type/matcher/regex.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_type_matcher_StringMatcher_submsgs[1] = {
  {.submsg = &envoy_type_matcher_RegexMatcher_msginit},
};

static const upb_msglayout_field envoy_type_matcher_StringMatcher__fields[6] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(0, 0), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_type_matcher_StringMatcher_msginit = {
  &envoy_type_matcher_StringMatcher_submsgs[0],
  &envoy_type_matcher_StringMatcher__fields[0],
  UPB_SIZE(16, 32), 6, _UPB_MSGEXT_NONE, 6, 255,
};

static const upb_msglayout_sub envoy_type_matcher_ListStringMatcher_submsgs[1] = {
  {.submsg = &envoy_type_matcher_StringMatcher_msginit},
};

static const upb_msglayout_field envoy_type_matcher_ListStringMatcher__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_type_matcher_ListStringMatcher_msginit = {
  &envoy_type_matcher_ListStringMatcher_submsgs[0],
  &envoy_type_matcher_ListStringMatcher__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout *messages_layout[2] = {
  &envoy_type_matcher_StringMatcher_msginit,
  &envoy_type_matcher_ListStringMatcher_msginit,
};

const upb_msglayout_file envoy_type_matcher_string_proto_upb_file_layout = {
  messages_layout,
  NULL,
  2,
  0,
};

#include "upb/port_undef.inc"

