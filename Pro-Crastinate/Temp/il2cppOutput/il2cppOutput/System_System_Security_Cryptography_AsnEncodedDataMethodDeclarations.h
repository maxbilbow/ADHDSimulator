#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1124;
// System.Security.Cryptography.Oid
struct Oid_t1125;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C" void AsnEncodedData__ctor_m5591 (AsnEncodedData_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C" void AsnEncodedData__ctor_m5592 (AsnEncodedData_t1124 * __this, String_t* ___oid, ByteU5BU5D_t616* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C" void AsnEncodedData__ctor_m5593 (AsnEncodedData_t1124 * __this, Oid_t1125 * ___oid, ByteU5BU5D_t616* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C" Oid_t1125 * AsnEncodedData_get_Oid_m5594 (AsnEncodedData_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C" void AsnEncodedData_set_Oid_m5595 (AsnEncodedData_t1124 * __this, Oid_t1125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C" ByteU5BU5D_t616* AsnEncodedData_get_RawData_m5596 (AsnEncodedData_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C" void AsnEncodedData_set_RawData_m5597 (AsnEncodedData_t1124 * __this, ByteU5BU5D_t616* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void AsnEncodedData_CopyFrom_m5598 (AsnEncodedData_t1124 * __this, AsnEncodedData_t1124 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C" String_t* AsnEncodedData_ToString_m5599 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C" String_t* AsnEncodedData_Default_m5600 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_BasicConstraintsExtension_m5601 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_EnhancedKeyUsageExtension_m5602 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_KeyUsageExtension_m5603 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m5604 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectAltName_m5605 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C" String_t* AsnEncodedData_NetscapeCertType_m5606 (AsnEncodedData_t1124 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
