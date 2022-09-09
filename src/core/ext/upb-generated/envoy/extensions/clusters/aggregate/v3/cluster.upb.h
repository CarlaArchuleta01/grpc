/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/clusters/aggregate/v3/cluster.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_CLUSTERS_AGGREGATE_V3_CLUSTER_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_CLUSTERS_AGGREGATE_V3_CLUSTER_PROTO_UPB_H_

#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_extensions_clusters_aggregate_v3_ClusterConfig envoy_extensions_clusters_aggregate_v3_ClusterConfig;
extern const upb_MiniTable envoy_extensions_clusters_aggregate_v3_ClusterConfig_msg_init;



/* envoy.extensions.clusters.aggregate.v3.ClusterConfig */

UPB_INLINE envoy_extensions_clusters_aggregate_v3_ClusterConfig* envoy_extensions_clusters_aggregate_v3_ClusterConfig_new(upb_Arena* arena) {
  return (envoy_extensions_clusters_aggregate_v3_ClusterConfig*)_upb_Message_New(&envoy_extensions_clusters_aggregate_v3_ClusterConfig_msg_init, arena);
}
UPB_INLINE envoy_extensions_clusters_aggregate_v3_ClusterConfig* envoy_extensions_clusters_aggregate_v3_ClusterConfig_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_extensions_clusters_aggregate_v3_ClusterConfig* ret = envoy_extensions_clusters_aggregate_v3_ClusterConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_extensions_clusters_aggregate_v3_ClusterConfig* envoy_extensions_clusters_aggregate_v3_ClusterConfig_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_extensions_clusters_aggregate_v3_ClusterConfig* ret = envoy_extensions_clusters_aggregate_v3_ClusterConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_extensions_clusters_aggregate_v3_ClusterConfig_serialize(const envoy_extensions_clusters_aggregate_v3_ClusterConfig* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_extensions_clusters_aggregate_v3_ClusterConfig_serialize_ex(const envoy_extensions_clusters_aggregate_v3_ClusterConfig* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_extensions_clusters_aggregate_v3_ClusterConfig_clear_clusters(const envoy_extensions_clusters_aggregate_v3_ClusterConfig* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0));
}
UPB_INLINE upb_StringView const* envoy_extensions_clusters_aggregate_v3_ClusterConfig_clusters(const envoy_extensions_clusters_aggregate_v3_ClusterConfig* msg, size_t* len) {
  return (upb_StringView const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len);
}

UPB_INLINE upb_StringView* envoy_extensions_clusters_aggregate_v3_ClusterConfig_mutable_clusters(envoy_extensions_clusters_aggregate_v3_ClusterConfig* msg, size_t* len) {
  return (upb_StringView*)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE upb_StringView* envoy_extensions_clusters_aggregate_v3_ClusterConfig_resize_clusters(envoy_extensions_clusters_aggregate_v3_ClusterConfig* msg, size_t len, upb_Arena* arena) {
  return (upb_StringView*)_upb_Array_Resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_extensions_clusters_aggregate_v3_ClusterConfig_add_clusters(envoy_extensions_clusters_aggregate_v3_ClusterConfig* msg, upb_StringView val, upb_Arena* arena) {
  return _upb_Array_Append_accessor2(msg, UPB_SIZE(0, 0), UPB_SIZE(3, 4), &val, arena);
}

extern const upb_MiniTable_File envoy_extensions_clusters_aggregate_v3_cluster_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_EXTENSIONS_CLUSTERS_AGGREGATE_V3_CLUSTER_PROTO_UPB_H_ */
