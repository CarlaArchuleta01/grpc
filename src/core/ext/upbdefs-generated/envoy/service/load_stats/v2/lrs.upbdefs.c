/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/load_stats/v2/lrs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/service/load_stats/v2/lrs.upbdefs.h"
#include "envoy/service/load_stats/v2/lrs.upb.h"

extern upb_def_init envoy_api_v2_core_base_proto_upbdefinit;
extern upb_def_init envoy_api_v2_endpoint_load_report_proto_upbdefinit;
extern upb_def_init google_protobuf_duration_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
static const char descriptor[804] = {'\n', '%', 'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 'v', 'i', 'c', 'e', '/', 'l', 'o', 'a', 'd', '_', 's', 't', 'a', 't', 
's', '/', 'v', '2', '/', 'l', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\033', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 
'v', 'i', 'c', 'e', '.', 'l', 'o', 'a', 'd', '_', 's', 't', 'a', 't', 's', '.', 'v', '2', '\032', '\034', 'e', 'n', 'v', 'o', 'y', 
'/', 'a', 'p', 'i', '/', 'v', '2', '/', 'c', 'o', 'r', 'e', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\'', 
'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '/', 'l', 'o', 'a', 
'd', '_', 'r', 'e', 'p', 'o', 'r', 't', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 
'o', 't', 'o', 'b', 'u', 'f', '/', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 
'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 
't', 'o', '\"', '\211', '\001', '\n', '\020', 'L', 'o', 'a', 'd', 'S', 't', 'a', 't', 's', 'R', 'e', 'q', 'u', 'e', 's', 't', '\022', '+', 
'\n', '\004', 'n', 'o', 'd', 'e', '\030', '\001', ' ', '\001', '(', '\013', '2', '\027', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 
'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'N', 'o', 'd', 'e', 'R', '\004', 'n', 'o', 'd', 'e', '\022', 'H', '\n', '\r', 'c', 'l', 'u', 
's', 't', 'e', 'r', '_', 's', 't', 'a', 't', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 
'a', 'p', 'i', '.', 'v', '2', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'C', 'l', 'u', 's', 't', 'e', 'r', 'S', 't', 
'a', 't', 's', 'R', '\014', 'c', 'l', 'u', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 's', '\"', '\356', '\001', '\n', '\021', 'L', 'o', 'a', 
'd', 'S', 't', 'a', 't', 's', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\022', '\032', '\n', '\010', 'c', 'l', 'u', 's', 't', 'e', 'r', 
's', '\030', '\001', ' ', '\003', '(', '\t', 'R', '\010', 'c', 'l', 'u', 's', 't', 'e', 'r', 's', '\022', '*', '\n', '\021', 's', 'e', 'n', 'd', 
'_', 'a', 'l', 'l', '_', 'c', 'l', 'u', 's', 't', 'e', 'r', 's', '\030', '\004', ' ', '\001', '(', '\010', 'R', '\017', 's', 'e', 'n', 'd', 
'A', 'l', 'l', 'C', 'l', 'u', 's', 't', 'e', 'r', 's', '\022', 'Q', '\n', '\027', 'l', 'o', 'a', 'd', '_', 'r', 'e', 'p', 'o', 'r', 
't', 'i', 'n', 'g', '_', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\030', '\002', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'R', '\025', 'l', 'o', 
'a', 'd', 'R', 'e', 'p', 'o', 'r', 't', 'i', 'n', 'g', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\022', '>', '\n', '\033', 'r', 'e', 
'p', 'o', 'r', 't', '_', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '_', 'g', 'r', 'a', 'n', 'u', 'l', 'a', 'r', 'i', 't', 'y', 
'\030', '\003', ' ', '\001', '(', '\010', 'R', '\031', 'r', 'e', 'p', 'o', 'r', 't', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'G', 'r', 'a', 
'n', 'u', 'l', 'a', 'r', 'i', 't', 'y', '2', '\216', '\001', '\n', '\024', 'L', 'o', 'a', 'd', 'R', 'e', 'p', 'o', 'r', 't', 'i', 'n', 
'g', 'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', 'v', '\n', '\017', 'S', 't', 'r', 'e', 'a', 'm', 'L', 'o', 'a', 'd', 'S', 't', 'a', 
't', 's', '\022', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'l', 'o', 'a', 'd', '_', 's', 
't', 'a', 't', 's', '.', 'v', '2', '.', 'L', 'o', 'a', 'd', 'S', 't', 'a', 't', 's', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', 
'.', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'l', 'o', 'a', 'd', '_', 's', 't', 'a', 't', 
's', '.', 'v', '2', '.', 'L', 'o', 'a', 'd', 'S', 't', 'a', 't', 's', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', 
'\001', '0', '\001', 'B', 'B', '\n', ')', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 
'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'l', 'o', 'a', 'd', '_', 's', 't', 'a', 't', 's', '.', 'v', '2', 'B', '\010', 
'L', 'r', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\210', '\001', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 
'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &envoy_api_v2_core_base_proto_upbdefinit,
  &envoy_api_v2_endpoint_load_report_proto_upbdefinit,
  &google_protobuf_duration_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  NULL
};

upb_def_init envoy_service_load_stats_v2_lrs_proto_upbdefinit = {
  deps,
  &envoy_service_load_stats_v2_lrs_proto_upb_file_layout,
  "envoy/service/load_stats/v2/lrs.proto",
  UPB_STRVIEW_INIT(descriptor, 804)
};
