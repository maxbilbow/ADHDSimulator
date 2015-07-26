#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t942;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t935;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t941;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t936;
// System.Security.Cryptography.DSA
struct DSA_t934;
// System.Security.Cryptography.RSA
struct RSA_t928;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1026;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m4491 (X509Crl_t942 * __this, ByteU5BU5D_t616* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m4492 (X509Crl_t942 * __this, ByteU5BU5D_t616* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t935 * X509Crl_get_Extensions_m4493 (X509Crl_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t616* X509Crl_get_Hash_m4494 (X509Crl_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m4495 (X509Crl_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t578  X509Crl_get_NextUpdate_m4496 (X509Crl_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m4497 (X509Crl_t942 * __this, ByteU5BU5D_t616* ___array1, ByteU5BU5D_t616* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t941 * X509Crl_GetCrlEntry_m4498 (X509Crl_t942 * __this, X509Certificate_t936 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t941 * X509Crl_GetCrlEntry_m4499 (X509Crl_t942 * __this, ByteU5BU5D_t616* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m4500 (X509Crl_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m4501 (X509Crl_t942 * __this, DSA_t934 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m4502 (X509Crl_t942 * __this, RSA_t928 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m4503 (X509Crl_t942 * __this, AsymmetricAlgorithm_t1026 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
