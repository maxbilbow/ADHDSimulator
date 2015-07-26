#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1334;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1338;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1339;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m7403 (X509CertificateCollection_t1334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m7404 (X509CertificateCollection_t1334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t1338 * X509CertificateCollection_get_Item_m7405 (X509CertificateCollection_t1334 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_Add_m7406 (X509CertificateCollection_t1334 * __this, X509Certificate_t1338 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t1339 * X509CertificateCollection_GetEnumerator_m7407 (X509CertificateCollection_t1334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m7408 (X509CertificateCollection_t1334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
