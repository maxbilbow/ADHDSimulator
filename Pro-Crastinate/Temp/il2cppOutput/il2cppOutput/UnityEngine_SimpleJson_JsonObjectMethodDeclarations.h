#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.JsonObject
struct JsonObject_t695;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t798;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t799;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t800;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t802;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void SimpleJson.JsonObject::.ctor()
extern "C" void JsonObject__ctor_m3689 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m3690 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m3691 (JsonObject_t695 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern "C" Object_t* JsonObject_get_Keys_m3692 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m3693 (JsonObject_t695 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern "C" Object_t* JsonObject_get_Values_m3694 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m3695 (JsonObject_t695 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m3696 (JsonObject_t695 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" void JsonObject_Add_m3697 (JsonObject_t695 * __this, KeyValuePair_2_t801  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m3698 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool JsonObject_Contains_m3699 (JsonObject_t695 * __this, KeyValuePair_2_t801  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C" void JsonObject_CopyTo_m3700 (JsonObject_t695 * __this, KeyValuePair_2U5BU5D_t800* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m3701 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m3702 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool JsonObject_Remove_m3703 (JsonObject_t695 * __this, KeyValuePair_2_t801  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C" Object_t* JsonObject_GetEnumerator_m3704 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m3705 (JsonObject_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
