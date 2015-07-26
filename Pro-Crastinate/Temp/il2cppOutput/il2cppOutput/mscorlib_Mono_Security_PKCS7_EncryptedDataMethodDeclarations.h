#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1344;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1343;
// System.Byte[]
struct ByteU5BU5D_t616;
// Mono.Security.ASN1
struct ASN1_t1331;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m7454 (EncryptedData_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m7455 (EncryptedData_t1344 * __this, ASN1_t1331 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1343 * EncryptedData_get_EncryptionAlgorithm_m7456 (EncryptedData_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t616* EncryptedData_get_EncryptedContent_m7457 (EncryptedData_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
