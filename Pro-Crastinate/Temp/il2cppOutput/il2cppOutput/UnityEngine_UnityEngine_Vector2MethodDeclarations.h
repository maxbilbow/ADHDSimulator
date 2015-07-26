#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector2
struct Vector2_t42;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m546 (Vector2_t42 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C" float Vector2_get_Item_m2443 (Vector2_t42 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern "C" void Vector2_set_Item_m2452 (Vector2_t42 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t42  Vector2_Scale_m2528 (Object_t * __this /* static, unused */, Vector2_t42  ___a, Vector2_t42  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::Normalize()
extern "C" void Vector2_Normalize_m3013 (Vector2_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C" Vector2_t42  Vector2_get_normalized_m584 (Vector2_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C" String_t* Vector2_ToString_m3014 (Vector2_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m3015 (Vector2_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" bool Vector2_Equals_m3016 (Vector2_t42 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Dot_m2313 (Object_t * __this /* static, unused */, Vector2_t42  ___lhs, Vector2_t42  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" float Vector2_get_magnitude_m915 (Vector2_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" float Vector2_get_sqrMagnitude_m2270 (Vector2_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m3017 (Object_t * __this /* static, unused */, Vector2_t42  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t42  Vector2_get_zero_m919 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" Vector2_t42  Vector2_get_one_m2439 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" Vector2_t42  Vector2_get_up_m2641 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t42  Vector2_op_Addition_m2441 (Object_t * __this /* static, unused */, Vector2_t42  ___a, Vector2_t42  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t42  Vector2_op_Subtraction_m958 (Object_t * __this /* static, unused */, Vector2_t42  ___a, Vector2_t42  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t42  Vector2_op_Multiply_m916 (Object_t * __this /* static, unused */, Vector2_t42  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t42  Vector2_op_Division_m2494 (Object_t * __this /* static, unused */, Vector2_t42  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m2674 (Object_t * __this /* static, unused */, Vector2_t42  ___lhs, Vector2_t42  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Inequality_m2520 (Object_t * __this /* static, unused */, Vector2_t42  ___lhs, Vector2_t42  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" Vector2_t42  Vector2_op_Implicit_m536 (Object_t * __this /* static, unused */, Vector3_t40  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" Vector3_t40  Vector2_op_Implicit_m580 (Object_t * __this /* static, unused */, Vector2_t42  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
