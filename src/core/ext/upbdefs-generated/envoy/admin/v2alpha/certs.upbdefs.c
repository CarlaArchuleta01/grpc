/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v2alpha/certs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/admin/v2alpha/certs.upbdefs.h"
#include "envoy/admin/v2alpha/certs.upb.h"

extern upb_def_init google_protobuf_timestamp_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
static const char descriptor[877] = {'\n', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'd', 'm', 'i', 'n', '/', 'v', '2', 'a', 'l', 'p', 'h', 'a', '/', 'c', 'e', 'r', 
't', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\023', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 
'l', 'p', 'h', 'a', '\032', '\037', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 't', 'i', 'm', 
'e', 's', 't', 'a', 'm', 'p', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 
't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\"', 'T', '\n', '\014', 'C', 'e', 'r', 
't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 's', '\022', 'D', '\n', '\014', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 's', 
'\030', '\001', ' ', '\003', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 
'p', 'h', 'a', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'R', '\014', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 
'a', 't', 'e', 's', '\"', '\227', '\001', '\n', '\013', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '\022', '@', '\n', '\007', 'c', 
'a', '_', 'c', 'e', 'r', 't', '\030', '\001', ' ', '\003', '(', '\013', '2', '\'', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 
'n', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'D', 'e', 't', 'a', 
'i', 'l', 's', 'R', '\006', 'c', 'a', 'C', 'e', 'r', 't', '\022', 'F', '\n', '\n', 'c', 'e', 'r', 't', '_', 'c', 'h', 'a', 'i', 'n', 
'\030', '\002', ' ', '\003', '(', '\013', '2', '\'', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 
'p', 'h', 'a', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'D', 'e', 't', 'a', 'i', 'l', 's', 'R', '\t', 'c', 
'e', 'r', 't', 'C', 'h', 'a', 'i', 'n', '\"', '\330', '\002', '\n', '\022', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'D', 
'e', 't', 'a', 'i', 'l', 's', '\022', '\022', '\n', '\004', 'p', 'a', 't', 'h', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\004', 'p', 'a', 't', 
'h', '\022', '#', '\n', '\r', 's', 'e', 'r', 'i', 'a', 'l', '_', 'n', 'u', 'm', 'b', 'e', 'r', '\030', '\002', ' ', '\001', '(', '\t', 'R', 
'\014', 's', 'e', 'r', 'i', 'a', 'l', 'N', 'u', 'm', 'b', 'e', 'r', '\022', 'U', '\n', '\021', 's', 'u', 'b', 'j', 'e', 'c', 't', '_', 
'a', 'l', 't', '_', 'n', 'a', 'm', 'e', 's', '\030', '\003', ' ', '\003', '(', '\013', '2', ')', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 
'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'e', 'r', 
'n', 'a', 't', 'e', 'N', 'a', 'm', 'e', 'R', '\017', 's', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'N', 'a', 'm', 'e', 's', 
'\022', '2', '\n', '\025', 'd', 'a', 'y', 's', '_', 'u', 'n', 't', 'i', 'l', '_', 'e', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', 
'\030', '\004', ' ', '\001', '(', '\004', 'R', '\023', 'd', 'a', 'y', 's', 'U', 'n', 't', 'i', 'l', 'E', 'x', 'p', 'i', 'r', 'a', 't', 'i', 
'o', 'n', '\022', '9', '\n', '\n', 'v', 'a', 'l', 'i', 'd', '_', 'f', 'r', 'o', 'm', '\030', '\005', ' ', '\001', '(', '\013', '2', '\032', '.', 
'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 
'R', '\t', 'v', 'a', 'l', 'i', 'd', 'F', 'r', 'o', 'm', '\022', 'C', '\n', '\017', 'e', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', 
'_', 't', 'i', 'm', 'e', '\030', '\006', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 
'o', 'b', 'u', 'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 'R', '\016', 'e', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 
'n', 'T', 'i', 'm', 'e', '\"', 'g', '\n', '\024', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'e', 'r', 'n', 'a', 't', 'e', 
'N', 'a', 'm', 'e', '\022', '\022', '\n', '\003', 'd', 'n', 's', '\030', '\001', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\003', 'd', 'n', 's', '\022', 
'\022', '\n', '\003', 'u', 'r', 'i', '\030', '\002', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\003', 'u', 'r', 'i', '\022', '\037', '\n', '\n', 'i', 'p', 
'_', 'a', 'd', 'd', 'r', 'e', 's', 's', '\030', '\003', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\t', 'i', 'p', 'A', 'd', 'd', 'r', 'e', 
's', 's', 'B', '\006', '\n', '\004', 'n', 'a', 'm', 'e', 'B', '9', '\n', '!', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 
'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', 'B', '\n', 'C', 
'e', 'r', 't', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 
'o', '3', 
};

static upb_def_init *deps[3] = {
  &google_protobuf_timestamp_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  NULL
};

upb_def_init envoy_admin_v2alpha_certs_proto_upbdefinit = {
  deps,
  &envoy_admin_v2alpha_certs_proto_upb_file_layout,
  "envoy/admin/v2alpha/certs.proto",
  UPB_STRVIEW_INIT(descriptor, 877)
};
