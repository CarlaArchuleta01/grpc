/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/discovery/v2/rtds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/service/discovery/v2/rtds.upbdefs.h"
#include "envoy/service/discovery/v2/rtds.upb.h"

extern upb_def_init envoy_api_v2_discovery_proto_upbdefinit;
extern upb_def_init google_api_annotations_proto_upbdefinit;
extern upb_def_init google_protobuf_struct_proto_upbdefinit;
extern upb_def_init envoy_annotations_resource_proto_upbdefinit;
extern upb_def_init udpa_annotations_migrate_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
static const char descriptor[865] = {'\n', '%', 'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 'v', 'i', 'c', 'e', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 
'/', 'v', '2', '/', 'r', 't', 'd', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\032', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 
'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '2', '\032', '\034', 'e', 'n', 'v', 'o', 'y', '/', 
'a', 'p', 'i', '/', 'v', '2', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\034', 'g', 
'o', 'o', 'g', 'l', 'e', '/', 'a', 'p', 'i', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\034', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 's', 't', 'r', 'u', 'c', 
't', '.', 'p', 'r', 'o', 't', 'o', '\032', ' ', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 
's', '/', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'u', 'd', 'p', 'a', '/', 'a', 'n', 
'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'm', 'i', 'g', 'r', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 
'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 
'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 
'r', 'o', 't', 'o', '\"', '\013', '\n', '\t', 'R', 't', 'd', 's', 'D', 'u', 'm', 'm', 'y', '\"', 'U', '\n', '\007', 'R', 'u', 'n', 't', 
'i', 'm', 'e', '\022', '\033', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', ' ', 
'\001', 'R', '\004', 'n', 'a', 'm', 'e', '\022', '-', '\n', '\005', 'l', 'a', 'y', 'e', 'r', '\030', '\002', ' ', '\001', '(', '\013', '2', '\027', '.', 
'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'S', 't', 'r', 'u', 'c', 't', 'R', '\005', 'l', 
'a', 'y', 'e', 'r', '2', '\367', '\002', '\n', '\027', 'R', 'u', 'n', 't', 'i', 'm', 'e', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 
'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', 'V', '\n', '\r', 'S', 't', 'r', 'e', 'a', 'm', 'R', 'u', 'n', 't', 'i', 'm', 'e', '\022', 
'\036', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 
'e', 'q', 'u', 'e', 's', 't', '\032', '\037', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'i', 's', 
'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\022', '_', '\n', '\014', 'D', 
'e', 'l', 't', 'a', 'R', 'u', 'n', 't', 'i', 'm', 'e', '\022', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', 
'2', '.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '$', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 'v', 
'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\022', 'w', '\n', '\014', 'F', 'e', 't', 'c', 
'h', 'R', 'u', 'n', 't', 'i', 'm', 'e', '\022', '\036', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 
'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '\037', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 
'p', 'i', '.', 'v', '2', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '&', 
'\202', '\323', '\344', '\223', '\002', '\027', '\"', '\025', '/', 'v', '2', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', ':', 'r', 'u', 'n', 
't', 'i', 'm', 'e', '\202', '\323', '\344', '\223', '\002', '\003', ':', '\001', '*', '\032', '*', '\212', '\244', '\226', '\363', '\007', '$', '\n', '\"', 'e', 'n', 
'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '2', '.', 
'R', 'u', 'n', 't', 'i', 'm', 'e', 'B', 'b', '\n', '(', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 
'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', 
'2', 'B', '\t', 'R', 't', 'd', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\210', '\001', '\001', '\362', '\230', '\376', '\217', '\005', '\032', '\022', '\030', 
'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'r', 'u', 'n', 't', 'i', 'm', 'e', '.', 'v', '3', '\272', 
'\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[8] = {
  &envoy_api_v2_discovery_proto_upbdefinit,
  &google_api_annotations_proto_upbdefinit,
  &google_protobuf_struct_proto_upbdefinit,
  &envoy_annotations_resource_proto_upbdefinit,
  &udpa_annotations_migrate_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_service_discovery_v2_rtds_proto_upbdefinit = {
  deps,
  &envoy_service_discovery_v2_rtds_proto_upb_file_layout,
  "envoy/service/discovery/v2/rtds.proto",
  UPB_STRVIEW_INIT(descriptor, 865)
};
