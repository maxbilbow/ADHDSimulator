#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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

// System.Array
#include "mscorlib_System_Array.h"

// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
// Procrastinate.BodyBecomesActive
#include "AssemblyU2DCSharp_Procrastinate_BodyBecomesActive.h"
// Procrastinate.BodyBecomesActive
#include "AssemblyU2DCSharp_Procrastinate_BodyBecomesActiveMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
// Procrastinate.ABonus`2<UnityEngine.Rigidbody2D,System.Single>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_gen.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// RMX.Event
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Event.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// System.String
#include "mscorlib_System_String.h"
// Procrastinate.ABonus`2<UnityEngine.Rigidbody2D,System.Single>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_genMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Void Procrastinate.BodyBecomesActive::.ctor()
// Procrastinate.ABonus`2<UnityEngine.Rigidbody2D,System.Single>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_genMethodDeclarations.h"
extern const MethodInfo* ABonus_2__ctor_m889_MethodInfo_var;
extern "C" void BodyBecomesActive__ctor_m717 (BodyBecomesActive_t205 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ABonus_2__ctor_m889_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	{
		ABonus_2__ctor_m889(__this, /*hidden argument*/ABonus_2__ctor_m889_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.BodyBecomesActive::OnEventDidStart(System.Enum,System.Object)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern "C" void BodyBecomesActive_OnEventDidStart_m718 (BodyBecomesActive_t205 * __this, Enum_t6 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (((ABonus_2_t206 *)__this)->___deactivateOnPause_7);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		Enum_t6 * L_1 = ___theEvent;
		int32_t L_2 = 2;
		Object_t * L_3 = Box(Event_t24_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_1, L_3);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		VirtActionInvoker0::Invoke(23 /* System.Void Procrastinate.BodyBecomesActive::Deactivate() */, __this);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Procrastinate.BodyBecomesActive::Activate()
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
extern const MethodInfo* ABonus_2_Activate_m890_MethodInfo_var;
extern "C" void BodyBecomesActive_Activate_m719 (BodyBecomesActive_t205 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ABonus_2_Activate_m890_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	{
		ABonus_2_Activate_m890(__this, /*hidden argument*/ABonus_2_Activate_m890_MethodInfo_var);
		Rigidbody2D_t49 * L_0 = (((ABonus_2_t206 *)__this)->___component_12);
		NullCheck(L_0);
		Rigidbody2D_set_isKinematic_m891(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.BodyBecomesActive::Deactivate()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* ABonus_2_Deactivate_m892_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral104;
extern "C" void BodyBecomesActive_Deactivate_m720 (BodyBecomesActive_t205 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ABonus_2_Deactivate_m892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		_stringLiteral104 = il2cpp_codegen_string_literal_from_index(104);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Rigidbody2D_t49 * L_0 = (((ABonus_2_t206 *)__this)->___component_12);
		NullCheck(L_0);
		Rigidbody2D_set_isKinematic_m891(L_0, 1, /*hidden argument*/NULL);
		ABonus_2_Deactivate_m892(__this, /*hidden argument*/ABonus_2_Deactivate_m892_MethodInfo_var);
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Object)
		MonoBehaviour_print_m893(NULL /*static, unused*/, _stringLiteral104, /*hidden argument*/NULL);
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		return;
	}
}
// System.Boolean Procrastinate.BodyBecomesActive::get_isBonusActive()
extern "C" bool BodyBecomesActive_get_isBonusActive_m721 (BodyBecomesActive_t205 * __this, const MethodInfo* method)
{
	{
		Rigidbody2D_t49 * L_0 = (((ABonus_2_t206 *)__this)->___component_12);
		NullCheck(L_0);
		bool L_1 = Rigidbody2D_get_isKinematic_m894(L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviour.h"
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviourMethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// Procrastinate.Event
#include "AssemblyU2DCSharp_Procrastinate_Event.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.List`1/Enumerator<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// Procrastinate.ClockSpawner
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawner.h"
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_8.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2D.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// System.Predicate`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Predicate_1_gen_0.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
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
// Procrastinate.ClockSpawner
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawnerMethodDeclarations.h"
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Predicate`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Predicate_1_gen_0MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.ClockSpawner>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_2MethodDeclarations.h"
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
struct SpriteRenderer_t258;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m540_gshared (Component_t178 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m540(__this, method) (( Object_t * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t258_m898(__this, method) (( SpriteRenderer_t258 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
struct Collider2D_t142;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m604_gshared (GameObject_t11 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m604(__this, method) (( Object_t * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
#define GameObject_GetComponent_TisCollider2D_t142_m900(__this, method) (( Collider2D_t142 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
struct Rigidbody2D_t49;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t49_m543(__this, method) (( Rigidbody2D_t49 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
struct CircleCollider2D_t259;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
#define Component_GetComponent_TisCircleCollider2D_t259_m906(__this, method) (( CircleCollider2D_t259 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
struct CircleCollider2D_t259;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m576_gshared (GameObject_t11 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m576(__this, method) (( Object_t * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CircleCollider2D>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CircleCollider2D>()
#define GameObject_AddComponent_TisCircleCollider2D_t259_m908(__this, method) (( CircleCollider2D_t259 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct Rigidbody2D_t49;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody2D>()
#define GameObject_AddComponent_TisRigidbody2D_t49_m911(__this, method) (( Rigidbody2D_t49 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct SpriteRenderer_t258;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
#define GameObject_AddComponent_TisSpriteRenderer_t258_m918(__this, method) (( SpriteRenderer_t258 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct ClockBehaviour_t207;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Procrastinate.ClockBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Procrastinate.ClockBehaviour>()
#define GameObject_AddComponent_TisClockBehaviour_t207_m921(__this, method) (( ClockBehaviour_t207 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// System.Void Procrastinate.ClockBehaviour::.ctor()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
extern TypeInfo* RMXObject_t31_il2cpp_TypeInfo_var;
extern "C" void ClockBehaviour__ctor_m722 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXObject_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___maxSizeOfInflatable_9 = (10.0f);
		__this->___isOnScreen_10 = 1;
		__this->___MaxTimeOffScreen_12 = (30.0f);
		__this->___OffScreenLimit_13 = (2.0f);
		__this->___maxVelocity_14 = (15.0f);
		Vector3_t42  L_0 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastScale_15 = L_0;
		__this->___inflationSpeed_16 = (0.1f);
		__this->___lifeSpan_18 = (std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t31_il2cpp_TypeInfo_var);
		RMXObject__ctor_m71(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.ClockBehaviour::get_didPop()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviourMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" bool ClockBehaviour_get_didPop_m723 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	Color_t203  V_0 = {0};
	{
		float L_0 = (__this->___inflationSpeed_16);
		__this->___inflationSpeed_16 = ((float)((float)L_0*(float)(0.975f)));
		Transform_t41 * L_1 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Transform_t41 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_localScale_m558(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___inflationSpeed_16);
		Vector3_t42  L_5 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_3, ((float)((float)(1.0f)+(float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_m559(L_2, L_5, /*hidden argument*/NULL);
		float L_6 = (__this->___inflationSpeed_16);
		if ((!(((double)(((double)L_6))) < ((double)(0.0004)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_7 = 3;
		Object_t * L_8 = Box(Event_t221_il2cpp_TypeInfo_var, &L_7);
		RMXObject_DidCauseEvent_m80(__this, (Enum_t6 *)L_8, /*hidden argument*/NULL);
		int32_t L_9 = 2;
		Object_t * L_10 = Box(Event_t221_il2cpp_TypeInfo_var, &L_9);
		RMXObject_DidFinishEvent_m79(__this, (Enum_t6 *)L_10, /*hidden argument*/NULL);
		int32_t L_11 = 4;
		Object_t * L_12 = Box(Event_t24_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = ((int32_t)14);
		Object_t * L_14 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_13);
		RMXObject_DidCauseEvent_m84(__this, (Enum_t6 *)L_12, L_14, /*hidden argument*/NULL);
		GameObject_t11 * L_15 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		Object_Destroy_m690(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		return 1;
	}

IL_0081:
	{
		float L_16 = (__this->___inflationSpeed_16);
		if ((!(((double)(((double)L_16))) < ((double)(0.005)))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_17 = 2;
		Object_t * L_18 = Box(Event_t221_il2cpp_TypeInfo_var, &L_17);
		RMXObject_WillBeginEvent_m77(__this, (Enum_t6 *)L_18, /*hidden argument*/NULL);
		SpriteRenderer_t258 * L_19 = ClockBehaviour_get_spriteRenderer_m724(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Color_t203  L_20 = SpriteRenderer_get_color_m895(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		SpriteRenderer_t258 * L_21 = ClockBehaviour_get_spriteRenderer_m724(__this, /*hidden argument*/NULL);
		float L_22 = ((&V_0)->___r_0);
		float L_23 = ((&V_0)->___g_1);
		float L_24 = ((&V_0)->___b_2);
		Color_t203  L_25 = {0};
		Color__ctor_m896(&L_25, ((float)((float)L_22*(float)(1.01f))), ((float)((float)L_23*(float)(0.98f))), ((float)((float)L_24*(float)(0.99f))), /*hidden argument*/NULL);
		NullCheck(L_21);
		SpriteRenderer_set_color_m897(L_21, L_25, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		Transform_t41 * L_26 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t42  L_27 = Transform_get_localScale_m558(L_26, /*hidden argument*/NULL);
		__this->___lastScale_15 = L_27;
		return 0;
	}
}
// UnityEngine.SpriteRenderer Procrastinate.ClockBehaviour::get_spriteRenderer()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t258_m898_MethodInfo_var;
extern "C" SpriteRenderer_t258 * ClockBehaviour_get_spriteRenderer_m724 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t258_m898_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483712);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t258 * L_0 = Component_GetComponent_TisSpriteRenderer_t258_m898(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t258_m898_MethodInfo_var);
		return L_0;
	}
}
// System.Boolean Procrastinate.ClockBehaviour::IsVisible(Procrastinate.ClockBehaviour)
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviour.h"
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
extern const MethodInfo* GameObject_GetComponent_TisCollider2D_t142_m900_MethodInfo_var;
extern "C" bool ClockBehaviour_IsVisible_m725 (Object_t * __this /* static, unused */, ClockBehaviour_t207 * ___clock, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCollider2D_t142_m900_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		ClockBehaviour_t207 * L_0 = ___clock;
		NullCheck(L_0);
		bool L_1 = (L_0->___isOnScreen_10);
		V_0 = L_1;
		ClockBehaviour_t207 * L_2 = ___clock;
		Camera_t85 * L_3 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlaneU5BU5D_t263* L_4 = GeometryUtility_CalculateFrustumPlanes_m899(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ClockBehaviour_t207 * L_5 = ___clock;
		NullCheck(L_5);
		GameObject_t11 * L_6 = Component_get_gameObject_m547(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Collider2D_t142 * L_7 = GameObject_GetComponent_TisCollider2D_t142_m900(L_6, /*hidden argument*/GameObject_GetComponent_TisCollider2D_t142_m900_MethodInfo_var);
		NullCheck(L_7);
		Bounds_t260  L_8 = Collider2D_get_bounds_m901(L_7, /*hidden argument*/NULL);
		bool L_9 = GeometryUtility_TestPlanesAABB_m902(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___isOnScreen_10 = L_9;
		bool L_10 = V_0;
		ClockBehaviour_t207 * L_11 = ___clock;
		NullCheck(L_11);
		bool L_12 = (L_11->___isOnScreen_10);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_0043;
		}
	}
	{
		ClockBehaviour_t207 * L_13 = ___clock;
		float L_14 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___fellOffAtTime_11 = L_14;
	}

IL_0043:
	{
		ClockBehaviour_t207 * L_15 = ___clock;
		NullCheck(L_15);
		bool L_16 = (L_15->___isOnScreen_10);
		return L_16;
	}
}
// System.Int32 Procrastinate.ClockBehaviour::get_VisibleClockCount()
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t264_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m903_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m904_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m905_MethodInfo_var;
extern "C" int32_t ClockBehaviour_get_VisibleClockCount_m726 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		Enumerator_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		Enumerator_get_Current_m904_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_MoveNext_m905_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ClockBehaviour_t207 * V_1 = {0};
	Enumerator_t264  V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		List_1_t211 * L_0 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10;
		NullCheck(L_0);
		Enumerator_t264  L_1 = List_1_GetEnumerator_m903(L_0, /*hidden argument*/List_1_GetEnumerator_m903_MethodInfo_var);
		V_2 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0012:
		{
			ClockBehaviour_t207 * L_2 = Enumerator_get_Current_m904((&V_2), /*hidden argument*/Enumerator_get_Current_m904_MethodInfo_var);
			V_1 = L_2;
			ClockBehaviour_t207 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = (L_3->___isOnScreen_10);
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_0025:
		{
			int32_t L_5 = V_0;
			V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		}

IL_0029:
		{
			bool L_6 = Enumerator_MoveNext_m905((&V_2), /*hidden argument*/Enumerator_MoveNext_m905_MethodInfo_var);
			if (L_6)
			{
				goto IL_0012;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x46, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_t264  L_7 = V_2;
		Enumerator_t264  L_8 = L_7;
		Object_t * L_9 = Box(Enumerator_t264_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_9);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0046:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Rigidbody2D Procrastinate.ClockBehaviour::get_body()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t49_m543_MethodInfo_var;
extern "C" Rigidbody2D_t49 * ClockBehaviour_get_body_m727 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody2D_t49_m543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t49 * L_0 = Component_GetComponent_TisRigidbody2D_t49_m543(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t49_m543_MethodInfo_var);
		return L_0;
	}
}
// UnityEngine.CircleCollider2D Procrastinate.ClockBehaviour::get_collisionBody()
extern const MethodInfo* Component_GetComponent_TisCircleCollider2D_t259_m906_MethodInfo_var;
extern "C" CircleCollider2D_t259 * ClockBehaviour_get_collisionBody_m728 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCircleCollider2D_t259_m906_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	{
		CircleCollider2D_t259 * L_0 = Component_GetComponent_TisCircleCollider2D_t259_m906(__this, /*hidden argument*/Component_GetComponent_TisCircleCollider2D_t259_m906_MethodInfo_var);
		return L_0;
	}
}
// Procrastinate.ClockBehaviour Procrastinate.ClockBehaviour::New()
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// Procrastinate.ClockSpawner
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawnerMethodDeclarations.h"
extern TypeInfo* GameObject_t11_il2cpp_TypeInfo_var;
extern TypeInfo* ClockBehaviour_t207_il2cpp_TypeInfo_var;
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCircleCollider2D_t259_m908_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody2D_t49_m911_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSpriteRenderer_t258_m918_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t258_m898_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisClockBehaviour_t207_m921_MethodInfo_var;
extern "C" ClockBehaviour_t207 * ClockBehaviour_New_m729 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ClockBehaviour_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		GameObject_AddComponent_TisCircleCollider2D_t259_m908_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		GameObject_AddComponent_TisRigidbody2D_t49_m911_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483719);
		GameObject_AddComponent_TisSpriteRenderer_t258_m918_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		Component_GetComponent_TisSpriteRenderer_t258_m898_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483712);
		GameObject_AddComponent_TisClockBehaviour_t207_m921_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t11 * V_0 = {0};
	CircleCollider2D_t259 * V_1 = {0};
	Rigidbody2D_t49 * V_2 = {0};
	SpriteRenderer_t258 * V_3 = {0};
	ClockBehaviour_t207 * V_4 = {0};
	{
		GameObject_t11 * L_0 = (GameObject_t11 *)il2cpp_codegen_object_new (GameObject_t11_il2cpp_TypeInfo_var);
		GameObject__ctor_m907(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t11 * L_1 = V_0;
		NullCheck(L_1);
		CircleCollider2D_t259 * L_2 = GameObject_AddComponent_TisCircleCollider2D_t259_m908(L_1, /*hidden argument*/GameObject_AddComponent_TisCircleCollider2D_t259_m908_MethodInfo_var);
		V_1 = L_2;
		CircleCollider2D_t259 * L_3 = V_1;
		ClockBehaviour_t207 * L_4 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		NullCheck(L_4);
		CircleCollider2D_t259 * L_5 = ClockBehaviour_get_collisionBody_m728(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = CircleCollider2D_get_radius_m909(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		CircleCollider2D_set_radius_m910(L_3, L_6, /*hidden argument*/NULL);
		GameObject_t11 * L_7 = V_0;
		NullCheck(L_7);
		Rigidbody2D_t49 * L_8 = GameObject_AddComponent_TisRigidbody2D_t49_m911(L_7, /*hidden argument*/GameObject_AddComponent_TisRigidbody2D_t49_m911_MethodInfo_var);
		V_2 = L_8;
		Rigidbody2D_t49 * L_9 = V_2;
		ClockBehaviour_t207 * L_10 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		NullCheck(L_10);
		Rigidbody2D_t49 * L_11 = ClockBehaviour_get_body_m727(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12 = Rigidbody2D_get_mass_m912(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_set_mass_m913(L_9, L_12, /*hidden argument*/NULL);
		Rigidbody2D_t49 * L_13 = V_2;
		ClockBehaviour_t207 * L_14 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		NullCheck(L_14);
		Rigidbody2D_t49 * L_15 = ClockBehaviour_get_body_m727(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		float L_16 = Rigidbody2D_get_angularDrag_m914(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_set_angularDrag_m915(L_13, L_16, /*hidden argument*/NULL);
		Rigidbody2D_t49 * L_17 = V_2;
		ClockBehaviour_t207 * L_18 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		NullCheck(L_18);
		Rigidbody2D_t49 * L_19 = ClockBehaviour_get_body_m727(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		float L_20 = Rigidbody2D_get_drag_m916(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody2D_set_drag_m917(L_17, L_20, /*hidden argument*/NULL);
		GameObject_t11 * L_21 = V_0;
		NullCheck(L_21);
		SpriteRenderer_t258 * L_22 = GameObject_AddComponent_TisSpriteRenderer_t258_m918(L_21, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t258_m918_MethodInfo_var);
		V_3 = L_22;
		SpriteRenderer_t258 * L_23 = V_3;
		ClockBehaviour_t207 * L_24 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		NullCheck(L_24);
		SpriteRenderer_t258 * L_25 = Component_GetComponent_TisSpriteRenderer_t258_m898(L_24, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t258_m898_MethodInfo_var);
		NullCheck(L_25);
		Sprite_t244 * L_26 = SpriteRenderer_get_sprite_m919(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		SpriteRenderer_set_sprite_m920(L_23, L_26, /*hidden argument*/NULL);
		SpriteRenderer_t258 * L_27 = V_3;
		int32_t L_28 = Random_Range_m506(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_29 = Random_Range_m506(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_30 = Random_Range_m506(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		Color_t203  L_31 = {0};
		Color__ctor_m896(&L_31, ((float)((float)(((float)L_28))/(float)(10.0f))), ((float)((float)(((float)L_29))/(float)(10.0f))), ((float)((float)(((float)L_30))/(float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_27);
		SpriteRenderer_set_color_m897(L_27, L_31, /*hidden argument*/NULL);
		GameObject_t11 * L_32 = V_0;
		NullCheck(L_32);
		ClockBehaviour_t207 * L_33 = GameObject_AddComponent_TisClockBehaviour_t207_m921(L_32, /*hidden argument*/GameObject_AddComponent_TisClockBehaviour_t207_m921_MethodInfo_var);
		V_4 = L_33;
		ClockBehaviour_t207 * L_34 = V_4;
		int32_t L_35 = Random_Range_m506(NULL /*static, unused*/, 0, ((int32_t)30), /*hidden argument*/NULL);
		NullCheck(L_34);
		L_34->___MaxTimeOffScreen_12 = (((float)L_35));
		ClockBehaviour_t207 * L_36 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		Vector3_t42  L_37 = ClockSpawner_get_SpawnPoint_m746(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->___startingPoint_6 = L_37;
		ClockBehaviour_t207 * L_38 = V_4;
		NullCheck(L_38);
		ClockBehaviour_Reset_m740(L_38, /*hidden argument*/NULL);
		ClockBehaviour_t207 * L_39 = V_4;
		return L_39;
	}
}
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour> Procrastinate.ClockBehaviour::CheckVisibleClocks()
// System.Predicate`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Predicate_1_gen_0MethodDeclarations.h"
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t265_il2cpp_TypeInfo_var;
extern const MethodInfo* ClockBehaviour_IsVisible_m725_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m922_MethodInfo_var;
extern const MethodInfo* List_1_FindAll_m923_MethodInfo_var;
extern "C" List_1_t211 * ClockBehaviour_CheckVisibleClocks_m730 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		Predicate_1_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		ClockBehaviour_IsVisible_m725_MethodInfo_var = il2cpp_codegen_method_info_from_index(74);
		Predicate_1__ctor_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483723);
		List_1_FindAll_m923_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		List_1_t211 * L_0 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10;
		IntPtr_t L_1 = { (void*)ClockBehaviour_IsVisible_m725_MethodInfo_var };
		Predicate_1_t265 * L_2 = (Predicate_1_t265 *)il2cpp_codegen_object_new (Predicate_1_t265_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m922(L_2, NULL, L_1, /*hidden argument*/Predicate_1__ctor_m922_MethodInfo_var);
		NullCheck(L_0);
		List_1_t211 * L_3 = List_1_FindAll_m923(L_0, L_2, /*hidden argument*/List_1_FindAll_m923_MethodInfo_var);
		return L_3;
	}
}
// System.Void Procrastinate.ClockBehaviour::Start()
extern TypeInfo* ClockBehaviour_t207_il2cpp_TypeInfo_var;
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern "C" void ClockBehaviour_Start_m731 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClockBehaviour_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	{
		ClockBehaviour_t207 * L_0 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		bool L_1 = Object_op_Equality_m473(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_t11 * L_2 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m924(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7 = __this;
		__this->___isOriginal_17 = 1;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		List_1_t211 * L_3 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10;
		NullCheck(L_3);
		VirtActionInvoker1< ClockBehaviour_t207 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Add(!0) */, L_3, __this);
		float L_4 = (__this->___MaxTimeOffScreen_12);
		if ((!(((float)L_4) < ((float)(2.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		__this->___MaxTimeOffScreen_12 = (2.0f);
	}

IL_004e:
	{
		ClockBehaviour_t207 * L_5 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		bool L_6 = Object_op_Inequality_m548(NULL /*static, unused*/, L_5, __this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		float L_7 = (__this->___MaxTimeOffScreen_12);
		float L_8 = Random_Range_m687(NULL /*static, unused*/, (0.0f), L_7, /*hidden argument*/NULL);
		__this->___lifeSpan_18 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		Vector3_t42  L_9 = ClockSpawner_get_SpawnPoint_m746(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startingPoint_6 = L_9;
	}

IL_007f:
	{
		Vector3_t42  L_10 = (__this->___startingPoint_6);
		Vector3_t42  L_11 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_12 = Vector3_op_Equality_m925(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00bf;
		}
	}
	{
		Transform_t41 * L_13 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t42  L_14 = Transform_get_position_m518(L_13, /*hidden argument*/NULL);
		Vector3_t42  L_15 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_16 = Vector3_op_Inequality_m584(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bf;
		}
	}
	{
		Transform_t41 * L_17 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t42  L_18 = Transform_get_position_m518(L_17, /*hidden argument*/NULL);
		__this->___startingPoint_6 = L_18;
	}

IL_00bf:
	{
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::OnDestroy()
// RMX.Singletons/ASingleton`1<Procrastinate.ClockSpawner>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_2MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t210_il2cpp_TypeInfo_var;
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get_IsInitialized_m926_MethodInfo_var;
extern "C" void ClockBehaviour_OnDestroy_m732 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		ASingleton_1_get_IsInitialized_m926_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483725);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t210_il2cpp_TypeInfo_var);
		bool L_0 = ASingleton_1_get_IsInitialized_m926(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get_IsInitialized_m926_MethodInfo_var);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		List_1_t211 * L_1 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10;
		NullCheck(L_1);
		VirtFuncInvoker1< bool, ClockBehaviour_t207 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::Remove(!0) */, L_1, __this);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::Update()
extern "C" void ClockBehaviour_Update_m733 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isOriginal_17);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = (__this->___lifeSpan_18);
		float L_2 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lifeSpan_18 = ((float)((float)L_1-(float)L_2));
	}

IL_001d:
	{
		bool L_3 = (__this->___isOnScreen_10);
		if (L_3)
		{
			goto IL_0077;
		}
	}
	{
		float L_4 = (__this->___lifeSpan_18);
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		GameObject_t11 * L_5 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		Object_Destroy_m690(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_0048:
	{
		float L_6 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___fellOffAtTime_11);
		float L_8 = (__this->___OffScreenLimit_13);
		if ((!(((float)((float)((float)L_6-(float)L_7))) > ((float)L_8))))
		{
			goto IL_0077;
		}
	}
	{
		Vector2_t44  L_9 = (__this->___exitVelocity_8);
		ClockBehaviour_ResetWithVelocity_m738(__this, L_9, /*hidden argument*/NULL);
		bool L_10 = ClockBehaviour_get_willBeOnScreen_m734(__this, /*hidden argument*/NULL);
		__this->___isOnScreen_10 = L_10;
	}

IL_0077:
	{
		return;
	}
}
// System.Boolean Procrastinate.ClockBehaviour::get_willBeOnScreen()
extern "C" bool ClockBehaviour_get_willBeOnScreen_m734 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void Procrastinate.ClockBehaviour::OnBecameInvisible()
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern "C" void ClockBehaviour_OnBecameInvisible_m735 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	ClockBehaviour_t207 * G_B2_0 = {0};
	ClockBehaviour_t207 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	ClockBehaviour_t207 * G_B3_1 = {0};
	{
		__this->___isOnScreen_10 = 0;
		float L_0 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___fellOffAtTime_11 = L_0;
		bool L_1 = GameController_get_isFirstPlay_m807(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		float L_2 = (__this->___MaxTimeOffScreen_12);
		float L_3 = Random_Range_m687(NULL /*static, unused*/, (((float)G_B3_0)), L_2, /*hidden argument*/NULL);
		NullCheck(G_B3_1);
		G_B3_1->___OffScreenLimit_13 = L_3;
		Transform_t41 * L_4 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t42  L_5 = Transform_get_position_m518(L_4, /*hidden argument*/NULL);
		__this->___pointOfExit_19 = L_5;
		Rigidbody2D_t49 * L_6 = ClockBehaviour_get_body_m727(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_t44  L_7 = Rigidbody2D_get_velocity_m550(L_6, /*hidden argument*/NULL);
		__this->___exitVelocity_8 = L_7;
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::OnBecameVisible()
extern "C" void ClockBehaviour_OnBecameVisible_m736 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	{
		__this->___isOnScreen_10 = 1;
		return;
	}
}
// UnityEngine.Bounds Procrastinate.ClockBehaviour::GetScreenSizeInWorld()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
extern TypeInfo* Bounds_t260_il2cpp_TypeInfo_var;
extern "C" Bounds_t260  ClockBehaviour_GetScreenSizeInWorld_m737 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t85 * V_0 = {0};
	Bounds_t260  V_1 = {0};
	{
		Camera_t85 * L_0 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Initobj (Bounds_t260_il2cpp_TypeInfo_var, (&V_1));
		Camera_t85 * L_1 = V_0;
		int32_t L_2 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_4 = {0};
		Vector3__ctor_m537(&L_4, (((float)L_2)), (((float)L_3)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t42  L_5 = Camera_ScreenToWorldPoint_m927(L_1, L_4, /*hidden argument*/NULL);
		Bounds_set_size_m928((&V_1), L_5, /*hidden argument*/NULL);
		Camera_t85 * L_6 = V_0;
		int32_t L_7 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_9 = {0};
		Vector3__ctor_m537(&L_9, (((float)L_7)), (((float)L_8)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t42  L_10 = Camera_ScreenToWorldPoint_m927(L_6, L_9, /*hidden argument*/NULL);
		Bounds_set_max_m929((&V_1), L_10, /*hidden argument*/NULL);
		Camera_t85 * L_11 = V_0;
		Vector3_t42  L_12 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t42  L_13 = Camera_ScreenToWorldPoint_m927(L_11, L_12, /*hidden argument*/NULL);
		Bounds_set_min_m930((&V_1), L_13, /*hidden argument*/NULL);
		Bounds_t260  L_14 = V_1;
		return L_14;
	}
}
// System.Void Procrastinate.ClockBehaviour::ResetWithVelocity(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" void ClockBehaviour_ResetWithVelocity_m738 (ClockBehaviour_t207 * __this, Vector2_t44  ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t260  V_0 = {0};
	Vector2_t44  V_1 = {0};
	Vector2_t44  V_2 = {0};
	Vector2_t44  V_3 = {0};
	Vector3_t42  V_4 = {0};
	{
		Bounds_t260  L_0 = ClockBehaviour_GetScreenSizeInWorld_m737(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t49 * L_1 = ClockBehaviour_get_body_m727(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t44  L_2 = Rigidbody2D_get_velocity_m550(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Vector2_get_magnitude_m931((&V_1), /*hidden argument*/NULL);
		float L_4 = (__this->___maxVelocity_14);
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_003d;
		}
	}
	{
		Vector2_t44  L_5 = Vector2_get_normalized_m593((&___direction), /*hidden argument*/NULL);
		float L_6 = (__this->___maxVelocity_14);
		Vector2_t44  L_7 = Vector2_op_Multiply_m932(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_00c0;
	}

IL_003d:
	{
		float L_8 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_9 = fabsf(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Vector2_t44  L_10 = Physics2D_get_gravity_m933(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = ((&V_2)->___x_1);
		float L_12 = fabsf(L_11);
		if ((!(((float)L_9) < ((float)L_12))))
		{
			goto IL_0070;
		}
	}
	{
		Vector3_t42 * L_13 = &(__this->___pointOfExit_19);
		L_13->___x_1 = (0.0f);
	}

IL_0070:
	{
		float L_14 = ((&V_1)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_15 = fabsf(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Vector2_t44  L_16 = Physics2D_get_gravity_m933(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->___y_2);
		float L_18 = fabsf(L_17);
		if ((!(((float)L_15) < ((float)L_18))))
		{
			goto IL_00c0;
		}
	}
	{
		Vector3_t42 * L_19 = &(__this->___pointOfExit_19);
		Vector3_t42  L_20 = Bounds_get_min_m934((&V_0), /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = ((&V_4)->___y_2);
		CircleCollider2D_t259 * L_22 = ClockBehaviour_get_collisionBody_m728(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23 = CircleCollider2D_get_radius_m909(L_22, /*hidden argument*/NULL);
		L_19->___y_2 = ((float)((float)L_21-(float)((float)((float)L_23*(float)(2.0f)))));
	}

IL_00c0:
	{
		Rigidbody2D_t49 * L_24 = ClockBehaviour_get_body_m727(__this, /*hidden argument*/NULL);
		Vector2_t44  L_25 = V_1;
		NullCheck(L_24);
		Rigidbody2D_set_velocity_m556(L_24, L_25, /*hidden argument*/NULL);
		Transform_t41 * L_26 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3_t42  L_27 = (__this->___pointOfExit_19);
		Vector3_t42  L_28 = Vector3_op_UnaryNegation_m659(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_position_m532(L_26, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::ResetWithPosition(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void ClockBehaviour_ResetWithPosition_m739 (ClockBehaviour_t207 * __this, Vector3_t42  ___position, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = ___position;
		NullCheck(L_0);
		Transform_set_position_m532(L_0, L_1, /*hidden argument*/NULL);
		Rigidbody2D_t49 * L_2 = ClockBehaviour_get_body_m727(__this, /*hidden argument*/NULL);
		Vector2_t44  L_3 = Vector2_get_zero_m935(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m556(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.ClockBehaviour::Reset()
extern "C" void ClockBehaviour_Reset_m740 (ClockBehaviour_t207 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___startingPoint_6);
		ClockBehaviour_ResetWithPosition_m739(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Procrastinate.ClockSpawner/SpawnMode
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawner_SpawnMode.h"
// Procrastinate.ClockSpawner/SpawnMode
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawner_SpawnModeMethodDeclarations.h"
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
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenterMethodDeclarations.h"
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
// System.Void Procrastinate.ClockSpawner::.ctor()
// RMX.Singletons/ASingleton`1<Procrastinate.ClockSpawner>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_2MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t210_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m936_MethodInfo_var;
extern "C" void ClockSpawner__ctor_m741 (ClockSpawner_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1__ctor_m936_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483726);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___firstLoad_11 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t210_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m936(__this, /*hidden argument*/ASingleton_1__ctor_m936_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.ClockSpawner::.cctor()
// System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
extern TypeInfo* List_1_t211_il2cpp_TypeInfo_var;
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m937_MethodInfo_var;
extern "C" void ClockSpawner__cctor_m742 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		List_1__ctor_m937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t211 * L_0 = (List_1_t211 *)il2cpp_codegen_object_new (List_1_t211_il2cpp_TypeInfo_var);
		List_1__ctor_m937(L_0, /*hidden argument*/List_1__ctor_m937_MethodInfo_var);
		((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10 = L_0;
		((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___forTouch_13 = 0;
		return;
	}
}
// Procrastinate.ClockSpawner/SpawnMode Procrastinate.ClockSpawner::get_spawnMode()
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern "C" int32_t ClockSpawner_get_spawnMode_m743 (ClockSpawner_t209 * __this, const MethodInfo* method)
{
	{
		GameController_t228 * L_0 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___ClockSpawnMode_32);
		return L_1;
	}
}
// System.Boolean Procrastinate.ClockSpawner::get_ShouldKillClocks()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern "C" bool ClockSpawner_get_ShouldKillClocks_m744 (ClockSpawner_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		float L_0 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (((int32_t)L_0));
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		List_1_t211 * L_1 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Count() */, L_1);
		int32_t L_3 = V_0;
		GameController_t228 * L_4 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___MaxNumberOfClocks_30);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0027:
	{
		GameController_t228 * L_7 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = (L_7->___MaxNumberOfClocks_30);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		return ((((int32_t)G_B3_1) > ((int32_t)G_B3_0))? 1 : 0);
	}
}
// System.Void Procrastinate.ClockSpawner::Update()
// Procrastinate.ClockSpawner
#include "AssemblyU2DCSharp_Procrastinate_ClockSpawnerMethodDeclarations.h"
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenterMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviourMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern "C" void ClockSpawner_Update_m745 (ClockSpawner_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		s_Il2CppMethodIntialized = true;
	}
	ClockBehaviour_t207 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ClockSpawner_get_spawnMode_m743(__this, /*hidden argument*/NULL);
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
			goto IL_00a0;
		}
	}
	{
		goto IL_013a;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		bool L_3 = GameCenter_HasPlayerAlreadyAchieved_m797(NULL /*static, unused*/, 8, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		int32_t L_4 = Input_get_touchCount_m590(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_009b;
		}
	}
	{
		bool L_5 = ClockSpawner_Spawn_m747(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = 4;
		Object_t * L_7 = Box(Event_t24_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ((int32_t)12);
		Object_t * L_9 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_8);
		RMXObject_DidCauseEvent_m84(__this, (Enum_t6 *)L_7, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		bool L_10 = ClockSpawner_get_ShouldKillClocks_m744(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		List_1_t211 * L_11 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Count() */, L_11);
		GameController_t228 * L_13 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = (L_13->___MaxNumberOfClocks_30);
		if ((((int32_t)L_12) <= ((int32_t)L_14)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_15 = 4;
		Object_t * L_16 = Box(Event_t24_il2cpp_TypeInfo_var, &L_15);
		int32_t L_17 = ((int32_t)13);
		Object_t * L_18 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_17);
		RMXObject_DidCauseEvent_m84(__this, (Enum_t6 *)L_16, L_18, /*hidden argument*/NULL);
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		List_1_t211 * L_19 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___clocks_10;
		NullCheck(L_19);
		ClockBehaviour_t207 * L_20 = (ClockBehaviour_t207 *)VirtFuncInvoker1< ClockBehaviour_t207 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Procrastinate.ClockBehaviour>::get_Item(System.Int32) */, L_19, 1);
		V_0 = L_20;
		ClockBehaviour_t207 * L_21 = V_0;
		NullCheck(L_21);
		GameObject_t11 * L_22 = Component_get_gameObject_m547(L_21, /*hidden argument*/NULL);
		Object_Destroy_m690(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
	}

IL_009b:
	{
		goto IL_013a;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		bool L_23 = GameCenter_HasPlayerAlreadyAchieved_m797(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0135;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		int32_t L_24 = Input_get_touchCount_m590(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_0135;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___forTouch_13 = 1;
		ClockBehaviour_t207 * L_25 = (__this->___inflatableClock_12);
		bool L_26 = Object_op_Implicit_m554(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_27 = 1;
		Object_t * L_28 = Box(Event_t221_il2cpp_TypeInfo_var, &L_27);
		RMXObject_WillBeginEvent_m77(__this, (Enum_t6 *)L_28, /*hidden argument*/NULL);
		ClockBehaviour_t207 * L_29 = ClockBehaviour_New_m729(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___inflatableClock_12 = L_29;
		int32_t L_30 = 1;
		Object_t * L_31 = Box(Event_t221_il2cpp_TypeInfo_var, &L_30);
		ClockBehaviour_t207 * L_32 = (__this->___inflatableClock_12);
		RMXObject_DidFinishEvent_m83(__this, (Enum_t6 *)L_31, L_32, /*hidden argument*/NULL);
		ClockBehaviour_t207 * L_33 = (__this->___inflatableClock_12);
		NullCheck(L_33);
		Transform_t41 * L_34 = Component_get_transform_m519(L_33, /*hidden argument*/NULL);
		Vector3_t42  L_35 = {0};
		Vector3__ctor_m537(&L_35, (0.1f), (0.1f), (0.1f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_m559(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0135;
	}

IL_011e:
	{
		ClockBehaviour_t207 * L_36 = (__this->___inflatableClock_12);
		NullCheck(L_36);
		bool L_37 = ClockBehaviour_get_didPop_m723(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0135;
		}
	}
	{
		__this->___inflatableClock_12 = (ClockBehaviour_t207 *)NULL;
	}

IL_0135:
	{
		goto IL_013a;
	}

IL_013a:
	{
		return;
	}
}
// UnityEngine.Vector3 Procrastinate.ClockSpawner::get_SpawnPoint()
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* ClockBehaviour_t207_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  ClockSpawner_get_SpawnPoint_m746 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ClockBehaviour_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	Exception_t154 * V_1 = {0};
	Ray_t89  V_2 = {0};
	Vector3_t42  V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
				int32_t L_0 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___forTouch_13;
				if ((((int32_t)L_0) <= ((int32_t)0)))
				{
					goto IL_0066;
				}
			}

IL_000b:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
				int32_t L_1 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___forTouch_13;
				IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
				int32_t L_2 = Input_get_touchCount_m590(NULL /*static, unused*/, /*hidden argument*/NULL);
				if ((((int32_t)L_1) >= ((int32_t)L_2)))
				{
					goto IL_0066;
				}
			}

IL_001a:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
				TouchU5BU5D_t187* L_3 = Input_get_touches_m591(NULL /*static, unused*/, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
				int32_t L_4 = ((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___forTouch_13;
				NullCheck(L_3);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
				Vector2_t44  L_5 = Touch_get_position_m592(((Touch_t188 *)(Touch_t188 *)SZArrayLdElema(L_3, L_4, sizeof(Touch_t188 ))), /*hidden argument*/NULL);
				Vector3_t42  L_6 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
				V_0 = L_6;
				Camera_t85 * L_7 = Camera_get_current_m938(NULL /*static, unused*/, /*hidden argument*/NULL);
				float L_8 = ((&V_0)->___x_1);
				float L_9 = ((&V_0)->___y_2);
				Vector3_t42  L_10 = {0};
				Vector3__ctor_m537(&L_10, L_8, L_9, (0.0f), /*hidden argument*/NULL);
				NullCheck(L_7);
				Ray_t89  L_11 = Camera_ScreenPointToRay_m635(L_7, L_10, /*hidden argument*/NULL);
				V_2 = L_11;
				Vector3_t42  L_12 = Ray_get_origin_m641((&V_2), /*hidden argument*/NULL);
				V_0 = L_12;
				Vector3_t42  L_13 = V_0;
				V_3 = L_13;
				IL2CPP_LEAVE(0xC2, FINALLY_0091);
			}

IL_0066:
			{
				IL2CPP_LEAVE(0xC0, FINALLY_0091);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_006b;
			throw e;
		}

CATCH_006b:
		{ // begin catch(System.Exception)
			{
				V_1 = ((Exception_t154 *)__exception_local);
				int32_t L_14 = 3;
				Object_t * L_15 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_14);
				Exception_t154 * L_16 = V_1;
				NullCheck(L_16);
				String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_16);
				IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
				bool L_18 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_15, L_17, /*hidden argument*/NULL);
				if (!L_18)
				{
					goto IL_008c;
				}
			}

IL_0082:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
				String_t* L_19 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
				Debug_Log_m454(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			}

IL_008c:
			{
				IL2CPP_LEAVE(0xC0, FINALLY_0091);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		ClockBehaviour_t207 * L_20 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		NullCheck(L_20);
		Vector3_t42  L_21 = (L_20->___startingPoint_6);
		V_0 = L_21;
		Vector3_t42 * L_22 = (&V_0);
		float L_23 = (L_22->___y_2);
		ClockBehaviour_t207 * L_24 = ((ClockBehaviour_t207_StaticFields*)ClockBehaviour_t207_il2cpp_TypeInfo_var->static_fields)->___original_7;
		NullCheck(L_24);
		CircleCollider2D_t259 * L_25 = ClockBehaviour_get_collisionBody_m728(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		float L_26 = CircleCollider2D_get_radius_m909(L_25, /*hidden argument*/NULL);
		L_22->___y_2 = ((float)((float)L_23+(float)((float)((float)L_26*(float)(2.0f)))));
		IL2CPP_END_FINALLY(145)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0xC2, IL_00c2)
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00c0:
	{
		Vector3_t42  L_27 = V_0;
		return L_27;
	}

IL_00c2:
	{
		Vector3_t42  L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Procrastinate.ClockSpawner::Spawn()
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* ClockSpawner_t209_il2cpp_TypeInfo_var;
extern "C" bool ClockSpawner_Spawn_m747 (ClockSpawner_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		ClockSpawner_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___firstLoad_11);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->___firstLoad_11 = 0;
		return 0;
	}

IL_0014:
	{
		GameController_t228 * L_1 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameController_ChanceGiven_m805(L_1, 8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = 0;
		Object_t * L_4 = Box(Event_t221_il2cpp_TypeInfo_var, &L_3);
		RMXObject_WillBeginEvent_m77(__this, (Enum_t6 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		int32_t L_5 = Input_get_touchCount_m590(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = Random_Range_m506(NULL /*static, unused*/, 1, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ClockSpawner_t209_il2cpp_TypeInfo_var);
		((ClockSpawner_t209_StaticFields*)ClockSpawner_t209_il2cpp_TypeInfo_var->static_fields)->___forTouch_13 = L_7;
		ClockBehaviour_New_m729(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = 0;
		Object_t * L_9 = Box(Event_t221_il2cpp_TypeInfo_var, &L_8);
		RMXObject_DidFinishEvent_m79(__this, (Enum_t6 *)L_9, /*hidden argument*/NULL);
		return 1;
	}

IL_0056:
	{
		return 0;
	}
}
// System.Void Procrastinate.ClockSpawner::OnEventDidEnd(System.Enum,System.Object)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern "C" void ClockSpawner_OnEventDidEnd_m748 (ClockSpawner_t209 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 3;
		Object_t * L_2 = Box(Event_t24_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		GameController_t228 * L_4 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___ClockSpawnMode_32);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		GameController_t228 * L_6 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->___ClockSpawnMode_32 = 0;
		ClockSpawner_Spawn_m747(__this, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0038:
	{
		GameController_t228 * L_7 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___ClockSpawnMode_32 = 1;
	}

IL_0043:
	{
		ClockBehaviour_CheckVisibleClocks_m730(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// Procrastinate.Wychd
#include "AssemblyU2DCSharp_Procrastinate_Wychd.h"
// Procrastinate.Wychd
#include "AssemblyU2DCSharp_Procrastinate_WychdMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Void Procrastinate.Wychd::.ctor()
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
extern TypeInfo* List_1_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m448_MethodInfo_var;
extern "C" void Wychd__ctor_m749 (Wychd_t212 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		List_1__ctor_m448_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t14_il2cpp_TypeInfo_var);
		List_1__ctor_m448(__this, /*hidden argument*/List_1__ctor_m448_MethodInfo_var);
		return;
	}
}
// Procrastinate.DataReader/<GetActivities>c__AnonStorey2
#include "AssemblyU2DCSharp_Procrastinate_DataReader_U3CGetActivitiesU.h"
// Procrastinate.DataReader/<GetActivities>c__AnonStorey2
#include "AssemblyU2DCSharp_Procrastinate_DataReader_U3CGetActivitiesUMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Procrastinate.DataReader
#include "AssemblyU2DCSharp_Procrastinate_DataReaderMethodDeclarations.h"
// System.Void Procrastinate.DataReader/<GetActivities>c__AnonStorey2::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CGetActivitiesU3Ec__AnonStorey2__ctor_m750 (U3CGetActivitiesU3Ec__AnonStorey2_t213 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.DataReader/<GetActivities>c__AnonStorey2::<>m__0(System.Collections.Generic.List`1<System.String>)
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Procrastinate.DataReader
#include "AssemblyU2DCSharp_Procrastinate_DataReaderMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral105;
extern Il2CppCodeGenString* _stringLiteral106;
extern Il2CppCodeGenString* _stringLiteral107;
extern Il2CppCodeGenString* _stringLiteral108;
extern Il2CppCodeGenString* _stringLiteral109;
extern Il2CppCodeGenString* _stringLiteral110;
extern "C" bool U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m751 (U3CGetActivitiesU3Ec__AnonStorey2_t213 * __this, List_1_t14 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral105 = il2cpp_codegen_string_literal_from_index(105);
		_stringLiteral106 = il2cpp_codegen_string_literal_from_index(106);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		_stringLiteral108 = il2cpp_codegen_string_literal_from_index(108);
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t154 * V_1 = {0};
	String_t* V_2 = {0};
	bool V_3 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			List_1_t14 * L_0 = ___match;
			NullCheck(L_0);
			String_t* L_1 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_0, 3);
			NullCheck(L_1);
			String_t* L_2 = String_ToUpper_m939(L_1, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_3 = String_op_Equality_m421(NULL /*static, unused*/, L_2, _stringLiteral105, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_009c;
			}
		}

IL_001b:
		{
			List_1_t14 * L_4 = ___match;
			NullCheck(L_4);
			String_t* L_5 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_4, 2);
			float L_6 = (__this->___inTime_0);
			bool L_7 = DataReader_IsWithinTime_m754(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			bool L_8 = V_0;
			if (!L_8)
			{
				goto IL_0078;
			}
		}

IL_0034:
		{
			String_t* L_9 = (__this->___log_1);
			V_2 = L_9;
			ObjectU5BU5D_t148* L_10 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 5));
			String_t* L_11 = V_2;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
			ArrayElementTypeCheck (L_10, L_11);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 0, sizeof(Object_t *))) = (Object_t *)L_11;
			ObjectU5BU5D_t148* L_12 = L_10;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
			ArrayElementTypeCheck (L_12, _stringLiteral106);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral106;
			ObjectU5BU5D_t148* L_13 = L_12;
			List_1_t14 * L_14 = ___match;
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_14, 2);
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
			ArrayElementTypeCheck (L_13, L_15);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 2, sizeof(Object_t *))) = (Object_t *)L_15;
			ObjectU5BU5D_t148* L_16 = L_13;
			NullCheck(L_16);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 3);
			ArrayElementTypeCheck (L_16, _stringLiteral107);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral107;
			ObjectU5BU5D_t148* L_17 = L_16;
			bool L_18 = V_0;
			bool L_19 = L_18;
			Object_t * L_20 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_19);
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
			ArrayElementTypeCheck (L_17, L_20);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4, sizeof(Object_t *))) = (Object_t *)L_20;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m422(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			__this->___log_1 = L_21;
			goto IL_0095;
		}

IL_0078:
		{
			String_t* L_22 = (__this->___log_1);
			List_1_t14 * L_23 = ___match;
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_23, 2);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_25 = String_Concat_m440(NULL /*static, unused*/, L_22, _stringLiteral108, L_24, /*hidden argument*/NULL);
			__this->___log_1 = L_25;
		}

IL_0095:
		{
			bool L_26 = V_0;
			V_3 = L_26;
			goto IL_00ee;
		}

IL_009c:
		{
			String_t* L_27 = (__this->___log_1);
			List_1_t14 * L_28 = ___match;
			NullCheck(L_28);
			String_t* L_29 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_28, 2);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_30 = String_Concat_m440(NULL /*static, unused*/, L_27, _stringLiteral109, L_29, /*hidden argument*/NULL);
			__this->___log_1 = L_30;
			V_3 = 0;
			goto IL_00ee;
		}

IL_00c0:
		{
			; // IL_00c0: leave IL_00ee
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t154 *)__exception_local);
			String_t* L_31 = (__this->___log_1);
			Exception_t154 * L_32 = V_1;
			NullCheck(L_32);
			String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_34 = String_Concat_m440(NULL /*static, unused*/, L_31, _stringLiteral110, L_33, /*hidden argument*/NULL);
			__this->___log_1 = L_34;
			V_3 = 0;
			goto IL_00ee;
		}

IL_00e9:
		{
			; // IL_00e9: leave IL_00ee
		}
	} // end catch (depth: 1)

IL_00ee:
	{
		bool L_35 = V_3;
		return L_35;
	}
}
// Procrastinate.DataReader
#include "AssemblyU2DCSharp_Procrastinate_DataReader.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// System.Predicate`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Predicate_1_gen_1.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
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
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
// UnityEngine.TextAsset Procrastinate.DataReader::get_Database()
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern "C" TextAsset_t138 * DataReader_get_Database_m752 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextAsset_t138 * L_1 = (TextAsset_t138 *)InterfaceFuncInvoker0< TextAsset_t138 * >::Invoke(3 /* UnityEngine.TextAsset RMX.IGameController::get_Database() */, IGameController_t3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Procrastinate.DataReader::TimeHMSToFloat(System.String,System.Char)
// System.String
#include "mscorlib_System_String.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern "C" float DataReader_TimeHMSToFloat_m753 (Object_t * __this /* static, unused */, String_t* ___time, uint16_t ___parser, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t35* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Exception_t154 * V_6 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringU5BU5D_t35* L_0 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)L_1;
		StringU5BU5D_t35* L_2 = L_0;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 1, sizeof(String_t*))) = (String_t*)L_3;
		StringU5BU5D_t35* L_4 = L_2;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2, sizeof(String_t*))) = (String_t*)L_5;
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
		uint16_t L_9 = String_get_Chars_m477(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		uint16_t L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_11 = Char_IsDigit_m940(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
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
		StringU5BU5D_t35* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		String_t** L_15 = ((String_t**)(String_t**)SZArrayLdElema(L_13, L_14, sizeof(String_t*)));
		uint16_t L_16 = V_2;
		uint16_t L_17 = L_16;
		Object_t * L_18 = Box(Char_t266_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m606(NULL /*static, unused*/, (*((String_t**)L_15)), L_18, /*hidden argument*/NULL);
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
		int32_t L_23 = String_get_Length_m478(L_22, /*hidden argument*/NULL);
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
		StringU5BU5D_t35* L_24 = V_0;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 2);
		int32_t L_25 = 2;
		float L_26 = Single_Parse_m511(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_24, L_25, sizeof(String_t*))), /*hidden argument*/NULL);
		V_5 = L_26;
		float L_27 = V_5;
		StringU5BU5D_t35* L_28 = V_0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		int32_t L_29 = 1;
		float L_30 = Single_Parse_m511(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_28, L_29, sizeof(String_t*))), /*hidden argument*/NULL);
		V_5 = ((float)((float)L_27+(float)((float)((float)L_30*(float)(60.0f)))));
		float L_31 = V_5;
		StringU5BU5D_t35* L_32 = V_0;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		int32_t L_33 = 0;
		float L_34 = Single_Parse_m511(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_32, L_33, sizeof(String_t*))), /*hidden argument*/NULL);
		V_5 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_34*(float)(60.0f)))*(float)(60.0f)))));
		goto IL_00bc;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b2;
		throw e;
	}

CATCH_00b2:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t154 *)__exception_local);
		Exception_t154 * L_35 = V_6;
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_35);
		goto IL_00bc;
	} // end catch (depth: 1)

IL_00bc:
	{
		float L_36 = V_5;
		return L_36;
	}
}
// System.Boolean Procrastinate.DataReader::IsWithinTime(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// Procrastinate.DataReader
#include "AssemblyU2DCSharp_Procrastinate_DataReaderMethodDeclarations.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern "C" bool DataReader_IsWithinTime_m754 (Object_t * __this /* static, unused */, String_t* ___time, float ___withinTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Exception_t154 * V_3 = {0};
	bool V_4 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___time;
			float L_1 = DataReader_TimeHMSToFloat_m753(NULL /*static, unused*/, L_0, ((int32_t)58), /*hidden argument*/NULL);
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
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_003f;
		throw e;
	}

CATCH_003f:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t154 *)__exception_local);
		Exception_t154 * L_8 = V_3;
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
		goto IL_0047;
	} // end catch (depth: 1)

IL_0047:
	{
		bool L_9 = V_4;
		return L_9;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Procrastinate.DataReader::GetActivities(System.Single)
// Procrastinate.DataReader/<GetActivities>c__AnonStorey2
#include "AssemblyU2DCSharp_Procrastinate_DataReader_U3CGetActivitiesUMethodDeclarations.h"
// RMX.CsvReader
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReaderMethodDeclarations.h"
// System.Predicate`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Predicate_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* U3CGetActivitiesU3Ec__AnonStorey2_t213_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t267_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m751_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m941_MethodInfo_var;
extern const MethodInfo* List_1_FindAll_m942_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral111;
extern Il2CppCodeGenString* _stringLiteral112;
extern Il2CppCodeGenString* _stringLiteral110;
extern "C" List_1_t137 * DataReader_GetActivities_m755 (Object_t * __this /* static, unused */, float ___inTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetActivitiesU3Ec__AnonStorey2_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Predicate_1_t267_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m751_MethodInfo_var = il2cpp_codegen_method_info_from_index(80);
		Predicate_1__ctor_m941_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483729);
		List_1_FindAll_m942_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		_stringLiteral112 = il2cpp_codegen_string_literal_from_index(112);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t137 * V_0 = {0};
	List_1_t137 * V_1 = {0};
	Exception_t154 * V_2 = {0};
	U3CGetActivitiesU3Ec__AnonStorey2_t213 * V_3 = {0};
	List_1_t137 * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_0 = (U3CGetActivitiesU3Ec__AnonStorey2_t213 *)il2cpp_codegen_object_new (U3CGetActivitiesU3Ec__AnonStorey2_t213_il2cpp_TypeInfo_var);
		U3CGetActivitiesU3Ec__AnonStorey2__ctor_m750(L_0, /*hidden argument*/NULL);
		V_3 = L_0;
		U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_1 = V_3;
		float L_2 = ___inTime;
		NullCheck(L_1);
		L_1->___inTime_0 = L_2;
		U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_3 = V_3;
		U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_4 = V_3;
		NullCheck(L_4);
		float L_5 = (L_4->___inTime_0);
		float L_6 = ((float)((float)L_5/(float)(60.0f)));
		Object_t * L_7 = Box(Single_t176_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m486(NULL /*static, unused*/, _stringLiteral111, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___log_1 = L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TextAsset_t138 * L_9 = DataReader_get_Database_m752(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
			List_1_t137 * L_10 = CsvReader_Read_m36(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			V_0 = L_10;
			List_1_t137 * L_11 = V_0;
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_12 = V_3;
			IntPtr_t L_13 = { (void*)U3CGetActivitiesU3Ec__AnonStorey2_U3CU3Em__0_m751_MethodInfo_var };
			Predicate_1_t267 * L_14 = (Predicate_1_t267 *)il2cpp_codegen_object_new (Predicate_1_t267_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m941(L_14, L_12, L_13, /*hidden argument*/Predicate_1__ctor_m941_MethodInfo_var);
			NullCheck(L_11);
			List_1_t137 * L_15 = List_1_FindAll_m942(L_11, L_14, /*hidden argument*/List_1_FindAll_m942_MethodInfo_var);
			V_1 = L_15;
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_16 = V_3;
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_17 = V_3;
			NullCheck(L_17);
			String_t* L_18 = (L_17->___log_1);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_19 = String_Concat_m423(NULL /*static, unused*/, L_18, _stringLiteral112, /*hidden argument*/NULL);
			NullCheck(L_16);
			L_16->___log_1 = L_19;
			int32_t L_20 = 6;
			Object_t * L_21 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_20);
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_22 = V_3;
			NullCheck(L_22);
			String_t* L_23 = (L_22->___log_1);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_24 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_21, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0082;
			}
		}

IL_0078:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_25 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		}

IL_0082:
		{
			List_1_t137 * L_26 = V_1;
			V_4 = L_26;
			goto IL_00e9;
		}

IL_008a:
		{
			; // IL_008a: leave IL_00e9
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_008f;
		throw e;
	}

CATCH_008f:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t154 *)__exception_local);
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_27 = V_3;
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_28 = V_3;
			NullCheck(L_28);
			String_t* L_29 = (L_28->___log_1);
			Exception_t154 * L_30 = V_2;
			NullCheck(L_30);
			String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_30);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_32 = String_Concat_m440(NULL /*static, unused*/, L_29, _stringLiteral110, L_31, /*hidden argument*/NULL);
			NullCheck(L_27);
			L_27->___log_1 = L_32;
			int32_t L_33 = 6;
			Object_t * L_34 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_33);
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_35 = V_3;
			NullCheck(L_35);
			String_t* L_36 = (L_35->___log_1);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_37 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_34, L_36, /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_00d8;
			}
		}

IL_00c2:
		{
			int32_t L_38 = 3;
			Object_t * L_39 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_38);
			U3CGetActivitiesU3Ec__AnonStorey2_t213 * L_40 = V_3;
			NullCheck(L_40);
			String_t* L_41 = (L_40->___log_1);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_42 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_39, L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_00e2;
			}
		}

IL_00d8:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_43 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		}

IL_00e2:
		{
			Exception_t154 * L_44 = V_2;
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_44);
			goto IL_00e9;
		}
	} // end catch (depth: 1)

IL_00e9:
	{
		List_1_t137 * L_45 = V_4;
		return L_45;
	}
}
// Procrastinate.Wychd Procrastinate.DataReader::GetActivityList(System.Single)
// Procrastinate.Wychd
#include "AssemblyU2DCSharp_Procrastinate_WychdMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Wychd_t212_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t268_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m943_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m944_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m945_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral111;
extern Il2CppCodeGenString* _stringLiteral113;
extern Il2CppCodeGenString* _stringLiteral110;
extern "C" Wychd_t212 * DataReader_GetActivityList_m756 (Object_t * __this /* static, unused */, float ___forTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Wychd_t212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Enumerator_t268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m943_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		Enumerator_get_Current_m944_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		Enumerator_MoveNext_m945_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Wychd_t212 * V_1 = {0};
	List_1_t137 * V_2 = {0};
	List_1_t14 * V_3 = {0};
	Enumerator_t268  V_4 = {0};
	Exception_t154 * V_5 = {0};
	Exception_t154 * V_6 = {0};
	Wychd_t212 * V_7 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		float L_0 = ___forTime;
		float L_1 = ((float)((float)L_0/(float)(60.0f)));
		Object_t * L_2 = Box(Single_t176_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m486(NULL /*static, unused*/, _stringLiteral111, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Wychd_t212 * L_4 = (Wychd_t212 *)il2cpp_codegen_object_new (Wychd_t212_il2cpp_TypeInfo_var);
		Wychd__ctor_m749(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			float L_5 = ___forTime;
			List_1_t137 * L_6 = DataReader_GetActivities_m755(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			List_1_t137 * L_7 = V_2;
			NullCheck(L_7);
			Enumerator_t268  L_8 = List_1_GetEnumerator_m943(L_7, /*hidden argument*/List_1_GetEnumerator_m943_MethodInfo_var);
			V_4 = L_8;
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0078;
			}

IL_0031:
			{
				List_1_t14 * L_9 = Enumerator_get_Current_m944((&V_4), /*hidden argument*/Enumerator_get_Current_m944_MethodInfo_var);
				V_3 = L_9;
			}

IL_0039:
			try
			{ // begin try (depth: 3)
				String_t* L_10 = V_0;
				List_1_t14 * L_11 = V_3;
				NullCheck(L_11);
				String_t* L_12 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_11, 1);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_13 = String_Concat_m440(NULL /*static, unused*/, L_10, _stringLiteral113, L_12, /*hidden argument*/NULL);
				V_0 = L_13;
				Wychd_t212 * L_14 = V_1;
				List_1_t14 * L_15 = V_3;
				NullCheck(L_15);
				String_t* L_16 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_15, 1);
				NullCheck(L_14);
				VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_14, L_16);
				goto IL_0078;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t154 *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
					goto CATCH_005e;
				throw e;
			}

CATCH_005e:
			{ // begin catch(System.Exception)
				V_5 = ((Exception_t154 *)__exception_local);
				String_t* L_17 = V_0;
				Exception_t154 * L_18 = V_5;
				NullCheck(L_18);
				String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_18);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_20 = String_Concat_m440(NULL /*static, unused*/, L_17, _stringLiteral110, L_19, /*hidden argument*/NULL);
				V_0 = L_20;
				goto IL_0078;
			} // end catch (depth: 3)

IL_0078:
			{
				bool L_21 = Enumerator_MoveNext_m945((&V_4), /*hidden argument*/Enumerator_MoveNext_m945_MethodInfo_var);
				if (L_21)
				{
					goto IL_0031;
				}
			}

IL_0084:
			{
				IL2CPP_LEAVE(0x96, FINALLY_0089);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_0089;
		}

FINALLY_0089:
		{ // begin finally (depth: 2)
			Enumerator_t268  L_22 = V_4;
			Enumerator_t268  L_23 = L_22;
			Object_t * L_24 = Box(Enumerator_t268_il2cpp_TypeInfo_var, &L_23);
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(137)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(137)
		{
			IL2CPP_JUMP_TBL(0x96, IL_0096)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_0096:
		{
			int32_t L_25 = 6;
			Object_t * L_26 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_25);
			String_t* L_27 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_28 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_26, L_27, /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_00b1;
			}
		}

IL_00a7:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_29 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		}

IL_00b1:
		{
			Wychd_t212 * L_30 = V_1;
			V_7 = L_30;
			goto IL_0107;
		}

IL_00b9:
		{
			; // IL_00b9: leave IL_0107
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00be;
		throw e;
	}

CATCH_00be:
	{ // begin catch(System.Exception)
		{
			V_6 = ((Exception_t154 *)__exception_local);
			String_t* L_31 = V_0;
			Exception_t154 * L_32 = V_6;
			NullCheck(L_32);
			String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_34 = String_Concat_m440(NULL /*static, unused*/, L_31, _stringLiteral110, L_33, /*hidden argument*/NULL);
			V_0 = L_34;
			int32_t L_35 = 6;
			Object_t * L_36 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_35);
			String_t* L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_38 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_36, L_37, /*hidden argument*/NULL);
			if (L_38)
			{
				goto IL_00f5;
			}
		}

IL_00e4:
		{
			int32_t L_39 = 3;
			Object_t * L_40 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_39);
			String_t* L_41 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_42 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_40, L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_00ff;
			}
		}

IL_00f5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_43 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		}

IL_00ff:
		{
			Exception_t154 * L_44 = V_6;
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_44);
			goto IL_0107;
		}
	} // end catch (depth: 1)

IL_0107:
	{
		Wychd_t212 * L_45 = V_7;
		return L_45;
	}
}
// Procrastinate.DebugHUD
#include "AssemblyU2DCSharp_Procrastinate_DebugHUD.h"
// Procrastinate.DebugHUD
#include "AssemblyU2DCSharp_Procrastinate_DebugHUDMethodDeclarations.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUDMethodDeclarations.h"
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
struct Object_t;
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedData.h"
// Declaration !!0 RMX.SavedData::Get<System.Single>(System.Object)
// !!0 RMX.SavedData::Get<System.Single>(System.Object)
extern "C" float SavedData_Get_TisSingle_t176_m946_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisSingle_t176_m946(__this /* static, unused */, p0, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisSingle_t176_m946_gshared)(__this /* static, unused */, p0, method)
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Boolean>(System.Object)
// !!0 RMX.SavedData::Get<System.Boolean>(System.Object)
extern "C" bool SavedData_Get_TisBoolean_t156_m949_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisBoolean_t156_m949(__this /* static, unused */, p0, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisBoolean_t156_m949_gshared)(__this /* static, unused */, p0, method)
// System.Void Procrastinate.DebugHUD::.ctor()
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUDMethodDeclarations.h"
extern "C" void DebugHUD__ctor_m757 (DebugHUD_t215 * __this, const MethodInfo* method)
{
	{
		DebugHUD__ctor_m14(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.DebugHUD::GetTime(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" String_t* DebugHUD_GetTime_m758 (DebugHUD_t215 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = {0};
	String_t* G_B3_0 = {0};
	{
		Object_t * L_0 = ___key;
		float L_1 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_0, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_4 = TextFormatter_TimeDescription_m114(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_001d:
	{
		String_t* L_5 = Single_ToString_m515((&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		StringU5BU5D_t35* L_6 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 5));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, _stringLiteral114);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 0, sizeof(String_t*))) = (String_t*)_stringLiteral114;
		StringU5BU5D_t35* L_7 = L_6;
		Object_t * L_8 = ___key;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, L_9);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 1, sizeof(String_t*))) = (String_t*)L_9;
		StringU5BU5D_t35* L_10 = L_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, _stringLiteral115);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, 2, sizeof(String_t*))) = (String_t*)_stringLiteral115;
		StringU5BU5D_t35* L_11 = L_10;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		ArrayElementTypeCheck (L_11, L_12);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 3, sizeof(String_t*))) = (String_t*)L_12;
		StringU5BU5D_t35* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, _stringLiteral9);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 4, sizeof(String_t*))) = (String_t*)_stringLiteral9;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m517(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Procrastinate.DebugHUD::Start()
extern "C" void DebugHUD_Start_m759 (DebugHUD_t215 * __this, const MethodInfo* method)
{
	{
		DebugHUD_Show_m17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.DebugHUD::get_DebugData()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern const Il2CppType* UserData_t253_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t6_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* SpawnMode_t208_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral116;
extern Il2CppCodeGenString* _stringLiteral117;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral118;
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral120;
extern "C" String_t* DebugHUD_get_DebugData_m760 (DebugHUD_t215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_0_0_0_var = il2cpp_codegen_type_from_index(124);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		Enum_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		SpawnMode_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	bool V_4 = false;
	Object_t * V_5 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral116;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(UserData_t253_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t6_il2cpp_TypeInfo_var);
		Array_t * L_1 = Enum_GetValues_m947(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Array::GetEnumerator() */, L_1);
		V_2 = L_2;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f7;
		}

IL_0020:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_3);
			V_1 = ((*(int32_t*)((int32_t*)UnBox (L_4, Int32_t151_il2cpp_TypeInfo_var))));
			int32_t L_5 = V_1;
			int32_t L_6 = L_5;
			Object_t * L_7 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_6);
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_7);
			NullCheck(L_8);
			bool L_9 = String_StartsWith_m948(L_8, _stringLiteral117, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0092;
			}
		}

IL_0046:
		{
			String_t* L_10 = V_0;
			V_3 = L_10;
			StringU5BU5D_t35* L_11 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 5));
			String_t* L_12 = V_3;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
			ArrayElementTypeCheck (L_11, L_12);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, 0, sizeof(String_t*))) = (String_t*)L_12;
			StringU5BU5D_t35* L_13 = L_11;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
			ArrayElementTypeCheck (L_13, _stringLiteral114);
			*((String_t**)(String_t**)SZArrayLdElema(L_13, 1, sizeof(String_t*))) = (String_t*)_stringLiteral114;
			StringU5BU5D_t35* L_14 = L_13;
			int32_t L_15 = V_1;
			int32_t L_16 = L_15;
			Object_t * L_17 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_17);
			String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_17);
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
			ArrayElementTypeCheck (L_14, L_18);
			*((String_t**)(String_t**)SZArrayLdElema(L_14, 2, sizeof(String_t*))) = (String_t*)L_18;
			StringU5BU5D_t35* L_19 = L_14;
			NullCheck(L_19);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
			ArrayElementTypeCheck (L_19, _stringLiteral118);
			*((String_t**)(String_t**)SZArrayLdElema(L_19, 3, sizeof(String_t*))) = (String_t*)_stringLiteral118;
			StringU5BU5D_t35* L_20 = L_19;
			int32_t L_21 = V_1;
			int32_t L_22 = L_21;
			Object_t * L_23 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_22);
			bool L_24 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, L_23, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
			V_4 = L_24;
			String_t* L_25 = Boolean_ToString_m950((&V_4), /*hidden argument*/NULL);
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 4);
			ArrayElementTypeCheck (L_20, L_25);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, 4, sizeof(String_t*))) = (String_t*)L_25;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m517(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			V_0 = L_26;
			goto IL_00f7;
		}

IL_0092:
		{
			int32_t L_27 = V_1;
			int32_t L_28 = L_27;
			Object_t * L_29 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_28);
			NullCheck(L_29);
			String_t* L_30 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_29);
			NullCheck(L_30);
			bool L_31 = String_StartsWith_m948(L_30, _stringLiteral119, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_00f7;
			}
		}

IL_00ac:
		{
			String_t* L_32 = V_0;
			V_3 = L_32;
			StringU5BU5D_t35* L_33 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 6));
			String_t* L_34 = V_3;
			NullCheck(L_33);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 0);
			ArrayElementTypeCheck (L_33, L_34);
			*((String_t**)(String_t**)SZArrayLdElema(L_33, 0, sizeof(String_t*))) = (String_t*)L_34;
			StringU5BU5D_t35* L_35 = L_33;
			NullCheck(L_35);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 1);
			ArrayElementTypeCheck (L_35, _stringLiteral114);
			*((String_t**)(String_t**)SZArrayLdElema(L_35, 1, sizeof(String_t*))) = (String_t*)_stringLiteral114;
			StringU5BU5D_t35* L_36 = L_35;
			int32_t L_37 = V_1;
			int32_t L_38 = L_37;
			Object_t * L_39 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_38);
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_39);
			NullCheck(L_36);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
			ArrayElementTypeCheck (L_36, L_40);
			*((String_t**)(String_t**)SZArrayLdElema(L_36, 2, sizeof(String_t*))) = (String_t*)L_40;
			StringU5BU5D_t35* L_41 = L_36;
			NullCheck(L_41);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 3);
			ArrayElementTypeCheck (L_41, _stringLiteral115);
			*((String_t**)(String_t**)SZArrayLdElema(L_41, 3, sizeof(String_t*))) = (String_t*)_stringLiteral115;
			StringU5BU5D_t35* L_42 = L_41;
			int32_t L_43 = V_1;
			int32_t L_44 = L_43;
			Object_t * L_45 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_44);
			float L_46 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_45, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
			String_t* L_47 = TextFormatter_TimeDescription_m114(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
			NullCheck(L_42);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 4);
			ArrayElementTypeCheck (L_42, L_47);
			*((String_t**)(String_t**)SZArrayLdElema(L_42, 4, sizeof(String_t*))) = (String_t*)L_47;
			StringU5BU5D_t35* L_48 = L_42;
			NullCheck(L_48);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 5);
			ArrayElementTypeCheck (L_48, _stringLiteral9);
			*((String_t**)(String_t**)SZArrayLdElema(L_48, 5, sizeof(String_t*))) = (String_t*)_stringLiteral9;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_49 = String_Concat_m517(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
			V_0 = L_49;
		}

IL_00f7:
		{
			Object_t * L_50 = V_2;
			NullCheck(L_50);
			bool L_51 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_50);
			if (L_51)
			{
				goto IL_0020;
			}
		}

IL_0102:
		{
			IL2CPP_LEAVE(0x11C, FINALLY_0107);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0107;
	}

FINALLY_0107:
	{ // begin finally (depth: 1)
		{
			Object_t * L_52 = V_2;
			V_5 = ((Object_t *)IsInst(L_52, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_53 = V_5;
			if (L_53)
			{
				goto IL_0114;
			}
		}

IL_0113:
		{
			IL2CPP_END_FINALLY(263)
		}

IL_0114:
		{
			Object_t * L_54 = V_5;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_54);
			IL2CPP_END_FINALLY(263)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(263)
	{
		IL2CPP_JUMP_TBL(0x11C, IL_011c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_011c:
	{
		String_t* L_55 = V_0;
		GameController_t228 * L_56 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_56);
		int32_t L_57 = (L_56->___ClockSpawnMode_32);
		int32_t L_58 = L_57;
		Object_t * L_59 = Box(SpawnMode_t208_il2cpp_TypeInfo_var, &L_58);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = String_Concat_m426(NULL /*static, unused*/, L_55, _stringLiteral120, L_59, /*hidden argument*/NULL);
		V_0 = L_60;
		String_t* L_61 = V_0;
		return L_61;
	}
}
// Procrastinate.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CDragObjectU.h"
// Procrastinate.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CDragObjectUMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// Procrastinate.DragRigidbody
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody.h"
// UnityEngine.SpringJoint2D
#include "UnityEngine_UnityEngine_SpringJoint2D.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.Joint2D
#include "UnityEngine_UnityEngine_Joint2DMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void Procrastinate.DragRigidbody/<DragObject>c__Iterator0::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CDragObjectU3Ec__Iterator0__ctor_m761 (U3CDragObjectU3Ec__Iterator0_t216 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Procrastinate.DragRigidbody/<DragObject>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m762 (U3CDragObjectU3Ec__Iterator0_t216 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object Procrastinate.DragRigidbody/<DragObject>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m763 (U3CDragObjectU3Ec__Iterator0_t216 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean Procrastinate.DragRigidbody/<DragObject>c__Iterator0::MoveNext()
// UnityEngine.Joint2D
#include "UnityEngine_UnityEngine_Joint2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool U3CDragObjectU3Ec__Iterator0_MoveNext_m764 (U3CDragObjectU3Ec__Iterator0_t216 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
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
		DragRigidbody_t217 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		SpringJoint2D_t220 * L_3 = (L_2->___m_SpringJoint_18);
		NullCheck(L_3);
		Rigidbody2D_t49 * L_4 = Joint2D_get_connectedBody_m951(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = Rigidbody2D_get_drag_m916(L_4, /*hidden argument*/NULL);
		__this->___U3ColdDragU3E__0_0 = L_5;
		DragRigidbody_t217 * L_6 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_6);
		SpringJoint2D_t220 * L_7 = (L_6->___m_SpringJoint_18);
		NullCheck(L_7);
		Rigidbody2D_t49 * L_8 = Joint2D_get_connectedBody_m951(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = Rigidbody2D_get_angularDrag_m914(L_8, /*hidden argument*/NULL);
		__this->___U3ColdAngularDragU3E__1_1 = L_9;
		DragRigidbody_t217 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		SpringJoint2D_t220 * L_11 = (L_10->___m_SpringJoint_18);
		NullCheck(L_11);
		Rigidbody2D_t49 * L_12 = Joint2D_get_connectedBody_m951(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_set_drag_m917(L_12, (10.0f), /*hidden argument*/NULL);
		DragRigidbody_t217 * L_13 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_13);
		SpringJoint2D_t220 * L_14 = (L_13->___m_SpringJoint_18);
		NullCheck(L_14);
		Rigidbody2D_t49 * L_15 = Joint2D_get_connectedBody_m951(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody2D_set_angularDrag_m915(L_15, (5.0f), /*hidden argument*/NULL);
		Camera_t85 * L_16 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CmainCameraU3E__2_2 = L_16;
		goto IL_00ea;
	}

IL_009b:
	{
		Camera_t85 * L_17 = (__this->___U3CmainCameraU3E__2_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_18 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		Ray_t89  L_19 = Camera_ScreenPointToRay_m635(L_17, L_18, /*hidden argument*/NULL);
		__this->___U3CrayU3E__3_3 = L_19;
		DragRigidbody_t217 * L_20 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_20);
		SpringJoint2D_t220 * L_21 = (L_20->___m_SpringJoint_18);
		NullCheck(L_21);
		Transform_t41 * L_22 = Component_get_transform_m519(L_21, /*hidden argument*/NULL);
		Ray_t89 * L_23 = &(__this->___U3CrayU3E__3_3);
		float L_24 = (__this->___distance_4);
		Vector3_t42  L_25 = Ray_GetPoint_m636(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_m532(L_22, L_25, /*hidden argument*/NULL);
		__this->___U24current_6 = NULL;
		__this->___U24PC_5 = 1;
		goto IL_015f;
	}

IL_00ea:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_26 = Input_GetMouseButton_m637(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_009b;
		}
	}
	{
		DragRigidbody_t217 * L_27 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_27);
		SpringJoint2D_t220 * L_28 = (L_27->___m_SpringJoint_18);
		NullCheck(L_28);
		Rigidbody2D_t49 * L_29 = Joint2D_get_connectedBody_m951(L_28, /*hidden argument*/NULL);
		bool L_30 = Object_op_Implicit_m554(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0156;
		}
	}
	{
		DragRigidbody_t217 * L_31 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_31);
		SpringJoint2D_t220 * L_32 = (L_31->___m_SpringJoint_18);
		NullCheck(L_32);
		Rigidbody2D_t49 * L_33 = Joint2D_get_connectedBody_m951(L_32, /*hidden argument*/NULL);
		float L_34 = (__this->___U3ColdDragU3E__0_0);
		NullCheck(L_33);
		Rigidbody2D_set_drag_m917(L_33, L_34, /*hidden argument*/NULL);
		DragRigidbody_t217 * L_35 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_35);
		SpringJoint2D_t220 * L_36 = (L_35->___m_SpringJoint_18);
		NullCheck(L_36);
		Rigidbody2D_t49 * L_37 = Joint2D_get_connectedBody_m951(L_36, /*hidden argument*/NULL);
		float L_38 = (__this->___U3ColdAngularDragU3E__1_1);
		NullCheck(L_37);
		Rigidbody2D_set_angularDrag_m915(L_37, L_38, /*hidden argument*/NULL);
		DragRigidbody_t217 * L_39 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_39);
		SpringJoint2D_t220 * L_40 = (L_39->___m_SpringJoint_18);
		NullCheck(L_40);
		Joint2D_set_connectedBody_m952(L_40, (Rigidbody2D_t49 *)NULL, /*hidden argument*/NULL);
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
extern "C" void U3CDragObjectU3Ec__Iterator0_Dispose_m765 (U3CDragObjectU3Ec__Iterator0_t216 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void Procrastinate.DragRigidbody/<DragObject>c__Iterator0::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CDragObjectU3Ec__Iterator0_Reset_m766 (U3CDragObjectU3Ec__Iterator0_t216 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CMoveFingerU.h"
// Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CMoveFingerUMethodDeclarations.h"
// System.Void Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CMoveFingerU3Ec__Iterator1__ctor_m767 (U3CMoveFingerU3Ec__Iterator1_t218 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CMoveFingerU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m768 (U3CMoveFingerU3Ec__Iterator1_t218 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CMoveFingerU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m769 (U3CMoveFingerU3Ec__Iterator1_t218 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::MoveNext()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool U3CMoveFingerU3Ec__Iterator1_MoveNext_m770 (U3CMoveFingerU3Ec__Iterator1_t218 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
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
		Camera_t85 * L_2 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CmainCameraU3E__0_0 = L_2;
		goto IL_0080;
	}

IL_0031:
	{
		Camera_t85 * L_3 = (__this->___U3CmainCameraU3E__0_0);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_4 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Ray_t89  L_5 = Camera_ScreenPointToRay_m635(L_3, L_4, /*hidden argument*/NULL);
		__this->___U3CrayU3E__1_1 = L_5;
		DragRigidbody_t217 * L_6 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_6);
		GameObject_t11 * L_7 = (L_6->___finger_17);
		NullCheck(L_7);
		Transform_t41 * L_8 = GameObject_get_transform_m534(L_7, /*hidden argument*/NULL);
		Ray_t89 * L_9 = &(__this->___U3CrayU3E__1_1);
		float L_10 = (__this->___distance_2);
		Vector3_t42  L_11 = Ray_GetPoint_m636(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_m532(L_8, L_11, /*hidden argument*/NULL);
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_00bf;
	}

IL_0080:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_12 = Input_GetMouseButton_m637(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0031;
		}
	}
	{
		DragRigidbody_t217 * L_13 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_13);
		GameObject_t11 * L_14 = (L_13->___finger_17);
		NullCheck(L_14);
		bool L_15 = GameObject_get_activeSelf_m953(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b6;
		}
	}
	{
		GameController_CheckForAnomalies_m816(NULL /*static, unused*/, /*hidden argument*/NULL);
		DragRigidbody_t217 * L_16 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_16);
		GameObject_t11 * L_17 = (L_16->___finger_17);
		NullCheck(L_17);
		GameObject_SetActive_m444(L_17, 0, /*hidden argument*/NULL);
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
extern "C" void U3CMoveFingerU3Ec__Iterator1_Dispose_m771 (U3CMoveFingerU3Ec__Iterator1_t218 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CMoveFingerU3Ec__Iterator1_Reset_m772 (U3CMoveFingerU3Ec__Iterator1_t218 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// Procrastinate.DragRigidbody
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbodyMethodDeclarations.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2D.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// RMX.Singletons/ASingleton`1<Procrastinate.DragRigidbody>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_3MethodDeclarations.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2DMethodDeclarations.h"
// UnityEngine.AnchoredJoint2D
#include "UnityEngine_UnityEngine_AnchoredJoint2DMethodDeclarations.h"
// UnityEngine.SpringJoint2D
#include "UnityEngine_UnityEngine_SpringJoint2DMethodDeclarations.h"
struct SpringJoint2D_t220;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint2D>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint2D>()
#define GameObject_AddComponent_TisSpringJoint2D_t220_m956(__this, method) (( SpringJoint2D_t220 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// System.Void Procrastinate.DragRigidbody::.ctor()
// RMX.Singletons/ASingleton`1<Procrastinate.DragRigidbody>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_3MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t219_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m954_MethodInfo_var;
extern "C" void DragRigidbody__ctor_m773 (DragRigidbody_t217 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		ASingleton_1__ctor_m954_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483736);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t219_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m954(__this, /*hidden argument*/ASingleton_1__ctor_m954_MethodInfo_var);
		return;
	}
}
// System.Single Procrastinate.DragRigidbody::get_fingerWidth()
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern "C" float DragRigidbody_get_fingerWidth_m774 (DragRigidbody_t217 * __this, const MethodInfo* method)
{
	{
		GameController_t228 * L_0 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = (L_0->___FingerSize_31);
		return L_1;
	}
}
// System.Void Procrastinate.DragRigidbody::Update()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Joint2D
#include "UnityEngine_UnityEngine_Joint2DMethodDeclarations.h"
// Procrastinate.DragRigidbody
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbodyMethodDeclarations.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// UnityEngine.PhysicsMaterial2D
#include "UnityEngine_UnityEngine_PhysicsMaterial2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.AnchoredJoint2D
#include "UnityEngine_UnityEngine_AnchoredJoint2DMethodDeclarations.h"
// UnityEngine.SpringJoint2D
#include "UnityEngine_UnityEngine_SpringJoint2DMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t11_il2cpp_TypeInfo_var;
extern TypeInfo* PhysicsMaterial2D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody2D_t49_m911_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSpringJoint2D_t220_m956_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCircleCollider2D_t259_m908_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral121;
extern Il2CppCodeGenString* _stringLiteral122;
extern Il2CppCodeGenString* _stringLiteral92;
extern "C" void DragRigidbody_Update_m775 (DragRigidbody_t217 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		GameObject_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		PhysicsMaterial2D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		GameObject_AddComponent_TisRigidbody2D_t49_m911_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483719);
		GameObject_AddComponent_TisSpringJoint2D_t220_m956_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483737);
		GameObject_AddComponent_TisCircleCollider2D_t259_m908_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		_stringLiteral121 = il2cpp_codegen_string_literal_from_index(121);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t85 * V_0 = {0};
	RaycastHit2D_t269  V_1 = {0};
	GameObject_t11 * V_2 = {0};
	Rigidbody2D_t49 * V_3 = {0};
	CircleCollider2D_t259 * V_4 = {0};
	float V_5 = 0.0f;
	Vector2_t44  V_6 = {0};
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Ray_t89  V_11 = {0};
	Ray_t89  V_12 = {0};
	Ray_t89  V_13 = {0};
	Vector3_t42  V_14 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m640(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
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
		Camera_t85 * L_1 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t85 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_3 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t89  L_4 = Camera_ScreenPointToRay_m635(L_2, L_3, /*hidden argument*/NULL);
		V_11 = L_4;
		Vector3_t42  L_5 = Ray_get_origin_m641((&V_11), /*hidden argument*/NULL);
		Vector2_t44  L_6 = Vector2_op_Implicit_m544(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Camera_t85 * L_7 = V_0;
		Vector3_t42  L_8 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Ray_t89  L_9 = Camera_ScreenPointToRay_m635(L_7, L_8, /*hidden argument*/NULL);
		V_12 = L_9;
		Vector3_t42  L_10 = Ray_get_direction_m642((&V_12), /*hidden argument*/NULL);
		Vector2_t44  L_11 = Vector2_op_Implicit_m544(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		RaycastHit2D_t269  L_12 = Physics2D_Raycast_m955(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		SpringJoint2D_t220 * L_13 = (__this->___m_SpringJoint_18);
		bool L_14 = Object_op_Implicit_m554(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_007f;
		}
	}
	{
		GameObject_t11 * L_15 = (GameObject_t11 *)il2cpp_codegen_object_new (GameObject_t11_il2cpp_TypeInfo_var);
		GameObject__ctor_m571(L_15, _stringLiteral91, /*hidden argument*/NULL);
		V_2 = L_15;
		GameObject_t11 * L_16 = V_2;
		NullCheck(L_16);
		Rigidbody2D_t49 * L_17 = GameObject_AddComponent_TisRigidbody2D_t49_m911(L_16, /*hidden argument*/GameObject_AddComponent_TisRigidbody2D_t49_m911_MethodInfo_var);
		V_3 = L_17;
		GameObject_t11 * L_18 = V_2;
		NullCheck(L_18);
		SpringJoint2D_t220 * L_19 = GameObject_AddComponent_TisSpringJoint2D_t220_m956(L_18, /*hidden argument*/GameObject_AddComponent_TisSpringJoint2D_t220_m956_MethodInfo_var);
		__this->___m_SpringJoint_18 = L_19;
		Rigidbody2D_t49 * L_20 = V_3;
		NullCheck(L_20);
		Rigidbody2D_set_isKinematic_m891(L_20, 1, /*hidden argument*/NULL);
	}

IL_007f:
	{
		RaycastHit2D_t269  L_21 = V_1;
		bool L_22 = RaycastHit2D_op_Implicit_m957(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	{
		Rigidbody2D_t49 * L_23 = RaycastHit2D_get_rigidbody_m958((&V_1), /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24 = Rigidbody2D_get_isKinematic_m894(L_23, /*hidden argument*/NULL);
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
		bool L_26 = RaycastHit2D_op_Implicit_m957(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00bd;
		}
	}
	{
		SpringJoint2D_t220 * L_27 = (__this->___m_SpringJoint_18);
		NullCheck(L_27);
		Rigidbody2D_t49 * L_28 = Joint2D_get_connectedBody_m951(L_27, /*hidden argument*/NULL);
		bool L_29 = Object_op_Inequality_m548(NULL /*static, unused*/, L_28, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0163;
		}
	}

IL_00bd:
	{
		GameObject_t11 * L_30 = (__this->___finger_17);
		bool L_31 = Object_op_Implicit_m554(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0120;
		}
	}
	{
		GameObject_t11 * L_32 = (GameObject_t11 *)il2cpp_codegen_object_new (GameObject_t11_il2cpp_TypeInfo_var);
		GameObject__ctor_m571(L_32, _stringLiteral121, /*hidden argument*/NULL);
		__this->___finger_17 = L_32;
		GameObject_t11 * L_33 = (__this->___finger_17);
		NullCheck(L_33);
		CircleCollider2D_t259 * L_34 = GameObject_AddComponent_TisCircleCollider2D_t259_m908(L_33, /*hidden argument*/GameObject_AddComponent_TisCircleCollider2D_t259_m908_MethodInfo_var);
		V_4 = L_34;
		CircleCollider2D_t259 * L_35 = V_4;
		float L_36 = DragRigidbody_get_fingerWidth_m774(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		CircleCollider2D_set_radius_m910(L_35, L_36, /*hidden argument*/NULL);
		CircleCollider2D_t259 * L_37 = V_4;
		PhysicsMaterial2D_t270 * L_38 = (PhysicsMaterial2D_t270 *)il2cpp_codegen_object_new (PhysicsMaterial2D_t270_il2cpp_TypeInfo_var);
		PhysicsMaterial2D__ctor_m959(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Collider2D_set_sharedMaterial_m960(L_37, L_38, /*hidden argument*/NULL);
		CircleCollider2D_t259 * L_39 = V_4;
		NullCheck(L_39);
		PhysicsMaterial2D_t270 * L_40 = Collider2D_get_sharedMaterial_m961(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		PhysicsMaterial2D_set_bounciness_m962(L_40, (0.5f), /*hidden argument*/NULL);
		GameObject_t11 * L_41 = (__this->___finger_17);
		NullCheck(L_41);
		GameObject_SetActive_m444(L_41, 0, /*hidden argument*/NULL);
	}

IL_0120:
	{
		GameObject_t11 * L_42 = (__this->___finger_17);
		NullCheck(L_42);
		GameObject_SetActive_m444(L_42, 1, /*hidden argument*/NULL);
		GameObject_t11 * L_43 = (__this->___finger_17);
		NullCheck(L_43);
		Transform_t41 * L_44 = GameObject_get_transform_m534(L_43, /*hidden argument*/NULL);
		Camera_t85 * L_45 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_46 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_45);
		Ray_t89  L_47 = Camera_ScreenPointToRay_m635(L_45, L_46, /*hidden argument*/NULL);
		V_13 = L_47;
		Vector3_t42  L_48 = Ray_get_origin_m641((&V_13), /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_m532(L_44, L_48, /*hidden argument*/NULL);
		int32_t L_49 = 0;
		Object_t * L_50 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_49);
		MonoBehaviour_StartCoroutine_m654(__this, _stringLiteral122, L_50, /*hidden argument*/NULL);
		return;
	}

IL_0163:
	{
		SpringJoint2D_t220 * L_51 = (__this->___m_SpringJoint_18);
		NullCheck(L_51);
		Transform_t41 * L_52 = Component_get_transform_m519(L_51, /*hidden argument*/NULL);
		Vector2_t44  L_53 = RaycastHit2D_get_point_m963((&V_1), /*hidden argument*/NULL);
		Vector3_t42  L_54 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_position_m532(L_52, L_54, /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_55 = (__this->___m_SpringJoint_18);
		Vector2_t44  L_56 = Vector2_get_zero_m935(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_55);
		AnchoredJoint2D_set_anchor_m964(L_55, L_56, /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_57 = (__this->___m_SpringJoint_18);
		NullCheck(L_57);
		SpringJoint2D_set_frequency_m965(L_57, (50.0f), /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_58 = (__this->___m_SpringJoint_18);
		Transform_t41 * L_59 = RaycastHit2D_get_transform_m966((&V_1), /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t42  L_60 = Transform_get_localScale_m558(L_59, /*hidden argument*/NULL);
		V_14 = L_60;
		float L_61 = Vector3_get_magnitude_m707((&V_14), /*hidden argument*/NULL);
		NullCheck(L_58);
		SpringJoint2D_set_dampingRatio_m967(L_58, ((float)((float)(5.0f)*(float)L_61)), /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_62 = (__this->___m_SpringJoint_18);
		NullCheck(L_62);
		SpringJoint2D_set_distance_m968(L_62, (0.2f), /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_63 = (__this->___m_SpringJoint_18);
		Rigidbody2D_t49 * L_64 = RaycastHit2D_get_rigidbody_m958((&V_1), /*hidden argument*/NULL);
		NullCheck(L_63);
		Joint2D_set_connectedBody_m952(L_63, L_64, /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_65 = (__this->___m_SpringJoint_18);
		NullCheck(L_65);
		Rigidbody2D_t49 * L_66 = Joint2D_get_connectedBody_m951(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		float L_67 = Rigidbody2D_get_rotation_m969(L_66, /*hidden argument*/NULL);
		V_5 = ((float)((float)L_67*(float)(-0.0174532924f)));
		Vector2_t44  L_68 = RaycastHit2D_get_point_m963((&V_1), /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_69 = (__this->___m_SpringJoint_18);
		NullCheck(L_69);
		Rigidbody2D_t49 * L_70 = Joint2D_get_connectedBody_m951(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector2_t44  L_71 = Rigidbody2D_get_position_m970(L_70, /*hidden argument*/NULL);
		Vector2_t44  L_72 = Vector2_op_Subtraction_m971(NULL /*static, unused*/, L_68, L_71, /*hidden argument*/NULL);
		V_6 = L_72;
		float L_73 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
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
		SpringJoint2D_t220 * L_85 = (__this->___m_SpringJoint_18);
		float L_86 = V_9;
		float L_87 = V_10;
		Vector2_t44  L_88 = {0};
		Vector2__ctor_m555(&L_88, L_86, L_87, /*hidden argument*/NULL);
		NullCheck(L_85);
		AnchoredJoint2D_set_connectedAnchor_m972(L_85, L_88, /*hidden argument*/NULL);
		float L_89 = RaycastHit2D_get_distance_m973((&V_1), /*hidden argument*/NULL);
		float L_90 = L_89;
		Object_t * L_91 = Box(Single_t176_il2cpp_TypeInfo_var, &L_90);
		MonoBehaviour_StartCoroutine_m654(__this, _stringLiteral92, L_91, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.DragRigidbody::AttachBody(UnityEngine.Rigidbody2D,UnityEngine.Touch,System.Single)
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral92;
extern "C" void DragRigidbody_AttachBody_m776 (DragRigidbody_t217 * __this, Rigidbody2D_t49 * ___body, Touch_t188  ___touch, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t44  V_0 = {0};
	Vector3_t42  V_1 = {0};
	Vector3_t42  V_2 = {0};
	Vector2_t44  V_3 = {0};
	float V_4 = 0.0f;
	Vector2_t44  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t42  V_10 = {0};
	{
		Vector2_t44  L_0 = Touch_get_position_m592((&___touch), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		float L_2 = ((&V_0)->___y_2);
		float L_3 = ___distance;
		Vector3__ctor_m537((&V_1), L_1, L_2, L_3, /*hidden argument*/NULL);
		Camera_t85 * L_4 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_5 = V_1;
		NullCheck(L_4);
		Vector3_t42  L_6 = Camera_ScreenToWorldPoint_m927(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = ((&V_2)->___x_1);
		float L_8 = ((&V_2)->___y_2);
		Vector2__ctor_m555((&V_3), L_7, L_8, /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_9 = (__this->___m_SpringJoint_18);
		NullCheck(L_9);
		Transform_t41 * L_10 = Component_get_transform_m519(L_9, /*hidden argument*/NULL);
		Vector2_t44  L_11 = V_3;
		Vector3_t42  L_12 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m532(L_10, L_12, /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_13 = (__this->___m_SpringJoint_18);
		Vector2_t44  L_14 = Vector2_get_zero_m935(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		AnchoredJoint2D_set_anchor_m964(L_13, L_14, /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_15 = (__this->___m_SpringJoint_18);
		NullCheck(L_15);
		SpringJoint2D_set_frequency_m965(L_15, (50.0f), /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_16 = (__this->___m_SpringJoint_18);
		Rigidbody2D_t49 * L_17 = ___body;
		NullCheck(L_17);
		Transform_t41 * L_18 = Component_get_transform_m519(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t42  L_19 = Transform_get_localScale_m558(L_18, /*hidden argument*/NULL);
		V_10 = L_19;
		float L_20 = Vector3_get_magnitude_m707((&V_10), /*hidden argument*/NULL);
		NullCheck(L_16);
		SpringJoint2D_set_dampingRatio_m967(L_16, ((float)((float)(5.0f)*(float)L_20)), /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_21 = (__this->___m_SpringJoint_18);
		NullCheck(L_21);
		SpringJoint2D_set_distance_m968(L_21, (0.2f), /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_22 = (__this->___m_SpringJoint_18);
		Rigidbody2D_t49 * L_23 = ___body;
		NullCheck(L_22);
		Joint2D_set_connectedBody_m952(L_22, L_23, /*hidden argument*/NULL);
		SpringJoint2D_t220 * L_24 = (__this->___m_SpringJoint_18);
		NullCheck(L_24);
		Rigidbody2D_t49 * L_25 = Joint2D_get_connectedBody_m951(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		float L_26 = Rigidbody2D_get_rotation_m969(L_25, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_26*(float)(-0.0174532924f)));
		Vector2_t44  L_27 = V_3;
		SpringJoint2D_t220 * L_28 = (__this->___m_SpringJoint_18);
		NullCheck(L_28);
		Rigidbody2D_t49 * L_29 = Joint2D_get_connectedBody_m951(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector2_t44  L_30 = Rigidbody2D_get_position_m970(L_29, /*hidden argument*/NULL);
		Vector2_t44  L_31 = Vector2_op_Subtraction_m971(NULL /*static, unused*/, L_27, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		float L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
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
		SpringJoint2D_t220 * L_44 = (__this->___m_SpringJoint_18);
		float L_45 = V_8;
		float L_46 = V_9;
		Vector2_t44  L_47 = {0};
		Vector2__ctor_m555(&L_47, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		AnchoredJoint2D_set_connectedAnchor_m972(L_44, L_47, /*hidden argument*/NULL);
		float L_48 = ___distance;
		float L_49 = L_48;
		Object_t * L_50 = Box(Single_t176_il2cpp_TypeInfo_var, &L_49);
		MonoBehaviour_StartCoroutine_m654(__this, _stringLiteral92, L_50, /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.DragRigidbody::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral123;
extern "C" String_t* DragRigidbody_ToString_m777 (DragRigidbody_t217 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_get_name_m508(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral123, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Procrastinate.DragRigidbody::DragObject(System.Single)
// Procrastinate.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CDragObjectUMethodDeclarations.h"
extern TypeInfo* U3CDragObjectU3Ec__Iterator0_t216_il2cpp_TypeInfo_var;
extern "C" Object_t * DragRigidbody_DragObject_m778 (DragRigidbody_t217 * __this, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDragObjectU3Ec__Iterator0_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	U3CDragObjectU3Ec__Iterator0_t216 * V_0 = {0};
	{
		U3CDragObjectU3Ec__Iterator0_t216 * L_0 = (U3CDragObjectU3Ec__Iterator0_t216 *)il2cpp_codegen_object_new (U3CDragObjectU3Ec__Iterator0_t216_il2cpp_TypeInfo_var);
		U3CDragObjectU3Ec__Iterator0__ctor_m761(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDragObjectU3Ec__Iterator0_t216 * L_1 = V_0;
		float L_2 = ___distance;
		NullCheck(L_1);
		L_1->___distance_4 = L_2;
		U3CDragObjectU3Ec__Iterator0_t216 * L_3 = V_0;
		float L_4 = ___distance;
		NullCheck(L_3);
		L_3->___U3CU24U3Edistance_7 = L_4;
		U3CDragObjectU3Ec__Iterator0_t216 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_8 = __this;
		U3CDragObjectU3Ec__Iterator0_t216 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Procrastinate.DragRigidbody::MoveFinger(System.Single)
// Procrastinate.DragRigidbody/<MoveFinger>c__Iterator1
#include "AssemblyU2DCSharp_Procrastinate_DragRigidbody_U3CMoveFingerUMethodDeclarations.h"
extern TypeInfo* U3CMoveFingerU3Ec__Iterator1_t218_il2cpp_TypeInfo_var;
extern "C" Object_t * DragRigidbody_MoveFinger_m779 (DragRigidbody_t217 * __this, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CMoveFingerU3Ec__Iterator1_t218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	U3CMoveFingerU3Ec__Iterator1_t218 * V_0 = {0};
	{
		U3CMoveFingerU3Ec__Iterator1_t218 * L_0 = (U3CMoveFingerU3Ec__Iterator1_t218 *)il2cpp_codegen_object_new (U3CMoveFingerU3Ec__Iterator1_t218_il2cpp_TypeInfo_var);
		U3CMoveFingerU3Ec__Iterator1__ctor_m767(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMoveFingerU3Ec__Iterator1_t218 * L_1 = V_0;
		float L_2 = ___distance;
		NullCheck(L_1);
		L_1->___distance_2 = L_2;
		U3CMoveFingerU3Ec__Iterator1_t218 * L_3 = V_0;
		float L_4 = ___distance;
		NullCheck(L_3);
		L_3->___U3CU24U3Edistance_5 = L_4;
		U3CMoveFingerU3Ec__Iterator1_t218 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_6 = __this;
		U3CMoveFingerU3Ec__Iterator1_t218 * L_6 = V_0;
		return L_6;
	}
}
// System.Void Procrastinate.DragRigidbody::OnEventDidEnd(System.Enum,System.Object)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviourMethodDeclarations.h"
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern TypeInfo* ClockBehaviour_t207_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" void DragRigidbody_OnEventDidEnd_m780 (DragRigidbody_t217 * __this, Enum_t6 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		ClockBehaviour_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 1;
		Object_t * L_2 = Box(Event_t221_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_4 = ___args;
		if (!((ClockBehaviour_t207 *)IsInstClass(L_4, ClockBehaviour_t207_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_5 = ___args;
		NullCheck(((ClockBehaviour_t207 *)IsInstClass(L_5, ClockBehaviour_t207_il2cpp_TypeInfo_var)));
		Rigidbody2D_t49 * L_6 = ClockBehaviour_get_body_m727(((ClockBehaviour_t207 *)IsInstClass(L_5, ClockBehaviour_t207_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		int32_t L_7 = Input_get_touchCount_m590(NULL /*static, unused*/, /*hidden argument*/NULL);
		Touch_t188  L_8 = Input_GetTouch_m974(NULL /*static, unused*/, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/NULL);
		DragRigidbody_AttachBody_m776(__this, L_6, L_8, (0.0f), /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// Procrastinate.Event
#include "AssemblyU2DCSharp_Procrastinate_EventMethodDeclarations.h"
// Procrastinate.GameCenter/<Authenticate>c__AnonStorey3
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CAuthenticateU3.h"
// Procrastinate.GameCenter/<Authenticate>c__AnonStorey3
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CAuthenticateU3MethodDeclarations.h"
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenter.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
// System.Void Procrastinate.GameCenter/<Authenticate>c__AnonStorey3::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CAuthenticateU3Ec__AnonStorey3__ctor_m781 (U3CAuthenticateU3Ec__AnonStorey3_t222 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameCenter/<Authenticate>c__AnonStorey3::<>m__1(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* IUserProfile_t271_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t272_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral124;
extern Il2CppCodeGenString* _stringLiteral125;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral128;
extern "C" void U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m782 (U3CAuthenticateU3Ec__AnonStorey3_t222 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		IUserProfile_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		ILocalUser_t272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		bool L_0 = ___success;
		if (!L_0)
		{
			goto IL_009e;
		}
	}
	{
		GameCenter_t223 * L_1 = (__this->___U3CU3Ef__this_1);
		int32_t L_2 = 5;
		Object_t * L_3 = Box(Event_t24_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = 3;
		Object_t * L_5 = Box(EventStatus_t23_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		RMXObject_DidFinishEvent_m83(L_1, (Enum_t6 *)L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14 = 1;
		String_t* L_6 = (__this->___log_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m423(NULL /*static, unused*/, L_6, _stringLiteral124, /*hidden argument*/NULL);
		__this->___log_0 = L_7;
		String_t* L_8 = (__this->___log_0);
		V_0 = L_8;
		ObjectU5BU5D_t148* L_9 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 7));
		String_t* L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t148* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, _stringLiteral125);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral125;
		ObjectU5BU5D_t148* L_12 = L_11;
		Object_t * L_13 = Social_get_localUser_m975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_userName() */, IUserProfile_t271_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2, sizeof(Object_t *))) = (Object_t *)L_14;
		ObjectU5BU5D_t148* L_15 = L_12;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		ArrayElementTypeCheck (L_15, _stringLiteral126);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral126;
		ObjectU5BU5D_t148* L_16 = L_15;
		Object_t * L_17 = Social_get_localUser_m975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_t271_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4, sizeof(Object_t *))) = (Object_t *)L_18;
		ObjectU5BU5D_t148* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		ArrayElementTypeCheck (L_19, _stringLiteral127);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral127;
		ObjectU5BU5D_t148* L_20 = L_19;
		Object_t * L_21 = Social_get_localUser_m975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_underage() */, ILocalUser_t272_il2cpp_TypeInfo_var, L_21);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 6);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 6, sizeof(Object_t *))) = (Object_t *)L_24;
		String_t* L_25 = String_Concat_m422(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		__this->___log_0 = L_25;
		goto IL_00d1;
	}

IL_009e:
	{
		GameCenter_t223 * L_26 = (__this->___U3CU3Ef__this_1);
		int32_t L_27 = 5;
		Object_t * L_28 = Box(Event_t24_il2cpp_TypeInfo_var, &L_27);
		int32_t L_29 = 4;
		Object_t * L_30 = Box(EventStatus_t23_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		RMXObject_DidFinishEvent_m83(L_26, (Enum_t6 *)L_28, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14 = 0;
		String_t* L_31 = (__this->___log_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m423(NULL /*static, unused*/, L_31, _stringLiteral128, /*hidden argument*/NULL);
		__this->___log_0 = L_32;
	}

IL_00d1:
	{
		return;
	}
}
// Procrastinate.GameCenter/<ReportScore>c__AnonStorey4
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CReportScoreU3E.h"
// Procrastinate.GameCenter/<ReportScore>c__AnonStorey4
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CReportScoreU3EMethodDeclarations.h"
// System.Void Procrastinate.GameCenter/<ReportScore>c__AnonStorey4::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CReportScoreU3Ec__AnonStorey4__ctor_m783 (U3CReportScoreU3Ec__AnonStorey4_t224 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameCenter/<ReportScore>c__AnonStorey4::<>m__2(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral130;
extern "C" void U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m784 (U3CReportScoreU3Ec__AnonStorey4_t224 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t224 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t224 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t224 * G_B3_2 = {0};
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
		G_B3_0 = _stringLiteral129;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001c;
	}

IL_0017:
	{
		G_B3_0 = _stringLiteral130;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m423(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_2);
		G_B3_2->___log_0 = L_2;
		return;
	}
}
// Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CCheckAchieveme.h"
// Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CCheckAchievemeMethodDeclarations.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Void Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5__ctor_m785 (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5::<>m__3(UnityEngine.SocialPlatforms.IAchievement[])
#include "UnityEngine_ArrayTypes.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IAchievement_t273_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t274_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral131;
extern Il2CppCodeGenString* _stringLiteral132;
extern Il2CppCodeGenString* _stringLiteral133;
extern Il2CppCodeGenString* _stringLiteral134;
extern Il2CppCodeGenString* _stringLiteral135;
extern Il2CppCodeGenString* _stringLiteral136;
extern "C" void U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m786 (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * __this, IAchievementU5BU5D_t261* ___achievements, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IAchievement_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		Double_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		_stringLiteral132 = il2cpp_codegen_string_literal_from_index(132);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		_stringLiteral134 = il2cpp_codegen_string_literal_from_index(134);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	IAchievementU5BU5D_t261* V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * G_B5_0 = {0};
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * G_B6_1 = {0};
	{
		IAchievementU5BU5D_t261* L_0 = ___achievements;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_1 = (__this->___log_0);
		V_3 = L_1;
		ObjectU5BU5D_t148* L_2 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		String_t* L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t148* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, _stringLiteral131);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral131;
		ObjectU5BU5D_t148* L_5 = L_4;
		IAchievementU5BU5D_t261* L_6 = ___achievements;
		NullCheck(L_6);
		int32_t L_7 = (((int32_t)(((Array_t *)L_6)->max_length)));
		Object_t * L_8 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2, sizeof(Object_t *))) = (Object_t *)L_8;
		ObjectU5BU5D_t148* L_9 = L_5;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, _stringLiteral132);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral132;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m422(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->___log_0 = L_10;
		IAchievementU5BU5D_t261* L_11 = ___achievements;
		V_1 = L_11;
		V_2 = 0;
		goto IL_00ea;
	}

IL_0049:
	{
		IAchievementU5BU5D_t261* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14, sizeof(Object_t *)));
		Object_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IAchievement::get_id() */, IAchievement_t273_il2cpp_TypeInfo_var, L_15);
		String_t* L_17 = (__this->___achievementID_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_op_Equality_m421(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
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
		ObjectU5BU5D_t148* L_24 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 7));
		String_t* L_25 = V_3;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		ArrayElementTypeCheck (L_24, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 0, sizeof(Object_t *))) = (Object_t *)L_25;
		ObjectU5BU5D_t148* L_26 = L_24;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 1);
		ArrayElementTypeCheck (L_26, _stringLiteral133);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral133;
		ObjectU5BU5D_t148* L_27 = L_26;
		Object_t * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IAchievement::get_id() */, IAchievement_t273_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 2);
		ArrayElementTypeCheck (L_27, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 2, sizeof(Object_t *))) = (Object_t *)L_29;
		ObjectU5BU5D_t148* L_30 = L_27;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 3);
		ArrayElementTypeCheck (L_30, _stringLiteral134);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral134;
		ObjectU5BU5D_t148* L_31 = L_30;
		Object_t * L_32 = V_0;
		NullCheck(L_32);
		double L_33 = (double)InterfaceFuncInvoker0< double >::Invoke(1 /* System.Double UnityEngine.SocialPlatforms.IAchievement::get_percentCompleted() */, IAchievement_t273_il2cpp_TypeInfo_var, L_32);
		double L_34 = L_33;
		Object_t * L_35 = Box(Double_t274_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 4);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 4, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t148* L_36 = L_31;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 5);
		ArrayElementTypeCheck (L_36, _stringLiteral135);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral135;
		ObjectU5BU5D_t148* L_37 = L_36;
		Object_t * L_38 = V_0;
		NullCheck(L_38);
		bool L_39 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.IAchievement::get_completed() */, IAchievement_t273_il2cpp_TypeInfo_var, L_38);
		bool L_40 = L_39;
		Object_t * L_41 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 6);
		ArrayElementTypeCheck (L_37, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 6, sizeof(Object_t *))) = (Object_t *)L_41;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Concat_m422(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
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
		IAchievementU5BU5D_t261* L_45 = V_1;
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
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_49 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_47, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0118;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_50 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
	}

IL_0118:
	{
		ArgumentException_t275 * L_51 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_51, _stringLiteral136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_51);
	}

IL_0123:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_0.h"
// RMX.Singletons/ASingleton`1<Procrastinate.GameCenter>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenterMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GKAchievementReporter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_SocialPlatforms_GKMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// Procrastinate.GameData
#include "AssemblyU2DCSharp_Procrastinate_GameDataMethodDeclarations.h"
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Int64>(System.Object)
// !!0 RMX.SavedData::Get<System.Int64>(System.Object)
extern "C" int64_t SavedData_Get_TisInt64_t278_m984_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisInt64_t278_m984(__this /* static, unused */, p0, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisInt64_t278_m984_gshared)(__this /* static, unused */, p0, method)
// System.Void Procrastinate.GameCenter::.ctor()
// RMX.Singletons/ASingleton`1<Procrastinate.GameCenter>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_4MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t226_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m977_MethodInfo_var;
extern "C" void GameCenter__ctor_m787 (GameCenter_t223 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		ASingleton_1__ctor_m977_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483738);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t226_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m977(__this, /*hidden argument*/ASingleton_1__ctor_m977_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.GameCenter::.cctor()
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t227_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m978_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral137;
extern Il2CppCodeGenString* _stringLiteral138;
extern Il2CppCodeGenString* _stringLiteral139;
extern Il2CppCodeGenString* _stringLiteral140;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral142;
extern Il2CppCodeGenString* _stringLiteral143;
extern Il2CppCodeGenString* _stringLiteral144;
extern Il2CppCodeGenString* _stringLiteral145;
extern Il2CppCodeGenString* _stringLiteral146;
extern "C" void GameCenter__cctor_m788 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Dictionary_2_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Dictionary_2__ctor_m978_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		_stringLiteral137 = il2cpp_codegen_string_literal_from_index(137);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral142 = il2cpp_codegen_string_literal_from_index(142);
		_stringLiteral143 = il2cpp_codegen_string_literal_from_index(143);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		_stringLiteral146 = il2cpp_codegen_string_literal_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t227 * V_0 = {0};
	{
		((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14 = 0;
		Dictionary_2_t227 * L_0 = (Dictionary_2_t227 *)il2cpp_codegen_object_new (Dictionary_2_t227_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m978(L_0, /*hidden argument*/Dictionary_2__ctor_m978_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t227 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_1, 5, _stringLiteral137);
		Dictionary_2_t227 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_2, 6, _stringLiteral138);
		Dictionary_2_t227 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_3, 7, _stringLiteral139);
		Dictionary_2_t227 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_4, 8, _stringLiteral140);
		Dictionary_2_t227 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_5, ((int32_t)9), _stringLiteral141);
		Dictionary_2_t227 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_6, ((int32_t)10), _stringLiteral142);
		Dictionary_2_t227 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_7, ((int32_t)11), _stringLiteral143);
		Dictionary_2_t227 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_8, ((int32_t)12), _stringLiteral144);
		Dictionary_2_t227 * L_9 = V_0;
		NullCheck(L_9);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_9, ((int32_t)14), _stringLiteral145);
		Dictionary_2_t227 * L_10 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::Add(!0,!1) */, L_10, ((int32_t)13), _stringLiteral146);
		Dictionary_2_t227 * L_11 = V_0;
		((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UniqueID_15 = L_11;
		return;
	}
}
// System.Void Procrastinate.GameCenter::Start()
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenterMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t146_il2cpp_TypeInfo_var;
extern "C" void GameCenter_Start_m789 (GameCenter_t223 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t146_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m979(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GameCenter_Authenticate_m794(__this, /*hidden argument*/NULL);
		GameCenter_UpdateGameCenterAchievements_m790(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameCenter::UpdateGameCenterAchievements()
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t277_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m980_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m981_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m982_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m983_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral117;
extern Il2CppCodeGenString* _stringLiteral147;
extern Il2CppCodeGenString* _stringLiteral148;
extern Il2CppCodeGenString* _stringLiteral149;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral150;
extern "C" void GameCenter_UpdateGameCenterAchievements_m790 (GameCenter_t223 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Enumerator_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m980_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483740);
		Enumerator_get_Current_m981_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483741);
		KeyValuePair_2_get_Key_m982_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		Enumerator_MoveNext_m983_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		_stringLiteral148 = il2cpp_codegen_string_literal_from_index(148);
		_stringLiteral149 = il2cpp_codegen_string_literal_from_index(149);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral150 = il2cpp_codegen_string_literal_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t276  V_1 = {0};
	Enumerator_t277  V_2 = {0};
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		Dictionary_2_t227 * L_1 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UniqueID_15;
		NullCheck(L_1);
		Enumerator_t277  L_2 = Dictionary_2_GetEnumerator_m980(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m980_MethodInfo_var);
		V_2 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0124;
		}

IL_0016:
		{
			KeyValuePair_2_t276  L_3 = Enumerator_get_Current_m981((&V_2), /*hidden argument*/Enumerator_get_Current_m981_MethodInfo_var);
			V_1 = L_3;
			int32_t L_4 = KeyValuePair_2_get_Key_m982((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m982_MethodInfo_var);
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_5);
			NullCheck(L_6);
			String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
			NullCheck(L_7);
			bool L_8 = String_StartsWith_m948(L_7, _stringLiteral117, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0124;
			}
		}

IL_003e:
		{
			int32_t L_9 = KeyValuePair_2_get_Key_m982((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m982_MethodInfo_var);
			int32_t L_10 = L_9;
			Object_t * L_11 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_10);
			bool L_12 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, L_11, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
			V_3 = L_12;
		}

IL_0050:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_13 = KeyValuePair_2_get_Key_m982((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m982_MethodInfo_var);
				bool L_14 = GameCenter_CheckAchievementsWithGameCenter_m800(__this, L_13, /*hidden argument*/NULL);
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
				Object_t * L_18 = Box(Event_t24_il2cpp_TypeInfo_var, &L_17);
				int32_t L_19 = KeyValuePair_2_get_Key_m982((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m982_MethodInfo_var);
				int32_t L_20 = L_19;
				Object_t * L_21 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_20);
				RMXObject_DidCauseEvent_m84(__this, (Enum_t6 *)L_18, L_21, /*hidden argument*/NULL);
			}

IL_007f:
			{
				String_t* L_22 = V_0;
				V_5 = L_22;
				ObjectU5BU5D_t148* L_23 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 8));
				String_t* L_24 = V_5;
				NullCheck(L_23);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
				ArrayElementTypeCheck (L_23, L_24);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 0, sizeof(Object_t *))) = (Object_t *)L_24;
				ObjectU5BU5D_t148* L_25 = L_23;
				NullCheck(L_25);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 1);
				ArrayElementTypeCheck (L_25, _stringLiteral147);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral147;
				ObjectU5BU5D_t148* L_26 = L_25;
				int32_t L_27 = KeyValuePair_2_get_Key_m982((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m982_MethodInfo_var);
				int32_t L_28 = L_27;
				Object_t * L_29 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_28);
				NullCheck(L_26);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 2);
				ArrayElementTypeCheck (L_26, L_29);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 2, sizeof(Object_t *))) = (Object_t *)L_29;
				ObjectU5BU5D_t148* L_30 = L_26;
				NullCheck(L_30);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 3);
				ArrayElementTypeCheck (L_30, _stringLiteral148);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral148;
				ObjectU5BU5D_t148* L_31 = L_30;
				bool L_32 = V_3;
				bool L_33 = L_32;
				Object_t * L_34 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_33);
				NullCheck(L_31);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 4);
				ArrayElementTypeCheck (L_31, L_34);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 4, sizeof(Object_t *))) = (Object_t *)L_34;
				ObjectU5BU5D_t148* L_35 = L_31;
				NullCheck(L_35);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 5);
				ArrayElementTypeCheck (L_35, _stringLiteral149);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral149;
				ObjectU5BU5D_t148* L_36 = L_35;
				bool L_37 = V_4;
				bool L_38 = L_37;
				Object_t * L_39 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_38);
				NullCheck(L_36);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 6);
				ArrayElementTypeCheck (L_36, L_39);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 6, sizeof(Object_t *))) = (Object_t *)L_39;
				ObjectU5BU5D_t148* L_40 = L_36;
				NullCheck(L_40);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 7);
				ArrayElementTypeCheck (L_40, _stringLiteral11);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_40, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral11;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_41 = String_Concat_m422(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
				V_0 = L_41;
				goto IL_0124;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_00da;
			throw e;
		}

CATCH_00da:
		{ // begin catch(System.Object)
			String_t* L_42 = V_0;
			V_5 = L_42;
			ObjectU5BU5D_t148* L_43 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 6));
			String_t* L_44 = V_5;
			NullCheck(L_43);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
			ArrayElementTypeCheck (L_43, L_44);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_43, 0, sizeof(Object_t *))) = (Object_t *)L_44;
			ObjectU5BU5D_t148* L_45 = L_43;
			NullCheck(L_45);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 1);
			ArrayElementTypeCheck (L_45, _stringLiteral147);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral147;
			ObjectU5BU5D_t148* L_46 = L_45;
			int32_t L_47 = KeyValuePair_2_get_Key_m982((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m982_MethodInfo_var);
			int32_t L_48 = L_47;
			Object_t * L_49 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_48);
			NullCheck(L_46);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
			ArrayElementTypeCheck (L_46, L_49);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2, sizeof(Object_t *))) = (Object_t *)L_49;
			ObjectU5BU5D_t148* L_50 = L_46;
			NullCheck(L_50);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 3);
			ArrayElementTypeCheck (L_50, _stringLiteral150);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral150;
			ObjectU5BU5D_t148* L_51 = L_50;
			bool L_52 = V_3;
			bool L_53 = L_52;
			Object_t * L_54 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_53);
			NullCheck(L_51);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 4);
			ArrayElementTypeCheck (L_51, L_54);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_51, 4, sizeof(Object_t *))) = (Object_t *)L_54;
			ObjectU5BU5D_t148* L_55 = L_51;
			NullCheck(L_55);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 5);
			ArrayElementTypeCheck (L_55, _stringLiteral11);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_55, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral11;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_56 = String_Concat_m422(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
			V_0 = L_56;
			goto IL_0124;
		} // end catch (depth: 2)

IL_0124:
		{
			bool L_57 = Enumerator_MoveNext_m983((&V_2), /*hidden argument*/Enumerator_MoveNext_m983_MethodInfo_var);
			if (L_57)
			{
				goto IL_0016;
			}
		}

IL_0130:
		{
			IL2CPP_LEAVE(0x141, FINALLY_0135);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0135;
	}

FINALLY_0135:
	{ // begin finally (depth: 1)
		Enumerator_t277  L_58 = V_2;
		Enumerator_t277  L_59 = L_58;
		Object_t * L_60 = Box(Enumerator_t277_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_60);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_60);
		IL2CPP_END_FINALLY(309)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(309)
	{
		IL2CPP_JUMP_TBL(0x141, IL_0141)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0141:
	{
		int32_t L_61 = 0;
		Object_t * L_62 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_64 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_62, L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_015c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_65 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
	}

IL_015c:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::OnEventDidStart(System.Enum,System.Object)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern "C" void GameCenter_OnEventDidStart_m791 (GameCenter_t223 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t24_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		GameCenter_Authenticate_m794(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::OnEventDidEnd(System.Enum,System.Object)
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisInt64_t278_m984_MethodInfo_var;
extern "C" void GameCenter_OnEventDidEnd_m792 (GameCenter_t223 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisInt64_t278_m984_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483744);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t24_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		GameCenter_UpdateGameCenterAchievements_m790(__this, /*hidden argument*/NULL);
		int32_t L_4 = 1;
		Object_t * L_5 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_4);
		int64_t L_6 = SavedData_Get_TisInt64_t278_m984(NULL /*static, unused*/, L_5, /*hidden argument*/SavedData_Get_TisInt64_t278_m984_MethodInfo_var);
		GameCenter_ReportScore_m795(__this, L_6, 5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::OnEvent(System.Enum,System.Object)
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral151;
extern "C" void GameCenter_OnEvent_m793 (GameCenter_t223 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 4;
		Object_t * L_2 = Box(Event_t24_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		Object_t * L_4 = ___info;
		if (!((Object_t *)IsInstSealed(L_4, UserData_t253_il2cpp_TypeInfo_var)))
		{
			goto IL_0060;
		}
	}
	{
		Object_t * L_5 = ___info;
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t151_il2cpp_TypeInfo_var))));
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_7);
		SavedData_Set_m103(NULL /*static, unused*/, L_8, 1, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		GameCenter_ReportProgress_m799(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = 7;
		Object_t * L_11 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_10);
		Object_t * L_12 = ___info;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral151, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_15 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_11, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_16 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::Authenticate()
// Procrastinate.GameCenter/<Authenticate>c__AnonStorey3
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CAuthenticateU3MethodDeclarations.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
extern TypeInfo* U3CAuthenticateU3Ec__AnonStorey3_t222_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t147_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t272_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m782_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m985_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral152;
extern "C" void GameCenter_Authenticate_m794 (GameCenter_t223 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAuthenticateU3Ec__AnonStorey3_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(156);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		Action_1_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		ILocalUser_t272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m782_MethodInfo_var = il2cpp_codegen_method_info_from_index(97);
		Action_1__ctor_m985_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483746);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * V_0 = {0};
	U3CAuthenticateU3Ec__AnonStorey3_t222 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_0 = (U3CAuthenticateU3Ec__AnonStorey3_t222 *)il2cpp_codegen_object_new (U3CAuthenticateU3Ec__AnonStorey3_t222_il2cpp_TypeInfo_var);
		U3CAuthenticateU3Ec__AnonStorey3__ctor_m781(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_1 = V_1;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_1 = __this;
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_2);
		L_2->___log_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		bool L_4 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14;
		if (L_4)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_5 = 5;
		Object_t * L_6 = Box(Event_t24_il2cpp_TypeInfo_var, &L_5);
		RMXObject_WillBeginEvent_m77(__this, (Enum_t6 *)L_6, /*hidden argument*/NULL);
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		Object_t * L_7 = Social_get_localUser_m975(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_8 = V_1;
		IntPtr_t L_9 = { (void*)U3CAuthenticateU3Ec__AnonStorey3_U3CU3Em__1_m782_MethodInfo_var };
		Action_1_t147 * L_10 = (Action_1_t147 *)il2cpp_codegen_object_new (Action_1_t147_il2cpp_TypeInfo_var);
		Action_1__ctor_m985(L_10, L_8, L_9, /*hidden argument*/Action_1__ctor_m985_MethodInfo_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< Action_1_t147 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t272_il2cpp_TypeInfo_var, L_7, L_10);
		goto IL_006c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0049;
		throw e;
	}

CATCH_0049:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t154 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14 = 0;
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_11 = V_1;
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___log_0);
		Exception_t154 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m423(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->___log_0 = L_16;
		goto IL_006c;
	} // end catch (depth: 1)

IL_006c:
	{
		goto IL_0087;
	}

IL_0071:
	{
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_17 = V_1;
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___log_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m423(NULL /*static, unused*/, L_19, _stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->___log_0 = L_20;
	}

IL_0087:
	{
		int32_t L_21 = 1;
		Object_t * L_22 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_21);
		U3CAuthenticateU3Ec__AnonStorey3_t222 * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = (L_23->___log_0);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_25 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_22, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_26 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::ReportScore(System.Int64,Procrastinate.UserData)
// System.Int64
#include "mscorlib_System_Int64.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// Procrastinate.GameCenter/<ReportScore>c__AnonStorey4
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CReportScoreU3EMethodDeclarations.h"
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* U3CReportScoreU3Ec__AnonStorey4_t224_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t278_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t147_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m784_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m985_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern "C" void GameCenter_ReportScore_m795 (GameCenter_t223 * __this, int64_t ___score, int32_t ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		U3CReportScoreU3Ec__AnonStorey4_t224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int64_t278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		Action_1_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m784_MethodInfo_var = il2cpp_codegen_method_info_from_index(99);
		Action_1__ctor_m985_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483746);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	Exception_t154 * V_2 = {0};
	U3CReportScoreU3Ec__AnonStorey4_t224 * V_3 = {0};
	String_t* V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		bool L_0 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14;
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
		U3CReportScoreU3Ec__AnonStorey4_t224 * L_2 = (U3CReportScoreU3Ec__AnonStorey4_t224 *)il2cpp_codegen_object_new (U3CReportScoreU3Ec__AnonStorey4_t224_il2cpp_TypeInfo_var);
		U3CReportScoreU3Ec__AnonStorey4__ctor_m783(L_2, /*hidden argument*/NULL);
		V_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		Dictionary_2_t227 * L_3 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UniqueID_15;
		int32_t L_4 = ___data;
		NullCheck(L_3);
		String_t* L_5 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		U3CReportScoreU3Ec__AnonStorey4_t224 * L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___log_0 = L_7;
		V_1 = 1;
		U3CReportScoreU3Ec__AnonStorey4_t224 * L_8 = V_3;
		U3CReportScoreU3Ec__AnonStorey4_t224 * L_9 = V_3;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___log_0);
		V_4 = L_10;
		ObjectU5BU5D_t148* L_11 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 5));
		String_t* L_12 = V_4;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t148* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, _stringLiteral153);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral153;
		ObjectU5BU5D_t148* L_14 = L_13;
		int64_t L_15 = ___score;
		int64_t L_16 = L_15;
		Object_t * L_17 = Box(Int64_t278_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 2, sizeof(Object_t *))) = (Object_t *)L_17;
		ObjectU5BU5D_t148* L_18 = L_14;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 3);
		ArrayElementTypeCheck (L_18, _stringLiteral154);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral154;
		ObjectU5BU5D_t148* L_19 = L_18;
		String_t* L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 4);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 4, sizeof(Object_t *))) = (Object_t *)L_20;
		String_t* L_21 = String_Concat_m422(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
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
			U3CReportScoreU3Ec__AnonStorey4_t224 * L_24 = V_3;
			IntPtr_t L_25 = { (void*)U3CReportScoreU3Ec__AnonStorey4_U3CU3Em__2_m784_MethodInfo_var };
			Action_1_t147 * L_26 = (Action_1_t147 *)il2cpp_codegen_object_new (Action_1_t147_il2cpp_TypeInfo_var);
			Action_1__ctor_m985(L_26, L_24, L_25, /*hidden argument*/Action_1__ctor_m985_MethodInfo_var);
			Social_ReportScore_m986(NULL /*static, unused*/, L_22, L_23, L_26, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xBF, FINALLY_009e);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0084;
			throw e;
		}

CATCH_0084:
		{ // begin catch(System.Exception)
			V_2 = ((Exception_t154 *)__exception_local);
			U3CReportScoreU3Ec__AnonStorey4_t224 * L_27 = V_3;
			U3CReportScoreU3Ec__AnonStorey4_t224 * L_28 = V_3;
			NullCheck(L_28);
			String_t* L_29 = (L_28->___log_0);
			Exception_t154 * L_30 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_31 = String_Concat_m606(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
			NullCheck(L_27);
			L_27->___log_0 = L_31;
			V_1 = 3;
			IL2CPP_LEAVE(0xBF, FINALLY_009e);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			int32_t L_32 = V_1;
			int32_t L_33 = L_32;
			Object_t * L_34 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_33);
			U3CReportScoreU3Ec__AnonStorey4_t224 * L_35 = V_3;
			NullCheck(L_35);
			String_t* L_36 = (L_35->___log_0);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_37 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_34, L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_00be;
			}
		}

IL_00b4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_38 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		}

IL_00be:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00bf:
	{
		return;
	}
}
// System.Void Procrastinate.GameCenter::Update()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern const Il2CppType* UserData_t253_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t6_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral147;
extern Il2CppCodeGenString* _stringLiteral118;
extern Il2CppCodeGenString* _stringLiteral155;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void GameCenter_Update_m796 (GameCenter_t223 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_0_0_0_var = il2cpp_codegen_type_from_index(124);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		Enum_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		float L_0 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->____checkTime_13);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(UserData_t253_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t6_il2cpp_TypeInfo_var);
		Array_t * L_4 = Enum_GetValues_m947(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_6);
			V_1 = ((*(int32_t*)((int32_t*)UnBox (L_7, Int32_t151_il2cpp_TypeInfo_var))));
		}

IL_003c:
		try
		{ // begin try (depth: 2)
			String_t* L_8 = V_0;
			V_3 = L_8;
			ObjectU5BU5D_t148* L_9 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 8));
			String_t* L_10 = V_3;
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
			ArrayElementTypeCheck (L_9, L_10);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0, sizeof(Object_t *))) = (Object_t *)L_10;
			ObjectU5BU5D_t148* L_11 = L_9;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
			ArrayElementTypeCheck (L_11, _stringLiteral147);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral147;
			ObjectU5BU5D_t148* L_12 = L_11;
			int32_t L_13 = V_1;
			int32_t L_14 = L_13;
			Object_t * L_15 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
			ArrayElementTypeCheck (L_12, L_15);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2, sizeof(Object_t *))) = (Object_t *)L_15;
			ObjectU5BU5D_t148* L_16 = L_12;
			NullCheck(L_16);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 3);
			ArrayElementTypeCheck (L_16, _stringLiteral118);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral118;
			ObjectU5BU5D_t148* L_17 = L_16;
			int32_t L_18 = V_1;
			int32_t L_19 = L_18;
			Object_t * L_20 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_19);
			bool L_21 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, L_20, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
			bool L_22 = L_21;
			Object_t * L_23 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_22);
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
			ArrayElementTypeCheck (L_17, L_23);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4, sizeof(Object_t *))) = (Object_t *)L_23;
			ObjectU5BU5D_t148* L_24 = L_17;
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 5);
			ArrayElementTypeCheck (L_24, _stringLiteral155);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral155;
			ObjectU5BU5D_t148* L_25 = L_24;
			int32_t L_26 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
			bool L_27 = GameCenter_HasMetTimeCriteria_m798(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			bool L_28 = L_27;
			Object_t * L_29 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_28);
			NullCheck(L_25);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 6);
			ArrayElementTypeCheck (L_25, L_29);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 6, sizeof(Object_t *))) = (Object_t *)L_29;
			ObjectU5BU5D_t148* L_30 = L_25;
			NullCheck(L_30);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 7);
			ArrayElementTypeCheck (L_30, _stringLiteral11);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral11;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_31 = String_Concat_m422(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
			V_0 = L_31;
			goto IL_00a3;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
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
			bool L_33 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_32);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00b3;
	}

FINALLY_00b3:
	{ // begin finally (depth: 1)
		{
			Object_t * L_34 = V_2;
			V_4 = ((Object_t *)IsInst(L_34, IDisposable_t157_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_36);
			IL2CPP_END_FINALLY(179)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(179)
	{
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00c8:
	{
		int32_t L_37 = 2;
		Object_t * L_38 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_40 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00e3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_41 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		float L_42 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameController_t228 * L_43 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_43);
		float L_44 = (L_43->___updateScoresEvery_35);
		__this->____checkTime_13 = ((float)((float)L_42+(float)L_44));
	}

IL_00f9:
	{
		return;
	}
}
// System.Boolean Procrastinate.GameCenter::HasPlayerAlreadyAchieved(Procrastinate.UserData)
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern "C" bool GameCenter_HasPlayerAlreadyAchieved_m797 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, L_2, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
		return L_3;
	}
}
// System.Boolean Procrastinate.GameCenter::HasMetTimeCriteria(Procrastinate.UserData)
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenterMethodDeclarations.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral156;
extern "C" bool GameCenter_HasMetTimeCriteria_m798 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		_stringLiteral156 = il2cpp_codegen_string_literal_from_index(156);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = {0};
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		V_0 = L_2;
		int32_t L_3 = ___key;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, L_5, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
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
		if (((int32_t)((int32_t)L_8-(int32_t)7)) == 0)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)7)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)7)) == 2)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)7)) == 3)
		{
			goto IL_005f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)7)) == 4)
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
		GameController_t228 * L_12 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13 = GameController_get_TotalDevTimeWasted_m803(L_12, /*hidden argument*/NULL);
		V_1 = ((((float)L_11) > ((float)((float)((float)L_13/(float)(4.0f)))))? 1 : 0);
		goto IL_00ba;
	}

IL_0078:
	{
		float L_14 = V_0;
		GameController_t228 * L_15 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		float L_16 = GameController_get_TotalDevTimeWasted_m803(L_15, /*hidden argument*/NULL);
		V_1 = ((((float)L_14) > ((float)((float)((float)L_16/(float)(2.0f)))))? 1 : 0);
		goto IL_00ba;
	}

IL_0091:
	{
		float L_17 = V_0;
		GameController_t228 * L_18 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_19 = GameController_get_TotalDevTimeWasted_m803(L_18, /*hidden argument*/NULL);
		V_1 = ((((float)L_17) > ((float)L_19))? 1 : 0);
		goto IL_00ba;
	}

IL_00a4:
	{
		int32_t L_20 = ___key;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m606(NULL /*static, unused*/, L_22, _stringLiteral156, /*hidden argument*/NULL);
		Exception_t154 * L_24 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_24);
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
		Object_t * L_27 = Box(Event_t24_il2cpp_TypeInfo_var, &L_26);
		int32_t L_28 = ___key;
		int32_t L_29 = L_28;
		Object_t * L_30 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_29);
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m64(NULL /*static, unused*/, (Enum_t6 *)L_27, L_30, /*hidden argument*/NULL);
		int32_t L_31 = ___key;
		int32_t L_32 = L_31;
		Object_t * L_33 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_32);
		SavedData_Set_m103(NULL /*static, unused*/, L_33, 1, /*hidden argument*/NULL);
		return 1;
	}

IL_00df:
	{
		return 0;
	}
}
// System.Void Procrastinate.GameCenter::ReportProgress(Procrastinate.UserData)
// UnityEngine.SocialPlatforms.GKAchievementReporter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_SocialPlatforms_GKMethodDeclarations.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral157;
extern Il2CppCodeGenString* _stringLiteral158;
extern Il2CppCodeGenString* _stringLiteral159;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" void GameCenter_ReportProgress_m799 (GameCenter_t223 * __this, int32_t ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		_stringLiteral157 = il2cpp_codegen_string_literal_from_index(157);
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	int32_t V_2 = {0};
	float V_3 = 0.0f;
	Exception_t154 * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___data;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, L_2, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_5 = ___data;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_7);
		bool L_9 = V_0;
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m426(NULL /*static, unused*/, L_8, _stringLiteral157, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		V_2 = 2;
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		G_B5_0 = ((int32_t)100);
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 0;
	}

IL_003f:
	{
		V_3 = (((float)G_B5_0));
		float L_14 = V_3;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_15 = ___data;
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_17);
		float L_19 = V_3;
		float L_20 = L_19;
		Object_t * L_21 = Box(Single_t176_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m426(NULL /*static, unused*/, L_18, _stringLiteral158, L_21, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return;
	}

IL_006d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		bool L_23 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14;
		if (!L_23)
		{
			goto IL_00eb;
		}
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		Dictionary_2_t227 * L_24 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UniqueID_15;
		int32_t L_25 = ___data;
		NullCheck(L_24);
		String_t* L_26 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::get_Item(!0) */, L_24, L_25);
		float L_27 = V_3;
		GKAchievementReporter_ReportAchievement_m1(NULL /*static, unused*/, L_26, L_27, 1, /*hidden argument*/NULL);
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m423(NULL /*static, unused*/, L_28, _stringLiteral159, /*hidden argument*/NULL);
		V_1 = L_29;
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_009a;
		throw e;
	}

CATCH_009a:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t154 *)__exception_local);
			int32_t L_30 = 3;
			Object_t * L_31 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_30);
			Exception_t154 * L_32 = V_4;
			NullCheck(L_32);
			String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_34 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_31, L_33, /*hidden argument*/NULL);
			if (L_34)
			{
				goto IL_00ca;
			}
		}

IL_00b3:
		{
			int32_t L_35 = 2;
			Object_t * L_36 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_35);
			Exception_t154 * L_37 = V_4;
			NullCheck(L_37);
			String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_37);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_39 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_36, L_38, /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_00d4;
			}
		}

IL_00ca:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_40 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		}

IL_00d4:
		{
			goto IL_00d9;
		}
	} // end catch (depth: 1)

IL_00d9:
	{
		String_t* L_41 = V_1;
		float L_42 = V_3;
		float L_43 = L_42;
		Object_t * L_44 = Box(Single_t176_il2cpp_TypeInfo_var, &L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m426(NULL /*static, unused*/, L_41, _stringLiteral160, L_44, /*hidden argument*/NULL);
		V_1 = L_45;
	}

IL_00eb:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = L_46;
		Object_t * L_48 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_47);
		String_t* L_49 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_50 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0106;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_51 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
	}

IL_0106:
	{
		return;
	}
}
// System.Boolean Procrastinate.GameCenter::CheckAchievementsWithGameCenter(Procrastinate.UserData)
// Procrastinate.GameCenter/<CheckAchievementsWithGameCenter>c__AnonStorey5
#include "AssemblyU2DCSharp_Procrastinate_GameCenter_U3CCheckAchievemeMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
extern TypeInfo* U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t279_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m786_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m987_MethodInfo_var;
extern "C" bool GameCenter_CheckAchievementsWithGameCenter_m800 (GameCenter_t223 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Action_1_t279_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m786_MethodInfo_var = il2cpp_codegen_method_info_from_index(100);
		Action_1__ctor_m987_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483749);
		s_Il2CppMethodIntialized = true;
	}
	ArgumentException_t275 * V_0 = {0};
	U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * L_0 = (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 *)il2cpp_codegen_object_new (U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225_il2cpp_TypeInfo_var);
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5__ctor_m785(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		Dictionary_2_t227 * L_2 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UniqueID_15;
		int32_t L_3 = ___key;
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::get_Item(!0) */, L_2, L_3);
		NullCheck(L_1);
		L_1->___achievementID_1 = L_4;
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * L_5 = V_1;
		NullCheck(L_5);
		L_5->___isComplete_2 = 0;
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___log_0 = L_7;
		bool L_8 = ((GameCenter_t223_StaticFields*)GameCenter_t223_il2cpp_TypeInfo_var->static_fields)->___UserAuthenticated_14;
		if (!L_8)
		{
			goto IL_006f;
		}
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * L_9 = V_1;
		IntPtr_t L_10 = { (void*)U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_U3CU3Em__3_m786_MethodInfo_var };
		Action_1_t279 * L_11 = (Action_1_t279 *)il2cpp_codegen_object_new (Action_1_t279_il2cpp_TypeInfo_var);
		Action_1__ctor_m987(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m987_MethodInfo_var);
		Social_LoadAchievements_m988(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_006f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t275_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0049;
		throw e;
	}

CATCH_0049:
	{ // begin catch(System.ArgumentException)
		{
			V_0 = ((ArgumentException_t275 *)__exception_local);
			int32_t L_12 = 2;
			Object_t * L_13 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_12);
			ArgumentException_t275 * L_14 = V_0;
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.ArgumentException::get_Message() */, L_14);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_16 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_13, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_006a;
			}
		}

IL_0060:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_17 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		}

IL_006a:
		{
			goto IL_006f;
		}
	} // end catch (depth: 1)

IL_006f:
	{
		U3CCheckAchievementsWithGameCenterU3Ec__AnonStorey5_t225 * L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = (L_18->___isComplete_2);
		return L_19;
	}
}
// System.Void Procrastinate.GameCenter::OnApplicationQuit()
// Procrastinate.GameData
#include "AssemblyU2DCSharp_Procrastinate_GameDataMethodDeclarations.h"
extern "C" void GameCenter_OnApplicationQuit_m801 (GameCenter_t223 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = GameData_get_PercentageOfDevTimeWastedX10000_m839(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameCenter_ReportScore_m795(__this, L_0, 6, /*hidden argument*/NULL);
		return;
	}
}
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
// RMX.AGameController`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen_0MethodDeclarations.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.GameData>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_5MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_7MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<RMX.Gyro>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_6MethodDeclarations.h"
// Procrastinate.Version
#include "AssemblyU2DCSharp_Procrastinate_VersionMethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_9MethodDeclarations.h"
// System.Void Procrastinate.GameController::.ctor()
// RMX.AGameController`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen_0MethodDeclarations.h"
extern const MethodInfo* AGameController_1__ctor_m989_MethodInfo_var;
extern "C" void GameController__ctor_m802 (GameController_t228 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AGameController_1__ctor_m989_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483750);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___MaxNumberOfClocks_30 = ((int32_t)50);
		__this->___FingerSize_31 = (0.3f);
		__this->___updateScoresEvery_35 = (1.0f);
		__this->____totalDevTimeWastedInHours_36 = (5.0f);
		__this->____chance_37 = ((int32_t)50);
		__this->____firstLoad_38 = 1;
		AGameController_1__ctor_m989(__this, /*hidden argument*/AGameController_1__ctor_m989_MethodInfo_var);
		return;
	}
}
// System.Single Procrastinate.GameController::get_TotalDevTimeWasted()
extern "C" float GameController_get_TotalDevTimeWasted_m803 (GameController_t228 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->____totalDevTimeWastedInHours_36);
		return ((float)((float)((float)((float)L_0*(float)(60.0f)))*(float)(60.0f)));
	}
}
// System.Boolean Procrastinate.GameController::get_Chance()
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern "C" bool GameController_get_Chance_m804 (GameController_t228 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m506(NULL /*static, unused*/, 0, ((int32_t)100), /*hidden argument*/NULL);
		int32_t L_1 = (__this->____chance_37);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Procrastinate.GameController::ChanceGiven(Procrastinate.UserData)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenterMethodDeclarations.h"
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern "C" bool GameController_ChanceGiven_m805 (GameController_t228 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = GameController_get_Chance_m804(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		bool L_2 = GameCenter_HasPlayerAlreadyAchieved_m797(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t44  GameController_get_velocity_m806 (GameController_t228 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_forward_m619(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___x_1);
		Transform_t41 * L_3 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t42  L_4 = Transform_get_forward_m619(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___y_2);
		Vector2_t44  L_6 = {0};
		Vector2__ctor_m555(&L_6, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean Procrastinate.GameController::get_isFirstPlay()
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" bool GameController_get_isFirstPlay_m807 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_1);
		String_t* L_3 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((((Object_t*)(String_t*)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Procrastinate.GameController::StartSingletons()
// RMX.Singletons/ASingleton`1<Procrastinate.GameCenter>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_4MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.GameData>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_5MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.DragRigidbody>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_3MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.ClockSpawner>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_2MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_7MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t226_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t231_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t219_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t210_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t241_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m990_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m991_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m992_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m993_MethodInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m994_MethodInfo_var;
extern "C" void GameController_StartSingletons_m808 (GameController_t228 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		ASingleton_1_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		ASingleton_1_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		ASingleton_1_t210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASingleton_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		ASingleton_1_Initialize_m990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		ASingleton_1_Initialize_m991_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483752);
		ASingleton_1_Initialize_m992_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483753);
		ASingleton_1_Initialize_m993_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483754);
		ASingleton_1_Initialize_m994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483755);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t226_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m990(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m990_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t231_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m991(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m991_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t219_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m992(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m992_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t210_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m993(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m993_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t241_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m994(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m994_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.GameController::StartDesktop()
extern "C" void GameController_StartDesktop_m809 (GameController_t228 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Procrastinate.GameController::StartMobile()
// RMX.Singletons/ASingleton`1<RMX.Gyro>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_6MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t235_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m995_MethodInfo_var;
extern "C" void GameController_StartMobile_m810 (GameController_t228 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		ASingleton_1_Initialize_m995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483756);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t235_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m995(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m995_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.GameController::PreStart()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral161;
extern "C" void GameController_PreStart_m811 (GameController_t228 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Random_Range_m506(NULL /*static, unused*/, ((int32_t)10), ((int32_t)90), /*hidden argument*/NULL);
		__this->____chance_37 = L_0;
		TextAsset_t138 * L_1 = (TextAsset_t138 *)VirtFuncInvoker0< TextAsset_t138 * >::Invoke(30 /* UnityEngine.TextAsset RMX.AGameController`1<Procrastinate.GameController>::get_Database() */, __this);
		bool L_2 = Object_op_Implicit_m554(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		Debug_LogWarning_m443(NULL /*static, unused*/, _stringLiteral161, /*hidden argument*/NULL);
	}

IL_0029:
	{
		int32_t L_3 = Random_Range_m506(NULL /*static, unused*/, 1, ((int32_t)10), /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)5)))
		{
			goto IL_003e;
		}
	}
	{
		__this->___ClockSpawnMode_32 = 0;
	}

IL_003e:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::PostStart()
extern "C" void GameController_PostStart_m812 (GameController_t228 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AGameController_1_t229 *)__this)->___safeMode_12);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(38 /* System.Void Procrastinate.GameController::StartMobile() */, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::OnApplicationFocus(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void GameController_OnApplicationFocus_m813 (GameController_t228 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		GameController_PauseGame_m815(__this, 1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::OnApplicationPause(System.Boolean)
extern "C" void GameController_OnApplicationPause_m814 (GameController_t228 * __this, bool ___pause, const MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		GameController_PauseGame_m815(__this, 1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::PauseGame(System.Boolean)
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern "C" void GameController_PauseGame_m815 (GameController_t228 * __this, bool ___Pause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___willPauseOnLoad_33);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = 4;
		Object_t * L_2 = Box(Event_t221_il2cpp_TypeInfo_var, &L_1);
		VirtActionInvoker2< bool, Object_t * >::Invoke(40 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, __this, 1, L_2);
		__this->___willPauseOnLoad_33 = 0;
		goto IL_002c;
	}

IL_0024:
	{
		VirtActionInvoker2< bool, Object_t * >::Invoke(40 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, __this, 1, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void Procrastinate.GameController::CheckForAnomalies()
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviourMethodDeclarations.h"
extern "C" void GameController_CheckForAnomalies_m816 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		ClockBehaviour_CheckVisibleClocks_m730(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameController::Patch()
// Procrastinate.Version
#include "AssemblyU2DCSharp_Procrastinate_VersionMethodDeclarations.h"
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern "C" void GameController_Patch_m817 (GameController_t228 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_Patch_m880(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.GameController::get_isPaused()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern "C" bool GameController_get_isPaused_m818 (GameController_t228 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_timeScale_m439(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)((((float)L_0) == ((float)(1.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Procrastinate.GameController::get_FirstLoad()
extern "C" bool GameController_get_FirstLoad_m819 (GameController_t228 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____firstLoad_38);
		return L_0;
	}
}
// System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void GameController_PauseGame_m820 (GameController_t228 * __this, bool ___pause, Object_t * ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean Procrastinate.GameController::IsDebugging(System.Enum)
// System.Enum
#include "mscorlib_System_Enum.h"
extern TypeInfo* Tests_t251_il2cpp_TypeInfo_var;
extern const MethodInfo* AGameController_1_IsDebugging_m996_MethodInfo_var;
extern "C" bool GameController_IsDebugging_m821 (GameController_t228 * __this, Enum_t6 * ___feature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tests_t251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		AGameController_1_IsDebugging_m996_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483757);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (((AGameController_1_t229 *)__this)->____buildForRelease_10);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Enum_t6 * L_1 = ___feature;
		int32_t L_2 = 0;
		Object_t * L_3 = Box(Tests_t251_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_1, L_3);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		bool L_5 = (((AGameController_1_t229 *)__this)->___DebugGameDataLists_20);
		return L_5;
	}

IL_0025:
	{
		Enum_t6 * L_6 = ___feature;
		bool L_7 = AGameController_1_IsDebugging_m996(__this, L_6, /*hidden argument*/AGameController_1_IsDebugging_m996_MethodInfo_var);
		return L_7;
	}
}
// Procrastinate.GameController Procrastinate.GameController::get_current()
// RMX.Singletons/ASingleton`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_9MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t280_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get__current_m997_MethodInfo_var;
extern "C" GameController_t228 * GameController_get_current_m822 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		ASingleton_1_get__current_m997_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483758);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t280_il2cpp_TypeInfo_var);
		GameController_t228 * L_0 = ASingleton_1_get__current_m997(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get__current_m997_MethodInfo_var);
		return L_0;
	}
}
// System.Void Procrastinate.GameController::Update()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" void GameController_Update_m823 (GameController_t228 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m998(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = GameController_get_isPaused_m818(__this, /*hidden argument*/NULL);
		VirtActionInvoker2< bool, Object_t * >::Invoke(40 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, __this, ((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$36
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24Arra.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Void Procrastinate.GameData::.ctor()
// RMX.Singletons/ASingleton`1<Procrastinate.GameData>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_5MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t231_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m999_MethodInfo_var;
extern "C" void GameData__ctor_m824 (GameData_t230 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		ASingleton_1__ctor_m999_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t231_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m999(__this, /*hidden argument*/ASingleton_1__ctor_m999_MethodInfo_var);
		return;
	}
}
// System.Single Procrastinate.GameData::get_totalTime()
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern "C" float GameData_get_totalTime_m825 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_totalTime(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" void GameData_set_totalTime_m826 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 2;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_currentProcrastination()
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern "C" float GameData_get_currentProcrastination_m827 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 1;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_currentProcrastination(System.Single)
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" void GameData_set_currentProcrastination_m828 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 1;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_lastProcrastination()
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern "C" float GameData_get_lastProcrastination_m829 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 4;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_lastProcrastination(System.Single)
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" void GameData_set_lastProcrastination_m830 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 4;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_currentSessionTime()
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern "C" float GameData_get_currentSessionTime_m831 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 0;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_currentSessionTime(System.Single)
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" void GameData_set_currentSessionTime_m832 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 0;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_lastSessionTime()
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern "C" float GameData_get_lastSessionTime_m833 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 3;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_lastSessionTime(System.Single)
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" void GameData_set_lastSessionTime_m834 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 3;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Procrastinate.GameData::get_longestProcrastination()
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern "C" float GameData_get_longestProcrastination_m835 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 5;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.GameData::set_longestProcrastination(System.Single)
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" void GameData_set_longestProcrastination_m836 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = 5;
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameData::Update()
// Procrastinate.GameData
#include "AssemblyU2DCSharp_Procrastinate_GameDataMethodDeclarations.h"
extern "C" void GameData_Update_m837 (GameData_t230 * __this, const MethodInfo* method)
{
	{
		GameData_UpdateScoresAndReset_m841(__this, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GameData::OnApplicationQuit()
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
extern "C" void GameData_OnApplicationQuit_m838 (GameData_t230 * __this, const MethodInfo* method)
{
	{
		GameData_UpdateScoresAndReset_m841(__this, 1, 1, /*hidden argument*/NULL);
		PlayerPrefs_Save_m1000(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Procrastinate.GameData::get_PercentageOfDevTimeWastedX10000()
extern "C" int64_t GameData_get_PercentageOfDevTimeWastedX10000_m839 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		double L_0 = GameData_get_PercentageOfDevTimeWasted_m840(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (((int64_t)((double)((double)L_0*(double)(10000.0)))));
	}
}
// System.Double Procrastinate.GameData::get_PercentageOfDevTimeWasted()
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern "C" double GameData_get_PercentageOfDevTimeWasted_m840 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		float L_0 = GameData_get_totalTime_m825(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameController_t228 * L_1 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = GameController_get_TotalDevTimeWasted_m803(L_1, /*hidden argument*/NULL);
		return (((double)((float)((float)L_0/(float)L_2))));
	}
}
// System.Void Procrastinate.GameData::UpdateScoresAndReset(System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern "C" void GameData_UpdateScoresAndReset_m841 (GameData_t230 * __this, bool ___reset, bool ___final, const MethodInfo* method)
{
	{
		float L_0 = GameData_get_totalTime_m825(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_totalTime_m826(NULL /*static, unused*/, ((float)((float)L_0+(float)L_1)), /*hidden argument*/NULL);
		float L_2 = GameData_get_currentProcrastination_m827(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_currentProcrastination_m828(NULL /*static, unused*/, ((float)((float)L_2+(float)L_3)), /*hidden argument*/NULL);
		float L_4 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_currentSessionTime_m832(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		GameController_t228 * L_5 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = GameData_get_currentProcrastination_m827(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = GameData_get_longestProcrastination_m835(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___newPersonalBest_34 = ((((float)L_6) > ((float)L_7))? 1 : 0);
		GameController_t228 * L_8 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = (L_8->___newPersonalBest_34);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		float L_10 = GameData_get_currentProcrastination_m827(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_longestProcrastination_m836(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0059:
	{
		bool L_11 = ___reset;
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		float L_12 = GameData_get_currentProcrastination_m827(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_lastProcrastination_m830(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		GameData_set_currentProcrastination_m828(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
	}

IL_0073:
	{
		bool L_13 = ___final;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		float L_14 = GameData_get_currentSessionTime_m831(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameData_set_lastSessionTime_m834(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_0083:
	{
		return;
	}
}
// System.Void Procrastinate.GameData::OnEventDidStart(System.Enum,System.Object)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern "C" void GameData_OnEventDidStart_m842 (GameData_t230 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 3;
		Object_t * L_2 = Box(Event_t24_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		GameData_UpdateScoresAndReset_m841(__this, 1, 0, /*hidden argument*/NULL);
		goto IL_0037;
	}

IL_001e:
	{
		Enum_t6 * L_4 = ___theEvent;
		int32_t L_5 = 2;
		Object_t * L_6 = Box(Event_t24_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		GameData_UpdateScoresAndReset_m841(__this, 1, 0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void Procrastinate.GameData::TestData()
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// Procrastinate.DataReader
#include "AssemblyU2DCSharp_Procrastinate_DataReaderMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
extern TypeInfo* SingleU5BU5D_t133_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t281_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1002_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1003_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1004_MethodInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t257____U24U24fieldU2D0_0_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral162;
extern Il2CppCodeGenString* _stringLiteral163;
extern "C" void GameData_TestData_m843 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Enumerator_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m1002_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483760);
		Enumerator_get_Current_m1003_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483761);
		Enumerator_MoveNext_m1004_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483762);
		U3CPrivateImplementationDetailsU3E_t257____U24U24fieldU2D0_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(173, 0);
		_stringLiteral162 = il2cpp_codegen_string_literal_from_index(162);
		_stringLiteral163 = il2cpp_codegen_string_literal_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	SingleU5BU5D_t133* V_0 = {0};
	float V_1 = 0.0f;
	SingleU5BU5D_t133* V_2 = {0};
	int32_t V_3 = 0;
	Wychd_t212 * V_4 = {0};
	String_t* V_5 = {0};
	Enumerator_t281  V_6 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SingleU5BU5D_t133* L_0 = ((SingleU5BU5D_t133*)SZArrayNew(SingleU5BU5D_t133_il2cpp_TypeInfo_var, ((int32_t)9)));
		RuntimeHelpers_InitializeArray_m1001(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t257____U24U24fieldU2D0_0_FieldInfo_var), /*hidden argument*/NULL);
		V_0 = L_0;
		SingleU5BU5D_t133* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0083;
	}

IL_001c:
	{
		SingleU5BU5D_t133* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (((float)(*(float*)(float*)SZArrayLdElema(L_2, L_4, sizeof(float)))));
		float L_5 = V_1;
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t176_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m426(NULL /*static, unused*/, _stringLiteral162, L_7, _stringLiteral163, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		float L_9 = V_1;
		Wychd_t212 * L_10 = DataReader_GetActivityList_m756(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Wychd_t212 * L_11 = V_4;
		NullCheck(L_11);
		Enumerator_t281  L_12 = List_1_GetEnumerator_m1002(L_11, /*hidden argument*/List_1_GetEnumerator_m1002_MethodInfo_var);
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
			String_t* L_13 = Enumerator_get_Current_m1003((&V_6), /*hidden argument*/Enumerator_get_Current_m1003_MethodInfo_var);
			V_5 = L_13;
			String_t* L_14 = V_5;
			Debug_Log_m454(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		}

IL_0061:
		{
			bool L_15 = Enumerator_MoveNext_m1004((&V_6), /*hidden argument*/Enumerator_MoveNext_m1004_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		Enumerator_t281  L_16 = V_6;
		Enumerator_t281  L_17 = L_16;
		Object_t * L_18 = Box(Enumerator_t281_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_18);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_007f:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_20 = V_3;
		SingleU5BU5D_t133* L_21 = V_2;
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
// Procrastinate.Wychd
#include "AssemblyU2DCSharp_Procrastinate_WychdMethodDeclarations.h"
extern TypeInfo* Wychd_t212_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral164;
extern Il2CppCodeGenString* _stringLiteral165;
extern Il2CppCodeGenString* _stringLiteral166;
extern Il2CppCodeGenString* _stringLiteral167;
extern Il2CppCodeGenString* _stringLiteral168;
extern Il2CppCodeGenString* _stringLiteral169;
extern Il2CppCodeGenString* _stringLiteral170;
extern Il2CppCodeGenString* _stringLiteral171;
extern Il2CppCodeGenString* _stringLiteral172;
extern Il2CppCodeGenString* _stringLiteral173;
extern Il2CppCodeGenString* _stringLiteral174;
extern Il2CppCodeGenString* _stringLiteral175;
extern "C" Wychd_t212 * GameData_DefaultList_m844 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Wychd_t212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		_stringLiteral164 = il2cpp_codegen_string_literal_from_index(164);
		_stringLiteral165 = il2cpp_codegen_string_literal_from_index(165);
		_stringLiteral166 = il2cpp_codegen_string_literal_from_index(166);
		_stringLiteral167 = il2cpp_codegen_string_literal_from_index(167);
		_stringLiteral168 = il2cpp_codegen_string_literal_from_index(168);
		_stringLiteral169 = il2cpp_codegen_string_literal_from_index(169);
		_stringLiteral170 = il2cpp_codegen_string_literal_from_index(170);
		_stringLiteral171 = il2cpp_codegen_string_literal_from_index(171);
		_stringLiteral172 = il2cpp_codegen_string_literal_from_index(172);
		_stringLiteral173 = il2cpp_codegen_string_literal_from_index(173);
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		_stringLiteral175 = il2cpp_codegen_string_literal_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	Wychd_t212 * V_0 = {0};
	float V_1 = 0.0f;
	{
		Wychd_t212 * L_0 = (Wychd_t212 *)il2cpp_codegen_object_new (Wychd_t212_il2cpp_TypeInfo_var);
		Wychd__ctor_m749(L_0, /*hidden argument*/NULL);
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
		Wychd_t212 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, _stringLiteral164);
		Wychd_t212 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_4, _stringLiteral165);
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
		Wychd_t212 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_6, _stringLiteral166);
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
		Wychd_t212 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_8, _stringLiteral167);
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
		Wychd_t212 * L_10 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_10, _stringLiteral168);
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
		Wychd_t212 * L_12 = V_0;
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_12, _stringLiteral169);
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
		Wychd_t212 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_14, _stringLiteral170);
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
		Wychd_t212 * L_16 = V_0;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_16, _stringLiteral171);
		goto IL_010c;
	}

IL_00e0:
	{
		Wychd_t212 * L_17 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_17, _stringLiteral172);
		Wychd_t212 * L_18 = V_0;
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_18, _stringLiteral173);
		Wychd_t212 * L_19 = V_0;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_19, _stringLiteral174);
		Wychd_t212 * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_20, _stringLiteral175);
	}

IL_010c:
	{
		Wychd_t212 * L_21 = V_0;
		return L_21;
	}
}
// Procrastinate.Wychd Procrastinate.GameData::WhatYouCouldHaveDone(System.Single)
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// RMX.AGameController`1<Procrastinate.GameController>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen_0MethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t282_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* Tests_t251_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t281_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* AGameController_1_ShouldDebug_m1006_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1002_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1003_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1004_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral177;
extern Il2CppCodeGenString* _stringLiteral178;
extern Il2CppCodeGenString* _stringLiteral179;
extern Il2CppCodeGenString* _stringLiteral180;
extern Il2CppCodeGenString* _stringLiteral181;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral182;
extern Il2CppCodeGenString* _stringLiteral183;
extern "C" Wychd_t212 * GameData_WhatYouCouldHaveDone_m845 (Object_t * __this /* static, unused */, float ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		UnityException_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Tests_t251_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Enumerator_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		AGameController_1_ShouldDebug_m1006_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483763);
		List_1_GetEnumerator_m1002_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483760);
		Enumerator_get_Current_m1003_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483761);
		Enumerator_MoveNext_m1004_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483762);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral177 = il2cpp_codegen_string_literal_from_index(177);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		_stringLiteral180 = il2cpp_codegen_string_literal_from_index(180);
		_stringLiteral181 = il2cpp_codegen_string_literal_from_index(181);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		_stringLiteral183 = il2cpp_codegen_string_literal_from_index(183);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Wychd_t212 * V_1 = {0};
	Exception_t154 * V_2 = {0};
	String_t* V_3 = {0};
	Enumerator_t281  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral176;
		V_1 = (Wychd_t212 *)NULL;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				float L_0 = ___time;
				Wychd_t212 * L_1 = DataReader_GetActivityList_m756(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
				V_1 = L_1;
				String_t* L_2 = V_0;
				V_5 = L_2;
				ObjectU5BU5D_t148* L_3 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 6));
				String_t* L_4 = V_5;
				NullCheck(L_3);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
				ArrayElementTypeCheck (L_3, L_4);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0, sizeof(Object_t *))) = (Object_t *)L_4;
				ObjectU5BU5D_t148* L_5 = L_3;
				NullCheck(L_5);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
				ArrayElementTypeCheck (L_5, _stringLiteral177);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral177;
				ObjectU5BU5D_t148* L_6 = L_5;
				float L_7 = ___time;
				float L_8 = L_7;
				Object_t * L_9 = Box(Single_t176_il2cpp_TypeInfo_var, &L_8);
				NullCheck(L_6);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
				ArrayElementTypeCheck (L_6, L_9);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2, sizeof(Object_t *))) = (Object_t *)L_9;
				ObjectU5BU5D_t148* L_10 = L_6;
				NullCheck(L_10);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
				ArrayElementTypeCheck (L_10, _stringLiteral178);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral178;
				ObjectU5BU5D_t148* L_11 = L_10;
				Wychd_t212 * L_12 = V_1;
				NullCheck(L_12);
				int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_12);
				int32_t L_14 = L_13;
				Object_t * L_15 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_14);
				NullCheck(L_11);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 4);
				ArrayElementTypeCheck (L_11, L_15);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 4, sizeof(Object_t *))) = (Object_t *)L_15;
				ObjectU5BU5D_t148* L_16 = L_11;
				NullCheck(L_16);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 5);
				ArrayElementTypeCheck (L_16, _stringLiteral179);
				*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral179;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_17 = String_Concat_m422(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
				V_0 = L_17;
				Wychd_t212 * L_18 = V_1;
				NullCheck(L_18);
				int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_18);
				if ((((int32_t)L_19) <= ((int32_t)0)))
				{
					goto IL_006f;
				}
			}

IL_005e:
			{
				String_t* L_20 = V_0;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_21 = String_Concat_m423(NULL /*static, unused*/, L_20, _stringLiteral180, /*hidden argument*/NULL);
				V_0 = L_21;
				goto IL_007a;
			}

IL_006f:
			{
				UnityException_t282 * L_22 = (UnityException_t282 *)il2cpp_codegen_object_new (UnityException_t282_il2cpp_TypeInfo_var);
				UnityException__ctor_m1005(L_22, _stringLiteral181, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_22);
			}

IL_007a:
			{
				IL2CPP_LEAVE(0x104, FINALLY_00a3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_007f;
			throw e;
		}

CATCH_007f:
		{ // begin catch(System.Exception)
			V_2 = ((Exception_t154 *)__exception_local);
			String_t* L_23 = V_0;
			Exception_t154 * L_24 = V_2;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m460(NULL /*static, unused*/, L_23, _stringLiteral11, L_25, _stringLiteral182, /*hidden argument*/NULL);
			V_0 = L_26;
			float L_27 = ___time;
			Wychd_t212 * L_28 = GameData_DefaultList_m844(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_1 = L_28;
			IL2CPP_LEAVE(0x104, FINALLY_00a3);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			int32_t L_29 = 0;
			Object_t * L_30 = Box(Tests_t251_il2cpp_TypeInfo_var, &L_29);
			bool L_31 = AGameController_1_ShouldDebug_m1006(NULL /*static, unused*/, (Enum_t6 *)L_30, /*hidden argument*/AGameController_1_ShouldDebug_m1006_MethodInfo_var);
			if (L_31)
			{
				goto IL_00c3;
			}
		}

IL_00b3:
		{
			int32_t L_32 = 6;
			Object_t * L_33 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_32);
			bool L_34 = AGameController_1_ShouldDebug_m1006(NULL /*static, unused*/, (Enum_t6 *)L_33, /*hidden argument*/AGameController_1_ShouldDebug_m1006_MethodInfo_var);
			if (!L_34)
			{
				goto IL_0103;
			}
		}

IL_00c3:
		{
			Wychd_t212 * L_35 = V_1;
			NullCheck(L_35);
			Enumerator_t281  L_36 = List_1_GetEnumerator_m1002(L_35, /*hidden argument*/List_1_GetEnumerator_m1002_MethodInfo_var);
			V_4 = L_36;
		}

IL_00cb:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00e5;
			}

IL_00d0:
			{
				String_t* L_37 = Enumerator_get_Current_m1003((&V_4), /*hidden argument*/Enumerator_get_Current_m1003_MethodInfo_var);
				V_3 = L_37;
				String_t* L_38 = V_0;
				String_t* L_39 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_40 = String_Concat_m440(NULL /*static, unused*/, L_38, _stringLiteral183, L_39, /*hidden argument*/NULL);
				V_0 = L_40;
			}

IL_00e5:
			{
				bool L_41 = Enumerator_MoveNext_m1004((&V_4), /*hidden argument*/Enumerator_MoveNext_m1004_MethodInfo_var);
				if (L_41)
				{
					goto IL_00d0;
				}
			}

IL_00f1:
			{
				IL2CPP_LEAVE(0x103, FINALLY_00f6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_00f6;
		}

FINALLY_00f6:
		{ // begin finally (depth: 2)
			Enumerator_t281  L_42 = V_4;
			Enumerator_t281  L_43 = L_42;
			Object_t * L_44 = Box(Enumerator_t281_il2cpp_TypeInfo_var, &L_43);
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_44);
			IL2CPP_END_FINALLY(246)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(246)
		{
			IL2CPP_JUMP_TBL(0x103, IL_0103)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_0103:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0x104, IL_0104)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0104:
	{
		int32_t L_45 = 0;
		Object_t * L_46 = Box(Tests_t251_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_48 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_46, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_49 = 6;
		Object_t * L_50 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_52 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0130;
		}
	}

IL_0126:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_53 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
	}

IL_0130:
	{
		Wychd_t212 * L_54 = V_1;
		return L_54;
	}
}
// Procrastinate.GoAwayText
#include "AssemblyU2DCSharp_Procrastinate_GoAwayText.h"
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
struct Text_t233;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m1020_gshared (Component_t178 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m1020(__this, method) (( Object_t * (*) (Component_t178 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m1020_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t233_m1008(__this, method) (( Text_t233 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m1020_gshared)(__this, method)
struct Text_t233;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Text>()
#define GameObject_AddComponent_TisText_t233_m1009(__this, method) (( Text_t233 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// System.Void Procrastinate.GoAwayText::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral184;
extern "C" void GoAwayText__ctor_m846 (GoAwayText_t232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral184 = il2cpp_codegen_string_literal_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___text_3 = _stringLiteral184;
		Color_t203  L_0 = Color_get_white_m1007(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___color_6 = L_0;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// Procrastinate.GoAwayText
#include "AssemblyU2DCSharp_Procrastinate_GoAwayTextMethodDeclarations.h"
extern const MethodInfo* Component_GetComponentInChildren_TisText_t233_m1008_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisText_t233_m1009_MethodInfo_var;
extern "C" void GoAwayText_Start_m847 (GoAwayText_t232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponentInChildren_TisText_t233_m1008_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483764);
		GameObject_AddComponent_TisText_t233_m1009_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483765);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t233 * L_0 = Component_GetComponentInChildren_TisText_t233_m1008(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t233_m1008_MethodInfo_var);
		__this->___label_2 = L_0;
		Text_t233 * L_1 = (__this->___label_2);
		bool L_2 = Object_op_Equality_m473(NULL /*static, unused*/, L_1, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00d4;
		}
	}
	{
		GameObject_t11 * L_3 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t233 * L_4 = GameObject_AddComponent_TisText_t233_m1009(L_3, /*hidden argument*/GameObject_AddComponent_TisText_t233_m1009_MethodInfo_var);
		__this->___label_2 = L_4;
		Text_t233 * L_5 = (__this->___label_2);
		GameController_t228 * L_6 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Font_t283 * L_7 = (((AGameController_1_t229 *)L_6)->___mainFont_25);
		NullCheck(L_5);
		Text_set_font_m1010(L_5, L_7, /*hidden argument*/NULL);
		Text_t233 * L_8 = (__this->___label_2);
		NullCheck(L_8);
		Text_set_fontSize_m1011(L_8, ((int32_t)62), /*hidden argument*/NULL);
		Text_t233 * L_9 = (__this->___label_2);
		int32_t L_10 = (__this->___fontStyle_4);
		NullCheck(L_9);
		Text_set_fontStyle_m1012(L_9, L_10, /*hidden argument*/NULL);
		Text_t233 * L_11 = (__this->___label_2);
		NullCheck(L_11);
		Text_set_lineSpacing_m1013(L_11, (1.0f), /*hidden argument*/NULL);
		Text_t233 * L_12 = (__this->___label_2);
		NullCheck(L_12);
		Text_set_supportRichText_m1014(L_12, 1, /*hidden argument*/NULL);
		Text_t233 * L_13 = (__this->___label_2);
		NullCheck(L_13);
		Text_set_alignment_m1015(L_13, 4, /*hidden argument*/NULL);
		Text_t233 * L_14 = (__this->___label_2);
		NullCheck(L_14);
		Text_set_horizontalOverflow_m1016(L_14, 0, /*hidden argument*/NULL);
		Text_t233 * L_15 = (__this->___label_2);
		NullCheck(L_15);
		Text_set_verticalOverflow_m1017(L_15, 0, /*hidden argument*/NULL);
		Text_t233 * L_16 = (__this->___label_2);
		bool L_17 = (__this->___bestFit_5);
		NullCheck(L_16);
		Text_set_resizeTextForBestFit_m1018(L_16, L_17, /*hidden argument*/NULL);
		Text_t233 * L_18 = (__this->___label_2);
		Color_t203  L_19 = (__this->___color_6);
		NullCheck(L_18);
		Graphic_set_color_m1019(L_18, L_19, /*hidden argument*/NULL);
		Text_t233 * L_20 = (__this->___label_2);
		String_t* L_21 = (__this->___text_3);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_21);
	}

IL_00d4:
	{
		GoAwayText_Hide_m850(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Update()
// Procrastinate.ClockBehaviour
#include "AssemblyU2DCSharp_Procrastinate_ClockBehaviourMethodDeclarations.h"
extern "C" void GoAwayText_Update_m848 (GoAwayText_t232 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = ClockBehaviour_get_VisibleClockCount_m726(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GoAwayText_Show_m849(__this, /*hidden argument*/NULL);
		goto IL_001b;
	}

IL_0015:
	{
		GoAwayText_Hide_m850(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Show()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void GoAwayText_Show_m849 (GoAwayText_t232 * __this, const MethodInfo* method)
{
	{
		Text_t233 * L_0 = (__this->___label_2);
		NullCheck(L_0);
		Behaviour_set_enabled_m601(L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.GoAwayText::Hide()
extern "C" void GoAwayText_Hide_m850 (GoAwayText_t232 * __this, const MethodInfo* method)
{
	{
		Text_t233 * L_0 = (__this->___label_2);
		NullCheck(L_0);
		Behaviour_set_enabled_m601(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// RMX.Gyro
#include "AssemblyU2DCSharp_RMX_GyroMethodDeclarations.h"
// System.Void RMX.Gyro::.ctor()
// RMX.Singletons/ASingleton`1<RMX.Gyro>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_6MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t235_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m1021_MethodInfo_var;
extern "C" void Gyro__ctor_m851 (Gyro_t234 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		ASingleton_1__ctor_m1021_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483766);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t235_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m1021(__this, /*hidden argument*/ASingleton_1__ctor_m1021_MethodInfo_var);
		return;
	}
}
// System.Void RMX.Gyro::LateUpdate()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern "C" void Gyro_LateUpdate_m852 (Gyro_t234 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_0 = Input_get_acceleration_m583(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t42  L_2 = Input_get_acceleration_m583(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___y_2);
		Vector2_t44  L_4 = {0};
		Vector2__ctor_m555(&L_4, L_1, L_3, /*hidden argument*/NULL);
		Vector2_t44  L_5 = Vector2_op_Multiply_m932(NULL /*static, unused*/, L_4, (9.81f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Physics2D_set_gravity_m1022(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Procrastinate.PauseCanvas/Trigger
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas_Trigger.h"
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
// UnityEngine.EventSystems.EventTrigger/Entry
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_EntryMethodDeclarations.h"
// Procrastinate.PauseCanvas/Callback
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas_CallbackMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_genMethodDeclarations.h"
extern TypeInfo* Callback_t238_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_1_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* PauseCanvas_UnPauseGame_m856_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m1024_MethodInfo_var;
extern const MethodInfo* UnityEvent_1_AddListener_m1025_MethodInfo_var;
extern "C" void Trigger__ctor_m853 (Trigger_t236 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Callback_t238_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		UnityAction_1_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		PauseCanvas_UnPauseGame_m856_MethodInfo_var = il2cpp_codegen_method_info_from_index(119);
		UnityAction_1__ctor_m1024_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483768);
		UnityEvent_1_AddListener_m1025_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483769);
		s_Il2CppMethodIntialized = true;
	}
	{
		Entry__ctor_m1023(__this, /*hidden argument*/NULL);
		((Entry_t237 *)__this)->___eventID_0 = 2;
		Callback_t238 * L_0 = (Callback_t238 *)il2cpp_codegen_object_new (Callback_t238_il2cpp_TypeInfo_var);
		Callback__ctor_m854(L_0, /*hidden argument*/NULL);
		((Entry_t237 *)__this)->___callback_1 = L_0;
		TriggerEvent_t239 * L_1 = (((Entry_t237 *)__this)->___callback_1);
		IntPtr_t L_2 = { (void*)PauseCanvas_UnPauseGame_m856_MethodInfo_var };
		UnityAction_1_t284 * L_3 = (UnityAction_1_t284 *)il2cpp_codegen_object_new (UnityAction_1_t284_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m1024(L_3, NULL, L_2, /*hidden argument*/UnityAction_1__ctor_m1024_MethodInfo_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m1025(L_1, L_3, /*hidden argument*/UnityEvent_1_AddListener_m1025_MethodInfo_var);
		return;
	}
}
// UnityEngine.EventSystems.EventTrigger/TriggerEvent
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_TriggerMethodDeclarations.h"
// System.Void Procrastinate.PauseCanvas/Callback::.ctor()
// UnityEngine.EventSystems.EventTrigger/TriggerEvent
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_TriggerMethodDeclarations.h"
extern "C" void Callback__ctor_m854 (Callback_t238 * __this, const MethodInfo* method)
{
	{
		TriggerEvent__ctor_m1026(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_9.h"
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
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
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
struct Canvas_t242;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t242_m1029(__this, method) (( Canvas_t242 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
struct Canvas_t242;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Canvas>()
#define GameObject_AddComponent_TisCanvas_t242_m1030(__this, method) (( Canvas_t242 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct CanvasScaler_t285;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.CanvasScaler>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.CanvasScaler>()
#define GameObject_GetComponent_TisCanvasScaler_t285_m1033(__this, method) (( CanvasScaler_t285 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
struct CanvasScaler_t285;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.CanvasScaler>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.CanvasScaler>()
#define GameObject_AddComponent_TisCanvasScaler_t285_m1034(__this, method) (( CanvasScaler_t285 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct GraphicRaycaster_t286;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.GraphicRaycaster>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.GraphicRaycaster>()
#define GameObject_GetComponent_TisGraphicRaycaster_t286_m1040(__this, method) (( GraphicRaycaster_t286 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
struct GraphicRaycaster_t286;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.GraphicRaycaster>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.GraphicRaycaster>()
#define GameObject_AddComponent_TisGraphicRaycaster_t286_m1041(__this, method) (( GraphicRaycaster_t286 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct CanvasRenderer_t288;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasRenderer>()
#define GameObject_GetComponent_TisCanvasRenderer_t288_m1044(__this, method) (( CanvasRenderer_t288 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
struct CanvasRenderer_t288;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasRenderer>()
#define GameObject_AddComponent_TisCanvasRenderer_t288_m1045(__this, method) (( CanvasRenderer_t288 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct Image_t71;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t71_m1046(__this, method) (( Image_t71 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
struct Image_t71;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
#define GameObject_AddComponent_TisImage_t71_m1047(__this, method) (( Image_t71 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct EventTrigger_t287;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.EventTrigger>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.EventTrigger>()
#define GameObject_GetComponent_TisEventTrigger_t287_m1050(__this, method) (( EventTrigger_t287 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
struct EventTrigger_t287;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventTrigger>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventTrigger>()
#define GameObject_AddComponent_TisEventTrigger_t287_m1051(__this, method) (( EventTrigger_t287 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct Button_t243;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Button>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Button>()
#define Component_GetComponentInChildren_TisButton_t243_m1053(__this, method) (( Button_t243 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m1020_gshared)(__this, method)
struct Button_t243;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Button>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Button>()
#define GameObject_AddComponent_TisButton_t243_m1054(__this, method) (( Button_t243 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// System.Void Procrastinate.PauseCanvas::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
// Procrastinate.PauseCanvas/Trigger
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvas_TriggerMethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.PauseCanvas>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_7MethodDeclarations.h"
extern TypeInfo* List_1_t245_il2cpp_TypeInfo_var;
extern TypeInfo* Trigger_t236_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t241_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1027_MethodInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m1028_MethodInfo_var;
extern "C" void PauseCanvas__ctor_m855 (PauseCanvas_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		Trigger_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		ASingleton_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		List_1__ctor_m1027_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483770);
		ASingleton_1__ctor_m1028_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483771);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t245 * V_0 = {0};
	{
		__this->___uiScaleMode_14 = 2;
		__this->___physicalUnit_15 = 3;
		__this->___fallbackScreenDPI_16 = (96.0f);
		__this->___defaultSpriteDPI_17 = (96.0f);
		__this->___referencePixelsPerUnit_18 = (100.0f);
		__this->___ignoreReversedGraphics_19 = 1;
		Color_t203  L_0 = Color_get_white_m1007(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___color_22 = L_0;
		List_1_t245 * L_1 = (List_1_t245 *)il2cpp_codegen_object_new (List_1_t245_il2cpp_TypeInfo_var);
		List_1__ctor_m1027(L_1, /*hidden argument*/List_1__ctor_m1027_MethodInfo_var);
		V_0 = L_1;
		List_1_t245 * L_2 = V_0;
		Trigger_t236 * L_3 = (Trigger_t236 *)il2cpp_codegen_object_new (Trigger_t236_il2cpp_TypeInfo_var);
		Trigger__ctor_m853(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Entry_t237 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(!0) */, L_2, L_3);
		List_1_t245 * L_4 = V_0;
		__this->___triggers_25 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t241_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m1028(__this, /*hidden argument*/ASingleton_1__ctor_m1028_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::UnPauseGame(UnityEngine.EventSystems.BaseEventData)
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern "C" void PauseCanvas_UnPauseGame_m856 (Object_t * __this /* static, unused */, BaseEventData_t262 * ___data, const MethodInfo* method)
{
	{
		GameController_t228 * L_0 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< bool, Object_t * >::Invoke(40 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, L_0, 0, NULL);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.UI.CanvasScaler
#include "UnityEngine_UI_UnityEngine_UI_CanvasScalerMethodDeclarations.h"
// UnityEngine.UI.GraphicRaycaster
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycasterMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// UnityEngine.EventSystems.EventTrigger
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerMethodDeclarations.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_ButtonMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
// Procrastinate.GameData
#include "AssemblyU2DCSharp_Procrastinate_GameDataMethodDeclarations.h"
extern TypeInfo* UnityAction_t290_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t242_m1029_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCanvas_t242_m1030_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvasScaler_t285_m1033_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCanvasScaler_t285_m1034_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGraphicRaycaster_t286_m1040_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGraphicRaycaster_t286_m1041_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvasRenderer_t288_m1044_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCanvasRenderer_t288_m1045_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisImage_t71_m1046_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisImage_t71_m1047_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisEventTrigger_t287_m1050_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisEventTrigger_t287_m1051_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisButton_t243_m1053_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisButton_t243_m1054_MethodInfo_var;
extern const MethodInfo* PauseCanvas_toggleInfo_m858_MethodInfo_var;
extern "C" void PauseCanvas_Start_m857 (PauseCanvas_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t290_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		GameObject_GetComponent_TisCanvas_t242_m1029_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		GameObject_AddComponent_TisCanvas_t242_m1030_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483773);
		GameObject_GetComponent_TisCanvasScaler_t285_m1033_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483774);
		GameObject_AddComponent_TisCanvasScaler_t285_m1034_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483775);
		GameObject_GetComponent_TisGraphicRaycaster_t286_m1040_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483776);
		GameObject_AddComponent_TisGraphicRaycaster_t286_m1041_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483777);
		GameObject_GetComponent_TisCanvasRenderer_t288_m1044_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483778);
		GameObject_AddComponent_TisCanvasRenderer_t288_m1045_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483779);
		GameObject_GetComponent_TisImage_t71_m1046_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483780);
		GameObject_AddComponent_TisImage_t71_m1047_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483781);
		GameObject_GetComponent_TisEventTrigger_t287_m1050_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483782);
		GameObject_AddComponent_TisEventTrigger_t287_m1051_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483783);
		Component_GetComponentInChildren_TisButton_t243_m1053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483784);
		GameObject_AddComponent_TisButton_t243_m1054_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483785);
		PauseCanvas_toggleInfo_m858_MethodInfo_var = il2cpp_codegen_method_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	CanvasScaler_t285 * V_0 = {0};
	GraphicRaycaster_t286 * V_1 = {0};
	Image_t71 * V_2 = {0};
	EventTrigger_t287 * V_3 = {0};
	{
		GameObject_t11 * L_0 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Canvas_t242 * L_1 = GameObject_GetComponent_TisCanvas_t242_m1029(L_0, /*hidden argument*/GameObject_GetComponent_TisCanvas_t242_m1029_MethodInfo_var);
		__this->___canvas_10 = L_1;
		Canvas_t242 * L_2 = (__this->___canvas_10);
		bool L_3 = Object_op_Implicit_m554(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t11 * L_4 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Canvas_t242 * L_5 = GameObject_AddComponent_TisCanvas_t242_m1030(L_4, /*hidden argument*/GameObject_AddComponent_TisCanvas_t242_m1030_MethodInfo_var);
		__this->___canvas_10 = L_5;
		Canvas_t242 * L_6 = (__this->___canvas_10);
		int32_t L_7 = (__this->___renderMode_12);
		NullCheck(L_6);
		Canvas_set_renderMode_m1031(L_6, L_7, /*hidden argument*/NULL);
		Canvas_t242 * L_8 = (__this->___canvas_10);
		bool L_9 = (__this->___pixelPerfect_13);
		NullCheck(L_8);
		Canvas_set_pixelPerfect_m1032(L_8, L_9, /*hidden argument*/NULL);
		Canvas_t242 * L_10 = (__this->___canvas_10);
		NullCheck(L_10);
		Behaviour_set_enabled_m601(L_10, 0, /*hidden argument*/NULL);
	}

IL_0060:
	{
		GameObject_t11 * L_11 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		CanvasScaler_t285 * L_12 = GameObject_GetComponent_TisCanvasScaler_t285_m1033(L_11, /*hidden argument*/GameObject_GetComponent_TisCanvasScaler_t285_m1033_MethodInfo_var);
		bool L_13 = Object_op_Implicit_m554(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00bd;
		}
	}
	{
		GameObject_t11 * L_14 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		CanvasScaler_t285 * L_15 = GameObject_AddComponent_TisCanvasScaler_t285_m1034(L_14, /*hidden argument*/GameObject_AddComponent_TisCanvasScaler_t285_m1034_MethodInfo_var);
		V_0 = L_15;
		CanvasScaler_t285 * L_16 = V_0;
		int32_t L_17 = (__this->___uiScaleMode_14);
		NullCheck(L_16);
		CanvasScaler_set_uiScaleMode_m1035(L_16, L_17, /*hidden argument*/NULL);
		CanvasScaler_t285 * L_18 = V_0;
		int32_t L_19 = (__this->___physicalUnit_15);
		NullCheck(L_18);
		CanvasScaler_set_physicalUnit_m1036(L_18, L_19, /*hidden argument*/NULL);
		CanvasScaler_t285 * L_20 = V_0;
		float L_21 = (__this->___fallbackScreenDPI_16);
		NullCheck(L_20);
		CanvasScaler_set_fallbackScreenDPI_m1037(L_20, L_21, /*hidden argument*/NULL);
		CanvasScaler_t285 * L_22 = V_0;
		float L_23 = (__this->___defaultSpriteDPI_17);
		NullCheck(L_22);
		CanvasScaler_set_defaultSpriteDPI_m1038(L_22, L_23, /*hidden argument*/NULL);
		CanvasScaler_t285 * L_24 = V_0;
		float L_25 = (__this->___referencePixelsPerUnit_18);
		NullCheck(L_24);
		CanvasScaler_set_referencePixelsPerUnit_m1039(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		GameObject_t11 * L_26 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		GraphicRaycaster_t286 * L_27 = GameObject_GetComponent_TisGraphicRaycaster_t286_m1040(L_26, /*hidden argument*/GameObject_GetComponent_TisGraphicRaycaster_t286_m1040_MethodInfo_var);
		bool L_28 = Object_op_Implicit_m554(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00f6;
		}
	}
	{
		GameObject_t11 * L_29 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		GraphicRaycaster_t286 * L_30 = GameObject_AddComponent_TisGraphicRaycaster_t286_m1041(L_29, /*hidden argument*/GameObject_AddComponent_TisGraphicRaycaster_t286_m1041_MethodInfo_var);
		V_1 = L_30;
		GraphicRaycaster_t286 * L_31 = V_1;
		bool L_32 = (__this->___ignoreReversedGraphics_19);
		NullCheck(L_31);
		GraphicRaycaster_set_ignoreReversedGraphics_m1042(L_31, L_32, /*hidden argument*/NULL);
		GraphicRaycaster_t286 * L_33 = V_1;
		int32_t L_34 = (__this->___blockingObjects_20);
		NullCheck(L_33);
		GraphicRaycaster_set_blockingObjects_m1043(L_33, L_34, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		GameObject_t11 * L_35 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		CanvasRenderer_t288 * L_36 = GameObject_GetComponent_TisCanvasRenderer_t288_m1044(L_35, /*hidden argument*/GameObject_GetComponent_TisCanvasRenderer_t288_m1044_MethodInfo_var);
		bool L_37 = Object_op_Implicit_m554(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0117;
		}
	}
	{
		GameObject_t11 * L_38 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_AddComponent_TisCanvasRenderer_t288_m1045(L_38, /*hidden argument*/GameObject_AddComponent_TisCanvasRenderer_t288_m1045_MethodInfo_var);
	}

IL_0117:
	{
		GameObject_t11 * L_39 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Image_t71 * L_40 = GameObject_GetComponent_TisImage_t71_m1046(L_39, /*hidden argument*/GameObject_GetComponent_TisImage_t71_m1046_MethodInfo_var);
		bool L_41 = Object_op_Implicit_m554(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0168;
		}
	}
	{
		GameObject_t11 * L_42 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Image_t71 * L_43 = GameObject_AddComponent_TisImage_t71_m1047(L_42, /*hidden argument*/GameObject_AddComponent_TisImage_t71_m1047_MethodInfo_var);
		V_2 = L_43;
		Image_t71 * L_44 = V_2;
		Sprite_t244 * L_45 = (__this->___sourceImage_21);
		NullCheck(L_44);
		Image_set_sprite_m1048(L_44, L_45, /*hidden argument*/NULL);
		Image_t71 * L_46 = V_2;
		Color_t203  L_47 = (__this->___color_22);
		NullCheck(L_46);
		Graphic_set_color_m1019(L_46, L_47, /*hidden argument*/NULL);
		Image_t71 * L_48 = V_2;
		Material_t195 * L_49 = (__this->___material_23);
		NullCheck(L_48);
		VirtActionInvoker1< Material_t195 * >::Invoke(25 /* System.Void UnityEngine.UI.MaskableGraphic::set_material(UnityEngine.Material) */, L_48, L_49);
		Image_t71 * L_50 = V_2;
		bool L_51 = (__this->___preserveAspect_24);
		NullCheck(L_50);
		Image_set_preserveAspect_m1049(L_50, L_51, /*hidden argument*/NULL);
	}

IL_0168:
	{
		GameObject_t11 * L_52 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		EventTrigger_t287 * L_53 = GameObject_GetComponent_TisEventTrigger_t287_m1050(L_52, /*hidden argument*/GameObject_GetComponent_TisEventTrigger_t287_m1050_MethodInfo_var);
		bool L_54 = Object_op_Implicit_m554(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0195;
		}
	}
	{
		GameObject_t11 * L_55 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		EventTrigger_t287 * L_56 = GameObject_AddComponent_TisEventTrigger_t287_m1051(L_55, /*hidden argument*/GameObject_AddComponent_TisEventTrigger_t287_m1051_MethodInfo_var);
		V_3 = L_56;
		EventTrigger_t287 * L_57 = V_3;
		List_1_t245 * L_58 = (__this->___triggers_25);
		NullCheck(L_57);
		EventTrigger_set_triggers_m1052(L_57, L_58, /*hidden argument*/NULL);
	}

IL_0195:
	{
		Button_t243 * L_59 = Component_GetComponentInChildren_TisButton_t243_m1053(__this, /*hidden argument*/Component_GetComponentInChildren_TisButton_t243_m1053_MethodInfo_var);
		__this->___infoButton_11 = L_59;
		Button_t243 * L_60 = (__this->___infoButton_11);
		bool L_61 = Object_op_Equality_m473(NULL /*static, unused*/, L_60, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01c3;
		}
	}
	{
		GameObject_t11 * L_62 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Button_t243 * L_63 = GameObject_AddComponent_TisButton_t243_m1054(L_62, /*hidden argument*/GameObject_AddComponent_TisButton_t243_m1054_MethodInfo_var);
		__this->___infoButton_11 = L_63;
	}

IL_01c3:
	{
		Button_t243 * L_64 = (__this->___infoButton_11);
		NullCheck(L_64);
		ButtonClickedEvent_t289 * L_65 = Button_get_onClick_m1055(L_64, /*hidden argument*/NULL);
		IntPtr_t L_66 = { (void*)PauseCanvas_toggleInfo_m858_MethodInfo_var };
		UnityAction_t290 * L_67 = (UnityAction_t290 *)il2cpp_codegen_object_new (UnityAction_t290_il2cpp_TypeInfo_var);
		UnityAction__ctor_m1056(L_67, __this, L_66, /*hidden argument*/NULL);
		NullCheck(L_65);
		UnityEvent_AddListener_m1057(L_65, L_67, /*hidden argument*/NULL);
		float L_68 = GameData_get_lastSessionTime_m833(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_68) > ((float)(0.0f)))))
		{
			goto IL_01ff;
		}
	}
	{
		GameController_t228 * L_69 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_70 = 4;
		Object_t * L_71 = Box(Event_t221_il2cpp_TypeInfo_var, &L_70);
		NullCheck(L_69);
		VirtActionInvoker2< bool, Object_t * >::Invoke(40 /* System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object) */, L_69, 1, L_71);
	}

IL_01ff:
	{
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::toggleInfo()
extern "C" void PauseCanvas_toggleInfo_m858 (PauseCanvas_t240 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___information_26);
		__this->___information_26 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::ShowInfo()
extern "C" void PauseCanvas_ShowInfo_m859 (PauseCanvas_t240 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___information_26);
		__this->___information_26 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::Update()
extern "C" void PauseCanvas_Update_m860 (PauseCanvas_t240 * __this, const MethodInfo* method)
{
	{
		Canvas_t242 * L_0 = (__this->___canvas_10);
		bool L_1 = Object_op_Inequality_m548(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Canvas_t242 * L_2 = (__this->___canvas_10);
		GameController_t228 * L_3 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameController_get_isPaused_m818(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Behaviour_set_enabled_m601(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::OnGUI()
// Procrastinate.PauseCanvas
#include "AssemblyU2DCSharp_Procrastinate_PauseCanvasMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern TypeInfo* Double_t274_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t149_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t153_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral185;
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral187;
extern Il2CppCodeGenString* _stringLiteral188;
extern "C" void PauseCanvas_OnGUI_m861 (PauseCanvas_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GUIStyle_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		GUI_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral185 = il2cpp_codegen_string_literal_from_index(185);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral187 = il2cpp_codegen_string_literal_from_index(187);
		_stringLiteral188 = il2cpp_codegen_string_literal_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GUIStyle_t149 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* G_B6_0 = {0};
	{
		Canvas_t242 * L_0 = (__this->___canvas_10);
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m1058(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00e7;
		}
	}
	{
		String_t* L_2 = (__this->____wychd_27);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		PauseCanvas_BuildWychd_m862(__this, 4, /*hidden argument*/NULL);
		Debug_LogWarning_m443(NULL /*static, unused*/, _stringLiteral185, /*hidden argument*/NULL);
	}

IL_002c:
	{
		bool L_3 = (__this->___information_26);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_4 = (__this->____wychd_27);
		G_B6_0 = L_4;
		goto IL_0065;
	}

IL_0042:
	{
		double L_5 = GameData_get_PercentageOfDevTimeWasted_m840(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_6 = L_5;
		Object_t * L_7 = Box(Double_t274_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m486(NULL /*static, unused*/, _stringLiteral187, L_7, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral186, L_8, _stringLiteral188, /*hidden argument*/NULL);
		G_B6_0 = L_9;
	}

IL_0065:
	{
		V_0 = G_B6_0;
		GUIStyle_t149 * L_10 = (GUIStyle_t149 *)il2cpp_codegen_object_new (GUIStyle_t149_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m427(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		GUIStyle_t149 * L_11 = V_1;
		NullCheck(L_11);
		GUIStyle_set_fontSize_m1059(L_11, ((int32_t)50), /*hidden argument*/NULL);
		GUIStyle_t149 * L_12 = V_1;
		NullCheck(L_12);
		GUIStyle_set_richText_m428(L_12, 1, /*hidden argument*/NULL);
		GUIStyle_t149 * L_13 = V_1;
		NullCheck(L_13);
		GUIStyle_set_wordWrap_m429(L_13, 1, /*hidden argument*/NULL);
		GUIStyle_t149 * L_14 = V_1;
		NullCheck(L_14);
		GUIStyle_set_alignment_m430(L_14, 4, /*hidden argument*/NULL);
		GUIStyle_t149 * L_15 = V_1;
		NullCheck(L_15);
		RectOffset_t152 * L_16 = GUIStyle_get_padding_m431(L_15, /*hidden argument*/NULL);
		V_2 = ((int32_t)50);
		GUIStyle_t149 * L_17 = V_1;
		NullCheck(L_17);
		RectOffset_t152 * L_18 = GUIStyle_get_padding_m431(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		RectOffset_set_bottom_m432(L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		V_2 = L_20;
		GUIStyle_t149 * L_21 = V_1;
		NullCheck(L_21);
		RectOffset_t152 * L_22 = GUIStyle_get_padding_m431(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		RectOffset_set_top_m433(L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		V_2 = L_24;
		GUIStyle_t149 * L_25 = V_1;
		NullCheck(L_25);
		RectOffset_t152 * L_26 = GUIStyle_get_padding_m431(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_2;
		NullCheck(L_26);
		RectOffset_set_right_m434(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		NullCheck(L_16);
		RectOffset_set_left_m435(L_16, L_28, /*hidden argument*/NULL);
		int32_t L_29 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_30 = Screen_get_height_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t150  L_31 = {0};
		Rect__ctor_m438(&L_31, (0.0f), (0.0f), (((float)L_29)), (((float)L_30)), /*hidden argument*/NULL);
		String_t* L_32 = V_0;
		GUIStyle_t149 * L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t153_il2cpp_TypeInfo_var);
		GUI_Label_m441(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
		goto IL_00f9;
	}

IL_00e7:
	{
		bool L_34 = (__this->___information_26);
		if (!L_34)
		{
			goto IL_00f9;
		}
	}
	{
		__this->___information_26 = 0;
	}

IL_00f9:
	{
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::BuildWychd(Procrastinate.Event)
// Procrastinate.Event
#include "AssemblyU2DCSharp_Procrastinate_Event.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral190;
extern Il2CppCodeGenString* _stringLiteral191;
extern Il2CppCodeGenString* _stringLiteral192;
extern "C" void PauseCanvas_BuildWychd_m862 (PauseCanvas_t240 * __this, int32_t ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral190 = il2cpp_codegen_string_literal_from_index(190);
		_stringLiteral191 = il2cpp_codegen_string_literal_from_index(191);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Wychd_t212 * V_1 = {0};
	{
		V_0 = (0.0f);
		int32_t L_0 = ___args;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Event_t221_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = 4;
		Object_t * L_4 = Box(Event_t221_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_2, L_4);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		__this->____wychd_27 = _stringLiteral189;
		float L_6 = GameData_get_lastProcrastination_m829(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0043;
	}

IL_0032:
	{
		__this->____wychd_27 = _stringLiteral190;
		float L_7 = GameData_get_lastSessionTime_m833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0043:
	{
		float L_8 = V_0;
		Wychd_t212 * L_9 = GameData_WhatYouCouldHaveDone_m845(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = (__this->____wychd_27);
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_12 = TextFormatter_TimeDescription_m114(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m423(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		__this->____wychd_27 = L_13;
		GameController_t228 * L_14 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15 = (L_14->___newPersonalBest_34);
		if (!L_15)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = (__this->____wychd_27);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m423(NULL /*static, unused*/, L_16, _stringLiteral191, /*hidden argument*/NULL);
		__this->____wychd_27 = L_17;
		GameController_t228 * L_18 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->___newPersonalBest_34 = 0;
	}

IL_0091:
	{
		String_t* L_19 = (__this->____wychd_27);
		Wychd_t212 * L_20 = V_1;
		Wychd_t212 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_21);
		int32_t L_23 = Random_Range_m506(NULL /*static, unused*/, 0, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_20, L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m440(NULL /*static, unused*/, L_19, _stringLiteral192, L_24, /*hidden argument*/NULL);
		__this->____wychd_27 = L_25;
		return;
	}
}
// System.Void Procrastinate.PauseCanvas::OnEventDidStart(System.Enum,System.Object)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern "C" void PauseCanvas_OnEventDidStart_m863 (PauseCanvas_t240 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	PauseCanvas_t240 * G_B3_0 = {0};
	PauseCanvas_t240 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	PauseCanvas_t240 * G_B4_1 = {0};
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t24_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Canvas_t242 * L_4 = (__this->___canvas_10);
		NullCheck(L_4);
		Behaviour_set_enabled_m601(L_4, 1, /*hidden argument*/NULL);
		Object_t * L_5 = ___info;
		G_B2_0 = __this;
		if (!((Object_t *)IsInstSealed(L_5, Event_t221_il2cpp_TypeInfo_var)))
		{
			G_B3_0 = __this;
			goto IL_0034;
		}
	}
	{
		Object_t * L_6 = ___info;
		G_B4_0 = ((*(int32_t*)((int32_t*)UnBox (L_6, Int32_t151_il2cpp_TypeInfo_var))));
		G_B4_1 = G_B2_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B4_0 = 5;
		G_B4_1 = G_B3_0;
	}

IL_0035:
	{
		NullCheck(G_B4_1);
		PauseCanvas_BuildWychd_m862(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_003f:
	{
		Enum_t6 * L_7 = ___theEvent;
		int32_t L_8 = 3;
		Object_t * L_9 = Box(Event_t24_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_7, L_9);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		Canvas_t242 * L_11 = (__this->___canvas_10);
		NullCheck(L_11);
		Behaviour_set_enabled_m601(L_11, 0, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// Procrastinate.SoundEffects/Args
#include "AssemblyU2DCSharp_Procrastinate_SoundEffects_Args.h"
// Procrastinate.SoundEffects/Args
#include "AssemblyU2DCSharp_Procrastinate_SoundEffects_ArgsMethodDeclarations.h"
// Procrastinate.SoundEffects
#include "AssemblyU2DCSharp_Procrastinate_SoundEffects.h"
// Procrastinate.SoundEffects
#include "AssemblyU2DCSharp_Procrastinate_SoundEffectsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.SoundEffects>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_8MethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
struct AudioSourceU5BU5D_t292;
struct ObjectU5BU5D_t148;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t148* Component_GetComponentsInChildren_TisObject_t_m679_gshared (Component_t178 * __this, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m679(__this, method) (( ObjectU5BU5D_t148* (*) (Component_t178 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m679_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.AudioSource>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.AudioSource>()
#define Component_GetComponentsInChildren_TisAudioSource_t291_m1062(__this, method) (( AudioSourceU5BU5D_t292* (*) (Component_t178 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m679_gshared)(__this, method)
// System.Void Procrastinate.SoundEffects::.ctor()
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<Procrastinate.SoundEffects>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_8MethodDeclarations.h"
extern TypeInfo* Dictionary_2_t249_il2cpp_TypeInfo_var;
extern TypeInfo* ASingleton_1_t248_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1060_MethodInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m1061_MethodInfo_var;
extern "C" void SoundEffects__ctor_m864 (SoundEffects_t247 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		ASingleton_1_t248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Dictionary_2__ctor_m1060_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483787);
		ASingleton_1__ctor_m1061_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483788);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t249 * L_0 = (Dictionary_2_t249 *)il2cpp_codegen_object_new (Dictionary_2_t249_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1060(L_0, /*hidden argument*/Dictionary_2__ctor_m1060_MethodInfo_var);
		__this->___tracks_13 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t248_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m1061(__this, /*hidden argument*/ASingleton_1__ctor_m1061_MethodInfo_var);
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
extern const MethodInfo* Component_GetComponentsInChildren_TisAudioSource_t291_m1062_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral193;
extern "C" void SoundEffects_Start_m865 (SoundEffects_t247 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponentsInChildren_TisAudioSource_t291_m1062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483789);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t291 * V_0 = {0};
	AudioSourceU5BU5D_t292* V_1 = {0};
	int32_t V_2 = 0;
	{
		AudioSourceU5BU5D_t292* L_0 = Component_GetComponentsInChildren_TisAudioSource_t291_m1062(__this, /*hidden argument*/Component_GetComponentsInChildren_TisAudioSource_t291_m1062_MethodInfo_var);
		V_1 = L_0;
		V_2 = 0;
		goto IL_002d;
	}

IL_000e:
	{
		AudioSourceU5BU5D_t292* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(AudioSource_t291 **)(AudioSource_t291 **)SZArrayLdElema(L_1, L_3, sizeof(AudioSource_t291 *)));
		Dictionary_2_t249 * L_4 = (__this->___tracks_13);
		AudioSource_t291 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m508(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m1063(L_6, /*hidden argument*/NULL);
		AudioSource_t291 * L_8 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, AudioSource_t291 * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::set_Item(!0,!1) */, L_4, L_7, L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		AudioSourceU5BU5D_t292* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Dictionary_2_t249 * L_12 = (__this->___tracks_13);
		NullCheck(L_12);
		AudioSource_t291 * L_13 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_12, _stringLiteral193);
		NullCheck(L_13);
		AudioSource_Play_m1064(L_13, /*hidden argument*/NULL);
		Dictionary_2_t249 * L_14 = (__this->___tracks_13);
		NullCheck(L_14);
		AudioSource_t291 * L_15 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_14, _stringLiteral193);
		NullCheck(L_15);
		AudioSource_Pause_m1065(L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Update()
extern "C" void SoundEffects_Update_m866 (SoundEffects_t247 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Play(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void SoundEffects_Play_m867 (SoundEffects_t247 * __this, String_t* ___name, const MethodInfo* method)
{
	AudioSource_t291 * V_0 = {0};
	{
		Dictionary_2_t249 * L_0 = (__this->___tracks_13);
		String_t* L_1 = ___name;
		NullCheck(L_1);
		String_t* L_2 = String_ToLower_m1063(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_t291 * L_3 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_0, L_2);
		V_0 = L_3;
		AudioSource_t291 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = AudioSource_get_isPlaying_m1066(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		AudioSource_t291 * L_6 = V_0;
		NullCheck(L_6);
		AudioSource_Play_m1064(L_6, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::Play(System.String,System.UInt64)
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern "C" void SoundEffects_Play_m868 (SoundEffects_t247 * __this, String_t* ___name, uint64_t ___delay, const MethodInfo* method)
{
	{
		Dictionary_2_t249 * L_0 = (__this->___tracks_13);
		String_t* L_1 = ___name;
		NullCheck(L_1);
		String_t* L_2 = String_ToLower_m1063(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_t291 * L_3 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_0, L_2);
		uint64_t L_4 = ___delay;
		NullCheck(L_3);
		AudioSource_Play_m1067(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.SoundEffects::OnEventDidStart(System.Enum,System.Object)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral194;
extern "C" void SoundEffects_OnEventDidStart_m869 (SoundEffects_t247 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t221_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_t249 * L_4 = (__this->___tracks_13);
		NullCheck(L_4);
		AudioSource_t291 * L_5 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_4, _stringLiteral194);
		NullCheck(L_5);
		AudioSource_Play_m1064(L_5, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::OnEvent(System.Enum,System.Object)
// Procrastinate.SoundEffects
#include "AssemblyU2DCSharp_Procrastinate_SoundEffectsMethodDeclarations.h"
// Procrastinate.GameController
#include "AssemblyU2DCSharp_Procrastinate_GameControllerMethodDeclarations.h"
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral195;
extern "C" void SoundEffects_OnEvent_m870 (SoundEffects_t247 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 3;
		Object_t * L_2 = Box(Event_t221_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		SoundEffects_Play_m867(__this, _stringLiteral195, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Enum_t6 * L_4 = ___theEvent;
		int32_t L_5 = 4;
		Object_t * L_6 = Box(Event_t24_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		GameController_t228 * L_8 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = GameController_get_isPaused_m818(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0052;
		}
	}
	{
		GameController_t228 * L_10 = GameController_get_current_m822(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = GameController_get_FirstLoad_m819(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		SoundEffects_SwitchMainTrack_m871(__this, 1, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::SwitchMainTrack(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Procrastinate.GameCenter
#include "AssemblyU2DCSharp_Procrastinate_GameCenterMethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
extern TypeInfo* GameCenter_t223_il2cpp_TypeInfo_var;
extern TypeInfo* RMXObject_t31_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral196;
extern Il2CppCodeGenString* _stringLiteral193;
extern "C" void SoundEffects_SwitchMainTrack_m871 (SoundEffects_t247 * __this, bool ___force, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenter_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		RMXObject_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenter_t223_il2cpp_TypeInfo_var);
		bool L_0 = GameCenter_HasPlayerAlreadyAchieved_m797(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t31_il2cpp_TypeInfo_var);
		bool L_1 = RMXObject_get_OneIn10_m96(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Dictionary_2_t249 * L_3 = (__this->___tracks_13);
		NullCheck(L_3);
		AudioSource_t291 * L_4 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_3, _stringLiteral196);
		NullCheck(L_4);
		AudioSource_Pause_m1065(L_4, /*hidden argument*/NULL);
		Dictionary_2_t249 * L_5 = (__this->___tracks_13);
		NullCheck(L_5);
		AudioSource_t291 * L_6 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_5, _stringLiteral193);
		NullCheck(L_6);
		AudioSource_UnPause_m1068(L_6, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_004a:
	{
		Dictionary_2_t249 * L_7 = (__this->___tracks_13);
		NullCheck(L_7);
		AudioSource_t291 * L_8 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_7, _stringLiteral196);
		NullCheck(L_8);
		AudioSource_UnPause_m1068(L_8, /*hidden argument*/NULL);
		Dictionary_2_t249 * L_9 = (__this->___tracks_13);
		NullCheck(L_9);
		AudioSource_t291 * L_10 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_9, _stringLiteral193);
		NullCheck(L_10);
		AudioSource_Pause_m1065(L_10, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return;
	}
}
// System.Void Procrastinate.SoundEffects::OnEventDidEnd(System.Enum,System.Object)
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AudioSource>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
extern TypeInfo* Event_t221_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Args_t246_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t294_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m1069_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1070_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1071_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1072_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral197;
extern "C" void SoundEffects_OnEventDidEnd_m872 (SoundEffects_t247 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		Args_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		Enumerator_t294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Dictionary_2_GetEnumerator_m1069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483790);
		Enumerator_get_Current_m1070_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483791);
		KeyValuePair_2_get_Value_m1071_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483792);
		Enumerator_MoveNext_m1072_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483793);
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t293  V_0 = {0};
	Enumerator_t294  V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Enum_t6 * L_0 = ___theEvent;
		int32_t L_1 = 2;
		Object_t * L_2 = Box(Event_t221_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_t249 * L_4 = (__this->___tracks_13);
		NullCheck(L_4);
		AudioSource_t291 * L_5 = (AudioSource_t291 *)VirtFuncInvoker1< AudioSource_t291 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::get_Item(!0) */, L_4, _stringLiteral197);
		NullCheck(L_5);
		AudioSource_Play_m1064(L_5, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_002b:
	{
		Enum_t6 * L_6 = ___theEvent;
		int32_t L_7 = 3;
		Object_t * L_8 = Box(Event_t24_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_6, L_8);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		SoundEffects_SwitchMainTrack_m871(__this, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0048:
	{
		Enum_t6 * L_10 = ___theEvent;
		int32_t L_11 = 2;
		Object_t * L_12 = Box(Event_t24_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_10, L_12);
		if (!L_13)
		{
			goto IL_00d4;
		}
	}
	{
		Object_t * L_14 = ___info;
		if (!L_14)
		{
			goto IL_0081;
		}
	}
	{
		Object_t * L_15 = ___info;
		int32_t L_16 = 0;
		Object_t * L_17 = Box(Args_t246_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_15, L_17);
		if (L_18)
		{
			goto IL_00d4;
		}
	}
	{
		Object_t * L_19 = ___info;
		int32_t L_20 = 4;
		Object_t * L_21 = Box(Event_t221_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		bool L_22 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_19, L_21);
		if (L_22)
		{
			goto IL_00d4;
		}
	}

IL_0081:
	{
		Dictionary_2_t249 * L_23 = (__this->___tracks_13);
		NullCheck(L_23);
		Enumerator_t294  L_24 = Dictionary_2_GetEnumerator_m1069(L_23, /*hidden argument*/Dictionary_2_GetEnumerator_m1069_MethodInfo_var);
		V_1 = L_24;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b7;
		}

IL_0092:
		{
			KeyValuePair_2_t293  L_25 = Enumerator_get_Current_m1070((&V_1), /*hidden argument*/Enumerator_get_Current_m1070_MethodInfo_var);
			V_0 = L_25;
			AudioSource_t291 * L_26 = KeyValuePair_2_get_Value_m1071((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1071_MethodInfo_var);
			NullCheck(L_26);
			bool L_27 = AudioSource_get_isPlaying_m1066(L_26, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_00b7;
			}
		}

IL_00ab:
		{
			AudioSource_t291 * L_28 = KeyValuePair_2_get_Value_m1071((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1071_MethodInfo_var);
			NullCheck(L_28);
			AudioSource_Pause_m1065(L_28, /*hidden argument*/NULL);
		}

IL_00b7:
		{
			bool L_29 = Enumerator_MoveNext_m1072((&V_1), /*hidden argument*/Enumerator_MoveNext_m1072_MethodInfo_var);
			if (L_29)
			{
				goto IL_0092;
			}
		}

IL_00c3:
		{
			IL2CPP_LEAVE(0xD4, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		Enumerator_t294  L_30 = V_1;
		Enumerator_t294  L_31 = L_30;
		Object_t * L_32 = Box(Enumerator_t294_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_32);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_32);
		IL2CPP_END_FINALLY(200)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00d4:
	{
		return;
	}
}
// Procrastinate.Tests
#include "AssemblyU2DCSharp_Procrastinate_TestsMethodDeclarations.h"
// Procrastinate.Depricated.Timer
#include "AssemblyU2DCSharp_Procrastinate_Depricated_Timer.h"
// Procrastinate.Depricated.Timer
#include "AssemblyU2DCSharp_Procrastinate_Depricated_TimerMethodDeclarations.h"
// System.String Procrastinate.Depricated.Timer::GetTimeDescription(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" String_t* Timer_GetTimeDescription_m873 (Object_t * __this /* static, unused */, float ___timeInSeconds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
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
		Object_t * L_10 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m426(NULL /*static, unused*/, L_7, L_10, _stringLiteral62, /*hidden argument*/NULL);
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
		Object_t * L_16 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m426(NULL /*static, unused*/, L_13, L_16, _stringLiteral63, /*hidden argument*/NULL);
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
		Object_t * L_22 = Box(Single_t176_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m426(NULL /*static, unused*/, L_19, L_22, _stringLiteral64, /*hidden argument*/NULL);
		V_3 = L_23;
		goto IL_0080;
	}

IL_0074:
	{
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m423(NULL /*static, unused*/, L_24, _stringLiteral65, /*hidden argument*/NULL);
		V_3 = L_25;
	}

IL_0080:
	{
		String_t* L_26 = V_3;
		return L_26;
	}
}
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserDataMethodDeclarations.h"
// Procrastinate.Version/Type
#include "AssemblyU2DCSharp_Procrastinate_Version_Type.h"
// Procrastinate.Version/Type
#include "AssemblyU2DCSharp_Procrastinate_Version_TypeMethodDeclarations.h"
// Procrastinate.Version
#include "AssemblyU2DCSharp_Procrastinate_Version.h"
// System.Void Procrastinate.Version::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Version__ctor_m874 (Version_t255 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::.cctor()
extern "C" void Version__cctor_m875 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Single Procrastinate.Version::get_latest()
extern "C" float Version_get_latest_m876 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (3.06f);
	}
}
// System.Single Procrastinate.Version::get_currentVersion()
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern "C" float Version_get_currentVersion_m877 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ((int32_t)15);
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, L_1, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
		return L_2;
	}
}
// System.Void Procrastinate.Version::set_currentVersion(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" void Version_set_currentVersion_m878 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ((int32_t)15);
		Object_t * L_1 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_0);
		float L_2 = ___value;
		SavedData_Set_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Procrastinate.Version::get_needsPatch()
// Procrastinate.Version
#include "AssemblyU2DCSharp_Procrastinate_VersionMethodDeclarations.h"
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern "C" bool Version_get_needsPatch_m879 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		float L_0 = Version_get_currentVersion_m877(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Version_get_latest_m876(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		bool L_2 = ((Version_t255_StaticFields*)Version_t255_il2cpp_TypeInfo_var->static_fields)->____failedPatch_2;
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
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t282_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral198;
extern Il2CppCodeGenString* _stringLiteral199;
extern "C" void Version_Patch_m880 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		UnityException_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		_stringLiteral199 = il2cpp_codegen_string_literal_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	UnityException_t282 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		bool L_0 = Version_get_needsPatch_m879(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_PatchX_m881(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = Version_get_latest_m876(NULL /*static, unused*/, /*hidden argument*/NULL);
		Version_set_currentVersion_m878(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m423(NULL /*static, unused*/, L_3, _stringLiteral198, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t282_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(UnityEngine.UnityException)
		V_1 = ((UnityException_t282 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		((Version_t255_StaticFields*)Version_t255_il2cpp_TypeInfo_var->static_fields)->____failedPatch_2 = 1;
		String_t* L_5 = V_0;
		UnityException_t282 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m440(NULL /*static, unused*/, L_5, _stringLiteral199, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_004e;
	} // end catch (depth: 1)

IL_004e:
	{
		int32_t L_9 = 5;
		Object_t * L_10 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_12 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_13 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
// System.Void Procrastinate.Version::PatchX()
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern "C" void Version_PatchX_m881 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		float L_0 = Version_get_currentVersion_m877(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(3.05f)))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_Patchv0_3_5_m883(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		float L_1 = Version_get_currentVersion_m877(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) < ((float)(3.06f)))))
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_Patchv0_3_6_m882(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void Procrastinate.Version::Patchv0_3_6()
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern "C" void Version_Patchv0_3_6_m882 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_Set_m886(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, 6, /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, 8, /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, ((int32_t)10), /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, ((int32_t)9), /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, ((int32_t)11), /*hidden argument*/NULL);
		Version_Set_m886(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		Version_set_currentVersion_m878(NULL /*static, unused*/, (3.06f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::Patchv0_3_5()
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern "C" void Version_Patchv0_3_5_m883 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_Setf_m885(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Version_Setf_m885(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Version_Setf_m885(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		Version_Setf_m885(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		Version_set_currentVersion_m878(NULL /*static, unused*/, (3.05f), /*hidden argument*/NULL);
		return;
	}
}
// System.String Procrastinate.Version::OldKey(Procrastinate.UserData)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
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
extern Il2CppCodeGenString* _stringLiteral210;
extern Il2CppCodeGenString* _stringLiteral211;
extern Il2CppCodeGenString* _stringLiteral212;
extern Il2CppCodeGenString* _stringLiteral213;
extern Il2CppCodeGenString* _stringLiteral214;
extern Il2CppCodeGenString* _stringLiteral215;
extern Il2CppCodeGenString* _stringLiteral216;
extern Il2CppCodeGenString* _stringLiteral217;
extern Il2CppCodeGenString* _stringLiteral218;
extern Il2CppCodeGenString* _stringLiteral219;
extern "C" String_t* Version_OldKey_m884 (Object_t * __this /* static, unused */, int32_t ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
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
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		_stringLiteral213 = il2cpp_codegen_string_literal_from_index(213);
		_stringLiteral214 = il2cpp_codegen_string_literal_from_index(214);
		_stringLiteral215 = il2cpp_codegen_string_literal_from_index(215);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		_stringLiteral218 = il2cpp_codegen_string_literal_from_index(218);
		_stringLiteral219 = il2cpp_codegen_string_literal_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		float L_0 = Version_get_currentVersion_m877(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) < ((float)(3.05f)))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_2 = ___data;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_004e;
		}
		if (L_3 == 1)
		{
			goto IL_0054;
		}
		if (L_3 == 2)
		{
			goto IL_005a;
		}
		if (L_3 == 3)
		{
			goto IL_0084;
		}
		if (L_3 == 4)
		{
			goto IL_0084;
		}
		if (L_3 == 5)
		{
			goto IL_0060;
		}
		if (L_3 == 6)
		{
			goto IL_0084;
		}
		if (L_3 == 7)
		{
			goto IL_0066;
		}
		if (L_3 == 8)
		{
			goto IL_006c;
		}
		if (L_3 == 9)
		{
			goto IL_0078;
		}
		if (L_3 == 10)
		{
			goto IL_0072;
		}
		if (L_3 == 11)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0084;
	}

IL_004e:
	{
		return _stringLiteral200;
	}

IL_0054:
	{
		return _stringLiteral201;
	}

IL_005a:
	{
		return _stringLiteral202;
	}

IL_0060:
	{
		return _stringLiteral203;
	}

IL_0066:
	{
		return _stringLiteral204;
	}

IL_006c:
	{
		return _stringLiteral205;
	}

IL_0072:
	{
		return _stringLiteral206;
	}

IL_0078:
	{
		return _stringLiteral207;
	}

IL_007e:
	{
		return _stringLiteral208;
	}

IL_0084:
	{
		goto IL_013a;
	}

IL_0089:
	{
		float L_4 = V_0;
		if ((!(((float)L_4) < ((float)(3.06f)))))
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_5 = ___data;
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_00e5;
		}
		if (L_6 == 1)
		{
			goto IL_00eb;
		}
		if (L_6 == 2)
		{
			goto IL_00f1;
		}
		if (L_6 == 3)
		{
			goto IL_013a;
		}
		if (L_6 == 4)
		{
			goto IL_013a;
		}
		if (L_6 == 5)
		{
			goto IL_00f7;
		}
		if (L_6 == 6)
		{
			goto IL_00fd;
		}
		if (L_6 == 7)
		{
			goto IL_0103;
		}
		if (L_6 == 8)
		{
			goto IL_0109;
		}
		if (L_6 == 9)
		{
			goto IL_011b;
		}
		if (L_6 == 10)
		{
			goto IL_0115;
		}
		if (L_6 == 11)
		{
			goto IL_0121;
		}
		if (L_6 == 12)
		{
			goto IL_013a;
		}
		if (L_6 == 13)
		{
			goto IL_010f;
		}
		if (L_6 == 14)
		{
			goto IL_013a;
		}
		if (L_6 == 15)
		{
			goto IL_012d;
		}
		if (L_6 == 16)
		{
			goto IL_0127;
		}
	}
	{
		goto IL_013a;
	}

IL_00e5:
	{
		return _stringLiteral209;
	}

IL_00eb:
	{
		return _stringLiteral210;
	}

IL_00f1:
	{
		return _stringLiteral211;
	}

IL_00f7:
	{
		return _stringLiteral212;
	}

IL_00fd:
	{
		return _stringLiteral213;
	}

IL_0103:
	{
		return _stringLiteral214;
	}

IL_0109:
	{
		return _stringLiteral215;
	}

IL_010f:
	{
		return _stringLiteral216;
	}

IL_0115:
	{
		return _stringLiteral217;
	}

IL_011b:
	{
		return _stringLiteral207;
	}

IL_0121:
	{
		return _stringLiteral218;
	}

IL_0127:
	{
		return _stringLiteral219;
	}

IL_012d:
	{
		int32_t L_7 = ((int32_t)15);
		Object_t * L_8 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		return L_9;
	}

IL_013a:
	{
		return (String_t*)NULL;
	}
}
// System.Void Procrastinate.Version::Setf(Procrastinate.UserData)
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern "C" void Version_Setf_m885 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_Set_m887(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::Set(Procrastinate.UserData)
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern "C" void Version_Set_m886 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		Version_Set_m887(NULL /*static, unused*/, L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.Version::Set(Procrastinate.UserData,Procrastinate.Version/Type)
// Procrastinate.Version/Type
#include "AssemblyU2DCSharp_Procrastinate_Version_Type.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Version_t255_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t282_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral220;
extern Il2CppCodeGenString* _stringLiteral221;
extern Il2CppCodeGenString* _stringLiteral222;
extern Il2CppCodeGenString* _stringLiteral223;
extern Il2CppCodeGenString* _stringLiteral224;
extern Il2CppCodeGenString* _stringLiteral225;
extern Il2CppCodeGenString* _stringLiteral226;
extern Il2CppCodeGenString* _stringLiteral227;
extern "C" void Version_Set_m887 (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Version_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		UnityException_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral220 = il2cpp_codegen_string_literal_from_index(220);
		_stringLiteral221 = il2cpp_codegen_string_literal_from_index(221);
		_stringLiteral222 = il2cpp_codegen_string_literal_from_index(222);
		_stringLiteral223 = il2cpp_codegen_string_literal_from_index(223);
		_stringLiteral224 = il2cpp_codegen_string_literal_from_index(224);
		_stringLiteral225 = il2cpp_codegen_string_literal_from_index(225);
		_stringLiteral226 = il2cpp_codegen_string_literal_from_index(226);
		_stringLiteral227 = il2cpp_codegen_string_literal_from_index(227);
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
		IL2CPP_RUNTIME_CLASS_INIT(Version_t255_il2cpp_TypeInfo_var);
		String_t* L_2 = Version_OldKey_m884(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = ___key;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_5);
		V_3 = L_6;
		String_t* L_7 = V_0;
		V_4 = L_7;
		StringU5BU5D_t35* L_8 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 6));
		String_t* L_9 = V_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 0, sizeof(String_t*))) = (String_t*)L_9;
		StringU5BU5D_t35* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, _stringLiteral220);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, 1, sizeof(String_t*))) = (String_t*)_stringLiteral220;
		StringU5BU5D_t35* L_11 = L_10;
		String_t* L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, L_12);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 2, sizeof(String_t*))) = (String_t*)L_12;
		StringU5BU5D_t35* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, _stringLiteral221);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 3, sizeof(String_t*))) = (String_t*)_stringLiteral221;
		StringU5BU5D_t35* L_14 = L_13;
		String_t* L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		ArrayElementTypeCheck (L_14, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, 4, sizeof(String_t*))) = (String_t*)L_15;
		StringU5BU5D_t35* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 5);
		ArrayElementTypeCheck (L_16, _stringLiteral222);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 5, sizeof(String_t*))) = (String_t*)_stringLiteral222;
		String_t* L_17 = String_Concat_m517(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		String_t* L_18 = V_2;
		bool L_19 = PlayerPrefs_HasKey_m509(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
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
		float L_23 = PlayerPrefs_GetFloat_m1073(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		float L_24 = L_23;
		Object_t * L_25 = Box(Single_t176_il2cpp_TypeInfo_var, &L_24);
		V_1 = L_25;
		goto IL_00b4;
	}

IL_0086:
	{
		String_t* L_26 = V_2;
		int32_t L_27 = PlayerPrefs_GetInt_m1074(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_28);
		V_1 = L_29;
		goto IL_00b4;
	}

IL_0097:
	{
		String_t* L_30 = V_2;
		String_t* L_31 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		goto IL_00b4;
	}

IL_00a3:
	{
		String_t* L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m423(NULL /*static, unused*/, L_32, _stringLiteral223, /*hidden argument*/NULL);
		UnityException_t282 * L_34 = (UnityException_t282 *)il2cpp_codegen_object_new (UnityException_t282_il2cpp_TypeInfo_var);
		UnityException__ctor_m1005(L_34, L_33, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_34);
	}

IL_00b4:
	{
		String_t* L_35 = V_3;
		Object_t * L_36 = V_1;
		NullCheck(L_36);
		String_t* L_37 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		PlayerPrefs_SetString_m512(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		String_t* L_38 = V_2;
		String_t* L_39 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_40 = String_op_Inequality_m1075(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00e3;
		}
	}
	{
		String_t* L_41 = V_2;
		PlayerPrefs_DeleteKey_m1076(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		String_t* L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Concat_m423(NULL /*static, unused*/, L_42, _stringLiteral224, /*hidden argument*/NULL);
		V_0 = L_43;
		goto IL_00ef;
	}

IL_00e3:
	{
		String_t* L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m423(NULL /*static, unused*/, L_44, _stringLiteral225, /*hidden argument*/NULL);
		V_0 = L_45;
	}

IL_00ef:
	{
		String_t* L_46 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_47 = String_Concat_m423(NULL /*static, unused*/, L_46, _stringLiteral226, /*hidden argument*/NULL);
		V_0 = L_47;
		goto IL_010c;
	}

IL_0100:
	{
		String_t* L_48 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m423(NULL /*static, unused*/, L_48, _stringLiteral227, /*hidden argument*/NULL);
		V_0 = L_49;
	}

IL_010c:
	{
		int32_t L_50 = 5;
		Object_t * L_51 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_53 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0127;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_54 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
	}

IL_0127:
	{
		return;
	}
}
// <PrivateImplementationDetails>/$ArrayType$36
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24ArraMethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$36
extern "C" void U24ArrayTypeU2436_t256_marshal(const U24ArrayTypeU2436_t256& unmarshaled, U24ArrayTypeU2436_t256_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2436_t256_marshal_back(const U24ArrayTypeU2436_t256_marshaled& marshaled, U24ArrayTypeU2436_t256& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$36
extern "C" void U24ArrayTypeU2436_t256_marshal_cleanup(U24ArrayTypeU2436_t256_marshaled& marshaled)
{
}
// System.Void <PrivateImplementationDetails>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CPrivateImplementationDetailsU3E__ctor_m888 (U3CPrivateImplementationDetailsU3E_t257 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
