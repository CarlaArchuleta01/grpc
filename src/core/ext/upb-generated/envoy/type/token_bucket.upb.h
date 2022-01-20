/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/token_bucket.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_TOKEN_BUCKET_PROTO_UPB_H_
#define ENVOY_TYPE_TOKEN_BUCKET_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_TokenBucket;
typedef struct envoy_type_TokenBucket envoy_type_TokenBucket;
extern const upb_msglayout envoy_type_TokenBucket_msginit;
struct google_protobuf_Duration;
struct google_protobuf_UInt32Value;
extern const upb_msglayout google_protobuf_Duration_msginit;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;


/* envoy.type.TokenBucket */

UPB_INLINE envoy_type_TokenBucket *envoy_type_TokenBucket_new(upb_arena *arena) {
  return (envoy_type_TokenBucket *)_upb_msg_new(&envoy_type_TokenBucket_msginit, arena);
}
UPB_INLINE envoy_type_TokenBucket *envoy_type_TokenBucket_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_TokenBucket *ret = envoy_type_TokenBucket_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_TokenBucket_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_TokenBucket *envoy_type_TokenBucket_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_TokenBucket *ret = envoy_type_TokenBucket_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_TokenBucket_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_TokenBucket_serialize(const envoy_type_TokenBucket *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_TokenBucket_msginit, arena, len);
}

UPB_INLINE uint32_t envoy_type_TokenBucket_max_tokens(const envoy_type_TokenBucket *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t); }
UPB_INLINE bool envoy_type_TokenBucket_has_tokens_per_fill(const envoy_type_TokenBucket *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_type_TokenBucket_tokens_per_fill(const envoy_type_TokenBucket *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_type_TokenBucket_has_fill_interval(const envoy_type_TokenBucket *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct google_protobuf_Duration* envoy_type_TokenBucket_fill_interval(const envoy_type_TokenBucket *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 16), const struct google_protobuf_Duration*); }

UPB_INLINE void envoy_type_TokenBucket_set_max_tokens(envoy_type_TokenBucket *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t) = value;
}
UPB_INLINE void envoy_type_TokenBucket_set_tokens_per_fill(envoy_type_TokenBucket *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_type_TokenBucket_mutable_tokens_per_fill(envoy_type_TokenBucket *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_type_TokenBucket_tokens_per_fill(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_type_TokenBucket_set_tokens_per_fill(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_TokenBucket_set_fill_interval(envoy_type_TokenBucket *msg, struct google_protobuf_Duration* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 16), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_type_TokenBucket_mutable_fill_interval(envoy_type_TokenBucket *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_type_TokenBucket_fill_interval(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_type_TokenBucket_set_fill_interval(msg, sub);
  }
  return sub;
}

extern const upb_msglayout_file envoy_type_token_bucket_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_TOKEN_BUCKET_PROTO_UPB_H_ */
