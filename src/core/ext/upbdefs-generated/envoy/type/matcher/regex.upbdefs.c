/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/regex.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/type/matcher/regex.upbdefs.h"
#include "envoy/type/matcher/regex.upb.h"

extern upb_def_init google_protobuf_wrappers_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
static const char descriptor[573] = {'\n', '\036', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'r', 'e', 'g', 'e', 
'x', '.', 'p', 'r', 'o', 't', 'o', '\022', '\022', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 
'e', 'r', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'w', 'r', 'a', 'p', 'p', 
'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 
'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', 
'/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\361', '\001', '\n', '\014', 'R', 'e', 'g', 'e', 'x', 
'M', 'a', 't', 'c', 'h', 'e', 'r', '\022', 'U', '\n', '\n', 'g', 'o', 'o', 'g', 'l', 'e', '_', 'r', 'e', '2', '\030', '\001', ' ', '\001', 
'(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'R', 
'e', 'g', 'e', 'x', 'M', 'a', 't', 'c', 'h', 'e', 'r', '.', 'G', 'o', 'o', 'g', 'l', 'e', 'R', 'E', '2', 'B', '\010', '\372', 'B', 
'\005', '\212', '\001', '\002', '\020', '\001', 'H', '\000', 'R', '\t', 'g', 'o', 'o', 'g', 'l', 'e', 'R', 'e', '2', '\022', '\035', '\n', '\005', 'r', 'e', 
'g', 'e', 'x', '\030', '\002', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\005', 'r', 'e', 'g', 'e', 'x', 
'\032', 'W', '\n', '\t', 'G', 'o', 'o', 'g', 'l', 'e', 'R', 'E', '2', '\022', 'J', '\n', '\020', 'm', 'a', 'x', '_', 'p', 'r', 'o', 'g', 
'r', 'a', 'm', '_', 's', 'i', 'z', 'e', '\030', '\001', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 
'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\002', '\030', '\001', 'R', '\016', 
'm', 'a', 'x', 'P', 'r', 'o', 'g', 'r', 'a', 'm', 'S', 'i', 'z', 'e', 'B', '\022', '\n', '\013', 'e', 'n', 'g', 'i', 'n', 'e', '_', 
't', 'y', 'p', 'e', '\022', '\003', '\370', 'B', '\001', '\"', 'y', '\n', '\027', 'R', 'e', 'g', 'e', 'x', 'M', 'a', 't', 'c', 'h', 'A', 'n', 
'd', 'S', 'u', 'b', 's', 't', 'i', 't', 'u', 't', 'e', '\022', ':', '\n', '\007', 'p', 'a', 't', 't', 'e', 'r', 'n', '\030', '\001', ' ', 
'\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 
'R', 'e', 'g', 'e', 'x', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\007', 'p', 'a', 't', 't', 'e', 'r', 'n', '\022', '\"', '\n', '\014', 
's', 'u', 'b', 's', 't', 'i', 't', 'u', 't', 'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\t', 'R', '\014', 's', 'u', 'b', 's', 't', 
'i', 't', 'u', 't', 'i', 'o', 'n', 'B', '8', '\n', ' ', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 
'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', 'B', '\n', 'R', 'e', 'g', 'e', 'x', 
'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[4] = {
  &google_protobuf_wrappers_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_type_matcher_regex_proto_upbdefinit = {
  deps,
  &envoy_type_matcher_regex_proto_upb_file_layout,
  "envoy/type/matcher/regex.proto",
  UPB_STRVIEW_INIT(descriptor, 573)
};
