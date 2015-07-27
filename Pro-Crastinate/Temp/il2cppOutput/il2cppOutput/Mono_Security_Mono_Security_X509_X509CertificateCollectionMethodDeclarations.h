#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t944;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t946;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t949;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m4490 (X509CertificateCollection_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateCollection__ctor_m4491 (X509CertificateCollection_t944 * __this, X509CertificateCollection_t944 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m4492 (X509CertificateCollection_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t946 * X509CertificateCollection_get_Item_m4493 (X509CertificateCollection_t944 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_Add_m4494 (X509CertificateCollection_t944 * __this, X509Certificate_t946 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateCollection_AddRange_m4495 (X509CertificateCollection_t944 * __this, X509CertificateCollection_t944 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C" bool X509CertificateCollection_Contains_m4496 (X509CertificateCollection_t944 * __this, X509Certificate_t946 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t949 * X509CertificateCollection_GetEnumerator_m4497 (X509CertificateCollection_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m4498 (X509CertificateCollection_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_IndexOf_m4499 (X509CertificateCollection_t944 * __this, X509Certificate_t946 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C" void X509CertificateCollection_Remove_m4500 (X509CertificateCollection_t944 * __this, X509Certificate_t946 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" bool X509CertificateCollection_Compare_m4501 (X509CertificateCollection_t944 * __this, ByteU5BU5D_t625* ___array1, ByteU5BU5D_t625* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
