/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/api/expr/v1alpha1/eval.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef GOOGLE_API_EXPR_V1ALPHA1_EVAL_PROTO_UPB_H_
#define GOOGLE_API_EXPR_V1ALPHA1_EVAL_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct google_api_expr_v1alpha1_EvalState;
struct google_api_expr_v1alpha1_EvalState_Result;
struct google_api_expr_v1alpha1_ExprValue;
struct google_api_expr_v1alpha1_ErrorSet;
struct google_api_expr_v1alpha1_UnknownSet;
typedef struct google_api_expr_v1alpha1_EvalState google_api_expr_v1alpha1_EvalState;
typedef struct google_api_expr_v1alpha1_EvalState_Result google_api_expr_v1alpha1_EvalState_Result;
typedef struct google_api_expr_v1alpha1_ExprValue google_api_expr_v1alpha1_ExprValue;
typedef struct google_api_expr_v1alpha1_ErrorSet google_api_expr_v1alpha1_ErrorSet;
typedef struct google_api_expr_v1alpha1_UnknownSet google_api_expr_v1alpha1_UnknownSet;
extern const upb_msglayout google_api_expr_v1alpha1_EvalState_msginit;
extern const upb_msglayout google_api_expr_v1alpha1_EvalState_Result_msginit;
extern const upb_msglayout google_api_expr_v1alpha1_ExprValue_msginit;
extern const upb_msglayout google_api_expr_v1alpha1_ErrorSet_msginit;
extern const upb_msglayout google_api_expr_v1alpha1_UnknownSet_msginit;
struct google_api_expr_v1alpha1_Value;
struct google_rpc_Status;
extern const upb_msglayout google_api_expr_v1alpha1_Value_msginit;
extern const upb_msglayout google_rpc_Status_msginit;


/* google.api.expr.v1alpha1.EvalState */

UPB_INLINE google_api_expr_v1alpha1_EvalState *google_api_expr_v1alpha1_EvalState_new(upb_arena *arena) {
  return (google_api_expr_v1alpha1_EvalState *)_upb_msg_new(&google_api_expr_v1alpha1_EvalState_msginit, arena);
}
UPB_INLINE google_api_expr_v1alpha1_EvalState *google_api_expr_v1alpha1_EvalState_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_api_expr_v1alpha1_EvalState *ret = google_api_expr_v1alpha1_EvalState_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &google_api_expr_v1alpha1_EvalState_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE google_api_expr_v1alpha1_EvalState *google_api_expr_v1alpha1_EvalState_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  google_api_expr_v1alpha1_EvalState *ret = google_api_expr_v1alpha1_EvalState_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &google_api_expr_v1alpha1_EvalState_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *google_api_expr_v1alpha1_EvalState_serialize(const google_api_expr_v1alpha1_EvalState *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_api_expr_v1alpha1_EvalState_msginit, arena, len);
}

UPB_INLINE bool google_api_expr_v1alpha1_EvalState_has_values(const google_api_expr_v1alpha1_EvalState *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const google_api_expr_v1alpha1_ExprValue* const* google_api_expr_v1alpha1_EvalState_values(const google_api_expr_v1alpha1_EvalState *msg, size_t *len) { return (const google_api_expr_v1alpha1_ExprValue* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }
UPB_INLINE bool google_api_expr_v1alpha1_EvalState_has_results(const google_api_expr_v1alpha1_EvalState *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8)); }
UPB_INLINE const google_api_expr_v1alpha1_EvalState_Result* const* google_api_expr_v1alpha1_EvalState_results(const google_api_expr_v1alpha1_EvalState *msg, size_t *len) { return (const google_api_expr_v1alpha1_EvalState_Result* const*)_upb_array_accessor(msg, UPB_SIZE(4, 8), len); }

UPB_INLINE google_api_expr_v1alpha1_ExprValue** google_api_expr_v1alpha1_EvalState_mutable_values(google_api_expr_v1alpha1_EvalState *msg, size_t *len) {
  return (google_api_expr_v1alpha1_ExprValue**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE google_api_expr_v1alpha1_ExprValue** google_api_expr_v1alpha1_EvalState_resize_values(google_api_expr_v1alpha1_EvalState *msg, size_t len, upb_arena *arena) {
  return (google_api_expr_v1alpha1_ExprValue**)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct google_api_expr_v1alpha1_ExprValue* google_api_expr_v1alpha1_EvalState_add_values(google_api_expr_v1alpha1_EvalState *msg, upb_arena *arena) {
  struct google_api_expr_v1alpha1_ExprValue* sub = (struct google_api_expr_v1alpha1_ExprValue*)_upb_msg_new(&google_api_expr_v1alpha1_ExprValue_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE google_api_expr_v1alpha1_EvalState_Result** google_api_expr_v1alpha1_EvalState_mutable_results(google_api_expr_v1alpha1_EvalState *msg, size_t *len) {
  return (google_api_expr_v1alpha1_EvalState_Result**)_upb_array_mutable_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE google_api_expr_v1alpha1_EvalState_Result** google_api_expr_v1alpha1_EvalState_resize_results(google_api_expr_v1alpha1_EvalState *msg, size_t len, upb_arena *arena) {
  return (google_api_expr_v1alpha1_EvalState_Result**)_upb_array_resize_accessor2(msg, UPB_SIZE(4, 8), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct google_api_expr_v1alpha1_EvalState_Result* google_api_expr_v1alpha1_EvalState_add_results(google_api_expr_v1alpha1_EvalState *msg, upb_arena *arena) {
  struct google_api_expr_v1alpha1_EvalState_Result* sub = (struct google_api_expr_v1alpha1_EvalState_Result*)_upb_msg_new(&google_api_expr_v1alpha1_EvalState_Result_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(4, 8), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* google.api.expr.v1alpha1.EvalState.Result */

UPB_INLINE google_api_expr_v1alpha1_EvalState_Result *google_api_expr_v1alpha1_EvalState_Result_new(upb_arena *arena) {
  return (google_api_expr_v1alpha1_EvalState_Result *)_upb_msg_new(&google_api_expr_v1alpha1_EvalState_Result_msginit, arena);
}
UPB_INLINE google_api_expr_v1alpha1_EvalState_Result *google_api_expr_v1alpha1_EvalState_Result_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_api_expr_v1alpha1_EvalState_Result *ret = google_api_expr_v1alpha1_EvalState_Result_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &google_api_expr_v1alpha1_EvalState_Result_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE google_api_expr_v1alpha1_EvalState_Result *google_api_expr_v1alpha1_EvalState_Result_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  google_api_expr_v1alpha1_EvalState_Result *ret = google_api_expr_v1alpha1_EvalState_Result_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &google_api_expr_v1alpha1_EvalState_Result_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *google_api_expr_v1alpha1_EvalState_Result_serialize(const google_api_expr_v1alpha1_EvalState_Result *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_api_expr_v1alpha1_EvalState_Result_msginit, arena, len);
}

UPB_INLINE int64_t google_api_expr_v1alpha1_EvalState_Result_expr(const google_api_expr_v1alpha1_EvalState_Result *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int64_t); }
UPB_INLINE int64_t google_api_expr_v1alpha1_EvalState_Result_value(const google_api_expr_v1alpha1_EvalState_Result *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int64_t); }

UPB_INLINE void google_api_expr_v1alpha1_EvalState_Result_set_expr(google_api_expr_v1alpha1_EvalState_Result *msg, int64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int64_t) = value;
}
UPB_INLINE void google_api_expr_v1alpha1_EvalState_Result_set_value(google_api_expr_v1alpha1_EvalState_Result *msg, int64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int64_t) = value;
}

/* google.api.expr.v1alpha1.ExprValue */

UPB_INLINE google_api_expr_v1alpha1_ExprValue *google_api_expr_v1alpha1_ExprValue_new(upb_arena *arena) {
  return (google_api_expr_v1alpha1_ExprValue *)_upb_msg_new(&google_api_expr_v1alpha1_ExprValue_msginit, arena);
}
UPB_INLINE google_api_expr_v1alpha1_ExprValue *google_api_expr_v1alpha1_ExprValue_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_api_expr_v1alpha1_ExprValue *ret = google_api_expr_v1alpha1_ExprValue_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &google_api_expr_v1alpha1_ExprValue_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE google_api_expr_v1alpha1_ExprValue *google_api_expr_v1alpha1_ExprValue_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  google_api_expr_v1alpha1_ExprValue *ret = google_api_expr_v1alpha1_ExprValue_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &google_api_expr_v1alpha1_ExprValue_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *google_api_expr_v1alpha1_ExprValue_serialize(const google_api_expr_v1alpha1_ExprValue *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_api_expr_v1alpha1_ExprValue_msginit, arena, len);
}

typedef enum {
  google_api_expr_v1alpha1_ExprValue_kind_value = 1,
  google_api_expr_v1alpha1_ExprValue_kind_error = 2,
  google_api_expr_v1alpha1_ExprValue_kind_unknown = 3,
  google_api_expr_v1alpha1_ExprValue_kind_NOT_SET = 0
} google_api_expr_v1alpha1_ExprValue_kind_oneofcases;
UPB_INLINE google_api_expr_v1alpha1_ExprValue_kind_oneofcases google_api_expr_v1alpha1_ExprValue_kind_case(const google_api_expr_v1alpha1_ExprValue* msg) { return (google_api_expr_v1alpha1_ExprValue_kind_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(4, 8), int32_t); }

UPB_INLINE bool google_api_expr_v1alpha1_ExprValue_has_value(const google_api_expr_v1alpha1_ExprValue *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 1; }
UPB_INLINE const struct google_api_expr_v1alpha1_Value* google_api_expr_v1alpha1_ExprValue_value(const google_api_expr_v1alpha1_ExprValue *msg) { return UPB_READ_ONEOF(msg, const struct google_api_expr_v1alpha1_Value*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 1, NULL); }
UPB_INLINE bool google_api_expr_v1alpha1_ExprValue_has_error(const google_api_expr_v1alpha1_ExprValue *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 2; }
UPB_INLINE const google_api_expr_v1alpha1_ErrorSet* google_api_expr_v1alpha1_ExprValue_error(const google_api_expr_v1alpha1_ExprValue *msg) { return UPB_READ_ONEOF(msg, const google_api_expr_v1alpha1_ErrorSet*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 2, NULL); }
UPB_INLINE bool google_api_expr_v1alpha1_ExprValue_has_unknown(const google_api_expr_v1alpha1_ExprValue *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 3; }
UPB_INLINE const google_api_expr_v1alpha1_UnknownSet* google_api_expr_v1alpha1_ExprValue_unknown(const google_api_expr_v1alpha1_ExprValue *msg) { return UPB_READ_ONEOF(msg, const google_api_expr_v1alpha1_UnknownSet*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 3, NULL); }

UPB_INLINE void google_api_expr_v1alpha1_ExprValue_set_value(google_api_expr_v1alpha1_ExprValue *msg, struct google_api_expr_v1alpha1_Value* value) {
  UPB_WRITE_ONEOF(msg, struct google_api_expr_v1alpha1_Value*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 1);
}
UPB_INLINE struct google_api_expr_v1alpha1_Value* google_api_expr_v1alpha1_ExprValue_mutable_value(google_api_expr_v1alpha1_ExprValue *msg, upb_arena *arena) {
  struct google_api_expr_v1alpha1_Value* sub = (struct google_api_expr_v1alpha1_Value*)google_api_expr_v1alpha1_ExprValue_value(msg);
  if (sub == NULL) {
    sub = (struct google_api_expr_v1alpha1_Value*)_upb_msg_new(&google_api_expr_v1alpha1_Value_msginit, arena);
    if (!sub) return NULL;
    google_api_expr_v1alpha1_ExprValue_set_value(msg, sub);
  }
  return sub;
}
UPB_INLINE void google_api_expr_v1alpha1_ExprValue_set_error(google_api_expr_v1alpha1_ExprValue *msg, google_api_expr_v1alpha1_ErrorSet* value) {
  UPB_WRITE_ONEOF(msg, google_api_expr_v1alpha1_ErrorSet*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 2);
}
UPB_INLINE struct google_api_expr_v1alpha1_ErrorSet* google_api_expr_v1alpha1_ExprValue_mutable_error(google_api_expr_v1alpha1_ExprValue *msg, upb_arena *arena) {
  struct google_api_expr_v1alpha1_ErrorSet* sub = (struct google_api_expr_v1alpha1_ErrorSet*)google_api_expr_v1alpha1_ExprValue_error(msg);
  if (sub == NULL) {
    sub = (struct google_api_expr_v1alpha1_ErrorSet*)_upb_msg_new(&google_api_expr_v1alpha1_ErrorSet_msginit, arena);
    if (!sub) return NULL;
    google_api_expr_v1alpha1_ExprValue_set_error(msg, sub);
  }
  return sub;
}
UPB_INLINE void google_api_expr_v1alpha1_ExprValue_set_unknown(google_api_expr_v1alpha1_ExprValue *msg, google_api_expr_v1alpha1_UnknownSet* value) {
  UPB_WRITE_ONEOF(msg, google_api_expr_v1alpha1_UnknownSet*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 3);
}
UPB_INLINE struct google_api_expr_v1alpha1_UnknownSet* google_api_expr_v1alpha1_ExprValue_mutable_unknown(google_api_expr_v1alpha1_ExprValue *msg, upb_arena *arena) {
  struct google_api_expr_v1alpha1_UnknownSet* sub = (struct google_api_expr_v1alpha1_UnknownSet*)google_api_expr_v1alpha1_ExprValue_unknown(msg);
  if (sub == NULL) {
    sub = (struct google_api_expr_v1alpha1_UnknownSet*)_upb_msg_new(&google_api_expr_v1alpha1_UnknownSet_msginit, arena);
    if (!sub) return NULL;
    google_api_expr_v1alpha1_ExprValue_set_unknown(msg, sub);
  }
  return sub;
}

/* google.api.expr.v1alpha1.ErrorSet */

UPB_INLINE google_api_expr_v1alpha1_ErrorSet *google_api_expr_v1alpha1_ErrorSet_new(upb_arena *arena) {
  return (google_api_expr_v1alpha1_ErrorSet *)_upb_msg_new(&google_api_expr_v1alpha1_ErrorSet_msginit, arena);
}
UPB_INLINE google_api_expr_v1alpha1_ErrorSet *google_api_expr_v1alpha1_ErrorSet_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_api_expr_v1alpha1_ErrorSet *ret = google_api_expr_v1alpha1_ErrorSet_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &google_api_expr_v1alpha1_ErrorSet_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE google_api_expr_v1alpha1_ErrorSet *google_api_expr_v1alpha1_ErrorSet_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  google_api_expr_v1alpha1_ErrorSet *ret = google_api_expr_v1alpha1_ErrorSet_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &google_api_expr_v1alpha1_ErrorSet_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *google_api_expr_v1alpha1_ErrorSet_serialize(const google_api_expr_v1alpha1_ErrorSet *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_api_expr_v1alpha1_ErrorSet_msginit, arena, len);
}

UPB_INLINE bool google_api_expr_v1alpha1_ErrorSet_has_errors(const google_api_expr_v1alpha1_ErrorSet *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct google_rpc_Status* const* google_api_expr_v1alpha1_ErrorSet_errors(const google_api_expr_v1alpha1_ErrorSet *msg, size_t *len) { return (const struct google_rpc_Status* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE struct google_rpc_Status** google_api_expr_v1alpha1_ErrorSet_mutable_errors(google_api_expr_v1alpha1_ErrorSet *msg, size_t *len) {
  return (struct google_rpc_Status**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE struct google_rpc_Status** google_api_expr_v1alpha1_ErrorSet_resize_errors(google_api_expr_v1alpha1_ErrorSet *msg, size_t len, upb_arena *arena) {
  return (struct google_rpc_Status**)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct google_rpc_Status* google_api_expr_v1alpha1_ErrorSet_add_errors(google_api_expr_v1alpha1_ErrorSet *msg, upb_arena *arena) {
  struct google_rpc_Status* sub = (struct google_rpc_Status*)_upb_msg_new(&google_rpc_Status_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* google.api.expr.v1alpha1.UnknownSet */

UPB_INLINE google_api_expr_v1alpha1_UnknownSet *google_api_expr_v1alpha1_UnknownSet_new(upb_arena *arena) {
  return (google_api_expr_v1alpha1_UnknownSet *)_upb_msg_new(&google_api_expr_v1alpha1_UnknownSet_msginit, arena);
}
UPB_INLINE google_api_expr_v1alpha1_UnknownSet *google_api_expr_v1alpha1_UnknownSet_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_api_expr_v1alpha1_UnknownSet *ret = google_api_expr_v1alpha1_UnknownSet_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &google_api_expr_v1alpha1_UnknownSet_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE google_api_expr_v1alpha1_UnknownSet *google_api_expr_v1alpha1_UnknownSet_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  google_api_expr_v1alpha1_UnknownSet *ret = google_api_expr_v1alpha1_UnknownSet_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &google_api_expr_v1alpha1_UnknownSet_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *google_api_expr_v1alpha1_UnknownSet_serialize(const google_api_expr_v1alpha1_UnknownSet *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_api_expr_v1alpha1_UnknownSet_msginit, arena, len);
}

UPB_INLINE int64_t const* google_api_expr_v1alpha1_UnknownSet_exprs(const google_api_expr_v1alpha1_UnknownSet *msg, size_t *len) { return (int64_t const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE int64_t* google_api_expr_v1alpha1_UnknownSet_mutable_exprs(google_api_expr_v1alpha1_UnknownSet *msg, size_t *len) {
  return (int64_t*)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE int64_t* google_api_expr_v1alpha1_UnknownSet_resize_exprs(google_api_expr_v1alpha1_UnknownSet *msg, size_t len, upb_arena *arena) {
  return (int64_t*)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, 3, arena);
}
UPB_INLINE bool google_api_expr_v1alpha1_UnknownSet_add_exprs(google_api_expr_v1alpha1_UnknownSet *msg, int64_t val, upb_arena *arena) {
  return _upb_array_append_accessor2(msg, UPB_SIZE(0, 0), 3, &val,
      arena);
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* GOOGLE_API_EXPR_V1ALPHA1_EVAL_PROTO_UPB_H_ */
