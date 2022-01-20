/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v2alpha/metrics.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V2ALPHA_METRICS_PROTO_UPB_H_
#define ENVOY_ADMIN_V2ALPHA_METRICS_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_admin_v2alpha_SimpleMetric;
typedef struct envoy_admin_v2alpha_SimpleMetric envoy_admin_v2alpha_SimpleMetric;
extern const upb_msglayout envoy_admin_v2alpha_SimpleMetric_msginit;

typedef enum {
  envoy_admin_v2alpha_SimpleMetric_COUNTER = 0,
  envoy_admin_v2alpha_SimpleMetric_GAUGE = 1
} envoy_admin_v2alpha_SimpleMetric_Type;


/* envoy.admin.v2alpha.SimpleMetric */

UPB_INLINE envoy_admin_v2alpha_SimpleMetric *envoy_admin_v2alpha_SimpleMetric_new(upb_arena *arena) {
  return (envoy_admin_v2alpha_SimpleMetric *)_upb_msg_new(&envoy_admin_v2alpha_SimpleMetric_msginit, arena);
}
UPB_INLINE envoy_admin_v2alpha_SimpleMetric *envoy_admin_v2alpha_SimpleMetric_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_admin_v2alpha_SimpleMetric *ret = envoy_admin_v2alpha_SimpleMetric_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_admin_v2alpha_SimpleMetric_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_admin_v2alpha_SimpleMetric *envoy_admin_v2alpha_SimpleMetric_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_admin_v2alpha_SimpleMetric *ret = envoy_admin_v2alpha_SimpleMetric_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_admin_v2alpha_SimpleMetric_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_admin_v2alpha_SimpleMetric_serialize(const envoy_admin_v2alpha_SimpleMetric *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_admin_v2alpha_SimpleMetric_msginit, arena, len);
}

UPB_INLINE int32_t envoy_admin_v2alpha_SimpleMetric_type(const envoy_admin_v2alpha_SimpleMetric *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t); }
UPB_INLINE uint64_t envoy_admin_v2alpha_SimpleMetric_value(const envoy_admin_v2alpha_SimpleMetric *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint64_t); }
UPB_INLINE upb_strview envoy_admin_v2alpha_SimpleMetric_name(const envoy_admin_v2alpha_SimpleMetric *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 16), upb_strview); }

UPB_INLINE void envoy_admin_v2alpha_SimpleMetric_set_type(envoy_admin_v2alpha_SimpleMetric *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t) = value;
}
UPB_INLINE void envoy_admin_v2alpha_SimpleMetric_set_value(envoy_admin_v2alpha_SimpleMetric *msg, uint64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint64_t) = value;
}
UPB_INLINE void envoy_admin_v2alpha_SimpleMetric_set_name(envoy_admin_v2alpha_SimpleMetric *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 16), upb_strview) = value;
}

extern const upb_msglayout_file envoy_admin_v2alpha_metrics_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V2ALPHA_METRICS_PROTO_UPB_H_ */
