/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/load_stats/v2/lrs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_SERVICE_LOAD_STATS_V2_LRS_PROTO_UPB_H_
#define ENVOY_SERVICE_LOAD_STATS_V2_LRS_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_service_load_stats_v2_LoadStatsRequest;
struct envoy_service_load_stats_v2_LoadStatsResponse;
typedef struct envoy_service_load_stats_v2_LoadStatsRequest envoy_service_load_stats_v2_LoadStatsRequest;
typedef struct envoy_service_load_stats_v2_LoadStatsResponse envoy_service_load_stats_v2_LoadStatsResponse;
extern const upb_msglayout envoy_service_load_stats_v2_LoadStatsRequest_msginit;
extern const upb_msglayout envoy_service_load_stats_v2_LoadStatsResponse_msginit;
struct envoy_api_v2_core_Node;
struct envoy_api_v2_endpoint_ClusterStats;
struct google_protobuf_Duration;
extern const upb_msglayout envoy_api_v2_core_Node_msginit;
extern const upb_msglayout envoy_api_v2_endpoint_ClusterStats_msginit;
extern const upb_msglayout google_protobuf_Duration_msginit;


/* envoy.service.load_stats.v2.LoadStatsRequest */

UPB_INLINE envoy_service_load_stats_v2_LoadStatsRequest *envoy_service_load_stats_v2_LoadStatsRequest_new(upb_arena *arena) {
  return (envoy_service_load_stats_v2_LoadStatsRequest *)_upb_msg_new(&envoy_service_load_stats_v2_LoadStatsRequest_msginit, arena);
}
UPB_INLINE envoy_service_load_stats_v2_LoadStatsRequest *envoy_service_load_stats_v2_LoadStatsRequest_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_load_stats_v2_LoadStatsRequest *ret = envoy_service_load_stats_v2_LoadStatsRequest_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_load_stats_v2_LoadStatsRequest_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_load_stats_v2_LoadStatsRequest *envoy_service_load_stats_v2_LoadStatsRequest_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_load_stats_v2_LoadStatsRequest *ret = envoy_service_load_stats_v2_LoadStatsRequest_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_load_stats_v2_LoadStatsRequest_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_load_stats_v2_LoadStatsRequest_serialize(const envoy_service_load_stats_v2_LoadStatsRequest *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_load_stats_v2_LoadStatsRequest_msginit, arena, len);
}

UPB_INLINE bool envoy_service_load_stats_v2_LoadStatsRequest_has_node(const envoy_service_load_stats_v2_LoadStatsRequest *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_api_v2_core_Node* envoy_service_load_stats_v2_LoadStatsRequest_node(const envoy_service_load_stats_v2_LoadStatsRequest *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_api_v2_core_Node*); }
UPB_INLINE bool envoy_service_load_stats_v2_LoadStatsRequest_has_cluster_stats(const envoy_service_load_stats_v2_LoadStatsRequest *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_api_v2_endpoint_ClusterStats* const* envoy_service_load_stats_v2_LoadStatsRequest_cluster_stats(const envoy_service_load_stats_v2_LoadStatsRequest *msg, size_t *len) { return (const struct envoy_api_v2_endpoint_ClusterStats* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }

UPB_INLINE void envoy_service_load_stats_v2_LoadStatsRequest_set_node(envoy_service_load_stats_v2_LoadStatsRequest *msg, struct envoy_api_v2_core_Node* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_api_v2_core_Node*) = value;
}
UPB_INLINE struct envoy_api_v2_core_Node* envoy_service_load_stats_v2_LoadStatsRequest_mutable_node(envoy_service_load_stats_v2_LoadStatsRequest *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Node* sub = (struct envoy_api_v2_core_Node*)envoy_service_load_stats_v2_LoadStatsRequest_node(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Node*)_upb_msg_new(&envoy_api_v2_core_Node_msginit, arena);
    if (!sub) return NULL;
    envoy_service_load_stats_v2_LoadStatsRequest_set_node(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_api_v2_endpoint_ClusterStats** envoy_service_load_stats_v2_LoadStatsRequest_mutable_cluster_stats(envoy_service_load_stats_v2_LoadStatsRequest *msg, size_t *len) {
  return (struct envoy_api_v2_endpoint_ClusterStats**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE struct envoy_api_v2_endpoint_ClusterStats** envoy_service_load_stats_v2_LoadStatsRequest_resize_cluster_stats(envoy_service_load_stats_v2_LoadStatsRequest *msg, size_t len, upb_arena *arena) {
  return (struct envoy_api_v2_endpoint_ClusterStats**)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_api_v2_endpoint_ClusterStats* envoy_service_load_stats_v2_LoadStatsRequest_add_cluster_stats(envoy_service_load_stats_v2_LoadStatsRequest *msg, upb_arena *arena) {
  struct envoy_api_v2_endpoint_ClusterStats* sub = (struct envoy_api_v2_endpoint_ClusterStats*)_upb_msg_new(&envoy_api_v2_endpoint_ClusterStats_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.service.load_stats.v2.LoadStatsResponse */

UPB_INLINE envoy_service_load_stats_v2_LoadStatsResponse *envoy_service_load_stats_v2_LoadStatsResponse_new(upb_arena *arena) {
  return (envoy_service_load_stats_v2_LoadStatsResponse *)_upb_msg_new(&envoy_service_load_stats_v2_LoadStatsResponse_msginit, arena);
}
UPB_INLINE envoy_service_load_stats_v2_LoadStatsResponse *envoy_service_load_stats_v2_LoadStatsResponse_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_load_stats_v2_LoadStatsResponse *ret = envoy_service_load_stats_v2_LoadStatsResponse_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_load_stats_v2_LoadStatsResponse_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_load_stats_v2_LoadStatsResponse *envoy_service_load_stats_v2_LoadStatsResponse_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_load_stats_v2_LoadStatsResponse *ret = envoy_service_load_stats_v2_LoadStatsResponse_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_load_stats_v2_LoadStatsResponse_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_load_stats_v2_LoadStatsResponse_serialize(const envoy_service_load_stats_v2_LoadStatsResponse *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_load_stats_v2_LoadStatsResponse_msginit, arena, len);
}

UPB_INLINE upb_strview const* envoy_service_load_stats_v2_LoadStatsResponse_clusters(const envoy_service_load_stats_v2_LoadStatsResponse *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }
UPB_INLINE bool envoy_service_load_stats_v2_LoadStatsResponse_has_load_reporting_interval(const envoy_service_load_stats_v2_LoadStatsResponse *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_Duration* envoy_service_load_stats_v2_LoadStatsResponse_load_reporting_interval(const envoy_service_load_stats_v2_LoadStatsResponse *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct google_protobuf_Duration*); }
UPB_INLINE bool envoy_service_load_stats_v2_LoadStatsResponse_report_endpoint_granularity(const envoy_service_load_stats_v2_LoadStatsResponse *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool); }
UPB_INLINE bool envoy_service_load_stats_v2_LoadStatsResponse_send_all_clusters(const envoy_service_load_stats_v2_LoadStatsResponse *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(2, 2), bool); }

UPB_INLINE upb_strview* envoy_service_load_stats_v2_LoadStatsResponse_mutable_clusters(envoy_service_load_stats_v2_LoadStatsResponse *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE upb_strview* envoy_service_load_stats_v2_LoadStatsResponse_resize_clusters(envoy_service_load_stats_v2_LoadStatsResponse *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_service_load_stats_v2_LoadStatsResponse_add_clusters(envoy_service_load_stats_v2_LoadStatsResponse *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor2(msg, UPB_SIZE(8, 16), UPB_SIZE(3, 4), &val,
      arena);
}
UPB_INLINE void envoy_service_load_stats_v2_LoadStatsResponse_set_load_reporting_interval(envoy_service_load_stats_v2_LoadStatsResponse *msg, struct google_protobuf_Duration* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_service_load_stats_v2_LoadStatsResponse_mutable_load_reporting_interval(envoy_service_load_stats_v2_LoadStatsResponse *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_service_load_stats_v2_LoadStatsResponse_load_reporting_interval(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_service_load_stats_v2_LoadStatsResponse_set_load_reporting_interval(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_load_stats_v2_LoadStatsResponse_set_report_endpoint_granularity(envoy_service_load_stats_v2_LoadStatsResponse *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = value;
}
UPB_INLINE void envoy_service_load_stats_v2_LoadStatsResponse_set_send_all_clusters(envoy_service_load_stats_v2_LoadStatsResponse *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(2, 2), bool) = value;
}

extern const upb_msglayout_file envoy_service_load_stats_v2_lrs_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_SERVICE_LOAD_STATS_V2_LRS_PROTO_UPB_H_ */
