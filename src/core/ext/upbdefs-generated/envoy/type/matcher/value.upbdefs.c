/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/value.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/type/matcher/value.upbdefs.h"
#include "envoy/type/matcher/value.upb.h"

extern upb_def_init envoy_type_matcher_number_proto_upbdefinit;
extern upb_def_init envoy_type_matcher_string_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
static const char descriptor[747] = {'\n', '\036', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'v', 'a', 'l', 'u', 
'e', '.', 'p', 'r', 'o', 't', 'o', '\022', '\022', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 
'e', 'r', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'n', 'u', 
'm', 'b', 'e', 'r', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 
't', 'c', 'h', 'e', 'r', '/', 's', 't', 'r', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 
'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', 
'\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', 
'\230', '\003', '\n', '\014', 'V', 'a', 'l', 'u', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', '\022', 'K', '\n', '\n', 'n', 'u', 'l', 'l', '_', 
'm', 'a', 't', 'c', 'h', '\030', '\001', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 
'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'V', 'a', 'l', 'u', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', '.', 'N', 'u', 'l', 'l', 
'M', 'a', 't', 'c', 'h', 'H', '\000', 'R', '\t', 'n', 'u', 'l', 'l', 'M', 'a', 't', 'c', 'h', '\022', 'F', '\n', '\014', 'd', 'o', 'u', 
'b', 'l', 'e', '_', 'm', 'a', 't', 'c', 'h', '\030', '\002', ' ', '\001', '(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 
'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'D', 'o', 'u', 'b', 'l', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', 
'H', '\000', 'R', '\013', 'd', 'o', 'u', 'b', 'l', 'e', 'M', 'a', 't', 'c', 'h', '\022', 'F', '\n', '\014', 's', 't', 'r', 'i', 'n', 'g', 
'_', 'm', 'a', 't', 'c', 'h', '\030', '\003', ' ', '\001', '(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', 
'.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'S', 't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'H', '\000', 'R', 
'\013', 's', 't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', '\022', '\037', '\n', '\n', 'b', 'o', 'o', 'l', '_', 'm', 'a', 't', 'c', 
'h', '\030', '\004', ' ', '\001', '(', '\010', 'H', '\000', 'R', '\t', 'b', 'o', 'o', 'l', 'M', 'a', 't', 'c', 'h', '\022', '%', '\n', '\r', 'p', 
'r', 'e', 's', 'e', 'n', 't', '_', 'm', 'a', 't', 'c', 'h', '\030', '\005', ' ', '\001', '(', '\010', 'H', '\000', 'R', '\014', 'p', 'r', 'e', 
's', 'e', 'n', 't', 'M', 'a', 't', 'c', 'h', '\022', '@', '\n', '\n', 'l', 'i', 's', 't', '_', 'm', 'a', 't', 'c', 'h', '\030', '\006', 
' ', '\001', '(', '\013', '2', '\037', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', 
'.', 'L', 'i', 's', 't', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'H', '\000', 'R', '\t', 'l', 'i', 's', 't', 'M', 'a', 't', 'c', 'h', 
'\032', '\013', '\n', '\t', 'N', 'u', 'l', 'l', 'M', 'a', 't', 'c', 'h', 'B', '\024', '\n', '\r', 'm', 'a', 't', 'c', 'h', '_', 'p', 'a', 
't', 't', 'e', 'r', 'n', '\022', '\003', '\370', 'B', '\001', '\"', '^', '\n', '\013', 'L', 'i', 's', 't', 'M', 'a', 't', 'c', 'h', 'e', 'r', 
'\022', '9', '\n', '\006', 'o', 'n', 'e', '_', 'o', 'f', '\030', '\001', ' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 
't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'V', 'a', 'l', 'u', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', 
'H', '\000', 'R', '\005', 'o', 'n', 'e', 'O', 'f', 'B', '\024', '\n', '\r', 'm', 'a', 't', 'c', 'h', '_', 'p', 'a', 't', 't', 'e', 'r', 
'n', '\022', '\003', '\370', 'B', '\001', 'B', '8', '\n', ' ', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 
'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', 'B', '\n', 'V', 'a', 'l', 'u', 'e', 'P', 
'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &envoy_type_matcher_number_proto_upbdefinit,
  &envoy_type_matcher_string_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_type_matcher_value_proto_upbdefinit = {
  deps,
  &envoy_type_matcher_value_proto_upb_file_layout,
  "envoy/type/matcher/value.proto",
  UPB_STRVIEW_INIT(descriptor, 747)
};
