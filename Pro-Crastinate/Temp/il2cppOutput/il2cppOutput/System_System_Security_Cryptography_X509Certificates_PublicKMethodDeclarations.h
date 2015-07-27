#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1136;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t946;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1137;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1038;
// System.Security.Cryptography.Oid
struct Oid_t1138;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Security.Cryptography.DSA
struct DSA_t947;
// System.Security.Cryptography.RSA
struct RSA_t940;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5437 (PublicKey_t1136 * __this, X509Certificate_t946 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1137 * PublicKey_get_EncodedKeyValue_m5438 (PublicKey_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1137 * PublicKey_get_EncodedParameters_m5439 (PublicKey_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1038 * PublicKey_get_Key_m5440 (PublicKey_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1138 * PublicKey_get_Oid_m5441 (PublicKey_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t625* PublicKey_GetUnsignedBigInteger_m5442 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t947 * PublicKey_DecodeDSA_m5443 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___rawPublicKey, ByteU5BU5D_t625* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t940 * PublicKey_DecodeRSA_m5444 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
