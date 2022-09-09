/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/init_dump.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V3_INIT_DUMP_PROTO_UPB_H_
#define ENVOY_ADMIN_V3_INIT_DUMP_PROTO_UPB_H_

#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/internal/array.h"
#include "upb/msg_internal.h"
#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_admin_v3_UnreadyTargetsDumps envoy_admin_v3_UnreadyTargetsDumps;
typedef struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump;
extern const upb_MiniTable envoy_admin_v3_UnreadyTargetsDumps_msg_init;
extern const upb_MiniTable envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msg_init;



/* envoy.admin.v3.UnreadyTargetsDumps */

UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps* envoy_admin_v3_UnreadyTargetsDumps_new(upb_Arena* arena) {
  return (envoy_admin_v3_UnreadyTargetsDumps*)_upb_Message_New(&envoy_admin_v3_UnreadyTargetsDumps_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps* envoy_admin_v3_UnreadyTargetsDumps_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_UnreadyTargetsDumps* ret = envoy_admin_v3_UnreadyTargetsDumps_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps* envoy_admin_v3_UnreadyTargetsDumps_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_UnreadyTargetsDumps* ret = envoy_admin_v3_UnreadyTargetsDumps_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_UnreadyTargetsDumps_serialize(const envoy_admin_v3_UnreadyTargetsDumps* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_UnreadyTargetsDumps_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_UnreadyTargetsDumps_serialize_ex(const envoy_admin_v3_UnreadyTargetsDumps* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_UnreadyTargetsDumps_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool envoy_admin_v3_UnreadyTargetsDumps_has_unready_targets_dumps(const envoy_admin_v3_UnreadyTargetsDumps* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0));
}
UPB_INLINE void envoy_admin_v3_UnreadyTargetsDumps_clear_unready_targets_dumps(const envoy_admin_v3_UnreadyTargetsDumps* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0));
}
UPB_INLINE const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* const* envoy_admin_v3_UnreadyTargetsDumps_unready_targets_dumps(const envoy_admin_v3_UnreadyTargetsDumps* msg, size_t* len) {
  return (const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len);
}

UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump** envoy_admin_v3_UnreadyTargetsDumps_mutable_unready_targets_dumps(envoy_admin_v3_UnreadyTargetsDumps* msg, size_t* len) {
  return (envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump** envoy_admin_v3_UnreadyTargetsDumps_resize_unready_targets_dumps(envoy_admin_v3_UnreadyTargetsDumps* msg, size_t len, upb_Arena* arena) {
  return (envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* envoy_admin_v3_UnreadyTargetsDumps_add_unready_targets_dumps(envoy_admin_v3_UnreadyTargetsDumps* msg, upb_Arena* arena) {
  struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* sub = (struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump*)_upb_Message_New(&envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msg_init, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.admin.v3.UnreadyTargetsDumps.UnreadyTargetsDump */

UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_new(upb_Arena* arena) {
  return (envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump*)_upb_Message_New(&envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* ret = envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* ret = envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_serialize(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_serialize_ex(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_clear_name(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_name(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_StringView);
}
UPB_INLINE void envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_clear_target_names(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg) {
  _upb_array_detach(msg, UPB_SIZE(8, 16));
}
UPB_INLINE upb_StringView const* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_target_names(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg, size_t* len) {
  return (upb_StringView const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len);
}

UPB_INLINE void envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_set_name(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_StringView) = value;
}
UPB_INLINE upb_StringView* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_mutable_target_names(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg, size_t* len) {
  return (upb_StringView*)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE upb_StringView* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_resize_target_names(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg, size_t len, upb_Arena* arena) {
  return (upb_StringView*)_upb_Array_Resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_add_target_names(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* msg, upb_StringView val, upb_Arena* arena) {
  return _upb_Array_Append_accessor2(msg, UPB_SIZE(8, 16), UPB_SIZE(3, 4), &val, arena);
}

extern const upb_MiniTable_File envoy_admin_v3_init_dump_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V3_INIT_DUMP_PROTO_UPB_H_ */
