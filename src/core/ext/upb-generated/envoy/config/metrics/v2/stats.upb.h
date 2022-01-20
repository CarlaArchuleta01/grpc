/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/metrics/v2/stats.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_METRICS_V2_STATS_PROTO_UPB_H_
#define ENVOY_CONFIG_METRICS_V2_STATS_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_metrics_v2_StatsSink;
struct envoy_config_metrics_v2_StatsConfig;
struct envoy_config_metrics_v2_StatsMatcher;
struct envoy_config_metrics_v2_TagSpecifier;
struct envoy_config_metrics_v2_StatsdSink;
struct envoy_config_metrics_v2_DogStatsdSink;
struct envoy_config_metrics_v2_HystrixSink;
typedef struct envoy_config_metrics_v2_StatsSink envoy_config_metrics_v2_StatsSink;
typedef struct envoy_config_metrics_v2_StatsConfig envoy_config_metrics_v2_StatsConfig;
typedef struct envoy_config_metrics_v2_StatsMatcher envoy_config_metrics_v2_StatsMatcher;
typedef struct envoy_config_metrics_v2_TagSpecifier envoy_config_metrics_v2_TagSpecifier;
typedef struct envoy_config_metrics_v2_StatsdSink envoy_config_metrics_v2_StatsdSink;
typedef struct envoy_config_metrics_v2_DogStatsdSink envoy_config_metrics_v2_DogStatsdSink;
typedef struct envoy_config_metrics_v2_HystrixSink envoy_config_metrics_v2_HystrixSink;
extern const upb_msglayout envoy_config_metrics_v2_StatsSink_msginit;
extern const upb_msglayout envoy_config_metrics_v2_StatsConfig_msginit;
extern const upb_msglayout envoy_config_metrics_v2_StatsMatcher_msginit;
extern const upb_msglayout envoy_config_metrics_v2_TagSpecifier_msginit;
extern const upb_msglayout envoy_config_metrics_v2_StatsdSink_msginit;
extern const upb_msglayout envoy_config_metrics_v2_DogStatsdSink_msginit;
extern const upb_msglayout envoy_config_metrics_v2_HystrixSink_msginit;
struct envoy_api_v2_core_Address;
struct envoy_type_matcher_ListStringMatcher;
struct google_protobuf_Any;
struct google_protobuf_BoolValue;
struct google_protobuf_Struct;
extern const upb_msglayout envoy_api_v2_core_Address_msginit;
extern const upb_msglayout envoy_type_matcher_ListStringMatcher_msginit;
extern const upb_msglayout google_protobuf_Any_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;
extern const upb_msglayout google_protobuf_Struct_msginit;


/* envoy.config.metrics.v2.StatsSink */

UPB_INLINE envoy_config_metrics_v2_StatsSink *envoy_config_metrics_v2_StatsSink_new(upb_arena *arena) {
  return (envoy_config_metrics_v2_StatsSink *)_upb_msg_new(&envoy_config_metrics_v2_StatsSink_msginit, arena);
}
UPB_INLINE envoy_config_metrics_v2_StatsSink *envoy_config_metrics_v2_StatsSink_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_metrics_v2_StatsSink *ret = envoy_config_metrics_v2_StatsSink_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsSink_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_metrics_v2_StatsSink *envoy_config_metrics_v2_StatsSink_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_metrics_v2_StatsSink *ret = envoy_config_metrics_v2_StatsSink_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsSink_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_metrics_v2_StatsSink_serialize(const envoy_config_metrics_v2_StatsSink *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_metrics_v2_StatsSink_msginit, arena, len);
}

typedef enum {
  envoy_config_metrics_v2_StatsSink_config_type_config = 2,
  envoy_config_metrics_v2_StatsSink_config_type_typed_config = 3,
  envoy_config_metrics_v2_StatsSink_config_type_NOT_SET = 0
} envoy_config_metrics_v2_StatsSink_config_type_oneofcases;
UPB_INLINE envoy_config_metrics_v2_StatsSink_config_type_oneofcases envoy_config_metrics_v2_StatsSink_config_type_case(const envoy_config_metrics_v2_StatsSink* msg) { return (envoy_config_metrics_v2_StatsSink_config_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE upb_strview envoy_config_metrics_v2_StatsSink_name(const envoy_config_metrics_v2_StatsSink *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_config_metrics_v2_StatsSink_has_config(const envoy_config_metrics_v2_StatsSink *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 2; }
UPB_INLINE const struct google_protobuf_Struct* envoy_config_metrics_v2_StatsSink_config(const envoy_config_metrics_v2_StatsSink *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Struct*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 2, NULL); }
UPB_INLINE bool envoy_config_metrics_v2_StatsSink_has_typed_config(const envoy_config_metrics_v2_StatsSink *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 3; }
UPB_INLINE const struct google_protobuf_Any* envoy_config_metrics_v2_StatsSink_typed_config(const envoy_config_metrics_v2_StatsSink *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Any*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }

UPB_INLINE void envoy_config_metrics_v2_StatsSink_set_name(envoy_config_metrics_v2_StatsSink *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_config_metrics_v2_StatsSink_set_config(envoy_config_metrics_v2_StatsSink *msg, struct google_protobuf_Struct* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Struct*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 2);
}
UPB_INLINE struct google_protobuf_Struct* envoy_config_metrics_v2_StatsSink_mutable_config(envoy_config_metrics_v2_StatsSink *msg, upb_arena *arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)envoy_config_metrics_v2_StatsSink_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)_upb_msg_new(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_StatsSink_set_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_metrics_v2_StatsSink_set_typed_config(envoy_config_metrics_v2_StatsSink *msg, struct google_protobuf_Any* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Any*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct google_protobuf_Any* envoy_config_metrics_v2_StatsSink_mutable_typed_config(envoy_config_metrics_v2_StatsSink *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_config_metrics_v2_StatsSink_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_StatsSink_set_typed_config(msg, sub);
  }
  return sub;
}

/* envoy.config.metrics.v2.StatsConfig */

UPB_INLINE envoy_config_metrics_v2_StatsConfig *envoy_config_metrics_v2_StatsConfig_new(upb_arena *arena) {
  return (envoy_config_metrics_v2_StatsConfig *)_upb_msg_new(&envoy_config_metrics_v2_StatsConfig_msginit, arena);
}
UPB_INLINE envoy_config_metrics_v2_StatsConfig *envoy_config_metrics_v2_StatsConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_metrics_v2_StatsConfig *ret = envoy_config_metrics_v2_StatsConfig_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsConfig_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_metrics_v2_StatsConfig *envoy_config_metrics_v2_StatsConfig_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_metrics_v2_StatsConfig *ret = envoy_config_metrics_v2_StatsConfig_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsConfig_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_metrics_v2_StatsConfig_serialize(const envoy_config_metrics_v2_StatsConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_metrics_v2_StatsConfig_msginit, arena, len);
}

UPB_INLINE bool envoy_config_metrics_v2_StatsConfig_has_stats_tags(const envoy_config_metrics_v2_StatsConfig *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const envoy_config_metrics_v2_TagSpecifier* const* envoy_config_metrics_v2_StatsConfig_stats_tags(const envoy_config_metrics_v2_StatsConfig *msg, size_t *len) { return (const envoy_config_metrics_v2_TagSpecifier* const*)_upb_array_accessor(msg, UPB_SIZE(12, 24), len); }
UPB_INLINE bool envoy_config_metrics_v2_StatsConfig_has_use_all_default_tags(const envoy_config_metrics_v2_StatsConfig *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_config_metrics_v2_StatsConfig_use_all_default_tags(const envoy_config_metrics_v2_StatsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct google_protobuf_BoolValue*); }
UPB_INLINE bool envoy_config_metrics_v2_StatsConfig_has_stats_matcher(const envoy_config_metrics_v2_StatsConfig *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const envoy_config_metrics_v2_StatsMatcher* envoy_config_metrics_v2_StatsConfig_stats_matcher(const envoy_config_metrics_v2_StatsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const envoy_config_metrics_v2_StatsMatcher*); }

UPB_INLINE envoy_config_metrics_v2_TagSpecifier** envoy_config_metrics_v2_StatsConfig_mutable_stats_tags(envoy_config_metrics_v2_StatsConfig *msg, size_t *len) {
  return (envoy_config_metrics_v2_TagSpecifier**)_upb_array_mutable_accessor(msg, UPB_SIZE(12, 24), len);
}
UPB_INLINE envoy_config_metrics_v2_TagSpecifier** envoy_config_metrics_v2_StatsConfig_resize_stats_tags(envoy_config_metrics_v2_StatsConfig *msg, size_t len, upb_arena *arena) {
  return (envoy_config_metrics_v2_TagSpecifier**)_upb_array_resize_accessor2(msg, UPB_SIZE(12, 24), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_config_metrics_v2_TagSpecifier* envoy_config_metrics_v2_StatsConfig_add_stats_tags(envoy_config_metrics_v2_StatsConfig *msg, upb_arena *arena) {
  struct envoy_config_metrics_v2_TagSpecifier* sub = (struct envoy_config_metrics_v2_TagSpecifier*)_upb_msg_new(&envoy_config_metrics_v2_TagSpecifier_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(12, 24), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_config_metrics_v2_StatsConfig_set_use_all_default_tags(envoy_config_metrics_v2_StatsConfig *msg, struct google_protobuf_BoolValue* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct google_protobuf_BoolValue*) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_config_metrics_v2_StatsConfig_mutable_use_all_default_tags(envoy_config_metrics_v2_StatsConfig *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_config_metrics_v2_StatsConfig_use_all_default_tags(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)_upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_StatsConfig_set_use_all_default_tags(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_metrics_v2_StatsConfig_set_stats_matcher(envoy_config_metrics_v2_StatsConfig *msg, envoy_config_metrics_v2_StatsMatcher* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), envoy_config_metrics_v2_StatsMatcher*) = value;
}
UPB_INLINE struct envoy_config_metrics_v2_StatsMatcher* envoy_config_metrics_v2_StatsConfig_mutable_stats_matcher(envoy_config_metrics_v2_StatsConfig *msg, upb_arena *arena) {
  struct envoy_config_metrics_v2_StatsMatcher* sub = (struct envoy_config_metrics_v2_StatsMatcher*)envoy_config_metrics_v2_StatsConfig_stats_matcher(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_metrics_v2_StatsMatcher*)_upb_msg_new(&envoy_config_metrics_v2_StatsMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_StatsConfig_set_stats_matcher(msg, sub);
  }
  return sub;
}

/* envoy.config.metrics.v2.StatsMatcher */

UPB_INLINE envoy_config_metrics_v2_StatsMatcher *envoy_config_metrics_v2_StatsMatcher_new(upb_arena *arena) {
  return (envoy_config_metrics_v2_StatsMatcher *)_upb_msg_new(&envoy_config_metrics_v2_StatsMatcher_msginit, arena);
}
UPB_INLINE envoy_config_metrics_v2_StatsMatcher *envoy_config_metrics_v2_StatsMatcher_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_metrics_v2_StatsMatcher *ret = envoy_config_metrics_v2_StatsMatcher_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsMatcher_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_metrics_v2_StatsMatcher *envoy_config_metrics_v2_StatsMatcher_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_metrics_v2_StatsMatcher *ret = envoy_config_metrics_v2_StatsMatcher_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsMatcher_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_metrics_v2_StatsMatcher_serialize(const envoy_config_metrics_v2_StatsMatcher *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_metrics_v2_StatsMatcher_msginit, arena, len);
}

typedef enum {
  envoy_config_metrics_v2_StatsMatcher_stats_matcher_reject_all = 1,
  envoy_config_metrics_v2_StatsMatcher_stats_matcher_exclusion_list = 2,
  envoy_config_metrics_v2_StatsMatcher_stats_matcher_inclusion_list = 3,
  envoy_config_metrics_v2_StatsMatcher_stats_matcher_NOT_SET = 0
} envoy_config_metrics_v2_StatsMatcher_stats_matcher_oneofcases;
UPB_INLINE envoy_config_metrics_v2_StatsMatcher_stats_matcher_oneofcases envoy_config_metrics_v2_StatsMatcher_stats_matcher_case(const envoy_config_metrics_v2_StatsMatcher* msg) { return (envoy_config_metrics_v2_StatsMatcher_stats_matcher_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(4, 8), int32_t); }

UPB_INLINE bool envoy_config_metrics_v2_StatsMatcher_has_reject_all(const envoy_config_metrics_v2_StatsMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 1; }
UPB_INLINE bool envoy_config_metrics_v2_StatsMatcher_reject_all(const envoy_config_metrics_v2_StatsMatcher *msg) { return UPB_READ_ONEOF(msg, bool, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 1, false); }
UPB_INLINE bool envoy_config_metrics_v2_StatsMatcher_has_exclusion_list(const envoy_config_metrics_v2_StatsMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 2; }
UPB_INLINE const struct envoy_type_matcher_ListStringMatcher* envoy_config_metrics_v2_StatsMatcher_exclusion_list(const envoy_config_metrics_v2_StatsMatcher *msg) { return UPB_READ_ONEOF(msg, const struct envoy_type_matcher_ListStringMatcher*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 2, NULL); }
UPB_INLINE bool envoy_config_metrics_v2_StatsMatcher_has_inclusion_list(const envoy_config_metrics_v2_StatsMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 3; }
UPB_INLINE const struct envoy_type_matcher_ListStringMatcher* envoy_config_metrics_v2_StatsMatcher_inclusion_list(const envoy_config_metrics_v2_StatsMatcher *msg) { return UPB_READ_ONEOF(msg, const struct envoy_type_matcher_ListStringMatcher*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 3, NULL); }

UPB_INLINE void envoy_config_metrics_v2_StatsMatcher_set_reject_all(envoy_config_metrics_v2_StatsMatcher *msg, bool value) {
  UPB_WRITE_ONEOF(msg, bool, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 1);
}
UPB_INLINE void envoy_config_metrics_v2_StatsMatcher_set_exclusion_list(envoy_config_metrics_v2_StatsMatcher *msg, struct envoy_type_matcher_ListStringMatcher* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_type_matcher_ListStringMatcher*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 2);
}
UPB_INLINE struct envoy_type_matcher_ListStringMatcher* envoy_config_metrics_v2_StatsMatcher_mutable_exclusion_list(envoy_config_metrics_v2_StatsMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_ListStringMatcher* sub = (struct envoy_type_matcher_ListStringMatcher*)envoy_config_metrics_v2_StatsMatcher_exclusion_list(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_ListStringMatcher*)_upb_msg_new(&envoy_type_matcher_ListStringMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_StatsMatcher_set_exclusion_list(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_metrics_v2_StatsMatcher_set_inclusion_list(envoy_config_metrics_v2_StatsMatcher *msg, struct envoy_type_matcher_ListStringMatcher* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_type_matcher_ListStringMatcher*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 3);
}
UPB_INLINE struct envoy_type_matcher_ListStringMatcher* envoy_config_metrics_v2_StatsMatcher_mutable_inclusion_list(envoy_config_metrics_v2_StatsMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_ListStringMatcher* sub = (struct envoy_type_matcher_ListStringMatcher*)envoy_config_metrics_v2_StatsMatcher_inclusion_list(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_ListStringMatcher*)_upb_msg_new(&envoy_type_matcher_ListStringMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_StatsMatcher_set_inclusion_list(msg, sub);
  }
  return sub;
}

/* envoy.config.metrics.v2.TagSpecifier */

UPB_INLINE envoy_config_metrics_v2_TagSpecifier *envoy_config_metrics_v2_TagSpecifier_new(upb_arena *arena) {
  return (envoy_config_metrics_v2_TagSpecifier *)_upb_msg_new(&envoy_config_metrics_v2_TagSpecifier_msginit, arena);
}
UPB_INLINE envoy_config_metrics_v2_TagSpecifier *envoy_config_metrics_v2_TagSpecifier_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_metrics_v2_TagSpecifier *ret = envoy_config_metrics_v2_TagSpecifier_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_metrics_v2_TagSpecifier_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_metrics_v2_TagSpecifier *envoy_config_metrics_v2_TagSpecifier_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_metrics_v2_TagSpecifier *ret = envoy_config_metrics_v2_TagSpecifier_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_metrics_v2_TagSpecifier_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_metrics_v2_TagSpecifier_serialize(const envoy_config_metrics_v2_TagSpecifier *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_metrics_v2_TagSpecifier_msginit, arena, len);
}

typedef enum {
  envoy_config_metrics_v2_TagSpecifier_tag_value_regex = 2,
  envoy_config_metrics_v2_TagSpecifier_tag_value_fixed_value = 3,
  envoy_config_metrics_v2_TagSpecifier_tag_value_NOT_SET = 0
} envoy_config_metrics_v2_TagSpecifier_tag_value_oneofcases;
UPB_INLINE envoy_config_metrics_v2_TagSpecifier_tag_value_oneofcases envoy_config_metrics_v2_TagSpecifier_tag_value_case(const envoy_config_metrics_v2_TagSpecifier* msg) { return (envoy_config_metrics_v2_TagSpecifier_tag_value_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(16, 32), int32_t); }

UPB_INLINE upb_strview envoy_config_metrics_v2_TagSpecifier_tag_name(const envoy_config_metrics_v2_TagSpecifier *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_config_metrics_v2_TagSpecifier_has_regex(const envoy_config_metrics_v2_TagSpecifier *msg) { return _upb_getoneofcase(msg, UPB_SIZE(16, 32)) == 2; }
UPB_INLINE upb_strview envoy_config_metrics_v2_TagSpecifier_regex(const envoy_config_metrics_v2_TagSpecifier *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(8, 16), UPB_SIZE(16, 32), 2, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_config_metrics_v2_TagSpecifier_has_fixed_value(const envoy_config_metrics_v2_TagSpecifier *msg) { return _upb_getoneofcase(msg, UPB_SIZE(16, 32)) == 3; }
UPB_INLINE upb_strview envoy_config_metrics_v2_TagSpecifier_fixed_value(const envoy_config_metrics_v2_TagSpecifier *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(8, 16), UPB_SIZE(16, 32), 3, upb_strview_make("", strlen(""))); }

UPB_INLINE void envoy_config_metrics_v2_TagSpecifier_set_tag_name(envoy_config_metrics_v2_TagSpecifier *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_config_metrics_v2_TagSpecifier_set_regex(envoy_config_metrics_v2_TagSpecifier *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(8, 16), value, UPB_SIZE(16, 32), 2);
}
UPB_INLINE void envoy_config_metrics_v2_TagSpecifier_set_fixed_value(envoy_config_metrics_v2_TagSpecifier *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(8, 16), value, UPB_SIZE(16, 32), 3);
}

/* envoy.config.metrics.v2.StatsdSink */

UPB_INLINE envoy_config_metrics_v2_StatsdSink *envoy_config_metrics_v2_StatsdSink_new(upb_arena *arena) {
  return (envoy_config_metrics_v2_StatsdSink *)_upb_msg_new(&envoy_config_metrics_v2_StatsdSink_msginit, arena);
}
UPB_INLINE envoy_config_metrics_v2_StatsdSink *envoy_config_metrics_v2_StatsdSink_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_metrics_v2_StatsdSink *ret = envoy_config_metrics_v2_StatsdSink_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsdSink_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_metrics_v2_StatsdSink *envoy_config_metrics_v2_StatsdSink_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_metrics_v2_StatsdSink *ret = envoy_config_metrics_v2_StatsdSink_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_metrics_v2_StatsdSink_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_metrics_v2_StatsdSink_serialize(const envoy_config_metrics_v2_StatsdSink *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_metrics_v2_StatsdSink_msginit, arena, len);
}

typedef enum {
  envoy_config_metrics_v2_StatsdSink_statsd_specifier_address = 1,
  envoy_config_metrics_v2_StatsdSink_statsd_specifier_tcp_cluster_name = 2,
  envoy_config_metrics_v2_StatsdSink_statsd_specifier_NOT_SET = 0
} envoy_config_metrics_v2_StatsdSink_statsd_specifier_oneofcases;
UPB_INLINE envoy_config_metrics_v2_StatsdSink_statsd_specifier_oneofcases envoy_config_metrics_v2_StatsdSink_statsd_specifier_case(const envoy_config_metrics_v2_StatsdSink* msg) { return (envoy_config_metrics_v2_StatsdSink_statsd_specifier_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(16, 32), int32_t); }

UPB_INLINE bool envoy_config_metrics_v2_StatsdSink_has_address(const envoy_config_metrics_v2_StatsdSink *msg) { return _upb_getoneofcase(msg, UPB_SIZE(16, 32)) == 1; }
UPB_INLINE const struct envoy_api_v2_core_Address* envoy_config_metrics_v2_StatsdSink_address(const envoy_config_metrics_v2_StatsdSink *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_core_Address*, UPB_SIZE(8, 16), UPB_SIZE(16, 32), 1, NULL); }
UPB_INLINE bool envoy_config_metrics_v2_StatsdSink_has_tcp_cluster_name(const envoy_config_metrics_v2_StatsdSink *msg) { return _upb_getoneofcase(msg, UPB_SIZE(16, 32)) == 2; }
UPB_INLINE upb_strview envoy_config_metrics_v2_StatsdSink_tcp_cluster_name(const envoy_config_metrics_v2_StatsdSink *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(8, 16), UPB_SIZE(16, 32), 2, upb_strview_make("", strlen(""))); }
UPB_INLINE upb_strview envoy_config_metrics_v2_StatsdSink_prefix(const envoy_config_metrics_v2_StatsdSink *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void envoy_config_metrics_v2_StatsdSink_set_address(envoy_config_metrics_v2_StatsdSink *msg, struct envoy_api_v2_core_Address* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_core_Address*, UPB_SIZE(8, 16), value, UPB_SIZE(16, 32), 1);
}
UPB_INLINE struct envoy_api_v2_core_Address* envoy_config_metrics_v2_StatsdSink_mutable_address(envoy_config_metrics_v2_StatsdSink *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Address* sub = (struct envoy_api_v2_core_Address*)envoy_config_metrics_v2_StatsdSink_address(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Address*)_upb_msg_new(&envoy_api_v2_core_Address_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_StatsdSink_set_address(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_metrics_v2_StatsdSink_set_tcp_cluster_name(envoy_config_metrics_v2_StatsdSink *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(8, 16), value, UPB_SIZE(16, 32), 2);
}
UPB_INLINE void envoy_config_metrics_v2_StatsdSink_set_prefix(envoy_config_metrics_v2_StatsdSink *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

/* envoy.config.metrics.v2.DogStatsdSink */

UPB_INLINE envoy_config_metrics_v2_DogStatsdSink *envoy_config_metrics_v2_DogStatsdSink_new(upb_arena *arena) {
  return (envoy_config_metrics_v2_DogStatsdSink *)_upb_msg_new(&envoy_config_metrics_v2_DogStatsdSink_msginit, arena);
}
UPB_INLINE envoy_config_metrics_v2_DogStatsdSink *envoy_config_metrics_v2_DogStatsdSink_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_metrics_v2_DogStatsdSink *ret = envoy_config_metrics_v2_DogStatsdSink_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_metrics_v2_DogStatsdSink_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_metrics_v2_DogStatsdSink *envoy_config_metrics_v2_DogStatsdSink_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_metrics_v2_DogStatsdSink *ret = envoy_config_metrics_v2_DogStatsdSink_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_metrics_v2_DogStatsdSink_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_metrics_v2_DogStatsdSink_serialize(const envoy_config_metrics_v2_DogStatsdSink *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_metrics_v2_DogStatsdSink_msginit, arena, len);
}

typedef enum {
  envoy_config_metrics_v2_DogStatsdSink_dog_statsd_specifier_address = 1,
  envoy_config_metrics_v2_DogStatsdSink_dog_statsd_specifier_NOT_SET = 0
} envoy_config_metrics_v2_DogStatsdSink_dog_statsd_specifier_oneofcases;
UPB_INLINE envoy_config_metrics_v2_DogStatsdSink_dog_statsd_specifier_oneofcases envoy_config_metrics_v2_DogStatsdSink_dog_statsd_specifier_case(const envoy_config_metrics_v2_DogStatsdSink* msg) { return (envoy_config_metrics_v2_DogStatsdSink_dog_statsd_specifier_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE bool envoy_config_metrics_v2_DogStatsdSink_has_address(const envoy_config_metrics_v2_DogStatsdSink *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 1; }
UPB_INLINE const struct envoy_api_v2_core_Address* envoy_config_metrics_v2_DogStatsdSink_address(const envoy_config_metrics_v2_DogStatsdSink *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_core_Address*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 1, NULL); }
UPB_INLINE upb_strview envoy_config_metrics_v2_DogStatsdSink_prefix(const envoy_config_metrics_v2_DogStatsdSink *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void envoy_config_metrics_v2_DogStatsdSink_set_address(envoy_config_metrics_v2_DogStatsdSink *msg, struct envoy_api_v2_core_Address* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_core_Address*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 1);
}
UPB_INLINE struct envoy_api_v2_core_Address* envoy_config_metrics_v2_DogStatsdSink_mutable_address(envoy_config_metrics_v2_DogStatsdSink *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Address* sub = (struct envoy_api_v2_core_Address*)envoy_config_metrics_v2_DogStatsdSink_address(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Address*)_upb_msg_new(&envoy_api_v2_core_Address_msginit, arena);
    if (!sub) return NULL;
    envoy_config_metrics_v2_DogStatsdSink_set_address(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_metrics_v2_DogStatsdSink_set_prefix(envoy_config_metrics_v2_DogStatsdSink *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

/* envoy.config.metrics.v2.HystrixSink */

UPB_INLINE envoy_config_metrics_v2_HystrixSink *envoy_config_metrics_v2_HystrixSink_new(upb_arena *arena) {
  return (envoy_config_metrics_v2_HystrixSink *)_upb_msg_new(&envoy_config_metrics_v2_HystrixSink_msginit, arena);
}
UPB_INLINE envoy_config_metrics_v2_HystrixSink *envoy_config_metrics_v2_HystrixSink_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_metrics_v2_HystrixSink *ret = envoy_config_metrics_v2_HystrixSink_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_metrics_v2_HystrixSink_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_metrics_v2_HystrixSink *envoy_config_metrics_v2_HystrixSink_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_metrics_v2_HystrixSink *ret = envoy_config_metrics_v2_HystrixSink_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_metrics_v2_HystrixSink_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_metrics_v2_HystrixSink_serialize(const envoy_config_metrics_v2_HystrixSink *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_metrics_v2_HystrixSink_msginit, arena, len);
}

UPB_INLINE int64_t envoy_config_metrics_v2_HystrixSink_num_buckets(const envoy_config_metrics_v2_HystrixSink *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int64_t); }

UPB_INLINE void envoy_config_metrics_v2_HystrixSink_set_num_buckets(envoy_config_metrics_v2_HystrixSink *msg, int64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int64_t) = value;
}

extern const upb_msglayout_file envoy_config_metrics_v2_stats_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_METRICS_V2_STATS_PROTO_UPB_H_ */
