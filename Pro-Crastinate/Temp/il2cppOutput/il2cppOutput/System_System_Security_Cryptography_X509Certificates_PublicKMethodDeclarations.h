#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1126;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1124;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1026;
// System.Security.Cryptography.Oid
struct Oid_t1125;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t936;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.Security.Cryptography.DSA
struct DSA_t934;
// System.Security.Cryptography.RSA
struct RSA_t928;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5415 (PublicKey_t1126 * __this, X509Certificate_t936 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1124 * PublicKey_get_EncodedKeyValue_m5416 (PublicKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1124 * PublicKey_get_EncodedParameters_m5417 (PublicKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1026 * PublicKey_get_Key_m5418 (PublicKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1125 * PublicKey_get_Oid_m5419 (PublicKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t616* PublicKey_GetUnsignedBigInteger_m5420 (Object_t * __this /* static, unused */, ByteU5BU5D_t616* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t934 * PublicKey_DecodeDSA_m5421 (Object_t * __this /* static, unused */, ByteU5BU5D_t616* ___rawPublicKey, ByteU5BU5D_t616* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t928 * PublicKey_DecodeRSA_m5422 (Object_t * __this /* static, unused */, ByteU5BU5D_t616* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
