﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1337;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Security.Cryptography.RSA
struct RSA_t940;
// System.Security.Cryptography.DSA
struct DSA_t947;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m7320 (PrivateKeyInfo_t1337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m7321 (PrivateKeyInfo_t1337 * __this, ByteU5BU5D_t625* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t625* PrivateKeyInfo_get_PrivateKey_m7322 (PrivateKeyInfo_t1337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m7323 (PrivateKeyInfo_t1337 * __this, ByteU5BU5D_t625* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t625* PrivateKeyInfo_RemoveLeadingZero_m7324 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t625* PrivateKeyInfo_Normalize_m7325 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t940 * PrivateKeyInfo_DecodeRSA_m7326 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t947 * PrivateKeyInfo_DecodeDSA_m7327 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___privateKey, DSAParameters_t1050  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;