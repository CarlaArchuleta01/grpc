/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v2alpha/xray.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/trace/v2alpha/xray.upbdefs.h"
#include "envoy/config/trace/v2alpha/xray.upb.h"

extern upb_def_init envoy_api_v2_core_address_proto_upbdefinit;
extern upb_def_init envoy_api_v2_core_base_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
static const char descriptor[478] = {'\n', '%', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 't', 'r', 'a', 'c', 'e', '/', 'v', '2', 'a', 'l', 
'p', 'h', 'a', '/', 'x', 'r', 'a', 'y', '.', 'p', 'r', 'o', 't', 'o', '\022', '\032', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 
'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 
'a', 'p', 'i', '/', 'v', '2', '/', 'c', 'o', 'r', 'e', '/', 'a', 'd', 'd', 'r', 'e', 's', 's', '.', 'p', 'r', 'o', 't', 'o', 
'\032', '\034', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'c', 'o', 'r', 'e', '/', 'b', 'a', 's', 'e', '.', 
'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 
't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 
'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\330', '\001', '\n', '\n', 'X', 'R', 'a', 'y', 'C', 'o', 'n', 'f', 'i', 
'g', '\022', 'I', '\n', '\017', 'd', 'a', 'e', 'm', 'o', 'n', '_', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '\030', '\001', ' ', '\001', '(', 
'\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'S', 'o', 'c', 
'k', 'e', 't', 'A', 'd', 'd', 'r', 'e', 's', 's', 'R', '\016', 'd', 'a', 'e', 'm', 'o', 'n', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 
't', '\022', '*', '\n', '\014', 's', 'e', 'g', 'm', 'e', 'n', 't', '_', 'n', 'a', 'm', 'e', '\030', '\002', ' ', '\001', '(', '\t', 'B', '\007', 
'\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\013', 's', 'e', 'g', 'm', 'e', 'n', 't', 'N', 'a', 'm', 'e', '\022', 'S', '\n', '\026', 's', 
'a', 'm', 'p', 'l', 'i', 'n', 'g', '_', 'r', 'u', 'l', 'e', '_', 'm', 'a', 'n', 'i', 'f', 'e', 's', 't', '\030', '\003', ' ', '\001', 
'(', '\013', '2', '\035', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'D', 'a', 
't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'R', '\024', 's', 'a', 'm', 'p', 'l', 'i', 'n', 'g', 'R', 'u', 'l', 'e', 'M', 'a', 'n', 
'i', 'f', 'e', 's', 't', 'B', '?', '\n', '(', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 
'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', 'B', 
'\t', 'X', 'r', 'a', 'y', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 
't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &envoy_api_v2_core_address_proto_upbdefinit,
  &envoy_api_v2_core_base_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_trace_v2alpha_xray_proto_upbdefinit = {
  deps,
  &envoy_config_trace_v2alpha_xray_proto_upb_file_layout,
  "envoy/config/trace/v2alpha/xray.proto",
  UPB_STRVIEW_INIT(descriptor, 478)
};
