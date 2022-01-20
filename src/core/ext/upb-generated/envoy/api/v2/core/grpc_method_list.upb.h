/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/grpc_method_list.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CORE_GRPC_METHOD_LIST_PROTO_UPB_H_
#define ENVOY_API_V2_CORE_GRPC_METHOD_LIST_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_core_GrpcMethodList;
struct envoy_api_v2_core_GrpcMethodList_Service;
typedef struct envoy_api_v2_core_GrpcMethodList envoy_api_v2_core_GrpcMethodList;
typedef struct envoy_api_v2_core_GrpcMethodList_Service envoy_api_v2_core_GrpcMethodList_Service;
extern const upb_msglayout envoy_api_v2_core_GrpcMethodList_msginit;
extern const upb_msglayout envoy_api_v2_core_GrpcMethodList_Service_msginit;


/* envoy.api.v2.core.GrpcMethodList */

UPB_INLINE envoy_api_v2_core_GrpcMethodList *envoy_api_v2_core_GrpcMethodList_new(upb_arena *arena) {
  return (envoy_api_v2_core_GrpcMethodList *)_upb_msg_new(&envoy_api_v2_core_GrpcMethodList_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_GrpcMethodList *envoy_api_v2_core_GrpcMethodList_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_GrpcMethodList *ret = envoy_api_v2_core_GrpcMethodList_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_api_v2_core_GrpcMethodList_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_api_v2_core_GrpcMethodList *envoy_api_v2_core_GrpcMethodList_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_api_v2_core_GrpcMethodList *ret = envoy_api_v2_core_GrpcMethodList_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_api_v2_core_GrpcMethodList_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_api_v2_core_GrpcMethodList_serialize(const envoy_api_v2_core_GrpcMethodList *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_GrpcMethodList_msginit, arena, len);
}

UPB_INLINE bool envoy_api_v2_core_GrpcMethodList_has_services(const envoy_api_v2_core_GrpcMethodList *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_api_v2_core_GrpcMethodList_Service* const* envoy_api_v2_core_GrpcMethodList_services(const envoy_api_v2_core_GrpcMethodList *msg, size_t *len) { return (const envoy_api_v2_core_GrpcMethodList_Service* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_api_v2_core_GrpcMethodList_Service** envoy_api_v2_core_GrpcMethodList_mutable_services(envoy_api_v2_core_GrpcMethodList *msg, size_t *len) {
  return (envoy_api_v2_core_GrpcMethodList_Service**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_api_v2_core_GrpcMethodList_Service** envoy_api_v2_core_GrpcMethodList_resize_services(envoy_api_v2_core_GrpcMethodList *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_core_GrpcMethodList_Service**)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_api_v2_core_GrpcMethodList_Service* envoy_api_v2_core_GrpcMethodList_add_services(envoy_api_v2_core_GrpcMethodList *msg, upb_arena *arena) {
  struct envoy_api_v2_core_GrpcMethodList_Service* sub = (struct envoy_api_v2_core_GrpcMethodList_Service*)_upb_msg_new(&envoy_api_v2_core_GrpcMethodList_Service_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.api.v2.core.GrpcMethodList.Service */

UPB_INLINE envoy_api_v2_core_GrpcMethodList_Service *envoy_api_v2_core_GrpcMethodList_Service_new(upb_arena *arena) {
  return (envoy_api_v2_core_GrpcMethodList_Service *)_upb_msg_new(&envoy_api_v2_core_GrpcMethodList_Service_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_GrpcMethodList_Service *envoy_api_v2_core_GrpcMethodList_Service_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_GrpcMethodList_Service *ret = envoy_api_v2_core_GrpcMethodList_Service_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_api_v2_core_GrpcMethodList_Service_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_api_v2_core_GrpcMethodList_Service *envoy_api_v2_core_GrpcMethodList_Service_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_api_v2_core_GrpcMethodList_Service *ret = envoy_api_v2_core_GrpcMethodList_Service_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_api_v2_core_GrpcMethodList_Service_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_api_v2_core_GrpcMethodList_Service_serialize(const envoy_api_v2_core_GrpcMethodList_Service *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_GrpcMethodList_Service_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_core_GrpcMethodList_Service_name(const envoy_api_v2_core_GrpcMethodList_Service *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview const* envoy_api_v2_core_GrpcMethodList_Service_method_names(const envoy_api_v2_core_GrpcMethodList_Service *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }

UPB_INLINE void envoy_api_v2_core_GrpcMethodList_Service_set_name(envoy_api_v2_core_GrpcMethodList_Service *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE upb_strview* envoy_api_v2_core_GrpcMethodList_Service_mutable_method_names(envoy_api_v2_core_GrpcMethodList_Service *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE upb_strview* envoy_api_v2_core_GrpcMethodList_Service_resize_method_names(envoy_api_v2_core_GrpcMethodList_Service *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_api_v2_core_GrpcMethodList_Service_add_method_names(envoy_api_v2_core_GrpcMethodList_Service *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor2(msg, UPB_SIZE(8, 16), UPB_SIZE(3, 4), &val,
      arena);
}

extern const upb_msglayout_file envoy_api_v2_core_grpc_method_list_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CORE_GRPC_METHOD_LIST_PROTO_UPB_H_ */
