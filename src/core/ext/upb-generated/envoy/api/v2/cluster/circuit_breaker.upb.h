/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/cluster/circuit_breaker.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CLUSTER_CIRCUIT_BREAKER_PROTO_UPB_H_
#define ENVOY_API_V2_CLUSTER_CIRCUIT_BREAKER_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_cluster_CircuitBreakers;
struct envoy_api_v2_cluster_CircuitBreakers_Thresholds;
struct envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget;
typedef struct envoy_api_v2_cluster_CircuitBreakers envoy_api_v2_cluster_CircuitBreakers;
typedef struct envoy_api_v2_cluster_CircuitBreakers_Thresholds envoy_api_v2_cluster_CircuitBreakers_Thresholds;
typedef struct envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget;
extern const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_msginit;
extern const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit;
extern const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit;
struct envoy_type_Percent;
struct google_protobuf_UInt32Value;
extern const upb_msglayout envoy_type_Percent_msginit;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;


/* envoy.api.v2.cluster.CircuitBreakers */

UPB_INLINE envoy_api_v2_cluster_CircuitBreakers *envoy_api_v2_cluster_CircuitBreakers_new(upb_arena *arena) {
  return (envoy_api_v2_cluster_CircuitBreakers *)_upb_msg_new(&envoy_api_v2_cluster_CircuitBreakers_msginit, arena);
}
UPB_INLINE envoy_api_v2_cluster_CircuitBreakers *envoy_api_v2_cluster_CircuitBreakers_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_cluster_CircuitBreakers *ret = envoy_api_v2_cluster_CircuitBreakers_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_api_v2_cluster_CircuitBreakers_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_api_v2_cluster_CircuitBreakers *envoy_api_v2_cluster_CircuitBreakers_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_api_v2_cluster_CircuitBreakers *ret = envoy_api_v2_cluster_CircuitBreakers_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_api_v2_cluster_CircuitBreakers_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_api_v2_cluster_CircuitBreakers_serialize(const envoy_api_v2_cluster_CircuitBreakers *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_cluster_CircuitBreakers_msginit, arena, len);
}

UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_has_thresholds(const envoy_api_v2_cluster_CircuitBreakers *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_api_v2_cluster_CircuitBreakers_Thresholds* const* envoy_api_v2_cluster_CircuitBreakers_thresholds(const envoy_api_v2_cluster_CircuitBreakers *msg, size_t *len) { return (const envoy_api_v2_cluster_CircuitBreakers_Thresholds* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds** envoy_api_v2_cluster_CircuitBreakers_mutable_thresholds(envoy_api_v2_cluster_CircuitBreakers *msg, size_t *len) {
  return (envoy_api_v2_cluster_CircuitBreakers_Thresholds**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds** envoy_api_v2_cluster_CircuitBreakers_resize_thresholds(envoy_api_v2_cluster_CircuitBreakers *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_cluster_CircuitBreakers_Thresholds**)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_api_v2_cluster_CircuitBreakers_Thresholds* envoy_api_v2_cluster_CircuitBreakers_add_thresholds(envoy_api_v2_cluster_CircuitBreakers *msg, upb_arena *arena) {
  struct envoy_api_v2_cluster_CircuitBreakers_Thresholds* sub = (struct envoy_api_v2_cluster_CircuitBreakers_Thresholds*)_upb_msg_new(&envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.api.v2.cluster.CircuitBreakers.Thresholds */

UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds *envoy_api_v2_cluster_CircuitBreakers_Thresholds_new(upb_arena *arena) {
  return (envoy_api_v2_cluster_CircuitBreakers_Thresholds *)_upb_msg_new(&envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit, arena);
}
UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds *envoy_api_v2_cluster_CircuitBreakers_Thresholds_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_cluster_CircuitBreakers_Thresholds *ret = envoy_api_v2_cluster_CircuitBreakers_Thresholds_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds *envoy_api_v2_cluster_CircuitBreakers_Thresholds_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_api_v2_cluster_CircuitBreakers_Thresholds *ret = envoy_api_v2_cluster_CircuitBreakers_Thresholds_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_api_v2_cluster_CircuitBreakers_Thresholds_serialize(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit, arena, len);
}

UPB_INLINE int32_t envoy_api_v2_cluster_CircuitBreakers_Thresholds_priority(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_has_max_connections(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_connections(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 16), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_has_max_pending_requests(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_pending_requests(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 24), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_has_max_requests(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return _upb_hasbit(msg, 3); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_requests(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(20, 32), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_has_max_retries(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return _upb_hasbit(msg, 4); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_retries(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(24, 40), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_track_remaining(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_has_max_connection_pools(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return _upb_hasbit(msg, 5); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_connection_pools(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(28, 48), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_has_retry_budget(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return _upb_hasbit(msg, 6); }
UPB_INLINE const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget* envoy_api_v2_cluster_CircuitBreakers_Thresholds_retry_budget(const envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(32, 56), const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget*); }

UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_priority(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = value;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_connections(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 16), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_mutable_max_connections(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_connections(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_connections(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_pending_requests(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_mutable_max_pending_requests(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_pending_requests(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_pending_requests(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_requests(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(20, 32), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_mutable_max_requests(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_requests(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_requests(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_retries(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 4);
  *UPB_PTR_AT(msg, UPB_SIZE(24, 40), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_mutable_max_retries(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_retries(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_retries(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_track_remaining(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool) = value;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_connection_pools(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 5);
  *UPB_PTR_AT(msg, UPB_SIZE(28, 48), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_mutable_max_connection_pools(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_max_connection_pools(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_max_connection_pools(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_retry_budget(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget* value) {
  _upb_sethas(msg, 6);
  *UPB_PTR_AT(msg, UPB_SIZE(32, 56), envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget*) = value;
}
UPB_INLINE struct envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget* envoy_api_v2_cluster_CircuitBreakers_Thresholds_mutable_retry_budget(envoy_api_v2_cluster_CircuitBreakers_Thresholds *msg, upb_arena *arena) {
  struct envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget* sub = (struct envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_retry_budget(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget*)_upb_msg_new(&envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_set_retry_budget(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.cluster.CircuitBreakers.Thresholds.RetryBudget */

UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_new(upb_arena *arena) {
  return (envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *)_upb_msg_new(&envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit, arena);
}
UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *ret = envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *ret = envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_serialize(const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit, arena, len);
}

UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_has_budget_percent(const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_type_Percent* envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_budget_percent(const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_type_Percent*); }
UPB_INLINE bool envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_has_min_retry_concurrency(const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_min_retry_concurrency(const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct google_protobuf_UInt32Value*); }

UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_set_budget_percent(envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg, struct envoy_type_Percent* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_type_Percent*) = value;
}
UPB_INLINE struct envoy_type_Percent* envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_mutable_budget_percent(envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg, upb_arena *arena) {
  struct envoy_type_Percent* sub = (struct envoy_type_Percent*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_budget_percent(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_Percent*)_upb_msg_new(&envoy_type_Percent_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_set_budget_percent(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_set_min_retry_concurrency(envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_mutable_min_retry_concurrency(envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_min_retry_concurrency(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_set_min_retry_concurrency(msg, sub);
  }
  return sub;
}

extern const upb_msglayout_file envoy_api_v2_cluster_circuit_breaker_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CLUSTER_CIRCUIT_BREAKER_PROTO_UPB_H_ */
