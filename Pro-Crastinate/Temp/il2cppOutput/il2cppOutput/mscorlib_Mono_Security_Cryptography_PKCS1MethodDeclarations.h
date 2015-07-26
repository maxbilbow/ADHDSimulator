#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1324;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.Security.Cryptography.RSA
struct RSA_t928;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t877;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t919;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m7284 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m7285 (Object_t * __this /* static, unused */, ByteU5BU5D_t616* ___array1, ByteU5BU5D_t616* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t616* PKCS1_I2OSP_m7286 (Object_t * __this /* static, unused */, ByteU5BU5D_t616* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t616* PKCS1_OS2IP_m7287 (Object_t * __this /* static, unused */, ByteU5BU5D_t616* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t616* PKCS1_RSAEP_m7288 (Object_t * __this /* static, unused */, RSA_t928 * ___rsa, ByteU5BU5D_t616* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t616* PKCS1_RSASP1_m7289 (Object_t * __this /* static, unused */, RSA_t928 * ___rsa, ByteU5BU5D_t616* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t616* PKCS1_RSAVP1_m7290 (Object_t * __this /* static, unused */, RSA_t928 * ___rsa, ByteU5BU5D_t616* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t616* PKCS1_Encrypt_v15_m7291 (Object_t * __this /* static, unused */, RSA_t928 * ___rsa, RandomNumberGenerator_t877 * ___rng, ByteU5BU5D_t616* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t616* PKCS1_Sign_v15_m7292 (Object_t * __this /* static, unused */, RSA_t928 * ___rsa, HashAlgorithm_t919 * ___hash, ByteU5BU5D_t616* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m7293 (Object_t * __this /* static, unused */, RSA_t928 * ___rsa, HashAlgorithm_t919 * ___hash, ByteU5BU5D_t616* ___hashValue, ByteU5BU5D_t616* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m7294 (Object_t * __this /* static, unused */, RSA_t928 * ___rsa, HashAlgorithm_t919 * ___hash, ByteU5BU5D_t616* ___hashValue, ByteU5BU5D_t616* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t616* PKCS1_Encode_v15_m7295 (Object_t * __this /* static, unused */, HashAlgorithm_t919 * ___hash, ByteU5BU5D_t616* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
