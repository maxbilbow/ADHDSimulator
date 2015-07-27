#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte[]
struct ByteU5BU5D_t625;
// System.Security.Cryptography.RSA
struct RSA_t940;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m7238 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m7239 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t625* CryptoConvert_GetBytesLE_m7240 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t625* CryptoConvert_ToCapiPrivateKeyBlob_m7241 (Object_t * __this /* static, unused */, RSA_t940 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t940 * CryptoConvert_FromCapiPublicKeyBlob_m7242 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t940 * CryptoConvert_FromCapiPublicKeyBlob_m7243 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t625* CryptoConvert_ToCapiPublicKeyBlob_m7244 (Object_t * __this /* static, unused */, RSA_t940 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t625* CryptoConvert_ToCapiKeyBlob_m7245 (Object_t * __this /* static, unused */, RSA_t940 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
