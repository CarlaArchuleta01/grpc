/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/metrics.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/admin/v3/metrics.upbdefs.h"
#include "envoy/admin/v3/metrics.upb.h"

extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
static const char descriptor[363] = {'\n', '\034', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'd', 'm', 'i', 'n', '/', 'v', '3', '/', 'm', 'e', 't', 'r', 'i', 'c', 's', '.', 
'p', 'r', 'o', 't', 'o', '\022', '\016', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '\032', '\035', 'u', 'd', 
'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 
't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 
'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\"', '\270', '\001', '\n', '\014', 'S', 'i', 'm', 'p', 'l', 'e', 'M', 'e', 
't', 'r', 'i', 'c', '\022', '5', '\n', '\004', 't', 'y', 'p', 'e', '\030', '\001', ' ', '\001', '(', '\016', '2', '!', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'S', 'i', 'm', 'p', 'l', 'e', 'M', 'e', 't', 'r', 'i', 'c', '.', 'T', 
'y', 'p', 'e', 'R', '\004', 't', 'y', 'p', 'e', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\004', 'R', 
'\005', 'v', 'a', 'l', 'u', 'e', '\022', '\022', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\003', ' ', '\001', '(', '\t', 'R', '\004', 'n', 'a', 'm', 
'e', '\"', '\036', '\n', '\004', 'T', 'y', 'p', 'e', '\022', '\013', '\n', '\007', 'C', 'O', 'U', 'N', 'T', 'E', 'R', '\020', '\000', '\022', '\t', '\n', 
'\005', 'G', 'A', 'U', 'G', 'E', '\020', '\001', ':', '\'', '\232', '\305', '\210', '\036', '\"', '\n', ' ', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 
'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'S', 'i', 'm', 'p', 'l', 'e', 'M', 'e', 't', 'r', 'i', 'c', 'B', 
'6', '\n', '\034', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 
'm', 'i', 'n', '.', 'v', '3', 'B', '\014', 'M', 'e', 't', 'r', 'i', 'c', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', 
'\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[3] = {
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  NULL
};

upb_def_init envoy_admin_v3_metrics_proto_upbdefinit = {
  deps,
  &envoy_admin_v3_metrics_proto_upb_file_layout,
  "envoy/admin/v3/metrics.proto",
  UPB_STRVIEW_INIT(descriptor, 363)
};
