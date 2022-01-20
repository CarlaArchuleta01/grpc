/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v2alpha/clusters.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V2ALPHA_CLUSTERS_PROTO_UPB_H_
#define ENVOY_ADMIN_V2ALPHA_CLUSTERS_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_admin_v2alpha_Clusters;
struct envoy_admin_v2alpha_ClusterStatus;
struct envoy_admin_v2alpha_HostStatus;
struct envoy_admin_v2alpha_HostHealthStatus;
typedef struct envoy_admin_v2alpha_Clusters envoy_admin_v2alpha_Clusters;
typedef struct envoy_admin_v2alpha_ClusterStatus envoy_admin_v2alpha_ClusterStatus;
typedef struct envoy_admin_v2alpha_HostStatus envoy_admin_v2alpha_HostStatus;
typedef struct envoy_admin_v2alpha_HostHealthStatus envoy_admin_v2alpha_HostHealthStatus;
extern const upb_msglayout envoy_admin_v2alpha_Clusters_msginit;
extern const upb_msglayout envoy_admin_v2alpha_ClusterStatus_msginit;
extern const upb_msglayout envoy_admin_v2alpha_HostStatus_msginit;
extern const upb_msglayout envoy_admin_v2alpha_HostHealthStatus_msginit;
struct envoy_admin_v2alpha_SimpleMetric;
struct envoy_api_v2_core_Address;
struct envoy_api_v2_core_Locality;
struct envoy_type_Percent;
extern const upb_msglayout envoy_admin_v2alpha_SimpleMetric_msginit;
extern const upb_msglayout envoy_api_v2_core_Address_msginit;
extern const upb_msglayout envoy_api_v2_core_Locality_msginit;
extern const upb_msglayout envoy_type_Percent_msginit;


/* envoy.admin.v2alpha.Clusters */

UPB_INLINE envoy_admin_v2alpha_Clusters *envoy_admin_v2alpha_Clusters_new(upb_arena *arena) {
  return (envoy_admin_v2alpha_Clusters *)_upb_msg_new(&envoy_admin_v2alpha_Clusters_msginit, arena);
}
UPB_INLINE envoy_admin_v2alpha_Clusters *envoy_admin_v2alpha_Clusters_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_admin_v2alpha_Clusters *ret = envoy_admin_v2alpha_Clusters_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_admin_v2alpha_Clusters_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_admin_v2alpha_Clusters *envoy_admin_v2alpha_Clusters_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_admin_v2alpha_Clusters *ret = envoy_admin_v2alpha_Clusters_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_admin_v2alpha_Clusters_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_admin_v2alpha_Clusters_serialize(const envoy_admin_v2alpha_Clusters *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_admin_v2alpha_Clusters_msginit, arena, len);
}

UPB_INLINE bool envoy_admin_v2alpha_Clusters_has_cluster_statuses(const envoy_admin_v2alpha_Clusters *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_admin_v2alpha_ClusterStatus* const* envoy_admin_v2alpha_Clusters_cluster_statuses(const envoy_admin_v2alpha_Clusters *msg, size_t *len) { return (const envoy_admin_v2alpha_ClusterStatus* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_admin_v2alpha_ClusterStatus** envoy_admin_v2alpha_Clusters_mutable_cluster_statuses(envoy_admin_v2alpha_Clusters *msg, size_t *len) {
  return (envoy_admin_v2alpha_ClusterStatus**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_admin_v2alpha_ClusterStatus** envoy_admin_v2alpha_Clusters_resize_cluster_statuses(envoy_admin_v2alpha_Clusters *msg, size_t len, upb_arena *arena) {
  return (envoy_admin_v2alpha_ClusterStatus**)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v2alpha_ClusterStatus* envoy_admin_v2alpha_Clusters_add_cluster_statuses(envoy_admin_v2alpha_Clusters *msg, upb_arena *arena) {
  struct envoy_admin_v2alpha_ClusterStatus* sub = (struct envoy_admin_v2alpha_ClusterStatus*)_upb_msg_new(&envoy_admin_v2alpha_ClusterStatus_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.admin.v2alpha.ClusterStatus */

UPB_INLINE envoy_admin_v2alpha_ClusterStatus *envoy_admin_v2alpha_ClusterStatus_new(upb_arena *arena) {
  return (envoy_admin_v2alpha_ClusterStatus *)_upb_msg_new(&envoy_admin_v2alpha_ClusterStatus_msginit, arena);
}
UPB_INLINE envoy_admin_v2alpha_ClusterStatus *envoy_admin_v2alpha_ClusterStatus_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_admin_v2alpha_ClusterStatus *ret = envoy_admin_v2alpha_ClusterStatus_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_admin_v2alpha_ClusterStatus_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_admin_v2alpha_ClusterStatus *envoy_admin_v2alpha_ClusterStatus_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_admin_v2alpha_ClusterStatus *ret = envoy_admin_v2alpha_ClusterStatus_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_admin_v2alpha_ClusterStatus_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_admin_v2alpha_ClusterStatus_serialize(const envoy_admin_v2alpha_ClusterStatus *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_admin_v2alpha_ClusterStatus_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_admin_v2alpha_ClusterStatus_name(const envoy_admin_v2alpha_ClusterStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE bool envoy_admin_v2alpha_ClusterStatus_added_via_api(const envoy_admin_v2alpha_ClusterStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool); }
UPB_INLINE bool envoy_admin_v2alpha_ClusterStatus_has_success_rate_ejection_threshold(const envoy_admin_v2alpha_ClusterStatus *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_type_Percent* envoy_admin_v2alpha_ClusterStatus_success_rate_ejection_threshold(const envoy_admin_v2alpha_ClusterStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct envoy_type_Percent*); }
UPB_INLINE bool envoy_admin_v2alpha_ClusterStatus_has_host_statuses(const envoy_admin_v2alpha_ClusterStatus *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(20, 40)); }
UPB_INLINE const envoy_admin_v2alpha_HostStatus* const* envoy_admin_v2alpha_ClusterStatus_host_statuses(const envoy_admin_v2alpha_ClusterStatus *msg, size_t *len) { return (const envoy_admin_v2alpha_HostStatus* const*)_upb_array_accessor(msg, UPB_SIZE(20, 40), len); }
UPB_INLINE bool envoy_admin_v2alpha_ClusterStatus_has_local_origin_success_rate_ejection_threshold(const envoy_admin_v2alpha_ClusterStatus *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct envoy_type_Percent* envoy_admin_v2alpha_ClusterStatus_local_origin_success_rate_ejection_threshold(const envoy_admin_v2alpha_ClusterStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct envoy_type_Percent*); }

UPB_INLINE void envoy_admin_v2alpha_ClusterStatus_set_name(envoy_admin_v2alpha_ClusterStatus *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE void envoy_admin_v2alpha_ClusterStatus_set_added_via_api(envoy_admin_v2alpha_ClusterStatus *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = value;
}
UPB_INLINE void envoy_admin_v2alpha_ClusterStatus_set_success_rate_ejection_threshold(envoy_admin_v2alpha_ClusterStatus *msg, struct envoy_type_Percent* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct envoy_type_Percent*) = value;
}
UPB_INLINE struct envoy_type_Percent* envoy_admin_v2alpha_ClusterStatus_mutable_success_rate_ejection_threshold(envoy_admin_v2alpha_ClusterStatus *msg, upb_arena *arena) {
  struct envoy_type_Percent* sub = (struct envoy_type_Percent*)envoy_admin_v2alpha_ClusterStatus_success_rate_ejection_threshold(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_Percent*)_upb_msg_new(&envoy_type_Percent_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v2alpha_ClusterStatus_set_success_rate_ejection_threshold(msg, sub);
  }
  return sub;
}
UPB_INLINE envoy_admin_v2alpha_HostStatus** envoy_admin_v2alpha_ClusterStatus_mutable_host_statuses(envoy_admin_v2alpha_ClusterStatus *msg, size_t *len) {
  return (envoy_admin_v2alpha_HostStatus**)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 40), len);
}
UPB_INLINE envoy_admin_v2alpha_HostStatus** envoy_admin_v2alpha_ClusterStatus_resize_host_statuses(envoy_admin_v2alpha_ClusterStatus *msg, size_t len, upb_arena *arena) {
  return (envoy_admin_v2alpha_HostStatus**)_upb_array_resize_accessor2(msg, UPB_SIZE(20, 40), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v2alpha_HostStatus* envoy_admin_v2alpha_ClusterStatus_add_host_statuses(envoy_admin_v2alpha_ClusterStatus *msg, upb_arena *arena) {
  struct envoy_admin_v2alpha_HostStatus* sub = (struct envoy_admin_v2alpha_HostStatus*)_upb_msg_new(&envoy_admin_v2alpha_HostStatus_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(20, 40), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_admin_v2alpha_ClusterStatus_set_local_origin_success_rate_ejection_threshold(envoy_admin_v2alpha_ClusterStatus *msg, struct envoy_type_Percent* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct envoy_type_Percent*) = value;
}
UPB_INLINE struct envoy_type_Percent* envoy_admin_v2alpha_ClusterStatus_mutable_local_origin_success_rate_ejection_threshold(envoy_admin_v2alpha_ClusterStatus *msg, upb_arena *arena) {
  struct envoy_type_Percent* sub = (struct envoy_type_Percent*)envoy_admin_v2alpha_ClusterStatus_local_origin_success_rate_ejection_threshold(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_Percent*)_upb_msg_new(&envoy_type_Percent_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v2alpha_ClusterStatus_set_local_origin_success_rate_ejection_threshold(msg, sub);
  }
  return sub;
}

/* envoy.admin.v2alpha.HostStatus */

UPB_INLINE envoy_admin_v2alpha_HostStatus *envoy_admin_v2alpha_HostStatus_new(upb_arena *arena) {
  return (envoy_admin_v2alpha_HostStatus *)_upb_msg_new(&envoy_admin_v2alpha_HostStatus_msginit, arena);
}
UPB_INLINE envoy_admin_v2alpha_HostStatus *envoy_admin_v2alpha_HostStatus_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_admin_v2alpha_HostStatus *ret = envoy_admin_v2alpha_HostStatus_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_admin_v2alpha_HostStatus_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_admin_v2alpha_HostStatus *envoy_admin_v2alpha_HostStatus_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_admin_v2alpha_HostStatus *ret = envoy_admin_v2alpha_HostStatus_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_admin_v2alpha_HostStatus_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_admin_v2alpha_HostStatus_serialize(const envoy_admin_v2alpha_HostStatus *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_admin_v2alpha_HostStatus_msginit, arena, len);
}

UPB_INLINE bool envoy_admin_v2alpha_HostStatus_has_address(const envoy_admin_v2alpha_HostStatus *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_api_v2_core_Address* envoy_admin_v2alpha_HostStatus_address(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(20, 32), const struct envoy_api_v2_core_Address*); }
UPB_INLINE bool envoy_admin_v2alpha_HostStatus_has_stats(const envoy_admin_v2alpha_HostStatus *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(40, 72)); }
UPB_INLINE const struct envoy_admin_v2alpha_SimpleMetric* const* envoy_admin_v2alpha_HostStatus_stats(const envoy_admin_v2alpha_HostStatus *msg, size_t *len) { return (const struct envoy_admin_v2alpha_SimpleMetric* const*)_upb_array_accessor(msg, UPB_SIZE(40, 72), len); }
UPB_INLINE bool envoy_admin_v2alpha_HostStatus_has_health_status(const envoy_admin_v2alpha_HostStatus *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const envoy_admin_v2alpha_HostHealthStatus* envoy_admin_v2alpha_HostStatus_health_status(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(24, 40), const envoy_admin_v2alpha_HostHealthStatus*); }
UPB_INLINE bool envoy_admin_v2alpha_HostStatus_has_success_rate(const envoy_admin_v2alpha_HostStatus *msg) { return _upb_hasbit(msg, 3); }
UPB_INLINE const struct envoy_type_Percent* envoy_admin_v2alpha_HostStatus_success_rate(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(28, 48), const struct envoy_type_Percent*); }
UPB_INLINE uint32_t envoy_admin_v2alpha_HostStatus_weight(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t); }
UPB_INLINE upb_strview envoy_admin_v2alpha_HostStatus_hostname(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 16), upb_strview); }
UPB_INLINE uint32_t envoy_admin_v2alpha_HostStatus_priority(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint32_t); }
UPB_INLINE bool envoy_admin_v2alpha_HostStatus_has_local_origin_success_rate(const envoy_admin_v2alpha_HostStatus *msg) { return _upb_hasbit(msg, 4); }
UPB_INLINE const struct envoy_type_Percent* envoy_admin_v2alpha_HostStatus_local_origin_success_rate(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(32, 56), const struct envoy_type_Percent*); }
UPB_INLINE bool envoy_admin_v2alpha_HostStatus_has_locality(const envoy_admin_v2alpha_HostStatus *msg) { return _upb_hasbit(msg, 5); }
UPB_INLINE const struct envoy_api_v2_core_Locality* envoy_admin_v2alpha_HostStatus_locality(const envoy_admin_v2alpha_HostStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(36, 64), const struct envoy_api_v2_core_Locality*); }

UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_address(envoy_admin_v2alpha_HostStatus *msg, struct envoy_api_v2_core_Address* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(20, 32), struct envoy_api_v2_core_Address*) = value;
}
UPB_INLINE struct envoy_api_v2_core_Address* envoy_admin_v2alpha_HostStatus_mutable_address(envoy_admin_v2alpha_HostStatus *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Address* sub = (struct envoy_api_v2_core_Address*)envoy_admin_v2alpha_HostStatus_address(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Address*)_upb_msg_new(&envoy_api_v2_core_Address_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v2alpha_HostStatus_set_address(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_admin_v2alpha_SimpleMetric** envoy_admin_v2alpha_HostStatus_mutable_stats(envoy_admin_v2alpha_HostStatus *msg, size_t *len) {
  return (struct envoy_admin_v2alpha_SimpleMetric**)_upb_array_mutable_accessor(msg, UPB_SIZE(40, 72), len);
}
UPB_INLINE struct envoy_admin_v2alpha_SimpleMetric** envoy_admin_v2alpha_HostStatus_resize_stats(envoy_admin_v2alpha_HostStatus *msg, size_t len, upb_arena *arena) {
  return (struct envoy_admin_v2alpha_SimpleMetric**)_upb_array_resize_accessor2(msg, UPB_SIZE(40, 72), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v2alpha_SimpleMetric* envoy_admin_v2alpha_HostStatus_add_stats(envoy_admin_v2alpha_HostStatus *msg, upb_arena *arena) {
  struct envoy_admin_v2alpha_SimpleMetric* sub = (struct envoy_admin_v2alpha_SimpleMetric*)_upb_msg_new(&envoy_admin_v2alpha_SimpleMetric_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(40, 72), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_health_status(envoy_admin_v2alpha_HostStatus *msg, envoy_admin_v2alpha_HostHealthStatus* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(24, 40), envoy_admin_v2alpha_HostHealthStatus*) = value;
}
UPB_INLINE struct envoy_admin_v2alpha_HostHealthStatus* envoy_admin_v2alpha_HostStatus_mutable_health_status(envoy_admin_v2alpha_HostStatus *msg, upb_arena *arena) {
  struct envoy_admin_v2alpha_HostHealthStatus* sub = (struct envoy_admin_v2alpha_HostHealthStatus*)envoy_admin_v2alpha_HostStatus_health_status(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v2alpha_HostHealthStatus*)_upb_msg_new(&envoy_admin_v2alpha_HostHealthStatus_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v2alpha_HostStatus_set_health_status(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_success_rate(envoy_admin_v2alpha_HostStatus *msg, struct envoy_type_Percent* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(28, 48), struct envoy_type_Percent*) = value;
}
UPB_INLINE struct envoy_type_Percent* envoy_admin_v2alpha_HostStatus_mutable_success_rate(envoy_admin_v2alpha_HostStatus *msg, upb_arena *arena) {
  struct envoy_type_Percent* sub = (struct envoy_type_Percent*)envoy_admin_v2alpha_HostStatus_success_rate(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_Percent*)_upb_msg_new(&envoy_type_Percent_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v2alpha_HostStatus_set_success_rate(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_weight(envoy_admin_v2alpha_HostStatus *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_hostname(envoy_admin_v2alpha_HostStatus *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 16), upb_strview) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_priority(envoy_admin_v2alpha_HostStatus *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint32_t) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_local_origin_success_rate(envoy_admin_v2alpha_HostStatus *msg, struct envoy_type_Percent* value) {
  _upb_sethas(msg, 4);
  *UPB_PTR_AT(msg, UPB_SIZE(32, 56), struct envoy_type_Percent*) = value;
}
UPB_INLINE struct envoy_type_Percent* envoy_admin_v2alpha_HostStatus_mutable_local_origin_success_rate(envoy_admin_v2alpha_HostStatus *msg, upb_arena *arena) {
  struct envoy_type_Percent* sub = (struct envoy_type_Percent*)envoy_admin_v2alpha_HostStatus_local_origin_success_rate(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_Percent*)_upb_msg_new(&envoy_type_Percent_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v2alpha_HostStatus_set_local_origin_success_rate(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v2alpha_HostStatus_set_locality(envoy_admin_v2alpha_HostStatus *msg, struct envoy_api_v2_core_Locality* value) {
  _upb_sethas(msg, 5);
  *UPB_PTR_AT(msg, UPB_SIZE(36, 64), struct envoy_api_v2_core_Locality*) = value;
}
UPB_INLINE struct envoy_api_v2_core_Locality* envoy_admin_v2alpha_HostStatus_mutable_locality(envoy_admin_v2alpha_HostStatus *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Locality* sub = (struct envoy_api_v2_core_Locality*)envoy_admin_v2alpha_HostStatus_locality(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Locality*)_upb_msg_new(&envoy_api_v2_core_Locality_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v2alpha_HostStatus_set_locality(msg, sub);
  }
  return sub;
}

/* envoy.admin.v2alpha.HostHealthStatus */

UPB_INLINE envoy_admin_v2alpha_HostHealthStatus *envoy_admin_v2alpha_HostHealthStatus_new(upb_arena *arena) {
  return (envoy_admin_v2alpha_HostHealthStatus *)_upb_msg_new(&envoy_admin_v2alpha_HostHealthStatus_msginit, arena);
}
UPB_INLINE envoy_admin_v2alpha_HostHealthStatus *envoy_admin_v2alpha_HostHealthStatus_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_admin_v2alpha_HostHealthStatus *ret = envoy_admin_v2alpha_HostHealthStatus_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_admin_v2alpha_HostHealthStatus_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_admin_v2alpha_HostHealthStatus *envoy_admin_v2alpha_HostHealthStatus_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_admin_v2alpha_HostHealthStatus *ret = envoy_admin_v2alpha_HostHealthStatus_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_admin_v2alpha_HostHealthStatus_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_admin_v2alpha_HostHealthStatus_serialize(const envoy_admin_v2alpha_HostHealthStatus *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_admin_v2alpha_HostHealthStatus_msginit, arena, len);
}

UPB_INLINE bool envoy_admin_v2alpha_HostHealthStatus_failed_active_health_check(const envoy_admin_v2alpha_HostHealthStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), bool); }
UPB_INLINE bool envoy_admin_v2alpha_HostHealthStatus_failed_outlier_check(const envoy_admin_v2alpha_HostHealthStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(5, 5), bool); }
UPB_INLINE int32_t envoy_admin_v2alpha_HostHealthStatus_eds_health_status(const envoy_admin_v2alpha_HostHealthStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t); }
UPB_INLINE bool envoy_admin_v2alpha_HostHealthStatus_failed_active_degraded_check(const envoy_admin_v2alpha_HostHealthStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(6, 6), bool); }
UPB_INLINE bool envoy_admin_v2alpha_HostHealthStatus_pending_dynamic_removal(const envoy_admin_v2alpha_HostHealthStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(7, 7), bool); }
UPB_INLINE bool envoy_admin_v2alpha_HostHealthStatus_pending_active_hc(const envoy_admin_v2alpha_HostHealthStatus *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool); }

UPB_INLINE void envoy_admin_v2alpha_HostHealthStatus_set_failed_active_health_check(envoy_admin_v2alpha_HostHealthStatus *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), bool) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostHealthStatus_set_failed_outlier_check(envoy_admin_v2alpha_HostHealthStatus *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(5, 5), bool) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostHealthStatus_set_eds_health_status(envoy_admin_v2alpha_HostHealthStatus *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostHealthStatus_set_failed_active_degraded_check(envoy_admin_v2alpha_HostHealthStatus *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(6, 6), bool) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostHealthStatus_set_pending_dynamic_removal(envoy_admin_v2alpha_HostHealthStatus *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(7, 7), bool) = value;
}
UPB_INLINE void envoy_admin_v2alpha_HostHealthStatus_set_pending_active_hc(envoy_admin_v2alpha_HostHealthStatus *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool) = value;
}

extern const upb_msglayout_file envoy_admin_v2alpha_clusters_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V2ALPHA_CLUSTERS_PROTO_UPB_H_ */
