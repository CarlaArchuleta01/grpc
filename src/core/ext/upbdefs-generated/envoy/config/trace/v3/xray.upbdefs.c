/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v3/xray.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/trace/v3/xray.upbdefs.h"
#include "envoy/config/trace/v3/xray.upb.h"

extern upb_def_init envoy_config_core_v3_address_proto_upbdefinit;
extern upb_def_init envoy_config_core_v3_base_proto_upbdefinit;
extern upb_def_init google_protobuf_struct_proto_upbdefinit;
extern upb_def_init udpa_annotations_migrate_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
static const char descriptor[835] = {'\n', ' ', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 't', 'r', 'a', 'c', 'e', '/', 'v', '3', '/', 'x', 
'r', 'a', 'y', '.', 'p', 'r', 'o', 't', 'o', '\022', '\025', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 
'r', 'a', 'c', 'e', '.', 'v', '3', '\032', '\"', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 
'e', '/', 'v', '3', '/', 'a', 'd', 'd', 'r', 'e', 's', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'e', 'n', 'v', 'o', 'y', 
'/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 'o', 't', 
'o', '\032', '\034', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 's', 't', 'r', 'u', 'c', 't', 
'.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 
'm', 'i', 'g', 'r', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 
'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', 
'/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 
'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 
'r', 'o', 't', 'o', '\"', '\270', '\003', '\n', '\n', 'X', 'R', 'a', 'y', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'L', '\n', '\017', 'd', 'a', 
'e', 'm', 'o', 'n', '_', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '\030', '\001', ' ', '\001', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'S', 'o', 'c', 'k', 'e', 't', 'A', 
'd', 'd', 'r', 'e', 's', 's', 'R', '\016', 'd', 'a', 'e', 'm', 'o', 'n', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', '\022', '*', '\n', 
'\014', 's', 'e', 'g', 'm', 'e', 'n', 't', '_', 'n', 'a', 'm', 'e', '\030', '\002', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', 
'\002', '\020', '\001', 'R', '\013', 's', 'e', 'g', 'm', 'e', 'n', 't', 'N', 'a', 'm', 'e', '\022', 'V', '\n', '\026', 's', 'a', 'm', 'p', 'l', 
'i', 'n', 'g', '_', 'r', 'u', 'l', 'e', '_', 'm', 'a', 'n', 'i', 'f', 'e', 's', 't', '\030', '\003', ' ', '\001', '(', '\013', '2', ' ', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 
'a', 'S', 'o', 'u', 'r', 'c', 'e', 'R', '\024', 's', 'a', 'm', 'p', 'l', 'i', 'n', 'g', 'R', 'u', 'l', 'e', 'M', 'a', 'n', 'i', 
'f', 'e', 's', 't', '\022', 'V', '\n', '\016', 's', 'e', 'g', 'm', 'e', 'n', 't', '_', 'f', 'i', 'e', 'l', 'd', 's', '\030', '\004', ' ', 
'\001', '(', '\013', '2', '/', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 
'v', '3', '.', 'X', 'R', 'a', 'y', 'C', 'o', 'n', 'f', 'i', 'g', '.', 'S', 'e', 'g', 'm', 'e', 'n', 't', 'F', 'i', 'e', 'l', 
'd', 's', 'R', '\r', 's', 'e', 'g', 'm', 'e', 'n', 't', 'F', 'i', 'e', 'l', 'd', 's', '\032', 'R', '\n', '\r', 'S', 'e', 'g', 'm', 
'e', 'n', 't', 'F', 'i', 'e', 'l', 'd', 's', '\022', '\026', '\n', '\006', 'o', 'r', 'i', 'g', 'i', 'n', '\030', '\001', ' ', '\001', '(', '\t', 
'R', '\006', 'o', 'r', 'i', 'g', 'i', 'n', '\022', ')', '\n', '\003', 'a', 'w', 's', '\030', '\002', ' ', '\001', '(', '\013', '2', '\027', '.', 'g', 
'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'S', 't', 'r', 'u', 'c', 't', 'R', '\003', 'a', 'w', 
's', ':', ',', '\232', '\305', '\210', '\036', '\'', '\n', '%', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 
'a', 'c', 'e', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'X', 'R', 'a', 'y', 'C', 'o', 'n', 'f', 'i', 'g', 'B', 'g', '\n', 
'#', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 
'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 'v', '3', 'B', '\t', 'X', 'r', 'a', 'y', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\362', 
'\230', '\376', '\217', '\005', '\'', '\022', '%', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 
'r', 'a', 'c', 'e', 'r', 's', '.', 'x', 'r', 'a', 'y', '.', 'v', '4', 'a', 'l', 'p', 'h', 'a', '\272', '\200', '\310', '\321', '\006', '\002', 
'\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[8] = {
  &envoy_config_core_v3_address_proto_upbdefinit,
  &envoy_config_core_v3_base_proto_upbdefinit,
  &google_protobuf_struct_proto_upbdefinit,
  &udpa_annotations_migrate_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_trace_v3_xray_proto_upbdefinit = {
  deps,
  &envoy_config_trace_v3_xray_proto_upb_file_layout,
  "envoy/config/trace/v3/xray.proto",
  UPB_STRVIEW_INIT(descriptor, 835)
};
