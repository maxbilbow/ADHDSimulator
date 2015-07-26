#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Procrastinate.BodyBecomesActive
#include "AssemblyU2DCSharp_Procrastinate_BodyBecomesActive.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.BodyBecomesActive
#include "AssemblyU2DCSharp_Procrastinate_BodyBecomesActiveMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// Procrastinate.ABonus`2<UnityEngine.Rigidbody2D,System.Single>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_gen.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// System.Void
#include "mscorlib_System_Void.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// Procrastinate.ABonus`2<UnityEngine.Rigidbody2D,System.Single>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_genMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void Procrastinate.BodyBecomesActive::.ctor()
extern const MethodInfo* ABonus_2__ctor_m871_MethodInfo_var;
extern "C" void BodyBecomesActive__ctor_m706 (BodyBecomesActive_t202 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ABonus_2__ctor_m871_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483703);
		s_Il2CppMethodIntialized = true;
	}
	{
		ABonus_2__ctor_m871(__this, /*hidden argument*/ABonus_2__ctor_m871_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.BodyBecomesActive::OnApplicationFocus(System.Boolean)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* ABonus_2_OnApplicationFocus_m872_MethodInfo_var;
extern "C" void BodyBecomesActive_OnApplicationFocus_m707 (BodyBecomesActive_t202 * __this, bool ___focus, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ABonus_2_OnApplicationFocus_m872_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483704);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (((ABonus_2_t203 *)__this)->___key_4);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		int32_t L_4 = 1;
		Object_t * L_5 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m418(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		bool L_8 = ___focus;
		ABonus_2_OnApplicationFocus_m872(__this, L_8, /*hidden argument*/ABonus_2_OnApplicationFocus_m872_MethodInfo_var);
	}

IL_002c:
	{
		return;
	}
}
// System.Void Procrastinate.BodyBecomesActive::Activate()
extern const MethodInfo* ABonus_2_Activate_m873_MethodInfo_var;
extern "C" void BodyBecomesActive_Activate_m708 (BodyBecomesActive_t202 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ABonus_2_Activate_m873_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		s_Il2CppMethodIntialized = true;
	}
	{
		ABonus_2_Activate_m873(__this, /*hidden argument*/ABonus_2_Activate_m873_MethodInfo_var);
		Rigidbody2D_t46 * L_0 = (((ABonus_2_t203 *)__this)->___component_8);
		NullCheck(L_0);
		Rigidbody2D_set_isKinematic_m874(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.BodyBecomesActive::Deactivate()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* ABonus_2_Deactivate_m875_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral101;
extern "C" void BodyBecomesActive_Deactivate_m709 (BodyBecomesActive_t202 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ABonus_2_Deactivate_m875_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		_stringLiteral101 = il2cpp_codegen_string_literal_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Rigidbody2D_t46 * L_0 = (((ABonus_2_t203 *)__this)->___component_8);
		NullCheck(L_0);
		Rigidbody2D_set_isKinematic_m874(L_0, 1, /*hidden argument*/NULL);
		ABonus_2_Deactivate_m875(__this, /*hidden argument*/ABonus_2_Deactivate_m875_MethodInfo_var);
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Object)
		MonoBehaviour_print_m876(NULL /*static, unused*/, _stringLiteral101, /*hidden argument*/NULL);
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		return;
	}
}
// System.Boolean Procrastinate.BodyBecomesActive::get_isBonusActive()
extern "C" bool BodyBecomesActive_get_isBonusActive_m710 (BodyBecomesActive_t202 * __this, const MethodInfo* method)
{
	{
		Rigidbody2D_t46 * L_0 = (((ABonus_2_t203 *)__this)->___component_8);
		NullCheck(L_0);
		bool L_1 = Rigidbody2D_get_isKinematic_m877(L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviourMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Procrastinate.Event
#include "AssemblyU2DCSharp_Procrastinate_Event.h"
// RMX.Event
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Event.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.List`1/Enumerator<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// Procrastinate.ClockSpawner
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawner.h"
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2D.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// System.Predicate`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Predicate_1_gen_0.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.ClockSpawner>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_1MethodDeclarations.h"
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.GeometryUtility
#include "UnityEngine_UnityEngine_GeometryUtilityMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// Procrastinate.ClockSpawner
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawnerMethodDeclarations.h"
// System.Predicate`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Predicate_1_gen_0MethodDeclarations.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
struct Component_t174;
struct SpriteRenderer_t255;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t174;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m531_gshared (Component_t174 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m531(__this, method) (( Object_t * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m531_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t255_m878(__this, method) (( SpriteRenderer_t255 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m531_gshared)(__this, method)
struct Component_t174;
struct Rigidbody2D_t46;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t46_m534(__this, method) (( Rigidbody2D_t46 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m531_gshared)(__this, method)
struct Component_t174;
struct CircleCollider2D_t256;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
#define Component_GetComponent_TisCircleCollider2D_t256_m879(__this, method) (( CircleCollider2D_t256 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m531_gshared)(__this, method)
struct GameObject_t9;
struct Collider2D_t139;
struct GameObject_t9;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m588_gshared (GameObject_t9 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m588(__this, method) (( Object_t * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
#define GameObject_GetComponent_TisCollider2D_t139_m880(__this, method) (( Collider2D_t139 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
struct GameObject_t9;
struct CircleCollider2D_t256;
struct GameObject_t9;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m564_gshared (GameObject_t9 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m564(__this, method) (( Object_t * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CircleCollider2D>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CircleCollider2D>()
#define GameObject_AddComponent_TisCircleCollider2D_t256_m881(__this, method) (( CircleCollider2D_t256 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct Rigidbody2D_t46;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody2D>()
#define GameObject_AddComponent_TisRigidbody2D_t46_m882(__this, method) (( Rigidbody2D_t46 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct SpriteRenderer_t255;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
#define GameObject_AddComponent_TisSpriteRenderer_t255_m883(__this, method) (( SpriteRenderer_t255 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct ClockBehaviour_t204;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Procrastinate.ClockBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Procrastinate.ClockBehaviour>()
#define GameObject_AddComponent_TisClockBehaviour_t204_m884(__this, method) (( ClockBehaviour_t204 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)


// System.Void Procrastinate.ClockBehaviour::.ctor()
extern TypeInfo* RMXObject_t32_il2cpp_TypeInfo_var;
extern "C" void ClockBehaviour__ctor_m711 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXObject_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___maxSizeOfInflatable_8 = (10.0f);
		__this->___isOnScreen_9 = 1;
		__this->___MaxTimeOffScreen_11 = (30.0f);
		__this->___OffScreenLimit_12 = (2.0f);
		__this->___maxVelocity_13 = (15.0f);
		Vector3_t40  L_0 = Vector3_get_zero_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastScale_14 = L_0;
		__this->___inflationSpeed_15 = (0.1f);
		__this->___lifeSpan_17 = (std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t32_il2cpp_TypeInfo_var);
		RMXObject__ctor_m69(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.ClockBehaviour::get_didPop()
extern TypeInfo* Event_t218_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern "C" bool ClockBehaviour_get_didPop_m712 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	Color_t200  V_0 = {0};
	{
		float L_0 = (__this->___inflationSpeed_15);
		__this->___inflationSpeed_15 = ((float)((float)L_0*(float)(0.975f)));
		Transform_t38 * L_1 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		Transform_t38 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t40  L_3 = Transform_get_localScale_m549(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___inflationSpeed_15);
		Vector3_t40  L_5 = Vector3_op_Multiply_m517(NULL /*static, unused*/, L_3, ((float)((float)(1.0f)+(float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_m550(L_2, L_5, /*hidden argument*/NULL);
		float L_6 = (__this->___inflationSpeed_15);
		if ((!(((double)(((double)L_6))) < ((double)(0.0004)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_7 = 3;
		Object_t * L_8 = Box(Event_t218_il2cpp_TypeInfo_var, &L_7);
		RMXObject_DidCauseEvent_m76(__this, (Enum_t5 *)L_8, /*hidden argument*/NULL);
		int32_t L_9 = 2;
		Object_t * L_10 = Box(Event_t218_il2cpp_TypeInfo_var, &L_9);
		RMXObject_DidFinishEvent_m75(__this, (Enum_t5 *)L_10, /*hidden argument*/NULL);
		int32_t L_11 = 4;
		Object_t * L_12 = Box(Event_t22_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = ((int32_t)12);
		Object_t * L_14 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_13);
		RMXObject_DidCauseEvent_m80(__this, (Enum_t5 *)L_12, L_14, /*hidden argument*/NULL);
		GameObject_t9 * L_15 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		Object_Destroy_m423(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		return 1;
	}

IL_0081:
	{
		float L_16 = (__this->___inflationSpeed_15);
		if ((!(((double)(((double)L_16))) < ((double)(0.005)))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_17 = 2;
		Object_t * L_18 = Box(Event_t218_il2cpp_TypeInfo_var, &L_17);
		RMXObject_WillBeginEvent_m73(__this, (Enum_t5 *)L_18, /*hidden argument*/NULL);
		SpriteRenderer_t255 * L_19 = ClockBehaviour_get_spriteRenderer_m713(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Color_t200  L_20 = SpriteRenderer_get_color_m885(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		SpriteRenderer_t255 * L_21 = ClockBehaviour_get_spriteRenderer_m713(__this, /*hidden argument*/NULL);
		float L_22 = ((&V_0)->___r_0);
		float L_23 = ((&V_0)->___g_1);
		float L_24 = ((&V_0)->___b_2);
		Color_t200  L_25 = {0};
		Color__ctor_m886(&L_25, ((float)((float)L_22*(float)(1.01f))), ((float)((float)L_23*(float)(0.98f))), ((float)((float)L_24*(float)(0.99f))), /*hidden argument*/NULL);
		NullCheck(L_21);
		SpriteRenderer_set_color_m887(L_21, L_25, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		Transform_t38 * L_26 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t40  L_27 = Transform_get_localScale_m549(L_26, /*hidden argument*/NULL);
		__this->___lastScale_14 = L_27;
		return 0;
	}
}
// UnityEngine.SpriteRenderer Procrastinate.ClockBehaviour::get_spriteRenderer()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t255_m878_MethodInfo_var;
extern "C" SpriteRenderer_t255 * ClockBehaviour_get_spriteRenderer_m713 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t255_m878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t255 * L_0 = Component_GetComponent_TisSpriteRenderer_t255_m878(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t255_m878_MethodInfo_var);
		return L_0;
	}
}
// System.Boolean Procrastinate.ClockBehaviour::IsVisible(Procrastinate.ClockBehaviour)
extern const MethodInfo* GameObject_GetComponent_TisCollider2D_t139_m880_MethodInfo_var;
extern "C" bool ClockBehaviour_IsVisible_m714 (Object_t * __this /* static, unused */, ClockBehaviour_t204 * ___clock, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCollider2D_t139_m880_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		ClockBehaviour_t204 * L_0 = ___clock;
		NullCheck(L_0);
		bool L_1 = (L_0->___isOnScreen_9);
		V_0 = L_1;
		ClockBehaviour_t204 * L_2 = ___clock;
		Camera_t82 * L_3 = Camera_get_main_m646(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlaneU5BU5D_t260* L_4 = GeometryUtility_CalculateFrustumPlanes_m888(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ClockBehaviour_t204 * L_5 = ___clock;
		NullCheck(L_5);
		GameObject_t9 * L_6 = Component_get_gameObject_m422(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Collider2D_t139 * L_7 = GameObject_GetComponent_TisCollider2D_t139_m880(L_6, /*hidden argument*/GameObject_GetComponent_TisCollider2D_t139_m880_MethodInfo_var);
		NullCheck(L_7);
		Bounds_t257  L_8 = Collider2D_get_bounds_m889(L_7, /*hidden argument*/NULL);
		bool L_9 = GeometryUtility_TestPlanesAABB_m890(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___isOnScreen_9 = L_9;
		bool L_10 = V_0;
		ClockBehaviour_t204 * L_11 = ___clock;
		NullCheck(L_11);
		bool L_12 = (L_11->___isOnScreen_9);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_0043;
		}
	}
	{
		ClockBehaviour_t204 * L_13 = ___clock;
		float L_14 = Time_get_fixedTime_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___fellOffAtTime_10 = L_14;
	}

IL_0043:
	{
		ClockBehaviour_t204 * L_15 = ___clock;
		NullCheck(L_15);
		bool L_16 = (L_15->___isOnScreen_9);
		return L_16;
	}
}
// System.Int32 Procrastinate.ClockBehaviour::get_VisibleClockCount()
extern TypeInfo* ASingleton_1_t208_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m891_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m892_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m893_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m894_MethodInfo_var;
extern "C" int32_t ClockBehaviour_get_VisibleClockCount_m715 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		Enumerator_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ASingleton_1_get_current_m891_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		List_1_GetEnumerator_m892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		Enumerator_get_Current_m893_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		Enumerator_MoveNext_m894_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483712);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ClockBehaviour_t204 * V_1 = {0};
	Enumerator_t261  V_2 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ClockSpawner_t207 * L_0 = ASingleton_1_get_current_m891(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m891_MethodInfo_var);
		NullCheck(L_0);
		List_1_t206 * L_1 = (L_0->___clocks_9);
		NullCheck(L_1);
		Enumerator_t261  L_2 = List_1_GetEnumerator_m892(L_1, /*hidden argument*/List_1_GetEnumerator_m892_MethodInfo_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0017:
		{
			ClockBehaviour_t204 * L_3 = Enumerator_get_Current_m893((&V_2), /*hidden argument*/Enumerator_get_Current_m893_MethodInfo_var);
			V_1 = L_3;
			ClockBehaviour_t204 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = (L_4->___isOnScreen_9);
			if (!L_5)
			{
				goto IL_002e;
			}
		}

IL_002a:
		{
			int32_t L_6 = V_0;
			V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		}

IL_002e:
		{
			bool L_7 = Enumerator_MoveNext_m894((&V_2), /*hidden argument*/Enumerator_MoveNext_m894_MethodInfo_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Enumerator_t261  L_8 = V_2;
		Enumerator_t261  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t261_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_10);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_004b:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.Rigidbody2D Procrastinate.ClockBehaviour::get_body()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t46_m534_MethodInfo_var;
extern "C" Rigidbody2D_t46 * ClockBehaviour_get_body_m716 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody2D_t46_m534_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t46 * L_0 = Component_GetComponent_TisRigidbody2D_t46_m534(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t46_m534_MethodInfo_var);
		return L_0;
	}
}
// UnityEngine.CircleCollider2D Procrastinate.ClockBehaviour::get_collisionBody()
extern const MethodInfo* Component_GetComponent_TisCircleCollider2D_t256_m879_MethodInfo_var;
extern "C" CircleCollider2D_t256 * ClockBehaviour_get_collisionBody_m717 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCircleCollider2D_t256_m879_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	{
		CircleCollider2D_t256 * L_0 = Component_GetComponent_TisCircleCollider2D_t256_m879(__this, /*hidden argument*/Component_GetComponent_TisCircleCollider2D_t256_m879_MethodInfo_var);
		return L_0;
	}
}
// Procrastinate.ClockBehaviour Procrastinate.ClockBehaviour::New()
extern TypeInfo* GameObject_t9_il2cpp_TypeInfo_var;
extern TypeInfo* ClockBehaviour_t204_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t208_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCircleCollider2D_t256_m881_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody2D_t46_m882_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSpriteRenderer_t255_m883_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t255_m878_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisClockBehaviour_t204_m884_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m891_MethodInfo_var;
extern "C" ClockBehaviour_t204 * ClockBehaviour_New_m718 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ClockBehaviour_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		ASingleton_1_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		GameObject_AddComponent_TisCircleCollider2D_t256_m881_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		GameObject_AddComponent_TisRigidbody2D_t46_m882_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		GameObject_AddComponent_TisSpriteRenderer_t255_m883_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Component_GetComponent_TisSpriteRenderer_t255_m878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		GameObject_AddComponent_TisClockBehaviour_t204_m884_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		ASingleton_1_get_current_m891_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t9 * V_0 = {0};
	CircleCollider2D_t256 * V_1 = {0};
	Rigidbody2D_t46 * V_2 = {0};
	SpriteRenderer_t255 * V_3 = {0};
	ClockBehaviour_t204 * V_4 = {0};
	{
		GameObject_t9 * L_0 = (GameObject_t9 *)il2cpp_codegen_object_new (GameObject_t9_il2cpp_TypeInfo_var);
		GameObject__ctor_m895(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t9 * L_1 = V_0;
		NullCheck(L_1);
		CircleCollider2D_t256 * L_2 = GameObject_AddComponent_TisCircleCollider2D_t256_m881(L_1, /*hidden argument*/GameObject_AddComponent_TisCircleCollider2D_t256_m881_MethodInfo_var);
		V_1 = L_2;
		CircleCollider2D_t256 * L_3 = V_1;
		ClockBehaviour_t204 * L_4 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		NullCheck(L_4);
		CircleCollider2D_t256 * L_5 = ClockBehaviour_get_collisionBody_m717(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = CircleCollider2D_get_radius_m896(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		CircleCollider2D_set_radius_m897(L_3, L_6, /*hidden argument*/NULL);
		GameObject_t9 * L_7 = V_0;
		NullCheck(L_7);
		Rigidbody2D_t46 * L_8 = GameObject_AddComponent_TisRigidbody2D_t46_m882(L_7, /*hidden argument*/GameObject_AddComponent_TisRigidbody2D_t46_m882_MethodInfo_var);
		V_2 = L_8;
		Rigidbody2D_t46 * L_9 = V_2;
		ClockBehaviour_t204 * L_10 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		NullCheck(L_10);
		Rigidbody2D_t46 * L_11 = ClockBehaviour_get_body_m716(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12 = Rigidbody2D_get_mass_m898(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_set_mass_m899(L_9, L_12, /*hidden argument*/NULL);
		Rigidbody2D_t46 * L_13 = V_2;
		ClockBehaviour_t204 * L_14 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		NullCheck(L_14);
		Rigidbody2D_t46 * L_15 = ClockBehaviour_get_body_m716(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		float L_16 = Rigidbody2D_get_angularDrag_m900(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_set_angularDrag_m901(L_13, L_16, /*hidden argument*/NULL);
		Rigidbody2D_t46 * L_17 = V_2;
		ClockBehaviour_t204 * L_18 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		NullCheck(L_18);
		Rigidbody2D_t46 * L_19 = ClockBehaviour_get_body_m716(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		float L_20 = Rigidbody2D_get_drag_m902(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody2D_set_drag_m903(L_17, L_20, /*hidden argument*/NULL);
		GameObject_t9 * L_21 = V_0;
		NullCheck(L_21);
		SpriteRenderer_t255 * L_22 = GameObject_AddComponent_TisSpriteRenderer_t255_m883(L_21, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t255_m883_MethodInfo_var);
		V_3 = L_22;
		SpriteRenderer_t255 * L_23 = V_3;
		ClockBehaviour_t204 * L_24 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		NullCheck(L_24);
		SpriteRenderer_t255 * L_25 = Component_GetComponent_TisSpriteRenderer_t255_m878(L_24, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t255_m878_MethodInfo_var);
		NullCheck(L_25);
		Sprite_t239 * L_26 = SpriteRenderer_get_sprite_m904(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		SpriteRenderer_set_sprite_m905(L_23, L_26, /*hidden argument*/NULL);
		SpriteRenderer_t255 * L_27 = V_3;
		int32_t L_28 = Random_Range_m497(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_29 = Random_Range_m497(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_30 = Random_Range_m497(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		Color_t200  L_31 = {0};
		Color__ctor_m886(&L_31, ((float)((float)(((float)L_28))/(float)(10.0f))), ((float)((float)(((float)L_29))/(float)(10.0f))), ((float)((float)(((float)L_30))/(float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_27);
		SpriteRenderer_set_color_m887(L_27, L_31, /*hidden argument*/NULL);
		GameObject_t9 * L_32 = V_0;
		NullCheck(L_32);
		ClockBehaviour_t204 * L_33 = GameObject_AddComponent_TisClockBehaviour_t204_m884(L_32, /*hidden argument*/GameObject_AddComponent_TisClockBehaviour_t204_m884_MethodInfo_var);
		V_4 = L_33;
		ClockBehaviour_t204 * L_34 = V_4;
		int32_t L_35 = Random_Range_m497(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_34);
		L_34->___MaxTimeOffScreen_11 = (((float)L_35));
		ClockBehaviour_t204 * L_36 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ClockSpawner_t207 * L_37 = ASingleton_1_get_current_m891(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m891_MethodInfo_var);
		NullCheck(L_37);
		Vector3_t40  L_38 = ClockSpawner_get_SpawnPoint_m734(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->___startingPoint_5 = L_38;
		ClockBehaviour_t204 * L_39 = V_4;
		NullCheck(L_39);
		ClockBehaviour_Reset_m729(L_39, /*hidden argument*/NULL);
		ClockBehaviour_t204 * L_40 = V_4;
		return L_40;
	}
}
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour> Procrastinate.ClockBehaviour::CheckVisibleClocks()
extern TypeInfo* ASingleton_1_t208_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t262_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m891_MethodInfo_var;
extern const MethodInfo* ClockBehaviour_IsVisible_m714_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m906_MethodInfo_var;
extern const MethodInfo* List_1_FindAll_m907_MethodInfo_var;
extern "C" List_1_t206 * ClockBehaviour_CheckVisibleClocks_m719 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		Predicate_1_t262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		ASingleton_1_get_current_m891_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		ClockBehaviour_IsVisible_m714_MethodInfo_var = il2cpp_codegen_method_info_from_index(70);
		Predicate_1__ctor_m906_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483719);
		List_1_FindAll_m907_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ClockSpawner_t207 * L_0 = ASingleton_1_get_current_m891(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m891_MethodInfo_var);
		NullCheck(L_0);
		List_1_t206 * L_1 = (L_0->___clocks_9);
		IntPtr_t L_2 = { (void*)ClockBehaviour_IsVisible_m714_MethodInfo_var };
		Predicate_1_t262 * L_3 = (Predicate_1_t262 *)il2cpp_codegen_object_new (Predicate_1_t262_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m906(L_3, NULL, L_2, /*hidden argument*/Predicate_1__ctor_m906_MethodInfo_var);
		NullCheck(L_1);
		List_1_t206 * L_4 = List_1_FindAll_m907(L_1, L_3, /*hidden argument*/List_1_FindAll_m907_MethodInfo_var);
		return L_4;
	}
}
// System.Void Procrastinate.ClockBehaviour::Start()
extern TypeInfo* ClockBehaviour_t204_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t208_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m891_MethodInfo_var;
extern "C" void ClockBehaviour_Start_m720 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClockBehaviour_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		ASingleton_1_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		ASingleton_1_get_current_m891_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	{
		ClockBehaviour_t204 * L_0 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		bool L_1 = Object_op_Equality_m467(NULL /*static, unused*/, L_0, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_t9 * L_2 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m908(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6 = __this;
		__this->___isOriginal_16 = 1;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ClockSpawner_t207 * L_3 = ASingleton_1_get_current_m891(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m891_MethodInfo_var);
		NullCheck(L_3);
		List_1_t206 * L_4 = (L_3->___clocks_9);
		NullCheck(L_4);
		VirtActionInvoker1< ClockBehaviour_t204 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Add(!0) */, L_4, __this);
		float L_5 = (__this->___MaxTimeOffScreen_11);
		if ((!(((float)L_5) < ((float)(2.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		__this->___MaxTimeOffScreen_11 = (2.0f);
	}

IL_0053:
	{
		ClockBehaviour_t204 * L_6 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		bool L_7 = Object_op_Inequality_m539(NULL /*static, unused*/, L_6, __this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0089;
		}
	}
	{
		float L_8 = (__this->___MaxTimeOffScreen_11);
		float L_9 = Random_Range_m677(NULL /*static, unused*/, (0.0f), L_8, /*hidden argument*/NULL);
		__this->___lifeSpan_17 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ClockSpawner_t207 * L_10 = ASingleton_1_get_current_m891(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m891_MethodInfo_var);
		NullCheck(L_10);
		Vector3_t40  L_11 = ClockSpawner_get_SpawnPoint_m734(L_10, /*hidden argument*/NULL);
		__this->___startingPoint_5 = L_11;
	}

IL_0089:
	{
		Vector3_t40  L_12 = (__this->___startingPoint_5);
		Vector3_t40  L_13 = Vector3_get_zero_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_14 = Vector3_op_Equality_m909(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c9;
		}
	}
	{
		Transform_t38 * L_15 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t40  L_16 = Transform_get_position_m510(L_15, /*hidden argument*/NULL);
		Vector3_t40  L_17 = Vector3_get_zero_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_18 = Vector3_op_Inequality_m575(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00c9;
		}
	}
	{
		Transform_t38 * L_19 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t40  L_20 = Transform_get_position_m510(L_19, /*hidden argument*/NULL);
		__this->___startingPoint_5 = L_20;
	}

IL_00c9:
	{
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::OnDestroy()
extern TypeInfo* ASingleton_1_t208_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_IsInitialized_m910_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m891_MethodInfo_var;
extern "C" void ClockBehaviour_OnDestroy_m721 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		ASingleton_1_get_IsInitialized_m910_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		ASingleton_1_get_current_m891_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		bool L_0 = ASingleton_1_get_IsInitialized_m910(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_IsInitialized_m910_MethodInfo_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ClockSpawner_t207 * L_1 = ASingleton_1_get_current_m891(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m891_MethodInfo_var);
		NullCheck(L_1);
		List_1_t206 * L_2 = (L_1->___clocks_9);
		NullCheck(L_2);
		VirtFuncInvoker1< bool, ClockBehaviour_t204 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Remove(!0) */, L_2, __this);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::Update()
extern "C" void ClockBehaviour_Update_m722 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isOriginal_16);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = (__this->___lifeSpan_17);
		float L_2 = Time_get_deltaTime_m519(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lifeSpan_17 = ((float)((float)L_1-(float)L_2));
	}

IL_001d:
	{
		bool L_3 = (__this->___isOnScreen_9);
		if (L_3)
		{
			goto IL_0077;
		}
	}
	{
		float L_4 = (__this->___lifeSpan_17);
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		GameObject_t9 * L_5 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		Object_Destroy_m423(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_0048:
	{
		float L_6 = Time_get_fixedTime_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___fellOffAtTime_10);
		float L_8 = (__this->___OffScreenLimit_12);
		if ((!(((float)((float)((float)L_6-(float)L_7))) > ((float)L_8))))
		{
			goto IL_0077;
		}
	}
	{
		Vector2_t42  L_9 = (__this->___exitVelocity_7);
		ClockBehaviour_ResetWithVelocity_m727(__this, L_9, /*hidden argument*/NULL);
		bool L_10 = ClockBehaviour_get_willBeOnScreen_m723(__this, /*hidden argument*/NULL);
		__this->___isOnScreen_9 = L_10;
	}

IL_0077:
	{
		return;
	}
}
// System.Boolean Procrastinate.ClockBehaviour::get_willBeOnScreen()
extern "C" bool ClockBehaviour_get_willBeOnScreen_m723 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void Procrastinate.ClockBehaviour::OnBecameInvisible()
extern "C" void ClockBehaviour_OnBecameInvisible_m724 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	ClockBehaviour_t204 * G_B2_0 = {0};
	ClockBehaviour_t204 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	ClockBehaviour_t204 * G_B3_1 = {0};
	{
		__this->___isOnScreen_9 = 0;
		float L_0 = Time_get_fixedTime_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___fellOffAtTime_10 = L_0;
		bool L_1 = GameController_get_isFirstPlay_m797(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0023;
		}
	}
	{
		G_B3_0 = 5;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		float L_2 = (__this->___MaxTimeOffScreen_11);
		float L_3 = Random_Range_m677(NULL /*static, unused*/, (((float)G_B3_0)), L_2, /*hidden argument*/NULL);
		NullCheck(G_B3_1);
		G_B3_1->___OffScreenLimit_12 = L_3;
		Transform_t38 * L_4 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t40  L_5 = Transform_get_position_m510(L_4, /*hidden argument*/NULL);
		__this->___pointOfExit_18 = L_5;
		Rigidbody2D_t46 * L_6 = ClockBehaviour_get_body_m716(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_t42  L_7 = Rigidbody2D_get_velocity_m541(L_6, /*hidden argument*/NULL);
		__this->___exitVelocity_7 = L_7;
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::OnBecameVisible()
extern "C" void ClockBehaviour_OnBecameVisible_m725 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	{
		__this->___isOnScreen_9 = 1;
		return;
	}
}
// UnityEngine.Bounds Procrastinate.ClockBehaviour::GetScreenSizeInWorld()
extern TypeInfo* Bounds_t257_il2cpp_TypeInfo_var;
extern "C" Bounds_t257  ClockBehaviour_GetScreenSizeInWorld_m726 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t82 * V_0 = {0};
	Bounds_t257  V_1 = {0};
	{
		Camera_t82 * L_0 = Camera_get_main_m646(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Initobj (Bounds_t257_il2cpp_TypeInfo_var, (&V_1));
		Camera_t82 * L_1 = V_0;
		int32_t L_2 = Screen_get_width_m435(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t40  L_4 = {0};
		Vector3__ctor_m529(&L_4, (((float)L_2)), (((float)L_3)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t40  L_5 = Camera_ScreenToWorldPoint_m911(L_1, L_4, /*hidden argument*/NULL);
		Bounds_set_size_m912((&V_1), L_5, /*hidden argument*/NULL);
		Camera_t82 * L_6 = V_0;
		int32_t L_7 = Screen_get_width_m435(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t40  L_9 = {0};
		Vector3__ctor_m529(&L_9, (((float)L_7)), (((float)L_8)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t40  L_10 = Camera_ScreenToWorldPoint_m911(L_6, L_9, /*hidden argument*/NULL);
		Bounds_set_max_m913((&V_1), L_10, /*hidden argument*/NULL);
		Camera_t82 * L_11 = V_0;
		Vector3_t40  L_12 = Vector3_get_zero_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t40  L_13 = Camera_ScreenToWorldPoint_m911(L_11, L_12, /*hidden argument*/NULL);
		Bounds_set_min_m914((&V_1), L_13, /*hidden argument*/NULL);
		Bounds_t257  L_14 = V_1;
		return L_14;
	}
}
// System.Void Procrastinate.ClockBehaviour::ResetWithVelocity(UnityEngine.Vector2)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t177_il2cpp_TypeInfo_var;
extern "C" void ClockBehaviour_ResetWithVelocity_m727 (ClockBehaviour_t204 * __this, Vector2_t42  ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		Physics2D_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t257  V_0 = {0};
	Vector2_t42  V_1 = {0};
	Vector2_t42  V_2 = {0};
	Vector2_t42  V_3 = {0};
	Vector3_t40  V_4 = {0};
	{
		Bounds_t257  L_0 = ClockBehaviour_GetScreenSizeInWorld_m726(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t46 * L_1 = ClockBehaviour_get_body_m716(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t42  L_2 = Rigidbody2D_get_velocity_m541(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Vector2_get_magnitude_m915((&V_1), /*hidden argument*/NULL);
		float L_4 = (__this->___maxVelocity_13);
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_003d;
		}
	}
	{
		Vector2_t42  L_5 = Vector2_get_normalized_m584((&___direction), /*hidden argument*/NULL);
		float L_6 = (__this->___maxVelocity_13);
		Vector2_t42  L_7 = Vector2_op_Multiply_m916(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_00c0;
	}

IL_003d:
	{
		float L_8 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_9 = fabsf(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t177_il2cpp_TypeInfo_var);
		Vector2_t42  L_10 = Physics2D_get_gravity_m917(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = ((&V_2)->___x_1);
		float L_12 = fabsf(L_11);
		if ((!(((float)L_9) < ((float)L_12))))
		{
			goto IL_0070;
		}
	}
	{
		Vector3_t40 * L_13 = &(__this->___pointOfExit_18);
		L_13->___x_1 = (0.0f);
	}

IL_0070:
	{
		float L_14 = ((&V_1)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_15 = fabsf(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t177_il2cpp_TypeInfo_var);
		Vector2_t42  L_16 = Physics2D_get_gravity_m917(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->___y_2);
		float L_18 = fabsf(L_17);
		if ((!(((float)L_15) < ((float)L_18))))
		{
			goto IL_00c0;
		}
	}
	{
		Vector3_t40 * L_19 = &(__this->___pointOfExit_18);
		Vector3_t40  L_20 = Bounds_get_min_m918((&V_0), /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = ((&V_4)->___y_2);
		CircleCollider2D_t256 * L_22 = ClockBehaviour_get_collisionBody_m717(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23 = CircleCollider2D_get_radius_m896(L_22, /*hidden argument*/NULL);
		L_19->___y_2 = ((float)((float)L_21-(float)((float)((float)L_23*(float)(2.0f)))));
	}

IL_00c0:
	{
		Rigidbody2D_t46 * L_24 = ClockBehaviour_get_body_m716(__this, /*hidden argument*/NULL);
		Vector2_t42  L_25 = V_1;
		NullCheck(L_24);
		Rigidbody2D_set_velocity_m547(L_24, L_25, /*hidden argument*/NULL);
		Transform_t38 * L_26 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		Vector3_t40  L_27 = (__this->___pointOfExit_18);
		Vector3_t40  L_28 = Vector3_op_UnaryNegation_m649(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_position_m524(L_26, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::ResetWithPosition(UnityEngine.Vector3)
extern "C" void ClockBehaviour_ResetWithPosition_m728 (ClockBehaviour_t204 * __this, Vector3_t40  ___position, const MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		Vector3_t40  L_1 = ___position;
		NullCheck(L_0);
		Transform_set_position_m524(L_0, L_1, /*hidden argument*/NULL);
		Rigidbody2D_t46 * L_2 = ClockBehaviour_get_body_m716(__this, /*hidden argument*/NULL);
		Vector2_t42  L_3 = Vector2_get_zero_m919(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m547(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::Reset()
extern "C" void ClockBehaviour_Reset_m729 (ClockBehaviour_t204 * __this, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = (__this->___startingPoint_5);
		ClockBehaviour_ResetWithPosition_m728(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Procrastinate.ClockSpawner/SpawnMode
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawner_SpawnMode.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.ClockSpawner/SpawnMode
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawner_SpawnModeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameController.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// RMX.RMXTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXTests.h"
// RMX.Singletons/ASingleton`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_8MethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenterMethodDeclarations.h"


// System.Void Procrastinate.ClockSpawner::.ctor()
extern TypeInfo* List_1_t206_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t208_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m920_MethodInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m921_MethodInfo_var;
extern "C" void ClockSpawner__ctor_m730 (ClockSpawner_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t206_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ASingleton_1_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m920_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		ASingleton_1__ctor_m921_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483723);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t206 * L_0 = (List_1_t206 *)il2cpp_codegen_object_new (List_1_t206_il2cpp_TypeInfo_var);
		List_1__ctor_m920(L_0, /*hidden argument*/List_1__ctor_m920_MethodInfo_var);
		__this->___clocks_9 = L_0;
		__this->___firstLoad_10 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m921(__this, /*hidden argument*/ASingleton_1__ctor_m921_MethodInfo_var);
		return;
	}
}
// Procrastinate.ClockSpawner/SpawnMode Procrastinate.ClockSpawner::get_spawnMode()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" int32_t ClockSpawner_get_spawnMode_m731 (ClockSpawner_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_0 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___ClockSpawnMode_30);
		return L_1;
	}
}
// System.Boolean Procrastinate.ClockSpawner::get_ShouldKillClocks()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" bool ClockSpawner_get_ShouldKillClocks_m732 (ClockSpawner_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		float L_0 = Time_get_fixedTime_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (((int32_t)L_0));
		List_1_t206 * L_1 = (__this->___clocks_9);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Count() */, L_1);
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_4 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___MaxNumberOfClocks_28);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			G_B2_0 = L_2;
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0032;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_7 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_7);
		int32_t L_8 = (L_7->___MaxNumberOfClocks_28);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0032:
	{
		return ((((int32_t)G_B3_1) > ((int32_t)G_B3_0))? 1 : 0);
	}
}
// System.Void Procrastinate.ClockSpawner::Update()
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t218_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" void ClockSpawner_Update_m733 (ClockSpawner_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Event_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	ClockBehaviour_t204 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ClockSpawner_get_spawnMode_m731(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_013d;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		bool L_3 = GameCenter_HasPlayerAlreadyAchieved_m785(NULL /*static, unused*/, 6, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		int32_t L_4 = Input_get_touchCount_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_009d;
		}
	}
	{
		bool L_5 = ClockSpawner_Spawn_m735(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = 4;
		Object_t * L_7 = Box(Event_t22_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ((int32_t)10);
		Object_t * L_9 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_8);
		RMXObject_DidCauseEvent_m80(__this, (Enum_t5 *)L_7, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		bool L_10 = ClockSpawner_get_ShouldKillClocks_m732(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009d;
		}
	}
	{
		List_1_t206 * L_11 = (__this->___clocks_9);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Count() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_13 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_13);
		int32_t L_14 = (L_13->___MaxNumberOfClocks_28);
		if ((((int32_t)L_12) <= ((int32_t)L_14)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_15 = 4;
		Object_t * L_16 = Box(Event_t22_il2cpp_TypeInfo_var, &L_15);
		int32_t L_17 = ((int32_t)11);
		Object_t * L_18 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_17);
		RMXObject_DidCauseEvent_m80(__this, (Enum_t5 *)L_16, L_18, /*hidden argument*/NULL);
	}

IL_0085:
	{
		List_1_t206 * L_19 = (__this->___clocks_9);
		NullCheck(L_19);
		ClockBehaviour_t204 * L_20 = (ClockBehaviour_t204 *)VirtFuncInvoker1< ClockBehaviour_t204 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Item(System.Int32) */, L_19, 1);
		V_0 = L_20;
		ClockBehaviour_t204 * L_21 = V_0;
		NullCheck(L_21);
		GameObject_t9 * L_22 = Component_get_gameObject_m422(L_21, /*hidden argument*/NULL);
		Object_Destroy_m423(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
	}

IL_009d:
	{
		goto IL_013d;
	}

IL_00a2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		bool L_23 = GameCenter_HasPlayerAlreadyAchieved_m785(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0138;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		int32_t L_24 = Input_get_touchCount_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_0138;
		}
	}
	{
		__this->___forTouch_12 = 1;
		ClockBehaviour_t204 * L_25 = (__this->___inflatableClock_11);
		bool L_26 = Object_op_Implicit_m545(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_27 = 1;
		Object_t * L_28 = Box(Event_t218_il2cpp_TypeInfo_var, &L_27);
		RMXObject_WillBeginEvent_m73(__this, (Enum_t5 *)L_28, /*hidden argument*/NULL);
		ClockBehaviour_t204 * L_29 = ClockBehaviour_New_m718(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___inflatableClock_11 = L_29;
		int32_t L_30 = 1;
		Object_t * L_31 = Box(Event_t218_il2cpp_TypeInfo_var, &L_30);
		ClockBehaviour_t204 * L_32 = (__this->___inflatableClock_11);
		RMXObject_DidFinishEvent_m79(__this, (Enum_t5 *)L_31, L_32, /*hidden argument*/NULL);
		ClockBehaviour_t204 * L_33 = (__this->___inflatableClock_11);
		NullCheck(L_33);
		Transform_t38 * L_34 = Component_get_transform_m511(L_33, /*hidden argument*/NULL);
		Vector3_t40  L_35 = {0};
		Vector3__ctor_m529(&L_35, (0.1f), (0.1f), (0.1f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_m550(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0138;
	}

IL_0121:
	{
		ClockBehaviour_t204 * L_36 = (__this->___inflatableClock_11);
		NullCheck(L_36);
		bool L_37 = ClockBehaviour_get_didPop_m712(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0138;
		}
	}
	{
		__this->___inflatableClock_11 = (ClockBehaviour_t204 *)NULL;
	}

IL_0138:
	{
		goto IL_013d;
	}

IL_013d:
	{
		return;
	}
}
// UnityEngine.Vector3 Procrastinate.ClockSpawner::get_SpawnPoint()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* ClockBehaviour_t204_il2cpp_TypeInfo_var;
extern "C" Vector3_t40  ClockSpawner_get_SpawnPoint_m734 (ClockSpawner_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		ClockBehaviour_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t40  V_0 = {0};
	Exception_t143 * V_1 = {0};
	Ray_t88  V_2 = {0};
	Vector3_t40  V_3 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				int32_t L_0 = (__this->___forTouch_12);
				if ((((int32_t)L_0) <= ((int32_t)0)))
				{
					goto IL_0069;
				}
			}

IL_000c:
			{
				int32_t L_1 = (__this->___forTouch_12);
				IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
				int32_t L_2 = Input_get_touchCount_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
				if ((((int32_t)L_1) >= ((int32_t)L_2)))
				{
					goto IL_0069;
				}
			}

IL_001c:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
				TouchU5BU5D_t184* L_3 = Input_get_touches_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
				int32_t L_4 = (__this->___forTouch_12);
				NullCheck(L_3);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
				Vector2_t42  L_5 = Touch_get_position_m583(((Touch_t185 *)(Touch_t185 *)SZArrayLdElema(L_3, L_4)), /*hidden argument*/NULL);
				Vector3_t40  L_6 = Vector2_op_Implicit_m580(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
				V_0 = L_6;
				Camera_t82 * L_7 = Camera_get_current_m923(NULL /*static, unused*/, /*hidden argument*/NULL);
				float L_8 = ((&V_0)->___x_1);
				float L_9 = ((&V_0)->___y_2);
				Vector3_t40  L_10 = {0};
				Vector3__ctor_m529(&L_10, L_8, L_9, (0.0f), /*hidden argument*/NULL);
				NullCheck(L_7);
				Ray_t88  L_11 = Camera_ScreenPointToRay_m625(L_7, L_10, /*hidden argument*/NULL);
				V_2 = L_11;
				Vector3_t40  L_12 = Ray_get_origin_m634((&V_2), /*hidden argument*/NULL);
				V_0 = L_12;
				Vector3_t40  L_13 = V_0;
				V_3 = L_13;
				IL2CPP_LEAVE(0xC5, FINALLY_0094);
			}

IL_0069:
			{
				IL2CPP_LEAVE(0xC3, FINALLY_0094);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t143 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_006e;
			throw e;
		}

CATCH_006e:
		{ // begin catch(System.Exception)
			{
				V_1 = ((Exception_t143 *)__exception_local);
				int32_t L_14 = 3;
				Object_t * L_15 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_14);
				Exception_t143 * L_16 = V_1;
				NullCheck(L_16);
				String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_16);
				IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
				bool L_18 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_15, L_17, /*hidden argument*/NULL);
				if (!L_18)
				{
					goto IL_008f;
				}
			}

IL_0085:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
				String_t* L_19 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
				Debug_Log_m416(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			}

IL_008f:
			{
				IL2CPP_LEAVE(0xC3, FINALLY_0094);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0094;
	}

FINALLY_0094:
	{ // begin finally (depth: 1)
		ClockBehaviour_t204 * L_20 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		NullCheck(L_20);
		Vector3_t40  L_21 = (L_20->___startingPoint_5);
		V_0 = L_21;
		Vector3_t40 * L_22 = (&V_0);
		float L_23 = (L_22->___y_2);
		ClockBehaviour_t204 * L_24 = ((ClockBehaviour_t204_StaticFields*)ClockBehaviour_t204_il2cpp_TypeInfo_var->static_fields)->___original_6;
		NullCheck(L_24);
		CircleCollider2D_t256 * L_25 = ClockBehaviour_get_collisionBody_m717(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		float L_26 = CircleCollider2D_get_radius_m896(L_25, /*hidden argument*/NULL);
		L_22->___y_2 = ((float)((float)L_23+(float)((float)((float)L_26*(float)(2.0f)))));
		IL2CPP_END_FINALLY(148)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(148)
	{
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_00c3:
	{
		Vector3_t40  L_27 = V_0;
		return L_27;
	}

IL_00c5:
	{
		Vector3_t40  L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Procrastinate.ClockSpawner::Spawn()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t218_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" bool ClockSpawner_Spawn_m735 (ClockSpawner_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Event_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___firstLoad_10);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->___firstLoad_10 = 0;
		return 0;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_1 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_1);
		bool L_2 = GameController_ChanceGiven_m795(L_1, 6, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_3 = 0;
		Object_t * L_4 = Box(Event_t218_il2cpp_TypeInfo_var, &L_3);
		RMXObject_WillBeginEvent_m73(__this, (Enum_t5 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		int32_t L_5 = Input_get_touchCount_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = Random_Range_m497(NULL /*static, unused*/, 1, L_6, /*hidden argument*/NULL);
		__this->___forTouch_12 = L_7;
		ClockBehaviour_New_m718(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = 0;
		Object_t * L_9 = Box(Event_t218_il2cpp_TypeInfo_var, &L_8);
		RMXObject_DidFinishEvent_m75(__this, (Enum_t5 *)L_9, /*hidden argument*/NULL);
		return 1;
	}

IL_0057:
	{
		return 0;
	}
}
// System.Void Procrastinate.ClockSpawner::OnEventDidEnd(System.Enum,System.Object)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" void ClockSpawner_OnEventDidEnd_m736 (ClockSpawner_t207 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 3;
		Object_t * L_2 = Box(Event_t22_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_4 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___ClockSpawnMode_30);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_6 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_6);
		L_6->___ClockSpawnMode_30 = 0;
		ClockSpawner_Spawn_m735(__this, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_7 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_7);
		L_7->___ClockSpawnMode_30 = 1;
	}

IL_0043:
	{
		ClockBehaviour_CheckVisibleClocks_m719(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// Procrastinate.Wychd
#include "AssemblyU2DCSharp_Procrastinate_Wychd.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.Wychd
#include "AssemblyU2DCSharp_Procrastinate_WychdMethodDeclarations.h"

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"


// System.Void Procrastinate.Wychd::.ctor()
extern TypeInfo* List_1_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m443_MethodInfo_var;
extern "C" void Wychd__ctor_m737 (Wychd_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		List_1__ctor_m443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t13_il2cpp_TypeInfo_var);
		List_1__ctor_m443(__this, /*hidden argument*/List_1__ctor_m443_MethodInfo_var);
		return;
	}
}
// Procrastinate.DataReader/<GetActivities>c__AnonStorey2
#include "AssemblyU2DCSharp_Procrastinate_DataReader_U3CGetActivitiesU.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.DataReader/<GetActivities>c__AnonStorey2
#include "AssemblyU2DCSharp_Procrastinate_DataReader_U3CGetActivitiesUMethodDeclarations.h"

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Procrastinate.DataReader
#include "AssemblyU2DCSharp_Procrastinate_DataReaderMethodDeclarations.h"


// System.Void Procrastinate.DataReader/<GetActivities>c__AnonStorey2::.ctor()
extern "C" void U3CGetActivitiesU3Ec__AnonStorey2__ctor_m738 (U3CGetActivitiesU3Ec__AnonStorey2_t210 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.DataReader/<GetActivities>c__AnonStorey2::<>m__0(System.Collections.Generic.List`1<System.String>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral102;
extern "C" bool U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m739 (U3CGetActivitiesU3Ec__AnonStorey2_t210 * __this, List_1_t13 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral102 = il2cpp_codegen_string_literal_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * V_0 = {0};
	bool V_1 = false;
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			List_1_t13 * L_0 = ___match;
			NullCheck(L_0);
			int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_0);
			if ((((int32_t)L_1) <= ((int32_t)3)))
			{
				goto IL_003a;
			}
		}

IL_000c:
		{
			List_1_t13 * L_2 = ___match;
			NullCheck(L_2);
			String_t* L_3 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_2, 3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_4 = String_op_Equality_m418(NULL /*static, unused*/, L_3, _stringLiteral102, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_003a;
			}
		}

IL_0022:
		{
			List_1_t13 * L_5 = ___match;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_5, 2);
			float L_7 = (__this->___inTime_0);
			bool L_8 = DataReader_IsWithinTime_m742(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			V_1 = L_8;
			goto IL_005e;
		}

IL_003a:
		{
			V_1 = 0;
			goto IL_005e;
		}

IL_0041:
		{
			; // IL_0041: leave IL_005e
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t143 *)__exception_local);
			Exception_t143 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_9);
			Debug_Log_m416(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			V_1 = 0;
			goto IL_005e;
		}

IL_0059:
		{
			; // IL_0059: leave IL_005e
		}
	} // end catch (depth: 1)

IL_005e:
	{
		bool L_11 = V_1;
		return L_11;
	}
}
// Procrastinate.DataReader
#include "AssemblyU2DCSharp_Procrastinate_DataReader.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// System.Char
#include "mscorlib_System_Char.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Predicate`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Predicate_1_gen_1.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// RMX.CsvReader
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReaderMethodDeclarations.h"
// System.Predicate`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Predicate_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"


// UnityEngine.TextAsset Procrastinate.DataReader::get_Database()
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern "C" TextAsset_t135 * DataReader_get_Database_m740 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Singletons_get_Settings_m5(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextAsset_t135 * L_1 = (TextAsset_t135 *)InterfaceFuncInvoker0< TextAsset_t135 * >::Invoke(3 /* UnityEngine.TextAsset RMX.IGameController::get_Database() */, IGameController_t2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Procrastinate.DataReader::TimeHMSToFloat(System.String,System.Char)
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t264_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern "C" float DataReader_TimeHMSToFloat_m741 (Object_t * __this /* static, unused */, String_t* ___time, uint16_t ___parser, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Char_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t31* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Exception_t143 * V_6 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringU5BU5D_t31* L_0 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)L_1;
		StringU5BU5D_t31* L_2 = L_0;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 1)) = (String_t*)L_3;
		StringU5BU5D_t31* L_4 = L_2;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)L_5;
		V_0 = L_4;
		V_1 = 0;
		String_t* L_6 = ___time;
		V_3 = L_6;
		V_4 = 0;
		goto IL_0063;
	}

IL_002b:
	{
		String_t* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m471(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		uint16_t L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t264_il2cpp_TypeInfo_var);
		bool L_11 = Char_IsDigit_m924(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_005d;
	}

IL_0048:
	{
		StringU5BU5D_t31* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		String_t** L_15 = ((String_t**)(String_t**)SZArrayLdElema(L_13, L_14));
		uint16_t L_16 = V_2;
		uint16_t L_17 = L_16;
		Object_t * L_18 = Box(Char_t264_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m599(NULL /*static, unused*/, (*((String_t**)L_15)), L_18, /*hidden argument*/NULL);
		*((Object_t **)(L_15)) = (Object_t *)L_19;
	}

IL_005d:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_21 = V_4;
		String_t* L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m472(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_002b;
		}
	}
	{
		V_5 = (0.0f);
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		StringU5BU5D_t31* L_24 = V_0;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 2);
		int32_t L_25 = 2;
		float L_26 = Single_Parse_m502(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_24, L_25)), /*hidden argument*/NULL);
		V_5 = L_26;
		float L_27 = V_5;
		StringU5BU5D_t31* L_28 = V_0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		int32_t L_29 = 1;
		float L_30 = Single_Parse_m502(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_28, L_29)), /*hidden argument*/NULL);
		V_5 = ((float)((float)L_27+(float)((float)((float)L_30*(float)(60.0f)))));
		float L_31 = V_5;
		StringU5BU5D_t31* L_32 = V_0;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		int32_t L_33 = 0;
		float L_34 = Single_Parse_m502(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_32, L_33)), /*hidden argument*/NULL);
		V_5 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_34*(float)(60.0f)))*(float)(60.0f)))));
		goto IL_00bc;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b2;
		throw e;
	}

CATCH_00b2:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t143 *)__exception_local);
		Exception_t143 * L_35 = V_6;
		il2cpp_codegen_raise_exception(L_35);
		goto IL_00bc;
	} // end catch (depth: 1)

IL_00bc:
	{
		float L_36 = V_5;
		return L_36;
	}
}
// System.Boolean Procrastinate.DataReader::IsWithinTime(System.String,System.Single)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern "C" bool DataReader_IsWithinTime_m742 (Object_t * __this /* static, unused */, String_t* ___time, float ___withinTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Exception_t143 * V_3 = {0};
	bool V_4 = false;
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___time;
			float L_1 = DataReader_TimeHMSToFloat_m741(NULL /*static, unused*/, L_0, ((int32_t)58), /*hidden argument*/NULL);
			V_0 = L_1;
			float L_2 = ___withinTime;
			V_1 = ((float)((float)((float)((float)L_2*(float)(0.8f)))-(float)(10.0f)));
			float L_3 = ___withinTime;
			V_2 = ((float)((float)((float)((float)L_3*(float)(1.2f)))+(float)(10.0f)));
			float L_4 = V_0;
			float L_5 = V_1;
			if ((!(((float)L_4) >= ((float)L_5))))
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			float L_6 = V_0;
			float L_7 = V_2;
			G_B3_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
			goto IL_0033;
		}

IL_0032:
		{
			G_B3_0 = 0;
		}

IL_0033:
		{
			V_4 = G_B3_0;
			goto IL_0047;
		}

IL_003a:
		{
			; // IL_003a: leave IL_0047
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_003f;
		throw e;
	}

CATCH_003f:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t143 *)__exception_local);
		Exception_t143 * L_8 = V_3;
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0047;
	} // end catch (depth: 1)

IL_0047:
	{
		bool L_9 = V_4;
		return L_9;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Procrastinate.DataReader::GetActivities(System.Single)
extern TypeInfo* U3CGetActivitiesU3Ec__AnonStorey2_t210_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t265_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m739_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m925_MethodInfo_var;
extern const MethodInfo* List_1_FindAll_m926_MethodInfo_var;
extern "C" List_1_t134 * DataReader_GetActivities_m743 (Object_t * __this /* static, unused */, float ___inTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetActivitiesU3Ec__AnonStorey2_t210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Predicate_1_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m739_MethodInfo_var = il2cpp_codegen_method_info_from_index(77);
		Predicate_1__ctor_m925_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483726);
		List_1_FindAll_m926_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t134 * V_0 = {0};
	List_1_t134 * V_1 = {0};
	Exception_t143 * V_2 = {0};
	U3CGetActivitiesU3Ec__AnonStorey2_t210 * V_3 = {0};
	List_1_t134 * V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CGetActivitiesU3Ec__AnonStorey2_t210 * L_0 = (U3CGetActivitiesU3Ec__AnonStorey2_t210 *)il2cpp_codegen_object_new (U3CGetActivitiesU3Ec__AnonStorey2_t210_il2cpp_TypeInfo_var);
		U3CGetActivitiesU3Ec__AnonStorey2__ctor_m738(L_0, /*hidden argument*/NULL);
		V_3 = L_0;
		U3CGetActivitiesU3Ec__AnonStorey2_t210 * L_1 = V_3;
		float L_2 = ___inTime;
		NullCheck(L_1);
		L_1->___inTime_0 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			TextAsset_t135 * L_3 = DataReader_get_Database_m740(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
			List_1_t134 * L_4 = CsvReader_Read_m35(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			List_1_t134 * L_5 = V_0;
			U3CGetActivitiesU3Ec__AnonStorey2_t210 * L_6 = V_3;
			IntPtr_t L_7 = { (void*)U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m739_MethodInfo_var };
			Predicate_1_t265 * L_8 = (Predicate_1_t265 *)il2cpp_codegen_object_new (Predicate_1_t265_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m925(L_8, L_6, L_7, /*hidden argument*/Predicate_1__ctor_m925_MethodInfo_var);
			NullCheck(L_5);
			List_1_t134 * L_9 = List_1_FindAll_m926(L_5, L_8, /*hidden argument*/List_1_FindAll_m926_MethodInfo_var);
			V_1 = L_9;
			List_1_t134 * L_10 = V_1;
			V_4 = L_10;
			goto IL_0040;
		}

IL_0033:
		{
			; // IL_0033: leave IL_0040
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t143 *)__exception_local);
		Exception_t143 * L_11 = V_2;
		il2cpp_codegen_raise_exception(L_11);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		List_1_t134 * L_12 = V_4;
		return L_12;
	}
}
// Procrastinate.Wychd Procrastinate.DataReader::GetActivityList(System.Single)
extern TypeInfo* Wychd_t209_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t266_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m927_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m928_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m929_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral103;
extern "C" Wychd_t209 * DataReader_GetActivityList_m744 (Object_t * __this /* static, unused */, float ___forTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Wychd_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Enumerator_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m927_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483728);
		Enumerator_get_Current_m928_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483729);
		Enumerator_MoveNext_m929_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	Wychd_t209 * V_0 = {0};
	List_1_t134 * V_1 = {0};
	List_1_t13 * V_2 = {0};
	Enumerator_t266  V_3 = {0};
	Exception_t143 * V_4 = {0};
	Exception_t143 * V_5 = {0};
	Wychd_t209 * V_6 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Wychd_t209 * L_0 = (Wychd_t209 *)il2cpp_codegen_object_new (Wychd_t209_il2cpp_TypeInfo_var);
		Wychd__ctor_m737(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			float L_1 = ___forTime;
			List_1_t134 * L_2 = DataReader_GetActivities_m743(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
			V_1 = L_2;
			List_1_t134 * L_3 = V_1;
			NullCheck(L_3);
			Enumerator_t266  L_4 = List_1_GetEnumerator_m927(L_3, /*hidden argument*/List_1_GetEnumerator_m927_MethodInfo_var);
			V_3 = L_4;
		}

IL_0014:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0066;
			}

IL_0019:
			{
				List_1_t13 * L_5 = Enumerator_get_Current_m928((&V_3), /*hidden argument*/Enumerator_get_Current_m928_MethodInfo_var);
				V_2 = L_5;
			}

IL_0021:
			try
			{ // begin try (depth: 3)
				Wychd_t209 * L_6 = V_0;
				List_1_t13 * L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_7, 1);
				NullCheck(L_6);
				VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_6, L_8);
				goto IL_0066;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t143 *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
					goto CATCH_0033;
				throw e;
			}

CATCH_0033:
			{ // begin catch(System.Exception)
				{
					V_4 = ((Exception_t143 *)__exception_local);
					int32_t L_9 = 3;
					Object_t * L_10 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_9);
					List_1_t13 * L_11 = V_2;
					Exception_t143 * L_12 = V_4;
					NullCheck(L_12);
					String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_12);
					IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
					String_t* L_14 = String_Concat_m425(NULL /*static, unused*/, L_11, _stringLiteral103, L_13, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
					bool L_15 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_10, L_14, /*hidden argument*/NULL);
					if (!L_15)
					{
						goto IL_0061;
					}
				}

IL_0057:
				{
					IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
					String_t* L_16 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
					Debug_Log_m416(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
				}

IL_0061:
				{
					goto IL_0066;
				}
			} // end catch (depth: 3)

IL_0066:
			{
				bool L_17 = Enumerator_MoveNext_m929((&V_3), /*hidden argument*/Enumerator_MoveNext_m929_MethodInfo_var);
				if (L_17)
				{
					goto IL_0019;
				}
			}

IL_0072:
			{
				IL2CPP_LEAVE(0x83, FINALLY_0077);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t143 *)e.ex;
			goto FINALLY_0077;
		}

FINALLY_0077:
		{ // begin finally (depth: 2)
			Enumerator_t266  L_18 = V_3;
			Enumerator_t266  L_19 = L_18;
			Object_t * L_20 = Box(Enumerator_t266_il2cpp_TypeInfo_var, &L_19);
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_20);
			IL2CPP_END_FINALLY(119)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(119)
		{
			IL2CPP_JUMP_TBL(0x83, IL_0083)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
		}

IL_0083:
		{
			Wychd_t209 * L_21 = V_0;
			V_6 = L_21;
			goto IL_009a;
		}

IL_008b:
		{
			; // IL_008b: leave IL_009a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0090;
		throw e;
	}

CATCH_0090:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t143 *)__exception_local);
		Exception_t143 * L_22 = V_5;
		il2cpp_codegen_raise_exception(L_22);
		goto IL_009a;
	} // end catch (depth: 1)

IL_009a:
	{
		Wychd_t209 * L_23 = V_6;
		return L_23;
	}
}
// Procrastinate.DebugHUD
#include "AssemblyU2DCSharp_Procrastinate_DebugHUD.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.DebugHUD
#include "AssemblyU2DCSharp_Procrastinate_DebugHUDMethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenter.h"
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// Procrastinate.DragRigidbody
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody.h"
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.DragRigidbody>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_2MethodDeclarations.h"
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUDMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
struct SavedData_t34;
struct String_t;
struct Object_t;
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedData.h"
struct SavedData_t34;
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Object>(System.Object)
// !!0 RMX.SavedData::Get<System.Object>(System.Object)
extern "C" Object_t * SavedData_Get_TisObject_t_m931_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisObject_t_m931(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisObject_t_m931_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 RMX.SavedData::Get<System.String>(System.Object)
// !!0 RMX.SavedData::Get<System.String>(System.Object)
#define SavedData_Get_TisString_t_m930(__this /* static, unused */, p0, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisObject_t_m931_gshared)(__this /* static, unused */, p0, method)
struct SavedData_t34;
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Single>(System.Object)
// !!0 RMX.SavedData::Get<System.Single>(System.Object)
extern "C" float SavedData_Get_TisSingle_t172_m932_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisSingle_t172_m932(__this /* static, unused */, p0, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisSingle_t172_m932_gshared)(__this /* static, unused */, p0, method)


// System.Void Procrastinate.DebugHUD::.ctor()
extern "C" void DebugHUD__ctor_m745 (DebugHUD_t212 * __this, const MethodInfo* method)
{
	{
		DebugHUD__ctor_m15(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.DebugHUD::GetTime(System.Object)
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral104;
extern Il2CppCodeGenString* _stringLiteral105;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" String_t* DebugHUD_GetTime_m746 (DebugHUD_t212 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		_stringLiteral104 = il2cpp_codegen_string_literal_from_index(104);
		_stringLiteral105 = il2cpp_codegen_string_literal_from_index(105);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = {0};
	String_t* G_B3_0 = {0};
	{
		Object_t * L_0 = ___key;
		float L_1 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_0, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_4 = TextFormatter_TimeDescription_m110(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_001d:
	{
		String_t* L_5 = Single_ToString_m507((&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		StringU5BU5D_t31* L_6 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 5));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, _stringLiteral104);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 0)) = (String_t*)_stringLiteral104;
		StringU5BU5D_t31* L_7 = L_6;
		Object_t * L_8 = ___key;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, L_9);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 1)) = (String_t*)L_9;
		StringU5BU5D_t31* L_10 = L_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, _stringLiteral105);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, 2)) = (String_t*)_stringLiteral105;
		StringU5BU5D_t31* L_11 = L_10;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		ArrayElementTypeCheck (L_11, L_12);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 3)) = (String_t*)L_12;
		StringU5BU5D_t31* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, _stringLiteral9);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 4)) = (String_t*)_stringLiteral9;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m509(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Procrastinate.DebugHUD::Start()
extern "C" void DebugHUD_Start_m747 (DebugHUD_t212 * __this, const MethodInfo* method)
{
	{
		DebugHUD_Show_m17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.DebugHUD::get_DebugData()
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t268_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* SpawnMode_t205_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t217_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m933_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m934_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m935_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisString_t_m930_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m936_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m937_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral106;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral104;
extern Il2CppCodeGenString* _stringLiteral107;
extern Il2CppCodeGenString* _stringLiteral108;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" String_t* DebugHUD_get_DebugData_m748 (DebugHUD_t212 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Enumerator_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		SpawnMode_t205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		ASingleton_1_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		Dictionary_2_GetEnumerator_m933_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		Enumerator_get_Current_m934_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		KeyValuePair_2_get_Key_m935_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		SavedData_Get_TisString_t_m930_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		Enumerator_MoveNext_m936_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483736);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		ASingleton_1_get_current_m937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483737);
		_stringLiteral106 = il2cpp_codegen_string_literal_from_index(106);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral104 = il2cpp_codegen_string_literal_from_index(104);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		_stringLiteral108 = il2cpp_codegen_string_literal_from_index(108);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t267  V_1 = {0};
	Enumerator_t268  V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B7_0 = {0};
	{
		V_0 = _stringLiteral106;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_0 = ((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13;
		NullCheck(L_0);
		Enumerator_t268  L_1 = Dictionary_2_GetEnumerator_m933(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m933_MethodInfo_var);
		V_2 = L_1;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b5;
		}

IL_0016:
		{
			KeyValuePair_2_t267  L_2 = Enumerator_get_Current_m934((&V_2), /*hidden argument*/Enumerator_get_Current_m934_MethodInfo_var);
			V_1 = L_2;
			int32_t L_3 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			if ((!(((uint32_t)L_3) == ((uint32_t)3))))
			{
				goto IL_0042;
			}
		}

IL_002b:
		{
			int32_t L_4 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_5);
			String_t* L_7 = DebugHUD_GetTime_m746(__this, L_6, /*hidden argument*/NULL);
			G_B7_0 = L_7;
			goto IL_0078;
		}

IL_0042:
		{
			int32_t L_8 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			int32_t L_9 = L_8;
			Object_t * L_10 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_9);
			String_t* L_11 = SavedData_Get_TisString_t_m930(NULL /*static, unused*/, L_10, /*hidden argument*/SavedData_Get_TisString_t_m930_MethodInfo_var);
			NullCheck(L_11);
			int32_t L_12 = String_get_Length_m472(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0067;
			}
		}

IL_005d:
		{
			G_B7_0 = _stringLiteral33;
			goto IL_0078;
		}

IL_0067:
		{
			int32_t L_13 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			int32_t L_14 = L_13;
			Object_t * L_15 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_14);
			String_t* L_16 = SavedData_Get_TisString_t_m930(NULL /*static, unused*/, L_15, /*hidden argument*/SavedData_Get_TisString_t_m930_MethodInfo_var);
			G_B7_0 = L_16;
		}

IL_0078:
		{
			V_3 = G_B7_0;
			String_t* L_17 = V_0;
			V_4 = L_17;
			StringU5BU5D_t31* L_18 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 5));
			String_t* L_19 = V_4;
			NullCheck(L_18);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
			ArrayElementTypeCheck (L_18, L_19);
			*((String_t**)(String_t**)SZArrayLdElema(L_18, 0)) = (String_t*)L_19;
			StringU5BU5D_t31* L_20 = L_18;
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
			ArrayElementTypeCheck (L_20, _stringLiteral104);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, 1)) = (String_t*)_stringLiteral104;
			StringU5BU5D_t31* L_21 = L_20;
			int32_t L_22 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			int32_t L_23 = L_22;
			Object_t * L_24 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_23);
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_24);
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
			ArrayElementTypeCheck (L_21, L_25);
			*((String_t**)(String_t**)SZArrayLdElema(L_21, 2)) = (String_t*)L_25;
			StringU5BU5D_t31* L_26 = L_21;
			NullCheck(L_26);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
			ArrayElementTypeCheck (L_26, _stringLiteral107);
			*((String_t**)(String_t**)SZArrayLdElema(L_26, 3)) = (String_t*)_stringLiteral107;
			StringU5BU5D_t31* L_27 = L_26;
			String_t* L_28 = V_3;
			NullCheck(L_27);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 4);
			ArrayElementTypeCheck (L_27, L_28);
			*((String_t**)(String_t**)SZArrayLdElema(L_27, 4)) = (String_t*)L_28;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_29 = String_Concat_m509(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_0 = L_29;
		}

IL_00b5:
		{
			bool L_30 = Enumerator_MoveNext_m936((&V_2), /*hidden argument*/Enumerator_MoveNext_m936_MethodInfo_var);
			if (L_30)
			{
				goto IL_0016;
			}
		}

IL_00c1:
		{
			IL2CPP_LEAVE(0xD2, FINALLY_00c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{ // begin finally (depth: 1)
		Enumerator_t268  L_31 = V_2;
		Enumerator_t268  L_32 = L_31;
		Object_t * L_33 = Box(Enumerator_t268_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_33);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_33);
		IL2CPP_END_FINALLY(198)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_JUMP_TBL(0xD2, IL_00d2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_00d2:
	{
		String_t* L_34 = V_0;
		int32_t L_35 = 1;
		Object_t * L_36 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = DebugHUD_GetTime_m746(__this, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m420(NULL /*static, unused*/, L_34, L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		String_t* L_39 = V_0;
		int32_t L_40 = 0;
		Object_t * L_41 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42 = DebugHUD_GetTime_m746(__this, L_41, /*hidden argument*/NULL);
		String_t* L_43 = String_Concat_m420(NULL /*static, unused*/, L_39, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		String_t* L_44 = V_0;
		int32_t L_45 = 2;
		Object_t * L_46 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47 = DebugHUD_GetTime_m746(__this, L_46, /*hidden argument*/NULL);
		String_t* L_48 = String_Concat_m420(NULL /*static, unused*/, L_44, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
		String_t* L_49 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_50 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_50);
		int32_t L_51 = (L_50->___ClockSpawnMode_30);
		int32_t L_52 = L_51;
		Object_t * L_53 = Box(SpawnMode_t205_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54 = String_Concat_m425(NULL /*static, unused*/, L_49, _stringLiteral108, L_53, /*hidden argument*/NULL);
		V_0 = L_54;
		String_t* L_55 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t217_il2cpp_TypeInfo_var);
		DragRigidbody_t213 * L_56 = ASingleton_1_get_current_m937(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m937_MethodInfo_var);
		String_t* L_57 = String_Concat_m425(NULL /*static, unused*/, L_55, _stringLiteral19, L_56, /*hidden argument*/NULL);
		V_0 = L_57;
		String_t* L_58 = V_0;
		return L_58;
	}
}
// Procrastinate.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CDragObjectU.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CDragObjectUMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.SpringJoint2D
#include "UnityEngine_UnityEngine_SpringJoint2D.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.Joint2D
#include "UnityEngine_UnityEngine_Joint2DMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void Procrastinate.DragRigidbody/<DragObject>c__Iterator0::.ctor()
extern "C" void U3CDragObjectU3Ec__Iterator0__ctor_m749 (U3CDragObjectU3Ec__Iterator0_t214 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Procrastinate.DragRigidbody/<DragObject>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m750 (U3CDragObjectU3Ec__Iterator0_t214 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object Procrastinate.DragRigidbody/<DragObject>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m751 (U3CDragObjectU3Ec__Iterator0_t214 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean Procrastinate.DragRigidbody/<DragObject>c__Iterator0::MoveNext()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" bool U3CDragObjectU3Ec__Iterator0_MoveNext_m752 (U3CDragObjectU3Ec__Iterator0_t214 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_5);
		V_0 = L_0;
		__this->___U24PC_5 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_015d;
	}

IL_0021:
	{
		DragRigidbody_t213 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		SpringJoint2D_t216 * L_3 = (L_2->___m_SpringJoint_17);
		NullCheck(L_3);
		Rigidbody2D_t46 * L_4 = Joint2D_get_connectedBody_m938(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = Rigidbody2D_get_drag_m902(L_4, /*hidden argument*/NULL);
		__this->___U3ColdDragU3E__0_0 = L_5;
		DragRigidbody_t213 * L_6 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_6);
		SpringJoint2D_t216 * L_7 = (L_6->___m_SpringJoint_17);
		NullCheck(L_7);
		Rigidbody2D_t46 * L_8 = Joint2D_get_connectedBody_m938(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = Rigidbody2D_get_angularDrag_m900(L_8, /*hidden argument*/NULL);
		__this->___U3ColdAngularDragU3E__1_1 = L_9;
		DragRigidbody_t213 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		SpringJoint2D_t216 * L_11 = (L_10->___m_SpringJoint_17);
		NullCheck(L_11);
		Rigidbody2D_t46 * L_12 = Joint2D_get_connectedBody_m938(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_set_drag_m903(L_12, (10.0f), /*hidden argument*/NULL);
		DragRigidbody_t213 * L_13 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_13);
		SpringJoint2D_t216 * L_14 = (L_13->___m_SpringJoint_17);
		NullCheck(L_14);
		Rigidbody2D_t46 * L_15 = Joint2D_get_connectedBody_m938(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody2D_set_angularDrag_m901(L_15, (5.0f), /*hidden argument*/NULL);
		Camera_t82 * L_16 = Camera_get_main_m646(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CmainCameraU3E__2_2 = L_16;
		goto IL_00ea;
	}

IL_009b:
	{
		Camera_t82 * L_17 = (__this->___U3CmainCameraU3E__2_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_18 = Input_get_mousePosition_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		Ray_t88  L_19 = Camera_ScreenPointToRay_m625(L_17, L_18, /*hidden argument*/NULL);
		__this->___U3CrayU3E__3_3 = L_19;
		DragRigidbody_t213 * L_20 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_20);
		SpringJoint2D_t216 * L_21 = (L_20->___m_SpringJoint_17);
		NullCheck(L_21);
		Transform_t38 * L_22 = Component_get_transform_m511(L_21, /*hidden argument*/NULL);
		Ray_t88 * L_23 = &(__this->___U3CrayU3E__3_3);
		float L_24 = (__this->___distance_4);
		Vector3_t40  L_25 = Ray_GetPoint_m626(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_m524(L_22, L_25, /*hidden argument*/NULL);
		__this->___U24current_6 = NULL;
		__this->___U24PC_5 = 1;
		goto IL_015f;
	}

IL_00ea:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_26 = Input_GetMouseButton_m627(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_009b;
		}
	}
	{
		DragRigidbody_t213 * L_27 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_27);
		SpringJoint2D_t216 * L_28 = (L_27->___m_SpringJoint_17);
		NullCheck(L_28);
		Rigidbody2D_t46 * L_29 = Joint2D_get_connectedBody_m938(L_28, /*hidden argument*/NULL);
		bool L_30 = Object_op_Implicit_m545(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0156;
		}
	}
	{
		DragRigidbody_t213 * L_31 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_31);
		SpringJoint2D_t216 * L_32 = (L_31->___m_SpringJoint_17);
		NullCheck(L_32);
		Rigidbody2D_t46 * L_33 = Joint2D_get_connectedBody_m938(L_32, /*hidden argument*/NULL);
		float L_34 = (__this->___U3ColdDragU3E__0_0);
		NullCheck(L_33);
		Rigidbody2D_set_drag_m903(L_33, L_34, /*hidden argument*/NULL);
		DragRigidbody_t213 * L_35 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_35);
		SpringJoint2D_t216 * L_36 = (L_35->___m_SpringJoint_17);
		NullCheck(L_36);
		Rigidbody2D_t46 * L_37 = Joint2D_get_connectedBody_m938(L_36, /*hidden argument*/NULL);
		float L_38 = (__this->___U3ColdAngularDragU3E__1_1);
		NullCheck(L_37);
		Rigidbody2D_set_angularDrag_m901(L_37, L_38, /*hidden argument*/NULL);
		DragRigidbody_t213 * L_39 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_39);
		SpringJoint2D_t216 * L_40 = (L_39->___m_SpringJoint_17);
		NullCheck(L_40);
		Joint2D_set_connectedBody_m939(L_40, (Rigidbody2D_t46 *)NULL, /*hidden argument*/NULL);
	}

IL_0156:
	{
		__this->___U24PC_5 = (-1);
	}

IL_015d:
	{
		return 0;
	}

IL_015f:
	{
		return 1;
	}
	// Dead block : IL_0161: ldloc.1
}
// System.Void Procrastinate.DragRigidbody/<DragObject>c__Iterator0::Dispose()
extern "C" void U3CDragObjectU3Ec__Iterator0_Dispose_m753 (U3CDragObjectU3Ec__Iterator0_t214 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void Procrastinate.DragRigidbody/<DragObject>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CDragObjectU3Ec__Iterator0_Reset_m754 (U3CDragObjectU3Ec__Iterator0_t214 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m629(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CMoveFingerU.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CMoveFingerUMethodDeclarations.h"



// System.Void Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::.ctor()
extern "C" void U3CMoveFingerU3Ec__Iterator1__ctor_m755 (U3CMoveFingerU3Ec__Iterator1_t215 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CMoveFingerU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m756 (U3CMoveFingerU3Ec__Iterator1_t215 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CMoveFingerU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m757 (U3CMoveFingerU3Ec__Iterator1_t215 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::MoveNext()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" bool U3CMoveFingerU3Ec__Iterator1_MoveNext_m758 (U3CMoveFingerU3Ec__Iterator1_t215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00bd;
	}

IL_0021:
	{
		Camera_t82 * L_2 = Camera_get_main_m646(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CmainCameraU3E__0_0 = L_2;
		goto IL_0080;
	}

IL_0031:
	{
		Camera_t82 * L_3 = (__this->___U3CmainCameraU3E__0_0);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_4 = Input_get_mousePosition_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Ray_t88  L_5 = Camera_ScreenPointToRay_m625(L_3, L_4, /*hidden argument*/NULL);
		__this->___U3CrayU3E__1_1 = L_5;
		DragRigidbody_t213 * L_6 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_6);
		GameObject_t9 * L_7 = (L_6->___finger_16);
		NullCheck(L_7);
		Transform_t38 * L_8 = GameObject_get_transform_m526(L_7, /*hidden argument*/NULL);
		Ray_t88 * L_9 = &(__this->___U3CrayU3E__1_1);
		float L_10 = (__this->___distance_2);
		Vector3_t40  L_11 = Ray_GetPoint_m626(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_m524(L_8, L_11, /*hidden argument*/NULL);
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_00bf;
	}

IL_0080:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_12 = Input_GetMouseButton_m627(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0031;
		}
	}
	{
		DragRigidbody_t213 * L_13 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_13);
		GameObject_t9 * L_14 = (L_13->___finger_16);
		NullCheck(L_14);
		bool L_15 = GameObject_get_activeSelf_m940(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b6;
		}
	}
	{
		GameController_CheckForAnomalies_m804(NULL /*static, unused*/, /*hidden argument*/NULL);
		DragRigidbody_t213 * L_16 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_16);
		GameObject_t9 * L_17 = (L_16->___finger_16);
		NullCheck(L_17);
		GameObject_SetActive_m442(L_17, 0, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		__this->___U24PC_3 = (-1);
	}

IL_00bd:
	{
		return 0;
	}

IL_00bf:
	{
		return 1;
	}
	// Dead block : IL_00c1: ldloc.1
}
// System.Void Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::Dispose()
extern "C" void U3CMoveFingerU3Ec__Iterator1_Dispose_m759 (U3CMoveFingerU3Ec__Iterator1_t215 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CMoveFingerU3Ec__Iterator1_Reset_m760 (U3CMoveFingerU3Ec__Iterator1_t215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m629(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// Procrastinate.DragRigidbody
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbodyMethodDeclarations.h"

// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2D.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2DMethodDeclarations.h"
// UnityEngine.AnchoredJoint2D
#include "UnityEngine_UnityEngine_AnchoredJoint2DMethodDeclarations.h"
// UnityEngine.SpringJoint2D
#include "UnityEngine_UnityEngine_SpringJoint2DMethodDeclarations.h"
struct GameObject_t9;
struct SpringJoint2D_t216;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint2D>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint2D>()
#define GameObject_AddComponent_TisSpringJoint2D_t216_m941(__this, method) (( SpringJoint2D_t216 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)


// System.Void Procrastinate.DragRigidbody::.ctor()
extern TypeInfo* ASingleton_1_t217_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m942_MethodInfo_var;
extern "C" void DragRigidbody__ctor_m761 (DragRigidbody_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		ASingleton_1__ctor_m942_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483738);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t217_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m942(__this, /*hidden argument*/ASingleton_1__ctor_m942_MethodInfo_var);
		return;
	}
}
// System.Single Procrastinate.DragRigidbody::get_fingerWidth()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" float DragRigidbody_get_fingerWidth_m762 (DragRigidbody_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_0 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_0);
		float L_1 = (L_0->___FingerSize_29);
		return L_1;
	}
}
// System.Void Procrastinate.DragRigidbody::Update()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t177_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t9_il2cpp_TypeInfo_var;
extern TypeInfo* PhysicsMaterial2D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody2D_t46_m882_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSpringJoint2D_t216_m941_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCircleCollider2D_t256_m881_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral88;
extern Il2CppCodeGenString* _stringLiteral109;
extern Il2CppCodeGenString* _stringLiteral110;
extern Il2CppCodeGenString* _stringLiteral89;
extern "C" void DragRigidbody_Update_m763 (DragRigidbody_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Physics2D_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		GameObject_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		PhysicsMaterial2D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		GameObject_AddComponent_TisRigidbody2D_t46_m882_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		GameObject_AddComponent_TisSpringJoint2D_t216_m941_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		GameObject_AddComponent_TisCircleCollider2D_t256_m881_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t82 * V_0 = {0};
	RaycastHit2D_t269  V_1 = {0};
	GameObject_t9 * V_2 = {0};
	Rigidbody2D_t46 * V_3 = {0};
	CircleCollider2D_t256 * V_4 = {0};
	float V_5 = 0.0f;
	Vector2_t42  V_6 = {0};
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Ray_t88  V_11 = {0};
	Ray_t88  V_12 = {0};
	Ray_t88  V_13 = {0};
	Vector3_t40  V_14 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m633(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Camera_t82 * L_1 = Camera_get_main_m646(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t82 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_3 = Input_get_mousePosition_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t88  L_4 = Camera_ScreenPointToRay_m625(L_2, L_3, /*hidden argument*/NULL);
		V_11 = L_4;
		Vector3_t40  L_5 = Ray_get_origin_m634((&V_11), /*hidden argument*/NULL);
		Vector2_t42  L_6 = Vector2_op_Implicit_m536(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Camera_t82 * L_7 = V_0;
		Vector3_t40  L_8 = Input_get_mousePosition_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Ray_t88  L_9 = Camera_ScreenPointToRay_m625(L_7, L_8, /*hidden argument*/NULL);
		V_12 = L_9;
		Vector3_t40  L_10 = Ray_get_direction_m635((&V_12), /*hidden argument*/NULL);
		Vector2_t42  L_11 = Vector2_op_Implicit_m536(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t177_il2cpp_TypeInfo_var);
		RaycastHit2D_t269  L_12 = Physics2D_Raycast_m943(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		SpringJoint2D_t216 * L_13 = (__this->___m_SpringJoint_17);
		bool L_14 = Object_op_Implicit_m545(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_007f;
		}
	}
	{
		GameObject_t9 * L_15 = (GameObject_t9 *)il2cpp_codegen_object_new (GameObject_t9_il2cpp_TypeInfo_var);
		GameObject__ctor_m567(L_15, _stringLiteral88, /*hidden argument*/NULL);
		V_2 = L_15;
		GameObject_t9 * L_16 = V_2;
		NullCheck(L_16);
		Rigidbody2D_t46 * L_17 = GameObject_AddComponent_TisRigidbody2D_t46_m882(L_16, /*hidden argument*/GameObject_AddComponent_TisRigidbody2D_t46_m882_MethodInfo_var);
		V_3 = L_17;
		GameObject_t9 * L_18 = V_2;
		NullCheck(L_18);
		SpringJoint2D_t216 * L_19 = GameObject_AddComponent_TisSpringJoint2D_t216_m941(L_18, /*hidden argument*/GameObject_AddComponent_TisSpringJoint2D_t216_m941_MethodInfo_var);
		__this->___m_SpringJoint_17 = L_19;
		Rigidbody2D_t46 * L_20 = V_3;
		NullCheck(L_20);
		Rigidbody2D_set_isKinematic_m874(L_20, 1, /*hidden argument*/NULL);
	}

IL_007f:
	{
		RaycastHit2D_t269  L_21 = V_1;
		bool L_22 = RaycastHit2D_op_Implicit_m944(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	{
		Rigidbody2D_t46 * L_23 = RaycastHit2D_get_rigidbody_m945((&V_1), /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24 = Rigidbody2D_get_isKinematic_m877(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009c;
		}
	}
	{
		return;
	}

IL_009c:
	{
		RaycastHit2D_t269  L_25 = V_1;
		bool L_26 = RaycastHit2D_op_Implicit_m944(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00bd;
		}
	}
	{
		SpringJoint2D_t216 * L_27 = (__this->___m_SpringJoint_17);
		NullCheck(L_27);
		Rigidbody2D_t46 * L_28 = Joint2D_get_connectedBody_m938(L_27, /*hidden argument*/NULL);
		bool L_29 = Object_op_Inequality_m539(NULL /*static, unused*/, L_28, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0163;
		}
	}

IL_00bd:
	{
		GameObject_t9 * L_30 = (__this->___finger_16);
		bool L_31 = Object_op_Implicit_m545(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0120;
		}
	}
	{
		GameObject_t9 * L_32 = (GameObject_t9 *)il2cpp_codegen_object_new (GameObject_t9_il2cpp_TypeInfo_var);
		GameObject__ctor_m567(L_32, _stringLiteral109, /*hidden argument*/NULL);
		__this->___finger_16 = L_32;
		GameObject_t9 * L_33 = (__this->___finger_16);
		NullCheck(L_33);
		CircleCollider2D_t256 * L_34 = GameObject_AddComponent_TisCircleCollider2D_t256_m881(L_33, /*hidden argument*/GameObject_AddComponent_TisCircleCollider2D_t256_m881_MethodInfo_var);
		V_4 = L_34;
		CircleCollider2D_t256 * L_35 = V_4;
		float L_36 = DragRigidbody_get_fingerWidth_m762(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		CircleCollider2D_set_radius_m897(L_35, L_36, /*hidden argument*/NULL);
		CircleCollider2D_t256 * L_37 = V_4;
		PhysicsMaterial2D_t270 * L_38 = (PhysicsMaterial2D_t270 *)il2cpp_codegen_object_new (PhysicsMaterial2D_t270_il2cpp_TypeInfo_var);
		PhysicsMaterial2D__ctor_m946(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Collider2D_set_sharedMaterial_m947(L_37, L_38, /*hidden argument*/NULL);
		CircleCollider2D_t256 * L_39 = V_4;
		NullCheck(L_39);
		PhysicsMaterial2D_t270 * L_40 = Collider2D_get_sharedMaterial_m948(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		PhysicsMaterial2D_set_bounciness_m949(L_40, (0.5f), /*hidden argument*/NULL);
		GameObject_t9 * L_41 = (__this->___finger_16);
		NullCheck(L_41);
		GameObject_SetActive_m442(L_41, 0, /*hidden argument*/NULL);
	}

IL_0120:
	{
		GameObject_t9 * L_42 = (__this->___finger_16);
		NullCheck(L_42);
		GameObject_SetActive_m442(L_42, 1, /*hidden argument*/NULL);
		GameObject_t9 * L_43 = (__this->___finger_16);
		NullCheck(L_43);
		Transform_t38 * L_44 = GameObject_get_transform_m526(L_43, /*hidden argument*/NULL);
		Camera_t82 * L_45 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_46 = Input_get_mousePosition_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_45);
		Ray_t88  L_47 = Camera_ScreenPointToRay_m625(L_45, L_46, /*hidden argument*/NULL);
		V_13 = L_47;
		Vector3_t40  L_48 = Ray_get_origin_m634((&V_13), /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_m524(L_44, L_48, /*hidden argument*/NULL);
		int32_t L_49 = 0;
		Object_t * L_50 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_49);
		MonoBehaviour_StartCoroutine_m645(__this, _stringLiteral110, L_50, /*hidden argument*/NULL);
		return;
	}

IL_0163:
	{
		SpringJoint2D_t216 * L_51 = (__this->___m_SpringJoint_17);
		NullCheck(L_51);
		Transform_t38 * L_52 = Component_get_transform_m511(L_51, /*hidden argument*/NULL);
		Vector2_t42  L_53 = RaycastHit2D_get_point_m950((&V_1), /*hidden argument*/NULL);
		Vector3_t40  L_54 = Vector2_op_Implicit_m580(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_position_m524(L_52, L_54, /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_55 = (__this->___m_SpringJoint_17);
		Vector2_t42  L_56 = Vector2_get_zero_m919(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_55);
		AnchoredJoint2D_set_anchor_m951(L_55, L_56, /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_57 = (__this->___m_SpringJoint_17);
		NullCheck(L_57);
		SpringJoint2D_set_frequency_m952(L_57, (50.0f), /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_58 = (__this->___m_SpringJoint_17);
		Transform_t38 * L_59 = RaycastHit2D_get_transform_m953((&V_1), /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t40  L_60 = Transform_get_localScale_m549(L_59, /*hidden argument*/NULL);
		V_14 = L_60;
		float L_61 = Vector3_get_magnitude_m696((&V_14), /*hidden argument*/NULL);
		NullCheck(L_58);
		SpringJoint2D_set_dampingRatio_m954(L_58, ((float)((float)(5.0f)*(float)L_61)), /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_62 = (__this->___m_SpringJoint_17);
		NullCheck(L_62);
		SpringJoint2D_set_distance_m955(L_62, (0.2f), /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_63 = (__this->___m_SpringJoint_17);
		Rigidbody2D_t46 * L_64 = RaycastHit2D_get_rigidbody_m945((&V_1), /*hidden argument*/NULL);
		NullCheck(L_63);
		Joint2D_set_connectedBody_m939(L_63, L_64, /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_65 = (__this->___m_SpringJoint_17);
		NullCheck(L_65);
		Rigidbody2D_t46 * L_66 = Joint2D_get_connectedBody_m938(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		float L_67 = Rigidbody2D_get_rotation_m956(L_66, /*hidden argument*/NULL);
		V_5 = ((float)((float)L_67*(float)(-0.0174532924f)));
		Vector2_t42  L_68 = RaycastHit2D_get_point_m950((&V_1), /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_69 = (__this->___m_SpringJoint_17);
		NullCheck(L_69);
		Rigidbody2D_t46 * L_70 = Joint2D_get_connectedBody_m938(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector2_t42  L_71 = Rigidbody2D_get_position_m957(L_70, /*hidden argument*/NULL);
		Vector2_t42  L_72 = Vector2_op_Subtraction_m958(NULL /*static, unused*/, L_68, L_71, /*hidden argument*/NULL);
		V_6 = L_72;
		float L_73 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_74 = cosf(L_73);
		V_7 = L_74;
		float L_75 = V_5;
		float L_76 = sinf(L_75);
		V_8 = L_76;
		float L_77 = V_7;
		float L_78 = ((&V_6)->___x_1);
		float L_79 = V_8;
		float L_80 = ((&V_6)->___y_2);
		V_9 = ((float)((float)((float)((float)L_77*(float)L_78))-(float)((float)((float)L_79*(float)L_80))));
		float L_81 = V_8;
		float L_82 = ((&V_6)->___x_1);
		float L_83 = V_7;
		float L_84 = ((&V_6)->___y_2);
		V_10 = ((float)((float)((float)((float)L_81*(float)L_82))+(float)((float)((float)L_83*(float)L_84))));
		SpringJoint2D_t216 * L_85 = (__this->___m_SpringJoint_17);
		float L_86 = V_9;
		float L_87 = V_10;
		Vector2_t42  L_88 = {0};
		Vector2__ctor_m546(&L_88, L_86, L_87, /*hidden argument*/NULL);
		NullCheck(L_85);
		AnchoredJoint2D_set_connectedAnchor_m959(L_85, L_88, /*hidden argument*/NULL);
		float L_89 = RaycastHit2D_get_distance_m960((&V_1), /*hidden argument*/NULL);
		float L_90 = L_89;
		Object_t * L_91 = Box(Single_t172_il2cpp_TypeInfo_var, &L_90);
		MonoBehaviour_StartCoroutine_m645(__this, _stringLiteral89, L_91, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.DragRigidbody::AttachBody(UnityEngine.Rigidbody2D,UnityEngine.Touch,System.Single)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral89;
extern "C" void DragRigidbody_AttachBody_m764 (DragRigidbody_t213 * __this, Rigidbody2D_t46 * ___body, Touch_t185  ___touch, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t42  V_0 = {0};
	Vector3_t40  V_1 = {0};
	Vector3_t40  V_2 = {0};
	Vector2_t42  V_3 = {0};
	float V_4 = 0.0f;
	Vector2_t42  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t40  V_10 = {0};
	{
		Vector2_t42  L_0 = Touch_get_position_m583((&___touch), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		float L_2 = ((&V_0)->___y_2);
		float L_3 = ___distance;
		Vector3__ctor_m529((&V_1), L_1, L_2, L_3, /*hidden argument*/NULL);
		Camera_t82 * L_4 = Camera_get_main_m646(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t40  L_5 = V_1;
		NullCheck(L_4);
		Vector3_t40  L_6 = Camera_ScreenToWorldPoint_m911(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = ((&V_2)->___x_1);
		float L_8 = ((&V_2)->___y_2);
		Vector2__ctor_m546((&V_3), L_7, L_8, /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_9 = (__this->___m_SpringJoint_17);
		NullCheck(L_9);
		Transform_t38 * L_10 = Component_get_transform_m511(L_9, /*hidden argument*/NULL);
		Vector2_t42  L_11 = V_3;
		Vector3_t40  L_12 = Vector2_op_Implicit_m580(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m524(L_10, L_12, /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_13 = (__this->___m_SpringJoint_17);
		Vector2_t42  L_14 = Vector2_get_zero_m919(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		AnchoredJoint2D_set_anchor_m951(L_13, L_14, /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_15 = (__this->___m_SpringJoint_17);
		NullCheck(L_15);
		SpringJoint2D_set_frequency_m952(L_15, (50.0f), /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_16 = (__this->___m_SpringJoint_17);
		Rigidbody2D_t46 * L_17 = ___body;
		NullCheck(L_17);
		Transform_t38 * L_18 = Component_get_transform_m511(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t40  L_19 = Transform_get_localScale_m549(L_18, /*hidden argument*/NULL);
		V_10 = L_19;
		float L_20 = Vector3_get_magnitude_m696((&V_10), /*hidden argument*/NULL);
		NullCheck(L_16);
		SpringJoint2D_set_dampingRatio_m954(L_16, ((float)((float)(5.0f)*(float)L_20)), /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_21 = (__this->___m_SpringJoint_17);
		NullCheck(L_21);
		SpringJoint2D_set_distance_m955(L_21, (0.2f), /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_22 = (__this->___m_SpringJoint_17);
		Rigidbody2D_t46 * L_23 = ___body;
		NullCheck(L_22);
		Joint2D_set_connectedBody_m939(L_22, L_23, /*hidden argument*/NULL);
		SpringJoint2D_t216 * L_24 = (__this->___m_SpringJoint_17);
		NullCheck(L_24);
		Rigidbody2D_t46 * L_25 = Joint2D_get_connectedBody_m938(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		float L_26 = Rigidbody2D_get_rotation_m956(L_25, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_26*(float)(-0.0174532924f)));
		Vector2_t42  L_27 = V_3;
		SpringJoint2D_t216 * L_28 = (__this->___m_SpringJoint_17);
		NullCheck(L_28);
		Rigidbody2D_t46 * L_29 = Joint2D_get_connectedBody_m938(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector2_t42  L_30 = Rigidbody2D_get_position_m957(L_29, /*hidden argument*/NULL);
		Vector2_t42  L_31 = Vector2_op_Subtraction_m958(NULL /*static, unused*/, L_27, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		float L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_33 = cosf(L_32);
		V_6 = L_33;
		float L_34 = V_4;
		float L_35 = sinf(L_34);
		V_7 = L_35;
		float L_36 = V_6;
		float L_37 = ((&V_5)->___x_1);
		float L_38 = V_7;
		float L_39 = ((&V_5)->___y_2);
		V_8 = ((float)((float)((float)((float)L_36*(float)L_37))-(float)((float)((float)L_38*(float)L_39))));
		float L_40 = V_7;
		float L_41 = ((&V_5)->___x_1);
		float L_42 = V_6;
		float L_43 = ((&V_5)->___y_2);
		V_9 = ((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))));
		SpringJoint2D_t216 * L_44 = (__this->___m_SpringJoint_17);
		float L_45 = V_8;
		float L_46 = V_9;
		Vector2_t42  L_47 = {0};
		Vector2__ctor_m546(&L_47, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		AnchoredJoint2D_set_connectedAnchor_m959(L_44, L_47, /*hidden argument*/NULL);
		float L_48 = ___distance;
		float L_49 = L_48;
		Object_t * L_50 = Box(Single_t172_il2cpp_TypeInfo_var, &L_49);
		MonoBehaviour_StartCoroutine_m645(__this, _stringLiteral89, L_50, /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.DragRigidbody::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral111;
extern "C" String_t* DragRigidbody_ToString_m765 (DragRigidbody_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_get_name_m499(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m420(NULL /*static, unused*/, _stringLiteral111, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Procrastinate.DragRigidbody::DragObject(System.Single)
extern TypeInfo* U3CDragObjectU3Ec__Iterator0_t214_il2cpp_TypeInfo_var;
extern "C" Object_t * DragRigidbody_DragObject_m766 (DragRigidbody_t213 * __this, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDragObjectU3Ec__Iterator0_t214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	U3CDragObjectU3Ec__Iterator0_t214 * V_0 = {0};
	{
		U3CDragObjectU3Ec__Iterator0_t214 * L_0 = (U3CDragObjectU3Ec__Iterator0_t214 *)il2cpp_codegen_object_new (U3CDragObjectU3Ec__Iterator0_t214_il2cpp_TypeInfo_var);
		U3CDragObjectU3Ec__Iterator0__ctor_m749(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDragObjectU3Ec__Iterator0_t214 * L_1 = V_0;
		float L_2 = ___distance;
		NullCheck(L_1);
		L_1->___distance_4 = L_2;
		U3CDragObjectU3Ec__Iterator0_t214 * L_3 = V_0;
		float L_4 = ___distance;
		NullCheck(L_3);
		L_3->___U3CU24U3Edistance_7 = L_4;
		U3CDragObjectU3Ec__Iterator0_t214 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_8 = __this;
		U3CDragObjectU3Ec__Iterator0_t214 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Procrastinate.DragRigidbody::MoveFinger(System.Single)
extern TypeInfo* U3CMoveFingerU3Ec__Iterator1_t215_il2cpp_TypeInfo_var;
extern "C" Object_t * DragRigidbody_MoveFinger_m767 (DragRigidbody_t213 * __this, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CMoveFingerU3Ec__Iterator1_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	U3CMoveFingerU3Ec__Iterator1_t215 * V_0 = {0};
	{
		U3CMoveFingerU3Ec__Iterator1_t215 * L_0 = (U3CMoveFingerU3Ec__Iterator1_t215 *)il2cpp_codegen_object_new (U3CMoveFingerU3Ec__Iterator1_t215_il2cpp_TypeInfo_var);
		U3CMoveFingerU3Ec__Iterator1__ctor_m755(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMoveFingerU3Ec__Iterator1_t215 * L_1 = V_0;
		float L_2 = ___distance;
		NullCheck(L_1);
		L_1->___distance_2 = L_2;
		U3CMoveFingerU3Ec__Iterator1_t215 * L_3 = V_0;
		float L_4 = ___distance;
		NullCheck(L_3);
		L_3->___U3CU24U3Edistance_5 = L_4;
		U3CMoveFingerU3Ec__Iterator1_t215 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_6 = __this;
		U3CMoveFingerU3Ec__Iterator1_t215 * L_6 = V_0;
		return L_6;
	}
}
// System.Void Procrastinate.DragRigidbody::OnEventDidEnd(System.Enum,System.Object)
extern TypeInfo* Event_t218_il2cpp_TypeInfo_var;
extern TypeInfo* ClockBehaviour_t204_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" void DragRigidbody_OnEventDidEnd_m768 (DragRigidbody_t213 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		ClockBehaviour_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 1;
		Object_t * L_2 = Box(Event_t218_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_4 = ___args;
		if (!((ClockBehaviour_t204 *)IsInst(L_4, ClockBehaviour_t204_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_5 = ___args;
		NullCheck(((ClockBehaviour_t204 *)IsInst(L_5, ClockBehaviour_t204_il2cpp_TypeInfo_var)));
		Rigidbody2D_t46 * L_6 = ClockBehaviour_get_body_m716(((ClockBehaviour_t204 *)IsInst(L_5, ClockBehaviour_t204_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		int32_t L_7 = Input_get_touchCount_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
		Touch_t185  L_8 = Input_GetTouch_m961(NULL /*static, unused*/, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/NULL);
		DragRigidbody_AttachBody_m764(__this, L_6, L_8, (0.0f), /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// Procrastinate.Event
#include "AssemblyU2DCSharp_Procrastinate_EventMethodDeclarations.h"



// Procrastinate.GameCenter/<Authenticate>c__AnonStorey3
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CAuthenticateU3.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.GameCenter/<Authenticate>c__AnonStorey3
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CAuthenticateU3MethodDeclarations.h"

// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"


// System.Void Procrastinate.GameCenter/<Authenticate>c__AnonStorey3::.ctor()
extern "C" void U3CAuthenticateU3Ec__AnonStorey3__ctor_m769 (U3CAuthenticateU3Ec__AnonStorey3_t220 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameCenter/<Authenticate>c__AnonStorey3::<>m__1(System.Boolean)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* IUserProfile_t271_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t272_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral112;
extern Il2CppCodeGenString* _stringLiteral113;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" void U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m770 (U3CAuthenticateU3Ec__AnonStorey3_t220 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		EventStatus_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IUserProfile_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		ILocalUser_t272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		_stringLiteral112 = il2cpp_codegen_string_literal_from_index(112);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		bool L_0 = ___success;
		if (!L_0)
		{
			goto IL_0098;
		}
	}
	{
		GameCenter_t219 * L_1 = (__this->___U3CU3Ef__this_1);
		int32_t L_2 = 5;
		Object_t * L_3 = Box(Event_t22_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = 3;
		Object_t * L_5 = Box(EventStatus_t21_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		RMXObject_DidFinishEvent_m79(L_1, (Enum_t5 *)L_3, L_5, /*hidden argument*/NULL);
		String_t* L_6 = (__this->___userInfo_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m420(NULL /*static, unused*/, L_6, _stringLiteral112, /*hidden argument*/NULL);
		__this->___userInfo_0 = L_7;
		String_t* L_8 = (__this->___userInfo_0);
		V_0 = L_8;
		ObjectU5BU5D_t146* L_9 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 7));
		String_t* L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0)) = (Object_t *)L_10;
		ObjectU5BU5D_t146* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, _stringLiteral113);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1)) = (Object_t *)_stringLiteral113;
		ObjectU5BU5D_t146* L_12 = L_11;
		Object_t * L_13 = Social_get_localUser_m962(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_userName() */, IUserProfile_t271_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2)) = (Object_t *)L_14;
		ObjectU5BU5D_t146* L_15 = L_12;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		ArrayElementTypeCheck (L_15, _stringLiteral114);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 3)) = (Object_t *)_stringLiteral114;
		ObjectU5BU5D_t146* L_16 = L_15;
		Object_t * L_17 = Social_get_localUser_m962(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_t271_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_18;
		ObjectU5BU5D_t146* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		ArrayElementTypeCheck (L_19, _stringLiteral115);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 5)) = (Object_t *)_stringLiteral115;
		ObjectU5BU5D_t146* L_20 = L_19;
		Object_t * L_21 = Social_get_localUser_m962(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_underage() */, ILocalUser_t272_il2cpp_TypeInfo_var, L_21);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 6);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 6)) = (Object_t *)L_24;
		String_t* L_25 = String_Concat_m419(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		__this->___userInfo_0 = L_25;
		goto IL_00c5;
	}

IL_0098:
	{
		GameCenter_t219 * L_26 = (__this->___U3CU3Ef__this_1);
		int32_t L_27 = 5;
		Object_t * L_28 = Box(Event_t22_il2cpp_TypeInfo_var, &L_27);
		int32_t L_29 = 4;
		Object_t * L_30 = Box(EventStatus_t21_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		RMXObject_DidFinishEvent_m79(L_26, (Enum_t5 *)L_28, L_30, /*hidden argument*/NULL);
		String_t* L_31 = (__this->___userInfo_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m420(NULL /*static, unused*/, L_31, _stringLiteral116, /*hidden argument*/NULL);
		__this->___userInfo_0 = L_32;
	}

IL_00c5:
	{
		return;
	}
}
// Procrastinate.GameCenter/<ReportScore>c__AnonStorey4
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CReportScoreU3E.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.GameCenter/<ReportScore>c__AnonStorey4
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CReportScoreU3EMethodDeclarations.h"



// System.Void Procrastinate.GameCenter/<ReportScore>c__AnonStorey4::.ctor()
extern "C" void U3CReportScoreU3Ec__AnonStorey4__ctor_m771 (U3CReportScoreU3Ec__AnonStorey4_t221 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameCenter/<ReportScore>c__AnonStorey4::<>m__2(System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral117;
extern Il2CppCodeGenString* _stringLiteral118;
extern "C" void U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m772 (U3CReportScoreU3Ec__AnonStorey4_t221 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t221 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t221 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t221 * G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___log_0);
		bool L_1 = ___success;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = _stringLiteral117;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001c;
	}

IL_0017:
	{
		G_B3_0 = _stringLiteral118;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m420(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_2);
		G_B3_2->___log_0 = L_2;
		return;
	}
}
// Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CCheckAchieveme.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CCheckAchievemeMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5::.ctor()
extern "C" void U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5__ctor_m773 (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5::<>m__3(UnityEngine.SocialPlatforms.IAchievement[])
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IAchievement_t273_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t170_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral120;
extern Il2CppCodeGenString* _stringLiteral121;
extern Il2CppCodeGenString* _stringLiteral122;
extern Il2CppCodeGenString* _stringLiteral123;
extern Il2CppCodeGenString* _stringLiteral124;
extern "C" void U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m774 (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * __this, IAchievementU5BU5D_t258* ___achievements, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IAchievement_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Double_t170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		_stringLiteral121 = il2cpp_codegen_string_literal_from_index(121);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	IAchievementU5BU5D_t258* V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * G_B5_0 = {0};
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * G_B6_1 = {0};
	{
		IAchievementU5BU5D_t258* L_0 = ___achievements;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_1 = (__this->___log_0);
		V_3 = L_1;
		ObjectU5BU5D_t146* L_2 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 4));
		String_t* L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t146* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, _stringLiteral119);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)_stringLiteral119;
		ObjectU5BU5D_t146* L_5 = L_4;
		IAchievementU5BU5D_t258* L_6 = ___achievements;
		NullCheck(L_6);
		int32_t L_7 = (((int32_t)(((Array_t *)L_6)->max_length)));
		Object_t * L_8 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t146* L_9 = L_5;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, _stringLiteral120);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)_stringLiteral120;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m419(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->___log_0 = L_10;
		IAchievementU5BU5D_t258* L_11 = ___achievements;
		V_1 = L_11;
		V_2 = 0;
		goto IL_00ea;
	}

IL_0049:
	{
		IAchievementU5BU5D_t258* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14));
		Object_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IAchievement::get_id() */, IAchievement_t273_il2cpp_TypeInfo_var, L_15);
		String_t* L_17 = (__this->___achievementID_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_op_Equality_m418(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e6;
		}
	}
	{
		Object_t * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.IAchievement::get_completed() */, IAchievement_t273_il2cpp_TypeInfo_var, L_19);
		G_B4_0 = __this;
		if (L_20)
		{
			G_B5_0 = __this;
			goto IL_0082;
		}
	}
	{
		Object_t * L_21 = V_0;
		NullCheck(L_21);
		double L_22 = (double)InterfaceFuncInvoker0< double >::Invoke(1 /* System.Double UnityEngine.SocialPlatforms.IAchievement::get_percentCompleted() */, IAchievement_t273_il2cpp_TypeInfo_var, L_21);
		G_B6_0 = ((((double)L_22) == ((double)(100.0)))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0083;
	}

IL_0082:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0083:
	{
		NullCheck(G_B6_1);
		G_B6_1->___isComplete_2 = G_B6_0;
		String_t* L_23 = (__this->___log_0);
		V_3 = L_23;
		ObjectU5BU5D_t146* L_24 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 7));
		String_t* L_25 = V_3;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		ArrayElementTypeCheck (L_24, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 0)) = (Object_t *)L_25;
		ObjectU5BU5D_t146* L_26 = L_24;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 1);
		ArrayElementTypeCheck (L_26, _stringLiteral121);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 1)) = (Object_t *)_stringLiteral121;
		ObjectU5BU5D_t146* L_27 = L_26;
		Object_t * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IAchievement::get_id() */, IAchievement_t273_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 2);
		ArrayElementTypeCheck (L_27, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 2)) = (Object_t *)L_29;
		ObjectU5BU5D_t146* L_30 = L_27;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 3);
		ArrayElementTypeCheck (L_30, _stringLiteral122);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 3)) = (Object_t *)_stringLiteral122;
		ObjectU5BU5D_t146* L_31 = L_30;
		Object_t * L_32 = V_0;
		NullCheck(L_32);
		double L_33 = (double)InterfaceFuncInvoker0< double >::Invoke(1 /* System.Double UnityEngine.SocialPlatforms.IAchievement::get_percentCompleted() */, IAchievement_t273_il2cpp_TypeInfo_var, L_32);
		double L_34 = L_33;
		Object_t * L_35 = Box(Double_t170_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 4);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 4)) = (Object_t *)L_35;
		ObjectU5BU5D_t146* L_36 = L_31;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 5);
		ArrayElementTypeCheck (L_36, _stringLiteral123);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 5)) = (Object_t *)_stringLiteral123;
		ObjectU5BU5D_t146* L_37 = L_36;
		Object_t * L_38 = V_0;
		NullCheck(L_38);
		bool L_39 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.IAchievement::get_completed() */, IAchievement_t273_il2cpp_TypeInfo_var, L_38);
		bool L_40 = L_39;
		Object_t * L_41 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 6);
		ArrayElementTypeCheck (L_37, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 6)) = (Object_t *)L_41;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Concat_m419(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		__this->___log_0 = L_42;
		goto IL_00f3;
	}

IL_00e6:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_00ea:
	{
		int32_t L_44 = V_2;
		IAchievementU5BU5D_t258* L_45 = V_1;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)(((int32_t)(((Array_t *)L_45)->max_length))))))
		{
			goto IL_0049;
		}
	}

IL_00f3:
	{
		goto IL_0123;
	}

IL_00f8:
	{
		int32_t L_46 = 2;
		Object_t * L_47 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_46);
		String_t* L_48 = (__this->___log_0);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_49 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_47, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0118;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_50 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
	}

IL_0118:
	{
		ArgumentException_t274 * L_51 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m963(L_51, _stringLiteral124, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_51);
	}

IL_0123:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int64
#include "mscorlib_System_Int64.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_0.h"
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenterMethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.GameCenter>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GKAchievementReporter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_SocialPlatforms_GKMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// Procrastinate.GameData
#include "AssemblyU2DCSharp_Procrastinate_GameDataMethodDeclarations.h"
struct SavedData_t34;
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Boolean>(System.Object)
// !!0 RMX.SavedData::Get<System.Boolean>(System.Object)
extern "C" bool SavedData_Get_TisBoolean_t171_m964_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisBoolean_t171_m964(__this /* static, unused */, p0, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisBoolean_t171_m964_gshared)(__this /* static, unused */, p0, method)
struct SavedData_t34;
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Int64>(System.Object)
// !!0 RMX.SavedData::Get<System.Int64>(System.Object)
extern "C" int64_t SavedData_Get_TisInt64_t169_m965_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisInt64_t169_m965(__this /* static, unused */, p0, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisInt64_t169_m965_gshared)(__this /* static, unused */, p0, method)


// System.Void Procrastinate.GameCenter::.ctor()
extern TypeInfo* ASingleton_1_t224_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m966_MethodInfo_var;
extern "C" void GameCenter__ctor_m775 (GameCenter_t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		ASingleton_1__ctor_m966_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483740);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t224_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m966(__this, /*hidden argument*/ASingleton_1__ctor_m966_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.GameCenter::.cctor()
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m967_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral125;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral130;
extern Il2CppCodeGenString* _stringLiteral131;
extern Il2CppCodeGenString* _stringLiteral132;
extern Il2CppCodeGenString* _stringLiteral133;
extern Il2CppCodeGenString* _stringLiteral134;
extern "C" void GameCenter__cctor_m776 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Dictionary_2__ctor_m967_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483741);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		_stringLiteral132 = il2cpp_codegen_string_literal_from_index(132);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		_stringLiteral134 = il2cpp_codegen_string_literal_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t223 * V_0 = {0};
	{
		Dictionary_2_t223 * L_0 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m967(L_0, /*hidden argument*/Dictionary_2__ctor_m967_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t223 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_1, 3, _stringLiteral125);
		Dictionary_2_t223 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_2, 4, _stringLiteral126);
		Dictionary_2_t223 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_3, 5, _stringLiteral127);
		Dictionary_2_t223 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_4, 6, _stringLiteral128);
		Dictionary_2_t223 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_5, 7, _stringLiteral129);
		Dictionary_2_t223 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_6, 8, _stringLiteral130);
		Dictionary_2_t223 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_7, ((int32_t)9), _stringLiteral131);
		Dictionary_2_t223 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_8, ((int32_t)10), _stringLiteral132);
		Dictionary_2_t223 * L_9 = V_0;
		NullCheck(L_9);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_9, ((int32_t)12), _stringLiteral133);
		Dictionary_2_t223 * L_10 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_10, ((int32_t)11), _stringLiteral134);
		Dictionary_2_t223 * L_11 = V_0;
		((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13 = L_11;
		return;
	}
}
// System.Void Procrastinate.GameCenter::Start()
extern TypeInfo* GameCenterPlatform_t144_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern "C" void GameCenter_Start_m777 (GameCenter_t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t144_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m968(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GameCenter_Authenticate_m782(__this, /*hidden argument*/NULL);
		GameCenter_UpdateGameCenterAchievements_m778(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_0 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		int32_t L_1 = 0;
		Object_t * L_2 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_1);
		float L_3 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_2, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		NullCheck(L_0);
		L_0->___willPauseOnLoad_31 = ((((float)L_3) > ((float)(0.0f)))? 1 : 0);
		GameController_t225 * L_4 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_4);
		bool L_5 = (L_4->___willPauseOnLoad_31);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_6 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_6);
		VirtActionInvoker2< bool, Object_t * >::Invoke(41 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, L_6, 1, NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::UpdateGameCenterAchievements()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t268_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m933_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m934_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m935_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t171_m964_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m936_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral135;
extern Il2CppCodeGenString* _stringLiteral136;
extern Il2CppCodeGenString* _stringLiteral137;
extern Il2CppCodeGenString* _stringLiteral138;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral139;
extern "C" void GameCenter_UpdateGameCenterAchievements_m778 (GameCenter_t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Enumerator_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Dictionary_2_GetEnumerator_m933_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		Enumerator_get_Current_m934_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		KeyValuePair_2_get_Key_m935_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		SavedData_Get_TisBoolean_t171_m964_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		Enumerator_MoveNext_m936_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483736);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		_stringLiteral137 = il2cpp_codegen_string_literal_from_index(137);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t267  V_1 = {0};
	Enumerator_t268  V_2 = {0};
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_1 = ((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13;
		NullCheck(L_1);
		Enumerator_t268  L_2 = Dictionary_2_GetEnumerator_m933(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m933_MethodInfo_var);
		V_2 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013f;
		}

IL_0016:
		{
			KeyValuePair_2_t267  L_3 = Enumerator_get_Current_m934((&V_2), /*hidden argument*/Enumerator_get_Current_m934_MethodInfo_var);
			V_1 = L_3;
			int32_t L_4 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_5);
			NullCheck(L_6);
			String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
			NullCheck(L_7);
			bool L_8 = String_StartsWith_m969(L_7, _stringLiteral135, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0124;
			}
		}

IL_003e:
		{
			int32_t L_9 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			int32_t L_10 = L_9;
			Object_t * L_11 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_10);
			bool L_12 = SavedData_Get_TisBoolean_t171_m964(NULL /*static, unused*/, L_11, /*hidden argument*/SavedData_Get_TisBoolean_t171_m964_MethodInfo_var);
			V_3 = L_12;
		}

IL_0050:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_13 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
				bool L_14 = GameCenter_CheckAchievementsWithGameCenter_m789(__this, L_13, /*hidden argument*/NULL);
				V_4 = L_14;
				bool L_15 = V_3;
				bool L_16 = V_4;
				if ((((int32_t)L_15) == ((int32_t)L_16)))
				{
					goto IL_007f;
				}
			}

IL_0067:
			{
				int32_t L_17 = 4;
				Object_t * L_18 = Box(Event_t22_il2cpp_TypeInfo_var, &L_17);
				int32_t L_19 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
				int32_t L_20 = L_19;
				Object_t * L_21 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_20);
				RMXObject_DidCauseEvent_m80(__this, (Enum_t5 *)L_18, L_21, /*hidden argument*/NULL);
			}

IL_007f:
			{
				String_t* L_22 = V_0;
				V_5 = L_22;
				ObjectU5BU5D_t146* L_23 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 8));
				String_t* L_24 = V_5;
				NullCheck(L_23);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
				ArrayElementTypeCheck (L_23, L_24);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 0)) = (Object_t *)L_24;
				ObjectU5BU5D_t146* L_25 = L_23;
				NullCheck(L_25);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 1);
				ArrayElementTypeCheck (L_25, _stringLiteral136);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 1)) = (Object_t *)_stringLiteral136;
				ObjectU5BU5D_t146* L_26 = L_25;
				int32_t L_27 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
				int32_t L_28 = L_27;
				Object_t * L_29 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_28);
				NullCheck(L_26);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 2);
				ArrayElementTypeCheck (L_26, L_29);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 2)) = (Object_t *)L_29;
				ObjectU5BU5D_t146* L_30 = L_26;
				NullCheck(L_30);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 3);
				ArrayElementTypeCheck (L_30, _stringLiteral137);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 3)) = (Object_t *)_stringLiteral137;
				ObjectU5BU5D_t146* L_31 = L_30;
				bool L_32 = V_3;
				bool L_33 = L_32;
				Object_t * L_34 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_33);
				NullCheck(L_31);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 4);
				ArrayElementTypeCheck (L_31, L_34);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 4)) = (Object_t *)L_34;
				ObjectU5BU5D_t146* L_35 = L_31;
				NullCheck(L_35);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 5);
				ArrayElementTypeCheck (L_35, _stringLiteral138);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 5)) = (Object_t *)_stringLiteral138;
				ObjectU5BU5D_t146* L_36 = L_35;
				bool L_37 = V_4;
				bool L_38 = L_37;
				Object_t * L_39 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_38);
				NullCheck(L_36);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 6);
				ArrayElementTypeCheck (L_36, L_39);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 6)) = (Object_t *)L_39;
				ObjectU5BU5D_t146* L_40 = L_36;
				NullCheck(L_40);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 7);
				ArrayElementTypeCheck (L_40, _stringLiteral19);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_40, 7)) = (Object_t *)_stringLiteral19;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_41 = String_Concat_m419(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
				V_0 = L_41;
				goto IL_0124;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t143 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_00da;
			throw e;
		}

CATCH_00da:
		{ // begin catch(System.Object)
			String_t* L_42 = V_0;
			V_5 = L_42;
			ObjectU5BU5D_t146* L_43 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 6));
			String_t* L_44 = V_5;
			NullCheck(L_43);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
			ArrayElementTypeCheck (L_43, L_44);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_43, 0)) = (Object_t *)L_44;
			ObjectU5BU5D_t146* L_45 = L_43;
			NullCheck(L_45);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 1);
			ArrayElementTypeCheck (L_45, _stringLiteral136);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 1)) = (Object_t *)_stringLiteral136;
			ObjectU5BU5D_t146* L_46 = L_45;
			int32_t L_47 = KeyValuePair_2_get_Key_m935((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			int32_t L_48 = L_47;
			Object_t * L_49 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_48);
			NullCheck(L_46);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
			ArrayElementTypeCheck (L_46, L_49);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)L_49;
			ObjectU5BU5D_t146* L_50 = L_46;
			NullCheck(L_50);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 3);
			ArrayElementTypeCheck (L_50, _stringLiteral139);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 3)) = (Object_t *)_stringLiteral139;
			ObjectU5BU5D_t146* L_51 = L_50;
			bool L_52 = V_3;
			bool L_53 = L_52;
			Object_t * L_54 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_53);
			NullCheck(L_51);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 4);
			ArrayElementTypeCheck (L_51, L_54);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_51, 4)) = (Object_t *)L_54;
			ObjectU5BU5D_t146* L_55 = L_51;
			NullCheck(L_55);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 5);
			ArrayElementTypeCheck (L_55, _stringLiteral19);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_55, 5)) = (Object_t *)_stringLiteral19;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_56 = String_Concat_m419(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
			V_0 = L_56;
			goto IL_0124;
		} // end catch (depth: 2)

IL_0124:
		{
			int32_t L_57 = 0;
			Object_t * L_58 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_57);
			String_t* L_59 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_60 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_58, L_59, /*hidden argument*/NULL);
			if (!L_60)
			{
				goto IL_013f;
			}
		}

IL_0135:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_61 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m416(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
		}

IL_013f:
		{
			bool L_62 = Enumerator_MoveNext_m936((&V_2), /*hidden argument*/Enumerator_MoveNext_m936_MethodInfo_var);
			if (L_62)
			{
				goto IL_0016;
			}
		}

IL_014b:
		{
			IL2CPP_LEAVE(0x15C, FINALLY_0150);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0150;
	}

FINALLY_0150:
	{ // begin finally (depth: 1)
		Enumerator_t268  L_63 = V_2;
		Enumerator_t268  L_64 = L_63;
		Object_t * L_65 = Box(Enumerator_t268_il2cpp_TypeInfo_var, &L_64);
		NullCheck(L_65);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_65);
		IL2CPP_END_FINALLY(336)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(336)
	{
		IL2CPP_JUMP_TBL(0x15C, IL_015c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_015c:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::OnEventDidStart(System.Enum,System.Object)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern "C" void GameCenter_OnEventDidStart_m779 (GameCenter_t219 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t22_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		GameCenter_Authenticate_m782(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::OnEventDidEnd(System.Enum,System.Object)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisInt64_t169_m965_MethodInfo_var;
extern "C" void GameCenter_OnEventDidEnd_m780 (GameCenter_t219 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SavedData_Get_TisInt64_t169_m965_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t22_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		GameCenter_UpdateGameCenterAchievements_m778(__this, /*hidden argument*/NULL);
		int32_t L_4 = 1;
		Object_t * L_5 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_4);
		int64_t L_6 = SavedData_Get_TisInt64_t169_m965(NULL /*static, unused*/, L_5, /*hidden argument*/SavedData_Get_TisInt64_t169_m965_MethodInfo_var);
		GameCenter_ReportScore_m783(__this, L_6, 3, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::OnEvent(System.Enum,System.Object)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral140;
extern "C" void GameCenter_OnEvent_m781 (GameCenter_t219 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 4;
		Object_t * L_2 = Box(Event_t22_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		Object_t * L_4 = ___info;
		if (!((Object_t *)IsInst(L_4, UserData_t250_il2cpp_TypeInfo_var)))
		{
			goto IL_0060;
		}
	}
	{
		Object_t * L_5 = ___info;
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t149_il2cpp_TypeInfo_var))));
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_7);
		SavedData_Set_m99(NULL /*static, unused*/, L_8, 1, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		GameCenter_ReportProgress_m788(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = 7;
		Object_t * L_11 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_10);
		Object_t * L_12 = ___info;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m420(NULL /*static, unused*/, _stringLiteral140, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_15 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_11, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_16 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::Authenticate()
extern TypeInfo* U3CAuthenticateU3Ec__AnonStorey3_t220_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t145_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t272_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m770_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m970_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral141;
extern "C" void GameCenter_Authenticate_m782 (GameCenter_t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAuthenticateU3Ec__AnonStorey3_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		Action_1_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		ILocalUser_t272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m770_MethodInfo_var = il2cpp_codegen_method_info_from_index(96);
		Action_1__ctor_m970_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483745);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	U3CAuthenticateU3Ec__AnonStorey3_t220 * V_0 = {0};
	{
		U3CAuthenticateU3Ec__AnonStorey3_t220 * L_0 = (U3CAuthenticateU3Ec__AnonStorey3_t220 *)il2cpp_codegen_object_new (U3CAuthenticateU3Ec__AnonStorey3_t220_il2cpp_TypeInfo_var);
		U3CAuthenticateU3Ec__AnonStorey3__ctor_m769(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAuthenticateU3Ec__AnonStorey3_t220 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_1 = __this;
		U3CAuthenticateU3Ec__AnonStorey3_t220 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_2);
		L_2->___userInfo_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		bool L_4 = GameCenter_get_UserAuthenticated_m787(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_5 = 5;
		Object_t * L_6 = Box(Event_t22_il2cpp_TypeInfo_var, &L_5);
		RMXObject_WillBeginEvent_m73(__this, (Enum_t5 *)L_6, /*hidden argument*/NULL);
		Object_t * L_7 = Social_get_localUser_m962(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CAuthenticateU3Ec__AnonStorey3_t220 * L_8 = V_0;
		IntPtr_t L_9 = { (void*)U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m770_MethodInfo_var };
		Action_1_t145 * L_10 = (Action_1_t145 *)il2cpp_codegen_object_new (Action_1_t145_il2cpp_TypeInfo_var);
		Action_1__ctor_m970(L_10, L_8, L_9, /*hidden argument*/Action_1__ctor_m970_MethodInfo_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< Action_1_t145 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t272_il2cpp_TypeInfo_var, L_7, L_10);
		goto IL_005f;
	}

IL_0049:
	{
		U3CAuthenticateU3Ec__AnonStorey3_t220 * L_11 = V_0;
		U3CAuthenticateU3Ec__AnonStorey3_t220 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___userInfo_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m420(NULL /*static, unused*/, L_13, _stringLiteral141, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->___userInfo_0 = L_14;
	}

IL_005f:
	{
		int32_t L_15 = 1;
		Object_t * L_16 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_15);
		U3CAuthenticateU3Ec__AnonStorey3_t220 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (L_17->___userInfo_0);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_19 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_20 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::ReportScore(System.Int64,Procrastinate.UserData)
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* U3CReportScoreU3Ec__AnonStorey4_t221_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t169_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m772_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m970_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral142;
extern Il2CppCodeGenString* _stringLiteral143;
extern "C" void GameCenter_ReportScore_m783 (GameCenter_t219 * __this, int64_t ___score, int32_t ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		U3CReportScoreU3Ec__AnonStorey4_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int64_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Action_1_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m772_MethodInfo_var = il2cpp_codegen_method_info_from_index(98);
		Action_1__ctor_m970_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483745);
		_stringLiteral142 = il2cpp_codegen_string_literal_from_index(142);
		_stringLiteral143 = il2cpp_codegen_string_literal_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	Exception_t143 * V_2 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t221 * V_3 = {0};
	String_t* V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		bool L_0 = GameCenter_get_UserAuthenticated_m787(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		int64_t L_1 = ___score;
		if ((((int64_t)L_1) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_00bf;
		}
	}
	{
		U3CReportScoreU3Ec__AnonStorey4_t221 * L_2 = (U3CReportScoreU3Ec__AnonStorey4_t221 *)il2cpp_codegen_object_new (U3CReportScoreU3Ec__AnonStorey4_t221_il2cpp_TypeInfo_var);
		U3CReportScoreU3Ec__AnonStorey4__ctor_m771(L_2, /*hidden argument*/NULL);
		V_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_3 = ((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13;
		int32_t L_4 = ___data;
		NullCheck(L_3);
		String_t* L_5 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		U3CReportScoreU3Ec__AnonStorey4_t221 * L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___log_0 = L_7;
		V_1 = 1;
		U3CReportScoreU3Ec__AnonStorey4_t221 * L_8 = V_3;
		U3CReportScoreU3Ec__AnonStorey4_t221 * L_9 = V_3;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___log_0);
		V_4 = L_10;
		ObjectU5BU5D_t146* L_11 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 5));
		String_t* L_12 = V_4;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0)) = (Object_t *)L_12;
		ObjectU5BU5D_t146* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, _stringLiteral142);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)_stringLiteral142;
		ObjectU5BU5D_t146* L_14 = L_13;
		int64_t L_15 = ___score;
		int64_t L_16 = L_15;
		Object_t * L_17 = Box(Int64_t169_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 2)) = (Object_t *)L_17;
		ObjectU5BU5D_t146* L_18 = L_14;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 3);
		ArrayElementTypeCheck (L_18, _stringLiteral143);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 3)) = (Object_t *)_stringLiteral143;
		ObjectU5BU5D_t146* L_19 = L_18;
		String_t* L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 4);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 4)) = (Object_t *)L_20;
		String_t* L_21 = String_Concat_m419(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->___log_0 = L_21;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			int64_t L_22 = ___score;
			String_t* L_23 = V_0;
			U3CReportScoreU3Ec__AnonStorey4_t221 * L_24 = V_3;
			IntPtr_t L_25 = { (void*)U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m772_MethodInfo_var };
			Action_1_t145 * L_26 = (Action_1_t145 *)il2cpp_codegen_object_new (Action_1_t145_il2cpp_TypeInfo_var);
			Action_1__ctor_m970(L_26, L_24, L_25, /*hidden argument*/Action_1__ctor_m970_MethodInfo_var);
			Social_ReportScore_m971(NULL /*static, unused*/, L_22, L_23, L_26, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xBF, FINALLY_009e);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t143 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0084;
			throw e;
		}

CATCH_0084:
		{ // begin catch(System.Exception)
			V_2 = ((Exception_t143 *)__exception_local);
			U3CReportScoreU3Ec__AnonStorey4_t221 * L_27 = V_3;
			U3CReportScoreU3Ec__AnonStorey4_t221 * L_28 = V_3;
			NullCheck(L_28);
			String_t* L_29 = (L_28->___log_0);
			Exception_t143 * L_30 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_31 = String_Concat_m599(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
			NullCheck(L_27);
			L_27->___log_0 = L_31;
			V_1 = 3;
			IL2CPP_LEAVE(0xBF, FINALLY_009e);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			int32_t L_32 = V_1;
			int32_t L_33 = L_32;
			Object_t * L_34 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_33);
			U3CReportScoreU3Ec__AnonStorey4_t221 * L_35 = V_3;
			NullCheck(L_35);
			String_t* L_36 = (L_35->___log_0);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_37 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_34, L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_00be;
			}
		}

IL_00b4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_38 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m416(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		}

IL_00be:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_00bf:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::Update()
extern const Il2CppType* UserData_t250_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t5_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t171_m964_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral136;
extern Il2CppCodeGenString* _stringLiteral107;
extern Il2CppCodeGenString* _stringLiteral144;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" void GameCenter_Update_m784 (GameCenter_t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_0_0_0_var = il2cpp_codegen_type_from_index(118);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enum_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		SavedData_Get_TisBoolean_t171_m964_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		float L_0 = Time_get_fixedTime_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->____checkTime_12);
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_00f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, LoadTypeToken(UserData_t250_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t5_il2cpp_TypeInfo_var);
		Array_t * L_4 = Enum_GetValues_m972(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Array::GetEnumerator() */, L_4);
		V_2 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a3;
		}

IL_0030:
		{
			Object_t * L_6 = V_2;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_6);
			V_1 = ((*(int32_t*)((int32_t*)UnBox (L_7, Int32_t149_il2cpp_TypeInfo_var))));
		}

IL_003c:
		try
		{ // begin try (depth: 2)
			String_t* L_8 = V_0;
			V_3 = L_8;
			ObjectU5BU5D_t146* L_9 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 8));
			String_t* L_10 = V_3;
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
			ArrayElementTypeCheck (L_9, L_10);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0)) = (Object_t *)L_10;
			ObjectU5BU5D_t146* L_11 = L_9;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
			ArrayElementTypeCheck (L_11, _stringLiteral136);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1)) = (Object_t *)_stringLiteral136;
			ObjectU5BU5D_t146* L_12 = L_11;
			int32_t L_13 = V_1;
			int32_t L_14 = L_13;
			Object_t * L_15 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
			ArrayElementTypeCheck (L_12, L_15);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2)) = (Object_t *)L_15;
			ObjectU5BU5D_t146* L_16 = L_12;
			NullCheck(L_16);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 3);
			ArrayElementTypeCheck (L_16, _stringLiteral107);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 3)) = (Object_t *)_stringLiteral107;
			ObjectU5BU5D_t146* L_17 = L_16;
			int32_t L_18 = V_1;
			int32_t L_19 = L_18;
			Object_t * L_20 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_19);
			bool L_21 = SavedData_Get_TisBoolean_t171_m964(NULL /*static, unused*/, L_20, /*hidden argument*/SavedData_Get_TisBoolean_t171_m964_MethodInfo_var);
			bool L_22 = L_21;
			Object_t * L_23 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_22);
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
			ArrayElementTypeCheck (L_17, L_23);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4)) = (Object_t *)L_23;
			ObjectU5BU5D_t146* L_24 = L_17;
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 5);
			ArrayElementTypeCheck (L_24, _stringLiteral144);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 5)) = (Object_t *)_stringLiteral144;
			ObjectU5BU5D_t146* L_25 = L_24;
			int32_t L_26 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
			bool L_27 = GameCenter_HasMetTimeCriteria_m786(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			bool L_28 = L_27;
			Object_t * L_29 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_28);
			NullCheck(L_25);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 6);
			ArrayElementTypeCheck (L_25, L_29);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 6)) = (Object_t *)L_29;
			ObjectU5BU5D_t146* L_30 = L_25;
			NullCheck(L_30);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 7);
			ArrayElementTypeCheck (L_30, _stringLiteral19);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 7)) = (Object_t *)_stringLiteral19;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_31 = String_Concat_m419(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
			V_0 = L_31;
			goto IL_00a3;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t143 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_009d;
			throw e;
		}

CATCH_009d:
		{ // begin catch(System.Object)
			goto IL_00a3;
		} // end catch (depth: 2)

IL_00a3:
		{
			Object_t * L_32 = V_2;
			NullCheck(L_32);
			bool L_33 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_0030;
			}
		}

IL_00ae:
		{
			IL2CPP_LEAVE(0xC8, FINALLY_00b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_00b3;
	}

FINALLY_00b3:
	{ // begin finally (depth: 1)
		{
			Object_t * L_34 = V_2;
			V_4 = ((Object_t *)IsInst(L_34, IDisposable_t153_il2cpp_TypeInfo_var));
			Object_t * L_35 = V_4;
			if (L_35)
			{
				goto IL_00c0;
			}
		}

IL_00bf:
		{
			IL2CPP_END_FINALLY(179)
		}

IL_00c0:
		{
			Object_t * L_36 = V_4;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_36);
			IL2CPP_END_FINALLY(179)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(179)
	{
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_00c8:
	{
		int32_t L_37 = 2;
		Object_t * L_38 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_40 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00e3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_41 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		float L_42 = Time_get_fixedTime_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_43 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_43);
		float L_44 = (L_43->___updateScoresEvery_33);
		__this->____checkTime_12 = ((float)((float)L_42+(float)L_44));
	}

IL_00f9:
	{
		return;
	}
}
// System.Boolean Procrastinate.GameCenter::HasPlayerAlreadyAchieved(Procrastinate.UserData)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t171_m964_MethodInfo_var;
extern "C" bool GameCenter_HasPlayerAlreadyAchieved_m785 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SavedData_Get_TisBoolean_t171_m964_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = SavedData_Get_TisBoolean_t171_m964(NULL /*static, unused*/, L_2, /*hidden argument*/SavedData_Get_TisBoolean_t171_m964_MethodInfo_var);
		return L_3;
	}
}
// System.Boolean Procrastinate.GameCenter::HasMetTimeCriteria(Procrastinate.UserData)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t171_m964_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral145;
extern "C" bool GameCenter_HasMetTimeCriteria_m786 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		SavedData_Get_TisBoolean_t171_m964_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = {0};
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		V_0 = L_2;
		int32_t L_3 = ___key;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = SavedData_Get_TisBoolean_t171_m964(NULL /*static, unused*/, L_5, /*hidden argument*/SavedData_Get_TisBoolean_t171_m964_MethodInfo_var);
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		V_1 = 0;
		int32_t L_7 = ___key;
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (((int32_t)((int32_t)L_8-(int32_t)5)) == 0)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)5)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)5)) == 2)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)5)) == 3)
		{
			goto IL_005f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)5)) == 4)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00a4;
	}

IL_0043:
	{
		float L_9 = V_0;
		V_1 = ((((float)L_9) > ((float)(20.0f)))? 1 : 0);
		goto IL_00ba;
	}

IL_0051:
	{
		float L_10 = V_0;
		V_1 = ((((float)L_10) > ((float)(600.0f)))? 1 : 0);
		goto IL_00ba;
	}

IL_005f:
	{
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_12 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_12);
		float L_13 = GameController_get_TotalDevTimeWasted_m793(L_12, /*hidden argument*/NULL);
		V_1 = ((((float)L_11) > ((float)((float)((float)L_13/(float)(4.0f)))))? 1 : 0);
		goto IL_00ba;
	}

IL_0078:
	{
		float L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_15 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_15);
		float L_16 = GameController_get_TotalDevTimeWasted_m793(L_15, /*hidden argument*/NULL);
		V_1 = ((((float)L_14) > ((float)((float)((float)L_16/(float)(2.0f)))))? 1 : 0);
		goto IL_00ba;
	}

IL_0091:
	{
		float L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_18 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_18);
		float L_19 = GameController_get_TotalDevTimeWasted_m793(L_18, /*hidden argument*/NULL);
		V_1 = ((((float)L_17) > ((float)L_19))? 1 : 0);
		goto IL_00ba;
	}

IL_00a4:
	{
		int32_t L_20 = ___key;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m599(NULL /*static, unused*/, L_22, _stringLiteral145, /*hidden argument*/NULL);
		Exception_t143 * L_24 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m450(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00ba:
	{
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_26 = 4;
		Object_t * L_27 = Box(Event_t22_il2cpp_TypeInfo_var, &L_26);
		int32_t L_28 = ___key;
		int32_t L_29 = L_28;
		Object_t * L_30 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_29);
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m62(NULL /*static, unused*/, (Enum_t5 *)L_27, L_30, /*hidden argument*/NULL);
		int32_t L_31 = ___key;
		int32_t L_32 = L_31;
		Object_t * L_33 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_32);
		SavedData_Set_m99(NULL /*static, unused*/, L_33, 1, /*hidden argument*/NULL);
		return 1;
	}

IL_00df:
	{
		return 0;
	}
}
// System.Boolean Procrastinate.GameCenter::get_UserAuthenticated()
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool GameCenter_get_UserAuthenticated_m787 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 5;
		Object_t * L_1 = Box(Event_t22_il2cpp_TypeInfo_var, &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		int32_t L_2 = NotificationCenter_StatusOf_m58(NULL /*static, unused*/, (Enum_t5 *)L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
	}
}
// System.Void Procrastinate.GameCenter::ReportProgress(Procrastinate.UserData)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t171_m964_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral146;
extern Il2CppCodeGenString* _stringLiteral147;
extern Il2CppCodeGenString* _stringLiteral148;
extern Il2CppCodeGenString* _stringLiteral149;
extern "C" void GameCenter_ReportProgress_m788 (GameCenter_t219 * __this, int32_t ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		SavedData_Get_TisBoolean_t171_m964_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		_stringLiteral146 = il2cpp_codegen_string_literal_from_index(146);
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		_stringLiteral148 = il2cpp_codegen_string_literal_from_index(148);
		_stringLiteral149 = il2cpp_codegen_string_literal_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	int32_t V_2 = {0};
	float V_3 = 0.0f;
	Exception_t143 * V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___data;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = SavedData_Get_TisBoolean_t171_m964(NULL /*static, unused*/, L_2, /*hidden argument*/SavedData_Get_TisBoolean_t171_m964_MethodInfo_var);
		V_0 = L_3;
		int32_t L_4 = ___data;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
		bool L_8 = V_0;
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m425(NULL /*static, unused*/, L_7, _stringLiteral146, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		V_2 = 2;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0037;
		}
	}
	{
		G_B3_0 = ((int32_t)100);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_3 = (((float)G_B3_0));
		float L_13 = V_3;
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_14 = ___data;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_16);
		float L_18 = V_3;
		float L_19 = L_18;
		Object_t * L_20 = Box(Single_t172_il2cpp_TypeInfo_var, &L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m425(NULL /*static, unused*/, L_17, _stringLiteral147, L_20, /*hidden argument*/NULL);
		Debug_LogError_m503(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		bool L_22 = GameCenter_get_UserAuthenticated_m787(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e4;
		}
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_23 = ((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13;
		int32_t L_24 = ___data;
		NullCheck(L_23);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::get_Item(!0) */, L_23, L_24);
		float L_26 = V_3;
		GKAchievementReporter_ReportAchievement_m1(NULL /*static, unused*/, L_25, L_26, 1, /*hidden argument*/NULL);
		String_t* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m420(NULL /*static, unused*/, L_27, _stringLiteral148, /*hidden argument*/NULL);
		V_1 = L_28;
		goto IL_00d2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0093;
		throw e;
	}

CATCH_0093:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t143 *)__exception_local);
			int32_t L_29 = 3;
			Object_t * L_30 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_29);
			Exception_t143 * L_31 = V_4;
			NullCheck(L_31);
			String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_31);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_33 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_30, L_32, /*hidden argument*/NULL);
			if (L_33)
			{
				goto IL_00c3;
			}
		}

IL_00ac:
		{
			int32_t L_34 = 2;
			Object_t * L_35 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_34);
			Exception_t143 * L_36 = V_4;
			NullCheck(L_36);
			String_t* L_37 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_36);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_38 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_35, L_37, /*hidden argument*/NULL);
			if (!L_38)
			{
				goto IL_00cd;
			}
		}

IL_00c3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_39 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m416(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		}

IL_00cd:
		{
			goto IL_00d2;
		}
	} // end catch (depth: 1)

IL_00d2:
	{
		String_t* L_40 = V_1;
		float L_41 = V_3;
		float L_42 = L_41;
		Object_t * L_43 = Box(Single_t172_il2cpp_TypeInfo_var, &L_42);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m425(NULL /*static, unused*/, L_40, _stringLiteral149, L_43, /*hidden argument*/NULL);
		V_1 = L_44;
	}

IL_00e4:
	{
		int32_t L_45 = V_2;
		int32_t L_46 = L_45;
		Object_t * L_47 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_46);
		String_t* L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_49 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_47, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_00ff;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_50 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		return;
	}
}
// System.Boolean Procrastinate.GameCenter::CheckAchievementsWithGameCenter(Procrastinate.UserData)
extern TypeInfo* U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t275_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m774_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m973_MethodInfo_var;
extern "C" bool GameCenter_CheckAchievementsWithGameCenter_m789 (GameCenter_t219 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(156);
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Action_1_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m774_MethodInfo_var = il2cpp_codegen_method_info_from_index(99);
		Action_1__ctor_m973_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483748);
		s_Il2CppMethodIntialized = true;
	}
	ArgumentException_t274 * V_0 = {0};
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * L_0 = (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 *)il2cpp_codegen_object_new (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222_il2cpp_TypeInfo_var);
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5__ctor_m773(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13;
		int32_t L_3 = ___key;
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::get_Item(!0) */, L_2, L_3);
		NullCheck(L_1);
		L_1->___achievementID_1 = L_4;
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * L_5 = V_1;
		NullCheck(L_5);
		L_5->___isComplete_2 = 0;
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___log_0 = L_7;
		bool L_8 = GameCenter_get_UserAuthenticated_m787(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0085;
		}
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * L_9 = V_1;
		IntPtr_t L_10 = { (void*)U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m774_MethodInfo_var };
		Action_1_t275 * L_11 = (Action_1_t275 *)il2cpp_codegen_object_new (Action_1_t275_il2cpp_TypeInfo_var);
		Action_1__ctor_m973(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m973_MethodInfo_var);
		Social_LoadAchievements_m974(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0085;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t274_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0049;
		throw e;
	}

CATCH_0049:
	{ // begin catch(System.ArgumentException)
		{
			V_0 = ((ArgumentException_t274 *)__exception_local);
			int32_t L_12 = 3;
			Object_t * L_13 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_12);
			ArgumentException_t274 * L_14 = V_0;
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.ArgumentException::get_Message() */, L_14);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_16 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_13, L_15, /*hidden argument*/NULL);
			if (L_16)
			{
				goto IL_0076;
			}
		}

IL_0060:
		{
			int32_t L_17 = 2;
			Object_t * L_18 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_17);
			ArgumentException_t274 * L_19 = V_0;
			NullCheck(L_19);
			String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.ArgumentException::get_Message() */, L_19);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_21 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_18, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_0080;
			}
		}

IL_0076:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_22 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m416(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		}

IL_0080:
		{
			goto IL_0085;
		}
	} // end catch (depth: 1)

IL_0085:
	{
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t222 * L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = (L_23->___isComplete_2);
		return L_24;
	}
}
// System.Void Procrastinate.GameCenter::InitializeKeys()
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t268_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m933_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m934_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m935_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m975_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m936_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral150;
extern "C" void GameCenter_InitializeKeys_m790 (GameCenter_t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Enumerator_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Dictionary_2_GetEnumerator_m933_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		Enumerator_get_Current_m934_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		KeyValuePair_2_get_Key_m935_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		KeyValuePair_2_get_Value_m975_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483749);
		Enumerator_MoveNext_m936_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483736);
		_stringLiteral150 = il2cpp_codegen_string_literal_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t267  V_0 = {0};
	Enumerator_t268  V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_0 = ((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13;
		NullCheck(L_0);
		Enumerator_t268  L_1 = Dictionary_2_GetEnumerator_m933(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m933_MethodInfo_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0010:
		{
			KeyValuePair_2_t267  L_2 = Enumerator_get_Current_m934((&V_1), /*hidden argument*/Enumerator_get_Current_m934_MethodInfo_var);
			V_0 = L_2;
			IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
			Dictionary_2_t223 * L_3 = ((GameCenter_t219_StaticFields*)GameCenter_t219_il2cpp_TypeInfo_var->static_fields)->___UniqueID_13;
			int32_t L_4 = KeyValuePair_2_get_Key_m935((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m935_MethodInfo_var);
			String_t* L_5 = KeyValuePair_2_get_Value_m975((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m975_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m420(NULL /*static, unused*/, _stringLiteral150, L_5, /*hidden argument*/NULL);
			NullCheck(L_3);
			VirtActionInvoker2< int32_t, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::set_Item(!0,!1) */, L_3, L_4, L_6);
		}

IL_003a:
		{
			bool L_7 = Enumerator_MoveNext_m936((&V_1), /*hidden argument*/Enumerator_MoveNext_m936_MethodInfo_var);
			if (L_7)
			{
				goto IL_0010;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x57, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Enumerator_t268  L_8 = V_1;
		Enumerator_t268  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t268_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_10);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_0057:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::OnApplicationQuit()
extern "C" void GameCenter_OnApplicationQuit_m791 (GameCenter_t219 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = GameData_get_PercentageOfDevTimeWastedX10000_m821(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameCenter_ReportScore_m783(__this, L_0, 4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// Procrastinate.GameData
#include "AssemblyU2DCSharp_Procrastinate_GameData.h"
// Procrastinate.PauseCanvas
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas.h"
// RMX.Gyro
#include "AssemblyU2DCSharp_RMX_Gyro.h"
// RMX.AGameController`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen_0.h"
// Procrastinate.Tests
#include "AssemblyU2DCSharp_Procrastinate_Tests.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// RMX.AGameController`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen_0MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.GameData>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_4MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_6MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<RMX.Gyro>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_5MethodDeclarations.h"
// Procrastinate.Version
#include "AssemblyU2DCSharp_Procrastinate_VersionMethodDeclarations.h"


// System.Void Procrastinate.GameController::.ctor()
extern const MethodInfo* AGameController_1__ctor_m976_MethodInfo_var;
extern "C" void GameController__ctor_m792 (GameController_t225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AGameController_1__ctor_m976_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483750);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___MaxNumberOfClocks_28 = ((int32_t)50);
		__this->___FingerSize_29 = (0.3f);
		__this->___updateScoresEvery_33 = (1.0f);
		__this->____totalDevTimeWastedInHours_34 = (5.0f);
		__this->____chance_35 = ((int32_t)50);
		AGameController_1__ctor_m976(__this, /*hidden argument*/AGameController_1__ctor_m976_MethodInfo_var);
		return;
	}
}
// System.Single Procrastinate.GameController::get_TotalDevTimeWasted()
extern "C" float GameController_get_TotalDevTimeWasted_m793 (GameController_t225 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->____totalDevTimeWastedInHours_34);
		return ((float)((float)((float)((float)L_0*(float)(60.0f)))*(float)(60.0f)));
	}
}
// System.Boolean Procrastinate.GameController::get_Chance()
extern "C" bool GameController_get_Chance_m794 (GameController_t225 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m497(NULL /*static, unused*/, 0, ((int32_t)100), /*hidden argument*/NULL);
		int32_t L_1 = (__this->____chance_35);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Procrastinate.GameController::ChanceGiven(Procrastinate.UserData)
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern "C" bool GameController_ChanceGiven_m795 (GameController_t225 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = GameController_get_Chance_m794(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		bool L_2 = GameCenter_HasPlayerAlreadyAchieved_m785(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 Procrastinate.GameController::get_velocity()
extern "C" Vector2_t42  GameController_get_velocity_m796 (GameController_t225 * __this, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	{
		Transform_t38 * L_0 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_forward_m609(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___x_1);
		Transform_t38 * L_3 = Component_get_transform_m511(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t40  L_4 = Transform_get_forward_m609(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___y_2);
		Vector2_t42  L_6 = {0};
		Vector2__ctor_m546(&L_6, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Procrastinate.GameController::get_isFirstPlay()
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern "C" bool GameController_get_isFirstPlay_m797 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_1);
		String_t* L_3 = PlayerPrefs_GetString_m501(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((((Object_t*)(String_t*)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Procrastinate.GameController::StartSingletons()
extern TypeInfo* ASingleton_1_t224_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t228_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t217_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t208_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t242_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m977_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m978_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m979_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m980_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m981_MethodInfo_var;
extern "C" void GameController_StartSingletons_m798 (GameController_t225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		ASingleton_1_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		ASingleton_1_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		ASingleton_1_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		ASingleton_1_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		ASingleton_1_Initialize_m977_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		ASingleton_1_Initialize_m978_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483752);
		ASingleton_1_Initialize_m979_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483753);
		ASingleton_1_Initialize_m980_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483754);
		ASingleton_1_Initialize_m981_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483755);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t224_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m977(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m977_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t228_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m978(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m978_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t217_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m979(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m979_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t208_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m980(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m980_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t242_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m981(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m981_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.GameController::StartDesktop()
extern "C" void GameController_StartDesktop_m799 (GameController_t225 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Procrastinate.GameController::StartMobile()
extern TypeInfo* ASingleton_1_t232_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m982_MethodInfo_var;
extern "C" void GameController_StartMobile_m800 (GameController_t225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		ASingleton_1_Initialize_m982_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483756);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t232_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m982(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m982_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.GameController::PreStart()
extern Il2CppCodeGenString* _stringLiteral151;
extern "C" void GameController_PreStart_m801 (GameController_t225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Random_Range_m497(NULL /*static, unused*/, ((int32_t)10), ((int32_t)90), /*hidden argument*/NULL);
		__this->____chance_35 = L_0;
		TextAsset_t135 * L_1 = (TextAsset_t135 *)VirtFuncInvoker0< TextAsset_t135 * >::Invoke(31 /* UnityEngine.TextAsset RMX.AGameController`1<Procrastinate.GameController>::get_Database() */, __this);
		bool L_2 = Object_op_Implicit_m545(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		Debug_LogWarning_m447(NULL /*static, unused*/, _stringLiteral151, /*hidden argument*/NULL);
	}

IL_0029:
	{
		int32_t L_3 = Random_Range_m497(NULL /*static, unused*/, 1, ((int32_t)10), /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)5)))
		{
			goto IL_003e;
		}
	}
	{
		__this->___ClockSpawnMode_30 = 0;
	}

IL_003e:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::OnApplicationFocus(System.Boolean)
extern "C" void GameController_OnApplicationFocus_m802 (GameController_t225 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker2< bool, Object_t * >::Invoke(41 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, __this, 1, NULL);
	}

IL_000e:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::OnApplicationPause(System.Boolean)
extern "C" void GameController_OnApplicationPause_m803 (GameController_t225 * __this, bool ___pause, const MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker2< bool, Object_t * >::Invoke(41 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, __this, 1, NULL);
	}

IL_000e:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::CheckForAnomalies()
extern "C" void GameController_CheckForAnomalies_m804 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		ClockBehaviour_CheckVisibleClocks_m719(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameController::Patch()
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern "C" void GameController_Patch_m805 (GameController_t225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_Patch_m862(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.GameController::get_isPaused()
extern "C" bool GameController_get_isPaused_m806 (GameController_t225 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_timeScale_m438(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern "C" void GameController_PauseGame_m807 (GameController_t225 * __this, bool ___pause, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___pause;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t22_il2cpp_TypeInfo_var, &L_1);
		Object_t * L_3 = ___args;
		RMXObject_WillBeginEvent_m77(__this, (Enum_t5 *)L_2, L_3, /*hidden argument*/NULL);
		Time_set_timeScale_m983(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		int32_t L_4 = 2;
		Object_t * L_5 = Box(Event_t22_il2cpp_TypeInfo_var, &L_4);
		Object_t * L_6 = ___args;
		RMXObject_DidFinishEvent_m79(__this, (Enum_t5 *)L_5, L_6, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_002f:
	{
		int32_t L_7 = 3;
		Object_t * L_8 = Box(Event_t22_il2cpp_TypeInfo_var, &L_7);
		Object_t * L_9 = ___args;
		RMXObject_WillBeginEvent_m77(__this, (Enum_t5 *)L_8, L_9, /*hidden argument*/NULL);
		Time_set_timeScale_m983(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		int32_t L_10 = 3;
		Object_t * L_11 = Box(Event_t22_il2cpp_TypeInfo_var, &L_10);
		Object_t * L_12 = ___args;
		RMXObject_DidFinishEvent_m79(__this, (Enum_t5 *)L_11, L_12, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Boolean Procrastinate.GameController::IsDebugging(System.Enum)
extern TypeInfo* Tests_t248_il2cpp_TypeInfo_var;
extern const MethodInfo* AGameController_1_IsDebugging_m984_MethodInfo_var;
extern "C" bool GameController_IsDebugging_m808 (GameController_t225 * __this, Enum_t5 * ___feature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tests_t248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		AGameController_1_IsDebugging_m984_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483757);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___feature;
		int32_t L_1 = 0;
		Object_t * L_2 = Box(Tests_t248_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		bool L_4 = (((AGameController_1_t226 *)__this)->___DebugGameDataLists_18);
		return L_4;
	}

IL_0018:
	{
		Enum_t5 * L_5 = ___feature;
		bool L_6 = AGameController_1_IsDebugging_m984(__this, L_5, /*hidden argument*/AGameController_1_IsDebugging_m984_MethodInfo_var);
		return L_6;
	}
}
// System.Void Procrastinate.GameController::Update()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" void GameController_Update_m809 (GameController_t225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m985(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = GameController_get_isPaused_m806(__this, /*hidden argument*/NULL);
		VirtActionInvoker2< bool, Object_t * >::Invoke(41 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, __this, ((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$36
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24Arra.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"


// System.Void Procrastinate.GameData::.ctor()
extern TypeInfo* ASingleton_1_t228_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m986_MethodInfo_var;
extern "C" void GameData__ctor_m810 (GameData_t227 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		ASingleton_1__ctor_m986_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483758);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t228_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m986(__this, /*hidden argument*/ASingleton_1__ctor_m986_MethodInfo_var);
		return;
	}
}
// System.Single Procrastinate.GameData::get_totalTime()
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern "C" float GameData_get_totalTime_m811 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_totalTime(System.Single)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern "C" void GameData_set_totalTime_m812 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m103(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_currentProcrastination()
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern "C" float GameData_get_currentProcrastination_m813 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 1;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_currentProcrastination(System.Single)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern "C" void GameData_set_currentProcrastination_m814 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 1;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m103(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_currentSessionTime()
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern "C" float GameData_get_currentSessionTime_m815 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 0;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_currentSessionTime(System.Single)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern "C" void GameData_set_currentSessionTime_m816 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 0;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m103(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_longestProcrastination()
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern "C" float GameData_get_longestProcrastination_m817 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 3;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_longestProcrastination(System.Single)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern "C" void GameData_set_longestProcrastination_m818 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 3;
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m103(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameData::Update()
extern "C" void GameData_Update_m819 (GameData_t227 * __this, const MethodInfo* method)
{
	{
		GameData_UpdateScoresAndReset_m823(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameData::OnApplicationQuit()
extern "C" void GameData_OnApplicationQuit_m820 (GameData_t227 * __this, const MethodInfo* method)
{
	{
		GameData_UpdateScoresAndReset_m823(__this, 0, /*hidden argument*/NULL);
		PlayerPrefs_Save_m987(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Procrastinate.GameData::get_PercentageOfDevTimeWastedX10000()
extern "C" int64_t GameData_get_PercentageOfDevTimeWastedX10000_m821 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		double L_0 = GameData_get_PercentageOfDevTimeWasted_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (((int64_t)((double)((double)L_0*(double)(10000.0)))));
	}
}
// System.Double Procrastinate.GameData::get_PercentageOfDevTimeWasted()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" double GameData_get_PercentageOfDevTimeWasted_m822 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = GameData_get_totalTime_m811(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_1 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_1);
		float L_2 = GameController_get_TotalDevTimeWasted_m793(L_1, /*hidden argument*/NULL);
		return (((double)((float)((float)L_0/(float)L_2))));
	}
}
// System.Void Procrastinate.GameData::UpdateScoresAndReset(System.Boolean)
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" void GameData_UpdateScoresAndReset_m823 (GameData_t227 * __this, bool ___reset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = GameData_get_totalTime_m811(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m519(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_totalTime_m812(NULL /*static, unused*/, ((float)((float)L_0+(float)L_1)), /*hidden argument*/NULL);
		float L_2 = GameData_get_currentProcrastination_m813(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m519(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_currentProcrastination_m814(NULL /*static, unused*/, ((float)((float)L_2+(float)L_3)), /*hidden argument*/NULL);
		float L_4 = Time_get_fixedTime_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_currentSessionTime_m816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_5 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		float L_6 = GameData_get_currentProcrastination_m813(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = GameData_get_longestProcrastination_m817(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___newPersonalBest_32 = ((((float)L_6) > ((float)L_7))? 1 : 0);
		GameController_t225 * L_8 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_8);
		bool L_9 = (L_8->___newPersonalBest_32);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		float L_10 = GameData_get_currentProcrastination_m813(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_longestProcrastination_m818(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0059:
	{
		bool L_11 = ___reset;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		GameData_set_currentProcrastination_m814(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
// System.Void Procrastinate.GameData::OnEventDidStart(System.Enum,System.Object)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern "C" void GameData_OnEventDidStart_m824 (GameData_t227 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 3;
		Object_t * L_2 = Box(Event_t22_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		GameData_UpdateScoresAndReset_m823(__this, 1, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_001d:
	{
		Enum_t5 * L_4 = ___theEvent;
		int32_t L_5 = 2;
		Object_t * L_6 = Box(Event_t22_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		GameData_UpdateScoresAndReset_m823(__this, 0, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void Procrastinate.GameData::TestData()
extern TypeInfo* SingleU5BU5D_t131_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t276_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m989_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m990_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m991_MethodInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t254____U24U24fieldU2D0_0_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern "C" void GameData_TestData_m825 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Enumerator_t276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m989_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		Enumerator_get_Current_m990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483760);
		Enumerator_MoveNext_m991_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483761);
		U3CPrivateImplementationDetailsU3E_t254____U24U24fieldU2D0_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(167, 0);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	SingleU5BU5D_t131* V_0 = {0};
	float V_1 = 0.0f;
	SingleU5BU5D_t131* V_2 = {0};
	int32_t V_3 = 0;
	Wychd_t209 * V_4 = {0};
	String_t* V_5 = {0};
	Enumerator_t276  V_6 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SingleU5BU5D_t131* L_0 = ((SingleU5BU5D_t131*)SZArrayNew(SingleU5BU5D_t131_il2cpp_TypeInfo_var, ((int32_t)9)));
		RuntimeHelpers_InitializeArray_m988(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t254____U24U24fieldU2D0_0_FieldInfo_var), /*hidden argument*/NULL);
		V_0 = L_0;
		SingleU5BU5D_t131* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0083;
	}

IL_001c:
	{
		SingleU5BU5D_t131* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (((float)(*(float*)(float*)SZArrayLdElema(L_2, L_4))));
		float L_5 = V_1;
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t172_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m425(NULL /*static, unused*/, _stringLiteral152, L_7, _stringLiteral153, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		float L_9 = V_1;
		Wychd_t209 * L_10 = DataReader_GetActivityList_m744(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Wychd_t209 * L_11 = V_4;
		NullCheck(L_11);
		Enumerator_t276  L_12 = List_1_GetEnumerator_m989(L_11, /*hidden argument*/List_1_GetEnumerator_m989_MethodInfo_var);
		V_6 = L_12;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0061;
		}

IL_0051:
		{
			String_t* L_13 = Enumerator_get_Current_m990((&V_6), /*hidden argument*/Enumerator_get_Current_m990_MethodInfo_var);
			V_5 = L_13;
			String_t* L_14 = V_5;
			Debug_Log_m416(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		}

IL_0061:
		{
			bool L_15 = Enumerator_MoveNext_m991((&V_6), /*hidden argument*/Enumerator_MoveNext_m991_MethodInfo_var);
			if (L_15)
			{
				goto IL_0051;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		Enumerator_t276  L_16 = V_6;
		Enumerator_t276  L_17 = L_16;
		Object_t * L_18 = Box(Enumerator_t276_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_18);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_007f:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_20 = V_3;
		SingleU5BU5D_t131* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// Procrastinate.Wychd Procrastinate.GameData::DefaultList(System.Single)
extern TypeInfo* Wychd_t209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral156;
extern Il2CppCodeGenString* _stringLiteral157;
extern Il2CppCodeGenString* _stringLiteral158;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern Il2CppCodeGenString* _stringLiteral161;
extern Il2CppCodeGenString* _stringLiteral162;
extern Il2CppCodeGenString* _stringLiteral163;
extern Il2CppCodeGenString* _stringLiteral164;
extern Il2CppCodeGenString* _stringLiteral165;
extern "C" Wychd_t209 * GameData_DefaultList_m826 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Wychd_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral156 = il2cpp_codegen_string_literal_from_index(156);
		_stringLiteral157 = il2cpp_codegen_string_literal_from_index(157);
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		_stringLiteral162 = il2cpp_codegen_string_literal_from_index(162);
		_stringLiteral163 = il2cpp_codegen_string_literal_from_index(163);
		_stringLiteral164 = il2cpp_codegen_string_literal_from_index(164);
		_stringLiteral165 = il2cpp_codegen_string_literal_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	Wychd_t209 * V_0 = {0};
	float V_1 = 0.0f;
	{
		Wychd_t209 * L_0 = (Wychd_t209 *)il2cpp_codegen_object_new (Wychd_t209_il2cpp_TypeInfo_var);
		Wychd__ctor_m737(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___time;
		V_1 = ((float)((float)L_1/(float)(60.0f)));
		float L_2 = V_1;
		if ((!(((double)(((double)L_2))) < ((double)(0.5)))))
		{
			goto IL_0039;
		}
	}
	{
		Wychd_t209 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, _stringLiteral154);
		Wychd_t209 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_4, _stringLiteral155);
		goto IL_010c;
	}

IL_0039:
	{
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		Wychd_t209 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_6, _stringLiteral156);
		goto IL_010c;
	}

IL_0054:
	{
		float L_7 = V_1;
		if ((!(((double)(((double)L_7))) < ((double)(1.5)))))
		{
			goto IL_0074;
		}
	}
	{
		Wychd_t209 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_8, _stringLiteral157);
		goto IL_010c;
	}

IL_0074:
	{
		float L_9 = V_1;
		if ((!(((float)L_9) < ((float)(2.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		Wychd_t209 * L_10 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_10, _stringLiteral158);
		goto IL_010c;
	}

IL_008f:
	{
		float L_11 = V_1;
		if ((!(((float)L_11) < ((float)(4.0f)))))
		{
			goto IL_00aa;
		}
	}
	{
		Wychd_t209 * L_12 = V_0;
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_12, _stringLiteral159);
		goto IL_010c;
	}

IL_00aa:
	{
		float L_13 = V_1;
		if ((!(((float)L_13) < ((float)(10.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		Wychd_t209 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_14, _stringLiteral160);
		goto IL_010c;
	}

IL_00c5:
	{
		float L_15 = V_1;
		if ((!(((float)L_15) < ((float)(12.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		Wychd_t209 * L_16 = V_0;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_16, _stringLiteral161);
		goto IL_010c;
	}

IL_00e0:
	{
		Wychd_t209 * L_17 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_17, _stringLiteral162);
		Wychd_t209 * L_18 = V_0;
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_18, _stringLiteral163);
		Wychd_t209 * L_19 = V_0;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_19, _stringLiteral164);
		Wychd_t209 * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_20, _stringLiteral165);
	}

IL_010c:
	{
		Wychd_t209 * L_21 = V_0;
		return L_21;
	}
}
// Procrastinate.Wychd Procrastinate.GameData::WhatYouCouldHaveDone(System.Single)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Tests_t248_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t276_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern const MethodInfo* AGameController_1_ShouldDebug_m993_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m989_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m990_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m991_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral166;
extern Il2CppCodeGenString* _stringLiteral167;
extern Il2CppCodeGenString* _stringLiteral168;
extern Il2CppCodeGenString* _stringLiteral169;
extern Il2CppCodeGenString* _stringLiteral170;
extern Il2CppCodeGenString* _stringLiteral171;
extern Il2CppCodeGenString* _stringLiteral172;
extern Il2CppCodeGenString* _stringLiteral173;
extern "C" Wychd_t209 * GameData_WhatYouCouldHaveDone_m827 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Tests_t248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		Enumerator_t276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		AGameController_1_ShouldDebug_m993_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483762);
		List_1_GetEnumerator_m989_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		Enumerator_get_Current_m990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483760);
		Enumerator_MoveNext_m991_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483761);
		_stringLiteral166 = il2cpp_codegen_string_literal_from_index(166);
		_stringLiteral167 = il2cpp_codegen_string_literal_from_index(167);
		_stringLiteral168 = il2cpp_codegen_string_literal_from_index(168);
		_stringLiteral169 = il2cpp_codegen_string_literal_from_index(169);
		_stringLiteral170 = il2cpp_codegen_string_literal_from_index(170);
		_stringLiteral171 = il2cpp_codegen_string_literal_from_index(171);
		_stringLiteral172 = il2cpp_codegen_string_literal_from_index(172);
		_stringLiteral173 = il2cpp_codegen_string_literal_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Wychd_t209 * V_1 = {0};
	Exception_t143 * V_2 = {0};
	String_t* V_3 = {0};
	Enumerator_t276  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = (Wychd_t209 *)NULL;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				float L_1 = ___time;
				Wychd_t209 * L_2 = DataReader_GetActivityList_m744(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
				V_1 = L_2;
				String_t* L_3 = V_0;
				V_5 = L_3;
				ObjectU5BU5D_t146* L_4 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 6));
				String_t* L_5 = V_5;
				NullCheck(L_4);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
				ArrayElementTypeCheck (L_4, L_5);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)L_5;
				ObjectU5BU5D_t146* L_6 = L_4;
				NullCheck(L_6);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
				ArrayElementTypeCheck (L_6, _stringLiteral166);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)_stringLiteral166;
				ObjectU5BU5D_t146* L_7 = L_6;
				float L_8 = ___time;
				float L_9 = L_8;
				Object_t * L_10 = Box(Single_t172_il2cpp_TypeInfo_var, &L_9);
				NullCheck(L_7);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
				ArrayElementTypeCheck (L_7, L_10);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_10;
				ObjectU5BU5D_t146* L_11 = L_7;
				NullCheck(L_11);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
				ArrayElementTypeCheck (L_11, _stringLiteral167);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 3)) = (Object_t *)_stringLiteral167;
				ObjectU5BU5D_t146* L_12 = L_11;
				Wychd_t209 * L_13 = V_1;
				NullCheck(L_13);
				int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_13);
				int32_t L_15 = L_14;
				Object_t * L_16 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_15);
				NullCheck(L_12);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
				ArrayElementTypeCheck (L_12, L_16);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 4)) = (Object_t *)L_16;
				ObjectU5BU5D_t146* L_17 = L_12;
				NullCheck(L_17);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
				ArrayElementTypeCheck (L_17, _stringLiteral168);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)_stringLiteral168;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_18 = String_Concat_m419(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
				V_0 = L_18;
				Wychd_t209 * L_19 = V_1;
				NullCheck(L_19);
				int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_19);
				if ((((int32_t)L_20) <= ((int32_t)0)))
				{
					goto IL_006f;
				}
			}

IL_005e:
			{
				String_t* L_21 = V_0;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_22 = String_Concat_m420(NULL /*static, unused*/, L_21, _stringLiteral169, /*hidden argument*/NULL);
				V_0 = L_22;
				goto IL_0082;
			}

IL_006f:
			{
				String_t* L_23 = V_0;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_24 = String_Concat_m420(NULL /*static, unused*/, L_23, _stringLiteral170, /*hidden argument*/NULL);
				V_0 = L_24;
				float L_25 = ___time;
				Wychd_t209 * L_26 = GameData_DefaultList_m826(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
				V_1 = L_26;
			}

IL_0082:
			{
				IL2CPP_LEAVE(0x117, FINALLY_00ab);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t143 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0087;
			throw e;
		}

CATCH_0087:
		{ // begin catch(System.Exception)
			V_2 = ((Exception_t143 *)__exception_local);
			String_t* L_27 = V_0;
			Exception_t143 * L_28 = V_2;
			NullCheck(L_28);
			String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_30 = String_Concat_m992(NULL /*static, unused*/, L_27, _stringLiteral171, L_29, _stringLiteral172, /*hidden argument*/NULL);
			V_0 = L_30;
			float L_31 = ___time;
			Wychd_t209 * L_32 = GameData_DefaultList_m826(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			V_1 = L_32;
			IL2CPP_LEAVE(0x117, FINALLY_00ab);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		{
			int32_t L_33 = 0;
			Object_t * L_34 = Box(Tests_t248_il2cpp_TypeInfo_var, &L_33);
			bool L_35 = AGameController_1_ShouldDebug_m993(NULL /*static, unused*/, (Enum_t5 *)L_34, /*hidden argument*/AGameController_1_ShouldDebug_m993_MethodInfo_var);
			if (!L_35)
			{
				goto IL_0116;
			}
		}

IL_00bb:
		{
			Wychd_t209 * L_36 = V_1;
			NullCheck(L_36);
			Enumerator_t276  L_37 = List_1_GetEnumerator_m989(L_36, /*hidden argument*/List_1_GetEnumerator_m989_MethodInfo_var);
			V_4 = L_37;
		}

IL_00c3:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00dd;
			}

IL_00c8:
			{
				String_t* L_38 = Enumerator_get_Current_m990((&V_4), /*hidden argument*/Enumerator_get_Current_m990_MethodInfo_var);
				V_3 = L_38;
				String_t* L_39 = V_0;
				String_t* L_40 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_41 = String_Concat_m439(NULL /*static, unused*/, L_39, _stringLiteral173, L_40, /*hidden argument*/NULL);
				V_0 = L_41;
			}

IL_00dd:
			{
				bool L_42 = Enumerator_MoveNext_m991((&V_4), /*hidden argument*/Enumerator_MoveNext_m991_MethodInfo_var);
				if (L_42)
				{
					goto IL_00c8;
				}
			}

IL_00e9:
			{
				IL2CPP_LEAVE(0xFB, FINALLY_00ee);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t143 *)e.ex;
			goto FINALLY_00ee;
		}

FINALLY_00ee:
		{ // begin finally (depth: 2)
			Enumerator_t276  L_43 = V_4;
			Enumerator_t276  L_44 = L_43;
			Object_t * L_45 = Box(Enumerator_t276_il2cpp_TypeInfo_var, &L_44);
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_45);
			IL2CPP_END_FINALLY(238)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(238)
		{
			IL2CPP_JUMP_TBL(0xFB, IL_00fb)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
		}

IL_00fb:
		{
			int32_t L_46 = 0;
			Object_t * L_47 = Box(Tests_t248_il2cpp_TypeInfo_var, &L_46);
			String_t* L_48 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_49 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_47, L_48, /*hidden argument*/NULL);
			if (!L_49)
			{
				goto IL_0116;
			}
		}

IL_010c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_50 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m416(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		}

IL_0116:
		{
			IL2CPP_END_FINALLY(171)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_JUMP_TBL(0x117, IL_0117)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_0117:
	{
		Wychd_t209 * L_51 = V_1;
		return L_51;
	}
}
// Procrastinate.GoAwayText
#include "AssemblyU2DCSharp_Procrastinate_GoAwayText.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.GoAwayText
#include "AssemblyU2DCSharp_Procrastinate_GoAwayTextMethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
struct Component_t174;
struct Text_t229;
struct Component_t174;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m995_gshared (Component_t174 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m995(__this, method) (( Object_t * (*) (Component_t174 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m995_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t229_m994(__this, method) (( Text_t229 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m995_gshared)(__this, method)
struct GameObject_t9;
struct Text_t229;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Text>()
#define GameObject_AddComponent_TisText_t229_m996(__this, method) (( Text_t229 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)


// System.Void Procrastinate.GoAwayText::.ctor()
extern Il2CppCodeGenString* _stringLiteral174;
extern "C" void GoAwayText__ctor_m828 (GoAwayText_t230 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___text_3 = _stringLiteral174;
		Color_t200  L_0 = Color_get_white_m997(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___color_6 = L_0;
		MonoBehaviour__ctor_m492(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Start()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisText_t229_m994_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisText_t229_m996_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" void GoAwayText_Start_m829 (GoAwayText_t230 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Component_GetComponentInChildren_TisText_t229_m994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483763);
		GameObject_AddComponent_TisText_t229_m996_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483764);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t229 * L_0 = Component_GetComponentInChildren_TisText_t229_m994(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t229_m994_MethodInfo_var);
		__this->___label_2 = L_0;
		Text_t229 * L_1 = (__this->___label_2);
		bool L_2 = Object_op_Equality_m467(NULL /*static, unused*/, L_1, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00d4;
		}
	}
	{
		GameObject_t9 * L_3 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t229 * L_4 = GameObject_AddComponent_TisText_t229_m996(L_3, /*hidden argument*/GameObject_AddComponent_TisText_t229_m996_MethodInfo_var);
		__this->___label_2 = L_4;
		Text_t229 * L_5 = (__this->___label_2);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_6 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_6);
		Font_t277 * L_7 = (((AGameController_1_t226 *)L_6)->___mainFont_23);
		NullCheck(L_5);
		Text_set_font_m998(L_5, L_7, /*hidden argument*/NULL);
		Text_t229 * L_8 = (__this->___label_2);
		NullCheck(L_8);
		Text_set_fontSize_m999(L_8, ((int32_t)62), /*hidden argument*/NULL);
		Text_t229 * L_9 = (__this->___label_2);
		int32_t L_10 = (__this->___fontStyle_4);
		NullCheck(L_9);
		Text_set_fontStyle_m1000(L_9, L_10, /*hidden argument*/NULL);
		Text_t229 * L_11 = (__this->___label_2);
		NullCheck(L_11);
		Text_set_lineSpacing_m1001(L_11, (1.0f), /*hidden argument*/NULL);
		Text_t229 * L_12 = (__this->___label_2);
		NullCheck(L_12);
		Text_set_supportRichText_m1002(L_12, 1, /*hidden argument*/NULL);
		Text_t229 * L_13 = (__this->___label_2);
		NullCheck(L_13);
		Text_set_alignment_m1003(L_13, 4, /*hidden argument*/NULL);
		Text_t229 * L_14 = (__this->___label_2);
		NullCheck(L_14);
		Text_set_horizontalOverflow_m1004(L_14, 0, /*hidden argument*/NULL);
		Text_t229 * L_15 = (__this->___label_2);
		NullCheck(L_15);
		Text_set_verticalOverflow_m1005(L_15, 0, /*hidden argument*/NULL);
		Text_t229 * L_16 = (__this->___label_2);
		bool L_17 = (__this->___bestFit_5);
		NullCheck(L_16);
		Text_set_resizeTextForBestFit_m1006(L_16, L_17, /*hidden argument*/NULL);
		Text_t229 * L_18 = (__this->___label_2);
		Color_t200  L_19 = (__this->___color_6);
		NullCheck(L_18);
		Graphic_set_color_m1007(L_18, L_19, /*hidden argument*/NULL);
		Text_t229 * L_20 = (__this->___label_2);
		String_t* L_21 = (__this->___text_3);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_21);
	}

IL_00d4:
	{
		GoAwayText_Hide_m832(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Update()
extern "C" void GoAwayText_Update_m830 (GoAwayText_t230 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = ClockBehaviour_get_VisibleClockCount_m715(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GoAwayText_Show_m831(__this, /*hidden argument*/NULL);
		goto IL_001b;
	}

IL_0015:
	{
		GoAwayText_Hide_m832(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Show()
extern "C" void GoAwayText_Show_m831 (GoAwayText_t230 * __this, const MethodInfo* method)
{
	{
		Text_t229 * L_0 = (__this->___label_2);
		NullCheck(L_0);
		Behaviour_set_enabled_m593(L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Hide()
extern "C" void GoAwayText_Hide_m832 (GoAwayText_t230 * __this, const MethodInfo* method)
{
	{
		Text_t229 * L_0 = (__this->___label_2);
		NullCheck(L_0);
		Behaviour_set_enabled_m593(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// RMX.Gyro
#include "AssemblyU2DCSharp_RMX_GyroMethodDeclarations.h"



// System.Void RMX.Gyro::.ctor()
extern TypeInfo* ASingleton_1_t232_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m1008_MethodInfo_var;
extern "C" void Gyro__ctor_m833 (Gyro_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		ASingleton_1__ctor_m1008_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483765);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t232_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m1008(__this, /*hidden argument*/ASingleton_1__ctor_m1008_MethodInfo_var);
		return;
	}
}
// System.Void RMX.Gyro::LateUpdate()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t177_il2cpp_TypeInfo_var;
extern "C" void Gyro_LateUpdate_m834 (Gyro_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Physics2D_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_0 = Input_get_acceleration_m574(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t40  L_2 = Input_get_acceleration_m574(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___y_2);
		Vector2_t42  L_4 = {0};
		Vector2__ctor_m546(&L_4, L_1, L_3, /*hidden argument*/NULL);
		Vector2_t42  L_5 = Vector2_op_Multiply_m916(NULL /*static, unused*/, L_4, (9.81f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t177_il2cpp_TypeInfo_var);
		Physics2D_set_gravity_m1009(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Procrastinate.PauseCanvas/Trigger
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas_Trigger.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.PauseCanvas/Trigger
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas_TriggerMethodDeclarations.h"

// UnityEngine.EventSystems.EventTrigger/Entry
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_Entry.h"
// UnityEngine.EventSystems.EventTriggerType
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerType.h"
// Procrastinate.PauseCanvas/Callback
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas_Callback.h"
// UnityEngine.EventSystems.EventTrigger/TriggerEvent
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_Trigger.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen.h"
// UnityEngine.EventSystems.EventTrigger/Entry
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_EntryMethodDeclarations.h"
// Procrastinate.PauseCanvas/Callback
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas_CallbackMethodDeclarations.h"
// Procrastinate.PauseCanvas
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvasMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_genMethodDeclarations.h"


// System.Void Procrastinate.PauseCanvas/Trigger::.ctor()
extern TypeInfo* Callback_t235_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_1_t278_il2cpp_TypeInfo_var;
extern const MethodInfo* PauseCanvas_UnPauseGame_m838_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m1011_MethodInfo_var;
extern const MethodInfo* UnityEvent_1_AddListener_m1012_MethodInfo_var;
extern "C" void Trigger__ctor_m835 (Trigger_t233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Callback_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		UnityAction_1_t278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		PauseCanvas_UnPauseGame_m838_MethodInfo_var = il2cpp_codegen_method_info_from_index(118);
		UnityAction_1__ctor_m1011_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483767);
		UnityEvent_1_AddListener_m1012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483768);
		s_Il2CppMethodIntialized = true;
	}
	{
		Entry__ctor_m1010(__this, /*hidden argument*/NULL);
		((Entry_t234 *)__this)->___eventID_0 = 2;
		Callback_t235 * L_0 = (Callback_t235 *)il2cpp_codegen_object_new (Callback_t235_il2cpp_TypeInfo_var);
		Callback__ctor_m836(L_0, /*hidden argument*/NULL);
		((Entry_t234 *)__this)->___callback_1 = L_0;
		TriggerEvent_t236 * L_1 = (((Entry_t234 *)__this)->___callback_1);
		IntPtr_t L_2 = { (void*)PauseCanvas_UnPauseGame_m838_MethodInfo_var };
		UnityAction_1_t278 * L_3 = (UnityAction_1_t278 *)il2cpp_codegen_object_new (UnityAction_1_t278_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m1011(L_3, NULL, L_2, /*hidden argument*/UnityAction_1__ctor_m1011_MethodInfo_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m1012(L_1, L_3, /*hidden argument*/UnityEvent_1_AddListener_m1012_MethodInfo_var);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.EventSystems.EventTrigger/TriggerEvent
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_TriggerMethodDeclarations.h"


// System.Void Procrastinate.PauseCanvas/Callback::.ctor()
extern "C" void Callback__ctor_m836 (Callback_t235 * __this, const MethodInfo* method)
{
	{
		TriggerEvent__ctor_m1013(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// UnityEngine.UI.CanvasScaler/ScaleMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMode.h"
// UnityEngine.UI.CanvasScaler/Unit
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit.h"
// UnityEngine.UI.CanvasScaler
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler.h"
// UnityEngine.UI.GraphicRaycaster
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.EventSystems.EventTrigger
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"
// UnityEngine.UI.Button/ButtonClickedEvent
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClickedEvent.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_6.h"
// Procrastinate.SoundEffects/Args
#include "AssemblyU2DCSharp_Procrastinate_SoundEffects_Args.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.UI.CanvasScaler
#include "UnityEngine_UI_UnityEngine_UI_CanvasScalerMethodDeclarations.h"
// UnityEngine.UI.GraphicRaycaster
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycasterMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphicMethodDeclarations.h"
// UnityEngine.EventSystems.EventTrigger
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerMethodDeclarations.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_ButtonMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
struct GameObject_t9;
struct Canvas_t237;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t237_m1014(__this, method) (( Canvas_t237 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
struct GameObject_t9;
struct Canvas_t237;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Canvas>()
#define GameObject_AddComponent_TisCanvas_t237_m1015(__this, method) (( Canvas_t237 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct CanvasScaler_t279;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.CanvasScaler>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.CanvasScaler>()
#define GameObject_GetComponent_TisCanvasScaler_t279_m1016(__this, method) (( CanvasScaler_t279 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
struct GameObject_t9;
struct CanvasScaler_t279;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.CanvasScaler>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.CanvasScaler>()
#define GameObject_AddComponent_TisCanvasScaler_t279_m1017(__this, method) (( CanvasScaler_t279 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct GraphicRaycaster_t280;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.GraphicRaycaster>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.GraphicRaycaster>()
#define GameObject_GetComponent_TisGraphicRaycaster_t280_m1018(__this, method) (( GraphicRaycaster_t280 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
struct GameObject_t9;
struct GraphicRaycaster_t280;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.GraphicRaycaster>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.GraphicRaycaster>()
#define GameObject_AddComponent_TisGraphicRaycaster_t280_m1019(__this, method) (( GraphicRaycaster_t280 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct CanvasRenderer_t281;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasRenderer>()
#define GameObject_GetComponent_TisCanvasRenderer_t281_m1020(__this, method) (( CanvasRenderer_t281 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
struct GameObject_t9;
struct CanvasRenderer_t281;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasRenderer>()
#define GameObject_AddComponent_TisCanvasRenderer_t281_m1021(__this, method) (( CanvasRenderer_t281 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct Image_t68;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t68_m1022(__this, method) (( Image_t68 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
struct GameObject_t9;
struct Image_t68;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
#define GameObject_AddComponent_TisImage_t68_m1023(__this, method) (( Image_t68 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct GameObject_t9;
struct EventTrigger_t282;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.EventTrigger>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.EventTrigger>()
#define GameObject_GetComponent_TisEventTrigger_t282_m1024(__this, method) (( EventTrigger_t282 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m588_gshared)(__this, method)
struct GameObject_t9;
struct EventTrigger_t282;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventTrigger>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventTrigger>()
#define GameObject_AddComponent_TisEventTrigger_t282_m1025(__this, method) (( EventTrigger_t282 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m564_gshared)(__this, method)
struct Component_t174;
struct Button_t238;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Button>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Button>()
#define Component_GetComponentInChildren_TisButton_t238_m1026(__this, method) (( Button_t238 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m995_gshared)(__this, method)


// System.Void Procrastinate.PauseCanvas::.ctor()
extern TypeInfo* List_1_t240_il2cpp_TypeInfo_var;
extern TypeInfo* Trigger_t233_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t242_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1027_MethodInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m1028_MethodInfo_var;
extern "C" void PauseCanvas__ctor_m837 (PauseCanvas_t241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t240_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		Trigger_t233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		ASingleton_1_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		List_1__ctor_m1027_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483769);
		ASingleton_1__ctor_m1028_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483770);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t240 * V_0 = {0};
	{
		__this->___uiScaleMode_13 = 2;
		__this->___physicalUnit_14 = 3;
		__this->___fallbackScreenDPI_15 = (96.0f);
		__this->___defaultSpriteDPI_16 = (96.0f);
		__this->___referencePixelsPerUnit_17 = (100.0f);
		__this->___ignoreReversedGraphics_18 = 1;
		Color_t200  L_0 = Color_get_white_m997(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___color_21 = L_0;
		List_1_t240 * L_1 = (List_1_t240 *)il2cpp_codegen_object_new (List_1_t240_il2cpp_TypeInfo_var);
		List_1__ctor_m1027(L_1, /*hidden argument*/List_1__ctor_m1027_MethodInfo_var);
		V_0 = L_1;
		List_1_t240 * L_2 = V_0;
		Trigger_t233 * L_3 = (Trigger_t233 *)il2cpp_codegen_object_new (Trigger_t233_il2cpp_TypeInfo_var);
		Trigger__ctor_m835(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Entry_t234 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(!0) */, L_2, L_3);
		List_1_t240 * L_4 = V_0;
		__this->___triggers_24 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t242_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m1028(__this, /*hidden argument*/ASingleton_1__ctor_m1028_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::UnPauseGame(UnityEngine.EventSystems.BaseEventData)
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" void PauseCanvas_UnPauseGame_m838 (Object_t * __this /* static, unused */, BaseEventData_t259 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_0 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< bool, Object_t * >::Invoke(41 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, L_0, 0, NULL);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::Start()
extern TypeInfo* UnityAction_t284_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* Args_t243_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t237_m1014_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCanvas_t237_m1015_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvasScaler_t279_m1016_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCanvasScaler_t279_m1017_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGraphicRaycaster_t280_m1018_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGraphicRaycaster_t280_m1019_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvasRenderer_t281_m1020_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCanvasRenderer_t281_m1021_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisImage_t68_m1022_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisImage_t68_m1023_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisEventTrigger_t282_m1024_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisEventTrigger_t282_m1025_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisButton_t238_m1026_MethodInfo_var;
extern const MethodInfo* PauseCanvas_toggleInfo_m840_MethodInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" void PauseCanvas_Start_m839 (PauseCanvas_t241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Args_t243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GameObject_GetComponent_TisCanvas_t237_m1014_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483771);
		GameObject_AddComponent_TisCanvas_t237_m1015_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		GameObject_GetComponent_TisCanvasScaler_t279_m1016_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483773);
		GameObject_AddComponent_TisCanvasScaler_t279_m1017_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483774);
		GameObject_GetComponent_TisGraphicRaycaster_t280_m1018_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483775);
		GameObject_AddComponent_TisGraphicRaycaster_t280_m1019_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483776);
		GameObject_GetComponent_TisCanvasRenderer_t281_m1020_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483777);
		GameObject_AddComponent_TisCanvasRenderer_t281_m1021_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483778);
		GameObject_GetComponent_TisImage_t68_m1022_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483779);
		GameObject_AddComponent_TisImage_t68_m1023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483780);
		GameObject_GetComponent_TisEventTrigger_t282_m1024_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483781);
		GameObject_AddComponent_TisEventTrigger_t282_m1025_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483782);
		Component_GetComponentInChildren_TisButton_t238_m1026_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483783);
		PauseCanvas_toggleInfo_m840_MethodInfo_var = il2cpp_codegen_method_info_from_index(136);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	CanvasScaler_t279 * V_0 = {0};
	GraphicRaycaster_t280 * V_1 = {0};
	Image_t68 * V_2 = {0};
	EventTrigger_t282 * V_3 = {0};
	{
		GameObject_t9 * L_0 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Canvas_t237 * L_1 = GameObject_GetComponent_TisCanvas_t237_m1014(L_0, /*hidden argument*/GameObject_GetComponent_TisCanvas_t237_m1014_MethodInfo_var);
		__this->___canvas_9 = L_1;
		Canvas_t237 * L_2 = (__this->___canvas_9);
		bool L_3 = Object_op_Implicit_m545(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t9 * L_4 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Canvas_t237 * L_5 = GameObject_AddComponent_TisCanvas_t237_m1015(L_4, /*hidden argument*/GameObject_AddComponent_TisCanvas_t237_m1015_MethodInfo_var);
		__this->___canvas_9 = L_5;
		Canvas_t237 * L_6 = (__this->___canvas_9);
		int32_t L_7 = (__this->___renderMode_11);
		NullCheck(L_6);
		Canvas_set_renderMode_m1029(L_6, L_7, /*hidden argument*/NULL);
		Canvas_t237 * L_8 = (__this->___canvas_9);
		bool L_9 = (__this->___pixelPerfect_12);
		NullCheck(L_8);
		Canvas_set_pixelPerfect_m1030(L_8, L_9, /*hidden argument*/NULL);
		Canvas_t237 * L_10 = (__this->___canvas_9);
		NullCheck(L_10);
		Behaviour_set_enabled_m593(L_10, 0, /*hidden argument*/NULL);
	}

IL_0060:
	{
		GameObject_t9 * L_11 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		CanvasScaler_t279 * L_12 = GameObject_GetComponent_TisCanvasScaler_t279_m1016(L_11, /*hidden argument*/GameObject_GetComponent_TisCanvasScaler_t279_m1016_MethodInfo_var);
		bool L_13 = Object_op_Implicit_m545(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00bd;
		}
	}
	{
		GameObject_t9 * L_14 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		CanvasScaler_t279 * L_15 = GameObject_AddComponent_TisCanvasScaler_t279_m1017(L_14, /*hidden argument*/GameObject_AddComponent_TisCanvasScaler_t279_m1017_MethodInfo_var);
		V_0 = L_15;
		CanvasScaler_t279 * L_16 = V_0;
		int32_t L_17 = (__this->___uiScaleMode_13);
		NullCheck(L_16);
		CanvasScaler_set_uiScaleMode_m1031(L_16, L_17, /*hidden argument*/NULL);
		CanvasScaler_t279 * L_18 = V_0;
		int32_t L_19 = (__this->___physicalUnit_14);
		NullCheck(L_18);
		CanvasScaler_set_physicalUnit_m1032(L_18, L_19, /*hidden argument*/NULL);
		CanvasScaler_t279 * L_20 = V_0;
		float L_21 = (__this->___fallbackScreenDPI_15);
		NullCheck(L_20);
		CanvasScaler_set_fallbackScreenDPI_m1033(L_20, L_21, /*hidden argument*/NULL);
		CanvasScaler_t279 * L_22 = V_0;
		float L_23 = (__this->___defaultSpriteDPI_16);
		NullCheck(L_22);
		CanvasScaler_set_defaultSpriteDPI_m1034(L_22, L_23, /*hidden argument*/NULL);
		CanvasScaler_t279 * L_24 = V_0;
		float L_25 = (__this->___referencePixelsPerUnit_17);
		NullCheck(L_24);
		CanvasScaler_set_referencePixelsPerUnit_m1035(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		GameObject_t9 * L_26 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		GraphicRaycaster_t280 * L_27 = GameObject_GetComponent_TisGraphicRaycaster_t280_m1018(L_26, /*hidden argument*/GameObject_GetComponent_TisGraphicRaycaster_t280_m1018_MethodInfo_var);
		bool L_28 = Object_op_Implicit_m545(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00f6;
		}
	}
	{
		GameObject_t9 * L_29 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		GraphicRaycaster_t280 * L_30 = GameObject_AddComponent_TisGraphicRaycaster_t280_m1019(L_29, /*hidden argument*/GameObject_AddComponent_TisGraphicRaycaster_t280_m1019_MethodInfo_var);
		V_1 = L_30;
		GraphicRaycaster_t280 * L_31 = V_1;
		bool L_32 = (__this->___ignoreReversedGraphics_18);
		NullCheck(L_31);
		GraphicRaycaster_set_ignoreReversedGraphics_m1036(L_31, L_32, /*hidden argument*/NULL);
		GraphicRaycaster_t280 * L_33 = V_1;
		int32_t L_34 = (__this->___blockingObjects_19);
		NullCheck(L_33);
		GraphicRaycaster_set_blockingObjects_m1037(L_33, L_34, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		GameObject_t9 * L_35 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		CanvasRenderer_t281 * L_36 = GameObject_GetComponent_TisCanvasRenderer_t281_m1020(L_35, /*hidden argument*/GameObject_GetComponent_TisCanvasRenderer_t281_m1020_MethodInfo_var);
		bool L_37 = Object_op_Implicit_m545(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0117;
		}
	}
	{
		GameObject_t9 * L_38 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_AddComponent_TisCanvasRenderer_t281_m1021(L_38, /*hidden argument*/GameObject_AddComponent_TisCanvasRenderer_t281_m1021_MethodInfo_var);
	}

IL_0117:
	{
		GameObject_t9 * L_39 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Image_t68 * L_40 = GameObject_GetComponent_TisImage_t68_m1022(L_39, /*hidden argument*/GameObject_GetComponent_TisImage_t68_m1022_MethodInfo_var);
		bool L_41 = Object_op_Implicit_m545(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0168;
		}
	}
	{
		GameObject_t9 * L_42 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Image_t68 * L_43 = GameObject_AddComponent_TisImage_t68_m1023(L_42, /*hidden argument*/GameObject_AddComponent_TisImage_t68_m1023_MethodInfo_var);
		V_2 = L_43;
		Image_t68 * L_44 = V_2;
		Sprite_t239 * L_45 = (__this->___sourceImage_20);
		NullCheck(L_44);
		Image_set_sprite_m1038(L_44, L_45, /*hidden argument*/NULL);
		Image_t68 * L_46 = V_2;
		Color_t200  L_47 = (__this->___color_21);
		NullCheck(L_46);
		Graphic_set_color_m1007(L_46, L_47, /*hidden argument*/NULL);
		Image_t68 * L_48 = V_2;
		Material_t190 * L_49 = (__this->___material_22);
		NullCheck(L_48);
		VirtActionInvoker1< Material_t190 * >::Invoke(25 /* System.Void UnityEngine.UI.MaskableGraphic::set_material(UnityEngine.Material) */, L_48, L_49);
		Image_t68 * L_50 = V_2;
		bool L_51 = (__this->___preserveAspect_23);
		NullCheck(L_50);
		Image_set_preserveAspect_m1039(L_50, L_51, /*hidden argument*/NULL);
	}

IL_0168:
	{
		GameObject_t9 * L_52 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		EventTrigger_t282 * L_53 = GameObject_GetComponent_TisEventTrigger_t282_m1024(L_52, /*hidden argument*/GameObject_GetComponent_TisEventTrigger_t282_m1024_MethodInfo_var);
		bool L_54 = Object_op_Implicit_m545(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0195;
		}
	}
	{
		GameObject_t9 * L_55 = Component_get_gameObject_m422(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		EventTrigger_t282 * L_56 = GameObject_AddComponent_TisEventTrigger_t282_m1025(L_55, /*hidden argument*/GameObject_AddComponent_TisEventTrigger_t282_m1025_MethodInfo_var);
		V_3 = L_56;
		EventTrigger_t282 * L_57 = V_3;
		List_1_t240 * L_58 = (__this->___triggers_24);
		NullCheck(L_57);
		EventTrigger_set_triggers_m1040(L_57, L_58, /*hidden argument*/NULL);
	}

IL_0195:
	{
		Button_t238 * L_59 = Component_GetComponentInChildren_TisButton_t238_m1026(__this, /*hidden argument*/Component_GetComponentInChildren_TisButton_t238_m1026_MethodInfo_var);
		__this->___infoButton_10 = L_59;
		Button_t238 * L_60 = (__this->___infoButton_10);
		NullCheck(L_60);
		ButtonClickedEvent_t283 * L_61 = Button_get_onClick_m1041(L_60, /*hidden argument*/NULL);
		IntPtr_t L_62 = { (void*)PauseCanvas_toggleInfo_m840_MethodInfo_var };
		UnityAction_t284 * L_63 = (UnityAction_t284 *)il2cpp_codegen_object_new (UnityAction_t284_il2cpp_TypeInfo_var);
		UnityAction__ctor_m1042(L_63, NULL, L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		UnityEvent_AddListener_m1043(L_61, L_63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_64 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_64);
		bool L_65 = (L_64->___willPauseOnLoad_31);
		if (!L_65)
		{
			goto IL_01e7;
		}
	}
	{
		Object_t * L_66 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* RMX.IGameController RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>::get_gameController() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_67 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_67);
		bool L_68 = (L_67->___willPauseOnLoad_31);
		int32_t L_69 = 0;
		Object_t * L_70 = Box(Args_t243_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_66);
		InterfaceActionInvoker2< bool, Object_t * >::Invoke(0 /* System.Void RMX.IGameController::PauseGame(System.Boolean,System.Object) */, IGameController_t2_il2cpp_TypeInfo_var, L_66, L_68, L_70);
	}

IL_01e7:
	{
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::toggleInfo()
extern TypeInfo* ASingleton_1_t242_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m1044_MethodInfo_var;
extern "C" void PauseCanvas_toggleInfo_m840 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		ASingleton_1_get_current_m1044_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483785);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t242_il2cpp_TypeInfo_var);
		PauseCanvas_t241 * L_0 = ASingleton_1_get_current_m1044(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m1044_MethodInfo_var);
		PauseCanvas_t241 * L_1 = ASingleton_1_get_current_m1044(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m1044_MethodInfo_var);
		NullCheck(L_1);
		bool L_2 = (L_1->___information_25);
		NullCheck(L_0);
		L_0->___information_25 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::ShowInfo()
extern "C" void PauseCanvas_ShowInfo_m841 (PauseCanvas_t241 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___information_25);
		__this->___information_25 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::Update()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern "C" void PauseCanvas_Update_m842 (PauseCanvas_t241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		Canvas_t237 * L_0 = (__this->___canvas_9);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_1 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_1);
		bool L_2 = GameController_get_isPaused_m806(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_m593(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::OnGUI()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t170_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t147_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t151_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral175;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral177;
extern Il2CppCodeGenString* _stringLiteral178;
extern "C" void PauseCanvas_OnGUI_m843 (PauseCanvas_t241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Double_t170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GUIStyle_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GUI_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		_stringLiteral175 = il2cpp_codegen_string_literal_from_index(175);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral177 = il2cpp_codegen_string_literal_from_index(177);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GUIStyle_t147 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* G_B8_0 = {0};
	{
		Canvas_t237 * L_0 = (__this->___canvas_9);
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m1045(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0106;
		}
	}
	{
		String_t* L_2 = (__this->____wychd_26);
		if (L_2)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_3 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_3);
		bool L_4 = (L_3->___willPauseOnLoad_31);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		PauseCanvas_BuildWychd_m844(__this, /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_5 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_5);
		VirtActionInvoker2< bool, Object_t * >::Invoke(41 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, L_5, 0, NULL);
		Debug_LogWarning_m447(NULL /*static, unused*/, _stringLiteral175, /*hidden argument*/NULL);
	}

IL_004b:
	{
		bool L_6 = (__this->___information_25);
		if (L_6)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_7 = (__this->____wychd_26);
		G_B8_0 = L_7;
		goto IL_0084;
	}

IL_0061:
	{
		double L_8 = GameData_get_PercentageOfDevTimeWasted_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_9 = L_8;
		Object_t * L_10 = Box(Double_t170_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m480(NULL /*static, unused*/, _stringLiteral177, L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m439(NULL /*static, unused*/, _stringLiteral176, L_11, _stringLiteral178, /*hidden argument*/NULL);
		G_B8_0 = L_12;
	}

IL_0084:
	{
		V_0 = G_B8_0;
		GUIStyle_t147 * L_13 = (GUIStyle_t147 *)il2cpp_codegen_object_new (GUIStyle_t147_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m426(L_13, /*hidden argument*/NULL);
		V_1 = L_13;
		GUIStyle_t147 * L_14 = V_1;
		NullCheck(L_14);
		GUIStyle_set_fontSize_m1046(L_14, ((int32_t)50), /*hidden argument*/NULL);
		GUIStyle_t147 * L_15 = V_1;
		NullCheck(L_15);
		GUIStyle_set_richText_m427(L_15, 1, /*hidden argument*/NULL);
		GUIStyle_t147 * L_16 = V_1;
		NullCheck(L_16);
		GUIStyle_set_wordWrap_m428(L_16, 1, /*hidden argument*/NULL);
		GUIStyle_t147 * L_17 = V_1;
		NullCheck(L_17);
		GUIStyle_set_alignment_m429(L_17, 4, /*hidden argument*/NULL);
		GUIStyle_t147 * L_18 = V_1;
		NullCheck(L_18);
		RectOffset_t150 * L_19 = GUIStyle_get_padding_m430(L_18, /*hidden argument*/NULL);
		V_2 = ((int32_t)50);
		GUIStyle_t147 * L_20 = V_1;
		NullCheck(L_20);
		RectOffset_t150 * L_21 = GUIStyle_get_padding_m430(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		RectOffset_set_bottom_m431(L_21, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		V_2 = L_23;
		GUIStyle_t147 * L_24 = V_1;
		NullCheck(L_24);
		RectOffset_t150 * L_25 = GUIStyle_get_padding_m430(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		RectOffset_set_top_m432(L_25, L_26, /*hidden argument*/NULL);
		int32_t L_27 = V_2;
		V_2 = L_27;
		GUIStyle_t147 * L_28 = V_1;
		NullCheck(L_28);
		RectOffset_t150 * L_29 = GUIStyle_get_padding_m430(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_2;
		NullCheck(L_29);
		RectOffset_set_right_m433(L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_2;
		NullCheck(L_19);
		RectOffset_set_left_m434(L_19, L_31, /*hidden argument*/NULL);
		int32_t L_32 = Screen_get_width_m435(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_33 = Screen_get_height_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t148  L_34 = {0};
		Rect__ctor_m437(&L_34, (0.0f), (0.0f), (((float)L_32)), (((float)L_33)), /*hidden argument*/NULL);
		String_t* L_35 = V_0;
		GUIStyle_t147 * L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t151_il2cpp_TypeInfo_var);
		GUI_Label_m440(NULL /*static, unused*/, L_34, L_35, L_36, /*hidden argument*/NULL);
		goto IL_0118;
	}

IL_0106:
	{
		bool L_37 = (__this->___information_25);
		if (!L_37)
		{
			goto IL_0118;
		}
	}
	{
		__this->___information_25 = 0;
	}

IL_0118:
	{
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::BuildWychd()
extern TypeInfo* ASingleton_1_t263_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m922_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral179;
extern Il2CppCodeGenString* _stringLiteral180;
extern Il2CppCodeGenString* _stringLiteral181;
extern Il2CppCodeGenString* _stringLiteral182;
extern "C" void PauseCanvas_BuildWychd_m844 (PauseCanvas_t241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ASingleton_1_get_current_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		_stringLiteral180 = il2cpp_codegen_string_literal_from_index(180);
		_stringLiteral181 = il2cpp_codegen_string_literal_from_index(181);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Wychd_t209 * V_1 = {0};
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_0 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_0);
		bool L_1 = (L_0->___willPauseOnLoad_31);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		int32_t L_2 = G_B3_0;
		Object_t * L_3 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_2);
		float L_4 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_3, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		V_0 = L_4;
		float L_5 = V_0;
		Wychd_t209 * L_6 = GameData_WhatYouCouldHaveDone_m827(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_7 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_7);
		bool L_8 = (L_7->___willPauseOnLoad_31);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		__this->____wychd_26 = _stringLiteral179;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_9 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_9);
		L_9->___willPauseOnLoad_31 = 0;
		goto IL_005d;
	}

IL_0052:
	{
		__this->____wychd_26 = _stringLiteral180;
	}

IL_005d:
	{
		String_t* L_10 = (__this->____wychd_26);
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_12 = TextFormatter_TimeDescription_m110(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m420(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		__this->____wychd_26 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_14 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_14);
		bool L_15 = (L_14->___newPersonalBest_32);
		if (!L_15)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_16 = (__this->____wychd_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m420(NULL /*static, unused*/, L_16, _stringLiteral181, /*hidden argument*/NULL);
		__this->____wychd_26 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t263_il2cpp_TypeInfo_var);
		GameController_t225 * L_18 = ASingleton_1_get_current_m922(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m922_MethodInfo_var);
		NullCheck(L_18);
		L_18->___newPersonalBest_32 = 0;
	}

IL_00a4:
	{
		String_t* L_19 = (__this->____wychd_26);
		Wychd_t209 * L_20 = V_1;
		Wychd_t209 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_21);
		int32_t L_23 = Random_Range_m497(NULL /*static, unused*/, 0, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_20, L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m439(NULL /*static, unused*/, L_19, _stringLiteral182, L_24, /*hidden argument*/NULL);
		__this->____wychd_26 = L_25;
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::OnEventDidStart(System.Enum,System.Object)
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern "C" void PauseCanvas_OnEventDidStart_m845 (PauseCanvas_t241 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t22_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Canvas_t237 * L_4 = (__this->___canvas_9);
		NullCheck(L_4);
		Behaviour_set_enabled_m593(L_4, 1, /*hidden argument*/NULL);
		PauseCanvas_BuildWychd_m844(__this, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_0028:
	{
		Enum_t5 * L_5 = ___theEvent;
		int32_t L_6 = 3;
		Object_t * L_7 = Box(Event_t22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_5, L_7);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		Canvas_t237 * L_9 = (__this->___canvas_9);
		NullCheck(L_9);
		Behaviour_set_enabled_m593(L_9, 0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// Procrastinate.SoundEffects/Args
#include "AssemblyU2DCSharp_Procrastinate_SoundEffects_ArgsMethodDeclarations.h"



// Procrastinate.SoundEffects
#include "AssemblyU2DCSharp_Procrastinate_SoundEffects.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.SoundEffects
#include "AssemblyU2DCSharp_Procrastinate_SoundEffectsMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.SoundEffects>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_7MethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
struct Component_t174;
struct AudioSourceU5BU5D_t286;
struct Component_t174;
struct ObjectU5BU5D_t146;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t146* Component_GetComponentsInChildren_TisObject_t_m664_gshared (Component_t174 * __this, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m664(__this, method) (( ObjectU5BU5D_t146* (*) (Component_t174 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m664_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.AudioSource>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.AudioSource>()
#define Component_GetComponentsInChildren_TisAudioSource_t285_m1047(__this, method) (( AudioSourceU5BU5D_t286* (*) (Component_t174 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m664_gshared)(__this, method)


// System.Void Procrastinate.SoundEffects::.ctor()
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t247_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1048_MethodInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m1049_MethodInfo_var;
extern "C" void SoundEffects__ctor_m846 (SoundEffects_t246 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		ASingleton_1_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		Dictionary_2__ctor_m1048_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483786);
		ASingleton_1__ctor_m1049_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483787);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1048(L_0, /*hidden argument*/Dictionary_2__ctor_m1048_MethodInfo_var);
		__this->___tracks_12 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t247_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m1049(__this, /*hidden argument*/ASingleton_1__ctor_m1049_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Start()
extern const MethodInfo* Component_GetComponentsInChildren_TisAudioSource_t285_m1047_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral183;
extern "C" void SoundEffects_Start_m847 (SoundEffects_t246 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponentsInChildren_TisAudioSource_t285_m1047_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483788);
		_stringLiteral183 = il2cpp_codegen_string_literal_from_index(183);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t285 * V_0 = {0};
	AudioSourceU5BU5D_t286* V_1 = {0};
	int32_t V_2 = 0;
	{
		AudioSourceU5BU5D_t286* L_0 = Component_GetComponentsInChildren_TisAudioSource_t285_m1047(__this, /*hidden argument*/Component_GetComponentsInChildren_TisAudioSource_t285_m1047_MethodInfo_var);
		V_1 = L_0;
		V_2 = 0;
		goto IL_002d;
	}

IL_000e:
	{
		AudioSourceU5BU5D_t286* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(AudioSource_t285 **)(AudioSource_t285 **)SZArrayLdElema(L_1, L_3));
		Dictionary_2_t244 * L_4 = (__this->___tracks_12);
		AudioSource_t285 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m499(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m1050(L_6, /*hidden argument*/NULL);
		AudioSource_t285 * L_8 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, AudioSource_t285 * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::set_Item(!0,!1) */, L_4, L_7, L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		AudioSourceU5BU5D_t286* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Dictionary_2_t244 * L_12 = (__this->___tracks_12);
		NullCheck(L_12);
		AudioSource_t285 * L_13 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_12, _stringLiteral183);
		NullCheck(L_13);
		AudioSource_Play_m1051(L_13, /*hidden argument*/NULL);
		Dictionary_2_t244 * L_14 = (__this->___tracks_12);
		NullCheck(L_14);
		AudioSource_t285 * L_15 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_14, _stringLiteral183);
		NullCheck(L_15);
		AudioSource_Pause_m1052(L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Update()
extern "C" void SoundEffects_Update_m848 (SoundEffects_t246 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Play(System.String)
extern TypeInfo* ASingleton_1_t247_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m1053_MethodInfo_var;
extern "C" void SoundEffects_Play_m849 (SoundEffects_t246 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		ASingleton_1_get_current_m1053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483789);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t285 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t247_il2cpp_TypeInfo_var);
		SoundEffects_t246 * L_0 = ASingleton_1_get_current_m1053(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m1053_MethodInfo_var);
		NullCheck(L_0);
		Dictionary_2_t244 * L_1 = (L_0->___tracks_12);
		String_t* L_2 = ___name;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m1050(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		AudioSource_t285 * L_4 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_1, L_3);
		V_0 = L_4;
		AudioSource_t285 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = AudioSource_get_isPlaying_m1054(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0027;
		}
	}
	{
		AudioSource_t285 * L_7 = V_0;
		NullCheck(L_7);
		AudioSource_Play_m1051(L_7, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Play(System.String,System.UInt64)
extern TypeInfo* ASingleton_1_t247_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_current_m1053_MethodInfo_var;
extern "C" void SoundEffects_Play_m850 (SoundEffects_t246 * __this, String_t* ___name, uint64_t ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		ASingleton_1_get_current_m1053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483789);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t247_il2cpp_TypeInfo_var);
		SoundEffects_t246 * L_0 = ASingleton_1_get_current_m1053(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_current_m1053_MethodInfo_var);
		NullCheck(L_0);
		Dictionary_2_t244 * L_1 = (L_0->___tracks_12);
		String_t* L_2 = ___name;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m1050(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		AudioSource_t285 * L_4 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_1, L_3);
		uint64_t L_5 = ___delay;
		NullCheck(L_4);
		AudioSource_Play_m1055(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.SoundEffects::OnEventDidStart(System.Enum,System.Object)
extern TypeInfo* Event_t218_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral184;
extern Il2CppCodeGenString* _stringLiteral185;
extern "C" void SoundEffects_OnEventDidStart_m851 (SoundEffects_t246 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral184 = il2cpp_codegen_string_literal_from_index(184);
		_stringLiteral185 = il2cpp_codegen_string_literal_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t218_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_t244 * L_4 = (__this->___tracks_12);
		NullCheck(L_4);
		AudioSource_t285 * L_5 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_4, _stringLiteral184);
		NullCheck(L_5);
		AudioSource_Play_m1051(L_5, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_002b:
	{
		Enum_t5 * L_6 = ___theEvent;
		int32_t L_7 = 2;
		Object_t * L_8 = Box(Event_t22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_6, L_8);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		Object_t * L_10 = ___info;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		Object_t * L_11 = ___info;
		if (!((*(int32_t*)((int32_t*)UnBox (L_11, Int32_t149_il2cpp_TypeInfo_var)))))
		{
			goto IL_0062;
		}
	}

IL_004d:
	{
		Dictionary_2_t244 * L_12 = (__this->___tracks_12);
		NullCheck(L_12);
		AudioSource_t285 * L_13 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_12, _stringLiteral185);
		NullCheck(L_13);
		AudioSource_Pause_m1052(L_13, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::OnEvent(System.Enum,System.Object)
extern TypeInfo* Event_t218_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral186;
extern "C" void SoundEffects_OnEvent_m852 (SoundEffects_t246 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 3;
		Object_t * L_2 = Box(Event_t218_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		SoundEffects_Play_m849(__this, _stringLiteral186, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Enum_t5 * L_4 = ___theEvent;
		int32_t L_5 = 4;
		Object_t * L_6 = Box(Event_t22_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		SoundEffects_SwitchMainTrack_m853(__this, 1, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::SwitchMainTrack(System.Boolean)
extern TypeInfo* GameCenter_t219_il2cpp_TypeInfo_var;
extern TypeInfo* RMXObject_t32_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral185;
extern Il2CppCodeGenString* _stringLiteral183;
extern "C" void SoundEffects_SwitchMainTrack_m853 (SoundEffects_t246 * __this, bool ___force, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		RMXObject_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		_stringLiteral185 = il2cpp_codegen_string_literal_from_index(185);
		_stringLiteral183 = il2cpp_codegen_string_literal_from_index(183);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t219_il2cpp_TypeInfo_var);
		bool L_0 = GameCenter_HasPlayerAlreadyAchieved_m785(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t32_il2cpp_TypeInfo_var);
		bool L_1 = RMXObject_get_OneIn10_m92(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		bool L_2 = ___force;
		if (!L_2)
		{
			goto IL_004a;
		}
	}

IL_001b:
	{
		Dictionary_2_t244 * L_3 = (__this->___tracks_12);
		NullCheck(L_3);
		AudioSource_t285 * L_4 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_3, _stringLiteral185);
		NullCheck(L_4);
		AudioSource_Pause_m1052(L_4, /*hidden argument*/NULL);
		Dictionary_2_t244 * L_5 = (__this->___tracks_12);
		NullCheck(L_5);
		AudioSource_t285 * L_6 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_5, _stringLiteral183);
		NullCheck(L_6);
		AudioSource_UnPause_m1056(L_6, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_004a:
	{
		Dictionary_2_t244 * L_7 = (__this->___tracks_12);
		NullCheck(L_7);
		AudioSource_t285 * L_8 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_7, _stringLiteral185);
		NullCheck(L_8);
		AudioSource_UnPause_m1056(L_8, /*hidden argument*/NULL);
		Dictionary_2_t244 * L_9 = (__this->___tracks_12);
		NullCheck(L_9);
		AudioSource_t285 * L_10 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_9, _stringLiteral183);
		NullCheck(L_10);
		AudioSource_Pause_m1052(L_10, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::OnEventDidEnd(System.Enum,System.Object)
extern TypeInfo* Event_t218_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t22_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral187;
extern "C" void SoundEffects_OnEventDidEnd_m854 (SoundEffects_t246 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Event_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		_stringLiteral187 = il2cpp_codegen_string_literal_from_index(187);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t218_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Dictionary_2_t244 * L_4 = (__this->___tracks_12);
		NullCheck(L_4);
		AudioSource_t285 * L_5 = (AudioSource_t285 *)VirtFuncInvoker1< AudioSource_t285 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_4, _stringLiteral187);
		NullCheck(L_5);
		AudioSource_PlayDelayed_m1057(L_5, (1.0f), /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_0030:
	{
		Enum_t5 * L_6 = ___theEvent;
		int32_t L_7 = 3;
		Object_t * L_8 = Box(Event_t22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_6, L_8);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		SoundEffects_SwitchMainTrack_m853(__this, 0, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// Procrastinate.Tests
#include "AssemblyU2DCSharp_Procrastinate_TestsMethodDeclarations.h"



// Procrastinate.Depricated.Timer
#include "AssemblyU2DCSharp_Procrastinate_Depricated_Timer.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.Depricated.Timer
#include "AssemblyU2DCSharp_Procrastinate_Depricated_TimerMethodDeclarations.h"



// System.String Procrastinate.Depricated.Timer::GetTimeDescription(System.Single)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral62;
extern "C" String_t* Timer_GetTimeDescription_m855 (Object_t * __this /* static, unused */, float ___timeInSeconds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	{
		float L_0 = ___timeInSeconds;
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = ((int32_t)((int32_t)(((int32_t)L_1))/(int32_t)((int32_t)60)));
		int32_t L_2 = V_1;
		V_2 = ((int32_t)((int32_t)L_2/(int32_t)((int32_t)60)));
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_4 = roundf((fmodf(L_3, (60.0f))));
		V_0 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_7 = V_3;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m425(NULL /*static, unused*/, L_7, L_10, _stringLiteral59, /*hidden argument*/NULL);
		V_3 = L_11;
	}

IL_0039:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_13 = V_3;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m425(NULL /*static, unused*/, L_13, L_16, _stringLiteral60, /*hidden argument*/NULL);
		V_3 = L_17;
	}

IL_0052:
	{
		float L_18 = V_0;
		if ((!(((float)L_18) > ((float)(1.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_19 = V_3;
		float L_20 = V_0;
		float L_21 = L_20;
		Object_t * L_22 = Box(Single_t172_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m425(NULL /*static, unused*/, L_19, L_22, _stringLiteral61, /*hidden argument*/NULL);
		V_3 = L_23;
		goto IL_0080;
	}

IL_0074:
	{
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m420(NULL /*static, unused*/, L_24, _stringLiteral62, /*hidden argument*/NULL);
		V_3 = L_25;
	}

IL_0080:
	{
		String_t* L_26 = V_3;
		return L_26;
	}
}
#ifndef _MSC_VER
#else
#endif
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserDataMethodDeclarations.h"



// Procrastinate.Version/Type
#include "AssemblyU2DCSharp_Procrastinate_Version_Type.h"
#ifndef _MSC_VER
#else
#endif
// Procrastinate.Version/Type
#include "AssemblyU2DCSharp_Procrastinate_Version_TypeMethodDeclarations.h"



// Procrastinate.Version
#include "AssemblyU2DCSharp_Procrastinate_Version.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"


// System.Void Procrastinate.Version::.ctor()
extern "C" void Version__ctor_m856 (Version_t252 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::.cctor()
extern "C" void Version__cctor_m857 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Single Procrastinate.Version::get_latest()
extern "C" float Version_get_latest_m858 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (3.06f);
	}
}
// System.Single Procrastinate.Version::get_currentVersion()
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t172_m932_MethodInfo_var;
extern "C" float Version_get_currentVersion_m859 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SavedData_Get_TisSingle_t172_m932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ((int32_t)13);
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t172_m932(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t172_m932_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.Version::set_currentVersion(System.Single)
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern "C" void Version_set_currentVersion_m860 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ((int32_t)13);
		Object_t * L_1 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m103(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.Version::get_needsPatch()
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern "C" bool Version_get_needsPatch_m861 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		float L_0 = Version_get_currentVersion_m859(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Version_get_latest_m858(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		bool L_2 = ((Version_t252_StaticFields*)Version_t252_il2cpp_TypeInfo_var->static_fields)->____failedPatch_2;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Void Procrastinate.Version::Patch()
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t287_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral188;
extern Il2CppCodeGenString* _stringLiteral189;
extern "C" void Version_Patch_m862 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UnityException_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral188 = il2cpp_codegen_string_literal_from_index(188);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	UnityException_t287 * V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		bool L_0 = Version_get_needsPatch_m861(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_PatchX_m863(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = Version_get_latest_m858(NULL /*static, unused*/, /*hidden argument*/NULL);
		Version_set_currentVersion_m860(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m420(NULL /*static, unused*/, L_3, _stringLiteral188, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t287_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(UnityEngine.UnityException)
		V_1 = ((UnityException_t287 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		((Version_t252_StaticFields*)Version_t252_il2cpp_TypeInfo_var->static_fields)->____failedPatch_2 = 1;
		String_t* L_5 = V_0;
		UnityException_t287 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m439(NULL /*static, unused*/, L_5, _stringLiteral189, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_004e;
	} // end catch (depth: 1)

IL_004e:
	{
		int32_t L_9 = 5;
		Object_t * L_10 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_12 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_13 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
// System.Void Procrastinate.Version::PatchX()
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern "C" void Version_PatchX_m863 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		float L_0 = Version_get_currentVersion_m859(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(3.05f)))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_Patchv0_3_5_m865(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		float L_1 = Version_get_currentVersion_m859(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) < ((float)(3.06f)))))
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_Patchv0_3_6_m864(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void Procrastinate.Version::Patchv0_3_6()
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern "C" void Version_Patchv0_3_6_m864 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_Set_m868(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 6, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, ((int32_t)11), /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 8, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, ((int32_t)9), /*hidden argument*/NULL);
		Version_Set_m868(NULL /*static, unused*/, ((int32_t)14), /*hidden argument*/NULL);
		Version_set_currentVersion_m860(NULL /*static, unused*/, (3.06f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::Patchv0_3_5()
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern "C" void Version_Patchv0_3_5_m865 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_Setf_m867(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Version_Setf_m867(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Version_Setf_m867(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		Version_Setf_m867(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		Version_set_currentVersion_m860(NULL /*static, unused*/, (3.05f), /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.Version::OldKey(Procrastinate.UserData)
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral190;
extern Il2CppCodeGenString* _stringLiteral191;
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral193;
extern Il2CppCodeGenString* _stringLiteral194;
extern Il2CppCodeGenString* _stringLiteral195;
extern Il2CppCodeGenString* _stringLiteral196;
extern Il2CppCodeGenString* _stringLiteral197;
extern Il2CppCodeGenString* _stringLiteral198;
extern Il2CppCodeGenString* _stringLiteral199;
extern Il2CppCodeGenString* _stringLiteral200;
extern Il2CppCodeGenString* _stringLiteral201;
extern Il2CppCodeGenString* _stringLiteral202;
extern Il2CppCodeGenString* _stringLiteral203;
extern Il2CppCodeGenString* _stringLiteral204;
extern Il2CppCodeGenString* _stringLiteral205;
extern Il2CppCodeGenString* _stringLiteral206;
extern Il2CppCodeGenString* _stringLiteral207;
extern Il2CppCodeGenString* _stringLiteral208;
extern Il2CppCodeGenString* _stringLiteral209;
extern "C" String_t* Version_OldKey_m866 (Object_t * __this /* static, unused */, int32_t ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		_stringLiteral190 = il2cpp_codegen_string_literal_from_index(190);
		_stringLiteral191 = il2cpp_codegen_string_literal_from_index(191);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		_stringLiteral199 = il2cpp_codegen_string_literal_from_index(199);
		_stringLiteral200 = il2cpp_codegen_string_literal_from_index(200);
		_stringLiteral201 = il2cpp_codegen_string_literal_from_index(201);
		_stringLiteral202 = il2cpp_codegen_string_literal_from_index(202);
		_stringLiteral203 = il2cpp_codegen_string_literal_from_index(203);
		_stringLiteral204 = il2cpp_codegen_string_literal_from_index(204);
		_stringLiteral205 = il2cpp_codegen_string_literal_from_index(205);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		_stringLiteral207 = il2cpp_codegen_string_literal_from_index(207);
		_stringLiteral208 = il2cpp_codegen_string_literal_from_index(208);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		float L_0 = Version_get_currentVersion_m859(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) < ((float)(3.05f)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_2 = ___data;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0046;
		}
		if (L_3 == 1)
		{
			goto IL_004c;
		}
		if (L_3 == 2)
		{
			goto IL_0052;
		}
		if (L_3 == 3)
		{
			goto IL_0058;
		}
		if (L_3 == 4)
		{
			goto IL_007c;
		}
		if (L_3 == 5)
		{
			goto IL_005e;
		}
		if (L_3 == 6)
		{
			goto IL_0064;
		}
		if (L_3 == 7)
		{
			goto IL_0070;
		}
		if (L_3 == 8)
		{
			goto IL_006a;
		}
		if (L_3 == 9)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_007c;
	}

IL_0046:
	{
		return _stringLiteral190;
	}

IL_004c:
	{
		return _stringLiteral191;
	}

IL_0052:
	{
		return _stringLiteral192;
	}

IL_0058:
	{
		return _stringLiteral193;
	}

IL_005e:
	{
		return _stringLiteral194;
	}

IL_0064:
	{
		return _stringLiteral195;
	}

IL_006a:
	{
		return _stringLiteral196;
	}

IL_0070:
	{
		return _stringLiteral197;
	}

IL_0076:
	{
		return _stringLiteral198;
	}

IL_007c:
	{
		goto IL_012a;
	}

IL_0081:
	{
		float L_4 = V_0;
		if ((!(((float)L_4) < ((float)(3.06f)))))
		{
			goto IL_012a;
		}
	}
	{
		int32_t L_5 = ___data;
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_00d5;
		}
		if (L_6 == 1)
		{
			goto IL_00db;
		}
		if (L_6 == 2)
		{
			goto IL_00e1;
		}
		if (L_6 == 3)
		{
			goto IL_00e7;
		}
		if (L_6 == 4)
		{
			goto IL_00ed;
		}
		if (L_6 == 5)
		{
			goto IL_00f3;
		}
		if (L_6 == 6)
		{
			goto IL_00f9;
		}
		if (L_6 == 7)
		{
			goto IL_010b;
		}
		if (L_6 == 8)
		{
			goto IL_0105;
		}
		if (L_6 == 9)
		{
			goto IL_0111;
		}
		if (L_6 == 10)
		{
			goto IL_012a;
		}
		if (L_6 == 11)
		{
			goto IL_00ff;
		}
		if (L_6 == 12)
		{
			goto IL_012a;
		}
		if (L_6 == 13)
		{
			goto IL_011d;
		}
		if (L_6 == 14)
		{
			goto IL_0117;
		}
	}
	{
		goto IL_012a;
	}

IL_00d5:
	{
		return _stringLiteral199;
	}

IL_00db:
	{
		return _stringLiteral200;
	}

IL_00e1:
	{
		return _stringLiteral201;
	}

IL_00e7:
	{
		return _stringLiteral202;
	}

IL_00ed:
	{
		return _stringLiteral203;
	}

IL_00f3:
	{
		return _stringLiteral204;
	}

IL_00f9:
	{
		return _stringLiteral205;
	}

IL_00ff:
	{
		return _stringLiteral206;
	}

IL_0105:
	{
		return _stringLiteral207;
	}

IL_010b:
	{
		return _stringLiteral197;
	}

IL_0111:
	{
		return _stringLiteral208;
	}

IL_0117:
	{
		return _stringLiteral209;
	}

IL_011d:
	{
		int32_t L_7 = ((int32_t)13);
		Object_t * L_8 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		return L_9;
	}

IL_012a:
	{
		return (String_t*)NULL;
	}
}
// System.Void Procrastinate.Version::Setf(Procrastinate.UserData)
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern "C" void Version_Setf_m867 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_Set_m869(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::Set(Procrastinate.UserData)
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern "C" void Version_Set_m868 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		Version_Set_m869(NULL /*static, unused*/, L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::Set(Procrastinate.UserData,Procrastinate.Version/Type)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Version_t252_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t250_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t287_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral210;
extern Il2CppCodeGenString* _stringLiteral211;
extern Il2CppCodeGenString* _stringLiteral212;
extern Il2CppCodeGenString* _stringLiteral213;
extern Il2CppCodeGenString* _stringLiteral214;
extern Il2CppCodeGenString* _stringLiteral215;
extern Il2CppCodeGenString* _stringLiteral216;
extern Il2CppCodeGenString* _stringLiteral217;
extern "C" void Version_Set_m869 (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Version_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		UserData_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		UnityException_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		_stringLiteral213 = il2cpp_codegen_string_literal_from_index(213);
		_stringLiteral214 = il2cpp_codegen_string_literal_from_index(214);
		_stringLiteral215 = il2cpp_codegen_string_literal_from_index(215);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	int32_t V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = NULL;
		int32_t L_1 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t252_il2cpp_TypeInfo_var);
		String_t* L_2 = Version_OldKey_m866(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = ___key;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(UserData_t250_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_5);
		V_3 = L_6;
		String_t* L_7 = V_0;
		V_4 = L_7;
		StringU5BU5D_t31* L_8 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 6));
		String_t* L_9 = V_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 0)) = (String_t*)L_9;
		StringU5BU5D_t31* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, _stringLiteral210);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, 1)) = (String_t*)_stringLiteral210;
		StringU5BU5D_t31* L_11 = L_10;
		String_t* L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, L_12);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 2)) = (String_t*)L_12;
		StringU5BU5D_t31* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, _stringLiteral211);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 3)) = (String_t*)_stringLiteral211;
		StringU5BU5D_t31* L_14 = L_13;
		String_t* L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		ArrayElementTypeCheck (L_14, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, 4)) = (String_t*)L_15;
		StringU5BU5D_t31* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 5);
		ArrayElementTypeCheck (L_16, _stringLiteral212);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 5)) = (String_t*)_stringLiteral212;
		String_t* L_17 = String_Concat_m509(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		String_t* L_18 = V_2;
		bool L_19 = PlayerPrefs_HasKey_m500(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_20 = ___type;
		V_5 = L_20;
		int32_t L_21 = V_5;
		if (L_21 == 0)
		{
			goto IL_0075;
		}
		if (L_21 == 1)
		{
			goto IL_0086;
		}
		if (L_21 == 2)
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00a3;
	}

IL_0075:
	{
		String_t* L_22 = V_2;
		float L_23 = PlayerPrefs_GetFloat_m1058(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		float L_24 = L_23;
		Object_t * L_25 = Box(Single_t172_il2cpp_TypeInfo_var, &L_24);
		V_1 = L_25;
		goto IL_00b4;
	}

IL_0086:
	{
		String_t* L_26 = V_2;
		int32_t L_27 = PlayerPrefs_GetInt_m1059(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_28);
		V_1 = L_29;
		goto IL_00b4;
	}

IL_0097:
	{
		String_t* L_30 = V_2;
		String_t* L_31 = PlayerPrefs_GetString_m501(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		goto IL_00b4;
	}

IL_00a3:
	{
		String_t* L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m420(NULL /*static, unused*/, L_32, _stringLiteral213, /*hidden argument*/NULL);
		UnityException_t287 * L_34 = (UnityException_t287 *)il2cpp_codegen_object_new (UnityException_t287_il2cpp_TypeInfo_var);
		UnityException__ctor_m1060(L_34, L_33, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_34);
	}

IL_00b4:
	{
		String_t* L_35 = V_3;
		Object_t * L_36 = V_1;
		NullCheck(L_36);
		String_t* L_37 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		PlayerPrefs_SetString_m504(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		String_t* L_38 = V_2;
		String_t* L_39 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_40 = String_op_Inequality_m1061(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00e3;
		}
	}
	{
		String_t* L_41 = V_2;
		PlayerPrefs_DeleteKey_m1062(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		String_t* L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Concat_m420(NULL /*static, unused*/, L_42, _stringLiteral214, /*hidden argument*/NULL);
		V_0 = L_43;
		goto IL_00ef;
	}

IL_00e3:
	{
		String_t* L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m420(NULL /*static, unused*/, L_44, _stringLiteral215, /*hidden argument*/NULL);
		V_0 = L_45;
	}

IL_00ef:
	{
		String_t* L_46 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_47 = String_Concat_m420(NULL /*static, unused*/, L_46, _stringLiteral216, /*hidden argument*/NULL);
		V_0 = L_47;
		goto IL_010c;
	}

IL_0100:
	{
		String_t* L_48 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m420(NULL /*static, unused*/, L_48, _stringLiteral217, /*hidden argument*/NULL);
		V_0 = L_49;
	}

IL_010c:
	{
		int32_t L_50 = 5;
		Object_t * L_51 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_53 = Bugger_WillLog_m27(NULL /*static, unused*/, (Enum_t5 *)L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0127;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_54 = Bugger_get_Last_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
	}

IL_0127:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$36
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24ArraMethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$36
void U24ArrayTypeU2436_t253_marshal(const U24ArrayTypeU2436_t253& unmarshaled, U24ArrayTypeU2436_t253_marshaled& marshaled)
{
}
void U24ArrayTypeU2436_t253_marshal_back(const U24ArrayTypeU2436_t253_marshaled& marshaled, U24ArrayTypeU2436_t253& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$36
void U24ArrayTypeU2436_t253_marshal_cleanup(U24ArrayTypeU2436_t253_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



// System.Void <PrivateImplementationDetails>::.ctor()
extern "C" void U3CPrivateImplementationDetailsU3E__ctor_m870 (U3CPrivateImplementationDetailsU3E_t254 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
