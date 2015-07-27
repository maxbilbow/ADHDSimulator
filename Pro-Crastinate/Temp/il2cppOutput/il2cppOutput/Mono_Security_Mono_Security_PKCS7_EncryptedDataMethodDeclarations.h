#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t924;
// Mono.Security.ASN1
struct ASN1_t919;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t923;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m4338 (EncryptedData_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m4339 (EncryptedData_t924 * __this, ASN1_t919 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t923 * EncryptedData_get_EncryptionAlgorithm_m4340 (EncryptedData_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t625* EncryptedData_get_EncryptedContent_m4341 (EncryptedData_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
