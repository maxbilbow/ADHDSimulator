#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t912;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t911;
// System.Byte[]
struct ByteU5BU5D_t616;
// Mono.Security.ASN1
struct ASN1_t908;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m4315 (EncryptedData_t912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m4316 (EncryptedData_t912 * __this, ASN1_t908 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t911 * EncryptedData_get_EncryptionAlgorithm_m4317 (EncryptedData_t912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t616* EncryptedData_get_EncryptedContent_m4318 (EncryptedData_t912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
