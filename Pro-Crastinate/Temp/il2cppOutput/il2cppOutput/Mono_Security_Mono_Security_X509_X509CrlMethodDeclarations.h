#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t954;
// System.Byte[]
struct ByteU5BU5D_t625;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t948;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t953;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t946;
// System.Security.Cryptography.DSA
struct DSA_t947;
// System.Security.Cryptography.RSA
struct RSA_t940;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1038;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m4516 (X509Crl_t954 * __this, ByteU5BU5D_t625* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m4517 (X509Crl_t954 * __this, ByteU5BU5D_t625* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t948 * X509Crl_get_Extensions_m4518 (X509Crl_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t625* X509Crl_get_Hash_m4519 (X509Crl_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m4520 (X509Crl_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t586  X509Crl_get_NextUpdate_m4521 (X509Crl_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m4522 (X509Crl_t954 * __this, ByteU5BU5D_t625* ___array1, ByteU5BU5D_t625* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t953 * X509Crl_GetCrlEntry_m4523 (X509Crl_t954 * __this, X509Certificate_t946 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t953 * X509Crl_GetCrlEntry_m4524 (X509Crl_t954 * __this, ByteU5BU5D_t625* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m4525 (X509Crl_t954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m4526 (X509Crl_t954 * __this, DSA_t947 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m4527 (X509Crl_t954 * __this, RSA_t940 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m4528 (X509Crl_t954 * __this, AsymmetricAlgorithm_t1038 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
