/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/node.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/type/matcher/node.upbdefs.h"
#include "envoy/type/matcher/node.upb.h"

extern upb_def_init envoy_type_matcher_string_proto_upbdefinit;
extern upb_def_init envoy_type_matcher_struct_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
static const char descriptor[363] = {'\n', '\035', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'n', 'o', 'd', 'e', 
'.', 'p', 'r', 'o', 't', 'o', '\022', '\022', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 
'r', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 's', 't', 'r', 
'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 
'c', 'h', 'e', 'r', '/', 's', 't', 'r', 'u', 'c', 't', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 
'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\"', '\223', 
'\001', '\n', '\013', 'N', 'o', 'd', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', '\022', ':', '\n', '\007', 'n', 'o', 'd', 'e', '_', 'i', 'd', 
'\030', '\001', ' ', '\001', '(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 
'e', 'r', '.', 'S', 't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\006', 'n', 'o', 'd', 'e', 'I', 'd', '\022', 
'H', '\n', '\016', 'n', 'o', 'd', 'e', '_', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '!', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'S', 't', 'r', 'u', 'c', 
't', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\r', 'n', 'o', 'd', 'e', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 's', 'B', '7', 
'\n', ' ', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 
'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', 'B', '\t', 'N', 'o', 'd', 'e', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', 
'\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[4] = {
  &envoy_type_matcher_string_proto_upbdefinit,
  &envoy_type_matcher_struct_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  NULL
};

upb_def_init envoy_type_matcher_node_proto_upbdefinit = {
  deps,
  &envoy_type_matcher_node_proto_upb_file_layout,
  "envoy/type/matcher/node.proto",
  UPB_STRVIEW_INIT(descriptor, 363)
};
