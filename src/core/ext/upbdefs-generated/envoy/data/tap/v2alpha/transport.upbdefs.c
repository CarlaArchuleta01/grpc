/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/data/tap/v2alpha/transport.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/data/tap/v2alpha/transport.upbdefs.h"
#include "envoy/data/tap/v2alpha/transport.upb.h"

extern upb_def_init envoy_api_v2_core_address_proto_upbdefinit;
extern upb_def_init envoy_data_tap_v2alpha_common_proto_upbdefinit;
extern upb_def_init google_protobuf_timestamp_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
static const char descriptor[1336] = {'\n', '&', 'e', 'n', 'v', 'o', 'y', '/', 'd', 'a', 't', 'a', '/', 't', 'a', 'p', '/', 'v', '2', 'a', 'l', 'p', 'h', 'a', '/', 
't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '.', 'p', 'r', 'o', 't', 'o', '\022', '\026', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 
't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', 
'/', 'v', '2', '/', 'c', 'o', 'r', 'e', '/', 'a', 'd', 'd', 'r', 'e', 's', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '#', 'e', 
'n', 'v', 'o', 'y', '/', 'd', 'a', 't', 'a', '/', 't', 'a', 'p', '/', 'v', '2', 'a', 'l', 'p', 'h', 'a', '/', 'c', 'o', 'm', 
'm', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 
'f', '/', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 
'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\"', '\220', 
'\001', '\n', '\n', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '\022', '?', '\n', '\r', 'l', 'o', 'c', 'a', 'l', '_', 'a', 'd', 
'd', 'r', 'e', 's', 's', '\030', '\002', ' ', '\001', '(', '\013', '2', '\032', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', 
'2', '.', 'c', 'o', 'r', 'e', '.', 'A', 'd', 'd', 'r', 'e', 's', 's', 'R', '\014', 'l', 'o', 'c', 'a', 'l', 'A', 'd', 'd', 'r', 
'e', 's', 's', '\022', 'A', '\n', '\016', 'r', 'e', 'm', 'o', 't', 'e', '_', 'a', 'd', 'd', 'r', 'e', 's', 's', '\030', '\003', ' ', '\001', 
'(', '\013', '2', '\032', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'A', 'd', 
'd', 'r', 'e', 's', 's', 'R', '\r', 'r', 'e', 'm', 'o', 't', 'e', 'A', 'd', 'd', 'r', 'e', 's', 's', '\"', '\300', '\003', '\n', '\013', 
'S', 'o', 'c', 'k', 'e', 't', 'E', 'v', 'e', 'n', 't', '\022', '8', '\n', '\t', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '\030', 
'\001', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'T', 
'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 'R', '\t', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '\022', '>', '\n', '\004', 'r', 'e', 
'a', 'd', '\030', '\002', ' ', '\001', '(', '\013', '2', '(', '.', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', 
'.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'S', 'o', 'c', 'k', 'e', 't', 'E', 'v', 'e', 'n', 't', '.', 'R', 'e', 'a', 'd', 
'H', '\000', 'R', '\004', 'r', 'e', 'a', 'd', '\022', 'A', '\n', '\005', 'w', 'r', 'i', 't', 'e', '\030', '\003', ' ', '\001', '(', '\013', '2', ')', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'S', 
'o', 'c', 'k', 'e', 't', 'E', 'v', 'e', 'n', 't', '.', 'W', 'r', 'i', 't', 'e', 'H', '\000', 'R', '\005', 'w', 'r', 'i', 't', 'e', 
'\022', 'D', '\n', '\006', 'c', 'l', 'o', 's', 'e', 'd', '\030', '\004', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 
'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'S', 'o', 'c', 'k', 'e', 't', 'E', 'v', 
'e', 'n', 't', '.', 'C', 'l', 'o', 's', 'e', 'd', 'H', '\000', 'R', '\006', 'c', 'l', 'o', 's', 'e', 'd', '\032', '8', '\n', '\004', 'R', 
'e', 'a', 'd', '\022', '0', '\n', '\004', 'd', 'a', 't', 'a', '\030', '\001', ' ', '\001', '(', '\013', '2', '\034', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'B', 'o', 'd', 'y', 'R', '\004', 'd', 
'a', 't', 'a', '\032', 'X', '\n', '\005', 'W', 'r', 'i', 't', 'e', '\022', '0', '\n', '\004', 'd', 'a', 't', 'a', '\030', '\001', ' ', '\001', '(', 
'\013', '2', '\034', '.', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 
'a', '.', 'B', 'o', 'd', 'y', 'R', '\004', 'd', 'a', 't', 'a', '\022', '\035', '\n', '\n', 'e', 'n', 'd', '_', 's', 't', 'r', 'e', 'a', 
'm', '\030', '\002', ' ', '\001', '(', '\010', 'R', '\t', 'e', 'n', 'd', 'S', 't', 'r', 'e', 'a', 'm', '\032', '\010', '\n', '\006', 'C', 'l', 'o', 
's', 'e', 'd', 'B', '\020', '\n', '\016', 'e', 'v', 'e', 'n', 't', '_', 's', 'e', 'l', 'e', 'c', 't', 'o', 'r', '\"', '\201', '\002', '\n', 
'\023', 'S', 'o', 'c', 'k', 'e', 't', 'B', 'u', 'f', 'f', 'e', 'r', 'e', 'd', 'T', 'r', 'a', 'c', 'e', '\022', '\031', '\n', '\010', 't', 
'r', 'a', 'c', 'e', '_', 'i', 'd', '\030', '\001', ' ', '\001', '(', '\004', 'R', '\007', 't', 'r', 'a', 'c', 'e', 'I', 'd', '\022', 'B', '\n', 
'\n', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'C', 'o', 'n', 'n', 'e', 'c', 't', 
'i', 'o', 'n', 'R', '\n', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '\022', ';', '\n', '\006', 'e', 'v', 'e', 'n', 't', 's', 
'\030', '\003', ' ', '\003', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', 
'2', 'a', 'l', 'p', 'h', 'a', '.', 'S', 'o', 'c', 'k', 'e', 't', 'E', 'v', 'e', 'n', 't', 'R', '\006', 'e', 'v', 'e', 'n', 't', 
's', '\022', '%', '\n', '\016', 'r', 'e', 'a', 'd', '_', 't', 'r', 'u', 'n', 'c', 'a', 't', 'e', 'd', '\030', '\004', ' ', '\001', '(', '\010', 
'R', '\r', 'r', 'e', 'a', 'd', 'T', 'r', 'u', 'n', 'c', 'a', 't', 'e', 'd', '\022', '\'', '\n', '\017', 'w', 'r', 'i', 't', 'e', '_', 
't', 'r', 'u', 'n', 'c', 'a', 't', 'e', 'd', '\030', '\005', ' ', '\001', '(', '\010', 'R', '\016', 'w', 'r', 'i', 't', 'e', 'T', 'r', 'u', 
'n', 'c', 'a', 't', 'e', 'd', '\"', '\313', '\001', '\n', '\032', 'S', 'o', 'c', 'k', 'e', 't', 'S', 't', 'r', 'e', 'a', 'm', 'e', 'd', 
'T', 'r', 'a', 'c', 'e', 'S', 'e', 'g', 'm', 'e', 'n', 't', '\022', '\031', '\n', '\010', 't', 'r', 'a', 'c', 'e', '_', 'i', 'd', '\030', 
'\001', ' ', '\001', '(', '\004', 'R', '\007', 't', 'r', 'a', 'c', 'e', 'I', 'd', '\022', 'D', '\n', '\n', 'c', 'o', 'n', 'n', 'e', 'c', 't', 
'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 't', 'a', '.', 't', 'a', 
'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'H', '\000', 'R', '\n', 'c', 
'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '\022', ';', '\n', '\005', 'e', 'v', 'e', 'n', 't', '\030', '\003', ' ', '\001', '(', '\013', '2', 
'#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 
'S', 'o', 'c', 'k', 'e', 't', 'E', 'v', 'e', 'n', 't', 'H', '\000', 'R', '\005', 'e', 'v', 'e', 'n', 't', 'B', '\017', '\n', '\r', 'm', 
'e', 's', 's', 'a', 'g', 'e', '_', 'p', 'i', 'e', 'c', 'e', 'B', '@', '\n', '$', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 
'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'd', 'a', 't', 'a', '.', 't', 'a', 'p', '.', 'v', '2', 'a', 'l', 'p', 
'h', 'a', 'B', '\016', 'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', 
'\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &envoy_api_v2_core_address_proto_upbdefinit,
  &envoy_data_tap_v2alpha_common_proto_upbdefinit,
  &google_protobuf_timestamp_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  NULL
};

upb_def_init envoy_data_tap_v2alpha_transport_proto_upbdefinit = {
  deps,
  &envoy_data_tap_v2alpha_transport_proto_upb_file_layout,
  "envoy/data/tap/v2alpha/transport.proto",
  UPB_STRVIEW_INIT(descriptor, 1336)
};
