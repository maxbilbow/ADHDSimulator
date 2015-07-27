#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1144;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1137;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C" void X509Extension__ctor_m5569 (X509Extension_t1144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m5570 (X509Extension_t1144 * __this, String_t* ___oid, ByteU5BU5D_t625* ___rawData, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m5571 (X509Extension_t1144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C" void X509Extension_set_Critical_m5572 (X509Extension_t1144 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509Extension_CopyFrom_m5573 (X509Extension_t1144 * __this, AsnEncodedData_t1137 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C" String_t* X509Extension_FormatUnkownData_m5574 (X509Extension_t1144 * __this, ByteU5BU5D_t625* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
