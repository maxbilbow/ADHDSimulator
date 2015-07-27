#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t1148;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t145;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1151;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t1154;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1078;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern "C" void X509ChainElementCollection__ctor_m5538 (X509ChainElementCollection_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m5539 (X509ChainElementCollection_t1148 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m5540 (X509ChainElementCollection_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern "C" int32_t X509ChainElementCollection_get_Count_m5541 (X509ChainElementCollection_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
extern "C" bool X509ChainElementCollection_get_IsSynchronized_m5542 (X509ChainElementCollection_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern "C" X509ChainElement_t1151 * X509ChainElementCollection_get_Item_m5543 (X509ChainElementCollection_t1148 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern "C" Object_t * X509ChainElementCollection_get_SyncRoot_m5544 (X509ChainElementCollection_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::GetEnumerator()
extern "C" X509ChainElementEnumerator_t1154 * X509ChainElementCollection_GetEnumerator_m5545 (X509ChainElementCollection_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509ChainElementCollection_Add_m5546 (X509ChainElementCollection_t1148 * __this, X509Certificate2_t1078 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern "C" void X509ChainElementCollection_Clear_m5547 (X509ChainElementCollection_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509ChainElementCollection_Contains_m5548 (X509ChainElementCollection_t1148 * __this, X509Certificate2_t1078 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
