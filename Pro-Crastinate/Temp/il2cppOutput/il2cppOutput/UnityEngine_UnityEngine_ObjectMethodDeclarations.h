#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t76;
struct Object_t76_marshaled;
// UnityEngine.Object[]
struct ObjectU5BU5D_t182;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m3321 (Object_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t76 * Object_Internal_CloneSingle_m3322 (Object_t * __this /* static, unused */, Object_t76 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t76 * Object_Internal_InstantiateSingle_m3323 (Object_t * __this /* static, unused */, Object_t76 * ___data, Vector3_t42  ___pos, Quaternion_t106  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t76 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m3324 (Object_t * __this /* static, unused */, Object_t76 * ___data, Vector3_t42 * ___pos, Quaternion_t106 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m702 (Object_t * __this /* static, unused */, Object_t76 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m690 (Object_t * __this /* static, unused */, Object_t76 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m3325 (Object_t * __this /* static, unused */, Object_t76 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m2561 (Object_t * __this /* static, unused */, Object_t76 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t182* Object_FindObjectsOfType_m563 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m508 (Object_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m2619 (Object_t76 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m924 (Object_t * __this /* static, unused */, Object_t76 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m2529 (Object_t76 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m3326 (Object_t * __this /* static, unused */, Object_t76 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C" void Object_DestroyObject_m600 (Object_t * __this /* static, unused */, Object_t76 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m3327 (Object_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C" bool Object_Equals_m3328 (Object_t76 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m3329 (Object_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3330 (Object_t * __this /* static, unused */, Object_t76 * ___lhs, Object_t76 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m3331 (Object_t * __this /* static, unused */, Object_t76 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m3332 (Object_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3333 (Object_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t76 * Object_Instantiate_m599 (Object_t * __this /* static, unused */, Object_t76 * ___original, Vector3_t42  ___position, Quaternion_t106  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m3334 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t76 * Object_FindObjectOfType_m3335 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m554 (Object_t * __this /* static, unused */, Object_t76 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m473 (Object_t * __this /* static, unused */, Object_t76 * ___x, Object_t76 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m548 (Object_t * __this /* static, unused */, Object_t76 * ___x, Object_t76 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Object_t76_marshal(const Object_t76& unmarshaled, Object_t76_marshaled& marshaled);
extern "C" void Object_t76_marshal_back(const Object_t76_marshaled& marshaled, Object_t76& unmarshaled);
extern "C" void Object_t76_marshal_cleanup(Object_t76_marshaled& marshaled);
