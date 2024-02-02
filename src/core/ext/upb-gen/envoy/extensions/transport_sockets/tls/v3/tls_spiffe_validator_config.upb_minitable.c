/* This file was generated by upb_generator from the input file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/tls_spiffe_validator_config.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "envoy/extensions/transport_sockets/tls/v3/tls_spiffe_validator_config.upb_minitable.h"
#include "envoy/config/core/v3/base.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_submsgs[1] = {
  {.UPB_PRIVATE(submsg) = &envoy__extensions__transport_0sockets__tls__v3__SPIFFECertValidatorConfig__TrustDomain_msg_init},
};

static const upb_MiniTableField envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig__fields[1] = {
  {1, 8, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__extensions__transport_0sockets__tls__v3__SPIFFECertValidatorConfig_msg_init = {
  &envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig__fields[0],
  16, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_TrustDomain_submsgs[1] = {
  {.UPB_PRIVATE(submsg) = &envoy__config__core__v3__DataSource_msg_init},
};

static const upb_MiniTableField envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_TrustDomain__fields[2] = {
  {1, 16, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 32), 64, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__extensions__transport_0sockets__tls__v3__SPIFFECertValidatorConfig__TrustDomain_msg_init = {
  &envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_TrustDomain_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_SPIFFECertValidatorConfig_TrustDomain__fields[0],
  UPB_SIZE(24, 40), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001000003f00000a, &upb_pss_1bt},
  })
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy__extensions__transport_0sockets__tls__v3__SPIFFECertValidatorConfig_msg_init,
  &envoy__extensions__transport_0sockets__tls__v3__SPIFFECertValidatorConfig__TrustDomain_msg_init,
};

const upb_MiniTableFile envoy_extensions_transport_sockets_tls_v3_tls_spiffe_validator_config_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port/undef.inc"

