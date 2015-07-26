#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
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
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.SocialPlatforms.GKAchievementReporter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_SocialPlatforms_GK.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GKAchievementReporter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_SocialPlatforms_GKMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// RMX.RMXTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXTests.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.GKAchievementReporter::.ctor()
extern "C" void GKAchievementReporter__ctor_m0 (GKAchievementReporter_t1 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GKAchievementReporter::ReportAchievement(System.String,System.Single,System.Boolean)
extern TypeInfo* GameCenterPlatform_t144_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" void GKAchievementReporter_ReportAchievement_m1 (Object_t * __this /* static, unused */, String_t* ___achievementID, float ___progress, bool ___showsCompletionBanner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * V_0 = {0};
	Exception_t143 * V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = Social_get_Active_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!((GameCenterPlatform_t144 *)IsInst(L_0, GameCenterPlatform_t144_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m414(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		String_t* L_2 = ___achievementID;
		float L_3 = ___progress;
		bool L_4 = ___showsCompletionBanner;
		GKAchievementReporter__ReportAchievement_m2(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0063;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0027;
		throw e;
	}

CATCH_0027:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t143 *)__exception_local);
			int32_t L_5 = 3;
			Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
			Exception_t143 * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_9 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_6, L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0054;
			}
		}

IL_003e:
		{
			int32_t L_10 = 1;
			Object_t * L_11 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_10);
			Exception_t143 * L_12 = V_0;
			NullCheck(L_12);
			String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_12);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_14 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_11, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_005e;
			}
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_15 = Bugger_get_Last_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m415(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		}

IL_005e:
		{
			goto IL_0063;
		}
	} // end catch (depth: 1)

IL_0063:
	{
		goto IL_00b2;
	}

IL_0068:
	try
	{ // begin try (depth: 1)
		String_t* L_16 = ___achievementID;
		float L_17 = ___progress;
		Social_ReportProgress_m416(NULL /*static, unused*/, L_16, (((double)L_17)), (Action_1_t145 *)NULL, /*hidden argument*/NULL);
		goto IL_00b2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t143 *)__exception_local);
			int32_t L_18 = 3;
			Object_t * L_19 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_18);
			Exception_t143 * L_20 = V_1;
			NullCheck(L_20);
			String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_20);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_22 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_19, L_21, /*hidden argument*/NULL);
			if (L_22)
			{
				goto IL_00a3;
			}
		}

IL_008d:
		{
			int32_t L_23 = 1;
			Object_t * L_24 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_23);
			Exception_t143 * L_25 = V_1;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_27 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_24, L_26, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_00ad;
			}
		}

IL_00a3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_28 = Bugger_get_Last_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m415(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		}

IL_00ad:
		{
			goto IL_00b2;
		}
	} // end catch (depth: 1)

IL_00b2:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GKAchievementReporter::_ReportAchievement(System.String,System.Single,System.Boolean)
extern "C" {void DEFAULT_CALL _ReportAchievement(char*, float, int32_t);}
extern "C" void GKAchievementReporter__ReportAchievement_m2 (Object_t * __this /* static, unused */, String_t* ___achievementID, float ___progress, bool ___showsCompletionBanner, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ReportAchievement;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ReportAchievement'"));
		}
	}

	// Marshaling of parameter '___achievementID' to native representation
	char* ____achievementID_marshaled = { 0 };
	____achievementID_marshaled = il2cpp_codegen_marshal_string(___achievementID);

	// Marshaling of parameter '___progress' to native representation

	// Marshaling of parameter '___showsCompletionBanner' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____achievementID_marshaled, ___progress, ___showsCompletionBanner);

	// Marshaling cleanup of parameter '___achievementID' native representation
	il2cpp_codegen_marshal_free(____achievementID_marshaled);
	____achievementID_marshaled = NULL;

	// Marshaling cleanup of parameter '___progress' native representation

	// Marshaling cleanup of parameter '___showsCompletionBanner' native representation

}
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"



// System.Boolean RMX.Singletons::get_GameControllerInitialized()
extern TypeInfo* Singletons_t3_il2cpp_TypeInfo_var;
extern "C" bool Singletons_get_GameControllerInitialized_m3 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Singletons_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((Singletons_t3_StaticFields*)Singletons_t3_il2cpp_TypeInfo_var->static_fields)->____gameController_0;
		return ((((int32_t)((((Object_t*)(Object_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// RMX.IGameController RMX.Singletons::get_GameController()
extern TypeInfo* Singletons_t3_il2cpp_TypeInfo_var;
extern "C" Object_t * Singletons_get_GameController_m4 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Singletons_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((Singletons_t3_StaticFields*)Singletons_t3_il2cpp_TypeInfo_var->static_fields)->____gameController_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// RMX.RMXTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXTestsMethodDeclarations.h"



// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_LogMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"


// System.Void RMX.Bugger/Log::.ctor(System.Enum,System.String)
extern "C" void Log__ctor_m5 (Log_t6 * __this, Enum_t5 * ___feature, String_t* ___message, const MethodInfo* method)
{
	{
		Enum_t5 * L_0 = ___feature;
		__this->___feature_0 = L_0;
		String_t* L_1 = ___message;
		__this->___message_1 = L_1;
		return;
	}
}
// System.Boolean RMX.Bugger/Log::get_isEmpty()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Log_get_isEmpty_m6 (Log_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___message_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m417(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (__this->___message_1);
		G_B3_0 = ((((Object_t*)(String_t*)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Boolean RMX.Bugger/Log::get_isActive()
extern "C" bool Log_get_isActive_m7 (Log_t6 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String RMX.Bugger/Log::get_color()
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern "C" String_t* Log_get_color_m8 (Log_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = (__this->___feature_0);
		int32_t L_1 = 3;
		Object_t * L_2 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return _stringLiteral0;
	}

IL_001c:
	{
		Enum_t5 * L_4 = (__this->___feature_0);
		int32_t L_5 = 1;
		Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		return _stringLiteral1;
	}

IL_0038:
	{
		Enum_t5 * L_8 = (__this->___feature_0);
		int32_t L_9 = 5;
		Object_t * L_10 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_8);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_8, L_10);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		return _stringLiteral2;
	}

IL_0054:
	{
		return _stringLiteral3;
	}
}
// System.String RMX.Bugger/Log::ToString()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" String_t* Log_ToString_m9 (Log_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		ObjectU5BU5D_t146* L_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)_stringLiteral4;
		ObjectU5BU5D_t146* L_1 = L_0;
		String_t* L_2 = Log_get_color_m8(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t146* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)_stringLiteral5;
		ObjectU5BU5D_t146* L_4 = L_3;
		Enum_t5 * L_5 = (__this->___feature_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t146* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)_stringLiteral6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m418(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		String_t* L_9 = (__this->___message_1);
		String_t* L_10 = String_Concat_m419(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_11 = TextFormatter_Format_m106(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		bool L_12 = Singletons_get_GameControllerInitialized_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		Object_t * L_13 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t2_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t13 * L_15 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_15, L_16);
	}

IL_006c:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
// RMX.Bugger/HUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_HUD.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Bugger/HUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_HUDMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// RMX.Singletons/ASingleton`1<RMX.Bugger/HUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_geMethodDeclarations.h"
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenterMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
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


// System.Void RMX.Bugger/HUD::.ctor()
extern TypeInfo* ASingleton_1_t8_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m420_MethodInfo_var;
extern "C" void HUD__ctor_m10 (HUD_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ASingleton_1__ctor_m420_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t8_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m420(__this, /*hidden argument*/ASingleton_1__ctor_m420_MethodInfo_var);
		return;
	}
}
// System.Void RMX.Bugger/HUD::Start()
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void HUD_Start_m11 (HUD_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean RMX.IGameController::get_BuildForRelease() */, IGameController_t2_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_RemoveListener_m56(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GameObject_t9 * L_2 = Component_get_gameObject_m421(__this, /*hidden argument*/NULL);
		Object_Destroy_m422(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void RMX.Bugger/HUD::Update()
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" void HUD_Update_m12 (HUD_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_0 = Bugger_get_timesUp_m27(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t13 * L_1 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32) */, L_1, 0);
		float L_2 = Time_get_fixedTime_m423(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____startedAt_3 = L_2;
	}

IL_001f:
	{
		return;
	}
}
// System.Void RMX.Bugger/HUD::OnGUI()
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t147_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t151_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral7;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" void HUD_OnGUI_m13 (HUD_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GUIStyle_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GUI_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GUIStyle_t147 * V_1 = {0};
	int32_t V_2 = 0;
	Rect_t148  G_B5_0 = {0};
	Rect_t148  G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	Rect_t148  G_B6_1 = {0};
	{
		Object_t * L_0 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00e1;
		}
	}
	{
		Object_t * L_1 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t2_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t13 * L_3 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		int32_t L_5 = Bugger_get_timeRemaining_m28(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_6);
		List_1_t13 * L_8 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_8, 0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m424(NULL /*static, unused*/, L_7, _stringLiteral7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		GUIStyle_t147 * L_11 = (GUIStyle_t147 *)il2cpp_codegen_object_new (GUIStyle_t147_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m425(L_11, /*hidden argument*/NULL);
		V_1 = L_11;
		GUIStyle_t147 * L_12 = V_1;
		NullCheck(L_12);
		GUIStyle_set_richText_m426(L_12, 1, /*hidden argument*/NULL);
		GUIStyle_t147 * L_13 = V_1;
		NullCheck(L_13);
		GUIStyle_set_wordWrap_m427(L_13, 1, /*hidden argument*/NULL);
		GUIStyle_t147 * L_14 = V_1;
		NullCheck(L_14);
		GUIStyle_set_alignment_m428(L_14, 6, /*hidden argument*/NULL);
		GUIStyle_t147 * L_15 = V_1;
		NullCheck(L_15);
		RectOffset_t150 * L_16 = GUIStyle_get_padding_m429(L_15, /*hidden argument*/NULL);
		V_2 = ((int32_t)20);
		GUIStyle_t147 * L_17 = V_1;
		NullCheck(L_17);
		RectOffset_t150 * L_18 = GUIStyle_get_padding_m429(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		RectOffset_set_bottom_m430(L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		V_2 = L_20;
		GUIStyle_t147 * L_21 = V_1;
		NullCheck(L_21);
		RectOffset_t150 * L_22 = GUIStyle_get_padding_m429(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		RectOffset_set_top_m431(L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		V_2 = L_24;
		GUIStyle_t147 * L_25 = V_1;
		NullCheck(L_25);
		RectOffset_t150 * L_26 = GUIStyle_get_padding_m429(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_2;
		NullCheck(L_26);
		RectOffset_set_right_m432(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		NullCheck(L_16);
		RectOffset_set_left_m433(L_16, L_28, /*hidden argument*/NULL);
		int32_t L_29 = Screen_get_width_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_30 = Screen_get_height_m435(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t148  L_31 = {0};
		Rect__ctor_m436(&L_31, (0.0f), (0.0f), (((float)L_29)), (((float)L_30)), /*hidden argument*/NULL);
		float L_32 = Time_get_timeScale_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = L_31;
		if ((!(((float)L_32) == ((float)(0.0f)))))
		{
			G_B5_0 = L_31;
			goto IL_00cb;
		}
	}
	{
		String_t* L_33 = V_0;
		G_B6_0 = L_33;
		G_B6_1 = G_B4_0;
		goto IL_00db;
	}

IL_00cb:
	{
		String_t* L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m438(NULL /*static, unused*/, _stringLiteral8, L_34, _stringLiteral9, /*hidden argument*/NULL);
		G_B6_0 = L_35;
		G_B6_1 = G_B5_0;
	}

IL_00db:
	{
		GUIStyle_t147 * L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t151_il2cpp_TypeInfo_var);
		GUI_Label_m439(NULL /*static, unused*/, G_B6_1, G_B6_0, L_36, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		return;
	}
}
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUD.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUDMethodDeclarations.h"

// RMX.Singletons/ASingleton`1<RMX.Bugger/DebugHUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_0MethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void RMX.Bugger/DebugHUD::.ctor()
extern TypeInfo* ASingleton_1_t11_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m440_MethodInfo_var;
extern "C" void DebugHUD__ctor_m14 (DebugHUD_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		ASingleton_1__ctor_m440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t11_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m440(__this, /*hidden argument*/ASingleton_1__ctor_m440_MethodInfo_var);
		return;
	}
}
// System.Void RMX.Bugger/DebugHUD::Start()
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void DebugHUD_Start_m15 (DebugHUD_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean RMX.IGameController::get_BuildForRelease() */, IGameController_t2_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_RemoveListener_m56(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GameObject_t9 * L_2 = Component_get_gameObject_m421(__this, /*hidden argument*/NULL);
		Object_Destroy_m422(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0021:
	{
		DebugHUD_Hide_m17(__this, /*hidden argument*/NULL);
		Object_t * L_3 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t2_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t9 * L_5 = (__this->___showButton_9);
		NullCheck(L_5);
		GameObject_SetActive_m441(L_5, 0, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void RMX.Bugger/DebugHUD::Show()
extern "C" void DebugHUD_Show_m16 (DebugHUD_t10 * __this, const MethodInfo* method)
{
	{
		__this->____show_11 = 1;
		GameObject_t9 * L_0 = (__this->___showButton_9);
		NullCheck(L_0);
		GameObject_SetActive_m441(L_0, 0, /*hidden argument*/NULL);
		GameObject_t9 * L_1 = (__this->___hideButton_10);
		NullCheck(L_1);
		GameObject_SetActive_m441(L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.Bugger/DebugHUD::Hide()
extern "C" void DebugHUD_Hide_m17 (DebugHUD_t10 * __this, const MethodInfo* method)
{
	{
		__this->____show_11 = 0;
		GameObject_t9 * L_0 = (__this->___showButton_9);
		NullCheck(L_0);
		GameObject_SetActive_m441(L_0, 1, /*hidden argument*/NULL);
		GameObject_t9 * L_1 = (__this->___hideButton_10);
		NullCheck(L_1);
		GameObject_SetActive_m441(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.Bugger/DebugHUD::OnGUI()
extern TypeInfo* GUIStyle_t147_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t151_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void DebugHUD_OnGUI_m18 (DebugHUD_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUI_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t147 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* G_B3_0 = {0};
	Rect_t148  G_B3_1 = {0};
	String_t* G_B2_0 = {0};
	Rect_t148  G_B2_1 = {0};
	String_t* G_B4_0 = {0};
	String_t* G_B4_1 = {0};
	Rect_t148  G_B4_2 = {0};
	{
		bool L_0 = (__this->____show_11);
		if (!L_0)
		{
			goto IL_00a7;
		}
	}
	{
		GUIStyle_t147 * L_1 = (GUIStyle_t147 *)il2cpp_codegen_object_new (GUIStyle_t147_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m425(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t147 * L_2 = V_0;
		NullCheck(L_2);
		GUIStyle_set_richText_m426(L_2, 1, /*hidden argument*/NULL);
		GUIStyle_t147 * L_3 = V_0;
		NullCheck(L_3);
		GUIStyle_set_wordWrap_m427(L_3, 1, /*hidden argument*/NULL);
		GUIStyle_t147 * L_4 = V_0;
		NullCheck(L_4);
		GUIStyle_set_alignment_m428(L_4, 2, /*hidden argument*/NULL);
		GUIStyle_t147 * L_5 = V_0;
		NullCheck(L_5);
		RectOffset_t150 * L_6 = GUIStyle_get_padding_m429(L_5, /*hidden argument*/NULL);
		V_1 = ((int32_t)20);
		GUIStyle_t147 * L_7 = V_0;
		NullCheck(L_7);
		RectOffset_t150 * L_8 = GUIStyle_get_padding_m429(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		RectOffset_set_bottom_m430(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = L_10;
		GUIStyle_t147 * L_11 = V_0;
		NullCheck(L_11);
		RectOffset_t150 * L_12 = GUIStyle_get_padding_m429(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		RectOffset_set_top_m431(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = L_14;
		GUIStyle_t147 * L_15 = V_0;
		NullCheck(L_15);
		RectOffset_t150 * L_16 = GUIStyle_get_padding_m429(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		RectOffset_set_right_m432(L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		NullCheck(L_6);
		RectOffset_set_left_m433(L_6, L_18, /*hidden argument*/NULL);
		int32_t L_19 = Screen_get_width_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_20 = Screen_get_height_m435(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t148  L_21 = {0};
		Rect__ctor_m436(&L_21, (0.0f), (0.0f), (((float)L_19)), (((float)L_20)), /*hidden argument*/NULL);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String RMX.Bugger/DebugHUD::get_DebugData() */, __this);
		float L_23 = Time_get_timeScale_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B2_0 = L_22;
		G_B2_1 = L_21;
		if ((!(((float)L_23) == ((float)(0.0f)))))
		{
			G_B3_0 = L_22;
			G_B3_1 = L_21;
			goto IL_0097;
		}
	}
	{
		G_B4_0 = _stringLiteral10;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_009c;
	}

IL_0097:
	{
		G_B4_0 = _stringLiteral11;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_009c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_24 = TextFormatter_Format_m107(NULL /*static, unused*/, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		GUIStyle_t147 * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t151_il2cpp_TypeInfo_var);
		GUI_Label_m439(NULL /*static, unused*/, G_B4_2, L_24, L_25, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// RMX.Bugger/<AddToQueue>c__AnonStorey9
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_U3CAddToQueueU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Bugger/<AddToQueue>c__AnonStorey9
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_U3CAddToQueueU3Ec__MethodDeclarations.h"



// System.Void RMX.Bugger/<AddToQueue>c__AnonStorey9::.ctor()
extern "C" void U3CAddToQueueU3Ec__AnonStorey9__ctor_m19 (U3CAddToQueueU3Ec__AnonStorey9_t12 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RMX.Bugger/<AddToQueue>c__AnonStorey9::<>m__0(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m20 (U3CAddToQueueU3Ec__AnonStorey9_t12 * __this, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___val;
		String_t* L_1 = (__this->___log_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m417(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Predicate`1<System.String>
#include "mscorlib_System_Predicate_1_gen.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Predicate`1<System.String>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"


// System.Void RMX.Bugger::.cctor()
extern TypeInfo* List_1_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t14_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m442_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m443_MethodInfo_var;
extern "C" void Bugger__cctor_m21 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		List_1_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		List_1__ctor_m442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		List_1__ctor_m443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t13 * L_0 = (List_1_t13 *)il2cpp_codegen_object_new (List_1_t13_il2cpp_TypeInfo_var);
		List_1__ctor_m442(L_0, /*hidden argument*/List_1__ctor_m442_MethodInfo_var);
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0 = L_0;
		List_1_t14 * L_1 = (List_1_t14 *)il2cpp_codegen_object_new (List_1_t14_il2cpp_TypeInfo_var);
		List_1__ctor_m443(L_1, /*hidden argument*/List_1__ctor_m443_MethodInfo_var);
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1 = L_1;
		int32_t L_2 = 3;
		Object_t * L_3 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Log_t6  L_5 = {0};
		Log__ctor_m5(&L_5, (Enum_t5 *)L_3, L_4, /*hidden argument*/NULL);
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____log_2 = L_5;
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____startedAt_3 = (0.0f);
		return;
	}
}
// System.Void RMX.Bugger::LateLogs()
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern TypeInfo* Log_t6_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t152_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m444_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m445_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m447_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral12;
extern "C" void Bugger_LateLogs_m22 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Log_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Enumerator_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		Enumerator_get_Current_m445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		Enumerator_MoveNext_m447_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	Log_t6  V_0 = {0};
	Enumerator_t152  V_1 = {0};
	String_t* V_2 = {0};
	Exception_t143 * V_3 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = 8;
		Object_t * L_2 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, Enum_t5 * >::Invoke(4 /* System.Boolean RMX.IGameController::IsDebugging(System.Enum) */, IGameController_t2_il2cpp_TypeInfo_var, L_0, (Enum_t5 *)L_2);
		if (!L_3)
		{
			goto IL_00a4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t14 * L_4 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		NullCheck(L_4);
		Enumerator_t152  L_5 = List_1_GetEnumerator_m444(L_4, /*hidden argument*/List_1_GetEnumerator_m444_MethodInfo_var);
		V_1 = L_5;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0087;
		}

IL_0025:
		{
			Log_t6  L_6 = Enumerator_get_Current_m445((&V_1), /*hidden argument*/Enumerator_get_Current_m445_MethodInfo_var);
			V_0 = L_6;
		}

IL_002d:
		try
		{ // begin try (depth: 2)
			{
				Object_t * L_7 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
				Enum_t5 * L_8 = ((&V_0)->___feature_0);
				NullCheck(L_7);
				bool L_9 = (bool)InterfaceFuncInvoker1< bool, Enum_t5 * >::Invoke(4 /* System.Boolean RMX.IGameController::IsDebugging(System.Enum) */, IGameController_t2_il2cpp_TypeInfo_var, L_7, L_8);
				if (!L_9)
				{
					goto IL_0071;
				}
			}

IL_0043:
			{
				String_t* L_10 = ((&V_0)->___message_1);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_11 = String_Concat_m419(NULL /*static, unused*/, _stringLiteral12, L_10, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
				String_t* L_12 = TextFormatter_Format_m106(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
				V_2 = L_12;
				Enum_t5 * L_13 = ((&V_0)->___feature_0);
				String_t* L_14 = V_2;
				Log_t6  L_15 = {0};
				Log__ctor_m5(&L_15, L_13, L_14, /*hidden argument*/NULL);
				Log_t6  L_16 = L_15;
				Object_t * L_17 = Box(Log_t6_il2cpp_TypeInfo_var, &L_16);
				Debug_Log_m415(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			}

IL_0071:
			{
				goto IL_0087;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t143 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0076;
			throw e;
		}

CATCH_0076:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t143 *)__exception_local);
			Exception_t143 * L_18 = V_3;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_18);
			Debug_LogWarning_m446(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			goto IL_0087;
		} // end catch (depth: 2)

IL_0087:
		{
			bool L_20 = Enumerator_MoveNext_m447((&V_1), /*hidden argument*/Enumerator_MoveNext_m447_MethodInfo_var);
			if (L_20)
			{
				goto IL_0025;
			}
		}

IL_0093:
		{
			IL2CPP_LEAVE(0xA4, FINALLY_0098);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0098;
	}

FINALLY_0098:
	{ // begin finally (depth: 1)
		Enumerator_t152  L_21 = V_1;
		Enumerator_t152  L_22 = L_21;
		Object_t * L_23 = Box(Enumerator_t152_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_23);
		IL2CPP_END_FINALLY(152)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(152)
	{
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_00a4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t14 * L_24 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		NullCheck(L_24);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Clear() */, L_24);
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1 = (List_1_t14 *)NULL;
		return;
	}
}
// System.String RMX.Bugger::get_Last()
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* NullReferenceException_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral13;
extern "C" String_t* Bugger_get_Last_m23 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		NullReferenceException_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_0 = Log_get_isEmpty_m6((&((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____log_2), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_1 = Log_ToString_m9((&((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____log_2), /*hidden argument*/NULL);
		return L_1;
	}

IL_001a:
	{
		NullReferenceException_t154 * L_2 = (NullReferenceException_t154 *)il2cpp_codegen_object_new (NullReferenceException_t154_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m448(L_2, _stringLiteral13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Void RMX.Bugger::AddLateLog(System.Enum,System.String)
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void Bugger_AddLateLog_m24 (Object_t * __this /* static, unused */, Enum_t5 * ___feature, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t14 * L_0 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		ObjectU5BU5D_t146* L_1 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 4));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, _stringLiteral14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)_stringLiteral14;
		ObjectU5BU5D_t146* L_2 = L_1;
		Enum_t5 * L_3 = ___feature;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t146* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, _stringLiteral15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)_stringLiteral15;
		ObjectU5BU5D_t146* L_5 = L_4;
		String_t* L_6 = ___message;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m418(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Exception_t143 * L_8 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t14 * L_9 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		Enum_t5 * L_10 = ___feature;
		String_t* L_11 = ___message;
		Log_t6  L_12 = {0};
		Log__ctor_m5(&L_12, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Log_t6  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(!0) */, L_9, L_12);
		return;
	}
}
// System.String RMX.Bugger::Stack(System.String,System.Int32)
extern TypeInfo* StackTrace_t156_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" String_t* Bugger_Stack_m25 (Object_t * __this /* static, unused */, String_t* ___message, int32_t ___skip, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	StackFrame_t155 * V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___skip;
		StackTrace_t156 * L_1 = (StackTrace_t156 *)il2cpp_codegen_object_new (StackTrace_t156_il2cpp_TypeInfo_var);
		StackTrace__ctor_m450(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		StackFrame_t155 * L_2 = (StackFrame_t155 *)VirtFuncInvoker1< StackFrame_t155 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, 0);
		V_0 = L_2;
		StackFrame_t155 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_3);
		V_1 = L_4;
		StackFrame_t155 * L_5 = V_0;
		NullCheck(L_5);
		MethodBase_t157 * L_6 = (MethodBase_t157 *)VirtFuncInvoker0< MethodBase_t157 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		V_2 = L_7;
		StackFrame_t155 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_8);
		V_3 = L_9;
		String_t* L_10 = ___message;
		String_t* L_11 = V_1;
		String_t* L_12 = V_2;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m451(NULL /*static, unused*/, _stringLiteral16, L_11, L_12, L_15, /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_m419(NULL /*static, unused*/, L_10, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Boolean RMX.Bugger::WillLog(System.Enum,System.String)
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern "C" bool Bugger_WillLog_m26 (Object_t * __this /* static, unused */, Enum_t5 * ___feature, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_1 = Bugger_Stack_m25(NULL /*static, unused*/, L_0, 2, /*hidden argument*/NULL);
		___message = L_1;
		Object_t * L_2 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_3 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		Enum_t5 * L_4 = ___feature;
		NullCheck(L_3);
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, Enum_t5 * >::Invoke(4 /* System.Boolean RMX.IGameController::IsDebugging(System.Enum) */, IGameController_t2_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		Enum_t5 * L_6 = ___feature;
		String_t* L_7 = ___message;
		Log_t6  L_8 = {0};
		Log__ctor_m5(&L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____log_2 = L_8;
		return 1;
	}

IL_0031:
	{
		return 0;
	}

IL_0033:
	{
		Enum_t5 * L_9 = ___feature;
		String_t* L_10 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		Bugger_AddLateLog_m24(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Boolean RMX.Bugger::get_timesUp()
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" bool Bugger_get_timesUp_m27 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		bool L_0 = Singletons_get_GameControllerInitialized_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_1 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t2_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t13 * L_3 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		float L_5 = Time_get_fixedTime_m423(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		float L_6 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____startedAt_3;
		Object_t * L_7 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8 = (float)InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single RMX.IGameController::get_MaxDisplayTime() */, IGameController_t2_il2cpp_TypeInfo_var, L_7);
		G_B5_0 = ((((float)((float)((float)L_5-(float)L_6))) > ((float)L_8))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 0;
	}

IL_0043:
	{
		return G_B5_0;
	}
}
// System.Int32 RMX.Bugger::get_timeRemaining()
extern TypeInfo* IGameController_t2_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" int32_t Bugger_get_timeRemaining_m28 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = Singletons_get_GameControllerInitialized_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_1 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = (float)InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single RMX.IGameController::get_MaxDisplayTime() */, IGameController_t2_il2cpp_TypeInfo_var, L_1);
		float L_3 = Time_get_fixedTime_m423(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		float L_4 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____startedAt_3;
		G_B3_0 = (((int32_t)((float)((float)L_2-(float)((float)((float)L_3-(float)L_4))))));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.Void RMX.Bugger::AddToQueue(System.String)
extern TypeInfo* U3CAddToQueueU3Ec__AnonStorey9_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t158_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m20_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m452_MethodInfo_var;
extern const MethodInfo* List_1_Exists_m453_MethodInfo_var;
extern "C" void Bugger_AddToQueue_m29 (Object_t * __this /* static, unused */, String_t* ___log, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAddToQueueU3Ec__AnonStorey9_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Predicate_1_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m20_MethodInfo_var = il2cpp_codegen_method_info_from_index(8);
		Predicate_1__ctor_m452_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		List_1_Exists_m453_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		s_Il2CppMethodIntialized = true;
	}
	U3CAddToQueueU3Ec__AnonStorey9_t12 * V_0 = {0};
	{
		U3CAddToQueueU3Ec__AnonStorey9_t12 * L_0 = (U3CAddToQueueU3Ec__AnonStorey9_t12 *)il2cpp_codegen_object_new (U3CAddToQueueU3Ec__AnonStorey9_t12_il2cpp_TypeInfo_var);
		U3CAddToQueueU3Ec__AnonStorey9__ctor_m19(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddToQueueU3Ec__AnonStorey9_t12 * L_1 = V_0;
		String_t* L_2 = ___log;
		NullCheck(L_1);
		L_1->___log_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t13 * L_3 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_3);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		float L_5 = Time_get_fixedTime_m423(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->____startedAt_3 = L_5;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t13 * L_6 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		U3CAddToQueueU3Ec__AnonStorey9_t12 * L_7 = V_0;
		IntPtr_t L_8 = { (void*)U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m20_MethodInfo_var };
		Predicate_1_t158 * L_9 = (Predicate_1_t158 *)il2cpp_codegen_object_new (Predicate_1_t158_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m452(L_9, L_7, L_8, /*hidden argument*/Predicate_1__ctor_m452_MethodInfo_var);
		NullCheck(L_6);
		bool L_10 = List_1_Exists_m453(L_6, L_9, /*hidden argument*/List_1_Exists_m453_MethodInfo_var);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		List_1_t13 * L_11 = ((Bugger_t15_StaticFields*)Bugger_t15_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		U3CAddToQueueU3Ec__AnonStorey9_t12 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___log_0);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_11, L_13);
	}

IL_0051:
	{
		return;
	}
}
// System.Void RMX.Bugger::Initialize()
extern TypeInfo* ASingleton_1_t8_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m454_MethodInfo_var;
extern "C" void Bugger_Initialize_m30 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ASingleton_1_Initialize_m454_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t8_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m454(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m454_MethodInfo_var);
		return;
	}
}
// RMX.CsvReader/ReadState
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReader_ReadState.h"
#ifndef _MSC_VER
#else
#endif
// RMX.CsvReader/ReadState
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReader_ReadStateMethodDeclarations.h"



// RMX.CsvReader
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReader.h"
#ifndef _MSC_VER
#else
#endif
// RMX.CsvReader
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReaderMethodDeclarations.h"

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Func`2<System.String,System.String>
#include "System_Core_System_Func_2_gen.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Func`2<System.String,System.String>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
struct Enumerable_t159;
struct IEnumerable_1_t160;
struct Func_2_t18;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t159;
struct IEnumerable_1_t161;
struct Func_2_t162;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m456_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t162 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m456(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t162 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m456_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisString_t_TisString_t_m455(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t18 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m456_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t159;
struct StringU5BU5D_t31;
struct IEnumerable_1_t160;
struct Enumerable_t159;
struct ObjectU5BU5D_t146;
struct IEnumerable_1_t161;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t146* Enumerable_ToArray_TisObject_t_m458_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m458(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t146* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m458_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisString_t_m457(__this /* static, unused */, p0, method) (( StringU5BU5D_t31* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m458_gshared)(__this /* static, unused */, p0, method)


// System.Void RMX.CsvReader::.cctor()
extern TypeInfo* Encoding_t17_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern "C" void CsvReader__cctor_m31 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t17_il2cpp_TypeInfo_var);
		Encoding_t17 * L_0 = Encoding_GetEncoding_m459(NULL /*static, unused*/, ((int32_t)1252), /*hidden argument*/NULL);
		((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___Windows1252Encoding_2 = L_0;
		return;
	}
}
// System.String RMX.CsvReader::ToString(System.Collections.Generic.List`1<System.String>)
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t18_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* CsvReader_U3CToStringU3Em__1_m39_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m460_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisString_t_TisString_t_m455_MethodInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisString_t_m457_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" String_t* CsvReader_ToString_m32 (Object_t * __this /* static, unused */, List_1_t13 * ___record, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Func_2_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CsvReader_U3CToStringU3Em__1_m39_MethodInfo_var = il2cpp_codegen_method_info_from_index(12);
		Func_2__ctor_m460_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483661);
		Enumerable_Select_TisString_t_TisString_t_m455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		Enumerable_ToArray_TisString_t_m457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t13 * G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	List_1_t13 * G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	{
		List_1_t13 * L_0 = ___record;
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		Func_2_t18 * L_1 = ((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_3;
		G_B1_0 = L_0;
		G_B1_1 = _stringLiteral17;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = _stringLiteral17;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)CsvReader_U3CToStringU3Em__1_m39_MethodInfo_var };
		Func_2_t18 * L_3 = (Func_2_t18 *)il2cpp_codegen_object_new (Func_2_t18_il2cpp_TypeInfo_var);
		Func_2__ctor_m460(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m460_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_3 = L_3;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		Func_2_t18 * L_4 = ((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_3;
		Object_t* L_5 = Enumerable_Select_TisString_t_TisString_t_m455(NULL /*static, unused*/, G_B2_0, L_4, /*hidden argument*/Enumerable_Select_TisString_t_TisString_t_m455_MethodInfo_var);
		StringU5BU5D_t31* L_6 = Enumerable_ToArray_TisString_t_m457(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_ToArray_TisString_t_m457_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Join_m461(NULL /*static, unused*/, G_B2_1, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Parse(System.String)
extern TypeInfo* List_1_t134_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m462_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" List_1_t134 * CsvReader_Parse_m33 (Object_t * __this /* static, unused */, String_t* ___csvString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		List_1__ctor_m462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483664);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t134 * V_0 = {0};
	StringU5BU5D_t31* V_1 = {0};
	String_t* V_2 = {0};
	StringU5BU5D_t31* V_3 = {0};
	int32_t V_4 = 0;
	{
		List_1_t134 * L_0 = (List_1_t134 *)il2cpp_codegen_object_new (List_1_t134_il2cpp_TypeInfo_var);
		List_1__ctor_m462(L_0, /*hidden argument*/List_1__ctor_m462_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___csvString;
		StringU5BU5D_t31* L_2 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 2));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, _stringLiteral18);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)_stringLiteral18;
		StringU5BU5D_t31* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, _stringLiteral19);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)_stringLiteral19;
		NullCheck(L_1);
		StringU5BU5D_t31* L_4 = String_Split_m463(L_1, L_3, 1, /*hidden argument*/NULL);
		V_1 = L_4;
		StringU5BU5D_t31* L_5 = V_1;
		V_3 = L_5;
		V_4 = 0;
		goto IL_005a;
	}

IL_002e:
	{
		StringU5BU5D_t31* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8));
		String_t* L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m464(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0054;
	}

IL_0043:
	{
		List_1_t134 * L_11 = V_0;
		String_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = String_Trim_m465(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		List_1_t13 * L_14 = CsvReader_ParseLine_m38(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< List_1_t13 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(!0) */, L_11, L_14);
	}

IL_0054:
	{
		int32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_16 = V_4;
		StringU5BU5D_t31* L_17 = V_3;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		List_1_t134 * L_18 = V_0;
		return L_18;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(UnityEngine.TextAsset)
extern TypeInfo* NullReferenceException_t154_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t163_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t134_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m462_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral20;
extern "C" List_1_t134 * CsvReader_Read_m34 (Object_t * __this /* static, unused */, TextAsset_t135 * ___file, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		CharU5BU5D_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		List_1_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		List_1__ctor_m462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483664);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t31* V_0 = {0};
	List_1_t134 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	List_1_t13 * V_4 = {0};
	{
		TextAsset_t135 * L_0 = ___file;
		bool L_1 = Object_op_Equality_m466(NULL /*static, unused*/, L_0, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullReferenceException_t154 * L_2 = (NullReferenceException_t154 *)il2cpp_codegen_object_new (NullReferenceException_t154_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m448(L_2, _stringLiteral20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		TextAsset_t135 * L_3 = ___file;
		NullCheck(L_3);
		String_t* L_4 = TextAsset_get_text_m467(L_3, /*hidden argument*/NULL);
		CharU5BU5D_t163* L_5 = ((CharU5BU5D_t163*)SZArrayNew(CharU5BU5D_t163_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_4);
		StringU5BU5D_t31* L_6 = String_Split_m468(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t134 * L_7 = (List_1_t134 *)il2cpp_codegen_object_new (List_1_t134_il2cpp_TypeInfo_var);
		List_1__ctor_m462(L_7, /*hidden argument*/List_1__ctor_m462_MethodInfo_var);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0053;
	}

IL_003b:
	{
		StringU5BU5D_t31* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_8, L_10));
		String_t* L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		List_1_t13 * L_12 = CsvReader_ParseLine_m38(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		List_1_t134 * L_13 = V_1;
		List_1_t13 * L_14 = V_4;
		NullCheck(L_13);
		VirtActionInvoker1< List_1_t13 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(!0) */, L_13, L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = V_2;
		StringU5BU5D_t31* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		List_1_t134 * L_18 = V_1;
		return L_18;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(System.String)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern "C" List_1_t134 * CsvReader_Read_m35 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.List`1<System.String> RMX.CsvReader::ReadLine(System.IO.StreamReader)
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern "C" List_1_t13 * CsvReader_ReadLine_m36 (Object_t * __this /* static, unused */, StreamReader_t136 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*)NULL;
		StreamReader_t136 * L_0 = ___reader;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.StreamReader::ReadLine() */, L_0);
		String_t* L_2 = L_1;
		V_0 = L_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		List_1_t13 * L_4 = CsvReader_ParseLine_m38(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0016:
	{
		return (List_1_t13 *)NULL;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(System.String,System.Text.Encoding)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" List_1_t134 * CsvReader_Read_m37 (Object_t * __this /* static, unused */, String_t* ___path, Encoding_t17 * ___encoding, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.List`1<System.String> RMX.CsvReader::ParseLine(System.String)
extern TypeInfo* List_1_t13_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t164_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t165_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m442_MethodInfo_var;
extern const MethodInfo* Nullable_1__ctor_m472_MethodInfo_var;
extern const MethodInfo* Nullable_1_GetValueOrDefault_m476_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m477_MethodInfo_var;
extern "C" List_1_t13 * CsvReader_ParseLine_m38 (Object_t * __this /* static, unused */, String_t* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		StringBuilder_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Nullable_1_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		List_1__ctor_m442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Nullable_1__ctor_m472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		Nullable_1_GetValueOrDefault_m476_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		Nullable_1_get_HasValue_m477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483667);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t13 * V_0 = {0};
	StringBuilder_t164 * V_1 = {0};
	uint16_t V_2 = 0x0;
	Nullable_1_t165  V_3 = {0};
	int32_t V_4 = {0};
	int32_t V_5 = 0;
	Nullable_1_t165  V_6 = {0};
	Nullable_1_t165  V_7 = {0};
	int32_t V_8 = {0};
	Nullable_1_t165  G_B4_0 = {0};
	int32_t G_B17_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B30_0 = 0;
	{
		List_1_t13 * L_0 = (List_1_t13 *)il2cpp_codegen_object_new (List_1_t13_il2cpp_TypeInfo_var);
		List_1__ctor_m442(L_0, /*hidden argument*/List_1__ctor_m442_MethodInfo_var);
		V_0 = L_0;
		StringBuilder_t164 * L_1 = (StringBuilder_t164 *)il2cpp_codegen_object_new (StringBuilder_t164_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m469(L_1, ((int32_t)1024), /*hidden argument*/NULL);
		V_1 = L_1;
		Initobj (Nullable_1_t165_il2cpp_TypeInfo_var, (&V_6));
		Nullable_1_t165  L_2 = V_6;
		V_3 = L_2;
		V_4 = 0;
		V_5 = 0;
		goto IL_019c;
	}

IL_0027:
	{
		String_t* L_3 = ___line;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m470(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_5;
		String_t* L_7 = ___line;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m471(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)1)))))
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_9 = ___line;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m470(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/NULL);
		Nullable_1_t165  L_12 = {0};
		Nullable_1__ctor_m472(&L_12, L_11, /*hidden argument*/Nullable_1__ctor_m472_MethodInfo_var);
		G_B4_0 = L_12;
		goto IL_005d;
	}

IL_0053:
	{
		Initobj (Nullable_1_t165_il2cpp_TypeInfo_var, (&V_7));
		Nullable_1_t165  L_13 = V_7;
		G_B4_0 = L_13;
	}

IL_005d:
	{
		V_3 = G_B4_0;
		int32_t L_14 = V_4;
		V_8 = L_14;
		int32_t L_15 = V_8;
		if (L_15 == 0)
		{
			goto IL_007a;
		}
		if (L_15 == 1)
		{
			goto IL_00bd;
		}
		if (L_15 == 2)
		{
			goto IL_0127;
		}
	}
	{
		goto IL_0196;
	}

IL_007a:
	{
		StringBuilder_t164 * L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_set_Length_m473(L_16, 0, /*hidden argument*/NULL);
		uint16_t L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0091;
		}
	}
	{
		V_4 = 2;
		goto IL_0196;
	}

IL_0091:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t13 * L_19 = V_0;
		StringBuilder_t164 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = StringBuilder_ToString_m474(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_19, L_21);
		V_4 = 0;
		goto IL_0196;
	}

IL_00ad:
	{
		StringBuilder_t164 * L_22 = V_1;
		uint16_t L_23 = V_2;
		NullCheck(L_22);
		StringBuilder_Append_m475(L_22, L_23, /*hidden argument*/NULL);
		V_4 = 1;
		goto IL_0196;
	}

IL_00bd:
	{
		uint16_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_00e5;
		}
	}
	{
		V_4 = 0;
		List_1_t13 * L_25 = V_0;
		StringBuilder_t164 * L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27 = StringBuilder_ToString_m474(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28 = String_Trim_m465(L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_25, L_28);
		StringBuilder_t164 * L_29 = V_1;
		NullCheck(L_29);
		StringBuilder_set_Length_m473(L_29, 0, /*hidden argument*/NULL);
		goto IL_0196;
	}

IL_00e5:
	{
		uint16_t L_30 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_011a;
		}
	}
	{
		uint16_t L_31 = Nullable_1_GetValueOrDefault_m476((&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m476_MethodInfo_var);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0101;
		}
	}
	{
		bool L_32 = Nullable_1_get_HasValue_m477((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m477_MethodInfo_var);
		G_B17_0 = ((int32_t)(L_32));
		goto IL_0102;
	}

IL_0101:
	{
		G_B17_0 = 0;
	}

IL_0102:
	{
		if (!G_B17_0)
		{
			goto IL_011a;
		}
	}
	{
		StringBuilder_t164 * L_33 = V_1;
		uint16_t L_34 = V_2;
		NullCheck(L_33);
		StringBuilder_Append_m475(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_5;
		V_5 = ((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_0196;
	}

IL_011a:
	{
		StringBuilder_t164 * L_36 = V_1;
		uint16_t L_37 = V_2;
		NullCheck(L_36);
		StringBuilder_Append_m475(L_36, L_37, /*hidden argument*/NULL);
		goto IL_0196;
	}

IL_0127:
	{
		uint16_t L_38 = V_2;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0154;
		}
	}
	{
		uint16_t L_39 = Nullable_1_GetValueOrDefault_m476((&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m476_MethodInfo_var);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0146;
		}
	}
	{
		bool L_40 = Nullable_1_get_HasValue_m477((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m477_MethodInfo_var);
		G_B24_0 = ((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		goto IL_0147;
	}

IL_0146:
	{
		G_B24_0 = 1;
	}

IL_0147:
	{
		if (!G_B24_0)
		{
			goto IL_0154;
		}
	}
	{
		V_4 = 1;
		goto IL_0196;
	}

IL_0154:
	{
		uint16_t L_41 = V_2;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0189;
		}
	}
	{
		uint16_t L_42 = Nullable_1_GetValueOrDefault_m476((&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m476_MethodInfo_var);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0170;
		}
	}
	{
		bool L_43 = Nullable_1_get_HasValue_m477((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m477_MethodInfo_var);
		G_B30_0 = ((int32_t)(L_43));
		goto IL_0171;
	}

IL_0170:
	{
		G_B30_0 = 0;
	}

IL_0171:
	{
		if (!G_B30_0)
		{
			goto IL_0189;
		}
	}
	{
		StringBuilder_t164 * L_44 = V_1;
		uint16_t L_45 = V_2;
		NullCheck(L_44);
		StringBuilder_Append_m475(L_44, L_45, /*hidden argument*/NULL);
		int32_t L_46 = V_5;
		V_5 = ((int32_t)((int32_t)L_46+(int32_t)1));
		goto IL_0196;
	}

IL_0189:
	{
		StringBuilder_t164 * L_47 = V_1;
		uint16_t L_48 = V_2;
		NullCheck(L_47);
		StringBuilder_Append_m475(L_47, L_48, /*hidden argument*/NULL);
		goto IL_0196;
	}

IL_0196:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_019c:
	{
		int32_t L_50 = V_5;
		String_t* L_51 = ___line;
		NullCheck(L_51);
		int32_t L_52 = String_get_Length_m471(L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0027;
		}
	}
	{
		List_1_t13 * L_53 = V_0;
		StringBuilder_t164 * L_54 = V_1;
		NullCheck(L_54);
		String_t* L_55 = StringBuilder_ToString_m474(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		String_t* L_56 = String_Trim_m465(L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_53, L_56);
		List_1_t13 * L_57 = V_0;
		return L_57;
	}
}
// System.String RMX.CsvReader::<ToString>m__1(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral25;
extern "C" String_t* CsvReader_U3CToStringU3Em__1_m39 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m478(L_0, _stringLiteral24, _stringLiteral25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m479(NULL /*static, unused*/, _stringLiteral23, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// RMX.CsvRecord
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvRecord.h"
#ifndef _MSC_VER
#else
#endif
// RMX.CsvRecord
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvRecordMethodDeclarations.h"



// System.Void RMX.CsvRecord::.ctor()
extern TypeInfo* List_1_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m442_MethodInfo_var;
extern "C" void CsvRecord__ctor_m40 (CsvRecord_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		List_1__ctor_m442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t13_il2cpp_TypeInfo_var);
		List_1__ctor_m442(__this, /*hidden argument*/List_1__ctor_m442_MethodInfo_var);
		return;
	}
}
// System.String RMX.CsvRecord::ToString()
extern TypeInfo* CsvRecord_t20_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t18_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* CsvRecord_U3CToStringU3Em__2_m42_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m460_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisString_t_TisString_t_m455_MethodInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisString_t_m457_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" String_t* CsvRecord_ToString_m41 (CsvRecord_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CsvRecord_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Func_2_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CsvRecord_U3CToStringU3Em__2_m42_MethodInfo_var = il2cpp_codegen_method_info_from_index(20);
		Func_2__ctor_m460_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483661);
		Enumerable_Select_TisString_t_TisString_t_m455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		Enumerable_ToArray_TisString_t_m457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	CsvRecord_t20 * G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	CsvRecord_t20 * G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	{
		Func_2_t18 * L_0 = ((CsvRecord_t20_StaticFields*)CsvRecord_t20_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_5;
		G_B1_0 = __this;
		G_B1_1 = _stringLiteral17;
		if (L_0)
		{
			G_B2_0 = __this;
			G_B2_1 = _stringLiteral17;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = { (void*)CsvRecord_U3CToStringU3Em__2_m42_MethodInfo_var };
		Func_2_t18 * L_2 = (Func_2_t18 *)il2cpp_codegen_object_new (Func_2_t18_il2cpp_TypeInfo_var);
		Func_2__ctor_m460(L_2, NULL, L_1, /*hidden argument*/Func_2__ctor_m460_MethodInfo_var);
		((CsvRecord_t20_StaticFields*)CsvRecord_t20_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_5 = L_2;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		Func_2_t18 * L_3 = ((CsvRecord_t20_StaticFields*)CsvRecord_t20_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_5;
		Object_t* L_4 = Enumerable_Select_TisString_t_TisString_t_m455(NULL /*static, unused*/, G_B2_0, L_3, /*hidden argument*/Enumerable_Select_TisString_t_TisString_t_m455_MethodInfo_var);
		StringU5BU5D_t31* L_5 = Enumerable_ToArray_TisString_t_m457(NULL /*static, unused*/, L_4, /*hidden argument*/Enumerable_ToArray_TisString_t_m457_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Join_m461(NULL /*static, unused*/, G_B2_1, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String RMX.CsvRecord::<ToString>m__2(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral25;
extern "C" String_t* CsvRecord_U3CToStringU3Em__2_m42 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m478(L_0, _stringLiteral24, _stringLiteral25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m479(NULL /*static, unused*/, _stringLiteral23, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
#ifndef _MSC_VER
#else
#endif
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatusMethodDeclarations.h"



// RMX.Event
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Event.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Event
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventMethodDeclarations.h"



// RMX.Examples.MyTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_MyTests.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Examples.MyTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_MyTestsMethodDeclarations.h"



// RMX.Examples.GameControllerExample
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_GameControllerExa.h"
#ifndef _MSC_VER
#else
#endif
// RMX.Examples.GameControllerExample
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_GameControllerExaMethodDeclarations.h"

// RMX.AGameController`1<RMX.Examples.GameControllerExample>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// RMX.AGameController`1<RMX.Examples.GameControllerExample>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_genMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"


// System.Void RMX.Examples.GameControllerExample::.ctor()
extern const MethodInfo* AGameController_1__ctor_m480_MethodInfo_var;
extern "C" void GameControllerExample__ctor_m43 (GameControllerExample_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AGameController_1__ctor_m480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483669);
		s_Il2CppMethodIntialized = true;
	}
	{
		AGameController_1__ctor_m480(__this, /*hidden argument*/AGameController_1__ctor_m480_MethodInfo_var);
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::PreStart()
extern "C" void GameControllerExample_PreStart_m44 (GameControllerExample_t24 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::PostStart()
extern "C" void GameControllerExample_PostStart_m45 (GameControllerExample_t24 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::StartSingletons()
extern "C" void GameControllerExample_StartSingletons_m46 (GameControllerExample_t24 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::StartDesktop()
extern "C" void GameControllerExample_StartDesktop_m47 (GameControllerExample_t24 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::StartMobile()
extern "C" void GameControllerExample_StartMobile_m48 (GameControllerExample_t24 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::Patch()
extern "C" void GameControllerExample_Patch_m49 (GameControllerExample_t24 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean RMX.Examples.GameControllerExample::IsDebugging(System.Enum)
extern TypeInfo* MyTests_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* AGameController_1_IsDebugging_m481_MethodInfo_var;
extern "C" bool GameControllerExample_IsDebugging_m50 (GameControllerExample_t24 * __this, Enum_t5 * ___feature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MyTests_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		AGameController_1_IsDebugging_m481_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483670);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___feature;
		int32_t L_1 = 0;
		Object_t * L_2 = Box(MyTests_t23_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		bool L_4 = (__this->___DebugCustomTest_28);
		return L_4;
	}

IL_0018:
	{
		Enum_t5 * L_5 = ___feature;
		bool L_6 = AGameController_1_IsDebugging_m481(__this, L_5, /*hidden argument*/AGameController_1_IsDebugging_m481_MethodInfo_var);
		return L_6;
	}
}
// System.Void RMX.Examples.GameControllerExample::PauseGame(System.Boolean,System.Object)
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" void GameControllerExample_PauseGame_m51 (GameControllerExample_t24 * __this, bool ___pause, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m482(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenter.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.List`1/Enumerator<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// System.Collections.Generic.List`1<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"


// System.Void RMX.NotificationCenter::.cctor()
extern TypeInfo* List_1_t26_il2cpp_TypeInfo_var;
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t27_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m483_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m484_MethodInfo_var;
extern "C" void NotificationCenter__cctor_m52 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Dictionary_2_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		List_1__ctor_m483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483671);
		Dictionary_2__ctor_m484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t26 * L_0 = (List_1_t26 *)il2cpp_codegen_object_new (List_1_t26_il2cpp_TypeInfo_var);
		List_1__ctor_m483(L_0, /*hidden argument*/List_1__ctor_m483_MethodInfo_var);
		((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0 = L_0;
		Dictionary_2_t27 * L_1 = (Dictionary_2_t27 *)il2cpp_codegen_object_new (Dictionary_2_t27_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m484(L_1, /*hidden argument*/Dictionary_2__ctor_m484_MethodInfo_var);
		((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1 = L_1;
		return;
	}
}
// System.Boolean RMX.NotificationCenter::HasListener(RMX.EventListener)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_HasListener_m53 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.EventListener>::Contains(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void RMX.NotificationCenter::Reset(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_Reset_m54 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t27 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t5 * L_1 = ___theEvent;
		NullCheck(L_0);
		VirtActionInvoker2< Enum_t5 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, L_0, L_1, 2);
		return;
	}
}
// System.Void RMX.NotificationCenter::AddListener(RMX.EventListener)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern "C" void NotificationCenter_AddListener_m55 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.EventListener>::Contains(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_3 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		Object_t * L_4 = ___listener;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.EventListener>::Add(!0) */, L_3, L_4);
		int32_t L_5 = 7;
		Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
		ObjectU5BU5D_t146* L_7 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 4));
		Object_t * L_8 = ___listener;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m485(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_9;
		ObjectU5BU5D_t146* L_10 = L_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, _stringLiteral26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1)) = (Object_t *)_stringLiteral26;
		ObjectU5BU5D_t146* L_11 = L_10;
		List_1_t26 * L_12 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RMX.EventListener>::get_Count() */, L_12);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 2)) = (Object_t *)L_15;
		ObjectU5BU5D_t146* L_16 = L_11;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 3);
		ArrayElementTypeCheck (L_16, _stringLiteral27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 3)) = (Object_t *)_stringLiteral27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m418(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		bool L_18 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_6, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
		String_t* L_19 = Bugger_get_Last_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void RMX.NotificationCenter::RemoveListener(RMX.EventListener)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t137_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" void NotificationCenter_RemoveListener_m56 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		EventListener_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.EventListener>::Contains(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_3 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		Object_t * L_4 = ___listener;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<RMX.EventListener>::Remove(!0) */, L_3, L_4);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_6 = ___listener;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String RMX.EventListener::get_name() */, EventListener_t137_il2cpp_TypeInfo_var, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m419(NULL /*static, unused*/, L_7, _stringLiteral28, /*hidden argument*/NULL);
		Exception_t143 * L_9 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0036:
	{
		return;
	}
}
// RMX.EventStatus RMX.NotificationCenter::StatusOf(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" int32_t NotificationCenter_StatusOf_m57 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t27 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t5 * L_1 = ___theEvent;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Enum_t5 * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t27 * L_3 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t5 * L_4 = ___theEvent;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Enum_t5 * >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::get_Item(!0) */, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 2;
	}

IL_0021:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Boolean RMX.NotificationCenter::IsIdle(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_IsIdle_m58 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		int32_t L_1 = NotificationCenter_StatusOf_m57(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean RMX.NotificationCenter::IsActive(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_IsActive_m59 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		int32_t L_1 = NotificationCenter_StatusOf_m57(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void RMX.NotificationCenter::EventDidOccur(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_EventDidOccur_m60 (Object_t * __this /* static, unused */, Enum_t5 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___e;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m61(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.NotificationCenter::EventDidOccur(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t137_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t167_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m486_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m487_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m488_MethodInfo_var;
extern "C" void NotificationCenter_EventDidOccur_m61 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		EventStatus_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		EventListener_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Enumerator_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		Enumerator_get_Current_m487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		Enumerator_MoveNext_m488_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t167  V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Enum_t5 * G_B2_0 = {0};
	Dictionary_2_t27 * G_B2_1 = {0};
	Enum_t5 * G_B1_0 = {0};
	Dictionary_2_t27 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	Enum_t5 * G_B3_1 = {0};
	Dictionary_2_t27 * G_B3_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t27 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t5 * L_1 = ___theEvent;
		Object_t * L_2 = ___o;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!((Object_t *)IsInst(L_2, EventStatus_t21_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001c;
		}
	}
	{
		Object_t * L_3 = ___o;
		G_B3_0 = ((*(int32_t*)((int32_t*)UnBox (L_3, Int32_t149_il2cpp_TypeInfo_var))));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001d:
	{
		NullCheck(G_B3_2);
		VirtActionInvoker2< Enum_t5 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, G_B3_2, G_B3_1, G_B3_0);
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_4 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_4);
		Enumerator_t167  L_5 = List_1_GetEnumerator_m486(L_4, /*hidden argument*/List_1_GetEnumerator_m486_MethodInfo_var);
		V_1 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0032:
		{
			Object_t * L_6 = Enumerator_get_Current_m487((&V_1), /*hidden argument*/Enumerator_get_Current_m487_MethodInfo_var);
			V_0 = L_6;
			Object_t * L_7 = V_0;
			Enum_t5 * L_8 = ___theEvent;
			Object_t * L_9 = ___o;
			NullCheck(L_7);
			InterfaceActionInvoker2< Enum_t5 *, Object_t * >::Invoke(0 /* System.Void RMX.EventListener::OnEvent(System.Enum,System.Object) */, EventListener_t137_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		}

IL_0042:
		{
			bool L_10 = Enumerator_MoveNext_m488((&V_1), /*hidden argument*/Enumerator_MoveNext_m488_MethodInfo_var);
			if (L_10)
			{
				goto IL_0032;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t167  L_11 = V_1;
		Enumerator_t167  L_12 = L_11;
		Object_t * L_13 = Box(Enumerator_t167_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_13);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean RMX.NotificationCenter::WasCompleted(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_WasCompleted_m62 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		int32_t L_1 = NotificationCenter_StatusOf_m57(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void RMX.NotificationCenter::EventWillStart(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_EventWillStart_m63 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m64(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.NotificationCenter::EventWillStart(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t137_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t167_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m486_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m487_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m488_MethodInfo_var;
extern "C" void NotificationCenter_EventWillStart_m64 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		EventStatus_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		EventListener_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Enumerator_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		Enumerator_get_Current_m487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		Enumerator_MoveNext_m488_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t167  V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Enum_t5 * G_B3_0 = {0};
	Dictionary_2_t27 * G_B3_1 = {0};
	Enum_t5 * G_B2_0 = {0};
	Dictionary_2_t27 * G_B2_1 = {0};
	int32_t G_B4_0 = 0;
	Enum_t5 * G_B4_1 = {0};
	Dictionary_2_t27 * G_B4_2 = {0};
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		bool L_1 = NotificationCenter_IsActive_m59(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t27 * L_2 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t5 * L_3 = ___theEvent;
		Object_t * L_4 = ___o;
		G_B2_0 = L_3;
		G_B2_1 = L_2;
		if (!((Object_t *)IsInst(L_4, EventStatus_t21_il2cpp_TypeInfo_var)))
		{
			G_B3_0 = L_3;
			G_B3_1 = L_2;
			goto IL_0027;
		}
	}
	{
		Object_t * L_5 = ___o;
		G_B4_0 = ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t149_il2cpp_TypeInfo_var))));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0028:
	{
		NullCheck(G_B4_2);
		VirtActionInvoker2< Enum_t5 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, G_B4_2, G_B4_1, G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_6 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_6);
		Enumerator_t167  L_7 = List_1_GetEnumerator_m486(L_6, /*hidden argument*/List_1_GetEnumerator_m486_MethodInfo_var);
		V_1 = L_7;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_003d:
		{
			Object_t * L_8 = Enumerator_get_Current_m487((&V_1), /*hidden argument*/Enumerator_get_Current_m487_MethodInfo_var);
			V_0 = L_8;
			Object_t * L_9 = V_0;
			Enum_t5 * L_10 = ___theEvent;
			Object_t * L_11 = ___o;
			NullCheck(L_9);
			InterfaceActionInvoker2< Enum_t5 *, Object_t * >::Invoke(1 /* System.Void RMX.EventListener::OnEventDidStart(System.Enum,System.Object) */, EventListener_t137_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		}

IL_004d:
		{
			bool L_12 = Enumerator_MoveNext_m488((&V_1), /*hidden argument*/Enumerator_MoveNext_m488_MethodInfo_var);
			if (L_12)
			{
				goto IL_003d;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		Enumerator_t167  L_13 = V_1;
		Enumerator_t167  L_14 = L_13;
		Object_t * L_15 = Box(Enumerator_t167_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_15);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_006a:
	{
		return;
	}
}
// System.Void RMX.NotificationCenter::EventDidEnd(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_EventDidEnd_m65 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidEnd_m66(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.NotificationCenter::EventDidEnd(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t137_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t167_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m486_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m487_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m488_MethodInfo_var;
extern "C" void NotificationCenter_EventDidEnd_m66 (Object_t * __this /* static, unused */, Enum_t5 * ___theEvent, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		EventStatus_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		EventListener_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Enumerator_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		Enumerator_get_Current_m487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		Enumerator_MoveNext_m488_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t167  V_1 = {0};
	int32_t V_2 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Enum_t5 * G_B2_0 = {0};
	Dictionary_2_t27 * G_B2_1 = {0};
	Enum_t5 * G_B1_0 = {0};
	Dictionary_2_t27 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	Enum_t5 * G_B3_1 = {0};
	Dictionary_2_t27 * G_B3_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t27 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t5 * L_1 = ___theEvent;
		Object_t * L_2 = ___o;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!((Object_t *)IsInst(L_2, EventStatus_t21_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001c;
		}
	}
	{
		Object_t * L_3 = ___o;
		G_B3_0 = ((*(int32_t*)((int32_t*)UnBox (L_3, Int32_t149_il2cpp_TypeInfo_var))));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001d:
	{
		V_2 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t27 * L_4 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t5 * L_5 = ___theEvent;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		VirtActionInvoker2< Enum_t5 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, L_4, L_5, L_6);
		int32_t L_7 = V_2;
		NullCheck(G_B3_2);
		VirtActionInvoker2< Enum_t5 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, G_B3_2, G_B3_1, L_7);
		List_1_t26 * L_8 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_8);
		Enumerator_t167  L_9 = List_1_GetEnumerator_m486(L_8, /*hidden argument*/List_1_GetEnumerator_m486_MethodInfo_var);
		V_1 = L_9;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0040:
		{
			Object_t * L_10 = Enumerator_get_Current_m487((&V_1), /*hidden argument*/Enumerator_get_Current_m487_MethodInfo_var);
			V_0 = L_10;
			Object_t * L_11 = V_0;
			Enum_t5 * L_12 = ___theEvent;
			Object_t * L_13 = ___o;
			NullCheck(L_11);
			InterfaceActionInvoker2< Enum_t5 *, Object_t * >::Invoke(2 /* System.Void RMX.EventListener::OnEventDidEnd(System.Enum,System.Object) */, EventListener_t137_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		}

IL_0050:
		{
			bool L_14 = Enumerator_MoveNext_m488((&V_1), /*hidden argument*/Enumerator_MoveNext_m488_MethodInfo_var);
			if (L_14)
			{
				goto IL_0040;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_t167  L_15 = V_1;
		Enumerator_t167  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t167_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_006d:
	{
		return;
	}
}
// System.Void RMX.NotificationCenter::NotifyListeners(System.String)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t137_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t167_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m486_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m487_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m488_MethodInfo_var;
extern "C" void NotificationCenter_NotifyListeners_m67 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		EventListener_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Enumerator_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		Enumerator_get_Current_m487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		Enumerator_MoveNext_m488_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t167  V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t26 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_0);
		Enumerator_t167  L_1 = List_1_GetEnumerator_m486(L_0, /*hidden argument*/List_1_GetEnumerator_m486_MethodInfo_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0010:
		{
			Object_t * L_2 = Enumerator_get_Current_m487((&V_1), /*hidden argument*/Enumerator_get_Current_m487_MethodInfo_var);
			V_0 = L_2;
			Object_t * L_3 = V_0;
			String_t* L_4 = ___message;
			NullCheck(L_3);
			InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void RMX.EventListener::SendMessage(System.String,UnityEngine.SendMessageOptions) */, EventListener_t137_il2cpp_TypeInfo_var, L_3, L_4, 1);
		}

IL_0020:
		{
			bool L_5 = Enumerator_MoveNext_m488((&V_1), /*hidden argument*/Enumerator_MoveNext_m488_MethodInfo_var);
			if (L_5)
			{
				goto IL_0010;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_t167  L_6 = V_1;
		Enumerator_t167  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t167_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_8);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_003d:
	{
		return;
	}
}
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObject.h"
#ifndef _MSC_VER
#else
#endif
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Collections.Generic.List`1<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// System.Collections.Generic.List`1/Enumerator<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"


// System.Void RMX.RMXObject::.ctor()
extern TypeInfo* Dictionary_2_t29_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m489_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m490_MethodInfo_var;
extern "C" void RMXObject__ctor_m68 (RMXObject_t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		List_1_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Dictionary_2__ctor_m489_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		List_1__ctor_m490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t29 * L_0 = (Dictionary_2_t29 *)il2cpp_codegen_object_new (Dictionary_2_t29_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m489(L_0, /*hidden argument*/Dictionary_2__ctor_m489_MethodInfo_var);
		__this->___values_2 = L_0;
		List_1_t30 * L_1 = (List_1_t30 *)il2cpp_codegen_object_new (List_1_t30_il2cpp_TypeInfo_var);
		List_1__ctor_m490(L_1, /*hidden argument*/List_1__ctor_m490_MethodInfo_var);
		__this->___observers_3 = L_1;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::.cctor()
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* RMXObject_t32_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral31;
extern "C" void RMXObject__cctor_m69 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		RMXObject_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t31* L_0 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral29);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral29;
		StringU5BU5D_t31* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral30);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)_stringLiteral30;
		StringU5BU5D_t31* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral31);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)_stringLiteral31;
		((RMXObject_t32_StaticFields*)RMXObject_t32_il2cpp_TypeInfo_var->static_fields)->___ListenerMethods_4 = L_2;
		return;
	}
}
// System.Boolean RMX.RMXObject::get_AddToGlobalListeners()
extern const Il2CppType* RMXObject_t32_0_0_0_var;
extern TypeInfo* RMXObject_t32_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool RMXObject_get_AddToGlobalListeners_m70 (RMXObject_t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXObject_t32_0_0_0_var = il2cpp_codegen_type_from_index(49);
		RMXObject_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	StringU5BU5D_t31* V_2 = {0};
	int32_t V_3 = 0;
	MethodInfo_t * V_4 = {0};
	{
		Type_t * L_0 = Object_GetType_m485(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t32_il2cpp_TypeInfo_var);
		StringU5BU5D_t31* L_1 = ((RMXObject_t32_StaticFields*)RMXObject_t32_il2cpp_TypeInfo_var->static_fields)->___ListenerMethods_4;
		V_2 = L_1;
		V_3 = 0;
		goto IL_003d;
	}

IL_0014:
	{
		StringU5BU5D_t31* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		MethodInfo_t * L_7 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_5, L_6);
		V_4 = L_7;
		MethodInfo_t * L_8 = V_4;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(RMXObject_t32_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10)))
		{
			goto IL_0039;
		}
	}
	{
		return 1;
	}

IL_0039:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_12 = V_3;
		StringU5BU5D_t31* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Void RMX.RMXObject::Awake()
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_Awake_m71 (RMXObject_t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = RMXObject_get_AddToGlobalListeners_m70(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_AddListener_m55(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void RMX.RMXObject::WillBeginEvent(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_WillBeginEvent_m72 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m63(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidUpdateEvent(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidUpdateEvent_m73 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m63(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidFinishEvent(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidFinishEvent_m74 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidEnd_m65(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidCauseEvent(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidCauseEvent_m75 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m60(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::WillBeginEvent(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_WillBeginEvent_m76 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m64(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidUpdateEvent(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidUpdateEvent_m77 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m64(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidFinishEvent(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidFinishEvent_m78 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidEnd_m66(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidCauseEvent(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidCauseEvent_m79 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m61(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::WillChangeValueForKey(System.String)
extern TypeInfo* KeyValueObserver_t138_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t168_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m493_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m494_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m495_MethodInfo_var;
extern "C" void RMXObject_WillChangeValueForKey_m80 (RMXObject_t32 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValueObserver_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Enumerator_t168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Enumerator_get_Current_m494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Enumerator_MoveNext_m495_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t168  V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t30 * L_0 = (__this->___observers_3);
		NullCheck(L_0);
		Enumerator_t168  L_1 = List_1_GetEnumerator_m493(L_0, /*hidden argument*/List_1_GetEnumerator_m493_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0011:
		{
			Object_t * L_2 = Enumerator_get_Current_m494((&V_1), /*hidden argument*/Enumerator_get_Current_m494_MethodInfo_var);
			V_0 = L_2;
			Object_t * L_3 = V_0;
			String_t* L_4 = ___key;
			Dictionary_2_t29 * L_5 = (__this->___values_2);
			String_t* L_6 = ___key;
			NullCheck(L_5);
			Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, L_6);
			NullCheck(L_3);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void RMX.KeyValueObserver::OnValueForKeyWillChange(System.String,System.Object) */, KeyValueObserver_t138_il2cpp_TypeInfo_var, L_3, L_4, L_7);
		}

IL_002c:
		{
			bool L_8 = Enumerator_MoveNext_m495((&V_1), /*hidden argument*/Enumerator_MoveNext_m495_MethodInfo_var);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_t168  L_9 = V_1;
		Enumerator_t168  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t168_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_0049:
	{
		return;
	}
}
// System.Void RMX.RMXObject::DidChangeValueForKey(System.String)
extern TypeInfo* KeyValueObserver_t138_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t168_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m493_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m494_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m495_MethodInfo_var;
extern "C" void RMXObject_DidChangeValueForKey_m81 (RMXObject_t32 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValueObserver_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Enumerator_t168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Enumerator_get_Current_m494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Enumerator_MoveNext_m495_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t168  V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t30 * L_0 = (__this->___observers_3);
		NullCheck(L_0);
		Enumerator_t168  L_1 = List_1_GetEnumerator_m493(L_0, /*hidden argument*/List_1_GetEnumerator_m493_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0011:
		{
			Object_t * L_2 = Enumerator_get_Current_m494((&V_1), /*hidden argument*/Enumerator_get_Current_m494_MethodInfo_var);
			V_0 = L_2;
			Object_t * L_3 = V_0;
			String_t* L_4 = ___key;
			Dictionary_2_t29 * L_5 = (__this->___values_2);
			String_t* L_6 = ___key;
			NullCheck(L_5);
			Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, L_6);
			NullCheck(L_3);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(1 /* System.Void RMX.KeyValueObserver::OnValueForKeyDidChange(System.String,System.Object) */, KeyValueObserver_t138_il2cpp_TypeInfo_var, L_3, L_4, L_7);
		}

IL_002c:
		{
			bool L_8 = Enumerator_MoveNext_m495((&V_1), /*hidden argument*/Enumerator_MoveNext_m495_MethodInfo_var);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_t168  L_9 = V_1;
		Enumerator_t168  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t168_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_0049:
	{
		return;
	}
}
// System.Void RMX.RMXObject::setValue(System.String,System.Object)
extern "C" void RMXObject_setValue_m82 (RMXObject_t32 * __this, String_t* ___forKey, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->___values_2);
		String_t* L_1 = ___forKey;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		Object_t * L_3 = ___value;
		if ((((Object_t*)(Object_t *)L_2) == ((Object_t*)(Object_t *)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_t29 * L_4 = (__this->___values_2);
		String_t* L_5 = ___forKey;
		Object_t * L_6 = ___value;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, L_5, L_6);
		String_t* L_7 = ___forKey;
		RMXObject_DidChangeValueForKey_m81(__this, L_7, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Object RMX.RMXObject::getValue(System.String)
extern "C" Object_t * RMXObject_getValue_m83 (RMXObject_t32 * __this, String_t* ___forKey, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->___values_2);
		String_t* L_1 = ___forKey;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void RMX.RMXObject::AddObserver(RMX.KeyValueObserver)
extern "C" void RMXObject_AddObserver_m84 (RMXObject_t32 * __this, Object_t * ___observer, const MethodInfo* method)
{
	{
		List_1_t30 * L_0 = (__this->___observers_3);
		Object_t * L_1 = ___observer;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Contains(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t30 * L_3 = (__this->___observers_3);
		Object_t * L_4 = ___observer;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.KeyValueObserver>::Add(!0) */, L_3, L_4);
	}

IL_001d:
	{
		return;
	}
}
// System.Void RMX.RMXObject::RemoveObserver(RMX.KeyValueObserver)
extern "C" void RMXObject_RemoveObserver_m85 (RMXObject_t32 * __this, Object_t * ___observer, const MethodInfo* method)
{
	{
		List_1_t30 * L_0 = (__this->___observers_3);
		Object_t * L_1 = ___observer;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Contains(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t30 * L_3 = (__this->___observers_3);
		Object_t * L_4 = ___observer;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Remove(!0) */, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnValueForKeyWillChange(System.String,System.Object)
extern "C" void RMXObject_OnValueForKeyWillChange_m86 (RMXObject_t32 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnValueForKeyDidChange(System.String,System.Object)
extern "C" void RMXObject_OnValueForKeyDidChange_m87 (RMXObject_t32 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnEvent(System.Enum,System.Object)
extern "C" void RMXObject_OnEvent_m88 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnEventDidStart(System.Enum,System.Object)
extern "C" void RMXObject_OnEventDidStart_m89 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnEventDidEnd(System.Enum,System.Object)
extern "C" void RMXObject_OnEventDidEnd_m90 (RMXObject_t32 * __this, Enum_t5 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean RMX.RMXObject::get_OneIn10()
extern "C" bool RMXObject_get_OneIn10_m91 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m496(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void RMX.RMXObject::RMX.EventListener.SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void RMXObject_RMX_EventListener_SendMessage_m92 (RMXObject_t32 * __this, String_t* ___message, int32_t ___sendMessageOptions, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		int32_t L_1 = ___sendMessageOptions;
		Component_SendMessage_m497(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String RMX.RMXObject::RMX.EventListener.get_name()
extern "C" String_t* RMXObject_RMX_EventListener_get_name_m93 (RMXObject_t32 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Object_get_name_m498(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedData.h"
#ifndef _MSC_VER
#else
#endif
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Object RMX.SavedData::String(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * SavedData_String_m94 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = ___key;
		bool L_1 = PlayerPrefs_HasKey_m499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___key;
		String_t* L_3 = PlayerPrefs_GetString_m500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_4;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Object RMX.SavedData::Long(System.String)
extern TypeInfo* Int64_t169_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" Object_t * SavedData_Long_m95 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int64_t G_B3_0 = 0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001c;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			float L_4 = Single_Parse_m501(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = (((int64_t)L_4));
			goto IL_001e;
		}

IL_001c:
		{
			G_B3_0 = (((int64_t)(-1)));
		}

IL_001e:
		{
			int64_t L_5 = G_B3_0;
			Object_t * L_6 = Box(Int64_t169_il2cpp_TypeInfo_var, &L_5);
			V_1 = L_6;
			goto IL_0067;
		}

IL_0029:
		{
			; // IL_0029: leave IL_0067
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002e;
		throw e;
	}

CATCH_002e:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t143 *)__exception_local);
			Exception_t143 * L_7 = V_0;
			Debug_LogError_m502(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			int32_t L_8 = 3;
			Object_t * L_9 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_8);
			Exception_t143 * L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_10);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_12 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0055;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_13 = Bugger_get_Last_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m415(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_0055:
		{
			int64_t L_14 = (((int64_t)(-1)));
			Object_t * L_15 = Box(Int64_t169_il2cpp_TypeInfo_var, &L_14);
			V_1 = L_15;
			goto IL_0067;
		}

IL_0062:
		{
			; // IL_0062: leave IL_0067
		}
	} // end catch (depth: 1)

IL_0067:
	{
		Object_t * L_16 = V_1;
		return L_16;
	}
}
// System.Object RMX.SavedData::Double(System.String)
extern TypeInfo* Double_t170_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" Object_t * SavedData_Double_m96 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	double G_B3_0 = 0.0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001c;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			float L_4 = Single_Parse_m501(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = (((double)L_4));
			goto IL_0025;
		}

IL_001c:
		{
			G_B3_0 = (-1.0);
		}

IL_0025:
		{
			double L_5 = G_B3_0;
			Object_t * L_6 = Box(Double_t170_il2cpp_TypeInfo_var, &L_5);
			V_1 = L_6;
			goto IL_0075;
		}

IL_0030:
		{
			; // IL_0030: leave IL_0075
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0035;
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t143 *)__exception_local);
			Exception_t143 * L_7 = V_0;
			Debug_LogError_m502(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			int32_t L_8 = 3;
			Object_t * L_9 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_8);
			Exception_t143 * L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_10);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_12 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_005c;
			}
		}

IL_0052:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_13 = Bugger_get_Last_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m415(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_005c:
		{
			double L_14 = (-1.0);
			Object_t * L_15 = Box(Double_t170_il2cpp_TypeInfo_var, &L_14);
			V_1 = L_15;
			goto IL_0075;
		}

IL_0070:
		{
			; // IL_0070: leave IL_0075
		}
	} // end catch (depth: 1)

IL_0075:
	{
		Object_t * L_16 = V_1;
		return L_16;
	}
}
// System.Object RMX.SavedData::Bool(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral32;
extern "C" Object_t * SavedData_Bool_m97 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___key;
		bool L_1 = PlayerPrefs_HasKey_m499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = ___key;
		String_t* L_3 = PlayerPrefs_GetString_m500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m417(NULL /*static, unused*/, L_3, _stringLiteral32, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		bool L_5 = G_B3_0;
		Object_t * L_6 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void RMX.SavedData::Set(System.Object,System.Boolean)
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern "C" void SavedData_Set_m98 (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	{
		Object_t * L_0 = ___key;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		bool L_2 = ___value;
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = _stringLiteral32;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = _stringLiteral33;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		PlayerPrefs_SetString_m503(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Object RMX.SavedData::Int(System.String)
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" Object_t * SavedData_Int_m99 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * V_0 = {0};
	Object_t * V_1 = {0};
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
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001b;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			int32_t L_4 = Int32_Parse_m504(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = L_4;
			goto IL_001c;
		}

IL_001b:
		{
			G_B3_0 = (-1);
		}

IL_001c:
		{
			int32_t L_5 = G_B3_0;
			Object_t * L_6 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_5);
			V_1 = L_6;
			goto IL_0064;
		}

IL_0027:
		{
			; // IL_0027: leave IL_0064
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002c;
		throw e;
	}

CATCH_002c:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t143 *)__exception_local);
			Exception_t143 * L_7 = V_0;
			Debug_LogError_m502(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			int32_t L_8 = 3;
			Object_t * L_9 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_8);
			Exception_t143 * L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_10);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_12 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0053;
			}
		}

IL_0049:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_13 = Bugger_get_Last_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m415(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_0053:
		{
			int32_t L_14 = (-1);
			Object_t * L_15 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_14);
			V_1 = L_15;
			goto IL_0064;
		}

IL_005f:
		{
			; // IL_005f: leave IL_0064
		}
	} // end catch (depth: 1)

IL_0064:
	{
		Object_t * L_16 = V_1;
		return L_16;
	}
}
// System.Void RMX.SavedData::Set(System.Object,System.Int32)
extern "C" void SavedData_Set_m100 (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = Int32_ToString_m505((&___value), /*hidden argument*/NULL);
		PlayerPrefs_SetString_m503(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object RMX.SavedData::Float(System.String)
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t15_il2cpp_TypeInfo_var;
extern "C" Object_t * SavedData_Float_m101 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	float G_B3_0 = 0.0f;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001b;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			float L_4 = Single_Parse_m501(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = L_4;
			goto IL_0020;
		}

IL_001b:
		{
			G_B3_0 = (-1.0f);
		}

IL_0020:
		{
			float L_5 = G_B3_0;
			Object_t * L_6 = Box(Single_t172_il2cpp_TypeInfo_var, &L_5);
			V_1 = L_6;
			goto IL_006c;
		}

IL_002b:
		{
			; // IL_002b: leave IL_006c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t143_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t143 *)__exception_local);
			Exception_t143 * L_7 = V_0;
			Debug_LogError_m502(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			int32_t L_8 = 3;
			Object_t * L_9 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_8);
			Exception_t143 * L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_10);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			bool L_12 = Bugger_WillLog_m26(NULL /*static, unused*/, (Enum_t5 *)L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0057;
			}
		}

IL_004d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t15_il2cpp_TypeInfo_var);
			String_t* L_13 = Bugger_get_Last_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m415(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_0057:
		{
			float L_14 = (-1.0f);
			Object_t * L_15 = Box(Single_t172_il2cpp_TypeInfo_var, &L_14);
			V_1 = L_15;
			goto IL_006c;
		}

IL_0067:
		{
			; // IL_0067: leave IL_006c
		}
	} // end catch (depth: 1)

IL_006c:
	{
		Object_t * L_16 = V_1;
		return L_16;
	}
}
// System.Void RMX.SavedData::Set(System.Object,System.Single)
extern "C" void SavedData_Set_m102 (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = Single_ToString_m506((&___value), /*hidden argument*/NULL);
		PlayerPrefs_SetString_m503(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// RMX.TextFormatter/Settings
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Settings.h"
#ifndef _MSC_VER
#else
#endif
// RMX.TextFormatter/Settings
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_SettingsMethodDeclarations.h"



// RMX.TextFormatter/Method
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Method.h"
#ifndef _MSC_VER
#else
#endif
// RMX.TextFormatter/Method
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_MethodMethodDeclarations.h"



// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"


// System.Void RMX.TextFormatter::.cctor()
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral34;
extern "C" void TextFormatter__cctor_m103 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TextFormatter_t37_StaticFields*)TextFormatter_t37_il2cpp_TypeInfo_var->static_fields)->___TagNew_0 = _stringLiteral34;
		return;
	}
}
// System.String RMX.TextFormatter::debug(System.String)
extern TypeInfo* CharU5BU5D_t163_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral54;
extern "C" String_t* TextFormatter_debug_m104 (Object_t * __this /* static, unused */, String_t* ___log, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___log;
		CharU5BU5D_t163* L_1 = ((CharU5BU5D_t163*)SZArrayNew(CharU5BU5D_t163_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_0);
		String_t* L_2 = String_TrimStart_m507(L_0, L_1, /*hidden argument*/NULL);
		___log = L_2;
		String_t* L_3 = ___log;
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m478(L_3, _stringLiteral35, _stringLiteral36, /*hidden argument*/NULL);
		___log = L_4;
		String_t* L_5 = ___log;
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m478(L_5, _stringLiteral37, _stringLiteral38, /*hidden argument*/NULL);
		___log = L_6;
		String_t* L_7 = ___log;
		NullCheck(L_7);
		String_t* L_8 = String_Replace_m478(L_7, _stringLiteral39, _stringLiteral40, /*hidden argument*/NULL);
		___log = L_8;
		String_t* L_9 = ___log;
		NullCheck(L_9);
		String_t* L_10 = String_Replace_m478(L_9, _stringLiteral41, _stringLiteral42, /*hidden argument*/NULL);
		___log = L_10;
		String_t* L_11 = ___log;
		NullCheck(L_11);
		String_t* L_12 = String_Replace_m478(L_11, _stringLiteral43, _stringLiteral44, /*hidden argument*/NULL);
		___log = L_12;
		String_t* L_13 = ___log;
		NullCheck(L_13);
		String_t* L_14 = String_Replace_m478(L_13, _stringLiteral45, _stringLiteral46, /*hidden argument*/NULL);
		___log = L_14;
		String_t* L_15 = ___log;
		NullCheck(L_15);
		String_t* L_16 = String_Replace_m478(L_15, _stringLiteral47, _stringLiteral48, /*hidden argument*/NULL);
		___log = L_16;
		String_t* L_17 = ___log;
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m478(L_17, _stringLiteral49, _stringLiteral50, /*hidden argument*/NULL);
		___log = L_18;
		String_t* L_19 = ___log;
		NullCheck(L_19);
		String_t* L_20 = String_Replace_m478(L_19, _stringLiteral49, _stringLiteral50, /*hidden argument*/NULL);
		___log = L_20;
		String_t* L_21 = ___log;
		NullCheck(L_21);
		String_t* L_22 = String_Replace_m478(L_21, _stringLiteral51, _stringLiteral52, /*hidden argument*/NULL);
		___log = L_22;
		String_t* L_23 = ___log;
		NullCheck(L_23);
		String_t* L_24 = String_Replace_m478(L_23, _stringLiteral53, _stringLiteral54, /*hidden argument*/NULL);
		___log = L_24;
		String_t* L_25 = ___log;
		return L_25;
	}
}
// System.String RMX.TextFormatter::codify(System.String,RMX.TextFormatter/Method)
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral58;
extern "C" String_t* TextFormatter_codify_m105 (Object_t * __this /* static, unused */, String_t* ___code, int32_t ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___method;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TextFormatter_t37_StaticFields*)TextFormatter_t37_il2cpp_TypeInfo_var->static_fields)->___TagNew_0;
		NullCheck(L_1);
		String_t* L_3 = String_Replace_m478(L_1, _stringLiteral55, L_2, /*hidden argument*/NULL);
		___code = L_3;
	}

IL_0018:
	{
		String_t* L_4 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TextFormatter_t37_StaticFields*)TextFormatter_t37_il2cpp_TypeInfo_var->static_fields)->___TagNew_0;
		NullCheck(L_4);
		String_t* L_6 = String_Replace_m478(L_4, L_5, _stringLiteral56, /*hidden argument*/NULL);
		___code = L_6;
		String_t* L_7 = ___code;
		NullCheck(L_7);
		String_t* L_8 = String_Replace_m478(L_7, _stringLiteral57, _stringLiteral58, /*hidden argument*/NULL);
		___code = L_8;
		String_t* L_9 = ___code;
		return L_9;
	}
}
// System.String RMX.TextFormatter::Format(System.String)
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern "C" String_t* TextFormatter_Format_m106 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_1 = TextFormatter_Format_m108(NULL /*static, unused*/, L_0, 3, 2, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String RMX.TextFormatter::Format(System.String,System.String)
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" String_t* TextFormatter_Format_m107 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t31* L_0 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral4);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral4;
		StringU5BU5D_t31* L_1 = L_0;
		String_t* L_2 = ___color;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t31* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)_stringLiteral5;
		StringU5BU5D_t31* L_4 = L_3;
		String_t* L_5 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_6 = TextFormatter_Format_m106(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_6;
		StringU5BU5D_t31* L_7 = L_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, _stringLiteral9);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4)) = (String_t*)_stringLiteral9;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m508(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String RMX.TextFormatter::Format(System.String,RMX.TextFormatter/Settings,RMX.TextFormatter/Method)
extern TypeInfo* TextFormatter_t37_il2cpp_TypeInfo_var;
extern "C" String_t* TextFormatter_Format_m108 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___settings, int32_t ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___settings;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0035;
	}

IL_0019:
	{
		String_t* L_2 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_3 = TextFormatter_debug_m104(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0020:
	{
		String_t* L_4 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_5 = TextFormatter_debug_m104(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___method;
		String_t* L_7 = TextFormatter_codify_m105(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002d:
	{
		String_t* L_8 = ___text;
		int32_t L_9 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_10 = TextFormatter_codify_m105(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0035:
	{
		String_t* L_11 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t37_il2cpp_TypeInfo_var);
		String_t* L_12 = TextFormatter_Format_m108(NULL /*static, unused*/, L_11, 1, 0, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String RMX.TextFormatter::TimeDescription(System.Single)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral62;
extern "C" String_t* TextFormatter_TimeDescription_m109 (Object_t * __this /* static, unused */, float ___timeInSeconds, const MethodInfo* method)
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
		String_t* L_11 = String_Concat_m424(NULL /*static, unused*/, L_7, L_10, _stringLiteral59, /*hidden argument*/NULL);
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
		String_t* L_17 = String_Concat_m424(NULL /*static, unused*/, L_13, L_16, _stringLiteral60, /*hidden argument*/NULL);
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
		String_t* L_23 = String_Concat_m424(NULL /*static, unused*/, L_19, L_22, _stringLiteral61, /*hidden argument*/NULL);
		V_3 = L_23;
		goto IL_0080;
	}

IL_0074:
	{
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m419(NULL /*static, unused*/, L_24, _stringLiteral62, /*hidden argument*/NULL);
		V_3 = L_25;
	}

IL_0080:
	{
		String_t* L_26 = V_3;
		return L_26;
	}
}
// UnityStandardAssets._2D.Camera2DFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Camera.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets._2D.Camera2DFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_CameraMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void UnityStandardAssets._2D.Camera2DFollow::.ctor()
extern "C" void Camera2DFollow__ctor_m110 (Camera2DFollow_t39 * __this, const MethodInfo* method)
{
	{
		__this->___damping_3 = (1.0f);
		__this->___lookAheadFactor_4 = (3.0f);
		__this->___lookAheadReturnSpeed_5 = (0.5f);
		__this->___lookAheadMoveThreshold_6 = (0.1f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Start()
extern "C" void Camera2DFollow_Start_m111 (Camera2DFollow_t39 * __this, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	{
		Transform_t38 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_position_m509(L_0, /*hidden argument*/NULL);
		__this->___m_LastTargetPosition_8 = L_1;
		Transform_t38 * L_2 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t40  L_3 = Transform_get_position_m509(L_2, /*hidden argument*/NULL);
		Transform_t38 * L_4 = (__this->___target_2);
		NullCheck(L_4);
		Vector3_t40  L_5 = Transform_get_position_m509(L_4, /*hidden argument*/NULL);
		Vector3_t40  L_6 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = ((&V_0)->___z_3);
		__this->___m_OffsetZ_7 = L_7;
		Transform_t38 * L_8 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_m512(L_8, (Transform_t38 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Update()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void Camera2DFollow_Update_m112 (Camera2DFollow_t39 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t40  V_2 = {0};
	Vector3_t40  V_3 = {0};
	Vector3_t40  V_4 = {0};
	{
		Transform_t38 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_position_m509(L_0, /*hidden argument*/NULL);
		Vector3_t40  L_2 = (__this->___m_LastTargetPosition_8);
		Vector3_t40  L_3 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		float L_4 = ((&V_4)->___x_1);
		V_0 = L_4;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_6 = fabsf(L_5);
		float L_7 = (__this->___lookAheadMoveThreshold_6);
		V_1 = ((((float)L_6) > ((float)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		float L_9 = (__this->___lookAheadFactor_4);
		Vector3_t40  L_10 = Vector3_get_right_m513(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t40  L_11 = Vector3_op_Multiply_m514(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Sign_m515(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Vector3_t40  L_14 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		__this->___m_LookAheadPos_10 = L_14;
		goto IL_007d;
	}

IL_005b:
	{
		Vector3_t40  L_15 = (__this->___m_LookAheadPos_10);
		Vector3_t40  L_16 = Vector3_get_zero_m517(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = (__this->___lookAheadReturnSpeed_5);
		Vector3_t40  L_19 = Vector3_MoveTowards_m519(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/NULL);
		__this->___m_LookAheadPos_10 = L_19;
	}

IL_007d:
	{
		Transform_t38 * L_20 = (__this->___target_2);
		NullCheck(L_20);
		Vector3_t40  L_21 = Transform_get_position_m509(L_20, /*hidden argument*/NULL);
		Vector3_t40  L_22 = (__this->___m_LookAheadPos_10);
		Vector3_t40  L_23 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector3_t40  L_24 = Vector3_get_forward_m521(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = (__this->___m_OffsetZ_7);
		Vector3_t40  L_26 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t40  L_27 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		Transform_t38 * L_28 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t40  L_29 = Transform_get_position_m509(L_28, /*hidden argument*/NULL);
		Vector3_t40  L_30 = V_2;
		Vector3_t40 * L_31 = &(__this->___m_CurrentVelocity_9);
		float L_32 = (__this->___damping_3);
		Vector3_t40  L_33 = Vector3_SmoothDamp_m522(NULL /*static, unused*/, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		Transform_t38 * L_34 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Vector3_t40  L_35 = V_3;
		NullCheck(L_34);
		Transform_set_position_m523(L_34, L_35, /*hidden argument*/NULL);
		Transform_t38 * L_36 = (__this->___target_2);
		NullCheck(L_36);
		Vector3_t40  L_37 = Transform_get_position_m509(L_36, /*hidden argument*/NULL);
		__this->___m_LastTargetPosition_8 = L_37;
		return;
	}
}
// UnityStandardAssets._2D.CameraFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Camera_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets._2D.CameraFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Camera_0MethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Void UnityStandardAssets._2D.CameraFollow::.ctor()
extern "C" void CameraFollow__ctor_m113 (CameraFollow_t41 * __this, const MethodInfo* method)
{
	{
		__this->___xMargin_2 = (1.0f);
		__this->___yMargin_3 = (1.0f);
		__this->___xSmooth_4 = (8.0f);
		__this->___ySmooth_5 = (8.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::Awake()
extern Il2CppCodeGenString* _stringLiteral63;
extern "C" void CameraFollow_Awake_m114 (CameraFollow_t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t9 * L_0 = GameObject_FindGameObjectWithTag_m524(NULL /*static, unused*/, _stringLiteral63, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t38 * L_1 = GameObject_get_transform_m525(L_0, /*hidden argument*/NULL);
		__this->___m_Player_8 = L_1;
		return;
	}
}
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckXMargin()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" bool CameraFollow_CheckXMargin_m115 (CameraFollow_t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_position_m509(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___x_1);
		Transform_t38 * L_3 = (__this->___m_Player_8);
		NullCheck(L_3);
		Vector3_t40  L_4 = Transform_get_position_m509(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)((float)L_2-(float)L_5)));
		float L_7 = (__this->___xMargin_2);
		return ((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckYMargin()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" bool CameraFollow_CheckYMargin_m116 (CameraFollow_t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_position_m509(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		Transform_t38 * L_3 = (__this->___m_Player_8);
		NullCheck(L_3);
		Vector3_t40  L_4 = Transform_get_position_m509(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)((float)L_2-(float)L_5)));
		float L_7 = (__this->___yMargin_3);
		return ((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::Update()
extern "C" void CameraFollow_Update_m117 (CameraFollow_t41 * __this, const MethodInfo* method)
{
	{
		CameraFollow_TrackPlayer_m118(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::TrackPlayer()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void CameraFollow_TrackPlayer_m118 (CameraFollow_t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t40  V_2 = {0};
	Vector3_t40  V_3 = {0};
	Vector3_t40  V_4 = {0};
	Vector3_t40  V_5 = {0};
	Vector3_t40  V_6 = {0};
	Vector3_t40  V_7 = {0};
	Vector3_t40  V_8 = {0};
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_position_m509(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = ((&V_2)->___x_1);
		V_0 = L_2;
		Transform_t38 * L_3 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t40  L_4 = Transform_get_position_m509(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		float L_5 = ((&V_3)->___y_2);
		V_1 = L_5;
		bool L_6 = CameraFollow_CheckXMargin_m115(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		Transform_t38 * L_7 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t40  L_8 = Transform_get_position_m509(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___x_1);
		Transform_t38 * L_10 = (__this->___m_Player_8);
		NullCheck(L_10);
		Vector3_t40  L_11 = Transform_get_position_m509(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = ((&V_5)->___x_1);
		float L_13 = (__this->___xSmooth_4);
		float L_14 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Lerp_m526(NULL /*static, unused*/, L_9, L_12, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_006d:
	{
		bool L_16 = CameraFollow_CheckYMargin_m116(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		Transform_t38 * L_17 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t40  L_18 = Transform_get_position_m509(L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		float L_19 = ((&V_6)->___y_2);
		Transform_t38 * L_20 = (__this->___m_Player_8);
		NullCheck(L_20);
		Vector3_t40  L_21 = Transform_get_position_m509(L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		float L_22 = ((&V_7)->___y_2);
		float L_23 = (__this->___ySmooth_5);
		float L_24 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_25 = Mathf_Lerp_m526(NULL /*static, unused*/, L_19, L_22, ((float)((float)L_23*(float)L_24)), /*hidden argument*/NULL);
		V_1 = L_25;
	}

IL_00b2:
	{
		float L_26 = V_0;
		Vector2_t42 * L_27 = &(__this->___minXAndY_7);
		float L_28 = (L_27->___x_1);
		Vector2_t42 * L_29 = &(__this->___maxXAndY_6);
		float L_30 = (L_29->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_31 = Mathf_Clamp_m527(NULL /*static, unused*/, L_26, L_28, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		float L_32 = V_1;
		Vector2_t42 * L_33 = &(__this->___minXAndY_7);
		float L_34 = (L_33->___y_2);
		Vector2_t42 * L_35 = &(__this->___maxXAndY_6);
		float L_36 = (L_35->___y_2);
		float L_37 = Mathf_Clamp_m527(NULL /*static, unused*/, L_32, L_34, L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		Transform_t38 * L_38 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		float L_39 = V_0;
		float L_40 = V_1;
		Transform_t38 * L_41 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t40  L_42 = Transform_get_position_m509(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		float L_43 = ((&V_8)->___z_3);
		Vector3_t40  L_44 = {0};
		Vector3__ctor_m528(&L_44, L_39, L_40, L_43, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_position_m523(L_38, L_44, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets._2D.Platformer2DUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Platfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets._2D.Platformer2DUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_PlatfoMethodDeclarations.h"

// UnityStandardAssets._2D.PlatformerCharacter2D
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Platfo_0.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityStandardAssets._2D.PlatformerCharacter2D
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Platfo_0MethodDeclarations.h"
struct Component_t174;
struct PlatformerCharacter2D_t43;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t174;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m530_gshared (Component_t174 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m530(__this, method) (( Object_t * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets._2D.PlatformerCharacter2D>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets._2D.PlatformerCharacter2D>()
#define Component_GetComponent_TisPlatformerCharacter2D_t43_m529(__this, method) (( PlatformerCharacter2D_t43 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)


// System.Void UnityStandardAssets._2D.Platformer2DUserControl::.ctor()
extern "C" void Platformer2DUserControl__ctor_m119 (Platformer2DUserControl_t44 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::Awake()
extern const MethodInfo* Component_GetComponent_TisPlatformerCharacter2D_t43_m529_MethodInfo_var;
extern "C" void Platformer2DUserControl_Awake_m120 (Platformer2DUserControl_t44 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisPlatformerCharacter2D_t43_m529_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformerCharacter2D_t43 * L_0 = Component_GetComponent_TisPlatformerCharacter2D_t43_m529(__this, /*hidden argument*/Component_GetComponent_TisPlatformerCharacter2D_t43_m529_MethodInfo_var);
		__this->___m_Character_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::Update()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral64;
extern "C" void Platformer2DUserControl_Update_m121 (Platformer2DUserControl_t44 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_Jump_3);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_GetButtonDown_m179(NULL /*static, unused*/, _stringLiteral64, /*hidden argument*/NULL);
		__this->___m_Jump_3 = L_1;
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::FixedUpdate()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" void Platformer2DUserControl_FixedUpdate_m122 (Platformer2DUserControl_t44 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m531(NULL /*static, unused*/, ((int32_t)306), /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m175(NULL /*static, unused*/, _stringLiteral65, /*hidden argument*/NULL);
		V_1 = L_1;
		PlatformerCharacter2D_t43 * L_2 = (__this->___m_Character_2);
		float L_3 = V_1;
		bool L_4 = V_0;
		bool L_5 = (__this->___m_Jump_3);
		NullCheck(L_2);
		PlatformerCharacter2D_Move_m126(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->___m_Jump_3 = 0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
struct Component_t174;
struct Animator_t45;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t45_m532(__this, method) (( Animator_t45 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)
struct Component_t174;
struct Rigidbody2D_t46;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t46_m533(__this, method) (( Rigidbody2D_t46 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)


// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::.ctor()
extern "C" void PlatformerCharacter2D__ctor_m123 (PlatformerCharacter2D_t43 * __this, const MethodInfo* method)
{
	{
		__this->___m_MaxSpeed_4 = (10.0f);
		__this->___m_JumpForce_5 = (400.0f);
		__this->___m_CrouchSpeed_6 = (0.36f);
		__this->___m_FacingRight_14 = 1;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Awake()
extern const MethodInfo* Component_GetComponent_TisAnimator_t45_m532_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t46_m533_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral66;
extern Il2CppCodeGenString* _stringLiteral67;
extern "C" void PlatformerCharacter2D_Awake_m124 (PlatformerCharacter2D_t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t45_m532_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Component_GetComponent_TisRigidbody2D_t46_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t38 * L_1 = Transform_Find_m534(L_0, _stringLiteral66, /*hidden argument*/NULL);
		__this->___m_GroundCheck_9 = L_1;
		Transform_t38 * L_2 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t38 * L_3 = Transform_Find_m534(L_2, _stringLiteral67, /*hidden argument*/NULL);
		__this->___m_CeilingCheck_11 = L_3;
		Animator_t45 * L_4 = Component_GetComponent_TisAnimator_t45_m532(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t45_m532_MethodInfo_var);
		__this->___m_Anim_12 = L_4;
		Rigidbody2D_t46 * L_5 = Component_GetComponent_TisRigidbody2D_t46_m533(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t46_m533_MethodInfo_var);
		__this->___m_Rigidbody2D_13 = L_5;
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::FixedUpdate()
extern TypeInfo* Physics2D_t177_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void PlatformerCharacter2D_FixedUpdate_m125 (PlatformerCharacter2D_t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Collider2DU5BU5D_t176* V_0 = {0};
	int32_t V_1 = 0;
	Vector2_t42  V_2 = {0};
	{
		__this->___m_Grounded_10 = 0;
		Transform_t38 * L_0 = (__this->___m_GroundCheck_9);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_position_m509(L_0, /*hidden argument*/NULL);
		Vector2_t42  L_2 = Vector2_op_Implicit_m535(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LayerMask_t47  L_3 = (__this->___m_WhatIsGround_8);
		int32_t L_4 = LayerMask_op_Implicit_m536(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t177_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t176* L_5 = Physics2D_OverlapCircleAll_m537(NULL /*static, unused*/, L_2, (0.2f), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0057;
	}

IL_0034:
	{
		Collider2DU5BU5D_t176* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(Collider2D_t139 **)(Collider2D_t139 **)SZArrayLdElema(L_6, L_8)));
		GameObject_t9 * L_9 = Component_get_gameObject_m421((*(Collider2D_t139 **)(Collider2D_t139 **)SZArrayLdElema(L_6, L_8)), /*hidden argument*/NULL);
		GameObject_t9 * L_10 = Component_get_gameObject_m421(__this, /*hidden argument*/NULL);
		bool L_11 = Object_op_Inequality_m538(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		__this->___m_Grounded_10 = 1;
	}

IL_0053:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		Collider2DU5BU5D_t176* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Animator_t45 * L_15 = (__this->___m_Anim_12);
		bool L_16 = (__this->___m_Grounded_10);
		NullCheck(L_15);
		Animator_SetBool_m539(L_15, _stringLiteral68, L_16, /*hidden argument*/NULL);
		Animator_t45 * L_17 = (__this->___m_Anim_12);
		Rigidbody2D_t46 * L_18 = (__this->___m_Rigidbody2D_13);
		NullCheck(L_18);
		Vector2_t42  L_19 = Rigidbody2D_get_velocity_m540(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = ((&V_2)->___y_2);
		NullCheck(L_17);
		Animator_SetFloat_m541(L_17, _stringLiteral69, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Move(System.Single,System.Boolean,System.Boolean)
extern TypeInfo* Physics2D_t177_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral70;
extern Il2CppCodeGenString* _stringLiteral71;
extern Il2CppCodeGenString* _stringLiteral68;
extern "C" void PlatformerCharacter2D_Move_m126 (PlatformerCharacter2D_t43 * __this, float ___move, bool ___crouch, bool ___jump, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		_stringLiteral70 = il2cpp_codegen_string_literal_from_index(70);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t42  V_0 = {0};
	float G_B9_0 = 0.0f;
	{
		bool L_0 = ___crouch;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		Animator_t45 * L_1 = (__this->___m_Anim_12);
		NullCheck(L_1);
		bool L_2 = Animator_GetBool_m542(L_1, _stringLiteral70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		Transform_t38 * L_3 = (__this->___m_CeilingCheck_11);
		NullCheck(L_3);
		Vector3_t40  L_4 = Transform_get_position_m509(L_3, /*hidden argument*/NULL);
		Vector2_t42  L_5 = Vector2_op_Implicit_m535(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		LayerMask_t47  L_6 = (__this->___m_WhatIsGround_8);
		int32_t L_7 = LayerMask_op_Implicit_m536(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t177_il2cpp_TypeInfo_var);
		Collider2D_t139 * L_8 = Physics2D_OverlapCircle_m543(NULL /*static, unused*/, L_5, (0.01f), L_7, /*hidden argument*/NULL);
		bool L_9 = Object_op_Implicit_m544(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		___crouch = 1;
	}

IL_004d:
	{
		Animator_t45 * L_10 = (__this->___m_Anim_12);
		bool L_11 = ___crouch;
		NullCheck(L_10);
		Animator_SetBool_m539(L_10, _stringLiteral70, L_11, /*hidden argument*/NULL);
		bool L_12 = (__this->___m_Grounded_10);
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		bool L_13 = (__this->___m_AirControl_7);
		if (!L_13)
		{
			goto IL_0108;
		}
	}

IL_0074:
	{
		bool L_14 = ___crouch;
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		float L_15 = ___move;
		float L_16 = (__this->___m_CrouchSpeed_6);
		G_B9_0 = ((float)((float)L_15*(float)L_16));
		goto IL_0088;
	}

IL_0087:
	{
		float L_17 = ___move;
		G_B9_0 = L_17;
	}

IL_0088:
	{
		___move = G_B9_0;
		Animator_t45 * L_18 = (__this->___m_Anim_12);
		float L_19 = ___move;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		NullCheck(L_18);
		Animator_SetFloat_m541(L_18, _stringLiteral71, L_20, /*hidden argument*/NULL);
		Rigidbody2D_t46 * L_21 = (__this->___m_Rigidbody2D_13);
		float L_22 = ___move;
		float L_23 = (__this->___m_MaxSpeed_4);
		Rigidbody2D_t46 * L_24 = (__this->___m_Rigidbody2D_13);
		NullCheck(L_24);
		Vector2_t42  L_25 = Rigidbody2D_get_velocity_m540(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		float L_26 = ((&V_0)->___y_2);
		Vector2_t42  L_27 = {0};
		Vector2__ctor_m545(&L_27, ((float)((float)L_22*(float)L_23)), L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody2D_set_velocity_m546(L_21, L_27, /*hidden argument*/NULL);
		float L_28 = ___move;
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		bool L_29 = (__this->___m_FacingRight_14);
		if (L_29)
		{
			goto IL_00ec;
		}
	}
	{
		PlatformerCharacter2D_Flip_m127(__this, /*hidden argument*/NULL);
		goto IL_0108;
	}

IL_00ec:
	{
		float L_30 = ___move;
		if ((!(((float)L_30) < ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		bool L_31 = (__this->___m_FacingRight_14);
		if (!L_31)
		{
			goto IL_0108;
		}
	}
	{
		PlatformerCharacter2D_Flip_m127(__this, /*hidden argument*/NULL);
	}

IL_0108:
	{
		bool L_32 = (__this->___m_Grounded_10);
		if (!L_32)
		{
			goto IL_0161;
		}
	}
	{
		bool L_33 = ___jump;
		if (!L_33)
		{
			goto IL_0161;
		}
	}
	{
		Animator_t45 * L_34 = (__this->___m_Anim_12);
		NullCheck(L_34);
		bool L_35 = Animator_GetBool_m542(L_34, _stringLiteral68, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0161;
		}
	}
	{
		__this->___m_Grounded_10 = 0;
		Animator_t45 * L_36 = (__this->___m_Anim_12);
		NullCheck(L_36);
		Animator_SetBool_m539(L_36, _stringLiteral68, 0, /*hidden argument*/NULL);
		Rigidbody2D_t46 * L_37 = (__this->___m_Rigidbody2D_13);
		float L_38 = (__this->___m_JumpForce_5);
		Vector2_t42  L_39 = {0};
		Vector2__ctor_m545(&L_39, (0.0f), L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Rigidbody2D_AddForce_m547(L_37, L_39, /*hidden argument*/NULL);
	}

IL_0161:
	{
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Flip()
extern "C" void PlatformerCharacter2D_Flip_m127 (PlatformerCharacter2D_t43 * __this, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	{
		bool L_0 = (__this->___m_FacingRight_14);
		__this->___m_FacingRight_14 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		Transform_t38 * L_1 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t40  L_2 = Transform_get_localScale_m548(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t40 * L_3 = (&V_0);
		float L_4 = (L_3->___x_1);
		L_3->___x_1 = ((float)((float)L_4*(float)(-1.0f)));
		Transform_t38 * L_5 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Vector3_t40  L_6 = V_0;
		NullCheck(L_5);
		Transform_set_localScale_m549(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets._2D.Restarter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Restar.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets._2D.Restarter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_RestarMethodDeclarations.h"



// System.Void UnityStandardAssets._2D.Restarter::.ctor()
extern "C" void Restarter__ctor_m128 (Restarter_t48 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Restarter::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral63;
extern "C" void Restarter_OnTriggerEnter2D_m129 (Restarter_t48 * __this, Collider2D_t139 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t139 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m550(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m417(NULL /*static, unused*/, L_1, _stringLiteral63, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = Application_get_loadedLevelName_m551(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m552(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatfMethodDeclarations.h"

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2.h"
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"


// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" void AxisTouchButton__ctor_m130 (AxisTouchButton_t49 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___axisName_2 = _stringLiteral65;
		__this->___axisValue_3 = (1.0f);
		__this->___responseSpeed_4 = (3.0f);
		__this->___returnToCentreSpeed_5 = (3.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern TypeInfo* VirtualAxis_t50_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_OnEnable_m131 (AxisTouchButton_t49 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		VirtualAxis_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m168(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = (__this->___axisName_2);
		VirtualAxis_t50 * L_3 = (VirtualAxis_t50 *)il2cpp_codegen_object_new (VirtualAxis_t50_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m144(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_Axis_7 = L_3;
		VirtualAxis_t50 * L_4 = (__this->___m_Axis_7);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m170(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualAxis_t50 * L_6 = CrossPlatformInputManager_VirtualAxisReference_m174(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___m_Axis_7 = L_6;
	}

IL_0042:
	{
		AxisTouchButton_FindPairedButton_m132(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
extern const Il2CppType* AxisTouchButton_t49_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AxisTouchButtonU5BU5D_t178_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_FindPairedButton_m132 (AxisTouchButton_t49 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AxisTouchButton_t49_0_0_0_var = il2cpp_codegen_type_from_index(64);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		AxisTouchButtonU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	AxisTouchButtonU5BU5D_t178* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(AxisTouchButton_t49_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t179* L_1 = Object_FindObjectsOfType_m553(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((AxisTouchButtonU5BU5D_t178*)IsInst(L_1, AxisTouchButtonU5BU5D_t178_il2cpp_TypeInfo_var));
		AxisTouchButtonU5BU5D_t178* L_2 = V_0;
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		AxisTouchButtonU5BU5D_t178* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(AxisTouchButton_t49 **)(AxisTouchButton_t49 **)SZArrayLdElema(L_3, L_5)));
		String_t* L_6 = ((*(AxisTouchButton_t49 **)(AxisTouchButton_t49 **)SZArrayLdElema(L_3, L_5))->___axisName_2);
		String_t* L_7 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m417(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t178* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = Object_op_Inequality_m538(NULL /*static, unused*/, (*(AxisTouchButton_t49 **)(AxisTouchButton_t49 **)SZArrayLdElema(L_9, L_11)), __this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t178* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___m_PairedWith_6 = (*(AxisTouchButton_t49 **)(AxisTouchButton_t49 **)SZArrayLdElema(L_13, L_15));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_17 = V_1;
		AxisTouchButtonU5BU5D_t178* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0022;
		}
	}

IL_005e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
extern "C" void AxisTouchButton_OnDisable_m133 (AxisTouchButton_t49 * __this, const MethodInfo* method)
{
	{
		VirtualAxis_t50 * L_0 = (__this->___m_Axis_7);
		NullCheck(L_0);
		VirtualAxis_Remove_m150(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_OnPointerDown_m134 (AxisTouchButton_t49 * __this, PointerEventData_t140 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		AxisTouchButton_t49 * L_0 = (__this->___m_PairedWith_6);
		bool L_1 = Object_op_Equality_m466(NULL /*static, unused*/, L_0, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AxisTouchButton_FindPairedButton_m132(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		VirtualAxis_t50 * L_2 = (__this->___m_Axis_7);
		VirtualAxis_t50 * L_3 = (__this->___m_Axis_7);
		NullCheck(L_3);
		float L_4 = VirtualAxis_get_GetValue_m152(L_3, /*hidden argument*/NULL);
		float L_5 = (__this->___axisValue_3);
		float L_6 = (__this->___responseSpeed_4);
		float L_7 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_8 = Mathf_MoveTowards_m554(NULL /*static, unused*/, L_4, L_5, ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m151(L_2, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_OnPointerUp_m135 (AxisTouchButton_t49 * __this, PointerEventData_t140 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		VirtualAxis_t50 * L_0 = (__this->___m_Axis_7);
		VirtualAxis_t50 * L_1 = (__this->___m_Axis_7);
		NullCheck(L_1);
		float L_2 = VirtualAxis_get_GetValue_m152(L_1, /*hidden argument*/NULL);
		float L_3 = (__this->___responseSpeed_4);
		float L_4 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_5 = Mathf_MoveTowards_m554(NULL /*static, unused*/, L_2, (0.0f), ((float)((float)L_3*(float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m151(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_0MethodDeclarations.h"



// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
extern "C" void ButtonHandler__ctor_m136 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
extern "C" void ButtonHandler_OnEnable_m137 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetDownState_m138 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m181(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetUpState_m139 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m182(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetAxisPositiveState_m140 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_m183(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetAxisNeutralState_m141 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_m185(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetAxisNegativeState_m142 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_m184(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
extern "C" void ButtonHandler_Update_m143 (ButtonHandler_t51 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C" void VirtualAxis__ctor_m144 (VirtualAxis_t50 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualAxis__ctor_m145(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C" void VirtualAxis__ctor_m145 (VirtualAxis_t50 * __this, String_t* ___name, bool ___matchToInputSettings, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		VirtualAxis_set_name_m147(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings;
		VirtualAxis_set_matchWithInputManager_m149(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C" String_t* VirtualAxis_get_name_m146 (VirtualAxis_t50 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C" void VirtualAxis_set_name_m147 (VirtualAxis_t50 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C" bool VirtualAxis_get_matchWithInputManager_m148 (VirtualAxis_t50 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmatchWithInputManagerU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C" void VirtualAxis_set_matchWithInputManager_m149 (VirtualAxis_t50 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void VirtualAxis_Remove_m150 (VirtualAxis_t50 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = VirtualAxis_get_name_m146(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m172(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C" void VirtualAxis_Update_m151 (VirtualAxis_t50 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Value_0 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C" float VirtualAxis_get_GetValue_m152 (VirtualAxis_t50 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Value_0);
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern "C" float VirtualAxis_get_GetValueRaw_m153 (VirtualAxis_t50 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Value_0);
		return L_0;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3MethodDeclarations.h"



// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C" void VirtualButton__ctor_m154 (VirtualButton_t53 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualButton__ctor_m155(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C" void VirtualButton__ctor_m155 (VirtualButton_t53 * __this, String_t* ___name, bool ___matchToInputSettings, const MethodInfo* method)
{
	{
		__this->___m_LastPressedFrame_0 = ((int32_t)-5);
		__this->___m_ReleasedFrame_1 = ((int32_t)-5);
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		VirtualButton_set_name_m157(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings;
		VirtualButton_set_matchWithInputManager_m159(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C" String_t* VirtualButton_get_name_m156 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C" void VirtualButton_set_name_m157 (VirtualButton_t53 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C" bool VirtualButton_get_matchWithInputManager_m158 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmatchWithInputManagerU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C" void VirtualButton_set_matchWithInputManager_m159 (VirtualButton_t53 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C" void VirtualButton_Pressed_m160 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Pressed_2);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___m_Pressed_2 = 1;
		int32_t L_1 = Time_get_frameCount_m555(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_LastPressedFrame_0 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C" void VirtualButton_Released_m161 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	{
		__this->___m_Pressed_2 = 0;
		int32_t L_0 = Time_get_frameCount_m555(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_ReleasedFrame_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void VirtualButton_Remove_m162 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = VirtualButton_get_name_m156(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m173(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C" bool VirtualButton_get_GetButton_m163 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Pressed_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C" bool VirtualButton_get_GetButtonDown_m164 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_LastPressedFrame_0);
		int32_t L_1 = Time_get_frameCount_m555(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C" bool VirtualButton_get_GetButtonUp_m165 (VirtualButton_t53 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_ReleasedFrame_1);
		int32_t L_1 = Time_get_frameCount_m555(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)((int32_t)((int32_t)L_1-(int32_t)1))))? 1 : 0);
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4.h"
#ifndef _MSC_VER
#else
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_11.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_11MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern TypeInfo* MobileInput_t60_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern TypeInfo* StandaloneInput_t61_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager__cctor_m166 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MobileInput_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		StandaloneInput_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		s_Il2CppMethodIntialized = true;
	}
	{
		MobileInput_t60 * L_0 = (MobileInput_t60 *)il2cpp_codegen_object_new (MobileInput_t60_il2cpp_TypeInfo_var);
		MobileInput__ctor_m208(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___s_TouchInput_1 = L_0;
		StandaloneInput_t61 * L_1 = (StandaloneInput_t61 *)il2cpp_codegen_object_new (StandaloneInput_t61_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m222(L_1, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___s_HardwareInput_2 = L_1;
		VirtualInput_t54 * L_2 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___s_TouchInput_1;
		((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SwitchActiveInputMethod_m167 (Object_t * __this /* static, unused */, int32_t ___activeInputMethod, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___activeInputMethod;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0032;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_3 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___s_HardwareInput_2;
		((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0 = L_3;
		goto IL_0032;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_4 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___s_TouchInput_1;
		((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0 = L_4;
		goto IL_0032;
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_AxisExists_m168 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = VirtualInput_AxisExists_m251(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_ButtonExists_m169 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = VirtualInput_ButtonExists_m252(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_RegisterVirtualAxis_m170 (Object_t * __this /* static, unused */, VirtualAxis_t50 * ___axis, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		VirtualAxis_t50 * L_1 = ___axis;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m253(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_RegisterVirtualButton_m171 (Object_t * __this /* static, unused */, VirtualButton_t53 * ___button, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		VirtualButton_t53 * L_1 = ___button;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m254(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral72;
extern "C" void CrossPlatformInputManager_UnRegisterVirtualAxis_m172 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m556(L_1, _stringLiteral72, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_2 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m255(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_UnRegisterVirtualButton_m173 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m256(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" VirtualAxis_t50 * CrossPlatformInputManager_VirtualAxisReference_m174 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtualAxis_t50 * L_2 = VirtualInput_VirtualAxisReference_m257(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" float CrossPlatformInputManager_GetAxis_m175 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m177(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" float CrossPlatformInputManager_GetAxisRaw_m176 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m177(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" float CrossPlatformInputManager_GetAxis_m177 (Object_t * __this /* static, unused */, String_t* ___name, bool ___raw, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		bool L_2 = ___raw;
		NullCheck(L_0);
		float L_3 = (float)VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_GetButton_m178 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_GetButtonDown_m179 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_GetButtonUp_m180 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetButtonDown_m181 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetButtonUp_m182 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxisPositive_m183 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxisNegative_m184 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxisZero_m185 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxis_m186 (Object_t * __this /* static, unused */, String_t* ___name, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		float L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" Vector3_t40  CrossPlatformInputManager_get_mousePosition_m187 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		NullCheck(L_0);
		Vector3_t40  L_1 = (Vector3_t40 )VirtFuncInvoker0< Vector3_t40  >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionX_m188 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m258(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionY_m189 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m259(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionZ_m190 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		VirtualInput_t54 * L_0 = ((CrossPlatformInputManager_t55_StaticFields*)CrossPlatformInputManager_t55_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m260(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_5.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_5MethodDeclarations.h"



// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
extern "C" void InputAxisScrollbar__ctor_m191 (InputAxisScrollbar_t56 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
extern "C" void InputAxisScrollbar_Update_m192 (InputAxisScrollbar_t56 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void InputAxisScrollbar_HandleInput_m193 (InputAxisScrollbar_t56 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___axis_2);
		float L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_m186(NULL /*static, unused*/, L_0, ((float)((float)((float)((float)L_1*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_6.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_6MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.Joystick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_7.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.Joystick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_7MethodDeclarations.h"

// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"


// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
extern Il2CppCodeGenString* _stringLiteral65;
extern Il2CppCodeGenString* _stringLiteral73;
extern "C" void Joystick__ctor_m194 (Joystick_t58 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___MovementRange_2 = ((int32_t)100);
		__this->___horizontalAxisName_4 = _stringLiteral65;
		__this->___verticalAxisName_5 = _stringLiteral73;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
extern "C" void Joystick_OnEnable_m195 (Joystick_t58 * __this, const MethodInfo* method)
{
	{
		Joystick_CreateVirtualAxes_m198(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
extern "C" void Joystick_Start_m196 (Joystick_t58 * __this, const MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t40  L_1 = Transform_get_position_m509(L_0, /*hidden argument*/NULL);
		__this->___m_StartPos_6 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void Joystick_UpdateVirtualAxes_m197 (Joystick_t58 * __this, Vector3_t40  ___value, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	{
		Vector3_t40  L_0 = (__this->___m_StartPos_6);
		Vector3_t40  L_1 = ___value;
		Vector3_t40  L_2 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->___y_2);
		(&V_0)->___y_2 = ((-L_3));
		Vector3_t40  L_4 = V_0;
		int32_t L_5 = (__this->___MovementRange_2);
		Vector3_t40  L_6 = Vector3_op_Division_m557(NULL /*static, unused*/, L_4, (((float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = (__this->___m_UseX_7);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t50 * L_8 = (__this->___m_HorizontalVirtualAxis_9);
		float L_9 = ((&V_0)->___x_1);
		NullCheck(L_8);
		VirtualAxis_Update_m151(L_8, ((-L_9)), /*hidden argument*/NULL);
	}

IL_0048:
	{
		bool L_10 = (__this->___m_UseY_8);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		VirtualAxis_t50 * L_11 = (__this->___m_VerticalVirtualAxis_10);
		float L_12 = ((&V_0)->___y_2);
		NullCheck(L_11);
		VirtualAxis_Update_m151(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern TypeInfo* VirtualAxis_t50_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void Joystick_CreateVirtualAxes_m198 (Joystick_t58 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	Joystick_t58 * G_B2_0 = {0};
	Joystick_t58 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	Joystick_t58 * G_B3_1 = {0};
	Joystick_t58 * G_B5_0 = {0};
	Joystick_t58 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Joystick_t58 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->___axesToUse_3);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->___axesToUse_3);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UseX_7 = G_B3_0;
		int32_t L_2 = (__this->___axesToUse_3);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->___axesToUse_3);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_UseY_8 = G_B6_0;
		bool L_4 = (__this->___m_UseX_7);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = (__this->___horizontalAxisName_4);
		VirtualAxis_t50 * L_6 = (VirtualAxis_t50 *)il2cpp_codegen_object_new (VirtualAxis_t50_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m144(L_6, L_5, /*hidden argument*/NULL);
		__this->___m_HorizontalVirtualAxis_9 = L_6;
		VirtualAxis_t50 * L_7 = (__this->___m_HorizontalVirtualAxis_9);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m170(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_8 = (__this->___m_UseY_8);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = (__this->___verticalAxisName_5);
		VirtualAxis_t50 * L_10 = (VirtualAxis_t50 *)il2cpp_codegen_object_new (VirtualAxis_t50_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m144(L_10, L_9, /*hidden argument*/NULL);
		__this->___m_VerticalVirtualAxis_10 = L_10;
		VirtualAxis_t50 * L_11 = (__this->___m_VerticalVirtualAxis_10);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m170(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void Joystick_OnDrag_m199 (Joystick_t58 * __this, PointerEventData_t140 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t40  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t42  V_3 = {0};
	Vector2_t42  V_4 = {0};
	{
		Vector3_t40  L_0 = Vector3_get_zero_m517(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___m_UseX_7);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		PointerEventData_t140 * L_2 = ___data;
		NullCheck(L_2);
		Vector2_t42  L_3 = PointerEventData_get_position_m558(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		float L_4 = ((&V_3)->___x_1);
		Vector3_t40 * L_5 = &(__this->___m_StartPos_6);
		float L_6 = (L_5->___x_1);
		V_1 = (((int32_t)((float)((float)L_4-(float)L_6))));
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___MovementRange_2);
		int32_t L_9 = (__this->___MovementRange_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_Clamp_m559(NULL /*static, unused*/, L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		(&V_0)->___x_1 = (((float)L_11));
	}

IL_004a:
	{
		bool L_12 = (__this->___m_UseY_8);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		PointerEventData_t140 * L_13 = ___data;
		NullCheck(L_13);
		Vector2_t42  L_14 = PointerEventData_get_position_m558(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = ((&V_4)->___y_2);
		Vector3_t40 * L_16 = &(__this->___m_StartPos_6);
		float L_17 = (L_16->___y_2);
		V_2 = (((int32_t)((float)((float)L_15-(float)L_17))));
		int32_t L_18 = V_2;
		int32_t L_19 = (__this->___MovementRange_2);
		int32_t L_20 = (__this->___MovementRange_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		int32_t L_21 = Mathf_Clamp_m559(NULL /*static, unused*/, L_18, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		(&V_0)->___y_2 = (((float)L_22));
	}

IL_008f:
	{
		Transform_t38 * L_23 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Vector3_t40 * L_24 = &(__this->___m_StartPos_6);
		float L_25 = (L_24->___x_1);
		float L_26 = ((&V_0)->___x_1);
		Vector3_t40 * L_27 = &(__this->___m_StartPos_6);
		float L_28 = (L_27->___y_2);
		float L_29 = ((&V_0)->___y_2);
		Vector3_t40 * L_30 = &(__this->___m_StartPos_6);
		float L_31 = (L_30->___z_3);
		float L_32 = ((&V_0)->___z_3);
		Vector3_t40  L_33 = {0};
		Vector3__ctor_m528(&L_33, ((float)((float)L_25+(float)L_26)), ((float)((float)L_28+(float)L_29)), ((float)((float)L_31+(float)L_32)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m523(L_23, L_33, /*hidden argument*/NULL);
		Transform_t38 * L_34 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t40  L_35 = Transform_get_position_m509(L_34, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_m197(__this, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerUp_m200 (Joystick_t58 * __this, PointerEventData_t140 * ___data, const MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Vector3_t40  L_1 = (__this->___m_StartPos_6);
		NullCheck(L_0);
		Transform_set_position_m523(L_0, L_1, /*hidden argument*/NULL);
		Vector3_t40  L_2 = (__this->___m_StartPos_6);
		Joystick_UpdateVirtualAxes_m197(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerDown_m201 (Joystick_t58 * __this, PointerEventData_t140 * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern "C" void Joystick_OnDisable_m202 (Joystick_t58 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_UseX_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t50 * L_1 = (__this->___m_HorizontalVirtualAxis_9);
		NullCheck(L_1);
		VirtualAxis_Remove_m150(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		bool L_2 = (__this->___m_UseY_8);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		VirtualAxis_t50 * L_3 = (__this->___m_VerticalVirtualAxis_10);
		NullCheck(L_3);
		VirtualAxis_Remove_m150(L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_8.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_8MethodDeclarations.h"

// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem.h"
// UnityEngine.EventSystems.StandaloneInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.EventSystems.TouchInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_TouchInputModule.h"
struct Object_t73;
struct EventSystem_t181;
struct Object_t73;
struct Object_t;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" Object_t * Object_FindObjectOfType_TisObject_t_m561_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisObject_t_m561(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m561_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
#define Object_FindObjectOfType_TisEventSystem_t181_m560(__this /* static, unused */, method) (( EventSystem_t181 * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m561_gshared)(__this /* static, unused */, method)
struct GameObject_t9;
struct EventSystem_t181;
struct GameObject_t9;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m563_gshared (GameObject_t9 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m563(__this, method) (( Object_t * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m563_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
#define GameObject_AddComponent_TisEventSystem_t181_m562(__this, method) (( EventSystem_t181 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m563_gshared)(__this, method)
struct GameObject_t9;
struct StandaloneInputModule_t182;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
#define GameObject_AddComponent_TisStandaloneInputModule_t182_m564(__this, method) (( StandaloneInputModule_t182 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m563_gshared)(__this, method)
struct GameObject_t9;
struct TouchInputModule_t183;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.TouchInputModule>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.TouchInputModule>()
#define GameObject_AddComponent_TisTouchInputModule_t183_m565(__this, method) (( TouchInputModule_t183 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m563_gshared)(__this, method)


// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
extern "C" void MobileControlRig__ctor_m203 (MobileControlRig_t59 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
extern "C" void MobileControlRig_OnEnable_m204 (MobileControlRig_t59 * __this, const MethodInfo* method)
{
	{
		MobileControlRig_CheckEnableControlRig_m206(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
extern TypeInfo* GameObject_t9_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisEventSystem_t181_m560_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisEventSystem_t181_m562_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisStandaloneInputModule_t182_m564_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisTouchInputModule_t183_m565_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral74;
extern "C" void MobileControlRig_Start_m205 (MobileControlRig_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_FindObjectOfType_TisEventSystem_t181_m560_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		GameObject_AddComponent_TisEventSystem_t181_m562_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		GameObject_AddComponent_TisStandaloneInputModule_t182_m564_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		GameObject_AddComponent_TisTouchInputModule_t183_m565_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	EventSystem_t181 * V_0 = {0};
	GameObject_t9 * V_1 = {0};
	{
		EventSystem_t181 * L_0 = Object_FindObjectOfType_TisEventSystem_t181_m560(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisEventSystem_t181_m560_MethodInfo_var);
		V_0 = L_0;
		EventSystem_t181 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m466(NULL /*static, unused*/, L_1, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t9 * L_3 = (GameObject_t9 *)il2cpp_codegen_object_new (GameObject_t9_il2cpp_TypeInfo_var);
		GameObject__ctor_m566(L_3, _stringLiteral74, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t9 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_AddComponent_TisEventSystem_t181_m562(L_4, /*hidden argument*/GameObject_AddComponent_TisEventSystem_t181_m562_MethodInfo_var);
		GameObject_t9 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_AddComponent_TisStandaloneInputModule_t182_m564(L_5, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_t182_m564_MethodInfo_var);
		GameObject_t9 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_AddComponent_TisTouchInputModule_t183_m565(L_6, /*hidden argument*/GameObject_AddComponent_TisTouchInputModule_t183_m565_MethodInfo_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C" void MobileControlRig_CheckEnableControlRig_m206 (MobileControlRig_t59 * __this, const MethodInfo* method)
{
	{
		MobileControlRig_EnableControlRig_m207(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t38_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern "C" void MobileControlRig_EnableControlRig_m207 (MobileControlRig_t59 * __this, bool ___enabled, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Transform_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t38 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t38 *)Castclass(L_3, Transform_t38_il2cpp_TypeInfo_var));
			Transform_t38 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t9 * L_5 = Component_get_gameObject_m421(L_4, /*hidden argument*/NULL);
			bool L_6 = ___enabled;
			NullCheck(L_5);
			GameObject_SetActive_m441(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0029:
		{
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			Object_t * L_9 = V_1;
			V_2 = ((Object_t *)IsInst(L_9, IDisposable_t153_il2cpp_TypeInfo_var));
			Object_t * L_10 = V_2;
			if (L_10)
			{
				goto IL_0044;
			}
		}

IL_0043:
		{
			IL2CPP_END_FINALLY(57)
		}

IL_0044:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_11);
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_004b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"


// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C" void MobileInput__ctor_m208 (MobileInput_t60 * __this, const MethodInfo* method)
{
	{
		VirtualInput__ctor_m248(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern TypeInfo* VirtualButton_t53_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void MobileInput_AddButton_m209 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualButton_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		VirtualButton_t53 * L_1 = (VirtualButton_t53 *)il2cpp_codegen_object_new (VirtualButton_t53_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m154(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m171(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern TypeInfo* VirtualAxis_t50_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void MobileInput_AddAxes_m210 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		VirtualAxis_t50 * L_1 = (VirtualAxis_t50 *)il2cpp_codegen_object_new (VirtualAxis_t50_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m144(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
extern "C" float MobileInput_GetAxis_m211 (MobileInput_t60 * __this, String_t* ___name, bool ___raw, const MethodInfo* method)
{
	{
		Dictionary_2_t70 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m210(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t70 * L_4 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t50 * L_6 = (VirtualAxis_t50 *)VirtFuncInvoker1< VirtualAxis_t50 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		float L_7 = VirtualAxis_get_GetValue_m152(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern "C" void MobileInput_SetButtonDown_m212 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t71 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddButton_m209(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t71 * L_4 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualButton_t53 * L_6 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualButton_Pressed_m160(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern "C" void MobileInput_SetButtonUp_m213 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t71 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddButton_m209(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t71 * L_4 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualButton_t53 * L_6 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualButton_Released_m161(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern "C" void MobileInput_SetAxisPositive_m214 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t70 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m210(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t70 * L_4 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t50 * L_6 = (VirtualAxis_t50 *)VirtFuncInvoker1< VirtualAxis_t50 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m151(L_6, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern "C" void MobileInput_SetAxisNegative_m215 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t70 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m210(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t70 * L_4 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t50 * L_6 = (VirtualAxis_t50 *)VirtFuncInvoker1< VirtualAxis_t50 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m151(L_6, (-1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern "C" void MobileInput_SetAxisZero_m216 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t70 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m210(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t70 * L_4 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t50 * L_6 = (VirtualAxis_t50 *)VirtFuncInvoker1< VirtualAxis_t50 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m151(L_6, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
extern "C" void MobileInput_SetAxis_m217 (MobileInput_t60 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t70 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m210(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t70 * L_4 = (((VirtualInput_t54 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t50 * L_6 = (VirtualAxis_t50 *)VirtFuncInvoker1< VirtualAxis_t50 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		float L_7 = ___value;
		NullCheck(L_6);
		VirtualAxis_Update_m151(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern "C" bool MobileInput_GetButtonDown_m218 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t71 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t71 * L_3 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t53 * L_5 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m164(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m209(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t71 * L_8 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t53 * L_10 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m164(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern "C" bool MobileInput_GetButtonUp_m219 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t71 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t71 * L_3 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t53 * L_5 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_m165(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m209(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t71 * L_8 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t53 * L_10 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_m165(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern "C" bool MobileInput_GetButton_m220 (MobileInput_t60 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t71 * L_0 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t71 * L_3 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t53 * L_5 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_m163(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m209(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t71 * L_8 = (((VirtualInput_t54 *)__this)->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t53 * L_10 = (VirtualButton_t53 *)VirtFuncInvoker1< VirtualButton_t53 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_m163(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern "C" Vector3_t40  MobileInput_MousePosition_m221 (MobileInput_t60 * __this, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = VirtualInput_get_virtualMousePosition_m249(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C" void StandaloneInput__ctor_m222 (StandaloneInput_t61 * __this, const MethodInfo* method)
{
	{
		VirtualInput__ctor_m248(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" float StandaloneInput_GetAxis_m223 (StandaloneInput_t61 * __this, String_t* ___name, bool ___raw, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___raw;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m567(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m568(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" bool StandaloneInput_GetButton_m224 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m569(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" bool StandaloneInput_GetButtonDown_m225 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m570(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" bool StandaloneInput_GetButtonUp_m226 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonUp_m571(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void StandaloneInput_SetButtonDown_m227 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void StandaloneInput_SetButtonUp_m228 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void StandaloneInput_SetAxisPositive_m229 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void StandaloneInput_SetAxisNegative_m230 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void StandaloneInput_SetAxisZero_m231 (StandaloneInput_t61 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void StandaloneInput_SetAxis_m232 (StandaloneInput_t61 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t143 * L_0 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_0, _stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" Vector3_t40  StandaloneInput_MousePosition_m233 (StandaloneInput_t61 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_0 = Input_get_mousePosition_m572(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_12.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_12MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_13.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_13MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_14.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_14MethodDeclarations.h"



// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
extern "C" void AxisMapping__ctor_m234 (AxisMapping_t64 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.TiltInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_15.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.TiltInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_15MethodDeclarations.h"



// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
extern "C" void TiltInput__ctor_m235 (TiltInput_t65 * __this, const MethodInfo* method)
{
	{
		__this->___fullTiltAngle_4 = (25.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
extern TypeInfo* VirtualAxis_t50_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void TiltInput_OnEnable_m236 (TiltInput_t65 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		AxisMapping_t64 * L_0 = (__this->___mapping_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___type_0);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		AxisMapping_t64 * L_2 = (__this->___mapping_2);
		NullCheck(L_2);
		String_t* L_3 = (L_2->___axisName_1);
		VirtualAxis_t50 * L_4 = (VirtualAxis_t50 *)il2cpp_codegen_object_new (VirtualAxis_t50_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m144(L_4, L_3, /*hidden argument*/NULL);
		__this->___m_SteerAxis_6 = L_4;
		VirtualAxis_t50 * L_5 = (__this->___m_SteerAxis_6);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m170(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void TiltInput_Update_m237 (TiltInput_t65 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	Vector3_t40  V_3 = {0};
	Vector3_t40  V_4 = {0};
	Vector3_t40  V_5 = {0};
	Vector3_t40  V_6 = {0};
	int32_t V_7 = {0};
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_0 = Input_get_acceleration_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t40  L_1 = Vector3_get_zero_m517(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Inequality_m574(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_3 = (__this->___tiltAroundAxis_3);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_009c;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_6 = Input_get_acceleration_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		Vector3_t40  L_8 = Input_get_acceleration_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = (__this->___centreAngleOffset_5);
		V_0 = ((float)((float)((float)((float)L_10*(float)(57.29578f)))+(float)L_11));
		goto IL_009c;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_12 = Input_get_acceleration_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_12;
		float L_13 = ((&V_5)->___z_3);
		Vector3_t40  L_14 = Input_get_acceleration_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = ((&V_6)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = (__this->___centreAngleOffset_5);
		V_0 = ((float)((float)((float)((float)L_16*(float)(57.29578f)))+(float)L_17));
		goto IL_009c;
	}

IL_009c:
	{
		float L_18 = (__this->___fullTiltAngle_4);
		float L_19 = (__this->___fullTiltAngle_4);
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_21 = Mathf_InverseLerp_m575(NULL /*static, unused*/, ((-L_18)), L_19, L_20, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)L_21*(float)(2.0f)))-(float)(1.0f)));
		AxisMapping_t64 * L_22 = (__this->___mapping_2);
		NullCheck(L_22);
		int32_t L_23 = (L_22->___type_0);
		V_7 = L_23;
		int32_t L_24 = V_7;
		if (L_24 == 0)
		{
			goto IL_00e5;
		}
		if (L_24 == 1)
		{
			goto IL_00f6;
		}
		if (L_24 == 2)
		{
			goto IL_0108;
		}
		if (L_24 == 3)
		{
			goto IL_011a;
		}
	}
	{
		goto IL_012c;
	}

IL_00e5:
	{
		VirtualAxis_t50 * L_25 = (__this->___m_SteerAxis_6);
		float L_26 = V_1;
		NullCheck(L_25);
		VirtualAxis_Update_m151(L_25, L_26, /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_00f6:
	{
		float L_27 = V_1;
		int32_t L_28 = Screen_get_width_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m188(NULL /*static, unused*/, ((float)((float)L_27*(float)(((float)L_28)))), /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_0108:
	{
		float L_29 = V_1;
		int32_t L_30 = Screen_get_width_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m189(NULL /*static, unused*/, ((float)((float)L_29*(float)(((float)L_30)))), /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_011a:
	{
		float L_31 = V_1;
		int32_t L_32 = Screen_get_width_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_m190(NULL /*static, unused*/, ((float)((float)L_31*(float)(((float)L_32)))), /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_012c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
extern "C" void TiltInput_OnDisable_m238 (TiltInput_t65 * __this, const MethodInfo* method)
{
	{
		VirtualAxis_t50 * L_0 = (__this->___m_SteerAxis_6);
		NullCheck(L_0);
		VirtualAxis_Remove_m150(L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_16.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_16MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_17.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_17MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TouchPad
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_18.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.CrossPlatformInput.TouchPad
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_18MethodDeclarations.h"

// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct Component_t174;
struct Image_t68;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t68_m576(__this, method) (( Image_t68 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)


// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
extern Il2CppCodeGenString* _stringLiteral65;
extern Il2CppCodeGenString* _stringLiteral73;
extern "C" void TouchPad__ctor_m239 (TouchPad_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___horizontalAxisName_4 = _stringLiteral65;
		__this->___verticalAxisName_5 = _stringLiteral73;
		__this->___Xsensitivity_6 = (1.0f);
		__this->___Ysensitivity_7 = (1.0f);
		__this->___m_Id_16 = (-1);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
extern "C" void TouchPad_OnEnable_m240 (TouchPad_t69 * __this, const MethodInfo* method)
{
	{
		TouchPad_CreateVirtualAxes_m242(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
extern const MethodInfo* Component_GetComponent_TisImage_t68_m576_MethodInfo_var;
extern "C" void TouchPad_Start_m241 (TouchPad_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisImage_t68_m576_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t68 * L_0 = Component_GetComponent_TisImage_t68_m576(__this, /*hidden argument*/Component_GetComponent_TisImage_t68_m576_MethodInfo_var);
		__this->___m_Image_19 = L_0;
		Image_t68 * L_1 = (__this->___m_Image_19);
		NullCheck(L_1);
		Transform_t38 * L_2 = Component_get_transform_m510(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t40  L_3 = Transform_get_position_m509(L_2, /*hidden argument*/NULL);
		__this->___m_Center_18 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
extern TypeInfo* VirtualAxis_t50_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void TouchPad_CreateVirtualAxes_m242 (TouchPad_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	TouchPad_t69 * G_B2_0 = {0};
	TouchPad_t69 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	TouchPad_t69 * G_B3_1 = {0};
	TouchPad_t69 * G_B5_0 = {0};
	TouchPad_t69 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	TouchPad_t69 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->___axesToUse_2);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->___axesToUse_2);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UseX_11 = G_B3_0;
		int32_t L_2 = (__this->___axesToUse_2);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->___axesToUse_2);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_UseY_12 = G_B6_0;
		bool L_4 = (__this->___m_UseX_11);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = (__this->___horizontalAxisName_4);
		VirtualAxis_t50 * L_6 = (VirtualAxis_t50 *)il2cpp_codegen_object_new (VirtualAxis_t50_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m144(L_6, L_5, /*hidden argument*/NULL);
		__this->___m_HorizontalVirtualAxis_13 = L_6;
		VirtualAxis_t50 * L_7 = (__this->___m_HorizontalVirtualAxis_13);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m170(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_8 = (__this->___m_UseY_12);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = (__this->___verticalAxisName_5);
		VirtualAxis_t50 * L_10 = (VirtualAxis_t50 *)il2cpp_codegen_object_new (VirtualAxis_t50_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m144(L_10, L_9, /*hidden argument*/NULL);
		__this->___m_VerticalVirtualAxis_14 = L_10;
		VirtualAxis_t50 * L_11 = (__this->___m_VerticalVirtualAxis_14);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m170(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void TouchPad_UpdateVirtualAxes_m243 (TouchPad_t69 * __this, Vector3_t40  ___value, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = Vector3_get_normalized_m577((&___value), /*hidden argument*/NULL);
		___value = L_0;
		bool L_1 = (__this->___m_UseX_11);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VirtualAxis_t50 * L_2 = (__this->___m_HorizontalVirtualAxis_13);
		float L_3 = ((&___value)->___x_1);
		NullCheck(L_2);
		VirtualAxis_Update_m151(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		bool L_4 = (__this->___m_UseY_12);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		VirtualAxis_t50 * L_5 = (__this->___m_VerticalVirtualAxis_14);
		float L_6 = ((&___value)->___y_2);
		NullCheck(L_5);
		VirtualAxis_Update_m151(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void TouchPad_OnPointerDown_m244 (TouchPad_t69 * __this, PointerEventData_t140 * ___data, const MethodInfo* method)
{
	{
		__this->___m_Dragging_15 = 1;
		PointerEventData_t140 * L_0 = ___data;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_pointerId_m578(L_0, /*hidden argument*/NULL);
		__this->___m_Id_16 = L_1;
		int32_t L_2 = (__this->___controlStyle_3);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		PointerEventData_t140 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t42  L_4 = PointerEventData_get_position_m558(L_3, /*hidden argument*/NULL);
		Vector3_t40  L_5 = Vector2_op_Implicit_m579(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->___m_Center_18 = L_5;
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" void TouchPad_Update_m245 (TouchPad_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t42  V_0 = {0};
	Vector2_t42  V_1 = {0};
	Vector2_t42  V_2 = {0};
	Vector2_t42  V_3 = {0};
	{
		bool L_0 = (__this->___m_Dragging_15);
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
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m580(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Id_16);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)L_2+(int32_t)1)))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_3 = (__this->___m_Id_16);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_4 = (__this->___controlStyle_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0062;
		}
	}
	{
		Vector2_t42  L_5 = (__this->___m_PreviousTouchPos_17);
		Vector3_t40  L_6 = Vector2_op_Implicit_m579(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___m_Center_18 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		TouchU5BU5D_t184* L_7 = Input_get_touches_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___m_Id_16);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Vector2_t42  L_9 = Touch_get_position_m582(((Touch_t185 *)(Touch_t185 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		__this->___m_PreviousTouchPos_17 = L_9;
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		TouchU5BU5D_t184* L_10 = Input_get_touches_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___m_Id_16);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		Vector2_t42  L_12 = Touch_get_position_m582(((Touch_t185 *)(Touch_t185 *)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		V_2 = L_12;
		float L_13 = ((&V_2)->___x_1);
		Vector3_t40 * L_14 = &(__this->___m_Center_18);
		float L_15 = (L_14->___x_1);
		TouchU5BU5D_t184* L_16 = Input_get_touches_m581(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_17 = (__this->___m_Id_16);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		Vector2_t42  L_18 = Touch_get_position_m582(((Touch_t185 *)(Touch_t185 *)SZArrayLdElema(L_16, L_17)), /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = ((&V_3)->___y_2);
		Vector3_t40 * L_20 = &(__this->___m_Center_18);
		float L_21 = (L_20->___y_2);
		Vector2__ctor_m545((&V_1), ((float)((float)L_13-(float)L_15)), ((float)((float)L_19-(float)L_21)), /*hidden argument*/NULL);
		Vector2_t42  L_22 = Vector2_get_normalized_m583((&V_1), /*hidden argument*/NULL);
		V_0 = L_22;
		Vector2_t42 * L_23 = (&V_0);
		float L_24 = (L_23->___x_1);
		float L_25 = (__this->___Xsensitivity_6);
		L_23->___x_1 = ((float)((float)L_24*(float)L_25));
		Vector2_t42 * L_26 = (&V_0);
		float L_27 = (L_26->___y_2);
		float L_28 = (__this->___Ysensitivity_7);
		L_26->___y_2 = ((float)((float)L_27*(float)L_28));
		float L_29 = ((&V_0)->___x_1);
		float L_30 = ((&V_0)->___y_2);
		Vector3_t40  L_31 = {0};
		Vector3__ctor_m528(&L_31, L_29, L_30, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m243(__this, L_31, /*hidden argument*/NULL);
	}

IL_0109:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void TouchPad_OnPointerUp_m246 (TouchPad_t69 * __this, PointerEventData_t140 * ___data, const MethodInfo* method)
{
	{
		__this->___m_Dragging_15 = 0;
		__this->___m_Id_16 = (-1);
		Vector3_t40  L_0 = Vector3_get_zero_m517(NULL /*static, unused*/, /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m243(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern "C" void TouchPad_OnDisable_m247 (TouchPad_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___horizontalAxisName_4);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m168(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = (__this->___horizontalAxisName_4);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m172(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		String_t* L_3 = (__this->___verticalAxisName_5);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		bool L_4 = CrossPlatformInputManager_AxisExists_m168(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5 = (__this->___verticalAxisName_5);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m172(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern TypeInfo* Dictionary_2_t70_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t71_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m584_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m585_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m442_MethodInfo_var;
extern "C" void VirtualInput__ctor_m248 (VirtualInput_t54 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Dictionary_2_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		List_1_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Dictionary_2__ctor_m584_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		Dictionary_2__ctor_m585_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		List_1__ctor_m442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t70 * L_0 = (Dictionary_2_t70 *)il2cpp_codegen_object_new (Dictionary_2_t70_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m584(L_0, /*hidden argument*/Dictionary_2__ctor_m584_MethodInfo_var);
		__this->___m_VirtualAxes_0 = L_0;
		Dictionary_2_t71 * L_1 = (Dictionary_2_t71 *)il2cpp_codegen_object_new (Dictionary_2_t71_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m585(L_1, /*hidden argument*/Dictionary_2__ctor_m585_MethodInfo_var);
		__this->___m_VirtualButtons_1 = L_1;
		List_1_t13 * L_2 = (List_1_t13 *)il2cpp_codegen_object_new (List_1_t13_il2cpp_TypeInfo_var);
		List_1__ctor_m442(L_2, /*hidden argument*/List_1__ctor_m442_MethodInfo_var);
		__this->___m_AlwaysUseVirtual_2 = L_2;
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C" Vector3_t40  VirtualInput_get_virtualMousePosition_m249 (VirtualInput_t54 * __this, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = (__this->___U3CvirtualMousePositionU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C" void VirtualInput_set_virtualMousePosition_m250 (VirtualInput_t54 * __this, Vector3_t40  ___value, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = ___value;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C" bool VirtualInput_AxisExists_m251 (VirtualInput_t54 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t70 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C" bool VirtualInput_ButtonExists_m252 (VirtualInput_t54 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t71 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral76;
extern Il2CppCodeGenString* _stringLiteral77;
extern "C" void VirtualInput_RegisterVirtualAxis_m253 (VirtualInput_t54 * __this, VirtualAxis_t50 * ___axis, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral76 = il2cpp_codegen_string_literal_from_index(76);
		_stringLiteral77 = il2cpp_codegen_string_literal_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t70 * L_0 = (__this->___m_VirtualAxes_0);
		VirtualAxis_t50 * L_1 = ___axis;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m146(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualAxis_t50 * L_4 = ___axis;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m146(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m438(NULL /*static, unused*/, _stringLiteral76, L_5, _stringLiteral77, /*hidden argument*/NULL);
		Debug_LogError_m502(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t70 * L_7 = (__this->___m_VirtualAxes_0);
		VirtualAxis_t50 * L_8 = ___axis;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m146(L_8, /*hidden argument*/NULL);
		VirtualAxis_t50 * L_10 = ___axis;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, VirtualAxis_t50 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1) */, L_7, L_9, L_10);
		VirtualAxis_t50 * L_11 = ___axis;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_m148(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t13 * L_13 = (__this->___m_AlwaysUseVirtual_2);
		VirtualAxis_t50 * L_14 = ___axis;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m146(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78;
extern Il2CppCodeGenString* _stringLiteral77;
extern "C" void VirtualInput_RegisterVirtualButton_m254 (VirtualInput_t54 * __this, VirtualButton_t53 * ___button, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		_stringLiteral77 = il2cpp_codegen_string_literal_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t71 * L_0 = (__this->___m_VirtualButtons_1);
		VirtualButton_t53 * L_1 = ___button;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m156(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualButton_t53 * L_4 = ___button;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m156(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m438(NULL /*static, unused*/, _stringLiteral78, L_5, _stringLiteral77, /*hidden argument*/NULL);
		Debug_LogError_m502(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t71 * L_7 = (__this->___m_VirtualButtons_1);
		VirtualButton_t53 * L_8 = ___button;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m156(L_8, /*hidden argument*/NULL);
		VirtualButton_t53 * L_10 = ___button;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, VirtualButton_t53 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1) */, L_7, L_9, L_10);
		VirtualButton_t53 * L_11 = ___button;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m158(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t13 * L_13 = (__this->___m_AlwaysUseVirtual_2);
		VirtualButton_t53 * L_14 = ___button;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m156(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C" void VirtualInput_UnRegisterVirtualAxis_m255 (VirtualInput_t54 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t70 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t70 * L_3 = (__this->___m_VirtualAxes_0);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, String_t* >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0) */, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C" void VirtualInput_UnRegisterVirtualButton_m256 (VirtualInput_t54 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t71 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t71 * L_3 = (__this->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, String_t* >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0) */, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C" VirtualAxis_t50 * VirtualInput_VirtualAxisReference_m257 (VirtualInput_t54 * __this, String_t* ___name, const MethodInfo* method)
{
	VirtualAxis_t50 * G_B3_0 = {0};
	{
		Dictionary_2_t70 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t70 * L_3 = (__this->___m_VirtualAxes_0);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualAxis_t50 * L_5 = (VirtualAxis_t50 *)VirtFuncInvoker1< VirtualAxis_t50 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_3, L_4);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((VirtualAxis_t50 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionX_m258 (VirtualInput_t54 * __this, float ___f, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	{
		float L_0 = ___f;
		Vector3_t40  L_1 = VirtualInput_get_virtualMousePosition_m249(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		Vector3_t40  L_3 = VirtualInput_get_virtualMousePosition_m249(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ((&V_1)->___z_3);
		Vector3_t40  L_5 = {0};
		Vector3__ctor_m528(&L_5, L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m250(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionY_m259 (VirtualInput_t54 * __this, float ___f, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	{
		Vector3_t40  L_0 = VirtualInput_get_virtualMousePosition_m249(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		float L_2 = ___f;
		Vector3_t40  L_3 = VirtualInput_get_virtualMousePosition_m249(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ((&V_1)->___z_3);
		Vector3_t40  L_5 = {0};
		Vector3__ctor_m528(&L_5, L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m250(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionZ_m260 (VirtualInput_t54 * __this, float ___f, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	{
		Vector3_t40  L_0 = VirtualInput_get_virtualMousePosition_m249(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t40  L_2 = VirtualInput_get_virtualMousePosition_m249(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___y_2);
		float L_4 = ___f;
		Vector3_t40  L_5 = {0};
		Vector3__ctor_m528(&L_5, L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m250(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.ActivateTrigger/Mode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.ActivateTrigger/Mode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_AcMethodDeclarations.h"



// UnityStandardAssets.Utility.ActivateTrigger
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.ActivateTrigger
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac_0MethodDeclarations.h"

// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
struct GameObject_t9;
struct Animation_t186;
struct GameObject_t9;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m587_gshared (GameObject_t9 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m587(__this, method) (( Object_t * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m587_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
#define GameObject_GetComponent_TisAnimation_t186_m586(__this, method) (( Animation_t186 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m587_gshared)(__this, method)


// System.Void UnityStandardAssets.Utility.ActivateTrigger::.ctor()
extern "C" void ActivateTrigger__ctor_m261 (ActivateTrigger_t74 * __this, const MethodInfo* method)
{
	{
		__this->___action_2 = 2;
		__this->___triggerCount_5 = 1;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::DoActivateTrigger()
extern TypeInfo* Behaviour_t187_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t9_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAnimation_t186_m586_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral79;
extern "C" void ActivateTrigger_DoActivateTrigger_m262 (ActivateTrigger_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Behaviour_t187_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		GameObject_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		GameObject_GetComponent_TisAnimation_t186_m586_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		_stringLiteral79 = il2cpp_codegen_string_literal_from_index(79);
		s_Il2CppMethodIntialized = true;
	}
	Object_t73 * V_0 = {0};
	Behaviour_t187 * V_1 = {0};
	GameObject_t9 * V_2 = {0};
	int32_t V_3 = {0};
	Object_t73 * G_B4_0 = {0};
	Object_t73 * G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___triggerCount_5);
		__this->___triggerCount_5 = ((int32_t)((int32_t)L_0-(int32_t)1));
		int32_t L_1 = (__this->___triggerCount_5);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = (__this->___repeatTrigger_6);
		if (!L_2)
		{
			goto IL_014e;
		}
	}

IL_0024:
	{
		Object_t73 * L_3 = (__this->___target_3);
		Object_t73 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		GameObject_t9 * L_5 = Component_get_gameObject_m421(__this, /*hidden argument*/NULL);
		G_B4_0 = ((Object_t73 *)(L_5));
	}

IL_0037:
	{
		V_0 = G_B4_0;
		Object_t73 * L_6 = V_0;
		V_1 = ((Behaviour_t187 *)IsInst(L_6, Behaviour_t187_il2cpp_TypeInfo_var));
		Object_t73 * L_7 = V_0;
		V_2 = ((GameObject_t9 *)IsInst(L_7, GameObject_t9_il2cpp_TypeInfo_var));
		Behaviour_t187 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m538(NULL /*static, unused*/, L_8, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		Behaviour_t187 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t9 * L_11 = Component_get_gameObject_m421(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
	}

IL_0059:
	{
		int32_t L_12 = (__this->___action_2);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_009f;
		}
		if (L_13 == 2)
		{
			goto IL_00e9;
		}
		if (L_13 == 3)
		{
			goto IL_0101;
		}
		if (L_13 == 4)
		{
			goto IL_0119;
		}
		if (L_13 == 5)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_014e;
	}

IL_0083:
	{
		GameObject_t9 * L_14 = V_2;
		bool L_15 = Object_op_Inequality_m538(NULL /*static, unused*/, L_14, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_t9 * L_16 = V_2;
		NullCheck(L_16);
		GameObject_BroadcastMessage_m588(L_16, _stringLiteral79, /*hidden argument*/NULL);
	}

IL_009a:
	{
		goto IL_014e;
	}

IL_009f:
	{
		GameObject_t9 * L_17 = (__this->___source_4);
		bool L_18 = Object_op_Inequality_m538(NULL /*static, unused*/, L_17, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t9 * L_19 = V_2;
		bool L_20 = Object_op_Inequality_m538(NULL /*static, unused*/, L_19, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t9 * L_21 = (__this->___source_4);
		GameObject_t9 * L_22 = V_2;
		NullCheck(L_22);
		Transform_t38 * L_23 = GameObject_get_transform_m525(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t40  L_24 = Transform_get_position_m509(L_23, /*hidden argument*/NULL);
		GameObject_t9 * L_25 = V_2;
		NullCheck(L_25);
		Transform_t38 * L_26 = GameObject_get_transform_m525(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Quaternion_t106  L_27 = Transform_get_rotation_m589(L_26, /*hidden argument*/NULL);
		Object_Instantiate_m590(NULL /*static, unused*/, L_21, L_24, L_27, /*hidden argument*/NULL);
		GameObject_t9 * L_28 = V_2;
		Object_DestroyObject_m591(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		goto IL_014e;
	}

IL_00e9:
	{
		GameObject_t9 * L_29 = V_2;
		bool L_30 = Object_op_Inequality_m538(NULL /*static, unused*/, L_29, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		GameObject_t9 * L_31 = V_2;
		NullCheck(L_31);
		GameObject_SetActive_m441(L_31, 1, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		goto IL_014e;
	}

IL_0101:
	{
		Behaviour_t187 * L_32 = V_1;
		bool L_33 = Object_op_Inequality_m538(NULL /*static, unused*/, L_32, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		Behaviour_t187 * L_34 = V_1;
		NullCheck(L_34);
		Behaviour_set_enabled_m592(L_34, 1, /*hidden argument*/NULL);
	}

IL_0114:
	{
		goto IL_014e;
	}

IL_0119:
	{
		GameObject_t9 * L_35 = V_2;
		bool L_36 = Object_op_Inequality_m538(NULL /*static, unused*/, L_35, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0131;
		}
	}
	{
		GameObject_t9 * L_37 = V_2;
		NullCheck(L_37);
		Animation_t186 * L_38 = GameObject_GetComponent_TisAnimation_t186_m586(L_37, /*hidden argument*/GameObject_GetComponent_TisAnimation_t186_m586_MethodInfo_var);
		NullCheck(L_38);
		Animation_Play_m593(L_38, /*hidden argument*/NULL);
	}

IL_0131:
	{
		goto IL_014e;
	}

IL_0136:
	{
		GameObject_t9 * L_39 = V_2;
		bool L_40 = Object_op_Inequality_m538(NULL /*static, unused*/, L_39, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0149;
		}
	}
	{
		GameObject_t9 * L_41 = V_2;
		NullCheck(L_41);
		GameObject_SetActive_m441(L_41, 0, /*hidden argument*/NULL);
	}

IL_0149:
	{
		goto IL_014e;
	}

IL_014e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" void ActivateTrigger_OnTriggerEnter_m263 (ActivateTrigger_t74 * __this, Collider_t141 * ___other, const MethodInfo* method)
{
	{
		ActivateTrigger_DoActivateTrigger_m262(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_AuMethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::.ctor()
extern "C" void ReplacementDefinition__ctor_m264 (ReplacementDefinition_t76 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::.ctor()
extern TypeInfo* ReplacementDefinitionU5BU5D_t77_il2cpp_TypeInfo_var;
extern "C" void ReplacementList__ctor_m265 (ReplacementList_t78 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReplacementDefinitionU5BU5D_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___items_0 = ((ReplacementDefinitionU5BU5D_t77*)SZArrayNew(ReplacementDefinitionU5BU5D_t77_il2cpp_TypeInfo_var, 0));
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_1.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.AutoMobileShaderSwitch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_1MethodDeclarations.h"

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
struct Object_t73;
struct RendererU5BU5D_t189;
struct Object_t73;
struct ObjectU5BU5D_t146;
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" ObjectU5BU5D_t146* Object_FindObjectsOfType_TisObject_t_m595_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectsOfType_TisObject_t_m595(__this /* static, unused */, method) (( ObjectU5BU5D_t146* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m595_gshared)(__this /* static, unused */, method)
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
#define Object_FindObjectsOfType_TisRenderer_t188_m594(__this /* static, unused */, method) (( RendererU5BU5D_t189* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m595_gshared)(__this /* static, unused */, method)
struct Object_t73;
struct Material_t190;
struct Object_t73;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m597_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m597(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m597_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
#define Object_Instantiate_TisMaterial_t190_m596(__this /* static, unused */, p0, method) (( Material_t190 * (*) (Object_t * /* static, unused */, Material_t190 *, const MethodInfo*))Object_Instantiate_TisObject_t_m597_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::.ctor()
extern "C" void AutoMobileShaderSwitch__ctor_m266 (AutoMobileShaderSwitch_t79 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::OnEnable()
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t191_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectsOfType_TisRenderer_t188_m594_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m599_MethodInfo_var;
extern const MethodInfo* Object_Instantiate_TisMaterial_t190_m596_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral80;
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral82;
extern Il2CppCodeGenString* _stringLiteral83;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral85;
extern Il2CppCodeGenString* _stringLiteral86;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral27;
extern "C" void AutoMobileShaderSwitch_OnEnable_m267 (AutoMobileShaderSwitch_t79 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		List_1_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Object_FindObjectsOfType_TisRenderer_t188_m594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		List_1__ctor_m599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		Object_Instantiate_TisMaterial_t190_m596_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		_stringLiteral80 = il2cpp_codegen_string_literal_from_index(80);
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		_stringLiteral83 = il2cpp_codegen_string_literal_from_index(83);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	RendererU5BU5D_t189* V_0 = {0};
	List_1_t191 * V_1 = {0};
	List_1_t191 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReplacementDefinition_t76 * V_5 = {0};
	ReplacementDefinitionU5BU5D_t77* V_6 = {0};
	int32_t V_7 = 0;
	Renderer_t188 * V_8 = {0};
	RendererU5BU5D_t189* V_9 = {0};
	int32_t V_10 = 0;
	MaterialU5BU5D_t192* V_11 = {0};
	int32_t V_12 = 0;
	Material_t190 * V_13 = {0};
	Material_t190 * V_14 = {0};
	int32_t V_15 = 0;
	{
		RendererU5BU5D_t189* L_0 = Object_FindObjectsOfType_TisRenderer_t188_m594(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisRenderer_t188_m594_MethodInfo_var);
		V_0 = L_0;
		RendererU5BU5D_t189* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)(((Array_t *)L_1)->max_length)));
		Object_t * L_3 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m598(NULL /*static, unused*/, L_3, _stringLiteral80, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		List_1_t191 * L_5 = (List_1_t191 *)il2cpp_codegen_object_new (List_1_t191_il2cpp_TypeInfo_var);
		List_1__ctor_m599(L_5, /*hidden argument*/List_1__ctor_m599_MethodInfo_var);
		V_1 = L_5;
		List_1_t191 * L_6 = (List_1_t191 *)il2cpp_codegen_object_new (List_1_t191_il2cpp_TypeInfo_var);
		List_1__ctor_m599(L_6, /*hidden argument*/List_1__ctor_m599_MethodInfo_var);
		V_2 = L_6;
		V_3 = 0;
		V_4 = 0;
		ReplacementList_t78 * L_7 = (__this->___m_ReplacementList_2);
		NullCheck(L_7);
		ReplacementDefinitionU5BU5D_t77* L_8 = (L_7->___items_0);
		V_6 = L_8;
		V_7 = 0;
		goto IL_0180;
	}

IL_0043:
	{
		ReplacementDefinitionU5BU5D_t77* L_9 = V_6;
		int32_t L_10 = V_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_5 = (*(ReplacementDefinition_t76 **)(ReplacementDefinition_t76 **)SZArrayLdElema(L_9, L_11));
		RendererU5BU5D_t189* L_12 = V_0;
		V_9 = L_12;
		V_10 = 0;
		goto IL_016f;
	}

IL_0055:
	{
		RendererU5BU5D_t189* L_13 = V_9;
		int32_t L_14 = V_10;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Renderer_t188 **)(Renderer_t188 **)SZArrayLdElema(L_13, L_15));
		V_11 = (MaterialU5BU5D_t192*)NULL;
		V_12 = 0;
		goto IL_0149;
	}

IL_0067:
	{
		Renderer_t188 * L_16 = V_8;
		NullCheck(L_16);
		MaterialU5BU5D_t192* L_17 = Renderer_get_sharedMaterials_m600(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_13 = (*(Material_t190 **)(Material_t190 **)SZArrayLdElema(L_17, L_19));
		Material_t190 * L_20 = V_13;
		NullCheck(L_20);
		Shader_t75 * L_21 = Material_get_shader_m601(L_20, /*hidden argument*/NULL);
		ReplacementDefinition_t76 * L_22 = V_5;
		NullCheck(L_22);
		Shader_t75 * L_23 = (L_22->___original_0);
		bool L_24 = Object_op_Equality_m466(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0143;
		}
	}
	{
		MaterialU5BU5D_t192* L_25 = V_11;
		if (L_25)
		{
			goto IL_009b;
		}
	}
	{
		Renderer_t188 * L_26 = V_8;
		NullCheck(L_26);
		MaterialU5BU5D_t192* L_27 = Renderer_get_materials_m602(L_26, /*hidden argument*/NULL);
		V_11 = L_27;
	}

IL_009b:
	{
		List_1_t191 * L_28 = V_1;
		Material_t190 * L_29 = V_13;
		NullCheck(L_28);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Material_t190 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(!0) */, L_28, L_29);
		if (L_30)
		{
			goto IL_00d3;
		}
	}
	{
		List_1_t191 * L_31 = V_1;
		Material_t190 * L_32 = V_13;
		NullCheck(L_31);
		VirtActionInvoker1< Material_t190 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0) */, L_31, L_32);
		Material_t190 * L_33 = V_13;
		Material_t190 * L_34 = Object_Instantiate_TisMaterial_t190_m596(NULL /*static, unused*/, L_33, /*hidden argument*/Object_Instantiate_TisMaterial_t190_m596_MethodInfo_var);
		V_14 = L_34;
		Material_t190 * L_35 = V_14;
		ReplacementDefinition_t76 * L_36 = V_5;
		NullCheck(L_36);
		Shader_t75 * L_37 = (L_36->___replacement_1);
		NullCheck(L_35);
		Material_set_shader_m603(L_35, L_37, /*hidden argument*/NULL);
		List_1_t191 * L_38 = V_2;
		Material_t190 * L_39 = V_14;
		NullCheck(L_38);
		VirtActionInvoker1< Material_t190 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0) */, L_38, L_39);
		int32_t L_40 = V_3;
		V_3 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00d3:
	{
		ObjectU5BU5D_t146* L_41 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 6));
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		ArrayElementTypeCheck (L_41, _stringLiteral81);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 0)) = (Object_t *)_stringLiteral81;
		ObjectU5BU5D_t146* L_42 = L_41;
		Renderer_t188 * L_43 = V_8;
		NullCheck(L_43);
		GameObject_t9 * L_44 = Component_get_gameObject_m421(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_m498(L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1)) = (Object_t *)L_45;
		ObjectU5BU5D_t146* L_46 = L_42;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, _stringLiteral82);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)_stringLiteral82;
		ObjectU5BU5D_t146* L_47 = L_46;
		int32_t L_48 = V_12;
		int32_t L_49 = L_48;
		Object_t * L_50 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 3);
		ArrayElementTypeCheck (L_47, L_50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 3)) = (Object_t *)L_50;
		ObjectU5BU5D_t146* L_51 = L_47;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 4);
		ArrayElementTypeCheck (L_51, _stringLiteral83);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, 4)) = (Object_t *)_stringLiteral83;
		ObjectU5BU5D_t146* L_52 = L_51;
		List_1_t191 * L_53 = V_2;
		List_1_t191 * L_54 = V_1;
		Material_t190 * L_55 = V_13;
		NullCheck(L_54);
		int32_t L_56 = (int32_t)VirtFuncInvoker1< int32_t, Material_t190 * >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(!0) */, L_54, L_55);
		NullCheck(L_53);
		Material_t190 * L_57 = (Material_t190 *)VirtFuncInvoker1< Material_t190 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_53, L_56);
		NullCheck(L_57);
		String_t* L_58 = Object_get_name_m498(L_57, /*hidden argument*/NULL);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 5);
		ArrayElementTypeCheck (L_52, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 5)) = (Object_t *)L_58;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Concat_m418(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		MaterialU5BU5D_t192* L_60 = V_11;
		int32_t L_61 = V_12;
		List_1_t191 * L_62 = V_2;
		List_1_t191 * L_63 = V_1;
		Material_t190 * L_64 = V_13;
		NullCheck(L_63);
		int32_t L_65 = (int32_t)VirtFuncInvoker1< int32_t, Material_t190 * >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(!0) */, L_63, L_64);
		NullCheck(L_62);
		Material_t190 * L_66 = (Material_t190 *)VirtFuncInvoker1< Material_t190 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_62, L_65);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		ArrayElementTypeCheck (L_60, L_66);
		*((Material_t190 **)(Material_t190 **)SZArrayLdElema(L_60, L_61)) = (Material_t190 *)L_66;
		int32_t L_67 = V_4;
		V_4 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_0143:
	{
		int32_t L_68 = V_12;
		V_12 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_0149:
	{
		int32_t L_69 = V_12;
		Renderer_t188 * L_70 = V_8;
		NullCheck(L_70);
		MaterialU5BU5D_t192* L_71 = Renderer_get_sharedMaterials_m600(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		if ((((int32_t)L_69) < ((int32_t)(((int32_t)(((Array_t *)L_71)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		MaterialU5BU5D_t192* L_72 = V_11;
		if (!L_72)
		{
			goto IL_0169;
		}
	}
	{
		Renderer_t188 * L_73 = V_8;
		MaterialU5BU5D_t192* L_74 = V_11;
		NullCheck(L_73);
		Renderer_set_materials_m604(L_73, L_74, /*hidden argument*/NULL);
	}

IL_0169:
	{
		int32_t L_75 = V_10;
		V_10 = ((int32_t)((int32_t)L_75+(int32_t)1));
	}

IL_016f:
	{
		int32_t L_76 = V_10;
		RendererU5BU5D_t189* L_77 = V_9;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)(((int32_t)(((Array_t *)L_77)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_78 = V_7;
		V_7 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_0180:
	{
		int32_t L_79 = V_7;
		ReplacementDefinitionU5BU5D_t77* L_80 = V_6;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)(((int32_t)(((Array_t *)L_80)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_81 = V_4;
		int32_t L_82 = L_81;
		Object_t * L_83 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_82);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Concat_m598(NULL /*static, unused*/, L_83, _stringLiteral84, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		int32_t L_85 = V_3;
		int32_t L_86 = L_85;
		Object_t * L_87 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_86);
		String_t* L_88 = String_Concat_m598(NULL /*static, unused*/, L_87, _stringLiteral85, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		V_15 = 0;
		goto IL_023e;
	}

IL_01be:
	{
		StringU5BU5D_t31* L_89 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 8));
		List_1_t191 * L_90 = V_1;
		int32_t L_91 = V_15;
		NullCheck(L_90);
		Material_t190 * L_92 = (Material_t190 *)VirtFuncInvoker1< Material_t190 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_90, L_91);
		NullCheck(L_92);
		String_t* L_93 = Object_get_name_m498(L_92, /*hidden argument*/NULL);
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 0);
		ArrayElementTypeCheck (L_89, L_93);
		*((String_t**)(String_t**)SZArrayLdElema(L_89, 0)) = (String_t*)L_93;
		StringU5BU5D_t31* L_94 = L_89;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 1);
		ArrayElementTypeCheck (L_94, _stringLiteral86);
		*((String_t**)(String_t**)SZArrayLdElema(L_94, 1)) = (String_t*)_stringLiteral86;
		StringU5BU5D_t31* L_95 = L_94;
		List_1_t191 * L_96 = V_1;
		int32_t L_97 = V_15;
		NullCheck(L_96);
		Material_t190 * L_98 = (Material_t190 *)VirtFuncInvoker1< Material_t190 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_96, L_97);
		NullCheck(L_98);
		Shader_t75 * L_99 = Material_get_shader_m601(L_98, /*hidden argument*/NULL);
		NullCheck(L_99);
		String_t* L_100 = Object_get_name_m498(L_99, /*hidden argument*/NULL);
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, 2);
		ArrayElementTypeCheck (L_95, L_100);
		*((String_t**)(String_t**)SZArrayLdElema(L_95, 2)) = (String_t*)L_100;
		StringU5BU5D_t31* L_101 = L_95;
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, 3);
		ArrayElementTypeCheck (L_101, _stringLiteral87);
		*((String_t**)(String_t**)SZArrayLdElema(L_101, 3)) = (String_t*)_stringLiteral87;
		StringU5BU5D_t31* L_102 = L_101;
		List_1_t191 * L_103 = V_2;
		int32_t L_104 = V_15;
		NullCheck(L_103);
		Material_t190 * L_105 = (Material_t190 *)VirtFuncInvoker1< Material_t190 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_103, L_104);
		NullCheck(L_105);
		String_t* L_106 = Object_get_name_m498(L_105, /*hidden argument*/NULL);
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 4);
		ArrayElementTypeCheck (L_102, L_106);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 4)) = (String_t*)L_106;
		StringU5BU5D_t31* L_107 = L_102;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 5);
		ArrayElementTypeCheck (L_107, _stringLiteral86);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 5)) = (String_t*)_stringLiteral86;
		StringU5BU5D_t31* L_108 = L_107;
		List_1_t191 * L_109 = V_2;
		int32_t L_110 = V_15;
		NullCheck(L_109);
		Material_t190 * L_111 = (Material_t190 *)VirtFuncInvoker1< Material_t190 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_109, L_110);
		NullCheck(L_111);
		Shader_t75 * L_112 = Material_get_shader_m601(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		String_t* L_113 = Object_get_name_m498(L_112, /*hidden argument*/NULL);
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 6);
		ArrayElementTypeCheck (L_108, L_113);
		*((String_t**)(String_t**)SZArrayLdElema(L_108, 6)) = (String_t*)L_113;
		StringU5BU5D_t31* L_114 = L_108;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, 7);
		ArrayElementTypeCheck (L_114, _stringLiteral27);
		*((String_t**)(String_t**)SZArrayLdElema(L_114, 7)) = (String_t*)_stringLiteral27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_115 = String_Concat_m508(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_115, /*hidden argument*/NULL);
		int32_t L_116 = V_15;
		V_15 = ((int32_t)((int32_t)L_116+(int32_t)1));
	}

IL_023e:
	{
		int32_t L_117 = V_15;
		List_1_t191 * L_118 = V_1;
		NullCheck(L_118);
		int32_t L_119 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count() */, L_118);
		if ((((int32_t)L_117) < ((int32_t)L_119)))
		{
			goto IL_01be;
		}
	}
	{
		return;
	}
}
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_2.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_2MethodDeclarations.h"

// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"


// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
extern "C" void Vector3andSpace__ctor_m268 (Vector3andSpace_t80 * __this, const MethodInfo* method)
{
	{
		__this->___space_1 = 1;
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMoveAndRotate
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.AutoMoveAndRotate
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_3MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
extern "C" void AutoMoveAndRotate__ctor_m269 (AutoMoveAndRotate_t81 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
extern "C" void AutoMoveAndRotate_Start_m270 (AutoMoveAndRotate_t81 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_m605(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_LastRealTime_5 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Update()
extern "C" void AutoMoveAndRotate_Update_m271 (AutoMoveAndRotate_t81 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___ignoreTimescale_4);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_m605(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___m_LastRealTime_5);
		V_0 = ((float)((float)L_2-(float)L_3));
		float L_4 = Time_get_realtimeSinceStartup_m605(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_LastRealTime_5 = L_4;
	}

IL_0029:
	{
		Transform_t38 * L_5 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Vector3andSpace_t80 * L_6 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_6);
		Vector3_t40  L_7 = (L_6->___value_0);
		float L_8 = V_0;
		Vector3_t40  L_9 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3andSpace_t80 * L_10 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_10);
		int32_t L_11 = (L_10->___space_1);
		NullCheck(L_5);
		Transform_Translate_m606(L_5, L_9, L_11, /*hidden argument*/NULL);
		Transform_t38 * L_12 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Vector3andSpace_t80 * L_13 = (__this->___rotateDegreesPerSecond_3);
		NullCheck(L_13);
		Vector3_t40  L_14 = (L_13->___value_0);
		float L_15 = V_0;
		Vector3_t40  L_16 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3andSpace_t80 * L_17 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_17);
		int32_t L_18 = (L_17->___space_1);
		NullCheck(L_12);
		Transform_Rotate_m607(L_12, L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.CameraRefocus
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ca.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.CameraRefocus
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_CaMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void CameraRefocus__ctor_m272 (CameraRefocus_t83 * __this, Camera_t82 * ___camera, Transform_t38 * ___parent, Vector3_t40  ___origCameraPos, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		Vector3_t40  L_0 = ___origCameraPos;
		__this->___m_OrigCameraPos_3 = L_0;
		Camera_t82 * L_1 = ___camera;
		__this->___Camera_0 = L_1;
		Transform_t38 * L_2 = ___parent;
		__this->___Parent_2 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C" void CameraRefocus_ChangeCamera_m273 (CameraRefocus_t83 * __this, Camera_t82 * ___camera, const MethodInfo* method)
{
	{
		Camera_t82 * L_0 = ___camera;
		__this->___Camera_0 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C" void CameraRefocus_ChangeParent_m274 (CameraRefocus_t83 * __this, Transform_t38 * ___parent, const MethodInfo* method)
{
	{
		Transform_t38 * L_0 = ___parent;
		__this->___Parent_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C" void CameraRefocus_GetFocusPoint_m275 (CameraRefocus_t83 * __this, const MethodInfo* method)
{
	RaycastHit_t193  V_0 = {0};
	{
		Transform_t38 * L_0 = (__this->___Parent_2);
		NullCheck(L_0);
		Transform_t38 * L_1 = Component_get_transform_m510(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t40  L_2 = Transform_get_position_m509(L_1, /*hidden argument*/NULL);
		Vector3_t40  L_3 = (__this->___m_OrigCameraPos_3);
		Vector3_t40  L_4 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Transform_t38 * L_5 = (__this->___Parent_2);
		NullCheck(L_5);
		Transform_t38 * L_6 = Component_get_transform_m510(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t40  L_7 = Transform_get_forward_m608(L_6, /*hidden argument*/NULL);
		bool L_8 = Physics_Raycast_m609(NULL /*static, unused*/, L_4, L_7, (&V_0), (100.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		Vector3_t40  L_9 = RaycastHit_get_point_m610((&V_0), /*hidden argument*/NULL);
		__this->___Lookatpoint_1 = L_9;
		__this->___m_Refocus_4 = 1;
		return;
	}

IL_0051:
	{
		__this->___m_Refocus_4 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C" void CameraRefocus_SetFocusPoint_m276 (CameraRefocus_t83 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Refocus_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t82 * L_1 = (__this->___Camera_0);
		NullCheck(L_1);
		Transform_t38 * L_2 = Component_get_transform_m510(L_1, /*hidden argument*/NULL);
		Vector3_t40  L_3 = (__this->___Lookatpoint_1);
		NullCheck(L_2);
		Transform_LookAt_m611(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// UnityStandardAssets.Utility.CurveControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Cu.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.CurveControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_CuMethodDeclarations.h"

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern TypeInfo* KeyframeU5BU5D_t194_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationCurve_t84_il2cpp_TypeInfo_var;
extern "C" void CurveControlledBob__ctor_m277 (CurveControlledBob_t85 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyframeU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		AnimationCurve_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___HorizontalBobRange_0 = (0.33f);
		__this->___VerticalBobRange_1 = (0.33f);
		KeyframeU5BU5D_t194* L_0 = ((KeyframeU5BU5D_t194*)SZArrayNew(KeyframeU5BU5D_t194_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Keyframe_t195  L_1 = {0};
		Keyframe__ctor_m612(&L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t195 *)(Keyframe_t195 *)SZArrayLdElema(L_0, 0)) = L_1;
		KeyframeU5BU5D_t194* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Keyframe_t195  L_3 = {0};
		Keyframe__ctor_m612(&L_3, (0.5f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t195 *)(Keyframe_t195 *)SZArrayLdElema(L_2, 1)) = L_3;
		KeyframeU5BU5D_t194* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Keyframe_t195  L_5 = {0};
		Keyframe__ctor_m612(&L_5, (1.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t195 *)(Keyframe_t195 *)SZArrayLdElema(L_4, 2)) = L_5;
		KeyframeU5BU5D_t194* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		Keyframe_t195  L_7 = {0};
		Keyframe__ctor_m612(&L_7, (1.5f), (-1.0f), /*hidden argument*/NULL);
		*((Keyframe_t195 *)(Keyframe_t195 *)SZArrayLdElema(L_6, 3)) = L_7;
		KeyframeU5BU5D_t194* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		Keyframe_t195  L_9 = {0};
		Keyframe__ctor_m612(&L_9, (2.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t195 *)(Keyframe_t195 *)SZArrayLdElema(L_8, 4)) = L_9;
		AnimationCurve_t84 * L_10 = (AnimationCurve_t84 *)il2cpp_codegen_object_new (AnimationCurve_t84_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m613(L_10, L_8, /*hidden argument*/NULL);
		__this->___Bobcurve_2 = L_10;
		__this->___VerticaltoHorizontalRatio_3 = (1.0f);
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C" void CurveControlledBob_Setup_m278 (CurveControlledBob_t85 * __this, Camera_t82 * ___camera, float ___bobBaseInterval, const MethodInfo* method)
{
	Keyframe_t195  V_0 = {0};
	{
		float L_0 = ___bobBaseInterval;
		__this->___m_BobBaseInterval_6 = L_0;
		Camera_t82 * L_1 = ___camera;
		NullCheck(L_1);
		Transform_t38 * L_2 = Component_get_transform_m510(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t40  L_3 = Transform_get_localPosition_m614(L_2, /*hidden argument*/NULL);
		__this->___m_OriginalCameraPosition_7 = L_3;
		AnimationCurve_t84 * L_4 = (__this->___Bobcurve_2);
		AnimationCurve_t84 * L_5 = (__this->___Bobcurve_2);
		NullCheck(L_5);
		int32_t L_6 = AnimationCurve_get_length_m615(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Keyframe_t195  L_7 = AnimationCurve_get_Item_m616(L_4, ((int32_t)((int32_t)L_6-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = Keyframe_get_time_m617((&V_0), /*hidden argument*/NULL);
		__this->___m_Time_8 = L_8;
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C" Vector3_t40  CurveControlledBob_DoHeadBob_m279 (CurveControlledBob_t85 * __this, float ___speed, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t40 * L_0 = &(__this->___m_OriginalCameraPosition_7);
		float L_1 = (L_0->___x_1);
		AnimationCurve_t84 * L_2 = (__this->___Bobcurve_2);
		float L_3 = (__this->___m_CyclePositionX_4);
		NullCheck(L_2);
		float L_4 = AnimationCurve_Evaluate_m618(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = (__this->___HorizontalBobRange_0);
		V_0 = ((float)((float)L_1+(float)((float)((float)L_4*(float)L_5))));
		Vector3_t40 * L_6 = &(__this->___m_OriginalCameraPosition_7);
		float L_7 = (L_6->___y_2);
		AnimationCurve_t84 * L_8 = (__this->___Bobcurve_2);
		float L_9 = (__this->___m_CyclePositionY_5);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m618(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = (__this->___VerticalBobRange_1);
		V_1 = ((float)((float)L_7+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m_CyclePositionX_4);
		float L_13 = ___speed;
		float L_14 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = (__this->___m_BobBaseInterval_6);
		__this->___m_CyclePositionX_4 = ((float)((float)L_12+(float)((float)((float)((float)((float)L_13*(float)L_14))/(float)L_15))));
		float L_16 = (__this->___m_CyclePositionY_5);
		float L_17 = ___speed;
		float L_18 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = (__this->___m_BobBaseInterval_6);
		float L_20 = (__this->___VerticaltoHorizontalRatio_3);
		__this->___m_CyclePositionY_5 = ((float)((float)L_16+(float)((float)((float)((float)((float)((float)((float)L_17*(float)L_18))/(float)L_19))*(float)L_20))));
		float L_21 = (__this->___m_CyclePositionX_4);
		float L_22 = (__this->___m_Time_8);
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_00ab;
		}
	}
	{
		float L_23 = (__this->___m_CyclePositionX_4);
		float L_24 = (__this->___m_Time_8);
		__this->___m_CyclePositionX_4 = ((float)((float)L_23-(float)L_24));
	}

IL_00ab:
	{
		float L_25 = (__this->___m_CyclePositionY_5);
		float L_26 = (__this->___m_Time_8);
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00cf;
		}
	}
	{
		float L_27 = (__this->___m_CyclePositionY_5);
		float L_28 = (__this->___m_Time_8);
		__this->___m_CyclePositionY_5 = ((float)((float)L_27-(float)L_28));
	}

IL_00cf:
	{
		float L_29 = V_0;
		float L_30 = V_1;
		Vector3_t40  L_31 = {0};
		Vector3__ctor_m528(&L_31, L_29, L_30, (0.0f), /*hidden argument*/NULL);
		return L_31;
	}
}
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_DrMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityStandardAssets.Utility.DragRigidbody
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr_0.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJoint.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityStandardAssets.Utility.DragRigidbody
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr_0MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::.ctor()
extern "C" void U3CDragObjectU3Ec__Iterator0__ctor_m280 (U3CDragObjectU3Ec__Iterator0_t87 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m281 (U3CDragObjectU3Ec__Iterator0_t87 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m282 (U3CDragObjectU3Ec__Iterator0_t87 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::MoveNext()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern "C" bool U3CDragObjectU3Ec__Iterator0_MoveNext_m283 (U3CDragObjectU3Ec__Iterator0_t87 * __this, const MethodInfo* method)
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
			goto IL_00f0;
		}
	}
	{
		goto IL_0163;
	}

IL_0021:
	{
		DragRigidbody_t86 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		SpringJoint_t89 * L_3 = (L_2->___m_SpringJoint_8);
		NullCheck(L_3);
		Rigidbody_t105 * L_4 = Joint_get_connectedBody_m619(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = Rigidbody_get_drag_m620(L_4, /*hidden argument*/NULL);
		__this->___U3ColdDragU3E__0_0 = L_5;
		DragRigidbody_t86 * L_6 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_6);
		SpringJoint_t89 * L_7 = (L_6->___m_SpringJoint_8);
		NullCheck(L_7);
		Rigidbody_t105 * L_8 = Joint_get_connectedBody_m619(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = Rigidbody_get_angularDrag_m621(L_8, /*hidden argument*/NULL);
		__this->___U3ColdAngularDragU3E__1_1 = L_9;
		DragRigidbody_t86 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		SpringJoint_t89 * L_11 = (L_10->___m_SpringJoint_8);
		NullCheck(L_11);
		Rigidbody_t105 * L_12 = Joint_get_connectedBody_m619(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_set_drag_m622(L_12, (10.0f), /*hidden argument*/NULL);
		DragRigidbody_t86 * L_13 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_13);
		SpringJoint_t89 * L_14 = (L_13->___m_SpringJoint_8);
		NullCheck(L_14);
		Rigidbody_t105 * L_15 = Joint_get_connectedBody_m619(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody_set_angularDrag_m623(L_15, (5.0f), /*hidden argument*/NULL);
		DragRigidbody_t86 * L_16 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_16);
		Camera_t82 * L_17 = DragRigidbody_FindCamera_m289(L_16, /*hidden argument*/NULL);
		__this->___U3CmainCameraU3E__2_2 = L_17;
		goto IL_00f0;
	}

IL_00a1:
	{
		Camera_t82 * L_18 = (__this->___U3CmainCameraU3E__2_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_19 = Input_get_mousePosition_m572(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Ray_t88  L_20 = Camera_ScreenPointToRay_m624(L_18, L_19, /*hidden argument*/NULL);
		__this->___U3CrayU3E__3_3 = L_20;
		DragRigidbody_t86 * L_21 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_21);
		SpringJoint_t89 * L_22 = (L_21->___m_SpringJoint_8);
		NullCheck(L_22);
		Transform_t38 * L_23 = Component_get_transform_m510(L_22, /*hidden argument*/NULL);
		Ray_t88 * L_24 = &(__this->___U3CrayU3E__3_3);
		float L_25 = (__this->___distance_4);
		Vector3_t40  L_26 = Ray_GetPoint_m625(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m523(L_23, L_26, /*hidden argument*/NULL);
		__this->___U24current_6 = NULL;
		__this->___U24PC_5 = 1;
		goto IL_0165;
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_27 = Input_GetMouseButton_m626(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00a1;
		}
	}
	{
		DragRigidbody_t86 * L_28 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_28);
		SpringJoint_t89 * L_29 = (L_28->___m_SpringJoint_8);
		NullCheck(L_29);
		Rigidbody_t105 * L_30 = Joint_get_connectedBody_m619(L_29, /*hidden argument*/NULL);
		bool L_31 = Object_op_Implicit_m544(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_015c;
		}
	}
	{
		DragRigidbody_t86 * L_32 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_32);
		SpringJoint_t89 * L_33 = (L_32->___m_SpringJoint_8);
		NullCheck(L_33);
		Rigidbody_t105 * L_34 = Joint_get_connectedBody_m619(L_33, /*hidden argument*/NULL);
		float L_35 = (__this->___U3ColdDragU3E__0_0);
		NullCheck(L_34);
		Rigidbody_set_drag_m622(L_34, L_35, /*hidden argument*/NULL);
		DragRigidbody_t86 * L_36 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_36);
		SpringJoint_t89 * L_37 = (L_36->___m_SpringJoint_8);
		NullCheck(L_37);
		Rigidbody_t105 * L_38 = Joint_get_connectedBody_m619(L_37, /*hidden argument*/NULL);
		float L_39 = (__this->___U3ColdAngularDragU3E__1_1);
		NullCheck(L_38);
		Rigidbody_set_angularDrag_m623(L_38, L_39, /*hidden argument*/NULL);
		DragRigidbody_t86 * L_40 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_40);
		SpringJoint_t89 * L_41 = (L_40->___m_SpringJoint_8);
		NullCheck(L_41);
		Joint_set_connectedBody_m627(L_41, (Rigidbody_t105 *)NULL, /*hidden argument*/NULL);
	}

IL_015c:
	{
		__this->___U24PC_5 = (-1);
	}

IL_0163:
	{
		return 0;
	}

IL_0165:
	{
		return 1;
	}
	// Dead block : IL_0167: ldloc.1
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::Dispose()
extern "C" void U3CDragObjectU3Ec__Iterator0_Dispose_m284 (U3CDragObjectU3Ec__Iterator0_t87 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CDragObjectU3Ec__Iterator0_Reset_m285 (U3CDragObjectU3Ec__Iterator0_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJointMethodDeclarations.h"
struct GameObject_t9;
struct Rigidbody_t105;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
#define GameObject_AddComponent_TisRigidbody_t105_m629(__this, method) (( Rigidbody_t105 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m563_gshared)(__this, method)
struct GameObject_t9;
struct SpringJoint_t89;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
#define GameObject_AddComponent_TisSpringJoint_t89_m630(__this, method) (( SpringJoint_t89 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m563_gshared)(__this, method)
struct Component_t174;
struct Camera_t82;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t82_m631(__this, method) (( Camera_t82 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)


// System.Void UnityStandardAssets.Utility.DragRigidbody::.ctor()
extern "C" void DragRigidbody__ctor_m286 (DragRigidbody_t86 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody::Update()
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* RaycastHit_t193_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t9_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody_t105_m629_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSpringJoint_t89_m630_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral88;
extern Il2CppCodeGenString* _stringLiteral89;
extern "C" void DragRigidbody_Update_m287 (DragRigidbody_t86 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		RaycastHit_t193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		GameObject_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		GameObject_AddComponent_TisRigidbody_t105_m629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		GameObject_AddComponent_TisSpringJoint_t89_m630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t82 * V_0 = {0};
	RaycastHit_t193  V_1 = {0};
	GameObject_t9 * V_2 = {0};
	Rigidbody_t105 * V_3 = {0};
	Ray_t88  V_4 = {0};
	Ray_t88  V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m632(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
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
		Camera_t82 * L_1 = DragRigidbody_FindCamera_m289(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		Initobj (RaycastHit_t193_il2cpp_TypeInfo_var, (&V_1));
		Camera_t82 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_3 = Input_get_mousePosition_m572(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t88  L_4 = Camera_ScreenPointToRay_m624(L_2, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		Vector3_t40  L_5 = Ray_get_origin_m633((&V_4), /*hidden argument*/NULL);
		Camera_t82 * L_6 = V_0;
		Vector3_t40  L_7 = Input_get_mousePosition_m572(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Ray_t88  L_8 = Camera_ScreenPointToRay_m624(L_6, L_7, /*hidden argument*/NULL);
		V_5 = L_8;
		Vector3_t40  L_9 = Ray_get_direction_m634((&V_5), /*hidden argument*/NULL);
		bool L_10 = Physics_Raycast_m635(NULL /*static, unused*/, L_5, L_9, (&V_1), (100.0f), ((int32_t)-5), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		Rigidbody_t105 * L_11 = RaycastHit_get_rigidbody_m636((&V_1), /*hidden argument*/NULL);
		bool L_12 = Object_op_Implicit_m544(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		Rigidbody_t105 * L_13 = RaycastHit_get_rigidbody_m636((&V_1), /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = Rigidbody_get_isKinematic_m637(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007a;
		}
	}

IL_0079:
	{
		return;
	}

IL_007a:
	{
		SpringJoint_t89 * L_15 = (__this->___m_SpringJoint_8);
		bool L_16 = Object_op_Implicit_m544(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00af;
		}
	}
	{
		GameObject_t9 * L_17 = (GameObject_t9 *)il2cpp_codegen_object_new (GameObject_t9_il2cpp_TypeInfo_var);
		GameObject__ctor_m566(L_17, _stringLiteral88, /*hidden argument*/NULL);
		V_2 = L_17;
		GameObject_t9 * L_18 = V_2;
		NullCheck(L_18);
		Rigidbody_t105 * L_19 = GameObject_AddComponent_TisRigidbody_t105_m629(L_18, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t105_m629_MethodInfo_var);
		V_3 = L_19;
		GameObject_t9 * L_20 = V_2;
		NullCheck(L_20);
		SpringJoint_t89 * L_21 = GameObject_AddComponent_TisSpringJoint_t89_m630(L_20, /*hidden argument*/GameObject_AddComponent_TisSpringJoint_t89_m630_MethodInfo_var);
		__this->___m_SpringJoint_8 = L_21;
		Rigidbody_t105 * L_22 = V_3;
		NullCheck(L_22);
		Rigidbody_set_isKinematic_m638(L_22, 1, /*hidden argument*/NULL);
	}

IL_00af:
	{
		SpringJoint_t89 * L_23 = (__this->___m_SpringJoint_8);
		NullCheck(L_23);
		Transform_t38 * L_24 = Component_get_transform_m510(L_23, /*hidden argument*/NULL);
		Vector3_t40  L_25 = RaycastHit_get_point_m610((&V_1), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_m523(L_24, L_25, /*hidden argument*/NULL);
		SpringJoint_t89 * L_26 = (__this->___m_SpringJoint_8);
		Vector3_t40  L_27 = Vector3_get_zero_m517(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		Joint_set_anchor_m639(L_26, L_27, /*hidden argument*/NULL);
		SpringJoint_t89 * L_28 = (__this->___m_SpringJoint_8);
		NullCheck(L_28);
		SpringJoint_set_spring_m640(L_28, (50.0f), /*hidden argument*/NULL);
		SpringJoint_t89 * L_29 = (__this->___m_SpringJoint_8);
		NullCheck(L_29);
		SpringJoint_set_damper_m641(L_29, (5.0f), /*hidden argument*/NULL);
		SpringJoint_t89 * L_30 = (__this->___m_SpringJoint_8);
		NullCheck(L_30);
		SpringJoint_set_maxDistance_m642(L_30, (0.2f), /*hidden argument*/NULL);
		SpringJoint_t89 * L_31 = (__this->___m_SpringJoint_8);
		Rigidbody_t105 * L_32 = RaycastHit_get_rigidbody_m636((&V_1), /*hidden argument*/NULL);
		NullCheck(L_31);
		Joint_set_connectedBody_m627(L_31, L_32, /*hidden argument*/NULL);
		float L_33 = RaycastHit_get_distance_m643((&V_1), /*hidden argument*/NULL);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t172_il2cpp_TypeInfo_var, &L_34);
		MonoBehaviour_StartCoroutine_m644(__this, _stringLiteral89, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.DragRigidbody::DragObject(System.Single)
extern TypeInfo* U3CDragObjectU3Ec__Iterator0_t87_il2cpp_TypeInfo_var;
extern "C" Object_t * DragRigidbody_DragObject_m288 (DragRigidbody_t86 * __this, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDragObjectU3Ec__Iterator0_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	U3CDragObjectU3Ec__Iterator0_t87 * V_0 = {0};
	{
		U3CDragObjectU3Ec__Iterator0_t87 * L_0 = (U3CDragObjectU3Ec__Iterator0_t87 *)il2cpp_codegen_object_new (U3CDragObjectU3Ec__Iterator0_t87_il2cpp_TypeInfo_var);
		U3CDragObjectU3Ec__Iterator0__ctor_m280(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDragObjectU3Ec__Iterator0_t87 * L_1 = V_0;
		float L_2 = ___distance;
		NullCheck(L_1);
		L_1->___distance_4 = L_2;
		U3CDragObjectU3Ec__Iterator0_t87 * L_3 = V_0;
		float L_4 = ___distance;
		NullCheck(L_3);
		L_3->___U3CU24U3Edistance_7 = L_4;
		U3CDragObjectU3Ec__Iterator0_t87 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_8 = __this;
		U3CDragObjectU3Ec__Iterator0_t87 * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
extern const MethodInfo* Component_GetComponent_TisCamera_t82_m631_MethodInfo_var;
extern "C" Camera_t82 * DragRigidbody_FindCamera_m289 (DragRigidbody_t86 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t82_m631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t82 * L_0 = Component_GetComponent_TisCamera_t82_m631(__this, /*hidden argument*/Component_GetComponent_TisCamera_t82_m631_MethodInfo_var);
		bool L_1 = Object_op_Implicit_m544(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Camera_t82 * L_2 = Component_GetComponent_TisCamera_t82_m631(__this, /*hidden argument*/Component_GetComponent_TisCamera_t82_m631_MethodInfo_var);
		return L_2;
	}

IL_0017:
	{
		Camera_t82 * L_3 = Camera_get_main_m645(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityStandardAssets.Utility.DynamicShadowSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dy.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.DynamicShadowSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_DyMethodDeclarations.h"

// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::.ctor()
extern "C" void DynamicShadowSettings__ctor_m290 (DynamicShadowSettings_t91 * __this, const MethodInfo* method)
{
	{
		__this->___minHeight_3 = (10.0f);
		__this->___minShadowDistance_4 = (80.0f);
		__this->___minShadowBias_5 = (1.0f);
		__this->___maxHeight_6 = (1000.0f);
		__this->___maxShadowDistance_7 = (10000.0f);
		__this->___maxShadowBias_8 = (0.1f);
		__this->___adaptTime_9 = (1.0f);
		__this->___m_OriginalStrength_12 = (1.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Start()
extern "C" void DynamicShadowSettings_Start_m291 (DynamicShadowSettings_t91 * __this, const MethodInfo* method)
{
	{
		Light_t90 * L_0 = (__this->___sunLight_2);
		NullCheck(L_0);
		float L_1 = Light_get_shadowStrength_m646(L_0, /*hidden argument*/NULL);
		__this->___m_OriginalStrength_12 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Update()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void DynamicShadowSettings_Update_m292 (DynamicShadowSettings_t91 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t88  V_0 = {0};
	RaycastHit_t193  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t40  V_4 = {0};
	{
		Camera_t82 * L_0 = Camera_get_main_m645(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t38 * L_1 = Component_get_transform_m510(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t40  L_2 = Transform_get_position_m509(L_1, /*hidden argument*/NULL);
		Vector3_t40  L_3 = Vector3_get_up_m647(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t40  L_4 = Vector3_op_UnaryNegation_m648(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Ray__ctor_m649((&V_0), L_2, L_4, /*hidden argument*/NULL);
		Transform_t38 * L_5 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t40  L_6 = Transform_get_position_m509(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = ((&V_4)->___y_2);
		V_2 = L_7;
		Ray_t88  L_8 = V_0;
		bool L_9 = Physics_Raycast_m650(NULL /*static, unused*/, L_8, (&V_1), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		float L_10 = RaycastHit_get_distance_m643((&V_1), /*hidden argument*/NULL);
		V_2 = L_10;
	}

IL_004a:
	{
		float L_11 = V_2;
		float L_12 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_13 = fabsf(((float)((float)L_11-(float)L_12)));
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		float L_14 = (__this->___m_SmoothHeight_10);
		float L_15 = V_2;
		float* L_16 = &(__this->___m_ChangeSpeed_11);
		float L_17 = (__this->___adaptTime_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_18 = Mathf_SmoothDamp_m651(NULL /*static, unused*/, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		__this->___m_SmoothHeight_10 = L_18;
	}

IL_007f:
	{
		float L_19 = (__this->___minHeight_3);
		float L_20 = (__this->___maxHeight_6);
		float L_21 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_22 = Mathf_InverseLerp_m575(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		float L_23 = (__this->___minShadowDistance_4);
		float L_24 = (__this->___maxShadowDistance_7);
		float L_25 = V_3;
		float L_26 = Mathf_Lerp_m526(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		QualitySettings_set_shadowDistance_m652(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Light_t90 * L_27 = (__this->___sunLight_2);
		float L_28 = (__this->___minShadowBias_5);
		float L_29 = (__this->___maxShadowBias_8);
		float L_30 = V_3;
		float L_31 = V_3;
		float L_32 = Mathf_Lerp_m526(NULL /*static, unused*/, L_28, L_29, ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_30))*(float)((float)((float)(1.0f)-(float)L_31)))))), /*hidden argument*/NULL);
		NullCheck(L_27);
		Light_set_shadowBias_m653(L_27, L_32, /*hidden argument*/NULL);
		Light_t90 * L_33 = (__this->___sunLight_2);
		float L_34 = (__this->___m_OriginalStrength_12);
		float L_35 = V_3;
		float L_36 = Mathf_Lerp_m526(NULL /*static, unused*/, L_34, (0.0f), L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Light_set_shadowStrength_m654(L_33, L_36, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FOMethodDeclarations.h"

// UnityStandardAssets.Utility.FOVKick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_1.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::.ctor()
extern "C" void U3CFOVKickUpU3Ec__Iterator1__ctor_m293 (U3CFOVKickUpU3Ec__Iterator1_t93 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CFOVKickUpU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m294 (U3CFOVKickUpU3Ec__Iterator1_t93 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CFOVKickUpU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m295 (U3CFOVKickUpU3Ec__Iterator1_t93 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::MoveNext()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForEndOfFrame_t197_il2cpp_TypeInfo_var;
extern "C" bool U3CFOVKickUpU3Ec__Iterator1_MoveNext_m296 (U3CFOVKickUpU3Ec__Iterator1_t93 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		WaitForEndOfFrame_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00e9;
	}

IL_0021:
	{
		FOVKick_t92 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Camera_t82 * L_3 = (L_2->___Camera_0);
		NullCheck(L_3);
		float L_4 = Camera_get_fieldOfView_m655(L_3, /*hidden argument*/NULL);
		FOVKick_t92 * L_5 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_5);
		float L_6 = (L_5->___originalFov_1);
		FOVKick_t92 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		float L_8 = (L_7->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->___U3CtU3E__0_0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t92 * L_10 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		Camera_t82 * L_11 = (L_10->___Camera_0);
		FOVKick_t92 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		float L_13 = (L_12->___originalFov_1);
		FOVKick_t92 * L_14 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_14);
		AnimationCurve_t84 * L_15 = (L_14->___IncreaseCurve_5);
		float L_16 = (__this->___U3CtU3E__0_0);
		FOVKick_t92 * L_17 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_17);
		float L_18 = (L_17->___TimeToIncrease_3);
		NullCheck(L_15);
		float L_19 = AnimationCurve_Evaluate_m618(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/NULL);
		FOVKick_t92 * L_20 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_20);
		float L_21 = (L_20->___FOVIncrease_2);
		NullCheck(L_11);
		Camera_set_fieldOfView_m656(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), /*hidden argument*/NULL);
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22+(float)L_23));
		WaitForEndOfFrame_t197 * L_24 = (WaitForEndOfFrame_t197 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t197_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m657(L_24, /*hidden argument*/NULL);
		__this->___U24current_2 = L_24;
		__this->___U24PC_1 = 1;
		goto IL_00eb;
	}

IL_00cc:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		FOVKick_t92 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		float L_27 = (L_26->___TimeToIncrease_3);
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_0059;
		}
	}
	{
		__this->___U24PC_1 = (-1);
	}

IL_00e9:
	{
		return 0;
	}

IL_00eb:
	{
		return 1;
	}
	// Dead block : IL_00ed: ldloc.1
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::Dispose()
extern "C" void U3CFOVKickUpU3Ec__Iterator1_Dispose_m297 (U3CFOVKickUpU3Ec__Iterator1_t93 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CFOVKickUpU3Ec__Iterator1_Reset_m298 (U3CFOVKickUpU3Ec__Iterator1_t93 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::.ctor()
extern "C" void U3CFOVKickDownU3Ec__Iterator2__ctor_m299 (U3CFOVKickDownU3Ec__Iterator2_t94 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CFOVKickDownU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m300 (U3CFOVKickDownU3Ec__Iterator2_t94 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CFOVKickDownU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m301 (U3CFOVKickDownU3Ec__Iterator2_t94 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::MoveNext()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForEndOfFrame_t197_il2cpp_TypeInfo_var;
extern "C" bool U3CFOVKickDownU3Ec__Iterator2_MoveNext_m302 (U3CFOVKickDownU3Ec__Iterator2_t94 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		WaitForEndOfFrame_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00fe;
	}

IL_0021:
	{
		FOVKick_t92 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Camera_t82 * L_3 = (L_2->___Camera_0);
		NullCheck(L_3);
		float L_4 = Camera_get_fieldOfView_m655(L_3, /*hidden argument*/NULL);
		FOVKick_t92 * L_5 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_5);
		float L_6 = (L_5->___originalFov_1);
		FOVKick_t92 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		float L_8 = (L_7->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->___U3CtU3E__0_0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t92 * L_10 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		Camera_t82 * L_11 = (L_10->___Camera_0);
		FOVKick_t92 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		float L_13 = (L_12->___originalFov_1);
		FOVKick_t92 * L_14 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_14);
		AnimationCurve_t84 * L_15 = (L_14->___IncreaseCurve_5);
		float L_16 = (__this->___U3CtU3E__0_0);
		FOVKick_t92 * L_17 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_17);
		float L_18 = (L_17->___TimeToDecrease_4);
		NullCheck(L_15);
		float L_19 = AnimationCurve_Evaluate_m618(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/NULL);
		FOVKick_t92 * L_20 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_20);
		float L_21 = (L_20->___FOVIncrease_2);
		NullCheck(L_11);
		Camera_set_fieldOfView_m656(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), /*hidden argument*/NULL);
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22-(float)L_23));
		WaitForEndOfFrame_t197 * L_24 = (WaitForEndOfFrame_t197 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t197_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m657(L_24, /*hidden argument*/NULL);
		__this->___U24current_2 = L_24;
		__this->___U24PC_1 = 1;
		goto IL_0100;
	}

IL_00cc:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		if ((((float)L_25) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		FOVKick_t92 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		Camera_t82 * L_27 = (L_26->___Camera_0);
		FOVKick_t92 * L_28 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_28);
		float L_29 = (L_28->___originalFov_1);
		NullCheck(L_27);
		Camera_set_fieldOfView_m656(L_27, L_29, /*hidden argument*/NULL);
		__this->___U24PC_1 = (-1);
	}

IL_00fe:
	{
		return 0;
	}

IL_0100:
	{
		return 1;
	}
	// Dead block : IL_0102: ldloc.1
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::Dispose()
extern "C" void U3CFOVKickDownU3Ec__Iterator2_Dispose_m303 (U3CFOVKickDownU3Ec__Iterator2_t94 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CFOVKickDownU3Ec__Iterator2_Reset_m304 (U3CFOVKickDownU3Ec__Iterator2_t94 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.FOVKick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_1MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
extern "C" void FOVKick__ctor_m305 (FOVKick_t92 * __this, const MethodInfo* method)
{
	{
		__this->___FOVIncrease_2 = (3.0f);
		__this->___TimeToIncrease_3 = (1.0f);
		__this->___TimeToDecrease_4 = (1.0f);
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
extern "C" void FOVKick_Setup_m306 (FOVKick_t92 * __this, Camera_t82 * ___camera, const MethodInfo* method)
{
	{
		Camera_t82 * L_0 = ___camera;
		FOVKick_CheckStatus_m307(__this, L_0, /*hidden argument*/NULL);
		Camera_t82 * L_1 = ___camera;
		__this->___Camera_0 = L_1;
		Camera_t82 * L_2 = ___camera;
		NullCheck(L_2);
		float L_3 = Camera_get_fieldOfView_m655(L_2, /*hidden argument*/NULL);
		__this->___originalFov_1 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral90;
extern Il2CppCodeGenString* _stringLiteral91;
extern "C" void FOVKick_CheckStatus_m307 (FOVKick_t92 * __this, Camera_t82 * ___camera, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t82 * L_0 = ___camera;
		bool L_1 = Object_op_Equality_m466(NULL /*static, unused*/, L_0, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t143 * L_2 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_2, _stringLiteral90, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		AnimationCurve_t84 * L_3 = (__this->___IncreaseCurve_5);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Exception_t143 * L_4 = (Exception_t143 *)il2cpp_codegen_object_new (Exception_t143_il2cpp_TypeInfo_var);
		Exception__ctor_m449(L_4, _stringLiteral91, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
extern "C" void FOVKick_ChangeCamera_m308 (FOVKick_t92 * __this, Camera_t82 * ___camera, const MethodInfo* method)
{
	{
		Camera_t82 * L_0 = ___camera;
		__this->___Camera_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
extern TypeInfo* U3CFOVKickUpU3Ec__Iterator1_t93_il2cpp_TypeInfo_var;
extern "C" Object_t * FOVKick_FOVKickUp_m309 (FOVKick_t92 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CFOVKickUpU3Ec__Iterator1_t93_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	U3CFOVKickUpU3Ec__Iterator1_t93 * V_0 = {0};
	{
		U3CFOVKickUpU3Ec__Iterator1_t93 * L_0 = (U3CFOVKickUpU3Ec__Iterator1_t93 *)il2cpp_codegen_object_new (U3CFOVKickUpU3Ec__Iterator1_t93_il2cpp_TypeInfo_var);
		U3CFOVKickUpU3Ec__Iterator1__ctor_m293(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFOVKickUpU3Ec__Iterator1_t93 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CFOVKickUpU3Ec__Iterator1_t93 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
extern TypeInfo* U3CFOVKickDownU3Ec__Iterator2_t94_il2cpp_TypeInfo_var;
extern "C" Object_t * FOVKick_FOVKickDown_m310 (FOVKick_t92 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CFOVKickDownU3Ec__Iterator2_t94_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	U3CFOVKickDownU3Ec__Iterator2_t94 * V_0 = {0};
	{
		U3CFOVKickDownU3Ec__Iterator2_t94 * L_0 = (U3CFOVKickDownU3Ec__Iterator2_t94 *)il2cpp_codegen_object_new (U3CFOVKickDownU3Ec__Iterator2_t94_il2cpp_TypeInfo_var);
		U3CFOVKickDownU3Ec__Iterator2__ctor_m299(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFOVKickDownU3Ec__Iterator2_t94 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CFOVKickDownU3Ec__Iterator2_t94 * L_2 = V_0;
		return L_2;
	}
}
// UnityStandardAssets.Utility.FPSCounter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FP.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.FPSCounter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FPMethodDeclarations.h"

// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
struct Component_t174;
struct GUIText_t95;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t95_m658(__this, method) (( GUIText_t95 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)


// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
extern "C" void FPSCounter__ctor_m311 (FPSCounter_t96 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
extern const MethodInfo* Component_GetComponent_TisGUIText_t95_m658_MethodInfo_var;
extern "C" void FPSCounter_Start_m312 (FPSCounter_t96 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGUIText_t95_m658_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_realtimeSinceStartup_m605(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_FpsNextPeriod_5 = ((float)((float)L_0+(float)(0.5f)));
		GUIText_t95 * L_1 = Component_GetComponent_TisGUIText_t95_m658(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t95_m658_MethodInfo_var);
		__this->___m_GuiText_7 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral92;
extern "C" void FPSCounter_Update_m313 (FPSCounter_t96 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___m_FpsAccumulator_4);
		__this->___m_FpsAccumulator_4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		float L_1 = Time_get_realtimeSinceStartup_m605(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___m_FpsNextPeriod_5);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (__this->___m_FpsAccumulator_4);
		__this->___m_CurrentFps_6 = (((int32_t)((float)((float)(((float)L_3))/(float)(0.5f)))));
		__this->___m_FpsAccumulator_4 = 0;
		float L_4 = (__this->___m_FpsNextPeriod_5);
		__this->___m_FpsNextPeriod_5 = ((float)((float)L_4+(float)(0.5f)));
		GUIText_t95 * L_5 = (__this->___m_GuiText_7);
		int32_t L_6 = (__this->___m_CurrentFps_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m479(NULL /*static, unused*/, _stringLiteral92, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIText_set_text_m659(L_5, L_9, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// UnityStandardAssets.Utility.FollowTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Fo_2.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.FollowTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Fo_2MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.FollowTarget::.ctor()
extern "C" void FollowTarget__ctor_m314 (FollowTarget_t97 * __this, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = {0};
		Vector3__ctor_m528(&L_0, (0.0f), (7.5f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_3 = L_0;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FollowTarget::LateUpdate()
extern "C" void FollowTarget_LateUpdate_m315 (FollowTarget_t97 * __this, const MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Transform_t38 * L_1 = (__this->___target_2);
		NullCheck(L_1);
		Vector3_t40  L_2 = Transform_get_position_m509(L_1, /*hidden argument*/NULL);
		Vector3_t40  L_3 = (__this->___offset_3);
		Vector3_t40  L_4 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m523(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// ForcedReset
#include "AssemblyU2DCSharpU2Dfirstpass_ForcedReset.h"
#ifndef _MSC_VER
#else
#endif
// ForcedReset
#include "AssemblyU2DCSharpU2Dfirstpass_ForcedResetMethodDeclarations.h"

// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"


// System.Void ForcedReset::.ctor()
extern "C" void ForcedReset__ctor_m316 (ForcedReset_t98 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ForcedReset::Update()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral93;
extern "C" void ForcedReset_Update_m317 (ForcedReset_t98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		bool L_0 = CrossPlatformInputManager_GetButtonDown_m179(NULL /*static, unused*/, _stringLiteral93, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = Application_get_loadedLevelName_m551(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevelAsync_m660(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_LeMethodDeclarations.h"

// UnityStandardAssets.Utility.LerpControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le_0.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::.ctor()
extern "C" void U3CDoBobCycleU3Ec__Iterator3__ctor_m318 (U3CDoBobCycleU3Ec__Iterator3_t100 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDoBobCycleU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m319 (U3CDoBobCycleU3Ec__Iterator3_t100 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDoBobCycleU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m320 (U3CDoBobCycleU3Ec__Iterator3_t100 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::MoveNext()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForFixedUpdate_t198_il2cpp_TypeInfo_var;
extern "C" bool U3CDoBobCycleU3Ec__Iterator3_MoveNext_m321 (U3CDoBobCycleU3Ec__Iterator3_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		WaitForFixedUpdate_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0090;
		}
		if (L_1 == 2)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_013e;
	}

IL_0025:
	{
		__this->___U3CtU3E__0_0 = (0.0f);
		goto IL_0090;
	}

IL_0035:
	{
		LerpControlledBob_t99 * L_2 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t99 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		float L_4 = (L_3->___BobAmount_1);
		float L_5 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t99 * L_6 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_6);
		float L_7 = (L_6->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Lerp_m526(NULL /*static, unused*/, (0.0f), L_4, ((float)((float)L_5/(float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___m_Offset_2 = L_8;
		float L_9 = (__this->___U3CtU3E__0_0);
		float L_10 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_9+(float)L_10));
		WaitForFixedUpdate_t198 * L_11 = (WaitForFixedUpdate_t198 *)il2cpp_codegen_object_new (WaitForFixedUpdate_t198_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m661(L_11, /*hidden argument*/NULL);
		__this->___U24current_2 = L_11;
		__this->___U24PC_1 = 1;
		goto IL_0140;
	}

IL_0090:
	{
		float L_12 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t99 * L_13 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_13);
		float L_14 = (L_13->___BobDuration_0);
		if ((((float)L_12) < ((float)L_14)))
		{
			goto IL_0035;
		}
	}
	{
		__this->___U3CtU3E__0_0 = (0.0f);
		goto IL_0111;
	}

IL_00b6:
	{
		LerpControlledBob_t99 * L_15 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t99 * L_16 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_16);
		float L_17 = (L_16->___BobAmount_1);
		float L_18 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t99 * L_19 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_19);
		float L_20 = (L_19->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Lerp_m526(NULL /*static, unused*/, L_17, (0.0f), ((float)((float)L_18/(float)L_20)), /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->___m_Offset_2 = L_21;
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22+(float)L_23));
		WaitForFixedUpdate_t198 * L_24 = (WaitForFixedUpdate_t198 *)il2cpp_codegen_object_new (WaitForFixedUpdate_t198_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m661(L_24, /*hidden argument*/NULL);
		__this->___U24current_2 = L_24;
		__this->___U24PC_1 = 2;
		goto IL_0140;
	}

IL_0111:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t99 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		float L_27 = (L_26->___BobDuration_0);
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		LerpControlledBob_t99 * L_28 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_28);
		L_28->___m_Offset_2 = (0.0f);
		__this->___U24PC_1 = (-1);
	}

IL_013e:
	{
		return 0;
	}

IL_0140:
	{
		return 1;
	}
	// Dead block : IL_0142: ldloc.1
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::Dispose()
extern "C" void U3CDoBobCycleU3Ec__Iterator3_Dispose_m322 (U3CDoBobCycleU3Ec__Iterator3_t100 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CDoBobCycleU3Ec__Iterator3_Reset_m323 (U3CDoBobCycleU3Ec__Iterator3_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.LerpControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
extern "C" void LerpControlledBob__ctor_m324 (LerpControlledBob_t99 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
extern "C" float LerpControlledBob_Offset_m325 (LerpControlledBob_t99 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Offset_2);
		return L_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
extern TypeInfo* U3CDoBobCycleU3Ec__Iterator3_t100_il2cpp_TypeInfo_var;
extern "C" Object_t * LerpControlledBob_DoBobCycle_m326 (LerpControlledBob_t99 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDoBobCycleU3Ec__Iterator3_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	U3CDoBobCycleU3Ec__Iterator3_t100 * V_0 = {0};
	{
		U3CDoBobCycleU3Ec__Iterator3_t100 * L_0 = (U3CDoBobCycleU3Ec__Iterator3_t100 *)il2cpp_codegen_object_new (U3CDoBobCycleU3Ec__Iterator3_t100_il2cpp_TypeInfo_var);
		U3CDoBobCycleU3Ec__Iterator3__ctor_m318(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoBobCycleU3Ec__Iterator3_t100 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CDoBobCycleU3Ec__Iterator3_t100 * L_2 = V_0;
		return L_2;
	}
}
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_ObMethodDeclarations.h"

// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityStandardAssets.Utility.ObjectResetter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob_0.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
struct Component_t174;
struct TransformU5BU5D_t101;
struct Component_t174;
struct ObjectU5BU5D_t146;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t146* Component_GetComponentsInChildren_TisObject_t_m663_gshared (Component_t174 * __this, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m663(__this, method) (( ObjectU5BU5D_t146* (*) (Component_t174 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m663_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
#define Component_GetComponentsInChildren_TisTransform_t38_m662(__this, method) (( TransformU5BU5D_t101* (*) (Component_t174 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m663_gshared)(__this, method)


// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::.ctor()
extern "C" void U3CResetCoroutineU3Ec__Iterator4__ctor_m327 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CResetCoroutineU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m328 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CResetCoroutineU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m329 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::MoveNext()
extern TypeInfo* WaitForSeconds_t199_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisTransform_t38_m662_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral94;
extern "C" bool U3CResetCoroutineU3Ec__Iterator4_MoveNext_m330 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Component_GetComponentsInChildren_TisTransform_t38_m662_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		_stringLiteral94 = il2cpp_codegen_string_literal_from_index(94);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_4);
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0142;
	}

IL_0021:
	{
		float L_2 = (__this->___delay_0);
		WaitForSeconds_t199 * L_3 = (WaitForSeconds_t199 *)il2cpp_codegen_object_new (WaitForSeconds_t199_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m664(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_5 = L_3;
		__this->___U24PC_4 = 1;
		goto IL_0144;
	}

IL_003e:
	{
		ObjectResetter_t102 * L_4 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_4);
		TransformU5BU5D_t101* L_5 = Component_GetComponentsInChildren_TisTransform_t38_m662(L_4, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t38_m662_MethodInfo_var);
		__this->___U3CU24s_17U3E__0_1 = L_5;
		__this->___U3CU24s_18U3E__1_2 = 0;
		goto IL_00a3;
	}

IL_005b:
	{
		TransformU5BU5D_t101* L_6 = (__this->___U3CU24s_17U3E__0_1);
		int32_t L_7 = (__this->___U3CU24s_18U3E__1_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		__this->___U3CtU3E__2_3 = (*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_6, L_8));
		ObjectResetter_t102 * L_9 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_9);
		List_1_t104 * L_10 = (L_9->___originalStructure_4);
		Transform_t38 * L_11 = (__this->___U3CtU3E__2_3);
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, Transform_t38 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(!0) */, L_10, L_11);
		if (L_12)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t38 * L_13 = (__this->___U3CtU3E__2_3);
		NullCheck(L_13);
		Transform_set_parent_m512(L_13, (Transform_t38 *)NULL, /*hidden argument*/NULL);
	}

IL_0095:
	{
		int32_t L_14 = (__this->___U3CU24s_18U3E__1_2);
		__this->___U3CU24s_18U3E__1_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_15 = (__this->___U3CU24s_18U3E__1_2);
		TransformU5BU5D_t101* L_16 = (__this->___U3CU24s_17U3E__0_1);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_005b;
		}
	}
	{
		ObjectResetter_t102 * L_17 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_17);
		Transform_t38 * L_18 = Component_get_transform_m510(L_17, /*hidden argument*/NULL);
		ObjectResetter_t102 * L_19 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_19);
		Vector3_t40  L_20 = (L_19->___originalPosition_2);
		NullCheck(L_18);
		Transform_set_position_m523(L_18, L_20, /*hidden argument*/NULL);
		ObjectResetter_t102 * L_21 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_21);
		Transform_t38 * L_22 = Component_get_transform_m510(L_21, /*hidden argument*/NULL);
		ObjectResetter_t102 * L_23 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_23);
		Quaternion_t106  L_24 = (L_23->___originalRotation_3);
		NullCheck(L_22);
		Transform_set_rotation_m665(L_22, L_24, /*hidden argument*/NULL);
		ObjectResetter_t102 * L_25 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_25);
		Rigidbody_t105 * L_26 = (L_25->___Rigidbody_5);
		bool L_27 = Object_op_Implicit_m544(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_012b;
		}
	}
	{
		ObjectResetter_t102 * L_28 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_28);
		Rigidbody_t105 * L_29 = (L_28->___Rigidbody_5);
		Vector3_t40  L_30 = Vector3_get_zero_m517(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody_set_velocity_m666(L_29, L_30, /*hidden argument*/NULL);
		ObjectResetter_t102 * L_31 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_31);
		Rigidbody_t105 * L_32 = (L_31->___Rigidbody_5);
		Vector3_t40  L_33 = Vector3_get_zero_m517(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_32);
		Rigidbody_set_angularVelocity_m667(L_32, L_33, /*hidden argument*/NULL);
	}

IL_012b:
	{
		ObjectResetter_t102 * L_34 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_34);
		Component_SendMessage_m668(L_34, _stringLiteral94, /*hidden argument*/NULL);
		__this->___U24PC_4 = (-1);
	}

IL_0142:
	{
		return 0;
	}

IL_0144:
	{
		return 1;
	}
	// Dead block : IL_0146: ldloc.1
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::Dispose()
extern "C" void U3CResetCoroutineU3Ec__Iterator4_Dispose_m331 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_4 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CResetCoroutineU3Ec__Iterator4_Reset_m332 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.ObjectResetter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob_0MethodDeclarations.h"

struct Component_t174;
struct Rigidbody_t105;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t105_m669(__this, method) (( Rigidbody_t105 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)


// System.Void UnityStandardAssets.Utility.ObjectResetter::.ctor()
extern "C" void ObjectResetter__ctor_m333 (ObjectResetter_t102 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::Start()
extern TypeInfo* List_1_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisTransform_t38_m662_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m670_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t105_m669_MethodInfo_var;
extern "C" void ObjectResetter_Start_m334 (ObjectResetter_t102 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		Component_GetComponentsInChildren_TisTransform_t38_m662_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		List_1__ctor_m670_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		Component_GetComponent_TisRigidbody_t105_m669_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		s_Il2CppMethodIntialized = true;
	}
	{
		TransformU5BU5D_t101* L_0 = Component_GetComponentsInChildren_TisTransform_t38_m662(__this, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t38_m662_MethodInfo_var);
		List_1_t104 * L_1 = (List_1_t104 *)il2cpp_codegen_object_new (List_1_t104_il2cpp_TypeInfo_var);
		List_1__ctor_m670(L_1, (Object_t*)(Object_t*)L_0, /*hidden argument*/List_1__ctor_m670_MethodInfo_var);
		__this->___originalStructure_4 = L_1;
		Transform_t38 * L_2 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t40  L_3 = Transform_get_position_m509(L_2, /*hidden argument*/NULL);
		__this->___originalPosition_2 = L_3;
		Transform_t38 * L_4 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t106  L_5 = Transform_get_rotation_m589(L_4, /*hidden argument*/NULL);
		__this->___originalRotation_3 = L_5;
		Rigidbody_t105 * L_6 = Component_GetComponent_TisRigidbody_t105_m669(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t105_m669_MethodInfo_var);
		__this->___Rigidbody_5 = L_6;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::DelayedReset(System.Single)
extern "C" void ObjectResetter_DelayedReset_m335 (ObjectResetter_t102 * __this, float ___delay, const MethodInfo* method)
{
	{
		float L_0 = ___delay;
		Object_t * L_1 = ObjectResetter_ResetCoroutine_m336(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m671(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ObjectResetter::ResetCoroutine(System.Single)
extern TypeInfo* U3CResetCoroutineU3Ec__Iterator4_t103_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectResetter_ResetCoroutine_m336 (ObjectResetter_t102 * __this, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CResetCoroutineU3Ec__Iterator4_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	U3CResetCoroutineU3Ec__Iterator4_t103 * V_0 = {0};
	{
		U3CResetCoroutineU3Ec__Iterator4_t103 * L_0 = (U3CResetCoroutineU3Ec__Iterator4_t103 *)il2cpp_codegen_object_new (U3CResetCoroutineU3Ec__Iterator4_t103_il2cpp_TypeInfo_var);
		U3CResetCoroutineU3Ec__Iterator4__ctor_m327(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CResetCoroutineU3Ec__Iterator4_t103 * L_1 = V_0;
		float L_2 = ___delay;
		NullCheck(L_1);
		L_1->___delay_0 = L_2;
		U3CResetCoroutineU3Ec__Iterator4_t103 * L_3 = V_0;
		float L_4 = ___delay;
		NullCheck(L_3);
		L_3->___U3CU24U3Edelay_6 = L_4;
		U3CResetCoroutineU3Ec__Iterator4_t103 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_7 = __this;
		U3CResetCoroutineU3Ec__Iterator4_t103 * L_6 = V_0;
		return L_6;
	}
}
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_PaMethodDeclarations.h"

// UnityStandardAssets.Utility.ParticleSystemDestroyer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa_0.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
struct Component_t174;
struct ParticleSystemU5BU5D_t107;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentsInChildren_TisParticleSystem_t108_m672(__this, method) (( ParticleSystemU5BU5D_t107* (*) (Component_t174 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m663_gshared)(__this, method)


// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::.ctor()
extern "C" void U3CStartU3Ec__Iterator5__ctor_m337 (U3CStartU3Ec__Iterator5_t110 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m338 (U3CStartU3Ec__Iterator5_t110 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_9);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m339 (U3CStartU3Ec__Iterator5_t110 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_9);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::MoveNext()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t199_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisParticleSystem_t108_m672_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral95;
extern Il2CppCodeGenString* _stringLiteral96;
extern "C" bool U3CStartU3Ec__Iterator5_MoveNext_m340 (U3CStartU3Ec__Iterator5_t110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		WaitForSeconds_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Component_GetComponentsInChildren_TisParticleSystem_t108_m672_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		_stringLiteral95 = il2cpp_codegen_string_literal_from_index(95);
		_stringLiteral96 = il2cpp_codegen_string_literal_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_8);
		V_0 = L_0;
		__this->___U24PC_8 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_00e7;
		}
		if (L_1 == 2)
		{
			goto IL_01ac;
		}
	}
	{
		goto IL_01c3;
	}

IL_0025:
	{
		ParticleSystemDestroyer_t109 * L_2 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_2);
		ParticleSystemU5BU5D_t107* L_3 = Component_GetComponentsInChildren_TisParticleSystem_t108_m672(L_2, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t108_m672_MethodInfo_var);
		__this->___U3CsystemsU3E__0_0 = L_3;
		ParticleSystemU5BU5D_t107* L_4 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3CU24s_19U3E__1_1 = L_4;
		__this->___U3CU24s_20U3E__2_2 = 0;
		goto IL_0095;
	}

IL_004e:
	{
		ParticleSystemU5BU5D_t107* L_5 = (__this->___U3CU24s_19U3E__1_1);
		int32_t L_6 = (__this->___U3CU24s_20U3E__2_2);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U3CsystemU3E__3_3 = (*(ParticleSystem_t108 **)(ParticleSystem_t108 **)SZArrayLdElema(L_5, L_7));
		ParticleSystemDestroyer_t109 * L_8 = (__this->___U3CU3Ef__this_10);
		ParticleSystem_t108 * L_9 = (__this->___U3CsystemU3E__3_3);
		NullCheck(L_9);
		float L_10 = ParticleSystem_get_startLifetime_m673(L_9, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t109 * L_11 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_11);
		float L_12 = (L_11->___m_MaxLifetime_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Max_m674(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->___m_MaxLifetime_4 = L_13;
		int32_t L_14 = (__this->___U3CU24s_20U3E__2_2);
		__this->___U3CU24s_20U3E__2_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_15 = (__this->___U3CU24s_20U3E__2_2);
		ParticleSystemU5BU5D_t107* L_16 = (__this->___U3CU24s_19U3E__1_1);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		float L_17 = Time_get_time_m675(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t109 * L_18 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_18);
		float L_19 = (L_18->___minDuration_2);
		ParticleSystemDestroyer_t109 * L_20 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_20);
		float L_21 = (L_20->___maxDuration_3);
		float L_22 = Random_Range_m676(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
		__this->___U3CstopTimeU3E__4_4 = ((float)((float)L_17+(float)L_22));
		goto IL_00e7;
	}

IL_00d4:
	{
		__this->___U24current_9 = NULL;
		__this->___U24PC_8 = 1;
		goto IL_01c5;
	}

IL_00e7:
	{
		float L_23 = Time_get_time_m675(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = (__this->___U3CstopTimeU3E__4_4);
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t109 * L_25 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_25);
		bool L_26 = (L_25->___m_EarlyStop_5);
		if (L_26)
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t109 * L_27 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_27);
		String_t* L_28 = Object_get_name_m498(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m419(NULL /*static, unused*/, _stringLiteral95, L_28, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		ParticleSystemU5BU5D_t107* L_30 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3CU24s_21U3E__5_5 = L_30;
		__this->___U3CU24s_22U3E__6_6 = 0;
		goto IL_0166;
	}

IL_0139:
	{
		ParticleSystemU5BU5D_t107* L_31 = (__this->___U3CU24s_21U3E__5_5);
		int32_t L_32 = (__this->___U3CU24s_22U3E__6_6);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		__this->___U3CsystemU3E__7_7 = (*(ParticleSystem_t108 **)(ParticleSystem_t108 **)SZArrayLdElema(L_31, L_33));
		ParticleSystem_t108 * L_34 = (__this->___U3CsystemU3E__7_7);
		NullCheck(L_34);
		ParticleSystem_set_enableEmission_m677(L_34, 0, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___U3CU24s_22U3E__6_6);
		__this->___U3CU24s_22U3E__6_6 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0166:
	{
		int32_t L_36 = (__this->___U3CU24s_22U3E__6_6);
		ParticleSystemU5BU5D_t107* L_37 = (__this->___U3CU24s_21U3E__5_5);
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((Array_t *)L_37)->max_length))))))
		{
			goto IL_0139;
		}
	}
	{
		ParticleSystemDestroyer_t109 * L_38 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_38);
		Component_BroadcastMessage_m678(L_38, _stringLiteral96, 1, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t109 * L_39 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_39);
		float L_40 = (L_39->___m_MaxLifetime_4);
		WaitForSeconds_t199 * L_41 = (WaitForSeconds_t199 *)il2cpp_codegen_object_new (WaitForSeconds_t199_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m664(L_41, L_40, /*hidden argument*/NULL);
		__this->___U24current_9 = L_41;
		__this->___U24PC_8 = 2;
		goto IL_01c5;
	}

IL_01ac:
	{
		ParticleSystemDestroyer_t109 * L_42 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_42);
		GameObject_t9 * L_43 = Component_get_gameObject_m421(L_42, /*hidden argument*/NULL);
		Object_Destroy_m422(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		__this->___U24PC_8 = (-1);
	}

IL_01c3:
	{
		return 0;
	}

IL_01c5:
	{
		return 1;
	}
	// Dead block : IL_01c7: ldloc.1
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::Dispose()
extern "C" void U3CStartU3Ec__Iterator5_Dispose_m341 (U3CStartU3Ec__Iterator5_t110 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_8 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator5_Reset_m342 (U3CStartU3Ec__Iterator5_t110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.ParticleSystemDestroyer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::.ctor()
extern "C" void ParticleSystemDestroyer__ctor_m343 (ParticleSystemDestroyer_t109 * __this, const MethodInfo* method)
{
	{
		__this->___minDuration_2 = (8.0f);
		__this->___maxDuration_3 = (10.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ParticleSystemDestroyer::Start()
extern TypeInfo* U3CStartU3Ec__Iterator5_t110_il2cpp_TypeInfo_var;
extern "C" Object_t * ParticleSystemDestroyer_Start_m344 (ParticleSystemDestroyer_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__Iterator5_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartU3Ec__Iterator5_t110 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator5_t110 * L_0 = (U3CStartU3Ec__Iterator5_t110 *)il2cpp_codegen_object_new (U3CStartU3Ec__Iterator5_t110_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator5__ctor_m337(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator5_t110 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_10 = __this;
		U3CStartU3Ec__Iterator5_t110 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::Stop()
extern "C" void ParticleSystemDestroyer_Stop_m345 (ParticleSystemDestroyer_t109 * __this, const MethodInfo* method)
{
	{
		__this->___m_EarlyStop_5 = 1;
		return;
	}
}
// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_PlMethodDeclarations.h"



// UnityStandardAssets.Utility.PlatformSpecificContent
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.PlatformSpecificContent
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl_0MethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"


// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::.ctor()
extern TypeInfo* GameObjectU5BU5D_t112_il2cpp_TypeInfo_var;
extern TypeInfo* MonoBehaviourU5BU5D_t113_il2cpp_TypeInfo_var;
extern "C" void PlatformSpecificContent__ctor_m346 (PlatformSpecificContent_t114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObjectU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		MonoBehaviourU5BU5D_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Content_3 = ((GameObjectU5BU5D_t112*)SZArrayNew(GameObjectU5BU5D_t112_il2cpp_TypeInfo_var, 0));
		__this->___m_MonoBehaviours_4 = ((MonoBehaviourU5BU5D_t113*)SZArrayNew(MonoBehaviourU5BU5D_t113_il2cpp_TypeInfo_var, 0));
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::OnEnable()
extern "C" void PlatformSpecificContent_OnEnable_m347 (PlatformSpecificContent_t114 * __this, const MethodInfo* method)
{
	{
		PlatformSpecificContent_CheckEnableContent_m348(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::CheckEnableContent()
extern "C" void PlatformSpecificContent_CheckEnableContent_m348 (PlatformSpecificContent_t114 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BuildTargetGroup_2);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		PlatformSpecificContent_EnableContent_m349(__this, 1, /*hidden argument*/NULL);
		goto IL_001f;
	}

IL_0018:
	{
		PlatformSpecificContent_EnableContent_m349(__this, 0, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::EnableContent(System.Boolean)
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t38_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern "C" void PlatformSpecificContent_EnableContent_m349 (PlatformSpecificContent_t114 * __this, bool ___enabled, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Transform_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t9 * V_0 = {0};
	GameObjectU5BU5D_t112* V_1 = {0};
	int32_t V_2 = 0;
	Transform_t38 * V_3 = {0};
	Object_t * V_4 = {0};
	MonoBehaviour_t33 * V_5 = {0};
	MonoBehaviourU5BU5D_t113* V_6 = {0};
	int32_t V_7 = 0;
	Object_t * V_8 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObjectU5BU5D_t112* L_0 = (__this->___m_Content_3);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		GameObjectU5BU5D_t112* L_1 = (__this->___m_Content_3);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		GameObjectU5BU5D_t112* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GameObject_t9 **)(GameObject_t9 **)SZArrayLdElema(L_2, L_4));
		GameObject_t9 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m538(NULL /*static, unused*/, L_5, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t9 * L_7 = V_0;
		bool L_8 = ___enabled;
		NullCheck(L_7);
		GameObject_SetActive_m441(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0033:
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_2;
		GameObjectU5BU5D_t112* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_0040:
	{
		bool L_12 = (__this->___m_ChildrenOfThisObject_5);
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		Transform_t38 * L_13 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_13);
		V_4 = L_14;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_005d:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_15);
			V_3 = ((Transform_t38 *)Castclass(L_16, Transform_t38_il2cpp_TypeInfo_var));
			Transform_t38 * L_17 = V_3;
			NullCheck(L_17);
			GameObject_t9 * L_18 = Component_get_gameObject_m421(L_17, /*hidden argument*/NULL);
			bool L_19 = ___enabled;
			NullCheck(L_18);
			GameObject_SetActive_m441(L_18, L_19, /*hidden argument*/NULL);
		}

IL_0076:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_005d;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_4;
			V_8 = ((Object_t *)IsInst(L_22, IDisposable_t153_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_8;
			if (L_23)
			{
				goto IL_0095;
			}
		}

IL_0094:
		{
			IL2CPP_END_FINALLY(135)
		}

IL_0095:
		{
			Object_t * L_24 = V_8;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_009d:
	{
		MonoBehaviourU5BU5D_t113* L_25 = (__this->___m_MonoBehaviours_4);
		NullCheck(L_25);
		if ((((int32_t)(((int32_t)(((Array_t *)L_25)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		MonoBehaviourU5BU5D_t113* L_26 = (__this->___m_MonoBehaviours_4);
		V_6 = L_26;
		V_7 = 0;
		goto IL_00d0;
	}

IL_00bb:
	{
		MonoBehaviourU5BU5D_t113* L_27 = V_6;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		int32_t L_29 = L_28;
		V_5 = (*(MonoBehaviour_t33 **)(MonoBehaviour_t33 **)SZArrayLdElema(L_27, L_29));
		MonoBehaviour_t33 * L_30 = V_5;
		bool L_31 = ___enabled;
		NullCheck(L_30);
		Behaviour_set_enabled_m592(L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00d0:
	{
		int32_t L_33 = V_7;
		MonoBehaviourU5BU5D_t113* L_34 = V_6;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_00bb;
		}
	}

IL_00db:
	{
		return;
	}
}
// UnityStandardAssets.Utility.SimpleActivatorMenu
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.SimpleActivatorMenu
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_SiMethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::.ctor()
extern "C" void SimpleActivatorMenu__ctor_m350 (SimpleActivatorMenu_t115 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::OnEnable()
extern "C" void SimpleActivatorMenu_OnEnable_m351 (SimpleActivatorMenu_t115 * __this, const MethodInfo* method)
{
	{
		__this->___m_CurrentActiveObject_4 = 0;
		GUIText_t95 * L_0 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t112* L_1 = (__this->___objects_3);
		int32_t L_2 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(GameObject_t9 **)(GameObject_t9 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = Object_get_name_m498((*(GameObject_t9 **)(GameObject_t9 **)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIText_set_text_m659(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::NextCamera()
extern "C" void SimpleActivatorMenu_NextCamera_m352 (SimpleActivatorMenu_t115 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___m_CurrentActiveObject_4);
		GameObjectU5BU5D_t112* L_1 = (__this->___objects_3);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))) < ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_2 = (__this->___m_CurrentActiveObject_4);
		G_B3_0 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		GameObjectU5BU5D_t112* L_3 = (__this->___objects_3);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((*(GameObject_t9 **)(GameObject_t9 **)SZArrayLdElema(L_3, L_5)));
		GameObject_SetActive_m441((*(GameObject_t9 **)(GameObject_t9 **)SZArrayLdElema(L_3, L_5)), ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_9 = V_1;
		GameObjectU5BU5D_t112* L_10 = (__this->___objects_3);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_11 = V_0;
		__this->___m_CurrentActiveObject_4 = L_11;
		GUIText_t95 * L_12 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t112* L_13 = (__this->___objects_3);
		int32_t L_14 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((*(GameObject_t9 **)(GameObject_t9 **)SZArrayLdElema(L_13, L_15)));
		String_t* L_16 = Object_get_name_m498((*(GameObject_t9 **)(GameObject_t9 **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/NULL);
		NullCheck(L_12);
		GUIText_set_text_m659(L_12, L_16, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.SimpleMouseRotator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.SimpleMouseRotator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si_0MethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::.ctor()
extern "C" void SimpleMouseRotator__ctor_m353 (SimpleMouseRotator_t116 * __this, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = {0};
		Vector3__ctor_m679(&L_0, (70.0f), (70.0f), /*hidden argument*/NULL);
		Vector2_t42  L_1 = Vector2_op_Implicit_m535(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___rotationRange_2 = L_1;
		__this->___rotationSpeed_3 = (10.0f);
		__this->___dampingTime_4 = (0.2f);
		__this->___autoZeroVerticalOnMobile_5 = 1;
		__this->___relative_7 = 1;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Start()
extern "C" void SimpleMouseRotator_Start_m354 (SimpleMouseRotator_t116 * __this, const MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t106  L_1 = Transform_get_localRotation_m680(L_0, /*hidden argument*/NULL);
		__this->___m_OriginalRotation_11 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Update()
extern TypeInfo* CrossPlatformInputManager_t55_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral97;
extern Il2CppCodeGenString* _stringLiteral98;
extern "C" void SimpleMouseRotator_Update_m355 (SimpleMouseRotator_t116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		_stringLiteral97 = il2cpp_codegen_string_literal_from_index(97);
		_stringLiteral98 = il2cpp_codegen_string_literal_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t40  V_2 = {0};
	Vector3_t40  V_3 = {0};
	{
		Transform_t38 * L_0 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_1 = (__this->___m_OriginalRotation_11);
		NullCheck(L_0);
		Transform_set_localRotation_m681(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___relative_7);
		if (!L_2)
		{
			goto IL_0293;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t55_il2cpp_TypeInfo_var);
		float L_3 = CrossPlatformInputManager_GetAxis_m175(NULL /*static, unused*/, _stringLiteral97, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = CrossPlatformInputManager_GetAxis_m175(NULL /*static, unused*/, _stringLiteral98, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t40 * L_5 = &(__this->___m_TargetAngles_8);
		float L_6 = (L_5->___y_2);
		if ((!(((float)L_6) > ((float)(180.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		Vector3_t40 * L_7 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_8 = L_7;
		float L_9 = (L_8->___y_2);
		L_8->___y_2 = ((float)((float)L_9-(float)(360.0f)));
		Vector3_t40 * L_10 = &(__this->___m_FollowAngles_9);
		Vector3_t40 * L_11 = L_10;
		float L_12 = (L_11->___y_2);
		L_11->___y_2 = ((float)((float)L_12-(float)(360.0f)));
	}

IL_0075:
	{
		Vector3_t40 * L_13 = &(__this->___m_TargetAngles_8);
		float L_14 = (L_13->___x_1);
		if ((!(((float)L_14) > ((float)(180.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_t40 * L_15 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_16 = L_15;
		float L_17 = (L_16->___x_1);
		L_16->___x_1 = ((float)((float)L_17-(float)(360.0f)));
		Vector3_t40 * L_18 = &(__this->___m_FollowAngles_9);
		Vector3_t40 * L_19 = L_18;
		float L_20 = (L_19->___x_1);
		L_19->___x_1 = ((float)((float)L_20-(float)(360.0f)));
	}

IL_00b8:
	{
		Vector3_t40 * L_21 = &(__this->___m_TargetAngles_8);
		float L_22 = (L_21->___y_2);
		if ((!(((float)L_22) < ((float)(-180.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		Vector3_t40 * L_23 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_24 = L_23;
		float L_25 = (L_24->___y_2);
		L_24->___y_2 = ((float)((float)L_25+(float)(360.0f)));
		Vector3_t40 * L_26 = &(__this->___m_FollowAngles_9);
		Vector3_t40 * L_27 = L_26;
		float L_28 = (L_27->___y_2);
		L_27->___y_2 = ((float)((float)L_28+(float)(360.0f)));
	}

IL_00fb:
	{
		Vector3_t40 * L_29 = &(__this->___m_TargetAngles_8);
		float L_30 = (L_29->___x_1);
		if ((!(((float)L_30) < ((float)(-180.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Vector3_t40 * L_31 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_32 = L_31;
		float L_33 = (L_32->___x_1);
		L_32->___x_1 = ((float)((float)L_33+(float)(360.0f)));
		Vector3_t40 * L_34 = &(__this->___m_FollowAngles_9);
		Vector3_t40 * L_35 = L_34;
		float L_36 = (L_35->___x_1);
		L_35->___x_1 = ((float)((float)L_36+(float)(360.0f)));
	}

IL_013e:
	{
		bool L_37 = (__this->___autoZeroHorizontalOnMobile_6);
		if (!L_37)
		{
			goto IL_018e;
		}
	}
	{
		Vector3_t40 * L_38 = &(__this->___m_TargetAngles_8);
		Vector2_t42 * L_39 = &(__this->___rotationRange_2);
		float L_40 = (L_39->___y_2);
		Vector2_t42 * L_41 = &(__this->___rotationRange_2);
		float L_42 = (L_41->___y_2);
		float L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_44 = Mathf_Lerp_m526(NULL /*static, unused*/, ((float)((float)((-L_40))*(float)(0.5f))), ((float)((float)L_42*(float)(0.5f))), ((float)((float)((float)((float)L_43*(float)(0.5f)))+(float)(0.5f))), /*hidden argument*/NULL);
		L_38->___y_2 = L_44;
		goto IL_01a8;
	}

IL_018e:
	{
		Vector3_t40 * L_45 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_46 = L_45;
		float L_47 = (L_46->___y_2);
		float L_48 = V_0;
		float L_49 = (__this->___rotationSpeed_3);
		L_46->___y_2 = ((float)((float)L_47+(float)((float)((float)L_48*(float)L_49))));
	}

IL_01a8:
	{
		bool L_50 = (__this->___autoZeroVerticalOnMobile_5);
		if (!L_50)
		{
			goto IL_01f8;
		}
	}
	{
		Vector3_t40 * L_51 = &(__this->___m_TargetAngles_8);
		Vector2_t42 * L_52 = &(__this->___rotationRange_2);
		float L_53 = (L_52->___x_1);
		Vector2_t42 * L_54 = &(__this->___rotationRange_2);
		float L_55 = (L_54->___x_1);
		float L_56 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_57 = Mathf_Lerp_m526(NULL /*static, unused*/, ((float)((float)((-L_53))*(float)(0.5f))), ((float)((float)L_55*(float)(0.5f))), ((float)((float)((float)((float)L_56*(float)(0.5f)))+(float)(0.5f))), /*hidden argument*/NULL);
		L_51->___x_1 = L_57;
		goto IL_0212;
	}

IL_01f8:
	{
		Vector3_t40 * L_58 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_59 = L_58;
		float L_60 = (L_59->___x_1);
		float L_61 = V_1;
		float L_62 = (__this->___rotationSpeed_3);
		L_59->___x_1 = ((float)((float)L_60+(float)((float)((float)L_61*(float)L_62))));
	}

IL_0212:
	{
		Vector3_t40 * L_63 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_64 = &(__this->___m_TargetAngles_8);
		float L_65 = (L_64->___y_2);
		Vector2_t42 * L_66 = &(__this->___rotationRange_2);
		float L_67 = (L_66->___y_2);
		Vector2_t42 * L_68 = &(__this->___rotationRange_2);
		float L_69 = (L_68->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_70 = Mathf_Clamp_m527(NULL /*static, unused*/, L_65, ((float)((float)((-L_67))*(float)(0.5f))), ((float)((float)L_69*(float)(0.5f))), /*hidden argument*/NULL);
		L_63->___y_2 = L_70;
		Vector3_t40 * L_71 = &(__this->___m_TargetAngles_8);
		Vector3_t40 * L_72 = &(__this->___m_TargetAngles_8);
		float L_73 = (L_72->___x_1);
		Vector2_t42 * L_74 = &(__this->___rotationRange_2);
		float L_75 = (L_74->___x_1);
		Vector2_t42 * L_76 = &(__this->___rotationRange_2);
		float L_77 = (L_76->___x_1);
		float L_78 = Mathf_Clamp_m527(NULL /*static, unused*/, L_73, ((float)((float)((-L_75))*(float)(0.5f))), ((float)((float)L_77*(float)(0.5f))), /*hidden argument*/NULL);
		L_71->___x_1 = L_78;
		goto IL_0325;
	}

IL_0293:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_79 = Input_get_mousePosition_m572(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_79;
		float L_80 = ((&V_2)->___x_1);
		V_0 = L_80;
		Vector3_t40  L_81 = Input_get_mousePosition_m572(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_81;
		float L_82 = ((&V_3)->___y_2);
		V_1 = L_82;
		Vector3_t40 * L_83 = &(__this->___m_TargetAngles_8);
		Vector2_t42 * L_84 = &(__this->___rotationRange_2);
		float L_85 = (L_84->___y_2);
		Vector2_t42 * L_86 = &(__this->___rotationRange_2);
		float L_87 = (L_86->___y_2);
		float L_88 = V_0;
		int32_t L_89 = Screen_get_width_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_90 = Mathf_Lerp_m526(NULL /*static, unused*/, ((float)((float)((-L_85))*(float)(0.5f))), ((float)((float)L_87*(float)(0.5f))), ((float)((float)L_88/(float)(((float)L_89)))), /*hidden argument*/NULL);
		L_83->___y_2 = L_90;
		Vector3_t40 * L_91 = &(__this->___m_TargetAngles_8);
		Vector2_t42 * L_92 = &(__this->___rotationRange_2);
		float L_93 = (L_92->___x_1);
		Vector2_t42 * L_94 = &(__this->___rotationRange_2);
		float L_95 = (L_94->___x_1);
		float L_96 = V_1;
		int32_t L_97 = Screen_get_height_m435(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_98 = Mathf_Lerp_m526(NULL /*static, unused*/, ((float)((float)((-L_93))*(float)(0.5f))), ((float)((float)L_95*(float)(0.5f))), ((float)((float)L_96/(float)(((float)L_97)))), /*hidden argument*/NULL);
		L_91->___x_1 = L_98;
	}

IL_0325:
	{
		Vector3_t40  L_99 = (__this->___m_FollowAngles_9);
		Vector3_t40  L_100 = (__this->___m_TargetAngles_8);
		Vector3_t40 * L_101 = &(__this->___m_FollowVelocity_10);
		float L_102 = (__this->___dampingTime_4);
		Vector3_t40  L_103 = Vector3_SmoothDamp_m522(NULL /*static, unused*/, L_99, L_100, L_101, L_102, /*hidden argument*/NULL);
		__this->___m_FollowAngles_9 = L_103;
		Transform_t38 * L_104 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_105 = (__this->___m_OriginalRotation_11);
		Vector3_t40 * L_106 = &(__this->___m_FollowAngles_9);
		float L_107 = (L_106->___x_1);
		Vector3_t40 * L_108 = &(__this->___m_FollowAngles_9);
		float L_109 = (L_108->___y_2);
		Quaternion_t106  L_110 = Quaternion_Euler_m682(NULL /*static, unused*/, ((-L_107)), L_109, (0.0f), /*hidden argument*/NULL);
		Quaternion_t106  L_111 = Quaternion_op_Multiply_m683(NULL /*static, unused*/, L_105, L_110, /*hidden argument*/NULL);
		NullCheck(L_104);
		Transform_set_localRotation_m681(L_104, L_111, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.SmoothFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Sm.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.SmoothFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_SmMethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.SmoothFollow::.ctor()
extern "C" void SmoothFollow__ctor_m356 (SmoothFollow_t117 * __this, const MethodInfo* method)
{
	{
		__this->___distance_3 = (10.0f);
		__this->___height_4 = (5.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::Start()
extern "C" void SmoothFollow_Start_m357 (SmoothFollow_t117 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::LateUpdate()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void SmoothFollow_LateUpdate_m358 (SmoothFollow_t117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t106  V_4 = {0};
	Vector3_t40  V_5 = {0};
	Vector3_t40  V_6 = {0};
	Vector3_t40  V_7 = {0};
	Vector3_t40  V_8 = {0};
	Vector3_t40  V_9 = {0};
	Vector3_t40  V_10 = {0};
	{
		Transform_t38 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Implicit_m544(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Transform_t38 * L_2 = (__this->___target_2);
		NullCheck(L_2);
		Vector3_t40  L_3 = Transform_get_eulerAngles_m684(L_2, /*hidden argument*/NULL);
		V_5 = L_3;
		float L_4 = ((&V_5)->___y_2);
		V_0 = L_4;
		Transform_t38 * L_5 = (__this->___target_2);
		NullCheck(L_5);
		Vector3_t40  L_6 = Transform_get_position_m509(L_5, /*hidden argument*/NULL);
		V_6 = L_6;
		float L_7 = ((&V_6)->___y_2);
		float L_8 = (__this->___height_4);
		V_1 = ((float)((float)L_7+(float)L_8));
		Transform_t38 * L_9 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t40  L_10 = Transform_get_eulerAngles_m684(L_9, /*hidden argument*/NULL);
		V_7 = L_10;
		float L_11 = ((&V_7)->___y_2);
		V_2 = L_11;
		Transform_t38 * L_12 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t40  L_13 = Transform_get_position_m509(L_12, /*hidden argument*/NULL);
		V_8 = L_13;
		float L_14 = ((&V_8)->___y_2);
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = V_0;
		float L_17 = (__this->___rotationDamping_5);
		float L_18 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_19 = Mathf_LerpAngle_m685(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = (__this->___heightDamping_6);
		float L_23 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = Mathf_Lerp_m526(NULL /*static, unused*/, L_20, L_21, ((float)((float)L_22*(float)L_23)), /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = V_2;
		Quaternion_t106  L_26 = Quaternion_Euler_m682(NULL /*static, unused*/, (0.0f), L_25, (0.0f), /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t38 * L_27 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Transform_t38 * L_28 = (__this->___target_2);
		NullCheck(L_28);
		Vector3_t40  L_29 = Transform_get_position_m509(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_m523(L_27, L_29, /*hidden argument*/NULL);
		Transform_t38 * L_30 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Transform_t38 * L_31 = L_30;
		NullCheck(L_31);
		Vector3_t40  L_32 = Transform_get_position_m509(L_31, /*hidden argument*/NULL);
		Quaternion_t106  L_33 = V_4;
		Vector3_t40  L_34 = Vector3_get_forward_m521(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t40  L_35 = Quaternion_op_Multiply_m686(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = (__this->___distance_3);
		Vector3_t40  L_37 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t40  L_38 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_m523(L_31, L_38, /*hidden argument*/NULL);
		Transform_t38 * L_39 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Transform_t38 * L_40 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t40  L_41 = Transform_get_position_m509(L_40, /*hidden argument*/NULL);
		V_9 = L_41;
		float L_42 = ((&V_9)->___x_1);
		float L_43 = V_3;
		Transform_t38 * L_44 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t40  L_45 = Transform_get_position_m509(L_44, /*hidden argument*/NULL);
		V_10 = L_45;
		float L_46 = ((&V_10)->___z_3);
		Vector3_t40  L_47 = {0};
		Vector3__ctor_m528(&L_47, L_42, L_43, L_46, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_position_m523(L_39, L_47, /*hidden argument*/NULL);
		Transform_t38 * L_48 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		Transform_t38 * L_49 = (__this->___target_2);
		NullCheck(L_48);
		Transform_LookAt_m687(L_48, L_49, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/Action
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectActivator/Action
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_TiMethodDeclarations.h"



// UnityStandardAssets.Utility.TimedObjectActivator/Entry
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entry::.ctor()
extern "C" void Entry__ctor_m359 (Entry_t119 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_1.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_1MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
extern "C" void Entries__ctor_m360 (Entries_t121 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_2.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_2MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::.ctor()
extern "C" void U3CActivateU3Ec__Iterator6__ctor_m361 (U3CActivateU3Ec__Iterator6_t122 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CActivateU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m362 (U3CActivateU3Ec__Iterator6_t122 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CActivateU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m363 (U3CActivateU3Ec__Iterator6_t122 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::MoveNext()
extern TypeInfo* WaitForSeconds_t199_il2cpp_TypeInfo_var;
extern "C" bool U3CActivateU3Ec__Iterator6_MoveNext_m364 (U3CActivateU3Ec__Iterator6_t122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		Entry_t119 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t199 * L_4 = (WaitForSeconds_t199 *)il2cpp_codegen_object_new (WaitForSeconds_t199_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m664(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_2 = L_4;
		__this->___U24PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t119 * L_5 = (__this->___entry_0);
		NullCheck(L_5);
		GameObject_t9 * L_6 = (L_5->___target_0);
		NullCheck(L_6);
		GameObject_SetActive_m441(L_6, 1, /*hidden argument*/NULL);
		__this->___U24PC_1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::Dispose()
extern "C" void U3CActivateU3Ec__Iterator6_Dispose_m365 (U3CActivateU3Ec__Iterator6_t122 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CActivateU3Ec__Iterator6_Reset_m366 (U3CActivateU3Ec__Iterator6_t122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_3MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::.ctor()
extern "C" void U3CDeactivateU3Ec__Iterator7__ctor_m367 (U3CDeactivateU3Ec__Iterator7_t123 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDeactivateU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m368 (U3CDeactivateU3Ec__Iterator7_t123 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDeactivateU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m369 (U3CDeactivateU3Ec__Iterator7_t123 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::MoveNext()
extern TypeInfo* WaitForSeconds_t199_il2cpp_TypeInfo_var;
extern "C" bool U3CDeactivateU3Ec__Iterator7_MoveNext_m370 (U3CDeactivateU3Ec__Iterator7_t123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		Entry_t119 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t199 * L_4 = (WaitForSeconds_t199 *)il2cpp_codegen_object_new (WaitForSeconds_t199_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m664(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_2 = L_4;
		__this->___U24PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t119 * L_5 = (__this->___entry_0);
		NullCheck(L_5);
		GameObject_t9 * L_6 = (L_5->___target_0);
		NullCheck(L_6);
		GameObject_SetActive_m441(L_6, 0, /*hidden argument*/NULL);
		__this->___U24PC_1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::Dispose()
extern "C" void U3CDeactivateU3Ec__Iterator7_Dispose_m371 (U3CDeactivateU3Ec__Iterator7_t123 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CDeactivateU3Ec__Iterator7_Reset_m372 (U3CDeactivateU3Ec__Iterator7_t123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_4.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_4MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::.ctor()
extern "C" void U3CReloadLevelU3Ec__Iterator8__ctor_m373 (U3CReloadLevelU3Ec__Iterator8_t124 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CReloadLevelU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m374 (U3CReloadLevelU3Ec__Iterator8_t124 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CReloadLevelU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m375 (U3CReloadLevelU3Ec__Iterator8_t124 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::MoveNext()
extern TypeInfo* WaitForSeconds_t199_il2cpp_TypeInfo_var;
extern "C" bool U3CReloadLevelU3Ec__Iterator8_MoveNext_m376 (U3CReloadLevelU3Ec__Iterator8_t124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0054;
	}

IL_0021:
	{
		Entry_t119 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t199 * L_4 = (WaitForSeconds_t199 *)il2cpp_codegen_object_new (WaitForSeconds_t199_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m664(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_2 = L_4;
		__this->___U24PC_1 = 1;
		goto IL_0056;
	}

IL_0043:
	{
		int32_t L_5 = Application_get_loadedLevel_m688(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m689(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___U24PC_1 = (-1);
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 1;
	}
	// Dead block : IL_0058: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::Dispose()
extern "C" void U3CReloadLevelU3Ec__Iterator8_Dispose_m377 (U3CReloadLevelU3Ec__Iterator8_t124 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::Reset()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern "C" void U3CReloadLevelU3Ec__Iterator8_Reset_m378 (U3CReloadLevelU3Ec__Iterator8_t124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m628(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_5.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectActivator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_5MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern TypeInfo* Entries_t121_il2cpp_TypeInfo_var;
extern "C" void TimedObjectActivator__ctor_m379 (TimedObjectActivator_t125 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Entries_t121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		Entries_t121 * L_0 = (Entries_t121 *)il2cpp_codegen_object_new (Entries_t121_il2cpp_TypeInfo_var);
		Entries__ctor_m360(L_0, /*hidden argument*/NULL);
		__this->___entries_2 = L_0;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern "C" void TimedObjectActivator_Awake_m380 (TimedObjectActivator_t125 * __this, const MethodInfo* method)
{
	Entry_t119 * V_0 = {0};
	EntryU5BU5D_t120* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		Entries_t121 * L_0 = (__this->___entries_2);
		NullCheck(L_0);
		EntryU5BU5D_t120* L_1 = (L_0->___entries_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_008c;
	}

IL_0013:
	{
		EntryU5BU5D_t120* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Entry_t119 **)(Entry_t119 **)SZArrayLdElema(L_2, L_4));
		Entry_t119 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___action_1);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0039;
		}
		if (L_7 == 1)
		{
			goto IL_004c;
		}
		if (L_7 == 2)
		{
			goto IL_005f;
		}
		if (L_7 == 3)
		{
			goto IL_0075;
		}
	}
	{
		goto IL_0088;
	}

IL_0039:
	{
		Entry_t119 * L_8 = V_0;
		Object_t * L_9 = TimedObjectActivator_Activate_m381(__this, L_8, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m671(__this, L_9, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_004c:
	{
		Entry_t119 * L_10 = V_0;
		Object_t * L_11 = TimedObjectActivator_Deactivate_m382(__this, L_10, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m671(__this, L_11, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_005f:
	{
		Entry_t119 * L_12 = V_0;
		NullCheck(L_12);
		GameObject_t9 * L_13 = (L_12->___target_0);
		Entry_t119 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = (L_14->___delay_2);
		Object_Destroy_m690(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0075:
	{
		Entry_t119 * L_16 = V_0;
		Object_t * L_17 = TimedObjectActivator_ReloadLevel_m383(__this, L_16, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m671(__this, L_17, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0088:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_19 = V_2;
		EntryU5BU5D_t120* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern TypeInfo* U3CActivateU3Ec__Iterator6_t122_il2cpp_TypeInfo_var;
extern "C" Object_t * TimedObjectActivator_Activate_m381 (TimedObjectActivator_t125 * __this, Entry_t119 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CActivateU3Ec__Iterator6_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		s_Il2CppMethodIntialized = true;
	}
	U3CActivateU3Ec__Iterator6_t122 * V_0 = {0};
	{
		U3CActivateU3Ec__Iterator6_t122 * L_0 = (U3CActivateU3Ec__Iterator6_t122 *)il2cpp_codegen_object_new (U3CActivateU3Ec__Iterator6_t122_il2cpp_TypeInfo_var);
		U3CActivateU3Ec__Iterator6__ctor_m361(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CActivateU3Ec__Iterator6_t122 * L_1 = V_0;
		Entry_t119 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CActivateU3Ec__Iterator6_t122 * L_3 = V_0;
		Entry_t119 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3CU24U3Eentry_3 = L_4;
		U3CActivateU3Ec__Iterator6_t122 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern TypeInfo* U3CDeactivateU3Ec__Iterator7_t123_il2cpp_TypeInfo_var;
extern "C" Object_t * TimedObjectActivator_Deactivate_m382 (TimedObjectActivator_t125 * __this, Entry_t119 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDeactivateU3Ec__Iterator7_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	U3CDeactivateU3Ec__Iterator7_t123 * V_0 = {0};
	{
		U3CDeactivateU3Ec__Iterator7_t123 * L_0 = (U3CDeactivateU3Ec__Iterator7_t123 *)il2cpp_codegen_object_new (U3CDeactivateU3Ec__Iterator7_t123_il2cpp_TypeInfo_var);
		U3CDeactivateU3Ec__Iterator7__ctor_m367(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDeactivateU3Ec__Iterator7_t123 * L_1 = V_0;
		Entry_t119 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CDeactivateU3Ec__Iterator7_t123 * L_3 = V_0;
		Entry_t119 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3CU24U3Eentry_3 = L_4;
		U3CDeactivateU3Ec__Iterator7_t123 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern TypeInfo* U3CReloadLevelU3Ec__Iterator8_t124_il2cpp_TypeInfo_var;
extern "C" Object_t * TimedObjectActivator_ReloadLevel_m383 (TimedObjectActivator_t125 * __this, Entry_t119 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CReloadLevelU3Ec__Iterator8_t124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		s_Il2CppMethodIntialized = true;
	}
	U3CReloadLevelU3Ec__Iterator8_t124 * V_0 = {0};
	{
		U3CReloadLevelU3Ec__Iterator8_t124 * L_0 = (U3CReloadLevelU3Ec__Iterator8_t124 *)il2cpp_codegen_object_new (U3CReloadLevelU3Ec__Iterator8_t124_il2cpp_TypeInfo_var);
		U3CReloadLevelU3Ec__Iterator8__ctor_m373(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CReloadLevelU3Ec__Iterator8_t124 * L_1 = V_0;
		Entry_t119 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CReloadLevelU3Ec__Iterator8_t124 * L_3 = V_0;
		Entry_t119 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3CU24U3Eentry_3 = L_4;
		U3CReloadLevelU3Ec__Iterator8_t124 * L_5 = V_0;
		return L_5;
	}
}
// UnityStandardAssets.Utility.TimedObjectDestructor
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_6.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.TimedObjectDestructor
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_6MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::.ctor()
extern "C" void TimedObjectDestructor__ctor_m384 (TimedObjectDestructor_t126 * __this, const MethodInfo* method)
{
	{
		__this->___m_TimeOut_2 = (1.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::Awake()
extern Il2CppCodeGenString* _stringLiteral99;
extern "C" void TimedObjectDestructor_Awake_m385 (TimedObjectDestructor_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral99 = il2cpp_codegen_string_literal_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___m_TimeOut_2);
		MonoBehaviour_Invoke_m691(__this, _stringLiteral99, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::DestroyNow()
extern "C" void TimedObjectDestructor_DestroyNow_m386 (TimedObjectDestructor_t126 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_DetachChildren_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t38 * L_1 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_DetachChildren_m692(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		GameObject_t9 * L_2 = Component_get_gameObject_m421(__this, /*hidden argument*/NULL);
		Object_DestroyObject_m591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_WaMethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
extern TypeInfo* TransformU5BU5D_t101_il2cpp_TypeInfo_var;
extern "C" void WaypointList__ctor_m387 (WaypointList_t128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___items_1 = ((TransformU5BU5D_t101*)SZArrayNew(TransformU5BU5D_t101_il2cpp_TypeInfo_var, 0));
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void RoutePoint__ctor_m388 (RoutePoint_t129 * __this, Vector3_t40  ___position, Vector3_t40  ___direction, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = ___position;
		__this->___position_0 = L_0;
		Vector3_t40  L_1 = ___direction;
		__this->___direction_1 = L_1;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1MethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"


// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern TypeInfo* WaypointList_t128_il2cpp_TypeInfo_var;
extern "C" void WaypointCircuit__ctor_m389 (WaypointCircuit_t127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaypointList_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	{
		WaypointList_t128 * L_0 = (WaypointList_t128 *)il2cpp_codegen_object_new (WaypointList_t128_il2cpp_TypeInfo_var);
		WaypointList__ctor_m387(L_0, /*hidden argument*/NULL);
		__this->___waypointList_2 = L_0;
		__this->___smoothRoute_3 = 1;
		__this->___editorVisualisationSubsteps_7 = (100.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" float WaypointCircuit_get_Length_m390 (WaypointCircuit_t127 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CLengthU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C" void WaypointCircuit_set_Length_m391 (WaypointCircuit_t127 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CLengthU3Ek__BackingField_17 = L_0;
		return;
	}
}
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" TransformU5BU5D_t101* WaypointCircuit_get_Waypoints_m392 (WaypointCircuit_t127 * __this, const MethodInfo* method)
{
	{
		WaypointList_t128 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		TransformU5BU5D_t101* L_1 = (L_0->___items_1);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C" void WaypointCircuit_Awake_m393 (WaypointCircuit_t127 * __this, const MethodInfo* method)
{
	{
		TransformU5BU5D_t101* L_0 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		WaypointCircuit_CachePositionsAndDistances_m397(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		TransformU5BU5D_t101* L_1 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_1)->max_length)));
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C" RoutePoint_t129  WaypointCircuit_GetRoutePoint_m394 (WaypointCircuit_t127 * __this, float ___dist, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	Vector3_t40  V_2 = {0};
	{
		float L_0 = ___dist;
		Vector3_t40  L_1 = WaypointCircuit_GetRoutePosition_m395(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ___dist;
		Vector3_t40  L_3 = WaypointCircuit_GetRoutePosition_m395(__this, ((float)((float)L_2+(float)(0.1f))), /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t40  L_4 = V_1;
		Vector3_t40  L_5 = V_0;
		Vector3_t40  L_6 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector3_t40  L_7 = V_0;
		Vector3_t40  L_8 = Vector3_get_normalized_m577((&V_2), /*hidden argument*/NULL);
		RoutePoint_t129  L_9 = {0};
		RoutePoint__ctor_m388(&L_9, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" Vector3_t40  WaypointCircuit_GetRoutePosition_m395 (WaypointCircuit_t127 * __this, float ___dist, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = WaypointCircuit_get_Length_m390(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		SingleU5BU5D_t131* L_1 = (__this->___distances_6);
		SingleU5BU5D_t131* L_2 = (__this->___distances_6);
		NullCheck(L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)1));
		WaypointCircuit_set_Length_m391(__this, (*(float*)(float*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
	}

IL_0029:
	{
		float L_4 = ___dist;
		float L_5 = WaypointCircuit_get_Length_m390(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Repeat_m693(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		___dist = L_6;
		goto IL_0040;
	}

IL_003c:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0040:
	{
		SingleU5BU5D_t131* L_8 = (__this->___distances_6);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		float L_11 = ___dist;
		if ((((float)(*(float*)(float*)SZArrayLdElema(L_8, L_10))) < ((float)L_11)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = (__this->___numPoints_4);
		int32_t L_14 = (__this->___numPoints_4);
		__this->___p1n_9 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12-(int32_t)1))+(int32_t)L_13))%(int32_t)L_14));
		int32_t L_15 = V_0;
		__this->___p2n_10 = L_15;
		SingleU5BU5D_t131* L_16 = (__this->___distances_6);
		int32_t L_17 = (__this->___p1n_9);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		SingleU5BU5D_t131* L_19 = (__this->___distances_6);
		int32_t L_20 = (__this->___p2n_10);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		float L_22 = ___dist;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_23 = Mathf_InverseLerp_m575(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_16, L_18)), (*(float*)(float*)SZArrayLdElema(L_19, L_21)), L_22, /*hidden argument*/NULL);
		__this->___i_12 = L_23;
		bool L_24 = (__this->___smoothRoute_3);
		if (!L_24)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_25 = V_0;
		int32_t L_26 = (__this->___numPoints_4);
		int32_t L_27 = (__this->___numPoints_4);
		__this->___p0n_8 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25-(int32_t)2))+(int32_t)L_26))%(int32_t)L_27));
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->___numPoints_4);
		__this->___p3n_11 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)L_29));
		int32_t L_30 = (__this->___p2n_10);
		int32_t L_31 = (__this->___numPoints_4);
		__this->___p2n_10 = ((int32_t)((int32_t)L_30%(int32_t)L_31));
		Vector3U5BU5D_t130* L_32 = (__this->___points_5);
		int32_t L_33 = (__this->___p0n_8);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		__this->___P0_13 = (*(Vector3_t40 *)((Vector3_t40 *)(Vector3_t40 *)SZArrayLdElema(L_32, L_33)));
		Vector3U5BU5D_t130* L_34 = (__this->___points_5);
		int32_t L_35 = (__this->___p1n_9);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		__this->___P1_14 = (*(Vector3_t40 *)((Vector3_t40 *)(Vector3_t40 *)SZArrayLdElema(L_34, L_35)));
		Vector3U5BU5D_t130* L_36 = (__this->___points_5);
		int32_t L_37 = (__this->___p2n_10);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		__this->___P2_15 = (*(Vector3_t40 *)((Vector3_t40 *)(Vector3_t40 *)SZArrayLdElema(L_36, L_37)));
		Vector3U5BU5D_t130* L_38 = (__this->___points_5);
		int32_t L_39 = (__this->___p3n_11);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		__this->___P3_16 = (*(Vector3_t40 *)((Vector3_t40 *)(Vector3_t40 *)SZArrayLdElema(L_38, L_39)));
		Vector3_t40  L_40 = (__this->___P0_13);
		Vector3_t40  L_41 = (__this->___P1_14);
		Vector3_t40  L_42 = (__this->___P2_15);
		Vector3_t40  L_43 = (__this->___P3_16);
		float L_44 = (__this->___i_12);
		Vector3_t40  L_45 = WaypointCircuit_CatmullRom_m396(__this, L_40, L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}

IL_016c:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = (__this->___numPoints_4);
		int32_t L_48 = (__this->___numPoints_4);
		__this->___p1n_9 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_46-(int32_t)1))+(int32_t)L_47))%(int32_t)L_48));
		int32_t L_49 = V_0;
		__this->___p2n_10 = L_49;
		Vector3U5BU5D_t130* L_50 = (__this->___points_5);
		int32_t L_51 = (__this->___p1n_9);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		Vector3U5BU5D_t130* L_52 = (__this->___points_5);
		int32_t L_53 = (__this->___p2n_10);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		float L_54 = (__this->___i_12);
		Vector3_t40  L_55 = Vector3_Lerp_m694(NULL /*static, unused*/, (*(Vector3_t40 *)((Vector3_t40 *)(Vector3_t40 *)SZArrayLdElema(L_50, L_51))), (*(Vector3_t40 *)((Vector3_t40 *)(Vector3_t40 *)SZArrayLdElema(L_52, L_53))), L_54, /*hidden argument*/NULL);
		return L_55;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t40  WaypointCircuit_CatmullRom_m396 (WaypointCircuit_t127 * __this, Vector3_t40  ___p0, Vector3_t40  ___p1, Vector3_t40  ___p2, Vector3_t40  ___p3, float ___i, const MethodInfo* method)
{
	{
		Vector3_t40  L_0 = ___p1;
		Vector3_t40  L_1 = Vector3_op_Multiply_m514(NULL /*static, unused*/, (2.0f), L_0, /*hidden argument*/NULL);
		Vector3_t40  L_2 = ___p0;
		Vector3_t40  L_3 = Vector3_op_UnaryNegation_m648(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector3_t40  L_4 = ___p2;
		Vector3_t40  L_5 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ___i;
		Vector3_t40  L_7 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t40  L_8 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_1, L_7, /*hidden argument*/NULL);
		Vector3_t40  L_9 = ___p0;
		Vector3_t40  L_10 = Vector3_op_Multiply_m514(NULL /*static, unused*/, (2.0f), L_9, /*hidden argument*/NULL);
		Vector3_t40  L_11 = ___p1;
		Vector3_t40  L_12 = Vector3_op_Multiply_m514(NULL /*static, unused*/, (5.0f), L_11, /*hidden argument*/NULL);
		Vector3_t40  L_13 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		Vector3_t40  L_14 = ___p2;
		Vector3_t40  L_15 = Vector3_op_Multiply_m514(NULL /*static, unused*/, (4.0f), L_14, /*hidden argument*/NULL);
		Vector3_t40  L_16 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t40  L_17 = ___p3;
		Vector3_t40  L_18 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = ___i;
		Vector3_t40  L_20 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		float L_21 = ___i;
		Vector3_t40  L_22 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Vector3_t40  L_23 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_8, L_22, /*hidden argument*/NULL);
		Vector3_t40  L_24 = ___p0;
		Vector3_t40  L_25 = Vector3_op_UnaryNegation_m648(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Vector3_t40  L_26 = ___p1;
		Vector3_t40  L_27 = Vector3_op_Multiply_m514(NULL /*static, unused*/, (3.0f), L_26, /*hidden argument*/NULL);
		Vector3_t40  L_28 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		Vector3_t40  L_29 = ___p2;
		Vector3_t40  L_30 = Vector3_op_Multiply_m514(NULL /*static, unused*/, (3.0f), L_29, /*hidden argument*/NULL);
		Vector3_t40  L_31 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		Vector3_t40  L_32 = ___p3;
		Vector3_t40  L_33 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		float L_34 = ___i;
		Vector3_t40  L_35 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = ___i;
		Vector3_t40  L_37 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		float L_38 = ___i;
		Vector3_t40  L_39 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		Vector3_t40  L_40 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_23, L_39, /*hidden argument*/NULL);
		Vector3_t40  L_41 = Vector3_op_Multiply_m514(NULL /*static, unused*/, (0.5f), L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern TypeInfo* Vector3U5BU5D_t130_il2cpp_TypeInfo_var;
extern TypeInfo* SingleU5BU5D_t131_il2cpp_TypeInfo_var;
extern "C" void WaypointCircuit_CachePositionsAndDistances_m397 (WaypointCircuit_t127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		SingleU5BU5D_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Transform_t38 * V_2 = {0};
	Transform_t38 * V_3 = {0};
	Vector3_t40  V_4 = {0};
	Vector3_t40  V_5 = {0};
	Vector3_t40  V_6 = {0};
	{
		TransformU5BU5D_t101* L_0 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		__this->___points_5 = ((Vector3U5BU5D_t130*)SZArrayNew(Vector3U5BU5D_t130_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))+(int32_t)1))));
		TransformU5BU5D_t101* L_1 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		__this->___distances_6 = ((SingleU5BU5D_t131*)SZArrayNew(SingleU5BU5D_t131_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))+(int32_t)1))));
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00ce;
	}

IL_0037:
	{
		TransformU5BU5D_t101* L_2 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		TransformU5BU5D_t101* L_4 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))));
		int32_t L_5 = ((int32_t)((int32_t)L_3%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		V_2 = (*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_2, L_5));
		TransformU5BU5D_t101* L_6 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		TransformU5BU5D_t101* L_8 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_3 = (*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_6, L_9));
		Transform_t38 * L_10 = V_2;
		bool L_11 = Object_op_Inequality_m538(NULL /*static, unused*/, L_10, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t38 * L_12 = V_3;
		bool L_13 = Object_op_Inequality_m538(NULL /*static, unused*/, L_12, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t38 * L_14 = V_2;
		NullCheck(L_14);
		Vector3_t40  L_15 = Transform_get_position_m509(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		Transform_t38 * L_16 = V_3;
		NullCheck(L_16);
		Vector3_t40  L_17 = Transform_get_position_m509(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		Vector3U5BU5D_t130* L_18 = (__this->___points_5);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		TransformU5BU5D_t101* L_20 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		TransformU5BU5D_t101* L_22 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21%(int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))));
		int32_t L_23 = ((int32_t)((int32_t)L_21%(int32_t)(((int32_t)(((Array_t *)L_22)->max_length)))));
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_20, L_23)));
		Vector3_t40  L_24 = Transform_get_position_m509((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_20, L_23)), /*hidden argument*/NULL);
		*((Vector3_t40 *)(Vector3_t40 *)SZArrayLdElema(L_18, L_19)) = L_24;
		SingleU5BU5D_t131* L_25 = (__this->___distances_6);
		int32_t L_26 = V_1;
		float L_27 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		*((float*)(float*)SZArrayLdElema(L_25, L_26)) = (float)L_27;
		float L_28 = V_0;
		Vector3_t40  L_29 = V_4;
		Vector3_t40  L_30 = V_5;
		Vector3_t40  L_31 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = Vector3_get_magnitude_m695((&V_6), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_28+(float)L_32));
	}

IL_00ca:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_34 = V_1;
		Vector3U5BU5D_t130* L_35 = (__this->___points_5);
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)(((Array_t *)L_35)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C" void WaypointCircuit_OnDrawGizmos_m398 (WaypointCircuit_t127 * __this, const MethodInfo* method)
{
	{
		WaypointCircuit_DrawGizmos_m400(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C" void WaypointCircuit_OnDrawGizmosSelected_m399 (WaypointCircuit_t127 * __this, const MethodInfo* method)
{
	{
		WaypointCircuit_DrawGizmos_m400(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C" void WaypointCircuit_DrawGizmos_m400 (WaypointCircuit_t127 * __this, bool ___selected, const MethodInfo* method)
{
	Vector3_t40  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t40  V_2 = {0};
	int32_t V_3 = 0;
	Vector3_t40  V_4 = {0};
	Color_t200  G_B4_0 = {0};
	{
		WaypointList_t128 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		L_0->___circuit_0 = __this;
		TransformU5BU5D_t101* L_1 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		TransformU5BU5D_t101* L_2 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_2)->max_length)));
		WaypointCircuit_CachePositionsAndDistances_m397(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t131* L_3 = (__this->___distances_6);
		SingleU5BU5D_t131* L_4 = (__this->___distances_6);
		NullCheck(L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1));
		WaypointCircuit_set_Length_m391(__this, (*(float*)(float*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		bool L_6 = ___selected;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		Color_t200  L_7 = Color_get_yellow_m696(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		goto IL_006e;
	}

IL_0055:
	{
		Color_t200  L_8 = {0};
		Color__ctor_m697(&L_8, (1.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		G_B4_0 = L_8;
	}

IL_006e:
	{
		Gizmos_set_color_m698(NULL /*static, unused*/, G_B4_0, /*hidden argument*/NULL);
		TransformU5BU5D_t101* L_9 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_9, L_10)));
		Vector3_t40  L_11 = Transform_get_position_m509((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_9, L_10)), /*hidden argument*/NULL);
		V_0 = L_11;
		bool L_12 = (__this->___smoothRoute_3);
		if (!L_12)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00be;
	}

IL_0097:
	{
		float L_13 = V_1;
		Vector3_t40  L_14 = WaypointCircuit_GetRoutePosition_m395(__this, ((float)((float)L_13+(float)(1.0f))), /*hidden argument*/NULL);
		V_2 = L_14;
		Vector3_t40  L_15 = V_0;
		Vector3_t40  L_16 = V_2;
		Gizmos_DrawLine_m699(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Vector3_t40  L_17 = V_2;
		V_0 = L_17;
		float L_18 = V_1;
		float L_19 = WaypointCircuit_get_Length_m390(__this, /*hidden argument*/NULL);
		float L_20 = (__this->___editorVisualisationSubsteps_7);
		V_1 = ((float)((float)L_18+(float)((float)((float)L_19/(float)L_20))));
	}

IL_00be:
	{
		float L_21 = V_1;
		float L_22 = WaypointCircuit_get_Length_m390(__this, /*hidden argument*/NULL);
		if ((((float)L_21) < ((float)L_22)))
		{
			goto IL_0097;
		}
	}
	{
		Vector3_t40  L_23 = V_0;
		TransformU5BU5D_t101* L_24 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		int32_t L_25 = 0;
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_24, L_25)));
		Vector3_t40  L_26 = Transform_get_position_m509((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_24, L_25)), /*hidden argument*/NULL);
		Gizmos_DrawLine_m699(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00e2:
	{
		V_3 = 0;
		goto IL_0112;
	}

IL_00e9:
	{
		TransformU5BU5D_t101* L_27 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		TransformU5BU5D_t101* L_29 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))));
		int32_t L_30 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_29)->max_length)))));
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_27, L_30)));
		Vector3_t40  L_31 = Transform_get_position_m509((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_27, L_30)), /*hidden argument*/NULL);
		V_4 = L_31;
		Vector3_t40  L_32 = V_0;
		Vector3_t40  L_33 = V_4;
		Gizmos_DrawLine_m699(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		Vector3_t40  L_34 = V_4;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0112:
	{
		int32_t L_36 = V_3;
		TransformU5BU5D_t101* L_37 = WaypointCircuit_get_Waypoints_m392(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((Array_t *)L_37)->max_length))))))
		{
			goto IL_00e9;
		}
	}

IL_0120:
	{
		return;
	}
}
// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_2.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_2MethodDeclarations.h"



// UnityStandardAssets.Utility.WaypointProgressTracker
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Utility.WaypointProgressTracker
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_3MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
extern "C" void WaypointProgressTracker__ctor_m401 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	{
		__this->___lookAheadForTargetOffset_3 = (5.0f);
		__this->___lookAheadForTargetFactor_4 = (0.1f);
		__this->___lookAheadForSpeedOffset_5 = (10.0f);
		__this->___lookAheadForSpeedFactor_6 = (0.2f);
		__this->___pointToPointThreshold_8 = (4.0f);
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
extern "C" RoutePoint_t129  WaypointProgressTracker_get_targetPoint_m402 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	{
		RoutePoint_t129  L_0 = (__this->___U3CtargetPointU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" void WaypointProgressTracker_set_targetPoint_m403 (WaypointProgressTracker_t133 * __this, RoutePoint_t129  ___value, const MethodInfo* method)
{
	{
		RoutePoint_t129  L_0 = ___value;
		__this->___U3CtargetPointU3Ek__BackingField_14 = L_0;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
extern "C" RoutePoint_t129  WaypointProgressTracker_get_speedPoint_m404 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	{
		RoutePoint_t129  L_0 = (__this->___U3CspeedPointU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" void WaypointProgressTracker_set_speedPoint_m405 (WaypointProgressTracker_t133 * __this, RoutePoint_t129  ___value, const MethodInfo* method)
{
	{
		RoutePoint_t129  L_0 = ___value;
		__this->___U3CspeedPointU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
extern "C" RoutePoint_t129  WaypointProgressTracker_get_progressPoint_m406 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	{
		RoutePoint_t129  L_0 = (__this->___U3CprogressPointU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" void WaypointProgressTracker_set_progressPoint_m407 (WaypointProgressTracker_t133 * __this, RoutePoint_t129  ___value, const MethodInfo* method)
{
	{
		RoutePoint_t129  L_0 = ___value;
		__this->___U3CprogressPointU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t9_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral100;
extern "C" void WaypointProgressTracker_Start_m408 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GameObject_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral100 = il2cpp_codegen_string_literal_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t38 * L_0 = (__this->___target_9);
		bool L_1 = Object_op_Equality_m466(NULL /*static, unused*/, L_0, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = Object_get_name_m498(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m419(NULL /*static, unused*/, L_2, _stringLiteral100, /*hidden argument*/NULL);
		GameObject_t9 * L_4 = (GameObject_t9 *)il2cpp_codegen_object_new (GameObject_t9_il2cpp_TypeInfo_var);
		GameObject__ctor_m566(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t38 * L_5 = GameObject_get_transform_m525(L_4, /*hidden argument*/NULL);
		__this->___target_9 = L_5;
	}

IL_0031:
	{
		WaypointProgressTracker_Reset_m409(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
extern "C" void WaypointProgressTracker_Reset_m409 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	{
		__this->___progressDistance_10 = (0.0f);
		__this->___progressNum_11 = 0;
		int32_t L_0 = (__this->___progressStyle_7);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		Transform_t38 * L_1 = (__this->___target_9);
		WaypointCircuit_t127 * L_2 = (__this->___circuit_2);
		NullCheck(L_2);
		TransformU5BU5D_t101* L_3 = WaypointCircuit_get_Waypoints_m392(L_2, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___progressNum_11);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_3, L_5)));
		Vector3_t40  L_6 = Transform_get_position_m509((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m523(L_1, L_6, /*hidden argument*/NULL);
		Transform_t38 * L_7 = (__this->___target_9);
		WaypointCircuit_t127 * L_8 = (__this->___circuit_2);
		NullCheck(L_8);
		TransformU5BU5D_t101* L_9 = WaypointCircuit_get_Waypoints_m392(L_8, /*hidden argument*/NULL);
		int32_t L_10 = (__this->___progressNum_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_9, L_11)));
		Quaternion_t106  L_12 = Transform_get_rotation_m589((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m665(L_7, L_12, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" void WaypointProgressTracker_Update_m410 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t40  V_0 = {0};
	Vector3_t40  V_1 = {0};
	Vector3_t40  V_2 = {0};
	Vector3_t40  V_3 = {0};
	RoutePoint_t129  V_4 = {0};
	RoutePoint_t129  V_5 = {0};
	RoutePoint_t129  V_6 = {0};
	RoutePoint_t129  V_7 = {0};
	RoutePoint_t129  V_8 = {0};
	RoutePoint_t129  V_9 = {0};
	{
		int32_t L_0 = (__this->___progressStyle_7);
		if (L_0)
		{
			goto IL_0153;
		}
	}
	{
		float L_1 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = (__this->___speed_13);
		Vector3_t40  L_3 = (__this->___lastPosition_12);
		Transform_t38 * L_4 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t40  L_5 = Transform_get_position_m509(L_4, /*hidden argument*/NULL);
		Vector3_t40  L_6 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = Vector3_get_magnitude_m695((&V_3), /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = Time_get_deltaTime_m518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Lerp_m526(NULL /*static, unused*/, L_2, ((float)((float)L_7/(float)L_8)), L_9, /*hidden argument*/NULL);
		__this->___speed_13 = L_10;
	}

IL_0054:
	{
		Transform_t38 * L_11 = (__this->___target_9);
		WaypointCircuit_t127 * L_12 = (__this->___circuit_2);
		float L_13 = (__this->___progressDistance_10);
		float L_14 = (__this->___lookAheadForTargetOffset_3);
		float L_15 = (__this->___lookAheadForTargetFactor_4);
		float L_16 = (__this->___speed_13);
		NullCheck(L_12);
		RoutePoint_t129  L_17 = WaypointCircuit_GetRoutePoint_m394(L_12, ((float)((float)((float)((float)L_13+(float)L_14))+(float)((float)((float)L_15*(float)L_16)))), /*hidden argument*/NULL);
		V_4 = L_17;
		Vector3_t40  L_18 = ((&V_4)->___position_0);
		NullCheck(L_11);
		Transform_set_position_m523(L_11, L_18, /*hidden argument*/NULL);
		Transform_t38 * L_19 = (__this->___target_9);
		WaypointCircuit_t127 * L_20 = (__this->___circuit_2);
		float L_21 = (__this->___progressDistance_10);
		float L_22 = (__this->___lookAheadForSpeedOffset_5);
		float L_23 = (__this->___lookAheadForSpeedFactor_6);
		float L_24 = (__this->___speed_13);
		NullCheck(L_20);
		RoutePoint_t129  L_25 = WaypointCircuit_GetRoutePoint_m394(L_20, ((float)((float)((float)((float)L_21+(float)L_22))+(float)((float)((float)L_23*(float)L_24)))), /*hidden argument*/NULL);
		V_5 = L_25;
		Vector3_t40  L_26 = ((&V_5)->___direction_1);
		Quaternion_t106  L_27 = Quaternion_LookRotation_m700(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_rotation_m665(L_19, L_27, /*hidden argument*/NULL);
		WaypointCircuit_t127 * L_28 = (__this->___circuit_2);
		float L_29 = (__this->___progressDistance_10);
		NullCheck(L_28);
		RoutePoint_t129  L_30 = WaypointCircuit_GetRoutePoint_m394(L_28, L_29, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m407(__this, L_30, /*hidden argument*/NULL);
		RoutePoint_t129  L_31 = WaypointProgressTracker_get_progressPoint_m406(__this, /*hidden argument*/NULL);
		V_6 = L_31;
		Vector3_t40  L_32 = ((&V_6)->___position_0);
		Transform_t38 * L_33 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t40  L_34 = Transform_get_position_m509(L_33, /*hidden argument*/NULL);
		Vector3_t40  L_35 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		Vector3_t40  L_36 = V_0;
		RoutePoint_t129  L_37 = WaypointProgressTracker_get_progressPoint_m406(__this, /*hidden argument*/NULL);
		V_7 = L_37;
		Vector3_t40  L_38 = ((&V_7)->___direction_1);
		float L_39 = Vector3_Dot_m701(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_013d;
		}
	}
	{
		float L_40 = (__this->___progressDistance_10);
		float L_41 = Vector3_get_magnitude_m695((&V_0), /*hidden argument*/NULL);
		__this->___progressDistance_10 = ((float)((float)L_40+(float)((float)((float)L_41*(float)(0.5f)))));
	}

IL_013d:
	{
		Transform_t38 * L_42 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t40  L_43 = Transform_get_position_m509(L_42, /*hidden argument*/NULL);
		__this->___lastPosition_12 = L_43;
		goto IL_025c;
	}

IL_0153:
	{
		Transform_t38 * L_44 = (__this->___target_9);
		NullCheck(L_44);
		Vector3_t40  L_45 = Transform_get_position_m509(L_44, /*hidden argument*/NULL);
		Transform_t38 * L_46 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t40  L_47 = Transform_get_position_m509(L_46, /*hidden argument*/NULL);
		Vector3_t40  L_48 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		V_1 = L_48;
		float L_49 = Vector3_get_magnitude_m695((&V_1), /*hidden argument*/NULL);
		float L_50 = (__this->___pointToPointThreshold_8);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_51 = (__this->___progressNum_11);
		WaypointCircuit_t127 * L_52 = (__this->___circuit_2);
		NullCheck(L_52);
		TransformU5BU5D_t101* L_53 = WaypointCircuit_get_Waypoints_m392(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		__this->___progressNum_11 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_53)->max_length)))));
	}

IL_019d:
	{
		Transform_t38 * L_54 = (__this->___target_9);
		WaypointCircuit_t127 * L_55 = (__this->___circuit_2);
		NullCheck(L_55);
		TransformU5BU5D_t101* L_56 = WaypointCircuit_get_Waypoints_m392(L_55, /*hidden argument*/NULL);
		int32_t L_57 = (__this->___progressNum_11);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		int32_t L_58 = L_57;
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_56, L_58)));
		Vector3_t40  L_59 = Transform_get_position_m509((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_56, L_58)), /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_position_m523(L_54, L_59, /*hidden argument*/NULL);
		Transform_t38 * L_60 = (__this->___target_9);
		WaypointCircuit_t127 * L_61 = (__this->___circuit_2);
		NullCheck(L_61);
		TransformU5BU5D_t101* L_62 = WaypointCircuit_get_Waypoints_m392(L_61, /*hidden argument*/NULL);
		int32_t L_63 = (__this->___progressNum_11);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		NullCheck((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_62, L_64)));
		Quaternion_t106  L_65 = Transform_get_rotation_m589((*(Transform_t38 **)(Transform_t38 **)SZArrayLdElema(L_62, L_64)), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_rotation_m665(L_60, L_65, /*hidden argument*/NULL);
		WaypointCircuit_t127 * L_66 = (__this->___circuit_2);
		float L_67 = (__this->___progressDistance_10);
		NullCheck(L_66);
		RoutePoint_t129  L_68 = WaypointCircuit_GetRoutePoint_m394(L_66, L_67, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m407(__this, L_68, /*hidden argument*/NULL);
		RoutePoint_t129  L_69 = WaypointProgressTracker_get_progressPoint_m406(__this, /*hidden argument*/NULL);
		V_8 = L_69;
		Vector3_t40  L_70 = ((&V_8)->___position_0);
		Transform_t38 * L_71 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t40  L_72 = Transform_get_position_m509(L_71, /*hidden argument*/NULL);
		Vector3_t40  L_73 = Vector3_op_Subtraction_m511(NULL /*static, unused*/, L_70, L_72, /*hidden argument*/NULL);
		V_2 = L_73;
		Vector3_t40  L_74 = V_2;
		RoutePoint_t129  L_75 = WaypointProgressTracker_get_progressPoint_m406(__this, /*hidden argument*/NULL);
		V_9 = L_75;
		Vector3_t40  L_76 = ((&V_9)->___direction_1);
		float L_77 = Vector3_Dot_m701(NULL /*static, unused*/, L_74, L_76, /*hidden argument*/NULL);
		if ((!(((float)L_77) < ((float)(0.0f)))))
		{
			goto IL_024b;
		}
	}
	{
		float L_78 = (__this->___progressDistance_10);
		float L_79 = Vector3_get_magnitude_m695((&V_2), /*hidden argument*/NULL);
		__this->___progressDistance_10 = ((float)((float)L_78+(float)L_79));
	}

IL_024b:
	{
		Transform_t38 * L_80 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t40  L_81 = Transform_get_position_m509(L_80, /*hidden argument*/NULL);
		__this->___lastPosition_12 = L_81;
	}

IL_025c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
extern "C" void WaypointProgressTracker_OnDrawGizmos_m411 (WaypointProgressTracker_t133 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Application_get_isPlaying_m702(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Color_t200  L_1 = Color_get_green_m703(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m698(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Transform_t38 * L_2 = Component_get_transform_m510(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t40  L_3 = Transform_get_position_m509(L_2, /*hidden argument*/NULL);
		Transform_t38 * L_4 = (__this->___target_9);
		NullCheck(L_4);
		Vector3_t40  L_5 = Transform_get_position_m509(L_4, /*hidden argument*/NULL);
		Gizmos_DrawLine_m699(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		WaypointCircuit_t127 * L_6 = (__this->___circuit_2);
		float L_7 = (__this->___progressDistance_10);
		NullCheck(L_6);
		Vector3_t40  L_8 = WaypointCircuit_GetRoutePosition_m395(L_6, L_7, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m704(NULL /*static, unused*/, L_8, (1.0f), /*hidden argument*/NULL);
		Color_t200  L_9 = Color_get_yellow_m696(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m698(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Transform_t38 * L_10 = (__this->___target_9);
		NullCheck(L_10);
		Vector3_t40  L_11 = Transform_get_position_m509(L_10, /*hidden argument*/NULL);
		Transform_t38 * L_12 = (__this->___target_9);
		NullCheck(L_12);
		Vector3_t40  L_13 = Transform_get_position_m509(L_12, /*hidden argument*/NULL);
		Transform_t38 * L_14 = (__this->___target_9);
		NullCheck(L_14);
		Vector3_t40  L_15 = Transform_get_forward_m608(L_14, /*hidden argument*/NULL);
		Vector3_t40  L_16 = Vector3_op_Addition_m520(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Gizmos_DrawLine_m699(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
