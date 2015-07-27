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

// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Action_1__ctor_m985_gshared (Action_1_t147 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Action_1_Invoke_m4009_gshared (Action_1_t147 * __this, bool ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m4009((Action_1_t147 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern "C" Object_t * Action_1_BeginInvoke_m11196_gshared (Action_1_t147 * __this, bool ___obj, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t156_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m11197_gshared (Action_1_t147 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// RMX.AGameController`1<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen_1.h"
// RMX.AGameController`1<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen_1MethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// RMX.Event
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Event.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// RMX.RMXTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXTests.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// RMX.Singletons/ASingleton`1<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_10MethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Void RMX.AGameController`1<System.Object>::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" void AGameController_1__ctor_m11198_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	{
		__this->____maxDisplayTime_13 = (5.0f);
		Color_t203  L_0 = Color_get_black_m2406(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___backgroundColor_26 = L_0;
		Color_t203  L_1 = Color_get_white_m1007(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___textColor_27 = L_1;
		Vector2_t44  L_2 = {0};
		Vector2__ctor_m555(&L_2, (float)(0.0f), (float)(-9.81f), /*hidden argument*/NULL);
		__this->___defaultGravity_29 = L_2;
		NullCheck((ASingleton_1_t1961 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (ASingleton_1_t1961 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((ASingleton_1_t1961 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Boolean RMX.AGameController`1<System.Object>::get_BuildForRelease()
extern "C" bool AGameController_1_get_BuildForRelease_m11199_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->____buildForRelease_10);
		return L_0;
	}
}
// System.Boolean RMX.AGameController`1<System.Object>::get_DebugHUD()
extern "C" bool AGameController_1_get_DebugHUD_m11200_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->____debugHUD_11);
		return L_0;
	}
}
// UnityEngine.TextAsset RMX.AGameController`1<System.Object>::get_Database()
extern "C" TextAsset_t138 * AGameController_1_get_Database_m11201_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	{
		TextAsset_t138 * L_0 = (TextAsset_t138 *)(__this->____database_28);
		return L_0;
	}
}
// System.Single RMX.AGameController`1<System.Object>::get_MaxDisplayTime()
extern "C" float AGameController_1_get_MaxDisplayTime_m11202_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	{
		float L_0 = (float)(__this->____maxDisplayTime_13);
		return L_0;
	}
}
// System.Void RMX.AGameController`1<System.Object>::Start()
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Event_t24_il2cpp_TypeInfo_var;
extern "C" void AGameController_1_Start_m11203_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Event_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((AGameController_1_t1960 *)__this);
		VirtActionInvoker0::Invoke(34 /* System.Void RMX.AGameController`1<System.Object>::PreStart() */, (AGameController_1_t1960 *)__this);
		bool L_0 = (bool)(__this->___safeMode_12);
		if (L_0)
		{
			goto IL_0050;
		}
	}
	{
		NullCheck((AGameController_1_t1960 *)__this);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean RMX.AGameController`1<System.Object>::get_DebugHUD() */, (AGameController_1_t1960 *)__this);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		Bugger_Initialize_m32(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0021:
	{
		Vector2_t44  L_2 = (Vector2_t44 )(__this->___defaultGravity_29);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Physics2D_set_gravity_m1022(NULL /*static, unused*/, (Vector2_t44 )L_2, /*hidden argument*/NULL);
		int32_t L_3 = 0;
		Object_t * L_4 = Box(Event_t24_il2cpp_TypeInfo_var, &L_3);
		NullCheck((RMXObject_t31 *)__this);
		RMXObject_WillBeginEvent_m77((RMXObject_t31 *)__this, (Enum_t6 *)L_4, /*hidden argument*/NULL);
		NullCheck((AGameController_1_t1960 *)__this);
		VirtActionInvoker0::Invoke(36 /* System.Void RMX.AGameController`1<System.Object>::StartSingletons() */, (AGameController_1_t1960 *)__this);
		NullCheck((AGameController_1_t1960 *)__this);
		VirtActionInvoker0::Invoke(38 /* System.Void RMX.AGameController`1<System.Object>::StartMobile() */, (AGameController_1_t1960 *)__this);
		int32_t L_5 = 0;
		Object_t * L_6 = Box(Event_t24_il2cpp_TypeInfo_var, &L_5);
		NullCheck((RMXObject_t31 *)__this);
		RMXObject_DidFinishEvent_m79((RMXObject_t31 *)__this, (Enum_t6 *)L_6, /*hidden argument*/NULL);
	}

IL_0050:
	{
		NullCheck((AGameController_1_t1960 *)__this);
		VirtActionInvoker0::Invoke(35 /* System.Void RMX.AGameController`1<System.Object>::PostStart() */, (AGameController_1_t1960 *)__this);
		return;
	}
}
// System.Void RMX.AGameController`1<System.Object>::PreStart()
extern "C" void AGameController_1_PreStart_m11204_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.AGameController`1<System.Object>::PostStart()
extern "C" void AGameController_1_PostStart_m11205_gshared (AGameController_1_t1960 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean RMX.AGameController`1<System.Object>::ShouldDebug(System.Enum)
// System.Enum
#include "mscorlib_System_Enum.h"
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t282_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2965;
extern "C" bool AGameController_1_ShouldDebug_m11206_gshared (Object_t * __this /* static, unused */, Enum_t6 * ___feature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		UnityException_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		_stringLiteral2965 = il2cpp_codegen_string_literal_from_index(2965);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		bool L_0 = Singletons_get_GameControllerInitialized_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_1 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_0 = (Object_t *)L_1;
		Enum_t6 * L_2 = ___feature;
		NullCheck((AGameController_1_t1960 *)(*(&V_0)));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Enum_t6 * >::Invoke(41 /* System.Boolean RMX.AGameController`1<System.Object>::IsDebugging(System.Enum) */, (AGameController_1_t1960 *)(*(&V_0)), (Enum_t6 *)L_2);
		return L_3;
	}

IL_001f:
	{
		Enum_t6 * L_4 = ___feature;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m606(NULL /*static, unused*/, (Object_t *)_stringLiteral2965, (Object_t *)L_4, /*hidden argument*/NULL);
		UnityException_t282 * L_6 = (UnityException_t282 *)il2cpp_codegen_object_new (UnityException_t282_il2cpp_TypeInfo_var);
		UnityException__ctor_m1005(L_6, (String_t*)L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}
}
// System.Boolean RMX.AGameController`1<System.Object>::IsDebugging(System.Enum)
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2966;
extern "C" bool AGameController_1_IsDebugging_m11207_gshared (AGameController_1_t1960 * __this, Enum_t6 * ___feature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral2966 = il2cpp_codegen_string_literal_from_index(2966);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->____buildForRelease_10);
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
		Object_t * L_3 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((Enum_t6 *)L_1);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_1, (Object_t *)L_3);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		bool L_5 = (bool)(__this->___DebugMisc_14);
		return L_5;
	}

IL_0025:
	{
		Enum_t6 * L_6 = ___feature;
		int32_t L_7 = 1;
		Object_t * L_8 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_7);
		NullCheck((Enum_t6 *)L_6);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_6, (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		bool L_10 = (bool)(__this->___DebugGameCenter_16);
		return L_10;
	}

IL_003d:
	{
		Enum_t6 * L_11 = ___feature;
		int32_t L_12 = 2;
		Object_t * L_13 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_12);
		NullCheck((Enum_t6 *)L_11);
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_11, (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		bool L_15 = (bool)(__this->___DebugAchievements_17);
		return L_15;
	}

IL_0055:
	{
		Enum_t6 * L_16 = ___feature;
		int32_t L_17 = 3;
		Object_t * L_18 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_17);
		NullCheck((Enum_t6 *)L_16);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_16, (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_006d;
		}
	}
	{
		bool L_20 = (bool)(__this->___DebugExceptions_18);
		return L_20;
	}

IL_006d:
	{
		Enum_t6 * L_21 = ___feature;
		int32_t L_22 = 4;
		Object_t * L_23 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_22);
		NullCheck((Enum_t6 *)L_21);
		bool L_24 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_21, (Object_t *)L_23);
		if (!L_24)
		{
			goto IL_0085;
		}
	}
	{
		bool L_25 = (bool)(__this->___DebugSingletons_19);
		return L_25;
	}

IL_0085:
	{
		Enum_t6 * L_26 = ___feature;
		int32_t L_27 = 5;
		Object_t * L_28 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_27);
		NullCheck((Enum_t6 *)L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_26, (Object_t *)L_28);
		if (!L_29)
		{
			goto IL_009d;
		}
	}
	{
		bool L_30 = (bool)(__this->___DebugPatches_22);
		return L_30;
	}

IL_009d:
	{
		Enum_t6 * L_31 = ___feature;
		int32_t L_32 = 6;
		Object_t * L_33 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_32);
		NullCheck((Enum_t6 *)L_31);
		bool L_34 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_31, (Object_t *)L_33);
		if (!L_34)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_35 = (bool)(__this->___DebugDatabase_21);
		return L_35;
	}

IL_00b5:
	{
		Enum_t6 * L_36 = ___feature;
		int32_t L_37 = 7;
		Object_t * L_38 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_37);
		NullCheck((Enum_t6 *)L_36);
		bool L_39 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_36, (Object_t *)L_38);
		if (!L_39)
		{
			goto IL_00cd;
		}
	}
	{
		bool L_40 = (bool)(__this->___DebugEvents_23);
		return L_40;
	}

IL_00cd:
	{
		Enum_t6 * L_41 = ___feature;
		int32_t L_42 = 8;
		Object_t * L_43 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_42);
		NullCheck((Enum_t6 *)L_41);
		bool L_44 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, (Enum_t6 *)L_41, (Object_t *)L_43);
		if (!L_44)
		{
			goto IL_00e5;
		}
	}
	{
		bool L_45 = (bool)(__this->___DebugEarlyInits_15);
		return L_45;
	}

IL_00e5:
	{
		Enum_t6 * L_46 = ___feature;
		NullCheck((Enum_t6 *)L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t6 *)L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m423(NULL /*static, unused*/, (String_t*)L_47, (String_t*)_stringLiteral2966, /*hidden argument*/NULL);
		Debug_LogWarning_m443(NULL /*static, unused*/, (Object_t *)L_48, /*hidden argument*/NULL);
		return 0;
	}
}
// RMX.Singletons/ASingleton`1<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_10.h"
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// RMX.Singletons/ASingleton`1/Init<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_In_1.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObject.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m576_gshared (GameObject_t11 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m576(__this, method) (( Object_t * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// System.Void RMX.Singletons/ASingleton`1<System.Object>::.ctor()
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
extern TypeInfo* RMXObject_t31_il2cpp_TypeInfo_var;
extern "C" void ASingleton_1__ctor_m11208_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXObject_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((RMXObject_t31 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t31_il2cpp_TypeInfo_var);
		RMXObject__ctor_m71((RMXObject_t31 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.Singletons/ASingleton`1<System.Object>::.cctor()
extern "C" void ASingleton_1__cctor_m11209_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean RMX.Singletons/ASingleton`1<System.Object>::get_SetupComplete()
extern "C" bool ASingleton_1_get_SetupComplete_m11210_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean RMX.Singletons/ASingleton`1<System.Object>::get_IsInitialized()
extern "C" bool ASingleton_1_get_IsInitialized_m11211_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_0 = ((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____isInitialized_8;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____singleton_7;
		NullCheck((ASingleton_1_t1961 *)((ASingleton_1_t1961 *)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean RMX.Singletons/ASingleton`1<System.Object>::get_SetupComplete() */, (ASingleton_1_t1961 *)((ASingleton_1_t1961 *)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// RMX.IGameController RMX.Singletons/ASingleton`1<System.Object>::get_gameController()
extern TypeInfo* Singletons_t2_il2cpp_TypeInfo_var;
extern "C" Object_t * ASingleton_1_get_gameController_m11212_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Singletons_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((Singletons_t2_StaticFields*)Singletons_t2_il2cpp_TypeInfo_var->static_fields)->____gameController_0;
		return L_0;
	}
}
// T RMX.Singletons/ASingleton`1<System.Object>::get__current()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* IDebugHUD_t2933_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2967;
extern Il2CppCodeGenString* _stringLiteral2968;
extern "C" Object_t * ASingleton_1_get__current_m11213_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		IDebugHUD_t2933_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3045);
		_stringLiteral2967 = il2cpp_codegen_string_literal_from_index(2967);
		_stringLiteral2968 = il2cpp_codegen_string_literal_from_index(2968);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_0 = (( bool (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____singleton_7;
		return ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)), /*hidden argument*/NULL);
		if (!((Object_t *)IsInst(L_2, IGameController_t3_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)), /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m423(NULL /*static, unused*/, (String_t*)L_4, (String_t*)_stringLiteral2967, /*hidden argument*/NULL);
		Exception_t154 * L_6 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_6, (String_t*)L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)), /*hidden argument*/NULL);
		if (!((Object_t *)IsInst(L_7, IDebugHUD_t2933_il2cpp_TypeInfo_var)))
		{
			goto IL_0067;
		}
	}
	{
		Exception_t154 * L_8 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_8, (String_t*)_stringLiteral2968, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_9 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// System.Boolean RMX.Singletons/ASingleton`1<System.Object>::get_Destroyed()
extern "C" bool ASingleton_1_get_Destroyed_m11214_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->____destroyed_9);
		return L_0;
	}
}
// T RMX.Singletons/ASingleton`1<System.Object>::Initialize()
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t11_il2cpp_TypeInfo_var;
extern TypeInfo* ISingleton_t158_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2967;
extern Il2CppCodeGenString* _stringLiteral2969;
extern "C" Object_t * ASingleton_1_Initialize_m11215_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		GameObject_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ISingleton_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		_stringLiteral2967 = il2cpp_codegen_string_literal_from_index(2967);
		_stringLiteral2969 = il2cpp_codegen_string_literal_from_index(2969);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t11 * V_0 = {0};
	Object_t * V_1 = {0};
	GameObject_t11 * V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)), /*hidden argument*/NULL);
		if (!((Object_t *)IsInst(L_0, IGameController_t3_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)), /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m423(NULL /*static, unused*/, (String_t*)L_2, (String_t*)_stringLiteral2967, /*hidden argument*/NULL);
		Exception_t154 * L_4 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_5 = (( bool (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_6 = ((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____singleton_7;
		return L_6;
	}

IL_0043:
	{
		GameObject_t11 * L_7 = (GameObject_t11 *)il2cpp_codegen_object_new (GameObject_t11_il2cpp_TypeInfo_var);
		GameObject__ctor_m571(L_7, (String_t*)_stringLiteral2969, /*hidden argument*/NULL);
		V_0 = (GameObject_t11 *)L_7;
		GameObject_t11 * L_8 = V_0;
		NullCheck((GameObject_t11 *)L_8);
		Object_t * L_9 = (( Object_t * (*) (GameObject_t11 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((GameObject_t11 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_1 = (Object_t *)L_9;
		Object_t * L_10 = V_1;
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		Object_t * L_11 = V_1;
		NullCheck((Object_t *)L_11);
		bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean RMX.ISingleton::get_Destroyed() */, ISingleton_t158_il2cpp_TypeInfo_var, (Object_t *)L_11);
		if (!L_12)
		{
			goto IL_0072;
		}
	}

IL_006b:
	{
		return ((Object_t *)Castclass(NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}

IL_0072:
	{
		Object_t * L_13 = V_1;
		NullCheck((Object_t *)L_13);
		GameObject_t11 * L_14 = (GameObject_t11 *)InterfaceFuncInvoker0< GameObject_t11 * >::Invoke(1 /* UnityEngine.GameObject RMX.ISingleton::get_gameObject() */, ISingleton_t158_il2cpp_TypeInfo_var, (Object_t *)L_13);
		Object_t * L_15 = V_1;
		NullCheck((Object_t *)L_15);
		Type_t * L_16 = Object_GetType_m495((Object_t *)L_15, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_16);
		NullCheck((Object_t76 *)L_14);
		Object_set_name_m2619((Object_t76 *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		Object_t * L_18 = V_1;
		if (((Object_t *)IsInst(L_18, IGameController_t3_il2cpp_TypeInfo_var)))
		{
			goto IL_00be;
		}
	}
	{
		bool L_19 = Singletons_get_GameControllerInitialized_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		Object_t * L_20 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((Object_t *)L_20);
		GameObject_t11 * L_21 = (GameObject_t11 *)InterfaceFuncInvoker0< GameObject_t11 * >::Invoke(1 /* UnityEngine.GameObject RMX.ISingleton::get_gameObject() */, ISingleton_t158_il2cpp_TypeInfo_var, (Object_t *)L_20);
		V_2 = (GameObject_t11 *)L_21;
		Object_t * L_22 = V_1;
		NullCheck((Object_t *)L_22);
		GameObject_t11 * L_23 = (GameObject_t11 *)InterfaceFuncInvoker0< GameObject_t11 * >::Invoke(1 /* UnityEngine.GameObject RMX.ISingleton::get_gameObject() */, ISingleton_t158_il2cpp_TypeInfo_var, (Object_t *)L_22);
		NullCheck((GameObject_t11 *)L_23);
		Transform_t41 * L_24 = GameObject_get_transform_m534((GameObject_t11 *)L_23, /*hidden argument*/NULL);
		GameObject_t11 * L_25 = V_2;
		NullCheck((GameObject_t11 *)L_25);
		Transform_t41 * L_26 = GameObject_get_transform_m534((GameObject_t11 *)L_25, /*hidden argument*/NULL);
		NullCheck((Transform_t41 *)L_24);
		Transform_SetParent_m2530((Transform_t41 *)L_24, (Transform_t41 *)L_26, /*hidden argument*/NULL);
	}

IL_00be:
	{
		Object_t * L_27 = V_1;
		return ((Object_t *)Castclass(((Object_t *)IsInst(L_27, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// System.Void RMX.Singletons/ASingleton`1<System.Object>::MainInitCheck()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Singletons_t2_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2970;
extern "C" void ASingleton_1_MainInitCheck_m11216_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Singletons_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral2970 = il2cpp_codegen_string_literal_from_index(2970);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((Object_t *)IsInst(__this, IGameController_t3_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		((Singletons_t2_StaticFields*)Singletons_t2_il2cpp_TypeInfo_var->static_fields)->____gameController_0 = ((Object_t *)IsInst(__this, IGameController_t3_il2cpp_TypeInfo_var));
		Object_t * L_0 = ((Singletons_t2_StaticFields*)Singletons_t2_il2cpp_TypeInfo_var->static_fields)->____gameController_0;
		NullCheck((Object_t *)L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void RMX.IGameController::Patch() */, IGameController_t3_il2cpp_TypeInfo_var, (Object_t *)L_0);
		goto IL_0049;
	}

IL_0025:
	{
		Object_t * L_1 = ((Singletons_t2_StaticFields*)Singletons_t2_il2cpp_TypeInfo_var->static_fields)->____gameController_0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		NullCheck((Object_t *)__this);
		Type_t * L_2 = Object_GetType_m495((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2970, (String_t*)L_3, /*hidden argument*/NULL);
		Debug_LogWarning_m443(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// RMX.Singletons/ASingleton`1/Init<T> RMX.Singletons/ASingleton`1<System.Object>::get_WillInitialize()
extern "C" int32_t ASingleton_1_get_WillInitialize_m11217_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void RMX.Singletons/ASingleton`1<System.Object>::Awake()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern Il2CppCodeGenString* _stringLiteral2972;
extern Il2CppCodeGenString* _stringLiteral2969;
extern Il2CppCodeGenString* _stringLiteral2973;
extern Il2CppCodeGenString* _stringLiteral2974;
extern "C" void ASingleton_1_Awake_m11218_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		_stringLiteral2972 = il2cpp_codegen_string_literal_from_index(2972);
		_stringLiteral2969 = il2cpp_codegen_string_literal_from_index(2969);
		_stringLiteral2973 = il2cpp_codegen_string_literal_from_index(2973);
		_stringLiteral2974 = il2cpp_codegen_string_literal_from_index(2974);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Type_t * L_0 = Object_GetType_m495((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m440(NULL /*static, unused*/, (String_t*)_stringLiteral2971, (String_t*)L_1, (String_t*)_stringLiteral2972, /*hidden argument*/NULL);
		V_0 = (String_t*)L_2;
		NullCheck((ASingleton_1_t1961 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* RMX.Singletons/ASingleton`1/Init<T> RMX.Singletons/ASingleton`1<System.Object>::get_WillInitialize() */, (ASingleton_1_t1961 *)__this);
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		if (L_4 == 0)
		{
			goto IL_0060;
		}
		if (L_4 == 1)
		{
			goto IL_0052;
		}
		if (L_4 == 2)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0148;
	}

IL_0039:
	{
		Object_Destroy_m690(NULL /*static, unused*/, (Object_t76 *)__this, /*hidden argument*/NULL);
		NullCheck((Component_t178 *)__this);
		GameObject_t11 * L_5 = Component_get_gameObject_m547((Component_t178 *)__this, /*hidden argument*/NULL);
		Object_Destroy_m690(NULL /*static, unused*/, (Object_t76 *)L_5, /*hidden argument*/NULL);
		__this->____destroyed_9 = 1;
		return;
	}

IL_0052:
	{
		Object_Destroy_m690(NULL /*static, unused*/, (Object_t76 *)__this, /*hidden argument*/NULL);
		__this->____destroyed_9 = 1;
		return;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_6 = ((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____singleton_7;
		bool L_7 = Object_op_Equality_m473(NULL /*static, unused*/, (Object_t76 *)L_6, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00b2;
		}
	}
	{
		NullCheck((Component_t178 *)__this);
		GameObject_t11 * L_8 = Component_get_gameObject_m547((Component_t178 *)__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m924(NULL /*static, unused*/, (Object_t76 *)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____singleton_7 = ((Object_t *)Castclass(((Object_t *)IsInst(__this, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		NullCheck((ASingleton_1_t1961 *)__this);
		(( void (*) (ASingleton_1_t1961 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((ASingleton_1_t1961 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		Bugger_AddToWatchList_m23(NULL /*static, unused*/, (Object_t *)__this, /*hidden argument*/NULL);
		((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____isInitialized_8 = 1;
		NullCheck((RMXObject_t31 *)__this);
		RMXObject_Awake_m75((RMXObject_t31 *)__this, /*hidden argument*/NULL);
		goto IL_0143;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_9 = ((ASingleton_1_t1961_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->____singleton_7;
		bool L_10 = Object_op_Inequality_m548(NULL /*static, unused*/, (Object_t76 *)L_9, (Object_t76 *)__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0143;
		}
	}
	{
		NullCheck((Component_t178 *)__this);
		GameObject_t11 * L_11 = Component_get_gameObject_m547((Component_t178 *)__this, /*hidden argument*/NULL);
		NullCheck((Object_t76 *)L_11);
		String_t* L_12 = Object_get_name_m508((Object_t76 *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m421(NULL /*static, unused*/, (String_t*)L_12, (String_t*)_stringLiteral2969, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_011a;
		}
	}
	{
		String_t* L_14 = V_0;
		NullCheck((Object_t *)__this);
		Type_t * L_15 = Object_GetType_m495((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m460(NULL /*static, unused*/, (String_t*)L_14, (String_t*)_stringLiteral2973, (String_t*)L_16, (String_t*)_stringLiteral2972, /*hidden argument*/NULL);
		V_0 = (String_t*)L_17;
		__this->____destroyed_9 = 1;
		NullCheck((Component_t178 *)__this);
		GameObject_t11 * L_18 = Component_get_gameObject_m547((Component_t178 *)__this, /*hidden argument*/NULL);
		Object_Destroy_m690(NULL /*static, unused*/, (Object_t76 *)L_18, /*hidden argument*/NULL);
		Object_Destroy_m690(NULL /*static, unused*/, (Object_t76 *)__this, /*hidden argument*/NULL);
		goto IL_0143;
	}

IL_011a:
	{
		String_t* L_19 = V_0;
		NullCheck((Object_t *)__this);
		Type_t * L_20 = Object_GetType_m495((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m460(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral2974, (String_t*)L_21, (String_t*)_stringLiteral2972, /*hidden argument*/NULL);
		V_0 = (String_t*)L_22;
		__this->____destroyed_9 = 1;
		Object_Destroy_m690(NULL /*static, unused*/, (Object_t76 *)__this, /*hidden argument*/NULL);
	}

IL_0143:
	{
		goto IL_0148;
	}

IL_0148:
	{
		int32_t L_23 = 4;
		Object_t * L_24 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_26 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_24, (String_t*)L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0163;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_27 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, (Object_t *)L_27, /*hidden argument*/NULL);
	}

IL_0163:
	{
		return;
	}
}
// UnityEngine.GameObject RMX.Singletons/ASingleton`1<System.Object>::RMX.ISingleton.get_gameObject()
extern "C" GameObject_t11 * ASingleton_1_RMX_ISingleton_get_gameObject_m11219_gshared (ASingleton_1_t1961 * __this, const MethodInfo* method)
{
	{
		NullCheck((Component_t178 *)__this);
		GameObject_t11 * L_0 = Component_get_gameObject_m547((Component_t178 *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// RMX.Singletons/ASingleton`1/Init<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_In_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
struct ObjectU5BU5D_t148;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11180_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148* p0, Object_t * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11180(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, Object_t *, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisObject_t_m11180_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct ObjectU5BU5D_t148;
struct IComparer_1_t2888;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20525_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisObject_t_m20525(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisObject_t_m20525_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct ObjectU5BU5D_t148;
struct Comparison_1_t1977;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m20564_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148* p0, int32_t p1, Comparison_1_t1977 * p2, const MethodInfo* method);
#define Array_Sort_TisObject_t_m20564(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, int32_t, Comparison_1_t1977 *, const MethodInfo*))Array_Sort_TisObject_t_m20564_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ObjectU5BU5D_t148;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m20523_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisObject_t_m20523(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148**, int32_t, const MethodInfo*))Array_Resize_TisObject_t_m20523_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m4085_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t148* L_0 = ((List_1_t502_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11221_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t502 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t148* L_3 = ((List_1_t502_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t502 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t502 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void List_1__ctor_m11223_gshared (List_1_t502 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, (String_t*)_stringLiteral1504, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void List_1__ctor_m11225_gshared (List_1_t502 * __this, ObjectU5BU5D_t148* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11227_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t502_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11229_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t502 *)__this);
		Enumerator_t1964  L_0 = (( Enumerator_t1964  (*) (List_1_t502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1964  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11231_gshared (List_1_t502 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11233_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t502 *)__this);
		Enumerator_t1964  L_0 = (( Enumerator_t1964  (*) (List_1_t502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1964  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" int32_t List_1_System_Collections_IList_Add_m11235_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t502 *)__this);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(T) */, (List_1_t502 *)__this, (Object_t *)((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m11237_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t502 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T) */, (List_1_t502 *)__this, (Object_t *)((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11239_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t502 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T) */, (List_1_t502 *)__this, (Object_t *)((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" void List_1_System_Collections_IList_Insert_m11241_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t502 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t502 *)__this);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T) */, (List_1_t502 *)__this, (int32_t)L_1, (Object_t *)((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t275 * L_3 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_3, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m11243_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
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
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t502 *)__this);
			VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T) */, (List_1_t502 *)__this, (Object_t *)((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11245_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11247_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11249_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11251_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11253_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11255_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t502 *)__this);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t502 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" void List_1_System_Collections_IList_set_Item_m11257_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
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
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t502 *)__this);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T) */, (List_1_t502 *)__this, (int32_t)L_0, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, (String_t*)_stringLiteral575, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11259_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		ObjectU5BU5D_t148* L_1 = (ObjectU5BU5D_t148*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t502 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Object_t * L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, L_5, sizeof(Object_t *))) = (Object_t *)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m11261_gshared (List_1_t502 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t502 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m5119(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m5119(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t502 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11263_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t502 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< ObjectU5BU5D_t148*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (ObjectU5BU5D_t148*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m11265_gshared (List_1_t502 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (Object_t *)L_3;
			Object_t * L_4 = V_0;
			NullCheck((List_1_t502 *)__this);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(T) */, (List_1_t502 *)__this, (Object_t *)L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11267_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t502 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t502 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t502 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1965 * List_1_AsReadOnly_m11269_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1965 * L_0 = (ReadOnlyCollection_1_t1965 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t1965 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11271_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		ObjectU5BU5D_t148* L_1 = (ObjectU5BU5D_t148*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11273_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		Object_t * L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t148*)L_0, (Object_t *)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11275_gshared (List_1_t502 * __this, ObjectU5BU5D_t148* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Exists(System.Predicate`1<T>)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6.h"
extern "C" bool List_1_Exists_m11276_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	{
		Predicate_1_t1971 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1971 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t1971 * L_2 = ___match;
		NullCheck((List_1_t502 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t502 *, int32_t, int32_t, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t502 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t1971 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * List_1_Find_m11278_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	Object_t * G_B3_0 = {0};
	{
		Predicate_1_t1971 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1971 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t1971 * L_2 = ___match;
		NullCheck((List_1_t502 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t502 *, int32_t, int32_t, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t502 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t1971 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7, sizeof(Object_t *)));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2090;
extern "C" void List_1_CheckMatch_m11280_gshared (Object_t * __this /* static, unused */, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral2090 = il2cpp_codegen_string_literal_from_index(2090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t1971 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral2090, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t502 * List_1_FindAll_m11282_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	{
		Predicate_1_t1971 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1971 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65536))))
		{
			goto IL_001e;
		}
	}
	{
		Predicate_1_t1971 * L_2 = ___match;
		NullCheck((List_1_t502 *)__this);
		List_1_t502 * L_3 = (( List_1_t502 * (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((List_1_t502 *)__this, (Predicate_1_t1971 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		return L_3;
	}

IL_001e:
	{
		Predicate_1_t1971 * L_4 = ___match;
		NullCheck((List_1_t502 *)__this);
		List_1_t502 * L_5 = (( List_1_t502 * (*) (List_1_t502 *, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)((List_1_t502 *)__this, (Predicate_1_t1971 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_5;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t502 * List_1_FindAllStackBits_m11284_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	uint32_t* V_0 = {0};
	uint32_t* V_1 = {0};
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectU5BU5D_t148* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if ((uint64_t)(uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1)) * (uint64_t)(uint32_t)4 > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		int8_t* L_1 = (int8_t*) alloca(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		memset(L_1,0,((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		V_0 = (uint32_t*)(L_1);
		uint32_t* L_2 = V_0;
		V_1 = (uint32_t*)L_2;
		V_2 = (int32_t)0;
		V_3 = (uint32_t)((int32_t)-2147483648);
		V_4 = (int32_t)0;
		goto IL_005f;
	}

IL_0022:
	{
		Predicate_1_t1971 * L_3 = ___match;
		ObjectU5BU5D_t148* L_4 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t1971 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t1971 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1971 *)L_3, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_6, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t* L_8 = V_1;
		uint32_t* L_9 = V_1;
		uint32_t L_10 = V_3;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_9))|(int32_t)L_10));
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0044:
	{
		uint32_t L_12 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_12>>1));
		uint32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		uint32_t* L_14 = V_1;
		V_1 = (uint32_t*)((uint32_t*)((intptr_t)L_14+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_0059:
	{
		int32_t L_15 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_18 = V_2;
		V_5 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_18));
		V_3 = (uint32_t)((int32_t)-2147483648);
		uint32_t* L_19 = V_0;
		V_1 = (uint32_t*)L_19;
		V_6 = (int32_t)0;
		V_7 = (int32_t)0;
		goto IL_00c7;
	}

IL_0087:
	{
		uint32_t* L_20 = V_1;
		uint32_t L_21 = V_3;
		uint32_t L_22 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)(*((uint32_t*)L_20))&(int32_t)L_21))) == ((uint32_t)L_22))))
		{
			goto IL_00ac;
		}
	}
	{
		ObjectU5BU5D_t148* L_23 = V_5;
		int32_t L_24 = V_6;
		int32_t L_25 = (int32_t)L_24;
		V_6 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		ObjectU5BU5D_t148* L_26 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_27 = V_7;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25, sizeof(Object_t *))) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28, sizeof(Object_t *)));
	}

IL_00ac:
	{
		uint32_t L_29 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_29>>1));
		uint32_t L_30 = V_3;
		if (L_30)
		{
			goto IL_00c1;
		}
	}
	{
		uint32_t* L_31 = V_1;
		V_1 = (uint32_t*)((uint32_t*)((intptr_t)L_31+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_00c1:
	{
		int32_t L_32 = V_7;
		V_7 = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c7:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0087;
		}
	}

IL_00dc:
	{
		ObjectU5BU5D_t148* L_37 = V_5;
		int32_t L_38 = V_2;
		List_1_t502 * L_39 = (List_1_t502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t502 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_39, (ObjectU5BU5D_t148*)L_37, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_39;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t502 * List_1_FindAllList_m11286_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	List_1_t502 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t502 * L_0 = (List_1_t502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		V_0 = (List_1_t502 *)L_0;
		V_1 = (int32_t)0;
		goto IL_003a;
	}

IL_000d:
	{
		Predicate_1_t1971 * L_1 = ___match;
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t1971 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t1971 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1971 *)L_1, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		List_1_t502 * L_6 = V_0;
		ObjectU5BU5D_t148* L_7 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((List_1_t502 *)L_6);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(T) */, (List_1_t502 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9, sizeof(Object_t *))));
	}

IL_0036:
	{
		int32_t L_10 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t502 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11288_gshared (List_1_t502 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t1971 * L_3 = ___match;
		ObjectU5BU5D_t148* L_4 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t1971 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t1971 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1971 *)L_3, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_6, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1964  List_1_GetEnumerator_m11289_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1964  L_0 = {0};
		(( void (*) (Enumerator_t1964 *, List_1_t502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(&L_0, (List_1_t502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11291_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		Object_t * L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t148*)L_0, (Object_t *)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11293_gshared (List_1_t502 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_6 = ___start;
		ObjectU5BU5D_t148* L_7 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		ObjectU5BU5D_t148* L_15 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_CheckIndex_m11295_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11297_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t502 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t502 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t502 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		ObjectU5BU5D_t148* L_4 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_5 = ___index;
		Object_t * L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))) = (Object_t *)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2976;
extern "C" void List_1_CheckCollection_m11299_gshared (List_1_t502 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral2976 = il2cpp_codegen_string_literal_from_index(2976);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral2976, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11301_gshared (List_1_t502 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((List_1_t502 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T) */, (List_1_t502 *)__this, (Object_t *)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t502 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t502 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11303_gshared (List_1_t502 * __this, Predicate_1_t1971 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1971 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1971 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t1971 * L_1 = ___match;
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t1971 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t1971 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1971 *)L_1, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t1971 * L_13 = ___match;
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t1971 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t1971 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1971 *)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		ObjectU5BU5D_t148* L_18 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		ObjectU5BU5D_t148* L_21 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20, sizeof(Object_t *))) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23, sizeof(Object_t *)));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		ObjectU5BU5D_t148* L_29 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_RemoveAt_m11305_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t502 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11307_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m5140(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11309_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		Comparer_1_t1972 * L_2 = (( Comparer_1_t1972 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t148*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
extern "C" void List_1_Sort_m11311_gshared (List_1_t502 * __this, Comparison_1_t1977 * ___comparison, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t1977 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148*, int32_t, Comparison_1_t1977 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t148*)L_0, (int32_t)L_1, (Comparison_1_t1977 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t148* List_1_ToArray_m11312_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	ObjectU5BU5D_t148* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		ObjectU5BU5D_t148* L_1 = (ObjectU5BU5D_t148*)(__this->____items_1);
		ObjectU5BU5D_t148* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11314_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t502 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11316_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m11318_gshared (List_1_t502 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_2 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6161(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		ObjectU5BU5D_t148** L_3 = (ObjectU5BU5D_t148**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t148**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11320_gshared (List_1_t502 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" Object_t * List_1_get_Item_m11322_gshared (List_1_t502 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_2 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_2, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5, sizeof(Object_t *)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_set_Item_m11324_gshared (List_1_t502 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t502 *)__this);
		(( void (*) (List_1_t502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t502 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		ObjectU5BU5D_t148* L_4 = (ObjectU5BU5D_t148*)(__this->____items_1);
		int32_t L_5 = ___index;
		Object_t * L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))) = (Object_t *)L_6;
		return;
	}
}
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_genMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
struct Object_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m20512_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m20512(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m20512_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m11325_gshared (InternalEnumerator_1_t1963 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11326_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (InternalEnumerator_1_t1963 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1963 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_0;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11327_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m11328_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" Object_t * InternalEnumerator_1_get_Current_m11329_gshared (InternalEnumerator_1_t1963 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Object_t * L_8 = (( Object_t * (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
extern "C" void Enumerator__ctor_m11330_gshared (Enumerator_t1964 * __this, List_1_t502 * ___l, const MethodInfo* method)
{
	{
		List_1_t502 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t502 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11331_gshared (Enumerator_t1964 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1964 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1964 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6112(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		Object_t * L_2 = (Object_t *)(__this->___current_3);
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m11332_gshared (Enumerator_t1964 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t502 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2979;
extern "C" void Enumerator_VerifyState_m11333_gshared (Enumerator_t1964 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2979 = il2cpp_codegen_string_literal_from_index(2979);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t502 * L_0 = (List_1_t502 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t1964  L_1 = (*(Enumerator_t1964 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m495((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t905 * L_5 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t502 * L_7 = (List_1_t502 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t1075 * L_9 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_9, (String_t*)_stringLiteral2979, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11334_gshared (Enumerator_t1964 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t1964 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1964 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t502 * L_2 = (List_1_t502 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t502 * L_4 = (List_1_t502 *)(__this->___l_0);
		NullCheck(L_4);
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_9, sizeof(Object_t *)));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m11335_gshared (Enumerator_t1964 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___current_3);
		return L_0;
	}
}
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1515;
extern "C" void ReadOnlyCollection_1__ctor_m11336_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1515 = il2cpp_codegen_string_literal_from_index(1515);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1515, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11337_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11338_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11339_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11340_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11341_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11342_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t1965 *)__this);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1965 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11343_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11344_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11345_gshared (ReadOnlyCollection_1_t1965 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t812_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11346_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t812_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m11347_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m11348_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m11349_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11350_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m11351_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m11352_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11353_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11354_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11355_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11356_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11357_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m11358_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m11359_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m11360_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m11361_gshared (ReadOnlyCollection_1_t1965 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t148*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (ObjectU5BU5D_t148*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m11362_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m11363_gshared (ReadOnlyCollection_1_t1965 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m11364_gshared (ReadOnlyCollection_1_t1965 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m11365_gshared (ReadOnlyCollection_1_t1965 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen.h"
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m11366_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t502 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t502 * L_0 = (List_1_t502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t502 *)L_0;
		List_1_t502 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t502 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11367_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11368_gshared (Collection_1_t1967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11369_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11370_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t1967 *)__this, (int32_t)L_2, (Object_t *)L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11371_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11372_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11373_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t1967 *)__this, (int32_t)L_0, (Object_t *)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11374_gshared (Collection_1_t1967 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1967 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T) */, (Collection_1_t1967 *)__this, (Object_t *)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t1967 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11375_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11376_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11377_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11378_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11379_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11380_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T) */, (Collection_1_t1967 *)__this, (int32_t)L_0, (Object_t *)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11381_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___item;
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t1967 *)__this, (int32_t)L_2, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11382_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems() */, (Collection_1_t1967 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11383_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11384_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m11385_gshared (Collection_1_t1967 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t148*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (ObjectU5BU5D_t148*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11386_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11387_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11388_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___item;
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t1967 *)__this, (int32_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11389_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Object_t *)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11390_gshared (Collection_1_t1967 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((Collection_1_t1967 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T) */, (Collection_1_t1967 *)__this, (Object_t *)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t1967 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11391_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t1967 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11392_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Object>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11393_gshared (Collection_1_t1967 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11394_gshared (Collection_1_t1967 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11395_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		NullCheck((Collection_1_t1967 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T) */, (Collection_1_t1967 *)__this, (int32_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11396_gshared (Collection_1_t1967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Object_t *)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m11397_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" Object_t * Collection_1_ConvertItem_m11398_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)));
	}

IL_0012:
	{
		ArgumentException_t275 * L_3 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_3, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m11399_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t199 * L_2 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m11400_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t1248_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m11401_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t1207_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1207_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_DefauMethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m11402_gshared (EqualityComparer_1_t1968 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m11403_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2934_0_0_0_var = il2cpp_codegen_type_from_index(3046);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericEqualityComparer_1_t2934_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t1968_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t1968 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1970 * L_8 = (DefaultComparer_t1970 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1970 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t1968_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m11404_gshared (EqualityComparer_1_t1968 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t1968 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(T) */, (EqualityComparer_1_t1968 *)__this, (Object_t *)((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m11405_gshared (EqualityComparer_1_t1968 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t1968 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t1968 *)__this, (Object_t *)((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Object>::get_Default()
extern "C" EqualityComparer_1_t1968 * EqualityComparer_1_get_Default_m11406_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t1968 * L_0 = ((EqualityComparer_1_t1968_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m11412_gshared (DefaultComparer_t1970 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1968 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1968 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1968 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t DefaultComparer_GetHashCode_m11413_gshared (DefaultComparer_t1970 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)(*(&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)(*(&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11414_gshared (DefaultComparer_t1970 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_1 = ___y;
		return ((((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Object_t * L_2 = ___y;
		NullCheck((Object_t *)(*(&___x)));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)(*(&___x)), (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m11415_gshared (Predicate_1_t1971 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11416_gshared (Predicate_1_t1971 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m11416((Predicate_1_t1971 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Predicate_1_BeginInvoke_m11417_gshared (Predicate_1_t1971 * __this, Object_t * ___obj, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11418_gshared (Predicate_1_t1971 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultComparMethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m11419_gshared (Comparer_1_t1972 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Object>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2935_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m11420_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2935_0_0_0_var = il2cpp_codegen_type_from_index(3047);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericComparer_1_t2935_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t1972_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t1972 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1973 * L_8 = (DefaultComparer_t1973 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1973 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t1972_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m11421_gshared (Comparer_1_t1972 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t1972 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t1972 *)__this, (Object_t *)((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t275 * L_8 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10350(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Object>::get_Default()
extern "C" Comparer_1_t1972 * Comparer_1_get_Default_m11422_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t1972 * L_0 = ((Comparer_1_t1972_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m11423_gshared (DefaultComparer_t1973 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t1972 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t1972 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t1972 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::Compare(T,T)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1924_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2980;
extern "C" int32_t DefaultComparer_Compare_m11424_gshared (DefaultComparer_t1973 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2980 = il2cpp_codegen_string_literal_from_index(2980);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t*)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		Object_t * L_4 = ___x;
		Object_t * L_5 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable`1<System.Object>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (Object_t *)L_5);
		return L_6;
	}

IL_004d:
	{
		Object_t * L_7 = ___x;
		if (!((Object_t *)IsInst(L_7, IComparable_t1924_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Object_t * L_8 = ___x;
		Object_t * L_9 = ___y;
		NullCheck((Object_t *)((Object_t *)Castclass(L_8, IComparable_t1924_il2cpp_TypeInfo_var)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1924_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_8, IComparable_t1924_il2cpp_TypeInfo_var)), (Object_t *)L_9);
		return L_10;
	}

IL_0074:
	{
		ArgumentException_t275 * L_11 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_11, (String_t*)_stringLiteral2980, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}
}
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1.h"
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t151_m20529_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t151_m20529(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt32_t151_m20529_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Int32>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m11425_gshared (InternalEnumerator_1_t1974 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11426_gshared (InternalEnumerator_1_t1974 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t1974 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1974 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11427_gshared (InternalEnumerator_1_t1974 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int32>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m11428_gshared (InternalEnumerator_1_t1974 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int32>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" int32_t InternalEnumerator_1_get_Current_m11429_gshared (InternalEnumerator_1_t1974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2.h"
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2MethodDeclarations.h"
// System.Double
#include "mscorlib_System_Double.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C" double Array_InternalArray__get_Item_TisDouble_t274_m20540_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDouble_t274_m20540(__this, p0, method) (( double (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDouble_t274_m20540_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m11430_gshared (InternalEnumerator_1_t1975 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11431_gshared (InternalEnumerator_1_t1975 * __this, const MethodInfo* method)
{
	{
		double L_0 = (( double (*) (InternalEnumerator_1_t1975 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1975 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		double L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11432_gshared (InternalEnumerator_1_t1975 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m11433_gshared (InternalEnumerator_1_t1975 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" double InternalEnumerator_1_get_Current_m11434_gshared (InternalEnumerator_1_t1975 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		double L_8 = (( double (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3MethodDeclarations.h"
// System.Char
#include "mscorlib_System_Char.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Char>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Char>(System.Int32)
extern "C" uint16_t Array_InternalArray__get_Item_TisChar_t266_m20551_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisChar_t266_m20551(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisChar_t266_m20551_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Char>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m11435_gshared (InternalEnumerator_1_t1976 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Char>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11436_gshared (InternalEnumerator_1_t1976 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (( uint16_t (*) (InternalEnumerator_1_t1976 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1976 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Char>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11437_gshared (InternalEnumerator_1_t1976 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Char>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m11438_gshared (InternalEnumerator_1_t1976 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Char>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" uint16_t InternalEnumerator_1_get_Current_m11439_gshared (InternalEnumerator_1_t1976 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint16_t L_8 = (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m11440_gshared (Comparison_1_t1977 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11441_gshared (Comparison_1_t1977 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m11441((Comparison_1_t1977 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Comparison_1_BeginInvoke_m11442_gshared (Comparison_1_t1977 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___x;
	__d_args[1] = ___y;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11443_gshared (Comparison_1_t1977 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Predicate`1<RMX.Bugger/Log>
#include "mscorlib_System_Predicate_1_gen_7.h"
// System.Collections.Generic.Comparer`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
// System.Comparison`1<RMX.Bugger/Log>
#include "mscorlib_System_Comparison_1_gen_5.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.Predicate`1<RMX.Bugger/Log>
#include "mscorlib_System_Predicate_1_gen_7MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"
struct LogU5BU5D_t1981;
// Declaration System.Int32 System.Array::IndexOf<RMX.Bugger/Log>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<RMX.Bugger/Log>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisLog_t5_m20580_gshared (Object_t * __this /* static, unused */, LogU5BU5D_t1981* p0, Log_t5  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisLog_t5_m20580(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, LogU5BU5D_t1981*, Log_t5 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisLog_t5_m20580_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct LogU5BU5D_t1981;
struct IComparer_1_t2890;
// Declaration System.Void System.Array::Sort<RMX.Bugger/Log>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<RMX.Bugger/Log>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisLog_t5_m20581_gshared (Object_t * __this /* static, unused */, LogU5BU5D_t1981* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisLog_t5_m20581(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, LogU5BU5D_t1981*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisLog_t5_m20581_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct LogU5BU5D_t1981;
struct Comparison_1_t1991;
// Declaration System.Void System.Array::Sort<RMX.Bugger/Log>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<RMX.Bugger/Log>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisLog_t5_m20587_gshared (Object_t * __this /* static, unused */, LogU5BU5D_t1981* p0, int32_t p1, Comparison_1_t1991 * p2, const MethodInfo* method);
#define Array_Sort_TisLog_t5_m20587(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, LogU5BU5D_t1981*, int32_t, Comparison_1_t1991 *, const MethodInfo*))Array_Sort_TisLog_t5_m20587_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct LogU5BU5D_t1981;
// Declaration System.Void System.Array::Resize<RMX.Bugger/Log>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<RMX.Bugger/Log>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisLog_t5_m20578_gshared (Object_t * __this /* static, unused */, LogU5BU5D_t1981** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisLog_t5_m20578(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, LogU5BU5D_t1981**, int32_t, const MethodInfo*))Array_Resize_TisLog_t5_m20578_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m449_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		LogU5BU5D_t1981* L_0 = ((List_1_t15_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11485_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t15 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		LogU5BU5D_t1981* L_3 = ((List_1_t15_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t15 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((LogU5BU5D_t1981*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t15 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void List_1__ctor_m11486_gshared (List_1_t15 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, (String_t*)_stringLiteral1504, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((LogU5BU5D_t1981*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.ctor(T[],System.Int32)
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
extern "C" void List_1__ctor_m11487_gshared (List_1_t15 * __this, LogU5BU5D_t1981* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		LogU5BU5D_t1981* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::.cctor()
extern "C" void List_1__cctor_m11488_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t15_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((LogU5BU5D_t1981*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11489_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t15 *)__this);
		Enumerator_t159  L_0 = (( Enumerator_t159  (*) (List_1_t15 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t15 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t159  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11490_gshared (List_1_t15 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11491_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t15 *)__this);
		Enumerator_t159  L_0 = (( Enumerator_t159  (*) (List_1_t15 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t15 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t159  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" int32_t List_1_System_Collections_IList_Add_m11492_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t15 *)__this);
			VirtActionInvoker1< Log_t5  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(T) */, (List_1_t15 *)__this, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m11493_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t15 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, Log_t5  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Contains(T) */, (List_1_t15 *)__this, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11494_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t15 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Log_t5  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::IndexOf(T) */, (List_1_t15 *)__this, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" void List_1_System_Collections_IList_Insert_m11495_gshared (List_1_t15 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t15 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t15 *)__this);
			VirtActionInvoker2< int32_t, Log_t5  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Insert(System.Int32,T) */, (List_1_t15 *)__this, (int32_t)L_1, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t275 * L_3 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_3, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m11496_gshared (List_1_t15 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
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
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t15 *)__this);
			VirtFuncInvoker1< bool, Log_t5  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Remove(T) */, (List_1_t15 *)__this, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11497_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11498_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11499_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11500_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11501_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11502_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t15 *)__this);
		Log_t5  L_1 = (Log_t5 )VirtFuncInvoker1< Log_t5 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Item(System.Int32) */, (List_1_t15 *)__this, (int32_t)L_0);
		Log_t5  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" void List_1_System_Collections_IList_set_Item_m11503_gshared (List_1_t15 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
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
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t15 *)__this);
			VirtActionInvoker2< int32_t, Log_t5  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::set_Item(System.Int32,T) */, (List_1_t15 *)__this, (int32_t)L_0, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, (String_t*)_stringLiteral575, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(T)
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
extern "C" void List_1_Add_m11504_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		LogU5BU5D_t1981* L_1 = (LogU5BU5D_t1981*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t15 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		LogU5BU5D_t1981* L_2 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Log_t5  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Log_t5 *)(Log_t5 *)SZArrayLdElema(L_2, L_5, sizeof(Log_t5 ))) = (Log_t5 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m11505_gshared (List_1_t15 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		LogU5BU5D_t1981* L_3 = (LogU5BU5D_t1981*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t15 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t15 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t15 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m5119(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m5119(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t15 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11506_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t15 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		LogU5BU5D_t1981* L_5 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< LogU5BU5D_t1981*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (LogU5BU5D_t1981*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m11507_gshared (List_1_t15 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Log_t5  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<RMX.Bugger/Log>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Log_t5  L_3 = (Log_t5 )InterfaceFuncInvoker0< Log_t5  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<RMX.Bugger/Log>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (Log_t5 )L_3;
			Log_t5  L_4 = V_0;
			NullCheck((List_1_t15 *)__this);
			VirtActionInvoker1< Log_t5  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(T) */, (List_1_t15 *)__this, (Log_t5 )L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11508_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t15 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t15 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t15 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1983 * List_1_AsReadOnly_m11509_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1983 * L_0 = (ReadOnlyCollection_1_t1983 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t1983 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Clear()
extern "C" void List_1_Clear_m11510_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		LogU5BU5D_t1981* L_1 = (LogU5BU5D_t1981*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Contains(T)
extern "C" bool List_1_Contains_m11511_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		Log_t5  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, LogU5BU5D_t1981*, Log_t5 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (LogU5BU5D_t1981*)L_0, (Log_t5 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11512_gshared (List_1_t15 * __this, LogU5BU5D_t1981* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		LogU5BU5D_t1981* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Exists(System.Predicate`1<T>)
// System.Predicate`1<RMX.Bugger/Log>
#include "mscorlib_System_Predicate_1_gen_7.h"
extern "C" bool List_1_Exists_m11513_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	{
		Predicate_1_t1988 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1988 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t1988 * L_2 = ___match;
		NullCheck((List_1_t15 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t15 *, int32_t, int32_t, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t15 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t1988 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// T System.Collections.Generic.List`1<RMX.Bugger/Log>::Find(System.Predicate`1<T>)
extern TypeInfo* Log_t5_il2cpp_TypeInfo_var;
extern "C" Log_t5  List_1_Find_m11514_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Log_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Log_t5  V_1 = {0};
	Log_t5  G_B3_0 = {0};
	{
		Predicate_1_t1988 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1988 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t1988 * L_2 = ___match;
		NullCheck((List_1_t15 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t15 *, int32_t, int32_t, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t15 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t1988 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		LogU5BU5D_t1981* L_5 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_5, L_7, sizeof(Log_t5 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Log_t5_il2cpp_TypeInfo_var, (&V_1));
		Log_t5  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2090;
extern "C" void List_1_CheckMatch_m11515_gshared (Object_t * __this /* static, unused */, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral2090 = il2cpp_codegen_string_literal_from_index(2090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t1988 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral2090, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t15 * List_1_FindAll_m11516_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	{
		Predicate_1_t1988 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1988 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65536))))
		{
			goto IL_001e;
		}
	}
	{
		Predicate_1_t1988 * L_2 = ___match;
		NullCheck((List_1_t15 *)__this);
		List_1_t15 * L_3 = (( List_1_t15 * (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((List_1_t15 *)__this, (Predicate_1_t1988 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		return L_3;
	}

IL_001e:
	{
		Predicate_1_t1988 * L_4 = ___match;
		NullCheck((List_1_t15 *)__this);
		List_1_t15 * L_5 = (( List_1_t15 * (*) (List_1_t15 *, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)((List_1_t15 *)__this, (Predicate_1_t1988 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_5;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t15 * List_1_FindAllStackBits_m11517_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	uint32_t* V_0 = {0};
	uint32_t* V_1 = {0};
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	LogU5BU5D_t1981* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if ((uint64_t)(uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1)) * (uint64_t)(uint32_t)4 > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		int8_t* L_1 = (int8_t*) alloca(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		memset(L_1,0,((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		V_0 = (uint32_t*)(L_1);
		uint32_t* L_2 = V_0;
		V_1 = (uint32_t*)L_2;
		V_2 = (int32_t)0;
		V_3 = (uint32_t)((int32_t)-2147483648);
		V_4 = (int32_t)0;
		goto IL_005f;
	}

IL_0022:
	{
		Predicate_1_t1988 * L_3 = ___match;
		LogU5BU5D_t1981* L_4 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t1988 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t1988 *, Log_t5 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1988 *)L_3, (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_4, L_6, sizeof(Log_t5 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t* L_8 = V_1;
		uint32_t* L_9 = V_1;
		uint32_t L_10 = V_3;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_9))|(int32_t)L_10));
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0044:
	{
		uint32_t L_12 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_12>>1));
		uint32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		uint32_t* L_14 = V_1;
		V_1 = (uint32_t*)((uint32_t*)((intptr_t)L_14+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_0059:
	{
		int32_t L_15 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_18 = V_2;
		V_5 = (LogU5BU5D_t1981*)((LogU5BU5D_t1981*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_18));
		V_3 = (uint32_t)((int32_t)-2147483648);
		uint32_t* L_19 = V_0;
		V_1 = (uint32_t*)L_19;
		V_6 = (int32_t)0;
		V_7 = (int32_t)0;
		goto IL_00c7;
	}

IL_0087:
	{
		uint32_t* L_20 = V_1;
		uint32_t L_21 = V_3;
		uint32_t L_22 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)(*((uint32_t*)L_20))&(int32_t)L_21))) == ((uint32_t)L_22))))
		{
			goto IL_00ac;
		}
	}
	{
		LogU5BU5D_t1981* L_23 = V_5;
		int32_t L_24 = V_6;
		int32_t L_25 = (int32_t)L_24;
		V_6 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LogU5BU5D_t1981* L_26 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_27 = V_7;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		*((Log_t5 *)(Log_t5 *)SZArrayLdElema(L_23, L_25, sizeof(Log_t5 ))) = (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_26, L_28, sizeof(Log_t5 )));
	}

IL_00ac:
	{
		uint32_t L_29 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_29>>1));
		uint32_t L_30 = V_3;
		if (L_30)
		{
			goto IL_00c1;
		}
	}
	{
		uint32_t* L_31 = V_1;
		V_1 = (uint32_t*)((uint32_t*)((intptr_t)L_31+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_00c1:
	{
		int32_t L_32 = V_7;
		V_7 = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c7:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0087;
		}
	}

IL_00dc:
	{
		LogU5BU5D_t1981* L_37 = V_5;
		int32_t L_38 = V_2;
		List_1_t15 * L_39 = (List_1_t15 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t15 *, LogU5BU5D_t1981*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_39, (LogU5BU5D_t1981*)L_37, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_39;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t15 * List_1_FindAllList_m11518_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	List_1_t15 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t15 * L_0 = (List_1_t15 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t15 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		V_0 = (List_1_t15 *)L_0;
		V_1 = (int32_t)0;
		goto IL_003a;
	}

IL_000d:
	{
		Predicate_1_t1988 * L_1 = ___match;
		LogU5BU5D_t1981* L_2 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t1988 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t1988 *, Log_t5 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1988 *)L_1, (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_2, L_4, sizeof(Log_t5 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		List_1_t15 * L_6 = V_0;
		LogU5BU5D_t1981* L_7 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((List_1_t15 *)L_6);
		VirtActionInvoker1< Log_t5  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(T) */, (List_1_t15 *)L_6, (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_7, L_9, sizeof(Log_t5 ))));
	}

IL_0036:
	{
		int32_t L_10 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t15 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11519_gshared (List_1_t15 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t1988 * L_3 = ___match;
		LogU5BU5D_t1981* L_4 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t1988 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t1988 *, Log_t5 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1988 *)L_3, (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_4, L_6, sizeof(Log_t5 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RMX.Bugger/Log>::GetEnumerator()
extern "C" Enumerator_t159  List_1_GetEnumerator_m452_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		Enumerator_t159  L_0 = {0};
		(( void (*) (Enumerator_t159 *, List_1_t15 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(&L_0, (List_1_t15 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11520_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		Log_t5  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, LogU5BU5D_t1981*, Log_t5 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (LogU5BU5D_t1981*)L_0, (Log_t5 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11521_gshared (List_1_t15 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		LogU5BU5D_t1981* L_5 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_6 = ___start;
		LogU5BU5D_t1981* L_7 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		LogU5BU5D_t1981* L_15 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_CheckIndex_m11522_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11523_gshared (List_1_t15 * __this, int32_t ___index, Log_t5  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t15 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		LogU5BU5D_t1981* L_2 = (LogU5BU5D_t1981*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t15 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t15 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		LogU5BU5D_t1981* L_4 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_5 = ___index;
		Log_t5  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Log_t5 *)(Log_t5 *)SZArrayLdElema(L_4, L_5, sizeof(Log_t5 ))) = (Log_t5 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2976;
extern "C" void List_1_CheckCollection_m11524_gshared (List_1_t15 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral2976 = il2cpp_codegen_string_literal_from_index(2976);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral2976, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<RMX.Bugger/Log>::Remove(T)
extern "C" bool List_1_Remove_m11525_gshared (List_1_t15 * __this, Log_t5  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Log_t5  L_0 = ___item;
		NullCheck((List_1_t15 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Log_t5  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::IndexOf(T) */, (List_1_t15 *)__this, (Log_t5 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t15 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::RemoveAt(System.Int32) */, (List_1_t15 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11526_gshared (List_1_t15 * __this, Predicate_1_t1988 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1988 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1988 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t1988 * L_1 = ___match;
		LogU5BU5D_t1981* L_2 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t1988 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t1988 *, Log_t5 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1988 *)L_1, (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_2, L_4, sizeof(Log_t5 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t1988 * L_13 = ___match;
		LogU5BU5D_t1981* L_14 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t1988 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t1988 *, Log_t5 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t1988 *)L_13, (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_14, L_16, sizeof(Log_t5 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		LogU5BU5D_t1981* L_18 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		LogU5BU5D_t1981* L_21 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Log_t5 *)(Log_t5 *)SZArrayLdElema(L_18, L_20, sizeof(Log_t5 ))) = (Log_t5 )(*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_21, L_23, sizeof(Log_t5 )));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		LogU5BU5D_t1981* L_29 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_RemoveAt_m11527_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t15 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		LogU5BU5D_t1981* L_5 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Reverse()
extern "C" void List_1_Reverse_m11528_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m5140(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Sort()
extern "C" void List_1_Sort_m11529_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		Comparer_1_t1989 * L_2 = (( Comparer_1_t1989 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		(( void (*) (Object_t * /* static, unused */, LogU5BU5D_t1981*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (LogU5BU5D_t1981*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Sort(System.Comparison`1<T>)
// System.Comparison`1<RMX.Bugger/Log>
#include "mscorlib_System_Comparison_1_gen_5.h"
extern "C" void List_1_Sort_m11530_gshared (List_1_t15 * __this, Comparison_1_t1991 * ___comparison, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t1991 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, LogU5BU5D_t1981*, int32_t, Comparison_1_t1991 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (LogU5BU5D_t1981*)L_0, (int32_t)L_1, (Comparison_1_t1991 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<RMX.Bugger/Log>::ToArray()
extern "C" LogU5BU5D_t1981* List_1_ToArray_m11531_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	LogU5BU5D_t1981* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (LogU5BU5D_t1981*)((LogU5BU5D_t1981*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		LogU5BU5D_t1981* L_1 = (LogU5BU5D_t1981*)(__this->____items_1);
		LogU5BU5D_t1981* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		LogU5BU5D_t1981* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::TrimExcess()
extern "C" void List_1_TrimExcess_m11532_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t15 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11533_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		LogU5BU5D_t1981* L_0 = (LogU5BU5D_t1981*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m11534_gshared (List_1_t15 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_2 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6161(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		LogU5BU5D_t1981** L_3 = (LogU5BU5D_t1981**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, LogU5BU5D_t1981**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (LogU5BU5D_t1981**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Count()
extern "C" int32_t List_1_get_Count_m11535_gshared (List_1_t15 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<RMX.Bugger/Log>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" Log_t5  List_1_get_Item_m11536_gshared (List_1_t15 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_2 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_2, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		LogU5BU5D_t1981* L_3 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_3, L_5, sizeof(Log_t5 )));
	}
}
// System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_set_Item_m11537_gshared (List_1_t15 * __this, int32_t ___index, Log_t5  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t15 *)__this);
		(( void (*) (List_1_t15 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t15 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		LogU5BU5D_t1981* L_4 = (LogU5BU5D_t1981*)(__this->____items_1);
		int32_t L_5 = ___index;
		Log_t5  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Log_t5 *)(Log_t5 *)SZArrayLdElema(L_4, L_5, sizeof(Log_t5 ))) = (Log_t5 )L_6;
		return;
	}
}
// System.Array/InternalEnumerator`1<RMX.Bugger/Log>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4.h"
// System.Array/InternalEnumerator`1<RMX.Bugger/Log>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<RMX.Bugger/Log>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<RMX.Bugger/Log>(System.Int32)
extern "C" Log_t5  Array_InternalArray__get_Item_TisLog_t5_m20567_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisLog_t5_m20567(__this, p0, method) (( Log_t5  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisLog_t5_m20567_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<RMX.Bugger/Log>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m11538_gshared (InternalEnumerator_1_t1982 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<RMX.Bugger/Log>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11539_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method)
{
	{
		Log_t5  L_0 = (( Log_t5  (*) (InternalEnumerator_1_t1982 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1982 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Log_t5  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<RMX.Bugger/Log>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11540_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<RMX.Bugger/Log>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m11541_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<RMX.Bugger/Log>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" Log_t5  InternalEnumerator_1_get_Current_m11542_gshared (InternalEnumerator_1_t1982 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Log_t5  L_8 = (( Log_t5  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
extern "C" void Enumerator__ctor_m11543_gshared (Enumerator_t159 * __this, List_1_t15 * ___l, const MethodInfo* method)
{
	{
		List_1_t15 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t15 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11544_gshared (Enumerator_t159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t159 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t159 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6112(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		Log_t5  L_2 = (Log_t5 )(__this->___current_3);
		Log_t5  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>::Dispose()
extern "C" void Enumerator_Dispose_m11545_gshared (Enumerator_t159 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t15 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2979;
extern "C" void Enumerator_VerifyState_m11546_gshared (Enumerator_t159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2979 = il2cpp_codegen_string_literal_from_index(2979);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t15 * L_0 = (List_1_t15 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t159  L_1 = (*(Enumerator_t159 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m495((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t905 * L_5 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t15 * L_7 = (List_1_t15 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t1075 * L_9 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_9, (String_t*)_stringLiteral2979, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>::MoveNext()
extern "C" bool Enumerator_MoveNext_m455_gshared (Enumerator_t159 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t159 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t159 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t15 * L_2 = (List_1_t15 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t15 * L_4 = (List_1_t15 *)(__this->___l_0);
		NullCheck(L_4);
		LogU5BU5D_t1981* L_5 = (LogU5BU5D_t1981*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Log_t5 *)(Log_t5 *)SZArrayLdElema(L_5, L_9, sizeof(Log_t5 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>::get_Current()
extern "C" Log_t5  Enumerator_get_Current_m453_gshared (Enumerator_t159 * __this, const MethodInfo* method)
{
	{
		Log_t5  L_0 = (Log_t5 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1515;
extern "C" void ReadOnlyCollection_1__ctor_m11547_gshared (ReadOnlyCollection_1_t1983 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1515 = il2cpp_codegen_string_literal_from_index(1515);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1515, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.Add(T)
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11548_gshared (ReadOnlyCollection_1_t1983 * __this, Log_t5  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11549_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11550_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, Log_t5  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11551_gshared (ReadOnlyCollection_1_t1983 * __this, Log_t5  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11552_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Log_t5  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11553_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t1983 *)__this);
		Log_t5  L_1 = (Log_t5 )VirtFuncInvoker1< Log_t5 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1983 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11554_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, Log_t5  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11555_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11556_gshared (ReadOnlyCollection_1_t1983 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t812_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11557_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t812_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m11558_gshared (ReadOnlyCollection_1_t1983 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m11559_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m11560_gshared (ReadOnlyCollection_1_t1983 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Log_t5  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11561_gshared (ReadOnlyCollection_1_t1983 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Log_t5  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<RMX.Bugger/Log>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m11562_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m11563_gshared (ReadOnlyCollection_1_t1983 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11564_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11565_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11566_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11567_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11568_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m11569_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Log_t5  L_2 = (Log_t5 )InterfaceFuncInvoker1< Log_t5 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<RMX.Bugger/Log>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		Log_t5  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m11570_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m11571_gshared (ReadOnlyCollection_1_t1983 * __this, Log_t5  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Log_t5  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Log_t5  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Log_t5 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32)
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m11572_gshared (ReadOnlyCollection_1_t1983 * __this, LogU5BU5D_t1981* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		LogU5BU5D_t1981* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< LogU5BU5D_t1981*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (LogU5BU5D_t1981*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m11573_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<RMX.Bugger/Log>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m11574_gshared (ReadOnlyCollection_1_t1983 * __this, Log_t5  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Log_t5  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Log_t5  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<RMX.Bugger/Log>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Log_t5 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m11575_gshared (ReadOnlyCollection_1_t1983 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<RMX.Bugger/Log>::get_Item(System.Int32)
extern "C" Log_t5  ReadOnlyCollection_1_get_Item_m11576_gshared (ReadOnlyCollection_1_t1983 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Log_t5  L_2 = (Log_t5 )InterfaceFuncInvoker1< Log_t5 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<RMX.Bugger/Log>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0.h"
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m11577_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t15 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t15 * L_0 = (List_1_t15 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t15 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t15 *)L_0;
		List_1_t15 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t15 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11578_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11579_gshared (Collection_1_t1985 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11580_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<RMX.Bugger/Log>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11581_gshared (Collection_1_t1985 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Log_t5  L_4 = (( Log_t5  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker2< int32_t, Log_t5  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::InsertItem(System.Int32,T) */, (Collection_1_t1985 *)__this, (int32_t)L_2, (Log_t5 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11582_gshared (Collection_1_t1985 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Log_t5  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11583_gshared (Collection_1_t1985 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Log_t5  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<RMX.Bugger/Log>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11584_gshared (Collection_1_t1985 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Log_t5  L_2 = (( Log_t5  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker2< int32_t, Log_t5  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::InsertItem(System.Int32,T) */, (Collection_1_t1985 *)__this, (int32_t)L_0, (Log_t5 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11585_gshared (Collection_1_t1985 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		Log_t5  L_2 = (( Log_t5  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1985 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Log_t5  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::IndexOf(T) */, (Collection_1_t1985 *)__this, (Log_t5 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::RemoveItem(System.Int32) */, (Collection_1_t1985 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11586_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11587_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11588_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11589_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11590_gshared (Collection_1_t1985 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Log_t5  L_2 = (Log_t5 )InterfaceFuncInvoker1< Log_t5 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<RMX.Bugger/Log>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		Log_t5  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11591_gshared (Collection_1_t1985 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Log_t5  L_2 = (( Log_t5  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker2< int32_t, Log_t5  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::SetItem(System.Int32,T) */, (Collection_1_t1985 *)__this, (int32_t)L_0, (Log_t5 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::Add(T)
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
extern "C" void Collection_1_Add_m11592_gshared (Collection_1_t1985 * __this, Log_t5  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Log_t5  L_3 = ___item;
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker2< int32_t, Log_t5  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::InsertItem(System.Int32,T) */, (Collection_1_t1985 *)__this, (int32_t)L_2, (Log_t5 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::Clear()
extern "C" void Collection_1_Clear_m11593_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::ClearItems() */, (Collection_1_t1985 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::ClearItems()
extern "C" void Collection_1_ClearItems_m11594_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::Contains(T)
extern "C" bool Collection_1_Contains_m11595_gshared (Collection_1_t1985 * __this, Log_t5  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Log_t5  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Log_t5  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Log_t5 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32)
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m11596_gshared (Collection_1_t1985 * __this, LogU5BU5D_t1981* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		LogU5BU5D_t1981* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< LogU5BU5D_t1981*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (LogU5BU5D_t1981*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11597_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<RMX.Bugger/Log>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11598_gshared (Collection_1_t1985 * __this, Log_t5  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Log_t5  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Log_t5  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<RMX.Bugger/Log>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (Log_t5 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11599_gshared (Collection_1_t1985 * __this, int32_t ___index, Log_t5  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Log_t5  L_1 = ___item;
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker2< int32_t, Log_t5  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::InsertItem(System.Int32,T) */, (Collection_1_t1985 *)__this, (int32_t)L_0, (Log_t5 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11600_gshared (Collection_1_t1985 * __this, int32_t ___index, Log_t5  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Log_t5  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Log_t5  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<RMX.Bugger/Log>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Log_t5 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::Remove(T)
extern "C" bool Collection_1_Remove_m11601_gshared (Collection_1_t1985 * __this, Log_t5  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Log_t5  L_0 = ___item;
		NullCheck((Collection_1_t1985 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Log_t5  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::IndexOf(T) */, (Collection_1_t1985 *)__this, (Log_t5 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::RemoveItem(System.Int32) */, (Collection_1_t1985 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11602_gshared (Collection_1_t1985 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::RemoveItem(System.Int32) */, (Collection_1_t1985 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11603_gshared (Collection_1_t1985 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<RMX.Bugger/Log>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11604_gshared (Collection_1_t1985 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::get_Item(System.Int32)
extern "C" Log_t5  Collection_1_get_Item_m11605_gshared (Collection_1_t1985 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Log_t5  L_2 = (Log_t5 )InterfaceFuncInvoker1< Log_t5 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<RMX.Bugger/Log>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11606_gshared (Collection_1_t1985 * __this, int32_t ___index, Log_t5  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Log_t5  L_1 = ___value;
		NullCheck((Collection_1_t1985 *)__this);
		VirtActionInvoker2< int32_t, Log_t5  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::SetItem(System.Int32,T) */, (Collection_1_t1985 *)__this, (int32_t)L_0, (Log_t5 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11607_gshared (Collection_1_t1985 * __this, int32_t ___index, Log_t5  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Log_t5  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Log_t5  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<RMX.Bugger/Log>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Log_t5 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m11608_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" Log_t5  Collection_1_ConvertItem_m11609_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(Log_t5 *)((Log_t5 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t275 * L_3 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_3, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m11610_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<RMX.Bugger/Log>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t199 * L_2 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m11611_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t1248_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<RMX.Bugger/Log>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m11612_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t1207_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1207_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m11613_gshared (EqualityComparer_1_t1986 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m11614_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2934_0_0_0_var = il2cpp_codegen_type_from_index(3046);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericEqualityComparer_1_t2934_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t1986_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t1986 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1987 * L_8 = (DefaultComparer_t1987 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1987 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t1986_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m11615_gshared (EqualityComparer_1_t1986 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t1986 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Log_t5  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>::GetHashCode(T) */, (EqualityComparer_1_t1986 *)__this, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m11616_gshared (EqualityComparer_1_t1986 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t1986 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Log_t5 , Log_t5  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>::Equals(T,T) */, (EqualityComparer_1_t1986 *)__this, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<RMX.Bugger/Log>::get_Default()
extern "C" EqualityComparer_1_t1986 * EqualityComparer_1_get_Default_m11617_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t1986 * L_0 = ((EqualityComparer_1_t1986_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.Bugger/Log>::.ctor()
extern "C" void DefaultComparer__ctor_m11618_gshared (DefaultComparer_t1987 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1986 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1986 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1986 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.Bugger/Log>::GetHashCode(T)
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
extern "C" int32_t DefaultComparer_GetHashCode_m11619_gshared (DefaultComparer_t1987 * __this, Log_t5  ___obj, const MethodInfo* method)
{
	{
		Log_t5  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.Bugger/Log>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11620_gshared (DefaultComparer_t1987 * __this, Log_t5  ___x, Log_t5  ___y, const MethodInfo* method)
{
	{
		Log_t5  L_0 = ___x;
		goto IL_0015;
	}
	{
		Log_t5  L_1 = ___y;
		Log_t5  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Log_t5  L_4 = ___y;
		Log_t5  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Void System.Predicate`1<RMX.Bugger/Log>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m11621_gshared (Predicate_1_t1988 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<RMX.Bugger/Log>::Invoke(T)
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
extern "C" bool Predicate_1_Invoke_m11622_gshared (Predicate_1_t1988 * __this, Log_t5  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m11622((Predicate_1_t1988 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Log_t5  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Log_t5  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<RMX.Bugger/Log>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Log_t5_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m11623_gshared (Predicate_1_t1988 * __this, Log_t5  ___obj, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Log_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Log_t5_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<RMX.Bugger/Log>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11624_gshared (Predicate_1_t1988 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<RMX.Bugger/Log>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m11625_gshared (Comparer_1_t1989 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<RMX.Bugger/Log>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2935_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m11626_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2935_0_0_0_var = il2cpp_codegen_type_from_index(3047);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericComparer_1_t2935_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t1989_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t1989 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1990 * L_8 = (DefaultComparer_t1990 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1990 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t1989_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<RMX.Bugger/Log>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m11627_gshared (Comparer_1_t1989 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t1989 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Log_t5 , Log_t5  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<RMX.Bugger/Log>::Compare(T,T) */, (Comparer_1_t1989 *)__this, (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Log_t5 )((*(Log_t5 *)((Log_t5 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t275 * L_8 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10350(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<RMX.Bugger/Log>::get_Default()
extern "C" Comparer_1_t1989 * Comparer_1_get_Default_m11628_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t1989 * L_0 = ((Comparer_1_t1989_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<RMX.Bugger/Log>::.ctor()
extern "C" void DefaultComparer__ctor_m11629_gshared (DefaultComparer_t1990 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t1989 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t1989 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t1989 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<RMX.Bugger/Log>::Compare(T,T)
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1924_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2980;
extern "C" int32_t DefaultComparer_Compare_m11630_gshared (DefaultComparer_t1990 * __this, Log_t5  ___x, Log_t5  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2980 = il2cpp_codegen_string_literal_from_index(2980);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Log_t5  L_0 = ___x;
		goto IL_001e;
	}
	{
		Log_t5  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Log_t5  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		Log_t5  L_3 = ___x;
		Log_t5  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		Log_t5  L_6 = ___x;
		Log_t5  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		Log_t5  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Log_t5  >::Invoke(0 /* System.Int32 System.IComparable`1<RMX.Bugger/Log>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (Log_t5 )L_9);
		return L_10;
	}

IL_004d:
	{
		Log_t5  L_11 = ___x;
		Log_t5  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1924_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Log_t5  L_14 = ___x;
		Log_t5  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		Log_t5  L_17 = ___y;
		Log_t5  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1924_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1924_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1924_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t275 * L_21 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_21, (String_t*)_stringLiteral2980, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Comparison`1<RMX.Bugger/Log>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"
// System.Void System.Comparison`1<RMX.Bugger/Log>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m11631_gshared (Comparison_1_t1991 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<RMX.Bugger/Log>::Invoke(T,T)
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
extern "C" int32_t Comparison_1_Invoke_m11632_gshared (Comparison_1_t1991 * __this, Log_t5  ___x, Log_t5  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m11632((Comparison_1_t1991 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Log_t5  ___x, Log_t5  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Log_t5  ___x, Log_t5  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<RMX.Bugger/Log>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Log_t5_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m11633_gshared (Comparison_1_t1991 * __this, Log_t5  ___x, Log_t5  ___y, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Log_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Log_t5_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Log_t5_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<RMX.Bugger/Log>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11634_gshared (Comparison_1_t1991 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_2.h"
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Func_2__ctor_m11849_gshared (Func_2_t170 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m11851_gshared (Func_2_t170 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m11851((Func_2_t170 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Func_2_BeginInvoke_m11853_gshared (Func_2_t170 * __this, Object_t * ___arg1, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m11855_gshared (Func_2_t170 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3.h"
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3MethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m11856_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m11857_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m11858_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m11859_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 *)__this);
		Object_t* L_0 = (( Object_t* (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m11860_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m10237(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * L_5 = V_0;
		Func_2_t170 * L_6 = (Func_2_t170 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m11861_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t170 * L_7 = (Func_2_t170 *)(__this->___selector_3);
			Object_t * L_8 = (Object_t *)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t170 *)L_7);
			Object_t * L_9 = (( Object_t * (*) (Func_2_t170 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Func_2_t170 *)L_7, (Object_t *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Object,System.Object>::Dispose()
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m11862_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t2005 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.Void System.Nullable`1<System.Char>::.ctor(T)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" void Nullable_1__ctor_m479_gshared (Nullable_1_t167 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		uint16_t L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m484_gshared (Nullable_1_t167 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.Char>::get_Value()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2981;
extern "C" uint16_t Nullable_1_get_Value_m11956_gshared (Nullable_1_t167 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2981 = il2cpp_codegen_string_literal_from_index(2981);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2981, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		uint16_t L_2 = (uint16_t)(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" bool Nullable_1_Equals_m11957_gshared (Nullable_1_t167 * __this, Object_t * ___other, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)(__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0010:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t167 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t167 *, Nullable_1_t167 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t167 *)__this, (Nullable_1_t167 )((*(Nullable_1_t167 *)((Nullable_1_t167 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.Char>::Equals(System.Nullable`1<T>)
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
extern "C" bool Nullable_1_Equals_m11958_gshared (Nullable_1_t167 * __this, Nullable_1_t167  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&___other)->___has_value_1);
		bool L_1 = (bool)(__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		bool L_2 = (bool)(__this->___has_value_1);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		uint16_t* L_3 = (uint16_t*)&((&___other)->___value_0);
		uint16_t L_4 = (uint16_t)(__this->___value_0);
		uint16_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((uint16_t*)L_3);
		bool L_7 = Char_Equals_m6453((uint16_t*)L_3, (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.Char>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m11959_gshared (Nullable_1_t167 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		uint16_t* L_1 = (uint16_t*)&(__this->___value_0);
		NullCheck((uint16_t*)L_1);
		int32_t L_2 = Char_GetHashCode_m6456((uint16_t*)L_1, NULL);
		return L_2;
	}
}
// T System.Nullable`1<System.Char>::GetValueOrDefault()
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" uint16_t Nullable_1_GetValueOrDefault_m483_gshared (Nullable_1_t167 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	uint16_t G_B3_0 = 0x0;
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		uint16_t L_1 = (uint16_t)(__this->___value_0);
		G_B3_0 = L_1;
		goto IL_001f;
	}

IL_0016:
	{
		Initobj (Char_t266_il2cpp_TypeInfo_var, (&V_0));
		uint16_t L_2 = V_0;
		G_B3_0 = L_2;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.String System.Nullable`1<System.Char>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m11960_gshared (Nullable_1_t167 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		uint16_t* L_1 = (uint16_t*)&(__this->___value_0);
		NullCheck((uint16_t*)L_1);
		String_t* L_2 = Char_ToString_m2522((uint16_t*)L_1, NULL);
		return L_2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumeraMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4MethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2836;
struct Transform_1_t2023;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20640_gshared (Dictionary_2_t2022 * __this, DictionaryEntryU5BU5D_t2836* p0, int32_t p1, Transform_1_t2023 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20640(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2022 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2023 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20640_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t2037;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2025_m20641_gshared (Dictionary_2_t2022 * __this, Array_t * p0, int32_t p1, Transform_1_t2037 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2025_m20641(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, Transform_1_t2037 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2025_m20641_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2688;
struct Transform_1_t2037;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2025_TisKeyValuePair_2_t2025_m20643_gshared (Dictionary_2_t2022 * __this, KeyValuePair_2U5BU5D_t2688* p0, int32_t p1, Transform_1_t2037 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2025_TisKeyValuePair_2_t2025_m20643(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2022 *, KeyValuePair_2U5BU5D_t2688*, int32_t, Transform_1_t2037 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2025_TisKeyValuePair_2_t2025_m20643_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m12075_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12077_gshared (Dictionary_2_t2022 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12079_gshared (Dictionary_2_t2022 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2022 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m12081_gshared (Dictionary_2_t2022 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void Dictionary_2__ctor_m12083_gshared (Dictionary_2_t2022 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2025  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2025  L_9 = (KeyValuePair_2_t2025 )InterfaceFuncInvoker0< KeyValuePair_2_t2025  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2025 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2025 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2025 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2022 *)__this);
			VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Add(TKey,TValue) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_10, (int32_t)L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m12085_gshared (Dictionary_2_t2022 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12087_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2022 *)__this);
		KeyCollection_t2029 * L_0 = (( KeyCollection_t2029 * (*) (Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12089_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2022 *)__this);
		ValueCollection_t2033 * L_0 = (( ValueCollection_t2033 * (*) (Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12091_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2022 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ContainsKey(TKey) */, (Dictionary_2_t2022 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2022 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2022 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2022 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2022 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Item(TKey) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12093_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2022 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2022 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2022 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2022 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2022 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2022 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2022 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::set_Item(TKey,TValue) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12095_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2022 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2022 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2022 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2022 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2022 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2022 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2022 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Add(TKey,TValue) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12097_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2022 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ContainsKey(TKey) */, (Dictionary_2_t2022 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12099_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2022 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Remove(TKey) */, (Dictionary_2_t2022 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12101_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12103_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12105_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12107_gshared (Dictionary_2_t2022 * __this, KeyValuePair_2_t2025  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2025 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2025 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2022 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Add(TKey,TValue) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12109_gshared (Dictionary_2_t2022 * __this, KeyValuePair_2_t2025  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2025  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2022 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2022 *, KeyValuePair_2_t2025 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2022 *)__this, (KeyValuePair_2_t2025 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12111_gshared (Dictionary_2_t2022 * __this, KeyValuePair_2U5BU5D_t2688* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2688* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, KeyValuePair_2U5BU5D_t2688*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2022 *)__this, (KeyValuePair_2U5BU5D_t2688*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12113_gshared (Dictionary_2_t2022 * __this, KeyValuePair_2_t2025  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2025  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2022 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2022 *, KeyValuePair_2_t2025 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2022 *)__this, (KeyValuePair_2_t2025 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2025 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2022 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Remove(TKey) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12115_gshared (Dictionary_2_t2022 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3048);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2688* V_0 = {0};
	DictionaryEntryU5BU5D_t2836* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B5_1 = {0};
	Dictionary_2_t2022 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B4_1 = {0};
	Dictionary_2_t2022 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2688*)((KeyValuePair_2U5BU5D_t2688*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2688* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2688* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, KeyValuePair_2U5BU5D_t2688*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2022 *)__this, (KeyValuePair_2U5BU5D_t2688*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2022 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2836*)((DictionaryEntryU5BU5D_t2836*)IsInst(L_6, DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2836* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2836* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2023 * L_10 = ((Dictionary_2_t2022_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2022 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2022 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2023 * L_12 = (Transform_1_t2023 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2023 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2022_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2022 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2023 * L_13 = ((Dictionary_2_t2022_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2022 *)G_B5_2);
		(( void (*) (Dictionary_2_t2022 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2023 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2022 *)G_B5_2, (DictionaryEntryU5BU5D_t2836*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2023 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2037 * L_17 = (Transform_1_t2037 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2037 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, Transform_1_t2037 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2022 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2037 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12117_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031  L_0 = {0};
		(( void (*) (Enumerator_t2031 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2031  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12119_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031  L_0 = {0};
		(( void (*) (Enumerator_t2031 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2031  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12121_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2038 * L_0 = (ShimEnumerator_t2038 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2038 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12123_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1368_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" int32_t Dictionary_2_get_Item_m12125_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		KeyNotFoundException_t1368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3049);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		EventStatusU5BU5D_t2019* L_19 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21, sizeof(int32_t)));
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1368 * L_26 = (KeyNotFoundException_t1368 *)il2cpp_codegen_object_new (KeyNotFoundException_t1368_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7532(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::set_Item(TKey,TValue)
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_set_Item_m12127_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t2017* L_38 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t2017* L_41 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t1037* L_43 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_46 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t2017* L_49 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1367 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t148* L_52 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t2017* L_56 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t2017* L_58 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1367 )))->___Next_1 = L_60;
		LinkU5BU5D_t2017* L_61 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t1037* L_63 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_66 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		EventStatusU5BU5D_t2019* L_69 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		int32_t L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_69, L_70, sizeof(int32_t))) = (int32_t)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void Dictionary_2_Init_m12129_gshared (Dictionary_2_t2022 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2022 * G_B4_0 = {0};
	Dictionary_2_t2022 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2022 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, (String_t*)_stringLiteral1504, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2022 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2022 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2022 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t1968 * L_5 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2022 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2022 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m12131_gshared (Dictionary_2_t2022 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((EventStatusU5BU5D_t2019*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral897;
extern Il2CppCodeGenString* _stringLiteral2982;
extern Il2CppCodeGenString* _stringLiteral2983;
extern "C" void Dictionary_2_CopyToCheck_m12133_gshared (Dictionary_2_t2022 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		_stringLiteral2982 = il2cpp_codegen_string_literal_from_index(2982);
		_stringLiteral2983 = il2cpp_codegen_string_literal_from_index(2983);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral458, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t275 * L_7 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_7, (String_t*)_stringLiteral2982, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m6110((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2022 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Count() */, (Dictionary_2_t2022 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t275 * L_12 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_12, (String_t*)_stringLiteral2983, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2025  Dictionary_2_make_pair_m12135_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t2025  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2025 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (Object_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12137_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12139_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12141_gshared (Dictionary_2_t2022 * __this, KeyValuePair_2U5BU5D_t2688* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2688* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2022 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2688* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2037 * L_5 = (Transform_1_t2037 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2037 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, KeyValuePair_2U5BU5D_t2688*, int32_t, Transform_1_t2037 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2022 *)__this, (KeyValuePair_2U5BU5D_t2688*)L_2, (int32_t)L_3, (Transform_1_t2037 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m12143_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1037* V_1 = {0};
	LinkU5BU5D_t2017* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t148* V_7 = {0};
	EventStatusU5BU5D_t2019* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t985_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7766(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1037*)((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t2017*)((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t2017* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_10 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1367 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2017* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1037* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2017* L_26 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1367 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1037* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2017* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (EventStatusU5BU5D_t2019*)((EventStatusU5BU5D_t2019*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t148* L_37 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		EventStatusU5BU5D_t2019* L_40 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		EventStatusU5BU5D_t2019* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		EventStatusU5BU5D_t2019* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2984;
extern "C" void Dictionary_2_Add_m12145_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2984 = il2cpp_codegen_string_literal_from_index(2984);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_15 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t275 * L_20 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_20, (String_t*)_stringLiteral2984, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_21 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t1037* L_30 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t2017* L_42 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1037* L_44 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_47 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t148* L_50 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		EventStatusU5BU5D_t2019* L_53 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		int32_t L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_53, L_54, sizeof(int32_t))) = (int32_t)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Clear()
extern "C" void Dictionary_2_Clear_m12147_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		EventStatusU5BU5D_t2019* L_4 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		EventStatusU5BU5D_t2019* L_5 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t2017* L_6 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		LinkU5BU5D_t2017* L_7 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_ContainsKey_m12149_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t2017* L_19 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12151_gshared (Dictionary_2_t2022 * __this, int32_t ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2039 * L_0 = (( EqualityComparer_1_t2039 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		EventStatusU5BU5D_t2019* L_5 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<RMX.EventStatus>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7, sizeof(int32_t))), (int32_t)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t1037* L_16 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral906;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_GetObjectData_m12153_gshared (Dictionary_2_t2022 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral906 = il2cpp_codegen_string_literal_from_index(906);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2688* V_0 = {0};
	{
		SerializationInfo_t818 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral906, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t818 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t818 *)L_2);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_2, (String_t*)_stringLiteral908, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t818 *)L_4);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_4, (String_t*)_stringLiteral910, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2688*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2688*)((KeyValuePair_2U5BU5D_t2688*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2688* L_8 = V_0;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, KeyValuePair_2U5BU5D_t2688*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2022 *)__this, (KeyValuePair_2U5BU5D_t2688*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t818 * L_9 = ___info;
		Int32U5BU5D_t1037* L_10 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t818 *)L_9);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_9, (String_t*)_stringLiteral1538, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t818 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2688* L_12 = V_0;
		NullCheck((SerializationInfo_t818 *)L_11);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_11, (String_t*)_stringLiteral2985, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_OnDeserialization_m12155_gshared (Dictionary_2_t2022 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2688* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t818 * L_0 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
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
		SerializationInfo_t818 * L_1 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_1, (String_t*)_stringLiteral908, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t818 * L_3 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_3, (String_t*)_stringLiteral910, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t818 * L_6 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_6, (String_t*)_stringLiteral1538, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t818 * L_8 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_8, (String_t*)_stringLiteral2985, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2688*)((KeyValuePair_2U5BU5D_t2688*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2022 *)__this);
		(( void (*) (Dictionary_2_t2022 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2022 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2688* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2688* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2025 *)((KeyValuePair_2_t2025 *)(KeyValuePair_2_t2025 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t2025 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2688* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2025 *)((KeyValuePair_2_t2025 *)(KeyValuePair_2_t2025 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t2025 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2022 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Add(TKey,TValue) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2688* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t818 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_Remove_m12157_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t1037* L_29 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t2017* L_31 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1367 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t2017* L_34 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1367 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t2017* L_43 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1367 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t148* L_45 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		EventStatusU5BU5D_t2019* L_48 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (EventStatus_t23_il2cpp_TypeInfo_var, (&V_5));
		int32_t L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49, sizeof(int32_t))) = (int32_t)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_TryGetValue_m12159_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		int32_t* L_19 = ___value;
		EventStatusU5BU5D_t2019* L_20 = (EventStatusU5BU5D_t2019*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t2017* L_23 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_27 = ___value;
		Initobj (EventStatus_t23_il2cpp_TypeInfo_var, (&V_2));
		int32_t L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Keys()
extern "C" KeyCollection_t2029 * Dictionary_2_get_Keys_m12161_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2029 * L_0 = (KeyCollection_t2029 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2029 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Values()
extern "C" ValueCollection_t2033 * Dictionary_2_get_Values_m12163_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2033 * L_0 = (ValueCollection_t2033 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2033 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2986;
extern "C" Object_t * Dictionary_2_ToTKey_m12165_gshared (Dictionary_2_t2022 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t275 * L_6 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_6, (String_t*)L_5, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2986;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" int32_t Dictionary_2_ToTValue_m12167_gshared (Dictionary_2_t2022 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (EventStatus_t23_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t275 * L_8 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_8, (String_t*)L_7, (String_t*)_stringLiteral575, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12169_gshared (Dictionary_2_t2022 * __this, KeyValuePair_2_t2025  ___pair, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2025 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2022 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2022 *)__this, (Object_t *)L_0, (int32_t*)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2039 * L_2 = (( EqualityComparer_1_t2039 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2025 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t2039 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::Equals(T,T) */, (EqualityComparer_1_t2039 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::GetEnumerator()
extern "C" Enumerator_t2031  Dictionary_2_GetEnumerator_m12171_gshared (Dictionary_2_t2022 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031  L_0 = {0};
		(( void (*) (Enumerator_t2031 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2022 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m12173_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_2);
		DictionaryEntry_t1247  L_4 = {0};
		DictionaryEntry__ctor_m6108(&L_4, (Object_t *)L_0, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>(System.Int32)
extern "C" KeyValuePair_2_t2025  Array_InternalArray__get_Item_TisKeyValuePair_2_t2025_m20591_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2025_m20591(__this, p0, method) (( KeyValuePair_2_t2025  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2025_m20591_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12174_gshared (InternalEnumerator_1_t2026 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12175_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2025  L_0 = (( KeyValuePair_2_t2025  (*) (InternalEnumerator_1_t2026 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2026 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2025  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12176_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12177_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" KeyValuePair_2_t2025  InternalEnumerator_1_get_Current_m12178_gshared (InternalEnumerator_1_t2026 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2025  L_8 = (( KeyValuePair_2_t2025  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
extern "C" void KeyValuePair_2__ctor_m12179_gshared (KeyValuePair_2_t2025 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2025 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2025 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2025 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2025 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12180_gshared (KeyValuePair_2_t2025 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12181_gshared (KeyValuePair_2_t2025 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m12182_gshared (KeyValuePair_2_t2025 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12183_gshared (KeyValuePair_2_t2025 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral534;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" String_t* KeyValuePair_2_ToString_m12184_gshared (KeyValuePair_2_t2025 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		_stringLiteral534 = il2cpp_codegen_string_literal_from_index(534);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t35* G_B2_1 = {0};
	StringU5BU5D_t35* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t35* G_B1_1 = {0};
	StringU5BU5D_t35* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t35* G_B3_2 = {0};
	StringU5BU5D_t35* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t35* G_B5_1 = {0};
	StringU5BU5D_t35* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t35* G_B4_1 = {0};
	StringU5BU5D_t35* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t35* G_B6_2 = {0};
	StringU5BU5D_t35* G_B6_3 = {0};
	{
		StringU5BU5D_t35* L_0 = (StringU5BU5D_t35*)((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral471);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral471;
		StringU5BU5D_t35* L_1 = (StringU5BU5D_t35*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2025 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2025 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t35* L_6 = (StringU5BU5D_t35*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral534);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral534;
		StringU5BU5D_t35* L_7 = (StringU5BU5D_t35*)L_6;
		int32_t L_8 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2025 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2025 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t35* L_12 = (StringU5BU5D_t35*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral472);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral472;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m517(NULL /*static, unused*/, (StringU5BU5D_t35*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Array/InternalEnumerator`1<RMX.EventStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6.h"
// System.Array/InternalEnumerator`1<RMX.EventStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<RMX.EventStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<RMX.EventStatus>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisEventStatus_t23_m20602_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisEventStatus_t23_m20602(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisEventStatus_t23_m20602_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<RMX.EventStatus>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12185_gshared (InternalEnumerator_1_t2027 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<RMX.EventStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12186_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2027 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2027 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<RMX.EventStatus>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12187_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<RMX.EventStatus>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12188_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<RMX.EventStatus>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" int32_t InternalEnumerator_1_get_Current_m12189_gshared (InternalEnumerator_1_t2027 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
extern "C" Link_t1367  Array_InternalArray__get_Item_TisLink_t1367_m20613_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisLink_t1367_m20613(__this, p0, method) (( Link_t1367  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisLink_t1367_m20613_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12190_gshared (InternalEnumerator_1_t2028 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12191_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	{
		Link_t1367  L_0 = (( Link_t1367  (*) (InternalEnumerator_1_t2028 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2028 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Link_t1367  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12192_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12193_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" Link_t1367  InternalEnumerator_1_get_Current_m12194_gshared (InternalEnumerator_1_t2028 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Link_t1367  L_8 = (( Link_t1367  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2032;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20624_gshared (Dictionary_2_t2022 * __this, Array_t * p0, int32_t p1, Transform_1_t2032 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20624(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, Transform_1_t2032 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20624_gshared)(__this, p0, p1, p2, method)
struct ObjectU5BU5D_t148;
struct Transform_1_t2032;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20625_gshared (Dictionary_2_t2022 * __this, ObjectU5BU5D_t148* p0, int32_t p1, Transform_1_t2032 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20625(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2022 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2032 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20625_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void KeyCollection__ctor_m12195_gshared (KeyCollection_t2029 * __this, Dictionary_2_t2022 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2022 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t2022 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m12196_gshared (KeyCollection_t2029 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m12197_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m12198_gshared (KeyCollection_t2029 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2022 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::ContainsKey(TKey) */, (Dictionary_2_t2022 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m12199_gshared (KeyCollection_t2029 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m12200_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2029 *)__this);
		Enumerator_t2030  L_0 = (( Enumerator_t2030  (*) (KeyCollection_t2029 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2029 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2030  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m12201_gshared (KeyCollection_t2029 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t148* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t148* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t148* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2029 *)__this);
		(( void (*) (KeyCollection_t2029 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2029 *)__this, (ObjectU5BU5D_t148*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2022 * L_4 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2022 *)L_4);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2022 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2022 * L_7 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2032 * L_11 = (Transform_1_t2032 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2032 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2022 *)L_7);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, Transform_1_t2032 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2022 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2032 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m12202_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2029 *)__this);
		Enumerator_t2030  L_0 = (( Enumerator_t2030  (*) (KeyCollection_t2029 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2029 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2030  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m12203_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m12204_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m12205_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::CopyTo(TKey[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void KeyCollection_CopyTo_m12206_gshared (KeyCollection_t2029 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2022 *)L_0);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2022 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2022 * L_3 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2032 * L_7 = (Transform_1_t2032 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2032 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2022 *)L_3);
		(( void (*) (Dictionary_2_t2022 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2032 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2022 *)L_3, (ObjectU5BU5D_t148*)L_4, (int32_t)L_5, (Transform_1_t2032 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::GetEnumerator()
extern "C" Enumerator_t2030  KeyCollection_GetEnumerator_m12207_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		Enumerator_t2030  L_1 = {0};
		(( void (*) (Enumerator_t2030 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2022 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,RMX.EventStatus>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m12208_gshared (KeyCollection_t2029 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2022 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Count() */, (Dictionary_2_t2022 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
extern "C" void Enumerator__ctor_m12209_gshared (Enumerator_t2030 * __this, Dictionary_2_t2022 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = ___host;
		NullCheck((Dictionary_2_t2022 *)L_0);
		Enumerator_t2031  L_1 = (( Enumerator_t2031  (*) (Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12210_gshared (Enumerator_t2030 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,RMX.EventStatus>::Dispose()
extern "C" void Enumerator_Dispose_m12211_gshared (Enumerator_t2030 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12212_gshared (Enumerator_t2030 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,RMX.EventStatus>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m12213_gshared (Enumerator_t2030 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2025 * L_1 = (KeyValuePair_2_t2025 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2025 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
extern "C" void Enumerator__ctor_m12214_gshared (Enumerator_t2031 * __this, Dictionary_2_t2022 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2022 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12215_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2025  L_0 = (KeyValuePair_2_t2025 )(__this->___current_3);
		KeyValuePair_2_t2025  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12216_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2025 * L_0 = (KeyValuePair_2_t2025 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2025 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2025 * L_2 = (KeyValuePair_2_t2025 *)&(__this->___current_3);
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2025 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t1247  L_6 = {0};
		DictionaryEntry__ctor_m6108(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12217_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12218_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12219_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2022 * L_4 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2017* L_5 = (LinkU5BU5D_t2017*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1367 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2022 * L_8 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t148* L_9 = (ObjectU5BU5D_t148*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2022 * L_12 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck(L_12);
		EventStatusU5BU5D_t2019* L_13 = (EventStatusU5BU5D_t2019*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2025  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2025 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15, sizeof(int32_t))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2022 * L_18 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_Current()
extern "C" KeyValuePair_2_t2025  Enumerator_get_Current_m12220_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2025  L_0 = (KeyValuePair_2_t2025 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12221_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2025 * L_0 = (KeyValuePair_2_t2025 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2025 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12222_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2025 * L_0 = (KeyValuePair_2_t2025 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2025 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2988;
extern "C" void Enumerator_VerifyState_m12223_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2988 = il2cpp_codegen_string_literal_from_index(2988);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t905 * L_1 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t2022 * L_2 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1075 * L_5 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_5, (String_t*)_stringLiteral2988, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2989;
extern "C" void Enumerator_VerifyCurrent_m12224_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2989 = il2cpp_codegen_string_literal_from_index(2989);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2989, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,RMX.EventStatus>::Dispose()
extern "C" void Enumerator_Dispose_m12225_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2022 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12226_gshared (Transform_1_t2032 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Object>::Invoke(TKey,TValue)
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
extern "C" Object_t * Transform_1_Invoke_m12227_gshared (Transform_1_t2032 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12227((Transform_1_t2032 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12228_gshared (Transform_1_t2032 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(EventStatus_t23_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m12229_gshared (Transform_1_t2032 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2035;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_ICollectionCopyTo<RMX.EventStatus>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_ICollectionCopyTo<RMX.EventStatus>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisEventStatus_t23_m20626_gshared (Dictionary_2_t2022 * __this, Array_t * p0, int32_t p1, Transform_1_t2035 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisEventStatus_t23_m20626(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, Transform_1_t2035 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisEventStatus_t23_m20626_gshared)(__this, p0, p1, p2, method)
struct EventStatusU5BU5D_t2019;
struct Transform_1_t2035;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<RMX.EventStatus,RMX.EventStatus>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::Do_CopyTo<RMX.EventStatus,RMX.EventStatus>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisEventStatus_t23_TisEventStatus_t23_m20628_gshared (Dictionary_2_t2022 * __this, EventStatusU5BU5D_t2019* p0, int32_t p1, Transform_1_t2035 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisEventStatus_t23_TisEventStatus_t23_m20628(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2022 *, EventStatusU5BU5D_t2019*, int32_t, Transform_1_t2035 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisEventStatus_t23_TisEventStatus_t23_m20628_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void ValueCollection__ctor_m12230_gshared (ValueCollection_t2033 * __this, Dictionary_2_t2022 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2022 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t2022 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12231_gshared (ValueCollection_t2033 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12232_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12233_gshared (ValueCollection_t2033 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t2022 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2022 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12234_gshared (ValueCollection_t2033 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12235_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2033 *)__this);
		Enumerator_t2034  L_0 = (( Enumerator_t2034  (*) (ValueCollection_t2033 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2033 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2034  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12236_gshared (ValueCollection_t2033 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	EventStatusU5BU5D_t2019* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (EventStatusU5BU5D_t2019*)((EventStatusU5BU5D_t2019*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		EventStatusU5BU5D_t2019* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		EventStatusU5BU5D_t2019* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2033 *)__this);
		(( void (*) (ValueCollection_t2033 *, EventStatusU5BU5D_t2019*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2033 *)__this, (EventStatusU5BU5D_t2019*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2022 * L_4 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2022 *)L_4);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2022 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2022 * L_7 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2035 * L_11 = (Transform_1_t2035 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2035 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2022 *)L_7);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, Transform_1_t2035 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2022 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2035 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12237_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2033 *)__this);
		Enumerator_t2034  L_0 = (( Enumerator_t2034  (*) (ValueCollection_t2033 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2033 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2034  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12238_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12239_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12240_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::CopyTo(TValue[],System.Int32)
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m12241_gshared (ValueCollection_t2033 * __this, EventStatusU5BU5D_t2019* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		EventStatusU5BU5D_t2019* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2022 *)L_0);
		(( void (*) (Dictionary_2_t2022 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2022 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2022 * L_3 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		EventStatusU5BU5D_t2019* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2035 * L_7 = (Transform_1_t2035 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2035 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2022 *)L_3);
		(( void (*) (Dictionary_2_t2022 *, EventStatusU5BU5D_t2019*, int32_t, Transform_1_t2035 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2022 *)L_3, (EventStatusU5BU5D_t2019*)L_4, (int32_t)L_5, (Transform_1_t2035 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::GetEnumerator()
extern "C" Enumerator_t2034  ValueCollection_GetEnumerator_m12242_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		Enumerator_t2034  L_1 = {0};
		(( void (*) (Enumerator_t2034 *, Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2022 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,RMX.EventStatus>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m12243_gshared (ValueCollection_t2033 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = (Dictionary_2_t2022 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2022 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::get_Count() */, (Dictionary_2_t2022 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
extern "C" void Enumerator__ctor_m12244_gshared (Enumerator_t2034 * __this, Dictionary_2_t2022 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2022 * L_0 = ___host;
		NullCheck((Dictionary_2_t2022 *)L_0);
		Enumerator_t2031  L_1 = (( Enumerator_t2031  (*) (Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12245_gshared (Enumerator_t2034 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>::Dispose()
extern "C" void Enumerator_Dispose_m12246_gshared (Enumerator_t2034 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12247_gshared (Enumerator_t2034 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,RMX.EventStatus>::get_Current()
extern "C" int32_t Enumerator_get_Current_m12248_gshared (Enumerator_t2034 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2025 * L_1 = (KeyValuePair_2_t2025 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2025 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12249_gshared (Transform_1_t2035 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::Invoke(TKey,TValue)
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
extern "C" int32_t Transform_1_Invoke_m12250_gshared (Transform_1_t2035 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12250((Transform_1_t2035 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12251_gshared (Transform_1_t2035 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(EventStatus_t23_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,RMX.EventStatus>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m12252_gshared (Transform_1_t2035 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12253_gshared (Transform_1_t2023 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
extern "C" DictionaryEntry_t1247  Transform_1_Invoke_m12254_gshared (Transform_1_t2023 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12254((Transform_1_t2023 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12255_gshared (Transform_1_t2023 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(EventStatus_t23_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1247  Transform_1_EndInvoke_m12256_gshared (Transform_1_t2023 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1247 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
extern "C" DictionaryEntry_t1247  Array_InternalArray__get_Item_TisDictionaryEntry_t1247_m20629_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDictionaryEntry_t1247_m20629(__this, p0, method) (( DictionaryEntry_t1247  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDictionaryEntry_t1247_m20629_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12257_gshared (InternalEnumerator_1_t2036 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12258_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	{
		DictionaryEntry_t1247  L_0 = (( DictionaryEntry_t1247  (*) (InternalEnumerator_1_t2036 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2036 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DictionaryEntry_t1247  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12259_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12260_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" DictionaryEntry_t1247  InternalEnumerator_1_get_Current_m12261_gshared (InternalEnumerator_1_t2036 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		DictionaryEntry_t1247  L_8 = (( DictionaryEntry_t1247  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12262_gshared (Transform_1_t2037 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::Invoke(TKey,TValue)
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
extern "C" KeyValuePair_2_t2025  Transform_1_Invoke_m12263_gshared (Transform_1_t2037 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12263((Transform_1_t2037 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2025  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2025  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2025  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12264_gshared (Transform_1_t2037 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(EventStatus_t23_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.Generic.KeyValuePair`2<System.Object,RMX.EventStatus>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2025  Transform_1_EndInvoke_m12265_gshared (Transform_1_t2037 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2025 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m12266_gshared (ShimEnumerator_t2038 * __this, Dictionary_2_t2022 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2022 * L_0 = ___host;
		NullCheck((Dictionary_2_t2022 *)L_0);
		Enumerator_t2031  L_1 = (( Enumerator_t2031  (*) (Dictionary_2_t2022 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2022 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12267_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m12268_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2031  L_0 = (Enumerator_t2031 )(__this->___host_enumerator_0);
		Enumerator_t2031  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1247  L_3 = (DictionaryEntry_t1247 )InterfaceFuncInvoker0< DictionaryEntry_t1247  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12269_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2025  V_0 = {0};
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2025  L_1 = (( KeyValuePair_2_t2025  (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2025 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2025 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12270_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2025  V_0 = {0};
	{
		Enumerator_t2031 * L_0 = (Enumerator_t2031 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2025  L_1 = (( KeyValuePair_2_t2025  (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2031 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2025 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2025 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Current()
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m12271_gshared (ShimEnumerator_t2038 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2038 *)__this);
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,RMX.EventStatus>::get_Entry() */, (ShimEnumerator_t2038 *)__this);
		DictionaryEntry_t1247  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1247_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m12272_gshared (EqualityComparer_1_t2039 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m12273_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2934_0_0_0_var = il2cpp_codegen_type_from_index(3046);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericEqualityComparer_1_t2934_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2039_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2039 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2040 * L_8 = (DefaultComparer_t2040 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2040 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2039_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12274_gshared (EqualityComparer_1_t2039 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2039 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::GetHashCode(T) */, (EqualityComparer_1_t2039 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12275_gshared (EqualityComparer_1_t2039 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2039 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::Equals(T,T) */, (EqualityComparer_1_t2039 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<RMX.EventStatus>::get_Default()
extern "C" EqualityComparer_1_t2039 * EqualityComparer_1_get_Default_m12276_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2039 * L_0 = ((EqualityComparer_1_t2039_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.EventStatus>::.ctor()
extern "C" void DefaultComparer__ctor_m12277_gshared (DefaultComparer_t2040 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2039 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2039 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2039 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.EventStatus>::GetHashCode(T)
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
extern "C" int32_t DefaultComparer_GetHashCode_m12278_gshared (DefaultComparer_t2040 * __this, int32_t ___obj, const MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<RMX.EventStatus>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12279_gshared (DefaultComparer_t2040 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		goto IL_0015;
	}
	{
		int32_t L_1 = ___y;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		int32_t L_4 = ___y;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7MethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2836;
struct Transform_1_t2048;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20657_gshared (Dictionary_2_t2047 * __this, DictionaryEntryU5BU5D_t2836* p0, int32_t p1, Transform_1_t2048 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20657(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2047 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2048 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20657_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t2057;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2049_m20658_gshared (Dictionary_2_t2047 * __this, Array_t * p0, int32_t p1, Transform_1_t2057 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2049_m20658(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, Transform_1_t2057 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2049_m20658_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2493;
struct Transform_1_t2057;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2049_TisKeyValuePair_2_t2049_m20660_gshared (Dictionary_2_t2047 * __this, KeyValuePair_2U5BU5D_t2493* p0, int32_t p1, Transform_1_t2057 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2049_TisKeyValuePair_2_t2049_m20660(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2047 *, KeyValuePair_2U5BU5D_t2493*, int32_t, Transform_1_t2057 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2049_TisKeyValuePair_2_t2049_m20660_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m12330_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12332_gshared (Dictionary_2_t2047 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12334_gshared (Dictionary_2_t2047 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2047 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m12336_gshared (Dictionary_2_t2047 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void Dictionary_2__ctor_m12338_gshared (Dictionary_2_t2047 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2049  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2049  L_9 = (KeyValuePair_2_t2049 )InterfaceFuncInvoker0< KeyValuePair_2_t2049  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2049 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2049 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2049 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2047 *)__this);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_10, (Object_t *)L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m12340_gshared (Dictionary_2_t2047 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12342_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2047 *)__this);
		KeyCollection_t2051 * L_0 = (( KeyCollection_t2051 * (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12344_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2047 *)__this);
		ValueCollection_t2055 * L_0 = (( ValueCollection_t2055 * (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12346_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2047 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2047 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2047 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2047 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2047 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2047 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_4);
		return L_5;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12348_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2047 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2047 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2047 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2047 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2047 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2047 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2047 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12350_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2047 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2047 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2047 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2047 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2047 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2047 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2047 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12352_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2047 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2047 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12354_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2047 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t2047 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12356_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12358_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12360_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12362_gshared (Dictionary_2_t2047 * __this, KeyValuePair_2_t2049  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2049 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2049 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2047 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12364_gshared (Dictionary_2_t2047 * __this, KeyValuePair_2_t2049  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2047 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2047 *, KeyValuePair_2_t2049 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2047 *)__this, (KeyValuePair_2_t2049 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12366_gshared (Dictionary_2_t2047 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2493* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2047 *)__this, (KeyValuePair_2U5BU5D_t2493*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12368_gshared (Dictionary_2_t2047 * __this, KeyValuePair_2_t2049  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2047 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2047 *, KeyValuePair_2_t2049 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2047 *)__this, (KeyValuePair_2_t2049 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2049 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2047 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12370_gshared (Dictionary_2_t2047 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3048);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2493* V_0 = {0};
	DictionaryEntryU5BU5D_t2836* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B5_1 = {0};
	Dictionary_2_t2047 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B4_1 = {0};
	Dictionary_2_t2047 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2493*)((KeyValuePair_2U5BU5D_t2493*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2493* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2493* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2047 *)__this, (KeyValuePair_2U5BU5D_t2493*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2047 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2836*)((DictionaryEntryU5BU5D_t2836*)IsInst(L_6, DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2836* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2836* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2048 * L_10 = ((Dictionary_2_t2047_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2047 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2047 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2048 * L_12 = (Transform_1_t2048 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2048 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2047_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2047 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2048 * L_13 = ((Dictionary_2_t2047_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2047 *)G_B5_2);
		(( void (*) (Dictionary_2_t2047 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2048 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2047 *)G_B5_2, (DictionaryEntryU5BU5D_t2836*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2048 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2057 * L_17 = (Transform_1_t2057 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2057 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, Transform_1_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2047 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2057 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12372_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053  L_0 = {0};
		(( void (*) (Enumerator_t2053 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2053  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12374_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053  L_0 = {0};
		(( void (*) (Enumerator_t2053 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2053  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12376_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2058 * L_0 = (ShimEnumerator_t2058 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2058 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12378_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1368_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" Object_t * Dictionary_2_get_Item_m12380_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		KeyNotFoundException_t1368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3049);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t148* L_19 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_21, sizeof(Object_t *)));
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1368 * L_26 = (KeyNotFoundException_t1368 *)il2cpp_codegen_object_new (KeyNotFoundException_t1368_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7532(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_set_Item_m12382_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t2017* L_38 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t2017* L_41 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t1037* L_43 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_46 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t2017* L_49 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1367 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t148* L_52 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t2017* L_56 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t2017* L_58 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1367 )))->___Next_1 = L_60;
		LinkU5BU5D_t2017* L_61 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t1037* L_63 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_66 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		ObjectU5BU5D_t148* L_69 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		Object_t * L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, L_70, sizeof(Object_t *))) = (Object_t *)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void Dictionary_2_Init_m12384_gshared (Dictionary_2_t2047 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2047 * G_B4_0 = {0};
	Dictionary_2_t2047 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2047 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, (String_t*)_stringLiteral1504, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2047 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2047 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2047 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t1968 * L_5 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2047 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2047 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m12386_gshared (Dictionary_2_t2047 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral897;
extern Il2CppCodeGenString* _stringLiteral2982;
extern Il2CppCodeGenString* _stringLiteral2983;
extern "C" void Dictionary_2_CopyToCheck_m12388_gshared (Dictionary_2_t2047 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		_stringLiteral2982 = il2cpp_codegen_string_literal_from_index(2982);
		_stringLiteral2983 = il2cpp_codegen_string_literal_from_index(2983);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral458, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t275 * L_7 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_7, (String_t*)_stringLiteral2982, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m6110((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2047 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2047 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t275 * L_12 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_12, (String_t*)_stringLiteral2983, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2049  Dictionary_2_make_pair_m12390_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2049  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2049 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12392_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12394_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12396_gshared (Dictionary_2_t2047 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2493* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2047 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2493* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2057 * L_5 = (Transform_1_t2057 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2057 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, KeyValuePair_2U5BU5D_t2493*, int32_t, Transform_1_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2047 *)__this, (KeyValuePair_2U5BU5D_t2493*)L_2, (int32_t)L_3, (Transform_1_t2057 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m12398_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1037* V_1 = {0};
	LinkU5BU5D_t2017* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t148* V_7 = {0};
	ObjectU5BU5D_t148* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t985_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7766(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1037*)((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t2017*)((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t2017* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_10 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1367 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2017* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1037* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2017* L_26 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1367 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1037* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2017* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t148* L_37 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_40 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		ObjectU5BU5D_t148* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t148* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2984;
extern "C" void Dictionary_2_Add_m12400_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2984 = il2cpp_codegen_string_literal_from_index(2984);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_15 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t275 * L_20 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_20, (String_t*)_stringLiteral2984, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_21 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t1037* L_30 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t2017* L_42 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1037* L_44 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_47 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t148* L_50 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		ObjectU5BU5D_t148* L_53 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54, sizeof(Object_t *))) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12402_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_4 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t2017* L_6 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		LinkU5BU5D_t2017* L_7 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_ContainsKey_m12404_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t2017* L_19 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12406_gshared (Dictionary_2_t2047 * __this, Object_t * ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t1968 * L_0 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7, sizeof(Object_t *))), (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t1037* L_16 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral906;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_GetObjectData_m12408_gshared (Dictionary_2_t2047 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral906 = il2cpp_codegen_string_literal_from_index(906);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2493* V_0 = {0};
	{
		SerializationInfo_t818 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral906, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t818 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t818 *)L_2);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_2, (String_t*)_stringLiteral908, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t818 *)L_4);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_4, (String_t*)_stringLiteral910, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2493*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2493*)((KeyValuePair_2U5BU5D_t2493*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2493* L_8 = V_0;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2047 *)__this, (KeyValuePair_2U5BU5D_t2493*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t818 * L_9 = ___info;
		Int32U5BU5D_t1037* L_10 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t818 *)L_9);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_9, (String_t*)_stringLiteral1538, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t818 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2493* L_12 = V_0;
		NullCheck((SerializationInfo_t818 *)L_11);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_11, (String_t*)_stringLiteral2985, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_OnDeserialization_m12410_gshared (Dictionary_2_t2047 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2493* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t818 * L_0 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
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
		SerializationInfo_t818 * L_1 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_1, (String_t*)_stringLiteral908, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t818 * L_3 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_3, (String_t*)_stringLiteral910, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t818 * L_6 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_6, (String_t*)_stringLiteral1538, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t818 * L_8 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_8, (String_t*)_stringLiteral2985, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2493*)((KeyValuePair_2U5BU5D_t2493*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2047 *)__this);
		(( void (*) (Dictionary_2_t2047 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2047 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2493* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2493* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2049 *)((KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t2049 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2493* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2049 *)((KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t2049 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2047 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2493* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t818 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_Remove_m12412_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t1037* L_29 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t2017* L_31 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1367 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t2017* L_34 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1367 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t2017* L_43 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1367 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t148* L_45 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t148* L_48 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, L_49, sizeof(Object_t *))) = (Object_t *)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_TryGetValue_m12414_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		Object_t ** L_19 = ___value;
		ObjectU5BU5D_t148* L_20 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22, sizeof(Object_t *)));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t2017* L_23 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		Object_t ** L_27 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2051 * Dictionary_2_get_Keys_m12415_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2051 * L_0 = (KeyCollection_t2051 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2051 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2055 * Dictionary_2_get_Values_m12416_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2055 * L_0 = (ValueCollection_t2055 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2055 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2986;
extern "C" Object_t * Dictionary_2_ToTKey_m12418_gshared (Dictionary_2_t2047 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t275 * L_6 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_6, (String_t*)L_5, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2986;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" Object_t * Dictionary_2_ToTValue_m12420_gshared (Dictionary_2_t2047 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t275 * L_8 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_8, (String_t*)L_7, (String_t*)_stringLiteral575, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12422_gshared (Dictionary_2_t2047 * __this, KeyValuePair_2_t2049  ___pair, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2049 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2047 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2047 *)__this, (Object_t *)L_0, (Object_t **)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t1968 * L_2 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2049 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t1968 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t1968 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2053  Dictionary_2_GetEnumerator_m12423_gshared (Dictionary_2_t2047 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053  L_0 = {0};
		(( void (*) (Enumerator_t2053 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2047 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m12425_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		DictionaryEntry_t1247  L_2 = {0};
		DictionaryEntry__ctor_m6108(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
