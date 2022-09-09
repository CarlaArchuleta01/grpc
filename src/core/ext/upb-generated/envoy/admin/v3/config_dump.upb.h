/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/config_dump.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V3_CONFIG_DUMP_PROTO_UPB_H_
#define ENVOY_ADMIN_V3_CONFIG_DUMP_PROTO_UPB_H_

#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_admin_v3_ConfigDump envoy_admin_v3_ConfigDump;
typedef struct envoy_admin_v3_BootstrapConfigDump envoy_admin_v3_BootstrapConfigDump;
typedef struct envoy_admin_v3_SecretsConfigDump envoy_admin_v3_SecretsConfigDump;
typedef struct envoy_admin_v3_SecretsConfigDump_DynamicSecret envoy_admin_v3_SecretsConfigDump_DynamicSecret;
typedef struct envoy_admin_v3_SecretsConfigDump_StaticSecret envoy_admin_v3_SecretsConfigDump_StaticSecret;
extern const upb_MiniTable envoy_admin_v3_ConfigDump_msg_init;
extern const upb_MiniTable envoy_admin_v3_BootstrapConfigDump_msg_init;
extern const upb_MiniTable envoy_admin_v3_SecretsConfigDump_msg_init;
extern const upb_MiniTable envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init;
extern const upb_MiniTable envoy_admin_v3_SecretsConfigDump_StaticSecret_msg_init;
struct envoy_admin_v3_UpdateFailureState;
struct envoy_config_bootstrap_v3_Bootstrap;
struct google_protobuf_Any;
struct google_protobuf_Timestamp;
extern const upb_MiniTable envoy_admin_v3_UpdateFailureState_msg_init;
extern const upb_MiniTable envoy_config_bootstrap_v3_Bootstrap_msg_init;
extern const upb_MiniTable google_protobuf_Any_msg_init;
extern const upb_MiniTable google_protobuf_Timestamp_msg_init;



/* envoy.admin.v3.ConfigDump */

UPB_INLINE envoy_admin_v3_ConfigDump* envoy_admin_v3_ConfigDump_new(upb_Arena* arena) {
  return (envoy_admin_v3_ConfigDump*)_upb_Message_New(&envoy_admin_v3_ConfigDump_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_ConfigDump* envoy_admin_v3_ConfigDump_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_ConfigDump* ret = envoy_admin_v3_ConfigDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_ConfigDump_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_ConfigDump* envoy_admin_v3_ConfigDump_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_ConfigDump* ret = envoy_admin_v3_ConfigDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_ConfigDump_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_ConfigDump_serialize(const envoy_admin_v3_ConfigDump* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_ConfigDump_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_ConfigDump_serialize_ex(const envoy_admin_v3_ConfigDump* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_ConfigDump_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_admin_v3_ConfigDump_has_configs(const envoy_admin_v3_ConfigDump* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0));
}
UPB_INLINE void envoy_admin_v3_ConfigDump_clear_configs(const envoy_admin_v3_ConfigDump* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0));
}
UPB_INLINE const struct google_protobuf_Any* const* envoy_admin_v3_ConfigDump_configs(const envoy_admin_v3_ConfigDump* msg, size_t* len) {
  return (const struct google_protobuf_Any* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len);
}

UPB_INLINE struct google_protobuf_Any** envoy_admin_v3_ConfigDump_mutable_configs(envoy_admin_v3_ConfigDump* msg, size_t* len) {
  return (struct google_protobuf_Any**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE struct google_protobuf_Any** envoy_admin_v3_ConfigDump_resize_configs(envoy_admin_v3_ConfigDump* msg, size_t len, upb_Arena* arena) {
  return (struct google_protobuf_Any**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct google_protobuf_Any* envoy_admin_v3_ConfigDump_add_configs(envoy_admin_v3_ConfigDump* msg, upb_Arena* arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)_upb_Message_New(&google_protobuf_Any_msg_init, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.admin.v3.BootstrapConfigDump */

UPB_INLINE envoy_admin_v3_BootstrapConfigDump* envoy_admin_v3_BootstrapConfigDump_new(upb_Arena* arena) {
  return (envoy_admin_v3_BootstrapConfigDump*)_upb_Message_New(&envoy_admin_v3_BootstrapConfigDump_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_BootstrapConfigDump* envoy_admin_v3_BootstrapConfigDump_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_BootstrapConfigDump* ret = envoy_admin_v3_BootstrapConfigDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_BootstrapConfigDump_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_BootstrapConfigDump* envoy_admin_v3_BootstrapConfigDump_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_BootstrapConfigDump* ret = envoy_admin_v3_BootstrapConfigDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_BootstrapConfigDump_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_BootstrapConfigDump_serialize(const envoy_admin_v3_BootstrapConfigDump* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_BootstrapConfigDump_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_BootstrapConfigDump_serialize_ex(const envoy_admin_v3_BootstrapConfigDump* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_BootstrapConfigDump_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_admin_v3_BootstrapConfigDump_has_bootstrap(const envoy_admin_v3_BootstrapConfigDump* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_admin_v3_BootstrapConfigDump_clear_bootstrap(const envoy_admin_v3_BootstrapConfigDump* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const upb_Message*) = NULL;
  _upb_clearhas(msg, 1);
}
UPB_INLINE const struct envoy_config_bootstrap_v3_Bootstrap* envoy_admin_v3_BootstrapConfigDump_bootstrap(const envoy_admin_v3_BootstrapConfigDump* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_config_bootstrap_v3_Bootstrap*);
}
UPB_INLINE bool envoy_admin_v3_BootstrapConfigDump_has_last_updated(const envoy_admin_v3_BootstrapConfigDump* msg) {
  return _upb_hasbit(msg, 2);
}
UPB_INLINE void envoy_admin_v3_BootstrapConfigDump_clear_last_updated(const envoy_admin_v3_BootstrapConfigDump* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const upb_Message*) = NULL;
  _upb_clearhas(msg, 2);
}
UPB_INLINE const struct google_protobuf_Timestamp* envoy_admin_v3_BootstrapConfigDump_last_updated(const envoy_admin_v3_BootstrapConfigDump* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct google_protobuf_Timestamp*);
}

UPB_INLINE void envoy_admin_v3_BootstrapConfigDump_set_bootstrap(envoy_admin_v3_BootstrapConfigDump *msg, struct envoy_config_bootstrap_v3_Bootstrap* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_config_bootstrap_v3_Bootstrap*) = value;
}
UPB_INLINE struct envoy_config_bootstrap_v3_Bootstrap* envoy_admin_v3_BootstrapConfigDump_mutable_bootstrap(envoy_admin_v3_BootstrapConfigDump* msg, upb_Arena* arena) {
  struct envoy_config_bootstrap_v3_Bootstrap* sub = (struct envoy_config_bootstrap_v3_Bootstrap*)envoy_admin_v3_BootstrapConfigDump_bootstrap(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_bootstrap_v3_Bootstrap*)_upb_Message_New(&envoy_config_bootstrap_v3_Bootstrap_msg_init, arena);
    if (!sub) return NULL;
    envoy_admin_v3_BootstrapConfigDump_set_bootstrap(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_BootstrapConfigDump_set_last_updated(envoy_admin_v3_BootstrapConfigDump *msg, struct google_protobuf_Timestamp* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct google_protobuf_Timestamp*) = value;
}
UPB_INLINE struct google_protobuf_Timestamp* envoy_admin_v3_BootstrapConfigDump_mutable_last_updated(envoy_admin_v3_BootstrapConfigDump* msg, upb_Arena* arena) {
  struct google_protobuf_Timestamp* sub = (struct google_protobuf_Timestamp*)envoy_admin_v3_BootstrapConfigDump_last_updated(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Timestamp*)_upb_Message_New(&google_protobuf_Timestamp_msg_init, arena);
    if (!sub) return NULL;
    envoy_admin_v3_BootstrapConfigDump_set_last_updated(msg, sub);
  }
  return sub;
}

/* envoy.admin.v3.SecretsConfigDump */

UPB_INLINE envoy_admin_v3_SecretsConfigDump* envoy_admin_v3_SecretsConfigDump_new(upb_Arena* arena) {
  return (envoy_admin_v3_SecretsConfigDump*)_upb_Message_New(&envoy_admin_v3_SecretsConfigDump_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump* envoy_admin_v3_SecretsConfigDump_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_SecretsConfigDump* ret = envoy_admin_v3_SecretsConfigDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SecretsConfigDump_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump* envoy_admin_v3_SecretsConfigDump_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_SecretsConfigDump* ret = envoy_admin_v3_SecretsConfigDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SecretsConfigDump_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_SecretsConfigDump_serialize(const envoy_admin_v3_SecretsConfigDump* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SecretsConfigDump_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_SecretsConfigDump_serialize_ex(const envoy_admin_v3_SecretsConfigDump* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SecretsConfigDump_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_has_static_secrets(const envoy_admin_v3_SecretsConfigDump* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0));
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_clear_static_secrets(const envoy_admin_v3_SecretsConfigDump* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0));
}
UPB_INLINE const envoy_admin_v3_SecretsConfigDump_StaticSecret* const* envoy_admin_v3_SecretsConfigDump_static_secrets(const envoy_admin_v3_SecretsConfigDump* msg, size_t* len) {
  return (const envoy_admin_v3_SecretsConfigDump_StaticSecret* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_has_dynamic_active_secrets(const envoy_admin_v3_SecretsConfigDump* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8));
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_clear_dynamic_active_secrets(const envoy_admin_v3_SecretsConfigDump* msg) {
  _upb_array_detach(msg, UPB_SIZE(4, 8));
}
UPB_INLINE const envoy_admin_v3_SecretsConfigDump_DynamicSecret* const* envoy_admin_v3_SecretsConfigDump_dynamic_active_secrets(const envoy_admin_v3_SecretsConfigDump* msg, size_t* len) {
  return (const envoy_admin_v3_SecretsConfigDump_DynamicSecret* const*)_upb_array_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_has_dynamic_warming_secrets(const envoy_admin_v3_SecretsConfigDump* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16));
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_clear_dynamic_warming_secrets(const envoy_admin_v3_SecretsConfigDump* msg) {
  _upb_array_detach(msg, UPB_SIZE(8, 16));
}
UPB_INLINE const envoy_admin_v3_SecretsConfigDump_DynamicSecret* const* envoy_admin_v3_SecretsConfigDump_dynamic_warming_secrets(const envoy_admin_v3_SecretsConfigDump* msg, size_t* len) {
  return (const envoy_admin_v3_SecretsConfigDump_DynamicSecret* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len);
}

UPB_INLINE envoy_admin_v3_SecretsConfigDump_StaticSecret** envoy_admin_v3_SecretsConfigDump_mutable_static_secrets(envoy_admin_v3_SecretsConfigDump* msg, size_t* len) {
  return (envoy_admin_v3_SecretsConfigDump_StaticSecret**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_StaticSecret** envoy_admin_v3_SecretsConfigDump_resize_static_secrets(envoy_admin_v3_SecretsConfigDump* msg, size_t len, upb_Arena* arena) {
  return (envoy_admin_v3_SecretsConfigDump_StaticSecret**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v3_SecretsConfigDump_StaticSecret* envoy_admin_v3_SecretsConfigDump_add_static_secrets(envoy_admin_v3_SecretsConfigDump* msg, upb_Arena* arena) {
  struct envoy_admin_v3_SecretsConfigDump_StaticSecret* sub = (struct envoy_admin_v3_SecretsConfigDump_StaticSecret*)_upb_Message_New(&envoy_admin_v3_SecretsConfigDump_StaticSecret_msg_init, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_DynamicSecret** envoy_admin_v3_SecretsConfigDump_mutable_dynamic_active_secrets(envoy_admin_v3_SecretsConfigDump* msg, size_t* len) {
  return (envoy_admin_v3_SecretsConfigDump_DynamicSecret**)_upb_array_mutable_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_DynamicSecret** envoy_admin_v3_SecretsConfigDump_resize_dynamic_active_secrets(envoy_admin_v3_SecretsConfigDump* msg, size_t len, upb_Arena* arena) {
  return (envoy_admin_v3_SecretsConfigDump_DynamicSecret**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(4, 8), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v3_SecretsConfigDump_DynamicSecret* envoy_admin_v3_SecretsConfigDump_add_dynamic_active_secrets(envoy_admin_v3_SecretsConfigDump* msg, upb_Arena* arena) {
  struct envoy_admin_v3_SecretsConfigDump_DynamicSecret* sub = (struct envoy_admin_v3_SecretsConfigDump_DynamicSecret*)_upb_Message_New(&envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(4, 8), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_DynamicSecret** envoy_admin_v3_SecretsConfigDump_mutable_dynamic_warming_secrets(envoy_admin_v3_SecretsConfigDump* msg, size_t* len) {
  return (envoy_admin_v3_SecretsConfigDump_DynamicSecret**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_DynamicSecret** envoy_admin_v3_SecretsConfigDump_resize_dynamic_warming_secrets(envoy_admin_v3_SecretsConfigDump* msg, size_t len, upb_Arena* arena) {
  return (envoy_admin_v3_SecretsConfigDump_DynamicSecret**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v3_SecretsConfigDump_DynamicSecret* envoy_admin_v3_SecretsConfigDump_add_dynamic_warming_secrets(envoy_admin_v3_SecretsConfigDump* msg, upb_Arena* arena) {
  struct envoy_admin_v3_SecretsConfigDump_DynamicSecret* sub = (struct envoy_admin_v3_SecretsConfigDump_DynamicSecret*)_upb_Message_New(&envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.admin.v3.SecretsConfigDump.DynamicSecret */

UPB_INLINE envoy_admin_v3_SecretsConfigDump_DynamicSecret* envoy_admin_v3_SecretsConfigDump_DynamicSecret_new(upb_Arena* arena) {
  return (envoy_admin_v3_SecretsConfigDump_DynamicSecret*)_upb_Message_New(&envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_DynamicSecret* envoy_admin_v3_SecretsConfigDump_DynamicSecret_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_SecretsConfigDump_DynamicSecret* ret = envoy_admin_v3_SecretsConfigDump_DynamicSecret_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_DynamicSecret* envoy_admin_v3_SecretsConfigDump_DynamicSecret_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_SecretsConfigDump_DynamicSecret* ret = envoy_admin_v3_SecretsConfigDump_DynamicSecret_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_SecretsConfigDump_DynamicSecret_serialize(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_SecretsConfigDump_DynamicSecret_serialize_ex(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SecretsConfigDump_DynamicSecret_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_clear_name(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_admin_v3_SecretsConfigDump_DynamicSecret_name(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), upb_StringView);
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_clear_version_info(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_admin_v3_SecretsConfigDump_DynamicSecret_version_info(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 24), upb_StringView);
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_DynamicSecret_has_last_updated(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_clear_last_updated(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(24, 40), const upb_Message*) = NULL;
  _upb_clearhas(msg, 1);
}
UPB_INLINE const struct google_protobuf_Timestamp* envoy_admin_v3_SecretsConfigDump_DynamicSecret_last_updated(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(24, 40), const struct google_protobuf_Timestamp*);
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_DynamicSecret_has_secret(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return _upb_hasbit(msg, 2);
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_clear_secret(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(28, 48), const upb_Message*) = NULL;
  _upb_clearhas(msg, 2);
}
UPB_INLINE const struct google_protobuf_Any* envoy_admin_v3_SecretsConfigDump_DynamicSecret_secret(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(28, 48), const struct google_protobuf_Any*);
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_DynamicSecret_has_error_state(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return _upb_hasbit(msg, 3);
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_clear_error_state(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(32, 56), const upb_Message*) = NULL;
  _upb_clearhas(msg, 3);
}
UPB_INLINE const struct envoy_admin_v3_UpdateFailureState* envoy_admin_v3_SecretsConfigDump_DynamicSecret_error_state(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(32, 56), const struct envoy_admin_v3_UpdateFailureState*);
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_clear_client_status(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = 0;
}
UPB_INLINE int32_t envoy_admin_v3_SecretsConfigDump_DynamicSecret_client_status(const envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t);
}

UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_name(envoy_admin_v3_SecretsConfigDump_DynamicSecret *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_version_info(envoy_admin_v3_SecretsConfigDump_DynamicSecret *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_last_updated(envoy_admin_v3_SecretsConfigDump_DynamicSecret *msg, struct google_protobuf_Timestamp* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(24, 40), struct google_protobuf_Timestamp*) = value;
}
UPB_INLINE struct google_protobuf_Timestamp* envoy_admin_v3_SecretsConfigDump_DynamicSecret_mutable_last_updated(envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg, upb_Arena* arena) {
  struct google_protobuf_Timestamp* sub = (struct google_protobuf_Timestamp*)envoy_admin_v3_SecretsConfigDump_DynamicSecret_last_updated(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Timestamp*)_upb_Message_New(&google_protobuf_Timestamp_msg_init, arena);
    if (!sub) return NULL;
    envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_last_updated(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_secret(envoy_admin_v3_SecretsConfigDump_DynamicSecret *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(28, 48), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* envoy_admin_v3_SecretsConfigDump_DynamicSecret_mutable_secret(envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg, upb_Arena* arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_admin_v3_SecretsConfigDump_DynamicSecret_secret(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_Message_New(&google_protobuf_Any_msg_init, arena);
    if (!sub) return NULL;
    envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_secret(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_error_state(envoy_admin_v3_SecretsConfigDump_DynamicSecret *msg, struct envoy_admin_v3_UpdateFailureState* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(32, 56), struct envoy_admin_v3_UpdateFailureState*) = value;
}
UPB_INLINE struct envoy_admin_v3_UpdateFailureState* envoy_admin_v3_SecretsConfigDump_DynamicSecret_mutable_error_state(envoy_admin_v3_SecretsConfigDump_DynamicSecret* msg, upb_Arena* arena) {
  struct envoy_admin_v3_UpdateFailureState* sub = (struct envoy_admin_v3_UpdateFailureState*)envoy_admin_v3_SecretsConfigDump_DynamicSecret_error_state(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_UpdateFailureState*)_upb_Message_New(&envoy_admin_v3_UpdateFailureState_msg_init, arena);
    if (!sub) return NULL;
    envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_error_state(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_DynamicSecret_set_client_status(envoy_admin_v3_SecretsConfigDump_DynamicSecret *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = value;
}

/* envoy.admin.v3.SecretsConfigDump.StaticSecret */

UPB_INLINE envoy_admin_v3_SecretsConfigDump_StaticSecret* envoy_admin_v3_SecretsConfigDump_StaticSecret_new(upb_Arena* arena) {
  return (envoy_admin_v3_SecretsConfigDump_StaticSecret*)_upb_Message_New(&envoy_admin_v3_SecretsConfigDump_StaticSecret_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_StaticSecret* envoy_admin_v3_SecretsConfigDump_StaticSecret_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_SecretsConfigDump_StaticSecret* ret = envoy_admin_v3_SecretsConfigDump_StaticSecret_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SecretsConfigDump_StaticSecret_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_SecretsConfigDump_StaticSecret* envoy_admin_v3_SecretsConfigDump_StaticSecret_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_SecretsConfigDump_StaticSecret* ret = envoy_admin_v3_SecretsConfigDump_StaticSecret_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_SecretsConfigDump_StaticSecret_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_SecretsConfigDump_StaticSecret_serialize(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SecretsConfigDump_StaticSecret_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_SecretsConfigDump_StaticSecret_serialize_ex(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_SecretsConfigDump_StaticSecret_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_StaticSecret_clear_name(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_admin_v3_SecretsConfigDump_StaticSecret_name(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView);
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_StaticSecret_has_last_updated(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_StaticSecret_clear_last_updated(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const upb_Message*) = NULL;
  _upb_clearhas(msg, 1);
}
UPB_INLINE const struct google_protobuf_Timestamp* envoy_admin_v3_SecretsConfigDump_StaticSecret_last_updated(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct google_protobuf_Timestamp*);
}
UPB_INLINE bool envoy_admin_v3_SecretsConfigDump_StaticSecret_has_secret(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  return _upb_hasbit(msg, 2);
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_StaticSecret_clear_secret(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const upb_Message*) = NULL;
  _upb_clearhas(msg, 2);
}
UPB_INLINE const struct google_protobuf_Any* envoy_admin_v3_SecretsConfigDump_StaticSecret_secret(const envoy_admin_v3_SecretsConfigDump_StaticSecret* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct google_protobuf_Any*);
}

UPB_INLINE void envoy_admin_v3_SecretsConfigDump_StaticSecret_set_name(envoy_admin_v3_SecretsConfigDump_StaticSecret *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_StaticSecret_set_last_updated(envoy_admin_v3_SecretsConfigDump_StaticSecret *msg, struct google_protobuf_Timestamp* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct google_protobuf_Timestamp*) = value;
}
UPB_INLINE struct google_protobuf_Timestamp* envoy_admin_v3_SecretsConfigDump_StaticSecret_mutable_last_updated(envoy_admin_v3_SecretsConfigDump_StaticSecret* msg, upb_Arena* arena) {
  struct google_protobuf_Timestamp* sub = (struct google_protobuf_Timestamp*)envoy_admin_v3_SecretsConfigDump_StaticSecret_last_updated(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Timestamp*)_upb_Message_New(&google_protobuf_Timestamp_msg_init, arena);
    if (!sub) return NULL;
    envoy_admin_v3_SecretsConfigDump_StaticSecret_set_last_updated(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_SecretsConfigDump_StaticSecret_set_secret(envoy_admin_v3_SecretsConfigDump_StaticSecret *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* envoy_admin_v3_SecretsConfigDump_StaticSecret_mutable_secret(envoy_admin_v3_SecretsConfigDump_StaticSecret* msg, upb_Arena* arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_admin_v3_SecretsConfigDump_StaticSecret_secret(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_Message_New(&google_protobuf_Any_msg_init, arena);
    if (!sub) return NULL;
    envoy_admin_v3_SecretsConfigDump_StaticSecret_set_secret(msg, sub);
  }
  return sub;
}

extern const upb_MiniTable_File envoy_admin_v3_config_dump_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V3_CONFIG_DUMP_PROTO_UPB_H_ */
