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
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GKAchievementReporter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_SocialPlatforms_GK.h"
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
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
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
// System.Void UnityEngine.SocialPlatforms.GKAchievementReporter::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GKAchievementReporter__ctor_m0 (GKAchievementReporter_t1 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GKAchievementReporter::ReportAchievement(System.String,System.Single,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GKAchievementReporter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_SocialPlatforms_GKMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t146_il2cpp_TypeInfo_var;
extern "C" void GKAchievementReporter_ReportAchievement_m1 (Object_t * __this /* static, unused */, String_t* ___achievementID, float ___progress, bool ___showsCompletionBanner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m418(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!((GameCenterPlatform_t146 *)IsInstSealed(L_0, GameCenterPlatform_t146_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m419(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___achievementID;
		float L_3 = ___progress;
		bool L_4 = ___showsCompletionBanner;
		GKAchievementReporter__ReportAchievement_m2(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0027:
	{
		String_t* L_5 = ___achievementID;
		float L_6 = ___progress;
		Social_ReportProgress_m420(NULL /*static, unused*/, L_5, (((double)L_6)), (Action_1_t147 *)NULL, /*hidden argument*/NULL);
	}

IL_0030:
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
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ReportAchievement'"));
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
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
// System.Boolean RMX.Singletons::get_GameControllerInitialized()
extern TypeInfo* Singletons_t2_il2cpp_TypeInfo_var;
extern "C" bool Singletons_get_GameControllerInitialized_m3 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Singletons_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((Singletons_t2_StaticFields*)Singletons_t2_il2cpp_TypeInfo_var->static_fields)->____gameController_0;
		return ((((int32_t)((((Object_t*)(Object_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// RMX.IGameController RMX.Singletons::get_GameController()
extern TypeInfo* Singletons_t2_il2cpp_TypeInfo_var;
extern "C" Object_t * Singletons_get_GameController_m4 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
// RMX.RMXTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXTests.h"
// RMX.RMXTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXTestsMethodDeclarations.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_Log.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_LogMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Object
#include "mscorlib_System_Object.h"
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
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Void RMX.Bugger/Log::.ctor(System.Enum,System.String)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.String
#include "mscorlib_System_String.h"
extern "C" void Log__ctor_m5 (Log_t5 * __this, Enum_t6 * ___feature, String_t* ___message, const MethodInfo* method)
{
	{
		Enum_t6 * L_0 = ___feature;
		__this->___feature_0 = L_0;
		String_t* L_1 = ___message;
		__this->___message_1 = L_1;
		return;
	}
}
// System.Boolean RMX.Bugger/Log::get_isEmpty()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Log_get_isEmpty_m6 (Log_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___message_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m421(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" bool Log_get_isActive_m7 (Log_t5 * __this, const MethodInfo* method)
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
extern "C" String_t* Log_get_color_m8 (Log_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = (__this->___feature_0);
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
		Enum_t6 * L_4 = (__this->___feature_0);
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
		Enum_t6 * L_8 = (__this->___feature_0);
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
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_LogMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" String_t* Log_ToString_m9 (Log_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral4;
		ObjectU5BU5D_t148* L_1 = L_0;
		String_t* L_2 = Log_get_color_m8(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_2;
		ObjectU5BU5D_t148* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral5;
		ObjectU5BU5D_t148* L_4 = L_3;
		Enum_t6 * L_5 = (__this->___feature_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t148* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m422(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		String_t* L_9 = (__this->___message_1);
		String_t* L_10 = String_Concat_m423(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_11 = TextFormatter_Format_m111(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
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
		bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t3_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t14 * L_15 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
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
// RMX.Bugger/HUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_HUDMethodDeclarations.h"
// RMX.Singletons/ASingleton`1/Init<RMX.Bugger/HUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_In.h"
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
// RMX.Singletons/ASingleton`1<RMX.Bugger/HUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_geMethodDeclarations.h"
extern TypeInfo* ASingleton_1_t8_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m424_MethodInfo_var;
extern "C" void HUD__ctor_m10 (HUD_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		ASingleton_1__ctor_m424_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t8_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m424(__this, /*hidden argument*/ASingleton_1__ctor_m424_MethodInfo_var);
		return;
	}
}
// RMX.Singletons/ASingleton`1/Init<RMX.Bugger/HUD> RMX.Bugger/HUD::get_WillInitialize()
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern "C" int32_t HUD_get_WillInitialize_m11 (HUD_t7 * __this, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean RMX.IGameController::get_BuildForRelease() */, IGameController_t3_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_2 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t3_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return (int32_t)(2);
	}

IL_0020:
	{
		return (int32_t)(0);
	}
}
// System.Void RMX.Bugger/HUD::Update()
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" void HUD_Update_m12 (HUD_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_0 = Bugger_get_timesUp_m29(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t14 * L_1 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32) */, L_1, 0);
		float L_2 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____startedAt_5 = L_2;
	}

IL_001f:
	{
		return;
	}
}
// System.Void RMX.Bugger/HUD::OnGUI()
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
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t149_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t153_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral7;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" void HUD_OnGUI_m13 (HUD_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GUIStyle_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		GUI_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GUIStyle_t149 * V_1 = {0};
	int32_t V_2 = 0;
	Rect_t150  G_B5_0 = {0};
	Rect_t150  G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	Rect_t150  G_B6_1 = {0};
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
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t3_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t14 * L_3 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		int32_t L_5 = Bugger_get_timeRemaining_m30(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_6);
		List_1_t14 * L_8 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_8, 0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m426(NULL /*static, unused*/, L_7, _stringLiteral7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		GUIStyle_t149 * L_11 = (GUIStyle_t149 *)il2cpp_codegen_object_new (GUIStyle_t149_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m427(L_11, /*hidden argument*/NULL);
		V_1 = L_11;
		GUIStyle_t149 * L_12 = V_1;
		NullCheck(L_12);
		GUIStyle_set_richText_m428(L_12, 1, /*hidden argument*/NULL);
		GUIStyle_t149 * L_13 = V_1;
		NullCheck(L_13);
		GUIStyle_set_wordWrap_m429(L_13, 1, /*hidden argument*/NULL);
		GUIStyle_t149 * L_14 = V_1;
		NullCheck(L_14);
		GUIStyle_set_alignment_m430(L_14, 6, /*hidden argument*/NULL);
		GUIStyle_t149 * L_15 = V_1;
		NullCheck(L_15);
		RectOffset_t152 * L_16 = GUIStyle_get_padding_m431(L_15, /*hidden argument*/NULL);
		V_2 = ((int32_t)20);
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
		float L_32 = Time_get_timeScale_m439(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		String_t* L_35 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral8, L_34, _stringLiteral9, /*hidden argument*/NULL);
		G_B6_0 = L_35;
		G_B6_1 = G_B5_0;
	}

IL_00db:
	{
		GUIStyle_t149 * L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t153_il2cpp_TypeInfo_var);
		GUI_Label_m441(NULL /*static, unused*/, G_B6_1, G_B6_0, L_36, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		return;
	}
}
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUD.h"
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUDMethodDeclarations.h"
// RMX.Singletons/ASingleton`1/Init<RMX.Bugger/DebugHUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_In_0.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Collections.Generic.List`1/Enumerator<RMX.ISingleton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Collections.Generic.List`1<RMX.ISingleton>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// RMX.Singletons/ASingleton`1<RMX.Bugger/DebugHUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_0MethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.ISingleton>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.ISingleton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.Void RMX.Bugger/DebugHUD::.ctor()
// RMX.Singletons/ASingleton`1<RMX.Bugger/DebugHUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_0MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t10_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1__ctor_m442_MethodInfo_var;
extern "C" void DebugHUD__ctor_m14 (DebugHUD_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		ASingleton_1__ctor_m442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____show_12 = 1;
		__this->___listSingletons_13 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t10_il2cpp_TypeInfo_var);
		ASingleton_1__ctor_m442(__this, /*hidden argument*/ASingleton_1__ctor_m442_MethodInfo_var);
		return;
	}
}
// RMX.Singletons/ASingleton`1/Init<RMX.Bugger/DebugHUD> RMX.Bugger/DebugHUD::get_WillInitialize()
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern "C" int32_t DebugHUD_get_WillInitialize_m15 (DebugHUD_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * V_0 = {0};
	int32_t V_1 = {0};
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
			Object_t * L_0 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_0);
			bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean RMX.IGameController::get_BuildForRelease() */, IGameController_t3_il2cpp_TypeInfo_var, L_0);
			if (L_1)
			{
				goto IL_001e;
			}
		}

IL_000f:
		{
			Object_t * L_2 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t3_il2cpp_TypeInfo_var, L_2);
			if (L_3)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			V_1 = 2;
			goto IL_0049;
		}

IL_0025:
		{
			V_1 = 0;
			goto IL_0049;
		}

IL_002c:
		{
			; // IL_002c: leave IL_0049
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0031;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t154 *)__exception_local);
			Exception_t154 * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_4);
			Debug_LogWarning_m443(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			V_1 = 0;
			goto IL_0049;
		}

IL_0044:
		{
			; // IL_0044: leave IL_0049
		}
	} // end catch (depth: 1)

IL_0049:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void RMX.Bugger/DebugHUD::Start()
// RMX.Bugger/DebugHUD
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_DebugHUDMethodDeclarations.h"
extern "C" void DebugHUD_Start_m16 (DebugHUD_t9 * __this, const MethodInfo* method)
{
	{
		DebugHUD_Show_m17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.Bugger/DebugHUD::Show()
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern "C" void DebugHUD_Show_m17 (DebugHUD_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->____show_12 = 1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		GameObject_t11 * L_0 = (__this->___showButton_10);
		NullCheck(L_0);
		GameObject_SetActive_m444(L_0, 0, /*hidden argument*/NULL);
		GameObject_t11 * L_1 = (__this->___hideButton_11);
		Object_t * L_2 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t3_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		GameObject_SetActive_m444(L_1, L_3, /*hidden argument*/NULL);
		goto IL_003d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002d;
		throw e;
	}

CATCH_002d:
	{ // begin catch(System.Object)
		Debug_LogWarning_m443(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		goto IL_003d;
	} // end catch (depth: 1)

IL_003d:
	{
		return;
	}
}
// System.Void RMX.Bugger/DebugHUD::Hide()
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern "C" void DebugHUD_Hide_m18 (DebugHUD_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->____show_12 = 0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		GameObject_t11 * L_0 = (__this->___showButton_10);
		Object_t * L_1 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t3_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		GameObject_SetActive_m444(L_0, L_2, /*hidden argument*/NULL);
		GameObject_t11 * L_3 = (__this->___hideButton_11);
		NullCheck(L_3);
		GameObject_SetActive_m444(L_3, 0, /*hidden argument*/NULL);
		goto IL_003d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002d;
		throw e;
	}

CATCH_002d:
	{ // begin catch(System.Object)
		Debug_LogWarning_m443(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		goto IL_003d;
	} // end catch (depth: 1)

IL_003d:
	{
		return;
	}
}
// System.Void RMX.Bugger/DebugHUD::OnGUI()
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.ISingleton>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.ISingleton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern TypeInfo* GUIStyle_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t140_il2cpp_TypeInfo_var;
extern TypeInfo* IRMXObject_t136_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t155_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m445_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m446_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m447_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern "C" void DebugHUD_OnGUI_m19 (DebugHUD_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		EventListener_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		IRMXObject_t136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Enumerator_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GUI_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		List_1_GetEnumerator_m445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Enumerator_get_Current_m446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Enumerator_MoveNext_m447_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GUIStyle_t149 * V_1 = {0};
	Object_t * V_2 = {0};
	Enumerator_t155  V_3 = {0};
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B9_0 = {0};
	Rect_t150  G_B9_1 = {0};
	String_t* G_B8_0 = {0};
	Rect_t150  G_B8_1 = {0};
	String_t* G_B10_0 = {0};
	String_t* G_B10_1 = {0};
	Rect_t150  G_B10_2 = {0};
	{
		bool L_0 = (__this->____show_12);
		if (!L_0)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String RMX.Bugger/DebugHUD::get_DebugData() */, __this);
		V_0 = L_1;
		GUIStyle_t149 * L_2 = (GUIStyle_t149 *)il2cpp_codegen_object_new (GUIStyle_t149_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m427(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t16 * L_3 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___singletons_2;
		NullCheck(L_3);
		Enumerator_t155  L_4 = List_1_GetEnumerator_m445(L_3, /*hidden argument*/List_1_GetEnumerator_m445_MethodInfo_var);
		V_3 = L_4;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_0028:
		{
			Object_t * L_5 = Enumerator_get_Current_m446((&V_3), /*hidden argument*/Enumerator_get_Current_m446_MethodInfo_var);
			V_2 = L_5;
			String_t* L_6 = V_0;
			V_4 = L_6;
			ObjectU5BU5D_t148* L_7 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 5));
			String_t* L_8 = V_4;
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
			ArrayElementTypeCheck (L_7, L_8);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0, sizeof(Object_t *))) = (Object_t *)L_8;
			ObjectU5BU5D_t148* L_9 = L_7;
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
			ArrayElementTypeCheck (L_9, _stringLiteral11);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral11;
			ObjectU5BU5D_t148* L_10 = L_9;
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String RMX.EventListener::get_name() */, EventListener_t140_il2cpp_TypeInfo_var, L_11);
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
			ArrayElementTypeCheck (L_10, L_12);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2, sizeof(Object_t *))) = (Object_t *)L_12;
			ObjectU5BU5D_t148* L_13 = L_10;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
			ArrayElementTypeCheck (L_13, _stringLiteral12);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral12;
			ObjectU5BU5D_t148* L_14 = L_13;
			Object_t * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean RMX.IRMXObject::get_isListening() */, IRMXObject_t136_il2cpp_TypeInfo_var, L_15);
			bool L_17 = L_16;
			Object_t * L_18 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_17);
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
			ArrayElementTypeCheck (L_14, L_18);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 4, sizeof(Object_t *))) = (Object_t *)L_18;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_19 = String_Concat_m422(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			V_0 = L_19;
		}

IL_006b:
		{
			bool L_20 = Enumerator_MoveNext_m447((&V_3), /*hidden argument*/Enumerator_MoveNext_m447_MethodInfo_var);
			if (L_20)
			{
				goto IL_0028;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Enumerator_t155  L_21 = V_3;
		Enumerator_t155  L_22 = L_21;
		Object_t * L_23 = Box(Enumerator_t155_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_23);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x88, IL_0088)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0088:
	{
		GUIStyle_t149 * L_24 = V_1;
		NullCheck(L_24);
		GUIStyle_set_richText_m428(L_24, 1, /*hidden argument*/NULL);
		GUIStyle_t149 * L_25 = V_1;
		NullCheck(L_25);
		GUIStyle_set_wordWrap_m429(L_25, 1, /*hidden argument*/NULL);
		GUIStyle_t149 * L_26 = V_1;
		NullCheck(L_26);
		GUIStyle_set_alignment_m430(L_26, 2, /*hidden argument*/NULL);
		GUIStyle_t149 * L_27 = V_1;
		NullCheck(L_27);
		RectOffset_t152 * L_28 = GUIStyle_get_padding_m431(L_27, /*hidden argument*/NULL);
		V_5 = ((int32_t)20);
		GUIStyle_t149 * L_29 = V_1;
		NullCheck(L_29);
		RectOffset_t152 * L_30 = GUIStyle_get_padding_m431(L_29, /*hidden argument*/NULL);
		int32_t L_31 = V_5;
		NullCheck(L_30);
		RectOffset_set_bottom_m432(L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_5;
		V_5 = L_32;
		GUIStyle_t149 * L_33 = V_1;
		NullCheck(L_33);
		RectOffset_t152 * L_34 = GUIStyle_get_padding_m431(L_33, /*hidden argument*/NULL);
		int32_t L_35 = V_5;
		NullCheck(L_34);
		RectOffset_set_top_m433(L_34, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_5;
		V_5 = L_36;
		GUIStyle_t149 * L_37 = V_1;
		NullCheck(L_37);
		RectOffset_t152 * L_38 = GUIStyle_get_padding_m431(L_37, /*hidden argument*/NULL);
		int32_t L_39 = V_5;
		NullCheck(L_38);
		RectOffset_set_right_m434(L_38, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_5;
		NullCheck(L_28);
		RectOffset_set_left_m435(L_28, L_40, /*hidden argument*/NULL);
		int32_t L_41 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_42 = Screen_get_height_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t150  L_43 = {0};
		Rect__ctor_m438(&L_43, (0.0f), (0.0f), (((float)L_41)), (((float)L_42)), /*hidden argument*/NULL);
		String_t* L_44 = V_0;
		float L_45 = Time_get_timeScale_m439(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_44;
		G_B8_1 = L_43;
		if ((!(((float)L_45) == ((float)(0.0f)))))
		{
			G_B9_0 = L_44;
			G_B9_1 = L_43;
			goto IL_0112;
		}
	}
	{
		G_B10_0 = _stringLiteral13;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0117;
	}

IL_0112:
	{
		G_B10_0 = _stringLiteral14;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0117:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_46 = TextFormatter_Format_m112(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		GUIStyle_t149 * L_47 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t153_il2cpp_TypeInfo_var);
		GUI_Label_m441(NULL /*static, unused*/, G_B10_2, L_46, L_47, /*hidden argument*/NULL);
	}

IL_0122:
	{
		return;
	}
}
// RMX.Bugger/<AddToQueue>c__AnonStorey9
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_U3CAddToQueueU3Ec__.h"
// RMX.Bugger/<AddToQueue>c__AnonStorey9
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_U3CAddToQueueU3Ec__MethodDeclarations.h"
// System.Void RMX.Bugger/<AddToQueue>c__AnonStorey9::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CAddToQueueU3Ec__AnonStorey9__ctor_m20 (U3CAddToQueueU3Ec__AnonStorey9_t12 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RMX.Bugger/<AddToQueue>c__AnonStorey9::<>m__0(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m21 (U3CAddToQueueU3Ec__AnonStorey9_t12 * __this, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___val;
		String_t* L_1 = (__this->___log_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m421(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Collections.Generic.List`1<RMX.IRMXObject>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
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
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.IRMXObject>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Predicate`1<System.String>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
// System.Void RMX.Bugger::.cctor()
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.ISingleton>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.IRMXObject>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// RMX.Bugger/Log
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_LogMethodDeclarations.h"
extern TypeInfo* List_1_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t15_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t16_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t17_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m448_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m449_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m450_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m451_MethodInfo_var;
extern "C" void Bugger__cctor_m22 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		List_1_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		List_1_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		List_1__ctor_m448_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		List_1__ctor_m449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		List_1__ctor_m450_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		List_1__ctor_m451_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t14 * L_0 = (List_1_t14 *)il2cpp_codegen_object_new (List_1_t14_il2cpp_TypeInfo_var);
		List_1__ctor_m448(L_0, /*hidden argument*/List_1__ctor_m448_MethodInfo_var);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0 = L_0;
		List_1_t15 * L_1 = (List_1_t15 *)il2cpp_codegen_object_new (List_1_t15_il2cpp_TypeInfo_var);
		List_1__ctor_m449(L_1, /*hidden argument*/List_1__ctor_m449_MethodInfo_var);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1 = L_1;
		List_1_t16 * L_2 = (List_1_t16 *)il2cpp_codegen_object_new (List_1_t16_il2cpp_TypeInfo_var);
		List_1__ctor_m450(L_2, /*hidden argument*/List_1__ctor_m450_MethodInfo_var);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___singletons_2 = L_2;
		List_1_t17 * L_3 = (List_1_t17 *)il2cpp_codegen_object_new (List_1_t17_il2cpp_TypeInfo_var);
		List_1__ctor_m451(L_3, /*hidden argument*/List_1__ctor_m451_MethodInfo_var);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___watchList_3 = L_3;
		int32_t L_4 = 3;
		Object_t * L_5 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Log_t5  L_7 = {0};
		Log__ctor_m5(&L_7, (Enum_t6 *)L_5, L_6, /*hidden argument*/NULL);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____log_4 = L_7;
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____startedAt_5 = (0.0f);
		return;
	}
}
// System.Void RMX.Bugger::AddToWatchList(RMX.IRMXObject)
// RMX.Singletons
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SingletonsMethodDeclarations.h"
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* ISingleton_t158_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" void Bugger_AddToWatchList_m23 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ISingleton_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Singletons_get_GameControllerInitialized_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean RMX.IGameController::get_BuildForRelease() */, IGameController_t3_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0044;
		}
	}

IL_0019:
	{
		Object_t * L_3 = ___o;
		if (!((Object_t *)IsInst(L_3, ISingleton_t158_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t16 * L_4 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___singletons_2;
		Object_t * L_5 = ___o;
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.ISingleton>::Add(!0) */, L_4, ((Object_t *)IsInst(L_5, ISingleton_t158_il2cpp_TypeInfo_var)));
		goto IL_0044;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t17 * L_6 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___watchList_3;
		Object_t * L_7 = ___o;
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.IRMXObject>::Add(!0) */, L_6, L_7);
	}

IL_0044:
	{
		return;
	}
}
// System.Void RMX.Bugger::LateLogs()
// System.Collections.Generic.List`1/Enumerator<RMX.Bugger/Log>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Log_t5_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t159_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m452_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m453_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m455_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void Bugger_LateLogs_m24 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Log_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Enumerator_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m452_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		Enumerator_get_Current_m453_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		Enumerator_MoveNext_m455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	Log_t5  V_0 = {0};
	Enumerator_t159  V_1 = {0};
	String_t* V_2 = {0};
	Exception_t154 * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = 8;
		Object_t * L_2 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, Enum_t6 * >::Invoke(4 /* System.Boolean RMX.IGameController::IsDebugging(System.Enum) */, IGameController_t3_il2cpp_TypeInfo_var, L_0, (Enum_t6 *)L_2);
		if (!L_3)
		{
			goto IL_00a4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t15 * L_4 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		NullCheck(L_4);
		Enumerator_t159  L_5 = List_1_GetEnumerator_m452(L_4, /*hidden argument*/List_1_GetEnumerator_m452_MethodInfo_var);
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
			Log_t5  L_6 = Enumerator_get_Current_m453((&V_1), /*hidden argument*/Enumerator_get_Current_m453_MethodInfo_var);
			V_0 = L_6;
		}

IL_002d:
		try
		{ // begin try (depth: 2)
			{
				Object_t * L_7 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
				Enum_t6 * L_8 = ((&V_0)->___feature_0);
				NullCheck(L_7);
				bool L_9 = (bool)InterfaceFuncInvoker1< bool, Enum_t6 * >::Invoke(4 /* System.Boolean RMX.IGameController::IsDebugging(System.Enum) */, IGameController_t3_il2cpp_TypeInfo_var, L_7, L_8);
				if (!L_9)
				{
					goto IL_0071;
				}
			}

IL_0043:
			{
				String_t* L_10 = ((&V_0)->___message_1);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_11 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral15, L_10, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
				String_t* L_12 = TextFormatter_Format_m111(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
				V_2 = L_12;
				Enum_t6 * L_13 = ((&V_0)->___feature_0);
				String_t* L_14 = V_2;
				Log_t5  L_15 = {0};
				Log__ctor_m5(&L_15, L_13, L_14, /*hidden argument*/NULL);
				Log_t5  L_16 = L_15;
				Object_t * L_17 = Box(Log_t5_il2cpp_TypeInfo_var, &L_16);
				Debug_Log_m454(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			}

IL_0071:
			{
				goto IL_0087;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0076;
			throw e;
		}

CATCH_0076:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t154 *)__exception_local);
			Exception_t154 * L_18 = V_3;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_18);
			Debug_LogWarning_m443(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			goto IL_0087;
		} // end catch (depth: 2)

IL_0087:
		{
			bool L_20 = Enumerator_MoveNext_m455((&V_1), /*hidden argument*/Enumerator_MoveNext_m455_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0098;
	}

FINALLY_0098:
	{ // begin finally (depth: 1)
		Enumerator_t159  L_21 = V_1;
		Enumerator_t159  L_22 = L_21;
		Object_t * L_23 = Box(Enumerator_t159_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_23);
		IL2CPP_END_FINALLY(152)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(152)
	{
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00a4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t15 * L_24 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		NullCheck(L_24);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Clear() */, L_24);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1 = (List_1_t15 *)NULL;
		return;
	}
}
// System.String RMX.Bugger::get_Last()
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" String_t* Bugger_get_Last_m25 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_0 = Log_get_isEmpty_m6((&((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____log_4), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_1 = Log_ToString_m9((&((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____log_4), /*hidden argument*/NULL);
		return L_1;
	}

IL_001a:
	{
		NullReferenceException_t160 * L_2 = (NullReferenceException_t160 *)il2cpp_codegen_object_new (NullReferenceException_t160_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m456(L_2, _stringLiteral16, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}
}
// System.Void RMX.Bugger::AddLateLog(System.Enum,System.String)
// System.Enum
#include "mscorlib_System_Enum.h"
// System.String
#include "mscorlib_System_String.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral18;
extern "C" void Bugger_AddLateLog_m26 (Object_t * __this /* static, unused */, Enum_t6 * ___feature, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t15 * L_0 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		ObjectU5BU5D_t148* L_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, _stringLiteral17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral17;
		ObjectU5BU5D_t148* L_2 = L_1;
		Enum_t6 * L_3 = ___feature;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t148* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, _stringLiteral18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral18;
		ObjectU5BU5D_t148* L_5 = L_4;
		String_t* L_6 = ___message;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m422(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Exception_t154 * L_8 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t15 * L_9 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____lateLogs_1;
		Enum_t6 * L_10 = ___feature;
		String_t* L_11 = ___message;
		Log_t5  L_12 = {0};
		Log__ctor_m5(&L_12, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Log_t5  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.Bugger/Log>::Add(!0) */, L_9, L_12);
		return;
	}
}
// System.String RMX.Bugger::Stack(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
extern TypeInfo* StackTrace_t162_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral20;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" String_t* Bugger_Stack_m27 (Object_t * __this /* static, unused */, String_t* ___message, int32_t ___skip, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	StackFrame_t161 * V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	Exception_t154 * V_4 = {0};
	String_t* V_5 = {0};
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
			int32_t L_0 = ___skip;
			StackTrace_t162 * L_1 = (StackTrace_t162 *)il2cpp_codegen_object_new (StackTrace_t162_il2cpp_TypeInfo_var);
			StackTrace__ctor_m458(L_1, L_0, /*hidden argument*/NULL);
			NullCheck(L_1);
			StackFrame_t161 * L_2 = (StackFrame_t161 *)VirtFuncInvoker1< StackFrame_t161 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, 0);
			V_0 = L_2;
			StackFrame_t161 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_3);
			V_1 = L_4;
			StackFrame_t161 * L_5 = V_0;
			NullCheck(L_5);
			MethodBase_t163 * L_6 = (MethodBase_t163 *)VirtFuncInvoker0< MethodBase_t163 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_5);
			NullCheck(L_6);
			String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
			V_2 = L_7;
			StackFrame_t161 * L_8 = V_0;
			NullCheck(L_8);
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_8);
			V_3 = L_9;
			String_t* L_10 = ___message;
			String_t* L_11 = V_1;
			String_t* L_12 = V_2;
			int32_t L_13 = V_3;
			int32_t L_14 = L_13;
			Object_t * L_15 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_14);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_16 = String_Format_m459(NULL /*static, unused*/, _stringLiteral19, L_11, L_12, L_15, /*hidden argument*/NULL);
			String_t* L_17 = String_Concat_m423(NULL /*static, unused*/, L_10, L_16, /*hidden argument*/NULL);
			V_5 = L_17;
			goto IL_0070;
		}

IL_0046:
		{
			; // IL_0046: leave IL_0070
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_004b;
		throw e;
	}

CATCH_004b:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t154 *)__exception_local);
			Exception_t154 * L_18 = V_4;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_18);
			String_t* L_20 = ___message;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m460(NULL /*static, unused*/, _stringLiteral20, L_19, _stringLiteral11, L_20, /*hidden argument*/NULL);
			V_5 = L_21;
			goto IL_0070;
		}

IL_006b:
		{
			; // IL_006b: leave IL_0070
		}
	} // end catch (depth: 1)

IL_0070:
	{
		String_t* L_22 = V_5;
		return L_22;
	}
}
// System.Boolean RMX.Bugger::WillLog(System.Enum,System.String)
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern "C" bool Bugger_WillLog_m28 (Object_t * __this /* static, unused */, Enum_t6 * ___feature, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_1 = Bugger_Stack_m27(NULL /*static, unused*/, L_0, 2, /*hidden argument*/NULL);
		___message = L_1;
		bool L_2 = Singletons_get_GameControllerInitialized_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_3 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		Enum_t6 * L_4 = ___feature;
		NullCheck(L_3);
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, Enum_t6 * >::Invoke(4 /* System.Boolean RMX.IGameController::IsDebugging(System.Enum) */, IGameController_t3_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		Enum_t6 * L_6 = ___feature;
		String_t* L_7 = ___message;
		Log_t5  L_8 = {0};
		Log__ctor_m5(&L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____log_4 = L_8;
		return 1;
	}

IL_0031:
	{
		return 0;
	}

IL_0033:
	{
		Enum_t6 * L_9 = ___feature;
		String_t* L_10 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		Bugger_AddLateLog_m26(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Boolean RMX.Bugger::get_timesUp()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" bool Bugger_get_timesUp_m29 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
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
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean RMX.IGameController::get_DebugHUD() */, IGameController_t3_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t14 * L_3 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		float L_5 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		float L_6 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____startedAt_5;
		Object_t * L_7 = Singletons_get_GameController_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8 = (float)InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single RMX.IGameController::get_MaxDisplayTime() */, IGameController_t3_il2cpp_TypeInfo_var, L_7);
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
extern TypeInfo* IGameController_t3_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" int32_t Bugger_get_timeRemaining_m30 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGameController_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
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
		float L_2 = (float)InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single RMX.IGameController::get_MaxDisplayTime() */, IGameController_t3_il2cpp_TypeInfo_var, L_1);
		float L_3 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		float L_4 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____startedAt_5;
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
// RMX.Bugger/<AddToQueue>c__AnonStorey9
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Bugger_U3CAddToQueueU3Ec__MethodDeclarations.h"
// System.Predicate`1<System.String>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
extern TypeInfo* U3CAddToQueueU3Ec__AnonStorey9_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t164_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m21_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m461_MethodInfo_var;
extern const MethodInfo* List_1_Exists_m462_MethodInfo_var;
extern "C" void Bugger_AddToQueue_m31 (Object_t * __this /* static, unused */, String_t* ___log, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAddToQueueU3Ec__AnonStorey9_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Predicate_1_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m21_MethodInfo_var = il2cpp_codegen_method_info_from_index(13);
		Predicate_1__ctor_m461_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		List_1_Exists_m462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		s_Il2CppMethodIntialized = true;
	}
	U3CAddToQueueU3Ec__AnonStorey9_t12 * V_0 = {0};
	{
		U3CAddToQueueU3Ec__AnonStorey9_t12 * L_0 = (U3CAddToQueueU3Ec__AnonStorey9_t12 *)il2cpp_codegen_object_new (U3CAddToQueueU3Ec__AnonStorey9_t12_il2cpp_TypeInfo_var);
		U3CAddToQueueU3Ec__AnonStorey9__ctor_m20(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddToQueueU3Ec__AnonStorey9_t12 * L_1 = V_0;
		String_t* L_2 = ___log;
		NullCheck(L_1);
		L_1->___log_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t14 * L_3 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_3);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		float L_5 = Time_get_fixedTime_m425(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->____startedAt_5 = L_5;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t14 * L_6 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
		U3CAddToQueueU3Ec__AnonStorey9_t12 * L_7 = V_0;
		IntPtr_t L_8 = { (void*)U3CAddToQueueU3Ec__AnonStorey9_U3CU3Em__0_m21_MethodInfo_var };
		Predicate_1_t164 * L_9 = (Predicate_1_t164 *)il2cpp_codegen_object_new (Predicate_1_t164_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m461(L_9, L_7, L_8, /*hidden argument*/Predicate_1__ctor_m461_MethodInfo_var);
		NullCheck(L_6);
		bool L_10 = List_1_Exists_m462(L_6, L_9, /*hidden argument*/List_1_Exists_m462_MethodInfo_var);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		List_1_t14 * L_11 = ((Bugger_t13_StaticFields*)Bugger_t13_il2cpp_TypeInfo_var->static_fields)->___Queue_0;
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
// RMX.Singletons/ASingleton`1<RMX.Bugger/HUD>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_geMethodDeclarations.h"
extern TypeInfo* ASingleton_1_t8_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_Initialize_m463_MethodInfo_var;
extern "C" void Bugger_Initialize_m32 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		ASingleton_1_Initialize_m463_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483664);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t8_il2cpp_TypeInfo_var);
		ASingleton_1_Initialize_m463(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_Initialize_m463_MethodInfo_var);
		return;
	}
}
// RMX.CsvReader/ReadState
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReader_ReadState.h"
// RMX.CsvReader/ReadState
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReader_ReadStateMethodDeclarations.h"
// RMX.CsvReader
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReader.h"
// RMX.CsvReader
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReaderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Func`2<System.String,System.String>
#include "System_Core_System_Func_2_gen.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
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
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
struct IEnumerable_1_t168;
struct Func_2_t21;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct IEnumerable_1_t169;
struct Func_2_t170;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m487_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t170 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m487(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t170 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m487_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisString_t_TisString_t_m466(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t21 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m487_gshared)(__this /* static, unused */, p0, p1, method)
struct StringU5BU5D_t35;
struct IEnumerable_1_t168;
struct ObjectU5BU5D_t148;
struct IEnumerable_1_t169;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t148* Enumerable_ToArray_TisObject_t_m488_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m488(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t148* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m488_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisString_t_m467(__this /* static, unused */, p0, method) (( StringU5BU5D_t35* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m488_gshared)(__this /* static, unused */, p0, method)
// System.Void RMX.CsvReader::.cctor()
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern TypeInfo* Encoding_t20_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern "C" void CsvReader__cctor_m33 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t20_il2cpp_TypeInfo_var);
		Encoding_t20 * L_0 = Encoding_GetEncoding_m464(NULL /*static, unused*/, ((int32_t)1252), /*hidden argument*/NULL);
		((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___Windows1252Encoding_2 = L_0;
		return;
	}
}
// System.String RMX.CsvReader::ToString(System.Collections.Generic.List`1<System.String>)
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Func`2<System.String,System.String>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* CsvReader_U3CToStringU3Em__1_m41_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m465_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisString_t_TisString_t_m466_MethodInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisString_t_m467_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern "C" String_t* CsvReader_ToString_m34 (Object_t * __this /* static, unused */, List_1_t14 * ___record, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Func_2_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CsvReader_U3CToStringU3Em__1_m41_MethodInfo_var = il2cpp_codegen_method_info_from_index(17);
		Func_2__ctor_m465_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		Enumerable_Select_TisString_t_TisString_t_m466_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483667);
		Enumerable_ToArray_TisString_t_m467_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483668);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t14 * G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	List_1_t14 * G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	{
		List_1_t14 * L_0 = ___record;
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		Func_2_t21 * L_1 = ((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_3;
		G_B1_0 = L_0;
		G_B1_1 = _stringLiteral21;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = _stringLiteral21;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)CsvReader_U3CToStringU3Em__1_m41_MethodInfo_var };
		Func_2_t21 * L_3 = (Func_2_t21 *)il2cpp_codegen_object_new (Func_2_t21_il2cpp_TypeInfo_var);
		Func_2__ctor_m465(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m465_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_3 = L_3;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		Func_2_t21 * L_4 = ((CsvReader_t19_StaticFields*)CsvReader_t19_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_3;
		Object_t* L_5 = Enumerable_Select_TisString_t_TisString_t_m466(NULL /*static, unused*/, G_B2_0, L_4, /*hidden argument*/Enumerable_Select_TisString_t_TisString_t_m466_MethodInfo_var);
		StringU5BU5D_t35* L_6 = Enumerable_ToArray_TisString_t_m467(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_ToArray_TisString_t_m467_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Join_m468(NULL /*static, unused*/, G_B2_1, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Parse(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// RMX.CsvReader
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvReaderMethodDeclarations.h"
extern TypeInfo* List_1_t137_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m469_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral22;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" List_1_t137 * CsvReader_Parse_m35 (Object_t * __this /* static, unused */, String_t* ___csvString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		List_1__ctor_m469_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483669);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t137 * V_0 = {0};
	StringU5BU5D_t35* V_1 = {0};
	String_t* V_2 = {0};
	StringU5BU5D_t35* V_3 = {0};
	int32_t V_4 = 0;
	{
		List_1_t137 * L_0 = (List_1_t137 *)il2cpp_codegen_object_new (List_1_t137_il2cpp_TypeInfo_var);
		List_1__ctor_m469(L_0, /*hidden argument*/List_1__ctor_m469_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___csvString;
		StringU5BU5D_t35* L_2 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 2));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, _stringLiteral22);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0, sizeof(String_t*))) = (String_t*)_stringLiteral22;
		StringU5BU5D_t35* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, _stringLiteral11);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1, sizeof(String_t*))) = (String_t*)_stringLiteral11;
		NullCheck(L_1);
		StringU5BU5D_t35* L_4 = String_Split_m470(L_1, L_3, 1, /*hidden argument*/NULL);
		V_1 = L_4;
		StringU5BU5D_t35* L_5 = V_1;
		V_3 = L_5;
		V_4 = 0;
		goto IL_005a;
	}

IL_002e:
	{
		StringU5BU5D_t35* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8, sizeof(String_t*)));
		String_t* L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m471(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
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
		List_1_t137 * L_11 = V_0;
		String_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = String_Trim_m472(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		List_1_t14 * L_14 = CsvReader_ParseLine_m40(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< List_1_t14 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(!0) */, L_11, L_14);
	}

IL_0054:
	{
		int32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_16 = V_4;
		StringU5BU5D_t35* L_17 = V_3;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		List_1_t137 * L_18 = V_0;
		return L_18;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(UnityEngine.TextAsset)
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t137_il2cpp_TypeInfo_var;
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m469_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" List_1_t137 * CsvReader_Read_m36 (Object_t * __this /* static, unused */, TextAsset_t138 * ___file, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		List_1_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		List_1__ctor_m469_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483669);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t35* V_0 = {0};
	List_1_t137 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	List_1_t14 * V_4 = {0};
	{
		TextAsset_t138 * L_0 = ___file;
		bool L_1 = Object_op_Equality_m473(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullReferenceException_t160 * L_2 = (NullReferenceException_t160 *)il2cpp_codegen_object_new (NullReferenceException_t160_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m456(L_2, _stringLiteral23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		TextAsset_t138 * L_3 = ___file;
		NullCheck(L_3);
		String_t* L_4 = TextAsset_get_text_m474(L_3, /*hidden argument*/NULL);
		CharU5BU5D_t165* L_5 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_4);
		StringU5BU5D_t35* L_6 = String_Split_m475(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t137 * L_7 = (List_1_t137 *)il2cpp_codegen_object_new (List_1_t137_il2cpp_TypeInfo_var);
		List_1__ctor_m469(L_7, /*hidden argument*/List_1__ctor_m469_MethodInfo_var);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0053;
	}

IL_003b:
	{
		StringU5BU5D_t35* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_8, L_10, sizeof(String_t*)));
		String_t* L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(CsvReader_t19_il2cpp_TypeInfo_var);
		List_1_t14 * L_12 = CsvReader_ParseLine_m40(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		List_1_t137 * L_13 = V_1;
		List_1_t14 * L_14 = V_4;
		NullCheck(L_13);
		VirtActionInvoker1< List_1_t14 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(!0) */, L_13, L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = V_2;
		StringU5BU5D_t35* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		List_1_t137 * L_18 = V_1;
		return L_18;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(System.String)
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral24;
extern "C" List_1_t137 * CsvReader_Read_m37 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.List`1<System.String> RMX.CsvReader::ReadLine(System.IO.StreamReader)
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
extern TypeInfo* CsvReader_t19_il2cpp_TypeInfo_var;
extern "C" List_1_t14 * CsvReader_ReadLine_m38 (Object_t * __this /* static, unused */, StreamReader_t139 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CsvReader_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*)NULL;
		StreamReader_t139 * L_0 = ___reader;
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
		List_1_t14 * L_4 = CsvReader_ParseLine_m40(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0016:
	{
		return (List_1_t14 *)NULL;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(System.String,System.Text.Encoding)
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern "C" List_1_t137 * CsvReader_Read_m39 (Object_t * __this /* static, unused */, String_t* ___path, Encoding_t20 * ___encoding, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral25, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.List`1<System.String> RMX.CsvReader::ParseLine(System.String)
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Nullable`1<System.Char>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
extern TypeInfo* List_1_t14_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m448_MethodInfo_var;
extern const MethodInfo* Nullable_1__ctor_m479_MethodInfo_var;
extern const MethodInfo* Nullable_1_GetValueOrDefault_m483_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m484_MethodInfo_var;
extern "C" List_1_t14 * CsvReader_ParseLine_m40 (Object_t * __this /* static, unused */, String_t* ___line, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Nullable_1_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		List_1__ctor_m448_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		Nullable_1__ctor_m479_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483670);
		Nullable_1_GetValueOrDefault_m483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483671);
		Nullable_1_get_HasValue_m484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t14 * V_0 = {0};
	StringBuilder_t166 * V_1 = {0};
	uint16_t V_2 = 0x0;
	Nullable_1_t167  V_3 = {0};
	int32_t V_4 = {0};
	int32_t V_5 = 0;
	Nullable_1_t167  V_6 = {0};
	Nullable_1_t167  V_7 = {0};
	int32_t V_8 = {0};
	Nullable_1_t167  G_B4_0 = {0};
	int32_t G_B17_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B30_0 = 0;
	{
		List_1_t14 * L_0 = (List_1_t14 *)il2cpp_codegen_object_new (List_1_t14_il2cpp_TypeInfo_var);
		List_1__ctor_m448(L_0, /*hidden argument*/List_1__ctor_m448_MethodInfo_var);
		V_0 = L_0;
		StringBuilder_t166 * L_1 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m476(L_1, ((int32_t)1024), /*hidden argument*/NULL);
		V_1 = L_1;
		Initobj (Nullable_1_t167_il2cpp_TypeInfo_var, (&V_6));
		Nullable_1_t167  L_2 = V_6;
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
		uint16_t L_5 = String_get_Chars_m477(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_5;
		String_t* L_7 = ___line;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m478(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)1)))))
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_9 = ___line;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m477(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/NULL);
		Nullable_1_t167  L_12 = {0};
		Nullable_1__ctor_m479(&L_12, L_11, /*hidden argument*/Nullable_1__ctor_m479_MethodInfo_var);
		G_B4_0 = L_12;
		goto IL_005d;
	}

IL_0053:
	{
		Initobj (Nullable_1_t167_il2cpp_TypeInfo_var, (&V_7));
		Nullable_1_t167  L_13 = V_7;
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
		StringBuilder_t166 * L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_set_Length_m480(L_16, 0, /*hidden argument*/NULL);
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
		List_1_t14 * L_19 = V_0;
		StringBuilder_t166 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = StringBuilder_ToString_m481(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_19, L_21);
		V_4 = 0;
		goto IL_0196;
	}

IL_00ad:
	{
		StringBuilder_t166 * L_22 = V_1;
		uint16_t L_23 = V_2;
		NullCheck(L_22);
		StringBuilder_Append_m482(L_22, L_23, /*hidden argument*/NULL);
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
		List_1_t14 * L_25 = V_0;
		StringBuilder_t166 * L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27 = StringBuilder_ToString_m481(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28 = String_Trim_m472(L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_25, L_28);
		StringBuilder_t166 * L_29 = V_1;
		NullCheck(L_29);
		StringBuilder_set_Length_m480(L_29, 0, /*hidden argument*/NULL);
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
		uint16_t L_31 = Nullable_1_GetValueOrDefault_m483((&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m483_MethodInfo_var);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0101;
		}
	}
	{
		bool L_32 = Nullable_1_get_HasValue_m484((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m484_MethodInfo_var);
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
		StringBuilder_t166 * L_33 = V_1;
		uint16_t L_34 = V_2;
		NullCheck(L_33);
		StringBuilder_Append_m482(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_5;
		V_5 = ((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_0196;
	}

IL_011a:
	{
		StringBuilder_t166 * L_36 = V_1;
		uint16_t L_37 = V_2;
		NullCheck(L_36);
		StringBuilder_Append_m482(L_36, L_37, /*hidden argument*/NULL);
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
		uint16_t L_39 = Nullable_1_GetValueOrDefault_m483((&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m483_MethodInfo_var);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0146;
		}
	}
	{
		bool L_40 = Nullable_1_get_HasValue_m484((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m484_MethodInfo_var);
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
		uint16_t L_42 = Nullable_1_GetValueOrDefault_m483((&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m483_MethodInfo_var);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0170;
		}
	}
	{
		bool L_43 = Nullable_1_get_HasValue_m484((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m484_MethodInfo_var);
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
		StringBuilder_t166 * L_44 = V_1;
		uint16_t L_45 = V_2;
		NullCheck(L_44);
		StringBuilder_Append_m482(L_44, L_45, /*hidden argument*/NULL);
		int32_t L_46 = V_5;
		V_5 = ((int32_t)((int32_t)L_46+(int32_t)1));
		goto IL_0196;
	}

IL_0189:
	{
		StringBuilder_t166 * L_47 = V_1;
		uint16_t L_48 = V_2;
		NullCheck(L_47);
		StringBuilder_Append_m482(L_47, L_48, /*hidden argument*/NULL);
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
		int32_t L_52 = String_get_Length_m478(L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0027;
		}
	}
	{
		List_1_t14 * L_53 = V_0;
		StringBuilder_t166 * L_54 = V_1;
		NullCheck(L_54);
		String_t* L_55 = StringBuilder_ToString_m481(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		String_t* L_56 = String_Trim_m472(L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_53, L_56);
		List_1_t14 * L_57 = V_0;
		return L_57;
	}
}
// System.String RMX.CsvReader::<ToString>m__1(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" String_t* CsvReader_U3CToStringU3Em__1_m41 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m485(L_0, _stringLiteral27, _stringLiteral28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m486(NULL /*static, unused*/, _stringLiteral26, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// RMX.CsvRecord
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvRecord.h"
// RMX.CsvRecord
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_CsvRecordMethodDeclarations.h"
// System.Void RMX.CsvRecord::.ctor()
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
extern TypeInfo* List_1_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m448_MethodInfo_var;
extern "C" void CsvRecord__ctor_m42 (CsvRecord_t22 * __this, const MethodInfo* method)
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
// System.String RMX.CsvRecord::ToString()
// System.Func`2<System.String,System.String>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* CsvRecord_t22_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* CsvRecord_U3CToStringU3Em__2_m44_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m465_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisString_t_TisString_t_m466_MethodInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisString_t_m467_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral21;
extern "C" String_t* CsvRecord_ToString_m43 (CsvRecord_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CsvRecord_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		Func_2_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CsvRecord_U3CToStringU3Em__2_m44_MethodInfo_var = il2cpp_codegen_method_info_from_index(25);
		Func_2__ctor_m465_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		Enumerable_Select_TisString_t_TisString_t_m466_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483667);
		Enumerable_ToArray_TisString_t_m467_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483668);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	CsvRecord_t22 * G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	CsvRecord_t22 * G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	{
		Func_2_t21 * L_0 = ((CsvRecord_t22_StaticFields*)CsvRecord_t22_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_5;
		G_B1_0 = __this;
		G_B1_1 = _stringLiteral21;
		if (L_0)
		{
			G_B2_0 = __this;
			G_B2_1 = _stringLiteral21;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = { (void*)CsvRecord_U3CToStringU3Em__2_m44_MethodInfo_var };
		Func_2_t21 * L_2 = (Func_2_t21 *)il2cpp_codegen_object_new (Func_2_t21_il2cpp_TypeInfo_var);
		Func_2__ctor_m465(L_2, NULL, L_1, /*hidden argument*/Func_2__ctor_m465_MethodInfo_var);
		((CsvRecord_t22_StaticFields*)CsvRecord_t22_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_5 = L_2;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		Func_2_t21 * L_3 = ((CsvRecord_t22_StaticFields*)CsvRecord_t22_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_5;
		Object_t* L_4 = Enumerable_Select_TisString_t_TisString_t_m466(NULL /*static, unused*/, G_B2_0, L_3, /*hidden argument*/Enumerable_Select_TisString_t_TisString_t_m466_MethodInfo_var);
		StringU5BU5D_t35* L_5 = Enumerable_ToArray_TisString_t_m467(NULL /*static, unused*/, L_4, /*hidden argument*/Enumerable_ToArray_TisString_t_m467_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Join_m468(NULL /*static, unused*/, G_B2_1, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String RMX.CsvRecord::<ToString>m__2(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" String_t* CsvRecord_U3CToStringU3Em__2_m44 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m485(L_0, _stringLiteral27, _stringLiteral28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m486(NULL /*static, unused*/, _stringLiteral26, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatus.h"
// RMX.EventStatus
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventStatusMethodDeclarations.h"
// RMX.Event
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Event.h"
// RMX.Event
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_EventMethodDeclarations.h"
// RMX.Examples.MyTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_MyTests.h"
// RMX.Examples.MyTests
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_MyTestsMethodDeclarations.h"
// RMX.Examples.GameControllerExample
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_GameControllerExa.h"
// RMX.Examples.GameControllerExample
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Examples_GameControllerExaMethodDeclarations.h"
// RMX.AGameController`1<RMX.Examples.GameControllerExample>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_gen.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// RMX.AGameController`1<RMX.Examples.GameControllerExample>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_genMethodDeclarations.h"
// RMX.Singletons/ASingleton`1<RMX.Examples.GameControllerExample>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_1MethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Void RMX.Examples.GameControllerExample::.ctor()
// RMX.AGameController`1<RMX.Examples.GameControllerExample>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_AGameController_1_genMethodDeclarations.h"
extern const MethodInfo* AGameController_1__ctor_m489_MethodInfo_var;
extern "C" void GameControllerExample__ctor_m45 (GameControllerExample_t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AGameController_1__ctor_m489_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		s_Il2CppMethodIntialized = true;
	}
	{
		AGameController_1__ctor_m489(__this, /*hidden argument*/AGameController_1__ctor_m489_MethodInfo_var);
		return;
	}
}
// RMX.Examples.GameControllerExample RMX.Examples.GameControllerExample::get_Current()
// RMX.Singletons/ASingleton`1<RMX.Examples.GameControllerExample>
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_Singletons_ASingleton_1_ge_1MethodDeclarations.h"
extern TypeInfo* ASingleton_1_t171_il2cpp_TypeInfo_var;
extern const MethodInfo* ASingleton_1_get__current_m490_MethodInfo_var;
extern "C" GameControllerExample_t26 * GameControllerExample_get_Current_m46 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ASingleton_1_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ASingleton_1_get__current_m490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ASingleton_1_t171_il2cpp_TypeInfo_var);
		GameControllerExample_t26 * L_0 = ASingleton_1_get__current_m490(NULL /*static, unused*/, /*hidden argument*/ASingleton_1_get__current_m490_MethodInfo_var);
		return L_0;
	}
}
// System.Void RMX.Examples.GameControllerExample::PreStart()
extern "C" void GameControllerExample_PreStart_m47 (GameControllerExample_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::PostStart()
extern "C" void GameControllerExample_PostStart_m48 (GameControllerExample_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::StartSingletons()
extern "C" void GameControllerExample_StartSingletons_m49 (GameControllerExample_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::StartDesktop()
extern "C" void GameControllerExample_StartDesktop_m50 (GameControllerExample_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::StartMobile()
extern "C" void GameControllerExample_StartMobile_m51 (GameControllerExample_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.Examples.GameControllerExample::Patch()
extern "C" void GameControllerExample_Patch_m52 (GameControllerExample_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean RMX.Examples.GameControllerExample::IsDebugging(System.Enum)
// System.Enum
#include "mscorlib_System_Enum.h"
extern TypeInfo* MyTests_t25_il2cpp_TypeInfo_var;
extern const MethodInfo* AGameController_1_IsDebugging_m491_MethodInfo_var;
extern "C" bool GameControllerExample_IsDebugging_m53 (GameControllerExample_t26 * __this, Enum_t6 * ___feature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MyTests_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		AGameController_1_IsDebugging_m491_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___feature;
		int32_t L_1 = 0;
		Object_t * L_2 = Box(MyTests_t25_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		bool L_4 = (__this->___DebugCustomTest_30);
		return L_4;
	}

IL_0018:
	{
		Enum_t6 * L_5 = ___feature;
		bool L_6 = AGameController_1_IsDebugging_m491(__this, L_5, /*hidden argument*/AGameController_1_IsDebugging_m491_MethodInfo_var);
		return L_6;
	}
}
// System.Void RMX.Examples.GameControllerExample::PauseGame(System.Boolean,System.Object)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" void GameControllerExample_PauseGame_m54 (GameControllerExample_t26 * __this, bool ___pause, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t172 * L_0 = (NotImplementedException_t172 *)il2cpp_codegen_object_new (NotImplementedException_t172_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m492(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenter.h"
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenterMethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.List`1/Enumerator<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// System.Collections.Generic.List`1<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
// System.Void RMX.NotificationCenter::.cctor()
// System.Collections.Generic.List`1<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
extern TypeInfo* List_1_t29_il2cpp_TypeInfo_var;
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m493_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m494_MethodInfo_var;
extern "C" void NotificationCenter__cctor_m55 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Dictionary_2_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		List_1__ctor_m493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		Dictionary_2__ctor_m494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t29 * L_0 = (List_1_t29 *)il2cpp_codegen_object_new (List_1_t29_il2cpp_TypeInfo_var);
		List_1__ctor_m493(L_0, /*hidden argument*/List_1__ctor_m493_MethodInfo_var);
		((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0 = L_0;
		Dictionary_2_t30 * L_1 = (Dictionary_2_t30 *)il2cpp_codegen_object_new (Dictionary_2_t30_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m494(L_1, /*hidden argument*/Dictionary_2__ctor_m494_MethodInfo_var);
		((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1 = L_1;
		return;
	}
}
// System.Boolean RMX.NotificationCenter::HasListener(RMX.EventListener)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_HasListener_m56 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t29 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.EventListener>::Contains(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void RMX.NotificationCenter::Reset(System.Enum)
// System.Enum
#include "mscorlib_System_Enum.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_Reset_m57 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t30 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t6 * L_1 = ___theEvent;
		NullCheck(L_0);
		VirtActionInvoker2< Enum_t6 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, L_0, L_1, 2);
		return;
	}
}
// System.Void RMX.NotificationCenter::AddListener(RMX.EventListener)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral30;
extern "C" void NotificationCenter_AddListener_m58 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t29 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
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
		List_1_t29 * L_3 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		Object_t * L_4 = ___listener;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RMX.EventListener>::Add(!0) */, L_3, L_4);
		int32_t L_5 = 7;
		Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
		ObjectU5BU5D_t148* L_7 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		Object_t * L_8 = ___listener;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m495(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t148* L_10 = L_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, _stringLiteral29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral29;
		ObjectU5BU5D_t148* L_11 = L_10;
		List_1_t29 * L_12 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RMX.EventListener>::get_Count() */, L_12);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 2, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t148* L_16 = L_11;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 3);
		ArrayElementTypeCheck (L_16, _stringLiteral30);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral30;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m422(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		bool L_18 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_6, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
		String_t* L_19 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void RMX.NotificationCenter::RemoveListener(RMX.EventListener)
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t140_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral31;
extern "C" void NotificationCenter_RemoveListener_m59 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		EventListener_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t29 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
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
		List_1_t29 * L_3 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
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
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String RMX.EventListener::get_name() */, EventListener_t140_il2cpp_TypeInfo_var, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m423(NULL /*static, unused*/, L_7, _stringLiteral31, /*hidden argument*/NULL);
		Exception_t154 * L_9 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0036:
	{
		return;
	}
}
// RMX.EventStatus RMX.NotificationCenter::StatusOf(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" int32_t NotificationCenter_StatusOf_m60 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t30 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t6 * L_1 = ___theEvent;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Enum_t6 * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t30 * L_3 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t6 * L_4 = ___theEvent;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Enum_t6 * >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::get_Item(!0) */, L_3, L_4);
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
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenterMethodDeclarations.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_IsIdle_m61 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		int32_t L_1 = NotificationCenter_StatusOf_m60(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean RMX.NotificationCenter::IsActive(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_IsActive_m62 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		int32_t L_1 = NotificationCenter_StatusOf_m60(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void RMX.NotificationCenter::EventDidOccur(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_EventDidOccur_m63 (Object_t * __this /* static, unused */, Enum_t6 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___e;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m64(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.NotificationCenter::EventDidOccur(System.Enum,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.List`1/Enumerator<RMX.EventListener>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t173_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m496_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m497_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m498_MethodInfo_var;
extern "C" void NotificationCenter_EventDidOccur_m64 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		EventListener_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Enumerator_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m496_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Enumerator_get_Current_m497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Enumerator_MoveNext_m498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t173  V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Enum_t6 * G_B2_0 = {0};
	Dictionary_2_t30 * G_B2_1 = {0};
	Enum_t6 * G_B1_0 = {0};
	Dictionary_2_t30 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	Enum_t6 * G_B3_1 = {0};
	Dictionary_2_t30 * G_B3_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t30 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t6 * L_1 = ___theEvent;
		Object_t * L_2 = ___o;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!((Object_t *)IsInstSealed(L_2, EventStatus_t23_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001c;
		}
	}
	{
		Object_t * L_3 = ___o;
		G_B3_0 = ((*(int32_t*)((int32_t*)UnBox (L_3, Int32_t151_il2cpp_TypeInfo_var))));
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
		VirtActionInvoker2< Enum_t6 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, G_B3_2, G_B3_1, G_B3_0);
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t29 * L_4 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_4);
		Enumerator_t173  L_5 = List_1_GetEnumerator_m496(L_4, /*hidden argument*/List_1_GetEnumerator_m496_MethodInfo_var);
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
			Object_t * L_6 = Enumerator_get_Current_m497((&V_1), /*hidden argument*/Enumerator_get_Current_m497_MethodInfo_var);
			V_0 = L_6;
			Object_t * L_7 = V_0;
			Enum_t6 * L_8 = ___theEvent;
			Object_t * L_9 = ___o;
			NullCheck(L_7);
			InterfaceActionInvoker2< Enum_t6 *, Object_t * >::Invoke(0 /* System.Void RMX.EventListener::OnEvent(System.Enum,System.Object) */, EventListener_t140_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		}

IL_0042:
		{
			bool L_10 = Enumerator_MoveNext_m498((&V_1), /*hidden argument*/Enumerator_MoveNext_m498_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t173  L_11 = V_1;
		Enumerator_t173  L_12 = L_11;
		Object_t * L_13 = Box(Enumerator_t173_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_13);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean RMX.NotificationCenter::WasCompleted(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" bool NotificationCenter_WasCompleted_m65 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		int32_t L_1 = NotificationCenter_StatusOf_m60(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void RMX.NotificationCenter::EventWillStart(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_EventWillStart_m66 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m67(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.NotificationCenter::EventWillStart(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t173_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m496_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m497_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m498_MethodInfo_var;
extern "C" void NotificationCenter_EventWillStart_m67 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		EventListener_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Enumerator_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m496_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Enumerator_get_Current_m497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Enumerator_MoveNext_m498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t173  V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Enum_t6 * G_B3_0 = {0};
	Dictionary_2_t30 * G_B3_1 = {0};
	Enum_t6 * G_B2_0 = {0};
	Dictionary_2_t30 * G_B2_1 = {0};
	int32_t G_B4_0 = 0;
	Enum_t6 * G_B4_1 = {0};
	Dictionary_2_t30 * G_B4_2 = {0};
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		bool L_1 = NotificationCenter_IsActive_m62(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t30 * L_2 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t6 * L_3 = ___theEvent;
		Object_t * L_4 = ___o;
		G_B2_0 = L_3;
		G_B2_1 = L_2;
		if (!((Object_t *)IsInstSealed(L_4, EventStatus_t23_il2cpp_TypeInfo_var)))
		{
			G_B3_0 = L_3;
			G_B3_1 = L_2;
			goto IL_0027;
		}
	}
	{
		Object_t * L_5 = ___o;
		G_B4_0 = ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t151_il2cpp_TypeInfo_var))));
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
		VirtActionInvoker2< Enum_t6 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, G_B4_2, G_B4_1, G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t29 * L_6 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_6);
		Enumerator_t173  L_7 = List_1_GetEnumerator_m496(L_6, /*hidden argument*/List_1_GetEnumerator_m496_MethodInfo_var);
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
			Object_t * L_8 = Enumerator_get_Current_m497((&V_1), /*hidden argument*/Enumerator_get_Current_m497_MethodInfo_var);
			V_0 = L_8;
			Object_t * L_9 = V_0;
			Enum_t6 * L_10 = ___theEvent;
			Object_t * L_11 = ___o;
			NullCheck(L_9);
			InterfaceActionInvoker2< Enum_t6 *, Object_t * >::Invoke(1 /* System.Void RMX.EventListener::OnEventDidStart(System.Enum,System.Object) */, EventListener_t140_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		}

IL_004d:
		{
			bool L_12 = Enumerator_MoveNext_m498((&V_1), /*hidden argument*/Enumerator_MoveNext_m498_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		Enumerator_t173  L_13 = V_1;
		Enumerator_t173  L_14 = L_13;
		Object_t * L_15 = Box(Enumerator_t173_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_15);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_006a:
	{
		return;
	}
}
// System.Void RMX.NotificationCenter::EventDidEnd(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void NotificationCenter_EventDidEnd_m68 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidEnd_m69(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.NotificationCenter::EventDidEnd(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventStatus_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t173_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m496_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m497_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m498_MethodInfo_var;
extern "C" void NotificationCenter_EventDidEnd_m69 (Object_t * __this /* static, unused */, Enum_t6 * ___theEvent, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		EventStatus_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		EventListener_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Enumerator_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m496_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Enumerator_get_Current_m497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Enumerator_MoveNext_m498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t173  V_1 = {0};
	int32_t V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Enum_t6 * G_B2_0 = {0};
	Dictionary_2_t30 * G_B2_1 = {0};
	Enum_t6 * G_B1_0 = {0};
	Dictionary_2_t30 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	Enum_t6 * G_B3_1 = {0};
	Dictionary_2_t30 * G_B3_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		Dictionary_2_t30 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t6 * L_1 = ___theEvent;
		Object_t * L_2 = ___o;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!((Object_t *)IsInstSealed(L_2, EventStatus_t23_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001c;
		}
	}
	{
		Object_t * L_3 = ___o;
		G_B3_0 = ((*(int32_t*)((int32_t*)UnBox (L_3, Int32_t151_il2cpp_TypeInfo_var))));
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
		Dictionary_2_t30 * L_4 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Events_1;
		Enum_t6 * L_5 = ___theEvent;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		VirtActionInvoker2< Enum_t6 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, L_4, L_5, L_6);
		int32_t L_7 = V_2;
		NullCheck(G_B3_2);
		VirtActionInvoker2< Enum_t6 *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::set_Item(!0,!1) */, G_B3_2, G_B3_1, L_7);
		List_1_t29 * L_8 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_8);
		Enumerator_t173  L_9 = List_1_GetEnumerator_m496(L_8, /*hidden argument*/List_1_GetEnumerator_m496_MethodInfo_var);
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
			Object_t * L_10 = Enumerator_get_Current_m497((&V_1), /*hidden argument*/Enumerator_get_Current_m497_MethodInfo_var);
			V_0 = L_10;
			Object_t * L_11 = V_0;
			Enum_t6 * L_12 = ___theEvent;
			Object_t * L_13 = ___o;
			NullCheck(L_11);
			InterfaceActionInvoker2< Enum_t6 *, Object_t * >::Invoke(2 /* System.Void RMX.EventListener::OnEventDidEnd(System.Enum,System.Object) */, EventListener_t140_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		}

IL_0050:
		{
			bool L_14 = Enumerator_MoveNext_m498((&V_1), /*hidden argument*/Enumerator_MoveNext_m498_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_t173  L_15 = V_1;
		Enumerator_t173  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t173_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_006d:
	{
		return;
	}
}
// System.Void RMX.NotificationCenter::NotifyListeners(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern TypeInfo* EventListener_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t173_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m496_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m497_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m498_MethodInfo_var;
extern "C" void NotificationCenter_NotifyListeners_m70 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		EventListener_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Enumerator_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m496_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Enumerator_get_Current_m497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Enumerator_MoveNext_m498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t173  V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		List_1_t29 * L_0 = ((NotificationCenter_t28_StaticFields*)NotificationCenter_t28_il2cpp_TypeInfo_var->static_fields)->___Listeners_0;
		NullCheck(L_0);
		Enumerator_t173  L_1 = List_1_GetEnumerator_m496(L_0, /*hidden argument*/List_1_GetEnumerator_m496_MethodInfo_var);
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
			Object_t * L_2 = Enumerator_get_Current_m497((&V_1), /*hidden argument*/Enumerator_get_Current_m497_MethodInfo_var);
			V_0 = L_2;
			Object_t * L_3 = V_0;
			String_t* L_4 = ___message;
			NullCheck(L_3);
			InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void RMX.EventListener::SendMessage(System.String,UnityEngine.SendMessageOptions) */, EventListener_t140_il2cpp_TypeInfo_var, L_3, L_4, 1);
		}

IL_0020:
		{
			bool L_5 = Enumerator_MoveNext_m498((&V_1), /*hidden argument*/Enumerator_MoveNext_m498_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_t173  L_6 = V_1;
		Enumerator_t173  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t173_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_8);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_003d:
	{
		return;
	}
}
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObject.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Collections.Generic.List`1<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.List`1/Enumerator<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.Void RMX.RMXObject::.ctor()
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t34_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m499_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m500_MethodInfo_var;
extern "C" void RMXObject__ctor_m71 (RMXObject_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		List_1_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Dictionary_2__ctor_m499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		List_1__ctor_m500_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t33 * L_0 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m499(L_0, /*hidden argument*/Dictionary_2__ctor_m499_MethodInfo_var);
		__this->___values_2 = L_0;
		List_1_t34 * L_1 = (List_1_t34 *)il2cpp_codegen_object_new (List_1_t34_il2cpp_TypeInfo_var);
		List_1__ctor_m500(L_1, /*hidden argument*/List_1__ctor_m500_MethodInfo_var);
		__this->___observers_3 = L_1;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::.cctor()
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* RMXObject_t31_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral34;
extern "C" void RMXObject__cctor_m72 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		RMXObject_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t35* L_0 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral32);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral32;
		StringU5BU5D_t35* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral33);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)_stringLiteral33;
		StringU5BU5D_t35* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral34);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2, sizeof(String_t*))) = (String_t*)_stringLiteral34;
		((RMXObject_t31_StaticFields*)RMXObject_t31_il2cpp_TypeInfo_var->static_fields)->___ListenerMethods_5 = L_2;
		return;
	}
}
// System.Boolean RMX.RMXObject::get_AddToGlobalListeners()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* RMXObject_t31_0_0_0_var;
extern TypeInfo* RMXObject_t31_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool RMXObject_get_AddToGlobalListeners_m73 (RMXObject_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXObject_t31_0_0_0_var = il2cpp_codegen_type_from_index(56);
		RMXObject_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	StringU5BU5D_t35* V_2 = {0};
	int32_t V_3 = 0;
	MethodInfo_t * V_4 = {0};
	{
		Type_t * L_0 = Object_GetType_m495(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t31_il2cpp_TypeInfo_var);
		StringU5BU5D_t35* L_1 = ((RMXObject_t31_StaticFields*)RMXObject_t31_il2cpp_TypeInfo_var->static_fields)->___ListenerMethods_5;
		V_2 = L_1;
		V_3 = 0;
		goto IL_003d;
	}

IL_0014:
	{
		StringU5BU5D_t35* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*)));
		Type_t * L_5 = V_0;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		MethodInfo_t * L_7 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_5, L_6);
		V_4 = L_7;
		MethodInfo_t * L_8 = V_4;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(RMXObject_t31_0_0_0_var), /*hidden argument*/NULL);
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
		StringU5BU5D_t35* L_13 = V_2;
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
// System.Boolean RMX.RMXObject::get_isListening()
extern "C" bool RMXObject_get_isListening_m74 (RMXObject_t31 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isListening_4);
		return L_0;
	}
}
// System.Void RMX.RMXObject::Awake()
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// RMX.NotificationCenter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_NotificationCenterMethodDeclarations.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_Awake_m75 (RMXObject_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = RMXObject_get_AddToGlobalListeners_m73(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_AddListener_m58(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____isListening_4 = 1;
	}

IL_0018:
	{
		return;
	}
}
// System.Void RMX.RMXObject::StopListening()
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_StopListening_m76 (RMXObject_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_RemoveListener_m59(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____isListening_4 = 0;
		return;
	}
}
// System.Void RMX.RMXObject::WillBeginEvent(System.Enum)
// System.Enum
#include "mscorlib_System_Enum.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_WillBeginEvent_m77 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m66(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidUpdateEvent(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidUpdateEvent_m78 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m66(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidFinishEvent(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidFinishEvent_m79 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidEnd_m68(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidCauseEvent(System.Enum)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidCauseEvent_m80 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m63(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::WillBeginEvent(System.Enum,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_WillBeginEvent_m81 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m67(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidUpdateEvent(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidUpdateEvent_m82 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventWillStart_m67(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidFinishEvent(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidFinishEvent_m83 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidEnd_m69(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::DidCauseEvent(System.Enum,System.Object)
extern TypeInfo* NotificationCenter_t28_il2cpp_TypeInfo_var;
extern "C" void RMXObject_DidCauseEvent_m84 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotificationCenter_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t6 * L_0 = ___theEvent;
		Object_t * L_1 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(NotificationCenter_t28_il2cpp_TypeInfo_var);
		NotificationCenter_EventDidOccur_m64(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RMX.RMXObject::WillChangeValueForKey(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Generic.List`1/Enumerator<RMX.KeyValueObserver>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
extern TypeInfo* KeyValueObserver_t141_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t174_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m503_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m504_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m505_MethodInfo_var;
extern "C" void RMXObject_WillChangeValueForKey_m85 (RMXObject_t31 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValueObserver_t141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Enumerator_t174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m503_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Enumerator_get_Current_m504_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		Enumerator_MoveNext_m505_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t174  V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t34 * L_0 = (__this->___observers_3);
		NullCheck(L_0);
		Enumerator_t174  L_1 = List_1_GetEnumerator_m503(L_0, /*hidden argument*/List_1_GetEnumerator_m503_MethodInfo_var);
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
			Object_t * L_2 = Enumerator_get_Current_m504((&V_1), /*hidden argument*/Enumerator_get_Current_m504_MethodInfo_var);
			V_0 = L_2;
			Object_t * L_3 = V_0;
			String_t* L_4 = ___key;
			Dictionary_2_t33 * L_5 = (__this->___values_2);
			String_t* L_6 = ___key;
			NullCheck(L_5);
			Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, L_6);
			NullCheck(L_3);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void RMX.KeyValueObserver::OnValueForKeyWillChange(System.String,System.Object) */, KeyValueObserver_t141_il2cpp_TypeInfo_var, L_3, L_4, L_7);
		}

IL_002c:
		{
			bool L_8 = Enumerator_MoveNext_m505((&V_1), /*hidden argument*/Enumerator_MoveNext_m505_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_t174  L_9 = V_1;
		Enumerator_t174  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t174_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0049:
	{
		return;
	}
}
// System.Void RMX.RMXObject::DidChangeValueForKey(System.String)
extern TypeInfo* KeyValueObserver_t141_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t174_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m503_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m504_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m505_MethodInfo_var;
extern "C" void RMXObject_DidChangeValueForKey_m86 (RMXObject_t31 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValueObserver_t141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Enumerator_t174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m503_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Enumerator_get_Current_m504_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		Enumerator_MoveNext_m505_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t174  V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t34 * L_0 = (__this->___observers_3);
		NullCheck(L_0);
		Enumerator_t174  L_1 = List_1_GetEnumerator_m503(L_0, /*hidden argument*/List_1_GetEnumerator_m503_MethodInfo_var);
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
			Object_t * L_2 = Enumerator_get_Current_m504((&V_1), /*hidden argument*/Enumerator_get_Current_m504_MethodInfo_var);
			V_0 = L_2;
			Object_t * L_3 = V_0;
			String_t* L_4 = ___key;
			Dictionary_2_t33 * L_5 = (__this->___values_2);
			String_t* L_6 = ___key;
			NullCheck(L_5);
			Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, L_6);
			NullCheck(L_3);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(1 /* System.Void RMX.KeyValueObserver::OnValueForKeyDidChange(System.String,System.Object) */, KeyValueObserver_t141_il2cpp_TypeInfo_var, L_3, L_4, L_7);
		}

IL_002c:
		{
			bool L_8 = Enumerator_MoveNext_m505((&V_1), /*hidden argument*/Enumerator_MoveNext_m505_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_t174  L_9 = V_1;
		Enumerator_t174  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t174_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0049:
	{
		return;
	}
}
// System.Void RMX.RMXObject::setValue(System.String,System.Object)
extern "C" void RMXObject_setValue_m87 (RMXObject_t31 * __this, String_t* ___forKey, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t33 * L_0 = (__this->___values_2);
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
		Dictionary_2_t33 * L_4 = (__this->___values_2);
		String_t* L_5 = ___forKey;
		Object_t * L_6 = ___value;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, L_5, L_6);
		String_t* L_7 = ___forKey;
		RMXObject_DidChangeValueForKey_m86(__this, L_7, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Object RMX.RMXObject::getValue(System.String)
extern "C" Object_t * RMXObject_getValue_m88 (RMXObject_t31 * __this, String_t* ___forKey, const MethodInfo* method)
{
	{
		Dictionary_2_t33 * L_0 = (__this->___values_2);
		String_t* L_1 = ___forKey;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void RMX.RMXObject::AddObserver(RMX.KeyValueObserver)
extern "C" void RMXObject_AddObserver_m89 (RMXObject_t31 * __this, Object_t * ___observer, const MethodInfo* method)
{
	{
		List_1_t34 * L_0 = (__this->___observers_3);
		Object_t * L_1 = ___observer;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Contains(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t34 * L_3 = (__this->___observers_3);
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
extern "C" void RMXObject_RemoveObserver_m90 (RMXObject_t31 * __this, Object_t * ___observer, const MethodInfo* method)
{
	{
		List_1_t34 * L_0 = (__this->___observers_3);
		Object_t * L_1 = ___observer;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<RMX.KeyValueObserver>::Contains(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t34 * L_3 = (__this->___observers_3);
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
extern "C" void RMXObject_OnValueForKeyWillChange_m91 (RMXObject_t31 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnValueForKeyDidChange(System.String,System.Object)
extern "C" void RMXObject_OnValueForKeyDidChange_m92 (RMXObject_t31 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnEvent(System.Enum,System.Object)
extern "C" void RMXObject_OnEvent_m93 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnEventDidStart(System.Enum,System.Object)
extern "C" void RMXObject_OnEventDidStart_m94 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RMX.RMXObject::OnEventDidEnd(System.Enum,System.Object)
extern "C" void RMXObject_OnEventDidEnd_m95 (RMXObject_t31 * __this, Enum_t6 * ___theEvent, Object_t * ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean RMX.RMXObject::get_OneIn10()
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern "C" bool RMXObject_get_OneIn10_m96 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m506(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void RMX.RMXObject::RMX.EventListener.SendMessage(System.String,UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void RMXObject_RMX_EventListener_SendMessage_m97 (RMXObject_t31 * __this, String_t* ___message, int32_t ___sendMessageOptions, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		int32_t L_1 = ___sendMessageOptions;
		Component_SendMessage_m507(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String RMX.RMXObject::RMX.EventListener.get_name()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" String_t* RMXObject_RMX_EventListener_get_name_m98 (RMXObject_t31 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Object_get_name_m508(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedData.h"
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
// System.String RMX.SavedData::String(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* SavedData_String_m99 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = ___key;
		bool L_1 = PlayerPrefs_HasKey_m509(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___key;
		String_t* L_3 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
// System.Int64 RMX.SavedData::Long(System.String)
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// RMX.Bugger
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_BuggerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" int64_t SavedData_Long_m100 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * V_0 = {0};
	int64_t V_1 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int64_t G_B3_0 = 0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m509(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001c;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			float L_4 = Single_Parse_m511(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = (((int64_t)L_4));
			goto IL_001e;
		}

IL_001c:
		{
			G_B3_0 = (((int64_t)(-1)));
		}

IL_001e:
		{
			V_1 = G_B3_0;
			goto IL_0057;
		}

IL_0024:
		{
			; // IL_0024: leave IL_0057
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0029;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t154 *)__exception_local);
			int32_t L_5 = 3;
			Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
			Exception_t154 * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_9 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_6, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_004a;
			}
		}

IL_0040:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_10 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		}

IL_004a:
		{
			V_1 = (((int64_t)(-1)));
			goto IL_0057;
		}

IL_0052:
		{
			; // IL_0052: leave IL_0057
		}
	} // end catch (depth: 1)

IL_0057:
	{
		int64_t L_11 = V_1;
		return L_11;
	}
}
// System.Double RMX.SavedData::Double(System.String)
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" double SavedData_Double_m101 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * V_0 = {0};
	double V_1 = 0.0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	double G_B3_0 = 0.0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m509(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001c;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			float L_4 = Single_Parse_m511(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = (((double)L_4));
			goto IL_0025;
		}

IL_001c:
		{
			G_B3_0 = (-1.0);
		}

IL_0025:
		{
			V_1 = G_B3_0;
			goto IL_0065;
		}

IL_002b:
		{
			; // IL_002b: leave IL_0065
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t154 *)__exception_local);
			int32_t L_5 = 3;
			Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
			Exception_t154 * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_9 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_6, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0051;
			}
		}

IL_0047:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_10 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		}

IL_0051:
		{
			V_1 = (-1.0);
			goto IL_0065;
		}

IL_0060:
		{
			; // IL_0060: leave IL_0065
		}
	} // end catch (depth: 1)

IL_0065:
	{
		double L_11 = V_1;
		return L_11;
	}
}
// System.Object RMX.SavedData::Bool(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t156_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern "C" Object_t * SavedData_Bool_m102 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Boolean_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___key;
		bool L_1 = PlayerPrefs_HasKey_m509(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = ___key;
		String_t* L_3 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m421(NULL /*static, unused*/, L_3, _stringLiteral35, /*hidden argument*/NULL);
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
		Object_t * L_6 = Box(Boolean_t156_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void RMX.SavedData::Set(System.Object,System.Boolean)
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern "C" void SavedData_Set_m103 (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
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
		G_B3_0 = _stringLiteral35;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = _stringLiteral36;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		PlayerPrefs_SetString_m512(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 RMX.SavedData::Int(System.String)
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" int32_t SavedData_Int_m104 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * V_0 = {0};
	int32_t V_1 = 0;
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
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m509(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001b;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			int32_t L_4 = Int32_Parse_m513(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = L_4;
			goto IL_001c;
		}

IL_001b:
		{
			G_B3_0 = (-1);
		}

IL_001c:
		{
			V_1 = G_B3_0;
			goto IL_0054;
		}

IL_0022:
		{
			; // IL_0022: leave IL_0054
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0027;
		throw e;
	}

CATCH_0027:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t154 *)__exception_local);
			int32_t L_5 = 3;
			Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
			Exception_t154 * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_9 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_6, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0048;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_10 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		}

IL_0048:
		{
			V_1 = (-1);
			goto IL_0054;
		}

IL_004f:
		{
			; // IL_004f: leave IL_0054
		}
	} // end catch (depth: 1)

IL_0054:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Void RMX.SavedData::Set(System.Object,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void SavedData_Set_m105 (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = Int32_ToString_m514((&___value), /*hidden argument*/NULL);
		PlayerPrefs_SetString_m512(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single RMX.SavedData::Float(System.String)
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RMXTests_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Bugger_t13_il2cpp_TypeInfo_var;
extern "C" float SavedData_Float_m106 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RMXTests_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Bugger_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * V_0 = {0};
	float V_1 = 0.0f;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	float G_B3_0 = 0.0f;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___key;
			bool L_1 = PlayerPrefs_HasKey_m509(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001b;
			}
		}

IL_000b:
		{
			String_t* L_2 = ___key;
			String_t* L_3 = PlayerPrefs_GetString_m510(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			float L_4 = Single_Parse_m511(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			G_B3_0 = L_4;
			goto IL_0020;
		}

IL_001b:
		{
			G_B3_0 = (-1.0f);
		}

IL_0020:
		{
			V_1 = G_B3_0;
			goto IL_005c;
		}

IL_0026:
		{
			; // IL_0026: leave IL_005c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t154 *)__exception_local);
			int32_t L_5 = 3;
			Object_t * L_6 = Box(RMXTests_t4_il2cpp_TypeInfo_var, &L_5);
			Exception_t154 * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			bool L_9 = Bugger_WillLog_m28(NULL /*static, unused*/, (Enum_t6 *)L_6, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_004c;
			}
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Bugger_t13_il2cpp_TypeInfo_var);
			String_t* L_10 = Bugger_get_Last_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
			Debug_Log_m454(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		}

IL_004c:
		{
			V_1 = (-1.0f);
			goto IL_005c;
		}

IL_0057:
		{
			; // IL_0057: leave IL_005c
		}
	} // end catch (depth: 1)

IL_005c:
	{
		float L_11 = V_1;
		return L_11;
	}
}
// System.Void RMX.SavedData::Set(System.Object,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SavedData_Set_m107 (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = Single_ToString_m515((&___value), /*hidden argument*/NULL);
		PlayerPrefs_SetString_m512(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// RMX.TextFormatter/Settings
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Settings.h"
// RMX.TextFormatter/Settings
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_SettingsMethodDeclarations.h"
// RMX.TextFormatter/Method
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Method.h"
// RMX.TextFormatter/Method
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_MethodMethodDeclarations.h"
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Void RMX.TextFormatter::.cctor()
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral37;
extern "C" void TextFormatter__cctor_m108 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TextFormatter_t39_StaticFields*)TextFormatter_t39_il2cpp_TypeInfo_var->static_fields)->___TagNew_0 = _stringLiteral37;
		return;
	}
}
// System.String RMX.TextFormatter::debug(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
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
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral57;
extern "C" String_t* TextFormatter_debug_m109 (Object_t * __this /* static, unused */, String_t* ___log, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
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
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___log;
		CharU5BU5D_t165* L_1 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_0);
		String_t* L_2 = String_TrimStart_m516(L_0, L_1, /*hidden argument*/NULL);
		___log = L_2;
		String_t* L_3 = ___log;
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m485(L_3, _stringLiteral38, _stringLiteral39, /*hidden argument*/NULL);
		___log = L_4;
		String_t* L_5 = ___log;
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m485(L_5, _stringLiteral40, _stringLiteral41, /*hidden argument*/NULL);
		___log = L_6;
		String_t* L_7 = ___log;
		NullCheck(L_7);
		String_t* L_8 = String_Replace_m485(L_7, _stringLiteral42, _stringLiteral43, /*hidden argument*/NULL);
		___log = L_8;
		String_t* L_9 = ___log;
		NullCheck(L_9);
		String_t* L_10 = String_Replace_m485(L_9, _stringLiteral44, _stringLiteral45, /*hidden argument*/NULL);
		___log = L_10;
		String_t* L_11 = ___log;
		NullCheck(L_11);
		String_t* L_12 = String_Replace_m485(L_11, _stringLiteral46, _stringLiteral47, /*hidden argument*/NULL);
		___log = L_12;
		String_t* L_13 = ___log;
		NullCheck(L_13);
		String_t* L_14 = String_Replace_m485(L_13, _stringLiteral48, _stringLiteral49, /*hidden argument*/NULL);
		___log = L_14;
		String_t* L_15 = ___log;
		NullCheck(L_15);
		String_t* L_16 = String_Replace_m485(L_15, _stringLiteral50, _stringLiteral51, /*hidden argument*/NULL);
		___log = L_16;
		String_t* L_17 = ___log;
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m485(L_17, _stringLiteral52, _stringLiteral53, /*hidden argument*/NULL);
		___log = L_18;
		String_t* L_19 = ___log;
		NullCheck(L_19);
		String_t* L_20 = String_Replace_m485(L_19, _stringLiteral52, _stringLiteral53, /*hidden argument*/NULL);
		___log = L_20;
		String_t* L_21 = ___log;
		NullCheck(L_21);
		String_t* L_22 = String_Replace_m485(L_21, _stringLiteral54, _stringLiteral55, /*hidden argument*/NULL);
		___log = L_22;
		String_t* L_23 = ___log;
		NullCheck(L_23);
		String_t* L_24 = String_Replace_m485(L_23, _stringLiteral56, _stringLiteral57, /*hidden argument*/NULL);
		___log = L_24;
		String_t* L_25 = ___log;
		return L_25;
	}
}
// System.String RMX.TextFormatter::codify(System.String,RMX.TextFormatter/Method)
// RMX.TextFormatter/Method
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Method.h"
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral61;
extern "C" String_t* TextFormatter_codify_m110 (Object_t * __this /* static, unused */, String_t* ___code, int32_t ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
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
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TextFormatter_t39_StaticFields*)TextFormatter_t39_il2cpp_TypeInfo_var->static_fields)->___TagNew_0;
		NullCheck(L_1);
		String_t* L_3 = String_Replace_m485(L_1, _stringLiteral58, L_2, /*hidden argument*/NULL);
		___code = L_3;
	}

IL_0018:
	{
		String_t* L_4 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TextFormatter_t39_StaticFields*)TextFormatter_t39_il2cpp_TypeInfo_var->static_fields)->___TagNew_0;
		NullCheck(L_4);
		String_t* L_6 = String_Replace_m485(L_4, L_5, _stringLiteral59, /*hidden argument*/NULL);
		___code = L_6;
		String_t* L_7 = ___code;
		NullCheck(L_7);
		String_t* L_8 = String_Replace_m485(L_7, _stringLiteral60, _stringLiteral61, /*hidden argument*/NULL);
		___code = L_8;
		String_t* L_9 = ___code;
		return L_9;
	}
}
// System.String RMX.TextFormatter::Format(System.String)
// RMX.TextFormatter
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatterMethodDeclarations.h"
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern "C" String_t* TextFormatter_Format_m111 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_1 = TextFormatter_Format_m113(NULL /*static, unused*/, L_0, 3, 2, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String RMX.TextFormatter::Format(System.String,System.String)
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" String_t* TextFormatter_Format_m112 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t35* L_0 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral4);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral4;
		StringU5BU5D_t35* L_1 = L_0;
		String_t* L_2 = ___color;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)L_2;
		StringU5BU5D_t35* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2, sizeof(String_t*))) = (String_t*)_stringLiteral5;
		StringU5BU5D_t35* L_4 = L_3;
		String_t* L_5 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_6 = TextFormatter_Format_m111(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3, sizeof(String_t*))) = (String_t*)L_6;
		StringU5BU5D_t35* L_7 = L_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, _stringLiteral9);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4, sizeof(String_t*))) = (String_t*)_stringLiteral9;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m517(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String RMX.TextFormatter::Format(System.String,RMX.TextFormatter/Settings,RMX.TextFormatter/Method)
// RMX.TextFormatter/Settings
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_TextFormatter_Settings.h"
extern TypeInfo* TextFormatter_t39_il2cpp_TypeInfo_var;
extern "C" String_t* TextFormatter_Format_m113 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___settings, int32_t ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextFormatter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
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
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_3 = TextFormatter_debug_m109(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0020:
	{
		String_t* L_4 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_5 = TextFormatter_debug_m109(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___method;
		String_t* L_7 = TextFormatter_codify_m110(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002d:
	{
		String_t* L_8 = ___text;
		int32_t L_9 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_10 = TextFormatter_codify_m110(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0035:
	{
		String_t* L_11 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(TextFormatter_t39_il2cpp_TypeInfo_var);
		String_t* L_12 = TextFormatter_Format_m113(NULL /*static, unused*/, L_11, 1, 0, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String RMX.TextFormatter::TimeDescription(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" String_t* TextFormatter_TimeDescription_m114 (Object_t * __this /* static, unused */, float ___timeInSeconds, const MethodInfo* method)
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
// UnityStandardAssets._2D.Camera2DFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Camera.h"
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
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Camera2DFollow__ctor_m115 (Camera2DFollow_t40 * __this, const MethodInfo* method)
{
	{
		__this->___damping_3 = (1.0f);
		__this->___lookAheadFactor_4 = (3.0f);
		__this->___lookAheadReturnSpeed_5 = (0.5f);
		__this->___lookAheadMoveThreshold_6 = (0.1f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Start()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Camera2DFollow_Start_m116 (Camera2DFollow_t40 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Transform_t41 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_position_m518(L_0, /*hidden argument*/NULL);
		__this->___m_LastTargetPosition_8 = L_1;
		Transform_t41 * L_2 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_position_m518(L_2, /*hidden argument*/NULL);
		Transform_t41 * L_4 = (__this->___target_2);
		NullCheck(L_4);
		Vector3_t42  L_5 = Transform_get_position_m518(L_4, /*hidden argument*/NULL);
		Vector3_t42  L_6 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = ((&V_0)->___z_3);
		__this->___m_OffsetZ_7 = L_7;
		Transform_t41 * L_8 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_m521(L_8, (Transform_t41 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Update()
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void Camera2DFollow_Update_m117 (Camera2DFollow_t40 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t42  V_2 = {0};
	Vector3_t42  V_3 = {0};
	Vector3_t42  V_4 = {0};
	{
		Transform_t41 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_position_m518(L_0, /*hidden argument*/NULL);
		Vector3_t42  L_2 = (__this->___m_LastTargetPosition_8);
		Vector3_t42  L_3 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		float L_4 = ((&V_4)->___x_1);
		V_0 = L_4;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
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
		Vector3_t42  L_10 = Vector3_get_right_m522(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_11 = Vector3_op_Multiply_m523(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Sign_m524(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Vector3_t42  L_14 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		__this->___m_LookAheadPos_10 = L_14;
		goto IL_007d;
	}

IL_005b:
	{
		Vector3_t42  L_15 = (__this->___m_LookAheadPos_10);
		Vector3_t42  L_16 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = (__this->___lookAheadReturnSpeed_5);
		Vector3_t42  L_19 = Vector3_MoveTowards_m528(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/NULL);
		__this->___m_LookAheadPos_10 = L_19;
	}

IL_007d:
	{
		Transform_t41 * L_20 = (__this->___target_2);
		NullCheck(L_20);
		Vector3_t42  L_21 = Transform_get_position_m518(L_20, /*hidden argument*/NULL);
		Vector3_t42  L_22 = (__this->___m_LookAheadPos_10);
		Vector3_t42  L_23 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector3_t42  L_24 = Vector3_get_forward_m530(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = (__this->___m_OffsetZ_7);
		Vector3_t42  L_26 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t42  L_27 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		Transform_t41 * L_28 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t42  L_29 = Transform_get_position_m518(L_28, /*hidden argument*/NULL);
		Vector3_t42  L_30 = V_2;
		Vector3_t42 * L_31 = &(__this->___m_CurrentVelocity_9);
		float L_32 = (__this->___damping_3);
		Vector3_t42  L_33 = Vector3_SmoothDamp_m531(NULL /*static, unused*/, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		Transform_t41 * L_34 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3_t42  L_35 = V_3;
		NullCheck(L_34);
		Transform_set_position_m532(L_34, L_35, /*hidden argument*/NULL);
		Transform_t41 * L_36 = (__this->___target_2);
		NullCheck(L_36);
		Vector3_t42  L_37 = Transform_get_position_m518(L_36, /*hidden argument*/NULL);
		__this->___m_LastTargetPosition_8 = L_37;
		return;
	}
}
// UnityStandardAssets._2D.CameraFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Camera_0.h"
// UnityStandardAssets._2D.CameraFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Camera_0MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Void UnityStandardAssets._2D.CameraFollow::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void CameraFollow__ctor_m118 (CameraFollow_t43 * __this, const MethodInfo* method)
{
	{
		__this->___xMargin_2 = (1.0f);
		__this->___yMargin_3 = (1.0f);
		__this->___xSmooth_4 = (8.0f);
		__this->___ySmooth_5 = (8.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::Awake()
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral66;
extern "C" void CameraFollow_Awake_m119 (CameraFollow_t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t11 * L_0 = GameObject_FindGameObjectWithTag_m533(NULL /*static, unused*/, _stringLiteral66, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t41 * L_1 = GameObject_get_transform_m534(L_0, /*hidden argument*/NULL);
		__this->___m_Player_8 = L_1;
		return;
	}
}
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckXMargin()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" bool CameraFollow_CheckXMargin_m120 (CameraFollow_t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_position_m518(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___x_1);
		Transform_t41 * L_3 = (__this->___m_Player_8);
		NullCheck(L_3);
		Vector3_t42  L_4 = Transform_get_position_m518(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)((float)L_2-(float)L_5)));
		float L_7 = (__this->___xMargin_2);
		return ((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckYMargin()
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" bool CameraFollow_CheckYMargin_m121 (CameraFollow_t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_position_m518(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		Transform_t41 * L_3 = (__this->___m_Player_8);
		NullCheck(L_3);
		Vector3_t42  L_4 = Transform_get_position_m518(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)((float)L_2-(float)L_5)));
		float L_7 = (__this->___yMargin_3);
		return ((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::Update()
// UnityStandardAssets._2D.CameraFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Camera_0MethodDeclarations.h"
extern "C" void CameraFollow_Update_m122 (CameraFollow_t43 * __this, const MethodInfo* method)
{
	{
		CameraFollow_TrackPlayer_m123(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::TrackPlayer()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void CameraFollow_TrackPlayer_m123 (CameraFollow_t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t42  V_2 = {0};
	Vector3_t42  V_3 = {0};
	Vector3_t42  V_4 = {0};
	Vector3_t42  V_5 = {0};
	Vector3_t42  V_6 = {0};
	Vector3_t42  V_7 = {0};
	Vector3_t42  V_8 = {0};
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_position_m518(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = ((&V_2)->___x_1);
		V_0 = L_2;
		Transform_t41 * L_3 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t42  L_4 = Transform_get_position_m518(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		float L_5 = ((&V_3)->___y_2);
		V_1 = L_5;
		bool L_6 = CameraFollow_CheckXMargin_m120(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		Transform_t41 * L_7 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t42  L_8 = Transform_get_position_m518(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___x_1);
		Transform_t41 * L_10 = (__this->___m_Player_8);
		NullCheck(L_10);
		Vector3_t42  L_11 = Transform_get_position_m518(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = ((&V_5)->___x_1);
		float L_13 = (__this->___xSmooth_4);
		float L_14 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Lerp_m535(NULL /*static, unused*/, L_9, L_12, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_006d:
	{
		bool L_16 = CameraFollow_CheckYMargin_m121(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		Transform_t41 * L_17 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t42  L_18 = Transform_get_position_m518(L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		float L_19 = ((&V_6)->___y_2);
		Transform_t41 * L_20 = (__this->___m_Player_8);
		NullCheck(L_20);
		Vector3_t42  L_21 = Transform_get_position_m518(L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		float L_22 = ((&V_7)->___y_2);
		float L_23 = (__this->___ySmooth_5);
		float L_24 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_25 = Mathf_Lerp_m535(NULL /*static, unused*/, L_19, L_22, ((float)((float)L_23*(float)L_24)), /*hidden argument*/NULL);
		V_1 = L_25;
	}

IL_00b2:
	{
		float L_26 = V_0;
		Vector2_t44 * L_27 = &(__this->___minXAndY_7);
		float L_28 = (L_27->___x_1);
		Vector2_t44 * L_29 = &(__this->___maxXAndY_6);
		float L_30 = (L_29->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_31 = Mathf_Clamp_m536(NULL /*static, unused*/, L_26, L_28, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		float L_32 = V_1;
		Vector2_t44 * L_33 = &(__this->___minXAndY_7);
		float L_34 = (L_33->___y_2);
		Vector2_t44 * L_35 = &(__this->___maxXAndY_6);
		float L_36 = (L_35->___y_2);
		float L_37 = Mathf_Clamp_m536(NULL /*static, unused*/, L_32, L_34, L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		Transform_t41 * L_38 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		float L_39 = V_0;
		float L_40 = V_1;
		Transform_t41 * L_41 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t42  L_42 = Transform_get_position_m518(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		float L_43 = ((&V_8)->___z_3);
		Vector3_t42  L_44 = {0};
		Vector3__ctor_m537(&L_44, L_39, L_40, L_43, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_position_m532(L_38, L_44, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets._2D.Platformer2DUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Platfo.h"
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
struct PlatformerCharacter2D_t46;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m540_gshared (Component_t178 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m540(__this, method) (( Object_t * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets._2D.PlatformerCharacter2D>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets._2D.PlatformerCharacter2D>()
#define Component_GetComponent_TisPlatformerCharacter2D_t46_m538(__this, method) (( PlatformerCharacter2D_t46 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Platformer2DUserControl__ctor_m124 (Platformer2DUserControl_t45 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::Awake()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisPlatformerCharacter2D_t46_m538_MethodInfo_var;
extern "C" void Platformer2DUserControl_Awake_m125 (Platformer2DUserControl_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisPlatformerCharacter2D_t46_m538_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformerCharacter2D_t46 * L_0 = Component_GetComponent_TisPlatformerCharacter2D_t46_m538(__this, /*hidden argument*/Component_GetComponent_TisPlatformerCharacter2D_t46_m538_MethodInfo_var);
		__this->___m_Character_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::Update()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral67;
extern "C" void Platformer2DUserControl_Update_m126 (Platformer2DUserControl_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
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
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_GetButtonDown_m184(NULL /*static, unused*/, _stringLiteral67, /*hidden argument*/NULL);
		__this->___m_Jump_3 = L_1;
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::FixedUpdate()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityStandardAssets._2D.PlatformerCharacter2D
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Platfo_0MethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral68;
extern "C" void Platformer2DUserControl_FixedUpdate_m127 (Platformer2DUserControl_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m539(NULL /*static, unused*/, ((int32_t)306), /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m180(NULL /*static, unused*/, _stringLiteral68, /*hidden argument*/NULL);
		V_1 = L_1;
		PlatformerCharacter2D_t46 * L_2 = (__this->___m_Character_2);
		float L_3 = V_1;
		bool L_4 = V_0;
		bool L_5 = (__this->___m_Jump_3);
		NullCheck(L_2);
		PlatformerCharacter2D_Move_m131(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->___m_Jump_3 = 0;
		return;
	}
}
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
struct Animator_t48;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t48_m542(__this, method) (( Animator_t48 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
struct Rigidbody2D_t49;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t49_m543(__this, method) (( Rigidbody2D_t49 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void PlatformerCharacter2D__ctor_m128 (PlatformerCharacter2D_t46 * __this, const MethodInfo* method)
{
	{
		__this->___m_MaxSpeed_4 = (10.0f);
		__this->___m_JumpForce_5 = (400.0f);
		__this->___m_CrouchSpeed_6 = (0.36f);
		__this->___m_FacingRight_14 = 1;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Awake()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisAnimator_t48_m542_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t49_m543_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral69;
extern Il2CppCodeGenString* _stringLiteral70;
extern "C" void PlatformerCharacter2D_Awake_m129 (PlatformerCharacter2D_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t48_m542_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		Component_GetComponent_TisRigidbody2D_t49_m543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		_stringLiteral70 = il2cpp_codegen_string_literal_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t41 * L_1 = Transform_Find_m541(L_0, _stringLiteral69, /*hidden argument*/NULL);
		__this->___m_GroundCheck_9 = L_1;
		Transform_t41 * L_2 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t41 * L_3 = Transform_Find_m541(L_2, _stringLiteral70, /*hidden argument*/NULL);
		__this->___m_CeilingCheck_11 = L_3;
		Animator_t48 * L_4 = Component_GetComponent_TisAnimator_t48_m542(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t48_m542_MethodInfo_var);
		__this->___m_Anim_12 = L_4;
		Rigidbody2D_t49 * L_5 = Component_GetComponent_TisRigidbody2D_t49_m543(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t49_m543_MethodInfo_var);
		__this->___m_Rigidbody2D_13 = L_5;
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::FixedUpdate()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral71;
extern Il2CppCodeGenString* _stringLiteral72;
extern "C" void PlatformerCharacter2D_FixedUpdate_m130 (PlatformerCharacter2D_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	Collider2DU5BU5D_t179* V_0 = {0};
	int32_t V_1 = 0;
	Vector2_t44  V_2 = {0};
	{
		__this->___m_Grounded_10 = 0;
		Transform_t41 * L_0 = (__this->___m_GroundCheck_9);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_position_m518(L_0, /*hidden argument*/NULL);
		Vector2_t44  L_2 = Vector2_op_Implicit_m544(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LayerMask_t47  L_3 = (__this->___m_WhatIsGround_8);
		int32_t L_4 = LayerMask_op_Implicit_m545(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t179* L_5 = Physics2D_OverlapCircleAll_m546(NULL /*static, unused*/, L_2, (0.2f), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0057;
	}

IL_0034:
	{
		Collider2DU5BU5D_t179* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(Collider2D_t142 **)(Collider2D_t142 **)SZArrayLdElema(L_6, L_8, sizeof(Collider2D_t142 *))));
		GameObject_t11 * L_9 = Component_get_gameObject_m547((*(Collider2D_t142 **)(Collider2D_t142 **)SZArrayLdElema(L_6, L_8, sizeof(Collider2D_t142 *))), /*hidden argument*/NULL);
		GameObject_t11 * L_10 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		bool L_11 = Object_op_Inequality_m548(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
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
		Collider2DU5BU5D_t179* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Animator_t48 * L_15 = (__this->___m_Anim_12);
		bool L_16 = (__this->___m_Grounded_10);
		NullCheck(L_15);
		Animator_SetBool_m549(L_15, _stringLiteral71, L_16, /*hidden argument*/NULL);
		Animator_t48 * L_17 = (__this->___m_Anim_12);
		Rigidbody2D_t49 * L_18 = (__this->___m_Rigidbody2D_13);
		NullCheck(L_18);
		Vector2_t44  L_19 = Rigidbody2D_get_velocity_m550(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = ((&V_2)->___y_2);
		NullCheck(L_17);
		Animator_SetFloat_m551(L_17, _stringLiteral72, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Move(System.Single,System.Boolean,System.Boolean)
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityStandardAssets._2D.PlatformerCharacter2D
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Platfo_0MethodDeclarations.h"
extern TypeInfo* Physics2D_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral73;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral71;
extern "C" void PlatformerCharacter2D_Move_m131 (PlatformerCharacter2D_t46 * __this, float ___move, bool ___crouch, bool ___jump, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t44  V_0 = {0};
	float G_B9_0 = 0.0f;
	{
		bool L_0 = ___crouch;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		Animator_t48 * L_1 = (__this->___m_Anim_12);
		NullCheck(L_1);
		bool L_2 = Animator_GetBool_m552(L_1, _stringLiteral73, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		Transform_t41 * L_3 = (__this->___m_CeilingCheck_11);
		NullCheck(L_3);
		Vector3_t42  L_4 = Transform_get_position_m518(L_3, /*hidden argument*/NULL);
		Vector2_t44  L_5 = Vector2_op_Implicit_m544(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		LayerMask_t47  L_6 = (__this->___m_WhatIsGround_8);
		int32_t L_7 = LayerMask_op_Implicit_m545(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t180_il2cpp_TypeInfo_var);
		Collider2D_t142 * L_8 = Physics2D_OverlapCircle_m553(NULL /*static, unused*/, L_5, (0.01f), L_7, /*hidden argument*/NULL);
		bool L_9 = Object_op_Implicit_m554(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
		Animator_t48 * L_10 = (__this->___m_Anim_12);
		bool L_11 = ___crouch;
		NullCheck(L_10);
		Animator_SetBool_m549(L_10, _stringLiteral73, L_11, /*hidden argument*/NULL);
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
		Animator_t48 * L_18 = (__this->___m_Anim_12);
		float L_19 = ___move;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		NullCheck(L_18);
		Animator_SetFloat_m551(L_18, _stringLiteral74, L_20, /*hidden argument*/NULL);
		Rigidbody2D_t49 * L_21 = (__this->___m_Rigidbody2D_13);
		float L_22 = ___move;
		float L_23 = (__this->___m_MaxSpeed_4);
		Rigidbody2D_t49 * L_24 = (__this->___m_Rigidbody2D_13);
		NullCheck(L_24);
		Vector2_t44  L_25 = Rigidbody2D_get_velocity_m550(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		float L_26 = ((&V_0)->___y_2);
		Vector2_t44  L_27 = {0};
		Vector2__ctor_m555(&L_27, ((float)((float)L_22*(float)L_23)), L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody2D_set_velocity_m556(L_21, L_27, /*hidden argument*/NULL);
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
		PlatformerCharacter2D_Flip_m132(__this, /*hidden argument*/NULL);
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
		PlatformerCharacter2D_Flip_m132(__this, /*hidden argument*/NULL);
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
		Animator_t48 * L_34 = (__this->___m_Anim_12);
		NullCheck(L_34);
		bool L_35 = Animator_GetBool_m552(L_34, _stringLiteral71, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0161;
		}
	}
	{
		__this->___m_Grounded_10 = 0;
		Animator_t48 * L_36 = (__this->___m_Anim_12);
		NullCheck(L_36);
		Animator_SetBool_m549(L_36, _stringLiteral71, 0, /*hidden argument*/NULL);
		Rigidbody2D_t49 * L_37 = (__this->___m_Rigidbody2D_13);
		float L_38 = (__this->___m_JumpForce_5);
		Vector2_t44  L_39 = {0};
		Vector2__ctor_m555(&L_39, (0.0f), L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Rigidbody2D_AddForce_m557(L_37, L_39, /*hidden argument*/NULL);
	}

IL_0161:
	{
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Flip()
extern "C" void PlatformerCharacter2D_Flip_m132 (PlatformerCharacter2D_t46 * __this, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		bool L_0 = (__this->___m_FacingRight_14);
		__this->___m_FacingRight_14 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		Transform_t41 * L_1 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t42  L_2 = Transform_get_localScale_m558(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t42 * L_3 = (&V_0);
		float L_4 = (L_3->___x_1);
		L_3->___x_1 = ((float)((float)L_4*(float)(-1.0f)));
		Transform_t41 * L_5 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3_t42  L_6 = V_0;
		NullCheck(L_5);
		Transform_set_localScale_m559(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets._2D.Restarter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_Restar.h"
// UnityStandardAssets._2D.Restarter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__2D_RestarMethodDeclarations.h"
// System.Void UnityStandardAssets._2D.Restarter::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Restarter__ctor_m133 (Restarter_t50 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Restarter::OnTriggerEnter2D(UnityEngine.Collider2D)
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral66;
extern "C" void Restarter_OnTriggerEnter2D_m134 (Restarter_t50 * __this, Collider2D_t142 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t142 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m560(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m421(NULL /*static, unused*/, L_1, _stringLiteral66, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = Application_get_loadedLevelName_m561(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m562(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf.h"
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
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral68;
extern "C" void AxisTouchButton__ctor_m135 (AxisTouchButton_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___axisName_2 = _stringLiteral68;
		__this->___axisValue_3 = (1.0f);
		__this->___responseSpeed_4 = (3.0f);
		__this->___returnToCentreSpeed_5 = (3.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatfMethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern TypeInfo* VirtualAxis_t52_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_OnEnable_m136 (AxisTouchButton_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		VirtualAxis_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m173(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = (__this->___axisName_2);
		VirtualAxis_t52 * L_3 = (VirtualAxis_t52 *)il2cpp_codegen_object_new (VirtualAxis_t52_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m149(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_Axis_7 = L_3;
		VirtualAxis_t52 * L_4 = (__this->___m_Axis_7);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m175(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualAxis_t52 * L_6 = CrossPlatformInputManager_VirtualAxisReference_m179(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___m_Axis_7 = L_6;
	}

IL_0042:
	{
		AxisTouchButton_FindPairedButton_m137(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern const Il2CppType* AxisTouchButton_t51_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AxisTouchButtonU5BU5D_t181_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_FindPairedButton_m137 (AxisTouchButton_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AxisTouchButton_t51_0_0_0_var = il2cpp_codegen_type_from_index(68);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		AxisTouchButtonU5BU5D_t181_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	AxisTouchButtonU5BU5D_t181* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(AxisTouchButton_t51_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t182* L_1 = Object_FindObjectsOfType_m563(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((AxisTouchButtonU5BU5D_t181*)IsInst(L_1, AxisTouchButtonU5BU5D_t181_il2cpp_TypeInfo_var));
		AxisTouchButtonU5BU5D_t181* L_2 = V_0;
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
		AxisTouchButtonU5BU5D_t181* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(AxisTouchButton_t51 **)(AxisTouchButton_t51 **)SZArrayLdElema(L_3, L_5, sizeof(AxisTouchButton_t51 *))));
		String_t* L_6 = ((*(AxisTouchButton_t51 **)(AxisTouchButton_t51 **)SZArrayLdElema(L_3, L_5, sizeof(AxisTouchButton_t51 *)))->___axisName_2);
		String_t* L_7 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m421(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t181* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = Object_op_Inequality_m548(NULL /*static, unused*/, (*(AxisTouchButton_t51 **)(AxisTouchButton_t51 **)SZArrayLdElema(L_9, L_11, sizeof(AxisTouchButton_t51 *))), __this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t181* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___m_PairedWith_6 = (*(AxisTouchButton_t51 **)(AxisTouchButton_t51 **)SZArrayLdElema(L_13, L_15, sizeof(AxisTouchButton_t51 *)));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_17 = V_1;
		AxisTouchButtonU5BU5D_t181* L_18 = V_0;
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
extern "C" void AxisTouchButton_OnDisable_m138 (AxisTouchButton_t51 * __this, const MethodInfo* method)
{
	{
		VirtualAxis_t52 * L_0 = (__this->___m_Axis_7);
		NullCheck(L_0);
		VirtualAxis_Remove_m155(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_OnPointerDown_m139 (AxisTouchButton_t51 * __this, PointerEventData_t143 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		AxisTouchButton_t51 * L_0 = (__this->___m_PairedWith_6);
		bool L_1 = Object_op_Equality_m473(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AxisTouchButton_FindPairedButton_m137(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		VirtualAxis_t52 * L_2 = (__this->___m_Axis_7);
		VirtualAxis_t52 * L_3 = (__this->___m_Axis_7);
		NullCheck(L_3);
		float L_4 = VirtualAxis_get_GetValue_m157(L_3, /*hidden argument*/NULL);
		float L_5 = (__this->___axisValue_3);
		float L_6 = (__this->___responseSpeed_4);
		float L_7 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_8 = Mathf_MoveTowards_m564(NULL /*static, unused*/, L_4, L_5, ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m156(L_2, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_OnPointerUp_m140 (AxisTouchButton_t51 * __this, PointerEventData_t143 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		VirtualAxis_t52 * L_0 = (__this->___m_Axis_7);
		VirtualAxis_t52 * L_1 = (__this->___m_Axis_7);
		NullCheck(L_1);
		float L_2 = VirtualAxis_get_GetValue_m157(L_1, /*hidden argument*/NULL);
		float L_3 = (__this->___responseSpeed_4);
		float L_4 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_5 = Mathf_MoveTowards_m564(NULL /*static, unused*/, L_2, (0.0f), ((float)((float)L_3*(float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m156(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_0.h"
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_0MethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void ButtonHandler__ctor_m141 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
extern "C" void ButtonHandler_OnEnable_m142 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetDownState_m143 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m186(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetUpState_m144 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m187(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetAxisPositiveState_m145 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_m188(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetAxisNeutralState_m146 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_m190(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void ButtonHandler_SetAxisNegativeState_m147 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_m189(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
extern "C" void ButtonHandler_Update_m148 (ButtonHandler_t53 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1MethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
extern "C" void VirtualAxis__ctor_m149 (VirtualAxis_t52 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualAxis__ctor_m150(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void VirtualAxis__ctor_m150 (VirtualAxis_t52 * __this, String_t* ___name, bool ___matchToInputSettings, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		VirtualAxis_set_name_m152(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings;
		VirtualAxis_set_matchWithInputManager_m154(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C" String_t* VirtualAxis_get_name_m151 (VirtualAxis_t52 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C" void VirtualAxis_set_name_m152 (VirtualAxis_t52 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C" bool VirtualAxis_get_matchWithInputManager_m153 (VirtualAxis_t52 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmatchWithInputManagerU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C" void VirtualAxis_set_matchWithInputManager_m154 (VirtualAxis_t52 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void VirtualAxis_Remove_m155 (VirtualAxis_t52 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = VirtualAxis_get_name_m151(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m177(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void VirtualAxis_Update_m156 (VirtualAxis_t52 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Value_0 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C" float VirtualAxis_get_GetValue_m157 (VirtualAxis_t52 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Value_0);
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern "C" float VirtualAxis_get_GetValueRaw_m158 (VirtualAxis_t52 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Value_0);
		return L_0;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3MethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3MethodDeclarations.h"
extern "C" void VirtualButton__ctor_m159 (VirtualButton_t55 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualButton__ctor_m160(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void VirtualButton__ctor_m160 (VirtualButton_t55 * __this, String_t* ___name, bool ___matchToInputSettings, const MethodInfo* method)
{
	{
		__this->___m_LastPressedFrame_0 = ((int32_t)-5);
		__this->___m_ReleasedFrame_1 = ((int32_t)-5);
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		VirtualButton_set_name_m162(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings;
		VirtualButton_set_matchWithInputManager_m164(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C" String_t* VirtualButton_get_name_m161 (VirtualButton_t55 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C" void VirtualButton_set_name_m162 (VirtualButton_t55 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C" bool VirtualButton_get_matchWithInputManager_m163 (VirtualButton_t55 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmatchWithInputManagerU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C" void VirtualButton_set_matchWithInputManager_m164 (VirtualButton_t55 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern "C" void VirtualButton_Pressed_m165 (VirtualButton_t55 * __this, const MethodInfo* method)
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
		int32_t L_1 = Time_get_frameCount_m565(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_LastPressedFrame_0 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C" void VirtualButton_Released_m166 (VirtualButton_t55 * __this, const MethodInfo* method)
{
	{
		__this->___m_Pressed_2 = 0;
		int32_t L_0 = Time_get_frameCount_m565(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_ReleasedFrame_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void VirtualButton_Remove_m167 (VirtualButton_t55 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = VirtualButton_get_name_m161(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m178(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C" bool VirtualButton_get_GetButton_m168 (VirtualButton_t55 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Pressed_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C" bool VirtualButton_get_GetButtonDown_m169 (VirtualButton_t55 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_LastPressedFrame_0);
		int32_t L_1 = Time_get_frameCount_m565(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C" bool VirtualButton_get_GetButtonUp_m170 (VirtualButton_t55 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_ReleasedFrame_1);
		int32_t L_1 = Time_get_frameCount_m565(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)((int32_t)((int32_t)L_1-(int32_t)1))))? 1 : 0);
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9.h"
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_11.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_11MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_11MethodDeclarations.h"
extern TypeInfo* MobileInput_t62_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern TypeInfo* StandaloneInput_t63_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager__cctor_m171 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MobileInput_t62_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		StandaloneInput_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		s_Il2CppMethodIntialized = true;
	}
	{
		MobileInput_t62 * L_0 = (MobileInput_t62 *)il2cpp_codegen_object_new (MobileInput_t62_il2cpp_TypeInfo_var);
		MobileInput__ctor_m213(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___s_TouchInput_1 = L_0;
		StandaloneInput_t63 * L_1 = (StandaloneInput_t63 *)il2cpp_codegen_object_new (StandaloneInput_t63_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m227(L_1, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___s_HardwareInput_2 = L_1;
		VirtualInput_t57 * L_2 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___s_TouchInput_1;
		((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SwitchActiveInputMethod_m172 (Object_t * __this /* static, unused */, int32_t ___activeInputMethod, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
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
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_3 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___s_HardwareInput_2;
		((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0 = L_3;
		goto IL_0032;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_4 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___s_TouchInput_1;
		((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0 = L_4;
		goto IL_0032;
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10MethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_AxisExists_m173 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = VirtualInput_AxisExists_m256(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_ButtonExists_m174 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = VirtualInput_ButtonExists_m257(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_RegisterVirtualAxis_m175 (Object_t * __this /* static, unused */, VirtualAxis_t52 * ___axis, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		VirtualAxis_t52 * L_1 = ___axis;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m258(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_RegisterVirtualButton_m176 (Object_t * __this /* static, unused */, VirtualButton_t55 * ___button, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		VirtualButton_t55 * L_1 = ___button;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m259(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75;
extern "C" void CrossPlatformInputManager_UnRegisterVirtualAxis_m177 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
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
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, _stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_2 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m260(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_UnRegisterVirtualButton_m178 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m261(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" VirtualAxis_t52 * CrossPlatformInputManager_VirtualAxisReference_m179 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtualAxis_t52 * L_2 = VirtualInput_VirtualAxisReference_m262(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" float CrossPlatformInputManager_GetAxis_m180 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m182(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" float CrossPlatformInputManager_GetAxisRaw_m181 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m182(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" float CrossPlatformInputManager_GetAxis_m182 (Object_t * __this /* static, unused */, String_t* ___name, bool ___raw, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		bool L_2 = ___raw;
		NullCheck(L_0);
		float L_3 = (float)VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_GetButton_m183 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_GetButtonDown_m184 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" bool CrossPlatformInputManager_GetButtonUp_m185 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetButtonDown_m186 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetButtonUp_m187 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxisPositive_m188 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxisNegative_m189 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxisZero_m190 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetAxis_m191 (Object_t * __this /* static, unused */, String_t* ___name, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		float L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  CrossPlatformInputManager_get_mousePosition_m192 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		NullCheck(L_0);
		Vector3_t42  L_1 = (Vector3_t42 )VirtFuncInvoker0< Vector3_t42  >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionX_m193 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m263(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionY_m194 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m264(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionZ_m195 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		VirtualInput_t57 * L_0 = ((CrossPlatformInputManager_t56_StaticFields*)CrossPlatformInputManager_t56_il2cpp_TypeInfo_var->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m265(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_5.h"
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_5MethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void InputAxisScrollbar__ctor_m196 (InputAxisScrollbar_t58 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
extern "C" void InputAxisScrollbar_Update_m197 (InputAxisScrollbar_t58 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void InputAxisScrollbar_HandleInput_m198 (InputAxisScrollbar_t58 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___axis_2);
		float L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_m191(NULL /*static, unused*/, L_0, ((float)((float)((float)((float)L_1*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_6.h"
// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_6MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.Joystick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_7.h"
// UnityStandardAssets.CrossPlatformInput.Joystick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_7MethodDeclarations.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral76;
extern "C" void Joystick__ctor_m199 (Joystick_t60 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral76 = il2cpp_codegen_string_literal_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___MovementRange_2 = ((int32_t)100);
		__this->___horizontalAxisName_4 = _stringLiteral68;
		__this->___verticalAxisName_5 = _stringLiteral76;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
// UnityStandardAssets.CrossPlatformInput.Joystick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_7MethodDeclarations.h"
extern "C" void Joystick_OnEnable_m200 (Joystick_t60 * __this, const MethodInfo* method)
{
	{
		Joystick_CreateVirtualAxes_m203(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void Joystick_Start_m201 (Joystick_t60 * __this, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t42  L_1 = Transform_get_position_m518(L_0, /*hidden argument*/NULL);
		__this->___m_StartPos_6 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
extern "C" void Joystick_UpdateVirtualAxes_m202 (Joystick_t60 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	{
		Vector3_t42  L_0 = (__this->___m_StartPos_6);
		Vector3_t42  L_1 = ___value;
		Vector3_t42  L_2 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->___y_2);
		(&V_0)->___y_2 = ((-L_3));
		Vector3_t42  L_4 = V_0;
		int32_t L_5 = (__this->___MovementRange_2);
		Vector3_t42  L_6 = Vector3_op_Division_m567(NULL /*static, unused*/, L_4, (((float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = (__this->___m_UseX_7);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t52 * L_8 = (__this->___m_HorizontalVirtualAxis_9);
		float L_9 = ((&V_0)->___x_1);
		NullCheck(L_8);
		VirtualAxis_Update_m156(L_8, ((-L_9)), /*hidden argument*/NULL);
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
		VirtualAxis_t52 * L_11 = (__this->___m_VerticalVirtualAxis_10);
		float L_12 = ((&V_0)->___y_2);
		NullCheck(L_11);
		VirtualAxis_Update_m156(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* VirtualAxis_t52_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void Joystick_CreateVirtualAxes_m203 (Joystick_t60 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	Joystick_t60 * G_B2_0 = {0};
	Joystick_t60 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	Joystick_t60 * G_B3_1 = {0};
	Joystick_t60 * G_B5_0 = {0};
	Joystick_t60 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Joystick_t60 * G_B6_1 = {0};
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
		VirtualAxis_t52 * L_6 = (VirtualAxis_t52 *)il2cpp_codegen_object_new (VirtualAxis_t52_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m149(L_6, L_5, /*hidden argument*/NULL);
		__this->___m_HorizontalVirtualAxis_9 = L_6;
		VirtualAxis_t52 * L_7 = (__this->___m_HorizontalVirtualAxis_9);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m175(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
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
		VirtualAxis_t52 * L_10 = (VirtualAxis_t52 *)il2cpp_codegen_object_new (VirtualAxis_t52_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m149(L_10, L_9, /*hidden argument*/NULL);
		__this->___m_VerticalVirtualAxis_10 = L_10;
		VirtualAxis_t52 * L_11 = (__this->___m_VerticalVirtualAxis_10);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m175(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void Joystick_OnDrag_m204 (Joystick_t60 * __this, PointerEventData_t143 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t44  V_3 = {0};
	Vector2_t44  V_4 = {0};
	{
		Vector3_t42  L_0 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___m_UseX_7);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		PointerEventData_t143 * L_2 = ___data;
		NullCheck(L_2);
		Vector2_t44  L_3 = PointerEventData_get_position_m568(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		float L_4 = ((&V_3)->___x_1);
		Vector3_t42 * L_5 = &(__this->___m_StartPos_6);
		float L_6 = (L_5->___x_1);
		V_1 = (((int32_t)((float)((float)L_4-(float)L_6))));
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___MovementRange_2);
		int32_t L_9 = (__this->___MovementRange_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_Clamp_m569(NULL /*static, unused*/, L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
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
		PointerEventData_t143 * L_13 = ___data;
		NullCheck(L_13);
		Vector2_t44  L_14 = PointerEventData_get_position_m568(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = ((&V_4)->___y_2);
		Vector3_t42 * L_16 = &(__this->___m_StartPos_6);
		float L_17 = (L_16->___y_2);
		V_2 = (((int32_t)((float)((float)L_15-(float)L_17))));
		int32_t L_18 = V_2;
		int32_t L_19 = (__this->___MovementRange_2);
		int32_t L_20 = (__this->___MovementRange_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		int32_t L_21 = Mathf_Clamp_m569(NULL /*static, unused*/, L_18, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		(&V_0)->___y_2 = (((float)L_22));
	}

IL_008f:
	{
		Transform_t41 * L_23 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3_t42 * L_24 = &(__this->___m_StartPos_6);
		float L_25 = (L_24->___x_1);
		float L_26 = ((&V_0)->___x_1);
		Vector3_t42 * L_27 = &(__this->___m_StartPos_6);
		float L_28 = (L_27->___y_2);
		float L_29 = ((&V_0)->___y_2);
		Vector3_t42 * L_30 = &(__this->___m_StartPos_6);
		float L_31 = (L_30->___z_3);
		float L_32 = ((&V_0)->___z_3);
		Vector3_t42  L_33 = {0};
		Vector3__ctor_m537(&L_33, ((float)((float)L_25+(float)L_26)), ((float)((float)L_28+(float)L_29)), ((float)((float)L_31+(float)L_32)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m532(L_23, L_33, /*hidden argument*/NULL);
		Transform_t41 * L_34 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t42  L_35 = Transform_get_position_m518(L_34, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_m202(__this, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerUp_m205 (Joystick_t60 * __this, PointerEventData_t143 * ___data, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3_t42  L_1 = (__this->___m_StartPos_6);
		NullCheck(L_0);
		Transform_set_position_m532(L_0, L_1, /*hidden argument*/NULL);
		Vector3_t42  L_2 = (__this->___m_StartPos_6);
		Joystick_UpdateVirtualAxes_m202(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerDown_m206 (Joystick_t60 * __this, PointerEventData_t143 * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern "C" void Joystick_OnDisable_m207 (Joystick_t60 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_UseX_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t52 * L_1 = (__this->___m_HorizontalVirtualAxis_9);
		NullCheck(L_1);
		VirtualAxis_Remove_m155(L_1, /*hidden argument*/NULL);
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
		VirtualAxis_t52 * L_3 = (__this->___m_VerticalVirtualAxis_10);
		NullCheck(L_3);
		VirtualAxis_Remove_m155(L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_8.h"
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_8MethodDeclarations.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem.h"
// UnityEngine.EventSystems.StandaloneInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.EventSystems.TouchInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_TouchInputModule.h"
struct EventSystem_t184;
struct Object_t;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" Object_t * Object_FindObjectOfType_TisObject_t_m575_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisObject_t_m575(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m575_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
#define Object_FindObjectOfType_TisEventSystem_t184_m570(__this /* static, unused */, method) (( EventSystem_t184 * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m575_gshared)(__this /* static, unused */, method)
struct EventSystem_t184;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m576_gshared (GameObject_t11 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m576(__this, method) (( Object_t * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
#define GameObject_AddComponent_TisEventSystem_t184_m572(__this, method) (( EventSystem_t184 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct StandaloneInputModule_t185;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
#define GameObject_AddComponent_TisStandaloneInputModule_t185_m573(__this, method) (( StandaloneInputModule_t185 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct TouchInputModule_t186;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.TouchInputModule>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.TouchInputModule>()
#define GameObject_AddComponent_TisTouchInputModule_t186_m574(__this, method) (( TouchInputModule_t186 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void MobileControlRig__ctor_m208 (MobileControlRig_t61 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_8MethodDeclarations.h"
extern "C" void MobileControlRig_OnEnable_m209 (MobileControlRig_t61 * __this, const MethodInfo* method)
{
	{
		MobileControlRig_CheckEnableControlRig_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* GameObject_t11_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisEventSystem_t184_m570_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisEventSystem_t184_m572_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisStandaloneInputModule_t185_m573_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisTouchInputModule_t186_m574_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral77;
extern "C" void MobileControlRig_Start_m210 (MobileControlRig_t61 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		Object_FindObjectOfType_TisEventSystem_t184_m570_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		GameObject_AddComponent_TisEventSystem_t184_m572_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		GameObject_AddComponent_TisStandaloneInputModule_t185_m573_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		GameObject_AddComponent_TisTouchInputModule_t186_m574_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		_stringLiteral77 = il2cpp_codegen_string_literal_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	EventSystem_t184 * V_0 = {0};
	GameObject_t11 * V_1 = {0};
	{
		EventSystem_t184 * L_0 = Object_FindObjectOfType_TisEventSystem_t184_m570(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisEventSystem_t184_m570_MethodInfo_var);
		V_0 = L_0;
		EventSystem_t184 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m473(NULL /*static, unused*/, L_1, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t11 * L_3 = (GameObject_t11 *)il2cpp_codegen_object_new (GameObject_t11_il2cpp_TypeInfo_var);
		GameObject__ctor_m571(L_3, _stringLiteral77, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t11 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_AddComponent_TisEventSystem_t184_m572(L_4, /*hidden argument*/GameObject_AddComponent_TisEventSystem_t184_m572_MethodInfo_var);
		GameObject_t11 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_AddComponent_TisStandaloneInputModule_t185_m573(L_5, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_t185_m573_MethodInfo_var);
		GameObject_t11 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_AddComponent_TisTouchInputModule_t186_m574(L_6, /*hidden argument*/GameObject_AddComponent_TisTouchInputModule_t186_m574_MethodInfo_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C" void MobileControlRig_CheckEnableControlRig_m211 (MobileControlRig_t61 * __this, const MethodInfo* method)
{
	{
		MobileControlRig_EnableControlRig_m212(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t41_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void MobileControlRig_EnableControlRig_m212 (MobileControlRig_t61 * __this, bool ___enabled, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Transform_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t41 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
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
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t41 *)CastclassClass(L_3, Transform_t41_il2cpp_TypeInfo_var));
			Transform_t41 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t11 * L_5 = Component_get_gameObject_m547(L_4, /*hidden argument*/NULL);
			bool L_6 = ___enabled;
			NullCheck(L_5);
			GameObject_SetActive_m444(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0029:
		{
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_7);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			Object_t * L_9 = V_1;
			V_2 = ((Object_t *)IsInst(L_9, IDisposable_t157_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_11);
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_004b:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10MethodDeclarations.h"
extern "C" void MobileInput__ctor_m213 (MobileInput_t62 * __this, const MethodInfo* method)
{
	{
		VirtualInput__ctor_m253(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* VirtualButton_t55_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void MobileInput_AddButton_m214 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualButton_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(79);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		VirtualButton_t55 * L_1 = (VirtualButton_t55 *)il2cpp_codegen_object_new (VirtualButton_t55_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m159(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m176(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
extern TypeInfo* VirtualAxis_t52_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void MobileInput_AddAxes_m215 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		VirtualAxis_t52 * L_1 = (VirtualAxis_t52 *)il2cpp_codegen_object_new (VirtualAxis_t52_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m149(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m175(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9MethodDeclarations.h"
extern "C" float MobileInput_GetAxis_m216 (MobileInput_t62 * __this, String_t* ___name, bool ___raw, const MethodInfo* method)
{
	{
		Dictionary_2_t72 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
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
		MobileInput_AddAxes_m215(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t72 * L_4 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t52 * L_6 = (VirtualAxis_t52 *)VirtFuncInvoker1< VirtualAxis_t52 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		float L_7 = VirtualAxis_get_GetValue_m157(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern "C" void MobileInput_SetButtonDown_m217 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t73 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
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
		MobileInput_AddButton_m214(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t73 * L_4 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualButton_t55 * L_6 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualButton_Pressed_m165(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern "C" void MobileInput_SetButtonUp_m218 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t73 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
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
		MobileInput_AddButton_m214(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t73 * L_4 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualButton_t55 * L_6 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualButton_Released_m166(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern "C" void MobileInput_SetAxisPositive_m219 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t72 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
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
		MobileInput_AddAxes_m215(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t72 * L_4 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t52 * L_6 = (VirtualAxis_t52 *)VirtFuncInvoker1< VirtualAxis_t52 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m156(L_6, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern "C" void MobileInput_SetAxisNegative_m220 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t72 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
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
		MobileInput_AddAxes_m215(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t72 * L_4 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t52 * L_6 = (VirtualAxis_t52 *)VirtFuncInvoker1< VirtualAxis_t52 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m156(L_6, (-1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern "C" void MobileInput_SetAxisZero_m221 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t72 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
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
		MobileInput_AddAxes_m215(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t72 * L_4 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t52 * L_6 = (VirtualAxis_t52 *)VirtFuncInvoker1< VirtualAxis_t52 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m156(L_6, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void MobileInput_SetAxis_m222 (MobileInput_t62 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t72 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
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
		MobileInput_AddAxes_m215(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t72 * L_4 = (((VirtualInput_t57 *)__this)->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t52 * L_6 = (VirtualAxis_t52 *)VirtFuncInvoker1< VirtualAxis_t52 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_4, L_5);
		float L_7 = ___value;
		NullCheck(L_6);
		VirtualAxis_Update_m156(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern "C" bool MobileInput_GetButtonDown_m223 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t73 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t73 * L_3 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t55 * L_5 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m169(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m214(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t73 * L_8 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t55 * L_10 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m169(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern "C" bool MobileInput_GetButtonUp_m224 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t73 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t73 * L_3 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t55 * L_5 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_m170(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m214(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t73 * L_8 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t55 * L_10 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_m170(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern "C" bool MobileInput_GetButton_m225 (MobileInput_t62 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t73 * L_0 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t73 * L_3 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t55 * L_5 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_m168(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m214(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t73 * L_8 = (((VirtualInput_t57 *)__this)->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t55 * L_10 = (VirtualButton_t55 *)VirtFuncInvoker1< VirtualButton_t55 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0) */, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_m168(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern "C" Vector3_t42  MobileInput_MousePosition_m226 (MobileInput_t62 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = VirtualInput_get_virtualMousePosition_m254(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10MethodDeclarations.h"
extern "C" void StandaloneInput__ctor_m227 (StandaloneInput_t63 * __this, const MethodInfo* method)
{
	{
		VirtualInput__ctor_m253(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" float StandaloneInput_GetAxis_m228 (StandaloneInput_t63 * __this, String_t* ___name, bool ___raw, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
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
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m577(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m578(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool StandaloneInput_GetButton_m229 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m579(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool StandaloneInput_GetButtonDown_m230 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m580(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool StandaloneInput_GetButtonUp_m231 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonUp_m581(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78;
extern "C" void StandaloneInput_SetButtonDown_m232 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78;
extern "C" void StandaloneInput_SetButtonUp_m233 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78;
extern "C" void StandaloneInput_SetAxisPositive_m234 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78;
extern "C" void StandaloneInput_SetAxisNegative_m235 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78;
extern "C" void StandaloneInput_SetAxisZero_m236 (StandaloneInput_t63 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78;
extern "C" void StandaloneInput_SetAxis_m237 (StandaloneInput_t63 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_0, _stringLiteral78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  StandaloneInput_MousePosition_m238 (StandaloneInput_t63 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_0 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_12.h"
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_12MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_13.h"
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_13MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_14.h"
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_14MethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AxisMapping__ctor_m239 (AxisMapping_t66 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.TiltInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_15.h"
// UnityStandardAssets.CrossPlatformInput.TiltInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_15MethodDeclarations.h"
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void TiltInput__ctor_m240 (TiltInput_t67 * __this, const MethodInfo* method)
{
	{
		__this->___fullTiltAngle_4 = (25.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* VirtualAxis_t52_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void TiltInput_OnEnable_m241 (TiltInput_t67 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		AxisMapping_t66 * L_0 = (__this->___mapping_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___type_0);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		AxisMapping_t66 * L_2 = (__this->___mapping_2);
		NullCheck(L_2);
		String_t* L_3 = (L_2->___axisName_1);
		VirtualAxis_t52 * L_4 = (VirtualAxis_t52 *)il2cpp_codegen_object_new (VirtualAxis_t52_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m149(L_4, L_3, /*hidden argument*/NULL);
		__this->___m_SteerAxis_6 = L_4;
		VirtualAxis_t52 * L_5 = (__this->___m_SteerAxis_6);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m175(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void TiltInput_Update_m242 (TiltInput_t67 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	Vector3_t42  V_3 = {0};
	Vector3_t42  V_4 = {0};
	Vector3_t42  V_5 = {0};
	Vector3_t42  V_6 = {0};
	int32_t V_7 = {0};
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_0 = Input_get_acceleration_m583(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_1 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Inequality_m584(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_6 = Input_get_acceleration_m583(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		Vector3_t42  L_8 = Input_get_acceleration_m583(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = (__this->___centreAngleOffset_5);
		V_0 = ((float)((float)((float)((float)L_10*(float)(57.29578f)))+(float)L_11));
		goto IL_009c;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_12 = Input_get_acceleration_m583(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_12;
		float L_13 = ((&V_5)->___z_3);
		Vector3_t42  L_14 = Input_get_acceleration_m583(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = ((&V_6)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_21 = Mathf_InverseLerp_m585(NULL /*static, unused*/, ((-L_18)), L_19, L_20, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)L_21*(float)(2.0f)))-(float)(1.0f)));
		AxisMapping_t66 * L_22 = (__this->___mapping_2);
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
		VirtualAxis_t52 * L_25 = (__this->___m_SteerAxis_6);
		float L_26 = V_1;
		NullCheck(L_25);
		VirtualAxis_Update_m156(L_25, L_26, /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_00f6:
	{
		float L_27 = V_1;
		int32_t L_28 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m193(NULL /*static, unused*/, ((float)((float)L_27*(float)(((float)L_28)))), /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_0108:
	{
		float L_29 = V_1;
		int32_t L_30 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m194(NULL /*static, unused*/, ((float)((float)L_29*(float)(((float)L_30)))), /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_011a:
	{
		float L_31 = V_1;
		int32_t L_32 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_m195(NULL /*static, unused*/, ((float)((float)L_31*(float)(((float)L_32)))), /*hidden argument*/NULL);
		goto IL_012c;
	}

IL_012c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
extern "C" void TiltInput_OnDisable_m243 (TiltInput_t67 * __this, const MethodInfo* method)
{
	{
		VirtualAxis_t52 * L_0 = (__this->___m_SteerAxis_6);
		NullCheck(L_0);
		VirtualAxis_Remove_m155(L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_16.h"
// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_16MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_17.h"
// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_17MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.TouchPad
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_18.h"
// UnityStandardAssets.CrossPlatformInput.TouchPad
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_18MethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct Image_t71;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t71_m586(__this, method) (( Image_t71 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral76;
extern "C" void TouchPad__ctor_m244 (TouchPad_t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral76 = il2cpp_codegen_string_literal_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___horizontalAxisName_4 = _stringLiteral68;
		__this->___verticalAxisName_5 = _stringLiteral76;
		__this->___Xsensitivity_6 = (1.0f);
		__this->___Ysensitivity_7 = (1.0f);
		__this->___m_Id_16 = (-1);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
// UnityStandardAssets.CrossPlatformInput.TouchPad
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_18MethodDeclarations.h"
extern "C" void TouchPad_OnEnable_m245 (TouchPad_t70 * __this, const MethodInfo* method)
{
	{
		TouchPad_CreateVirtualAxes_m247(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisImage_t71_m586_MethodInfo_var;
extern "C" void TouchPad_Start_m246 (TouchPad_t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisImage_t71_m586_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t71 * L_0 = Component_GetComponent_TisImage_t71_m586(__this, /*hidden argument*/Component_GetComponent_TisImage_t71_m586_MethodInfo_var);
		__this->___m_Image_19 = L_0;
		Image_t71 * L_1 = (__this->___m_Image_19);
		NullCheck(L_1);
		Transform_t41 * L_2 = Component_get_transform_m519(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_position_m518(L_2, /*hidden argument*/NULL);
		__this->___m_Center_18 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern TypeInfo* VirtualAxis_t52_il2cpp_TypeInfo_var;
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void TouchPad_CreateVirtualAxes_m247 (TouchPad_t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VirtualAxis_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	TouchPad_t70 * G_B2_0 = {0};
	TouchPad_t70 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	TouchPad_t70 * G_B3_1 = {0};
	TouchPad_t70 * G_B5_0 = {0};
	TouchPad_t70 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	TouchPad_t70 * G_B6_1 = {0};
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
		VirtualAxis_t52 * L_6 = (VirtualAxis_t52 *)il2cpp_codegen_object_new (VirtualAxis_t52_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m149(L_6, L_5, /*hidden argument*/NULL);
		__this->___m_HorizontalVirtualAxis_13 = L_6;
		VirtualAxis_t52 * L_7 = (__this->___m_HorizontalVirtualAxis_13);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m175(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
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
		VirtualAxis_t52 * L_10 = (VirtualAxis_t52 *)il2cpp_codegen_object_new (VirtualAxis_t52_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m149(L_10, L_9, /*hidden argument*/NULL);
		__this->___m_VerticalVirtualAxis_14 = L_10;
		VirtualAxis_t52 * L_11 = (__this->___m_VerticalVirtualAxis_14);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m175(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void TouchPad_UpdateVirtualAxes_m248 (TouchPad_t70 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = Vector3_get_normalized_m587((&___value), /*hidden argument*/NULL);
		___value = L_0;
		bool L_1 = (__this->___m_UseX_11);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VirtualAxis_t52 * L_2 = (__this->___m_HorizontalVirtualAxis_13);
		float L_3 = ((&___value)->___x_1);
		NullCheck(L_2);
		VirtualAxis_Update_m156(L_2, L_3, /*hidden argument*/NULL);
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
		VirtualAxis_t52 * L_5 = (__this->___m_VerticalVirtualAxis_14);
		float L_6 = ((&___value)->___y_2);
		NullCheck(L_5);
		VirtualAxis_Update_m156(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" void TouchPad_OnPointerDown_m249 (TouchPad_t70 * __this, PointerEventData_t143 * ___data, const MethodInfo* method)
{
	{
		__this->___m_Dragging_15 = 1;
		PointerEventData_t143 * L_0 = ___data;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_pointerId_m588(L_0, /*hidden argument*/NULL);
		__this->___m_Id_16 = L_1;
		int32_t L_2 = (__this->___controlStyle_3);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		PointerEventData_t143 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t44  L_4 = PointerEventData_get_position_m568(L_3, /*hidden argument*/NULL);
		Vector3_t42  L_5 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->___m_Center_18 = L_5;
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" void TouchPad_Update_m250 (TouchPad_t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t44  V_0 = {0};
	Vector2_t44  V_1 = {0};
	Vector2_t44  V_2 = {0};
	Vector2_t44  V_3 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m590(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Vector2_t44  L_5 = (__this->___m_PreviousTouchPos_17);
		Vector3_t42  L_6 = Vector2_op_Implicit_m589(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___m_Center_18 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		TouchU5BU5D_t187* L_7 = Input_get_touches_m591(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___m_Id_16);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Vector2_t44  L_9 = Touch_get_position_m592(((Touch_t188 *)(Touch_t188 *)SZArrayLdElema(L_7, L_8, sizeof(Touch_t188 ))), /*hidden argument*/NULL);
		__this->___m_PreviousTouchPos_17 = L_9;
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		TouchU5BU5D_t187* L_10 = Input_get_touches_m591(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___m_Id_16);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		Vector2_t44  L_12 = Touch_get_position_m592(((Touch_t188 *)(Touch_t188 *)SZArrayLdElema(L_10, L_11, sizeof(Touch_t188 ))), /*hidden argument*/NULL);
		V_2 = L_12;
		float L_13 = ((&V_2)->___x_1);
		Vector3_t42 * L_14 = &(__this->___m_Center_18);
		float L_15 = (L_14->___x_1);
		TouchU5BU5D_t187* L_16 = Input_get_touches_m591(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_17 = (__this->___m_Id_16);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		Vector2_t44  L_18 = Touch_get_position_m592(((Touch_t188 *)(Touch_t188 *)SZArrayLdElema(L_16, L_17, sizeof(Touch_t188 ))), /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = ((&V_3)->___y_2);
		Vector3_t42 * L_20 = &(__this->___m_Center_18);
		float L_21 = (L_20->___y_2);
		Vector2__ctor_m555((&V_1), ((float)((float)L_13-(float)L_15)), ((float)((float)L_19-(float)L_21)), /*hidden argument*/NULL);
		Vector2_t44  L_22 = Vector2_get_normalized_m593((&V_1), /*hidden argument*/NULL);
		V_0 = L_22;
		Vector2_t44 * L_23 = (&V_0);
		float L_24 = (L_23->___x_1);
		float L_25 = (__this->___Xsensitivity_6);
		L_23->___x_1 = ((float)((float)L_24*(float)L_25));
		Vector2_t44 * L_26 = (&V_0);
		float L_27 = (L_26->___y_2);
		float L_28 = (__this->___Ysensitivity_7);
		L_26->___y_2 = ((float)((float)L_27*(float)L_28));
		float L_29 = ((&V_0)->___x_1);
		float L_30 = ((&V_0)->___y_2);
		Vector3_t42  L_31 = {0};
		Vector3__ctor_m537(&L_31, L_29, L_30, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m248(__this, L_31, /*hidden argument*/NULL);
	}

IL_0109:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void TouchPad_OnPointerUp_m251 (TouchPad_t70 * __this, PointerEventData_t143 * ___data, const MethodInfo* method)
{
	{
		__this->___m_Dragging_15 = 0;
		__this->___m_Id_16 = (-1);
		Vector3_t42  L_0 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m248(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern "C" void TouchPad_OnDisable_m252 (TouchPad_t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___horizontalAxisName_4);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m173(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = (__this->___horizontalAxisName_4);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m177(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		String_t* L_3 = (__this->___verticalAxisName_5);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		bool L_4 = CrossPlatformInputManager_AxisExists_m173(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5 = (__this->___verticalAxisName_5);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m177(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* Dictionary_2_t72_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t73_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m594_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m595_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m448_MethodInfo_var;
extern "C" void VirtualInput__ctor_m253 (VirtualInput_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		Dictionary_2_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(82);
		List_1_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Dictionary_2__ctor_m594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Dictionary_2__ctor_m595_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		List_1__ctor_m448_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t72 * L_0 = (Dictionary_2_t72 *)il2cpp_codegen_object_new (Dictionary_2_t72_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m594(L_0, /*hidden argument*/Dictionary_2__ctor_m594_MethodInfo_var);
		__this->___m_VirtualAxes_0 = L_0;
		Dictionary_2_t73 * L_1 = (Dictionary_2_t73 *)il2cpp_codegen_object_new (Dictionary_2_t73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m595(L_1, /*hidden argument*/Dictionary_2__ctor_m595_MethodInfo_var);
		__this->___m_VirtualButtons_1 = L_1;
		List_1_t14 * L_2 = (List_1_t14 *)il2cpp_codegen_object_new (List_1_t14_il2cpp_TypeInfo_var);
		List_1__ctor_m448(L_2, /*hidden argument*/List_1__ctor_m448_MethodInfo_var);
		__this->___m_AlwaysUseVirtual_2 = L_2;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C" Vector3_t42  VirtualInput_get_virtualMousePosition_m254 (VirtualInput_t57 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (__this->___U3CvirtualMousePositionU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void VirtualInput_set_virtualMousePosition_m255 (VirtualInput_t57 * __this, Vector3_t42  ___value, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___value;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" bool VirtualInput_AxisExists_m256 (VirtualInput_t57 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t72 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C" bool VirtualInput_ButtonExists_m257 (VirtualInput_t57 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t73 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral79;
extern Il2CppCodeGenString* _stringLiteral80;
extern "C" void VirtualInput_RegisterVirtualAxis_m258 (VirtualInput_t57 * __this, VirtualAxis_t52 * ___axis, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral79 = il2cpp_codegen_string_literal_from_index(79);
		_stringLiteral80 = il2cpp_codegen_string_literal_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t72 * L_0 = (__this->___m_VirtualAxes_0);
		VirtualAxis_t52 * L_1 = ___axis;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m151(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualAxis_t52 * L_4 = ___axis;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m151(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral79, L_5, _stringLiteral80, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t72 * L_7 = (__this->___m_VirtualAxes_0);
		VirtualAxis_t52 * L_8 = ___axis;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m151(L_8, /*hidden argument*/NULL);
		VirtualAxis_t52 * L_10 = ___axis;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, VirtualAxis_t52 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1) */, L_7, L_9, L_10);
		VirtualAxis_t52 * L_11 = ___axis;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_m153(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t14 * L_13 = (__this->___m_AlwaysUseVirtual_2);
		VirtualAxis_t52 * L_14 = ___axis;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m151(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3MethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral80;
extern "C" void VirtualInput_RegisterVirtualButton_m259 (VirtualInput_t57 * __this, VirtualButton_t55 * ___button, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral80 = il2cpp_codegen_string_literal_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t73 * L_0 = (__this->___m_VirtualButtons_1);
		VirtualButton_t55 * L_1 = ___button;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m161(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualButton_t55 * L_4 = ___button;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m161(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral81, L_5, _stringLiteral80, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t73 * L_7 = (__this->___m_VirtualButtons_1);
		VirtualButton_t55 * L_8 = ___button;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m161(L_8, /*hidden argument*/NULL);
		VirtualButton_t55 * L_10 = ___button;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, VirtualButton_t55 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1) */, L_7, L_9, L_10);
		VirtualButton_t55 * L_11 = ___button;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m163(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t14 * L_13 = (__this->___m_AlwaysUseVirtual_2);
		VirtualButton_t55 * L_14 = ___button;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m161(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C" void VirtualInput_UnRegisterVirtualAxis_m260 (VirtualInput_t57 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t72 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t72 * L_3 = (__this->___m_VirtualAxes_0);
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
extern "C" void VirtualInput_UnRegisterVirtualButton_m261 (VirtualInput_t57 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Dictionary_2_t73 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t73 * L_3 = (__this->___m_VirtualButtons_1);
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
extern "C" VirtualAxis_t52 * VirtualInput_VirtualAxisReference_m262 (VirtualInput_t57 * __this, String_t* ___name, const MethodInfo* method)
{
	VirtualAxis_t52 * G_B3_0 = {0};
	{
		Dictionary_2_t72 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t72 * L_3 = (__this->___m_VirtualAxes_0);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualAxis_t52 * L_5 = (VirtualAxis_t52 *)VirtFuncInvoker1< VirtualAxis_t52 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0) */, L_3, L_4);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((VirtualAxis_t52 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void VirtualInput_SetVirtualMousePositionX_m263 (VirtualInput_t57 * __this, float ___f, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		float L_0 = ___f;
		Vector3_t42  L_1 = VirtualInput_get_virtualMousePosition_m254(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		Vector3_t42  L_3 = VirtualInput_get_virtualMousePosition_m254(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ((&V_1)->___z_3);
		Vector3_t42  L_5 = {0};
		Vector3__ctor_m537(&L_5, L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m255(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionY_m264 (VirtualInput_t57 * __this, float ___f, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		Vector3_t42  L_0 = VirtualInput_get_virtualMousePosition_m254(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		float L_2 = ___f;
		Vector3_t42  L_3 = VirtualInput_get_virtualMousePosition_m254(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ((&V_1)->___z_3);
		Vector3_t42  L_5 = {0};
		Vector3__ctor_m537(&L_5, L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m255(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionZ_m265 (VirtualInput_t57 * __this, float ___f, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	{
		Vector3_t42  L_0 = VirtualInput_get_virtualMousePosition_m254(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t42  L_2 = VirtualInput_get_virtualMousePosition_m254(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___y_2);
		float L_4 = ___f;
		Vector3_t42  L_5 = {0};
		Vector3__ctor_m537(&L_5, L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m255(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.ActivateTrigger/Mode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac.h"
// UnityStandardAssets.Utility.ActivateTrigger/Mode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_AcMethodDeclarations.h"
// UnityStandardAssets.Utility.ActivateTrigger
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac_0.h"
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
struct Animation_t190;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m604_gshared (GameObject_t11 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m604(__this, method) (( Object_t * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
#define GameObject_GetComponent_TisAnimation_t190_m602(__this, method) (( Animation_t190 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m604_gshared)(__this, method)
// System.Void UnityStandardAssets.Utility.ActivateTrigger::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void ActivateTrigger__ctor_m266 (ActivateTrigger_t75 * __this, const MethodInfo* method)
{
	{
		__this->___action_2 = 2;
		__this->___triggerCount_5 = 1;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::DoActivateTrigger()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
extern TypeInfo* Behaviour_t189_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t11_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAnimation_t190_m602_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral82;
extern "C" void ActivateTrigger_DoActivateTrigger_m267 (ActivateTrigger_t75 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Behaviour_t189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		GameObject_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		GameObject_GetComponent_TisAnimation_t190_m602_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		s_Il2CppMethodIntialized = true;
	}
	Object_t76 * V_0 = {0};
	Behaviour_t189 * V_1 = {0};
	GameObject_t11 * V_2 = {0};
	int32_t V_3 = {0};
	Object_t76 * G_B4_0 = {0};
	Object_t76 * G_B3_0 = {0};
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
		Object_t76 * L_3 = (__this->___target_3);
		Object_t76 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		GameObject_t11 * L_5 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		G_B4_0 = ((Object_t76 *)(L_5));
	}

IL_0037:
	{
		V_0 = G_B4_0;
		Object_t76 * L_6 = V_0;
		V_1 = ((Behaviour_t189 *)IsInstClass(L_6, Behaviour_t189_il2cpp_TypeInfo_var));
		Object_t76 * L_7 = V_0;
		V_2 = ((GameObject_t11 *)IsInstSealed(L_7, GameObject_t11_il2cpp_TypeInfo_var));
		Behaviour_t189 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m548(NULL /*static, unused*/, L_8, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		Behaviour_t189 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t11 * L_11 = Component_get_gameObject_m547(L_10, /*hidden argument*/NULL);
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
		GameObject_t11 * L_14 = V_2;
		bool L_15 = Object_op_Inequality_m548(NULL /*static, unused*/, L_14, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_t11 * L_16 = V_2;
		NullCheck(L_16);
		GameObject_BroadcastMessage_m597(L_16, _stringLiteral82, /*hidden argument*/NULL);
	}

IL_009a:
	{
		goto IL_014e;
	}

IL_009f:
	{
		GameObject_t11 * L_17 = (__this->___source_4);
		bool L_18 = Object_op_Inequality_m548(NULL /*static, unused*/, L_17, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t11 * L_19 = V_2;
		bool L_20 = Object_op_Inequality_m548(NULL /*static, unused*/, L_19, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t11 * L_21 = (__this->___source_4);
		GameObject_t11 * L_22 = V_2;
		NullCheck(L_22);
		Transform_t41 * L_23 = GameObject_get_transform_m534(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t42  L_24 = Transform_get_position_m518(L_23, /*hidden argument*/NULL);
		GameObject_t11 * L_25 = V_2;
		NullCheck(L_25);
		Transform_t41 * L_26 = GameObject_get_transform_m534(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Quaternion_t106  L_27 = Transform_get_rotation_m598(L_26, /*hidden argument*/NULL);
		Object_Instantiate_m599(NULL /*static, unused*/, L_21, L_24, L_27, /*hidden argument*/NULL);
		GameObject_t11 * L_28 = V_2;
		Object_DestroyObject_m600(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		goto IL_014e;
	}

IL_00e9:
	{
		GameObject_t11 * L_29 = V_2;
		bool L_30 = Object_op_Inequality_m548(NULL /*static, unused*/, L_29, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		GameObject_t11 * L_31 = V_2;
		NullCheck(L_31);
		GameObject_SetActive_m444(L_31, 1, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		goto IL_014e;
	}

IL_0101:
	{
		Behaviour_t189 * L_32 = V_1;
		bool L_33 = Object_op_Inequality_m548(NULL /*static, unused*/, L_32, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		Behaviour_t189 * L_34 = V_1;
		NullCheck(L_34);
		Behaviour_set_enabled_m601(L_34, 1, /*hidden argument*/NULL);
	}

IL_0114:
	{
		goto IL_014e;
	}

IL_0119:
	{
		GameObject_t11 * L_35 = V_2;
		bool L_36 = Object_op_Inequality_m548(NULL /*static, unused*/, L_35, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0131;
		}
	}
	{
		GameObject_t11 * L_37 = V_2;
		NullCheck(L_37);
		Animation_t190 * L_38 = GameObject_GetComponent_TisAnimation_t190_m602(L_37, /*hidden argument*/GameObject_GetComponent_TisAnimation_t190_m602_MethodInfo_var);
		NullCheck(L_38);
		Animation_Play_m603(L_38, /*hidden argument*/NULL);
	}

IL_0131:
	{
		goto IL_014e;
	}

IL_0136:
	{
		GameObject_t11 * L_39 = V_2;
		bool L_40 = Object_op_Inequality_m548(NULL /*static, unused*/, L_39, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0149;
		}
	}
	{
		GameObject_t11 * L_41 = V_2;
		NullCheck(L_41);
		GameObject_SetActive_m444(L_41, 0, /*hidden argument*/NULL);
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
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityStandardAssets.Utility.ActivateTrigger
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac_0MethodDeclarations.h"
extern "C" void ActivateTrigger_OnTriggerEnter_m268 (ActivateTrigger_t75 * __this, Collider_t144 * ___other, const MethodInfo* method)
{
	{
		ActivateTrigger_DoActivateTrigger_m267(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au.h"
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_AuMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ReplacementDefinition__ctor_m269 (ReplacementDefinition_t77 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_0.h"
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_0MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ReplacementDefinitionU5BU5D_t80_il2cpp_TypeInfo_var;
extern "C" void ReplacementList__ctor_m270 (ReplacementList_t79 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReplacementDefinitionU5BU5D_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___items_0 = ((ReplacementDefinitionU5BU5D_t80*)SZArrayNew(ReplacementDefinitionU5BU5D_t80_il2cpp_TypeInfo_var, 0));
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_1.h"
// UnityStandardAssets.Utility.AutoMobileShaderSwitch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_1MethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
struct RendererU5BU5D_t191;
struct ObjectU5BU5D_t148;
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" ObjectU5BU5D_t148* Object_FindObjectsOfType_TisObject_t_m614_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectsOfType_TisObject_t_m614(__this /* static, unused */, method) (( ObjectU5BU5D_t148* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m614_gshared)(__this /* static, unused */, method)
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
#define Object_FindObjectsOfType_TisRenderer_t193_m605(__this /* static, unused */, method) (( RendererU5BU5D_t191* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m614_gshared)(__this /* static, unused */, method)
struct Material_t195;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m615_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m615(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m615_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
#define Object_Instantiate_TisMaterial_t195_m611(__this /* static, unused */, p0, method) (( Material_t195 * (*) (Object_t * /* static, unused */, Material_t195 *, const MethodInfo*))Object_Instantiate_TisObject_t_m615_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void AutoMobileShaderSwitch__ctor_m271 (AutoMobileShaderSwitch_t81 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::OnEnable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t192_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectsOfType_TisRenderer_t193_m605_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m607_MethodInfo_var;
extern const MethodInfo* Object_Instantiate_TisMaterial_t195_m611_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral83;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral85;
extern Il2CppCodeGenString* _stringLiteral86;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral88;
extern Il2CppCodeGenString* _stringLiteral89;
extern Il2CppCodeGenString* _stringLiteral90;
extern Il2CppCodeGenString* _stringLiteral30;
extern "C" void AutoMobileShaderSwitch_OnEnable_m272 (AutoMobileShaderSwitch_t81 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		List_1_t192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		Object_FindObjectsOfType_TisRenderer_t193_m605_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		List_1__ctor_m607_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		Object_Instantiate_TisMaterial_t195_m611_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		_stringLiteral83 = il2cpp_codegen_string_literal_from_index(83);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	RendererU5BU5D_t191* V_0 = {0};
	List_1_t192 * V_1 = {0};
	List_1_t192 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReplacementDefinition_t77 * V_5 = {0};
	ReplacementDefinitionU5BU5D_t80* V_6 = {0};
	int32_t V_7 = 0;
	Renderer_t193 * V_8 = {0};
	RendererU5BU5D_t191* V_9 = {0};
	int32_t V_10 = 0;
	MaterialU5BU5D_t194* V_11 = {0};
	int32_t V_12 = 0;
	Material_t195 * V_13 = {0};
	Material_t195 * V_14 = {0};
	int32_t V_15 = 0;
	{
		RendererU5BU5D_t191* L_0 = Object_FindObjectsOfType_TisRenderer_t193_m605(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisRenderer_t193_m605_MethodInfo_var);
		V_0 = L_0;
		RendererU5BU5D_t191* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)(((Array_t *)L_1)->max_length)));
		Object_t * L_3 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m606(NULL /*static, unused*/, L_3, _stringLiteral83, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		List_1_t192 * L_5 = (List_1_t192 *)il2cpp_codegen_object_new (List_1_t192_il2cpp_TypeInfo_var);
		List_1__ctor_m607(L_5, /*hidden argument*/List_1__ctor_m607_MethodInfo_var);
		V_1 = L_5;
		List_1_t192 * L_6 = (List_1_t192 *)il2cpp_codegen_object_new (List_1_t192_il2cpp_TypeInfo_var);
		List_1__ctor_m607(L_6, /*hidden argument*/List_1__ctor_m607_MethodInfo_var);
		V_2 = L_6;
		V_3 = 0;
		V_4 = 0;
		ReplacementList_t79 * L_7 = (__this->___m_ReplacementList_2);
		NullCheck(L_7);
		ReplacementDefinitionU5BU5D_t80* L_8 = (L_7->___items_0);
		V_6 = L_8;
		V_7 = 0;
		goto IL_0180;
	}

IL_0043:
	{
		ReplacementDefinitionU5BU5D_t80* L_9 = V_6;
		int32_t L_10 = V_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_5 = (*(ReplacementDefinition_t77 **)(ReplacementDefinition_t77 **)SZArrayLdElema(L_9, L_11, sizeof(ReplacementDefinition_t77 *)));
		RendererU5BU5D_t191* L_12 = V_0;
		V_9 = L_12;
		V_10 = 0;
		goto IL_016f;
	}

IL_0055:
	{
		RendererU5BU5D_t191* L_13 = V_9;
		int32_t L_14 = V_10;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Renderer_t193 **)(Renderer_t193 **)SZArrayLdElema(L_13, L_15, sizeof(Renderer_t193 *)));
		V_11 = (MaterialU5BU5D_t194*)NULL;
		V_12 = 0;
		goto IL_0149;
	}

IL_0067:
	{
		Renderer_t193 * L_16 = V_8;
		NullCheck(L_16);
		MaterialU5BU5D_t194* L_17 = Renderer_get_sharedMaterials_m608(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_13 = (*(Material_t195 **)(Material_t195 **)SZArrayLdElema(L_17, L_19, sizeof(Material_t195 *)));
		Material_t195 * L_20 = V_13;
		NullCheck(L_20);
		Shader_t78 * L_21 = Material_get_shader_m609(L_20, /*hidden argument*/NULL);
		ReplacementDefinition_t77 * L_22 = V_5;
		NullCheck(L_22);
		Shader_t78 * L_23 = (L_22->___original_0);
		bool L_24 = Object_op_Equality_m473(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0143;
		}
	}
	{
		MaterialU5BU5D_t194* L_25 = V_11;
		if (L_25)
		{
			goto IL_009b;
		}
	}
	{
		Renderer_t193 * L_26 = V_8;
		NullCheck(L_26);
		MaterialU5BU5D_t194* L_27 = Renderer_get_materials_m610(L_26, /*hidden argument*/NULL);
		V_11 = L_27;
	}

IL_009b:
	{
		List_1_t192 * L_28 = V_1;
		Material_t195 * L_29 = V_13;
		NullCheck(L_28);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Material_t195 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(!0) */, L_28, L_29);
		if (L_30)
		{
			goto IL_00d3;
		}
	}
	{
		List_1_t192 * L_31 = V_1;
		Material_t195 * L_32 = V_13;
		NullCheck(L_31);
		VirtActionInvoker1< Material_t195 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0) */, L_31, L_32);
		Material_t195 * L_33 = V_13;
		Material_t195 * L_34 = Object_Instantiate_TisMaterial_t195_m611(NULL /*static, unused*/, L_33, /*hidden argument*/Object_Instantiate_TisMaterial_t195_m611_MethodInfo_var);
		V_14 = L_34;
		Material_t195 * L_35 = V_14;
		ReplacementDefinition_t77 * L_36 = V_5;
		NullCheck(L_36);
		Shader_t78 * L_37 = (L_36->___replacement_1);
		NullCheck(L_35);
		Material_set_shader_m612(L_35, L_37, /*hidden argument*/NULL);
		List_1_t192 * L_38 = V_2;
		Material_t195 * L_39 = V_14;
		NullCheck(L_38);
		VirtActionInvoker1< Material_t195 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0) */, L_38, L_39);
		int32_t L_40 = V_3;
		V_3 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00d3:
	{
		ObjectU5BU5D_t148* L_41 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 6));
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		ArrayElementTypeCheck (L_41, _stringLiteral84);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral84;
		ObjectU5BU5D_t148* L_42 = L_41;
		Renderer_t193 * L_43 = V_8;
		NullCheck(L_43);
		GameObject_t11 * L_44 = Component_get_gameObject_m547(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_m508(L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1, sizeof(Object_t *))) = (Object_t *)L_45;
		ObjectU5BU5D_t148* L_46 = L_42;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, _stringLiteral85);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral85;
		ObjectU5BU5D_t148* L_47 = L_46;
		int32_t L_48 = V_12;
		int32_t L_49 = L_48;
		Object_t * L_50 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 3);
		ArrayElementTypeCheck (L_47, L_50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 3, sizeof(Object_t *))) = (Object_t *)L_50;
		ObjectU5BU5D_t148* L_51 = L_47;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 4);
		ArrayElementTypeCheck (L_51, _stringLiteral86);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral86;
		ObjectU5BU5D_t148* L_52 = L_51;
		List_1_t192 * L_53 = V_2;
		List_1_t192 * L_54 = V_1;
		Material_t195 * L_55 = V_13;
		NullCheck(L_54);
		int32_t L_56 = (int32_t)VirtFuncInvoker1< int32_t, Material_t195 * >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(!0) */, L_54, L_55);
		NullCheck(L_53);
		Material_t195 * L_57 = (Material_t195 *)VirtFuncInvoker1< Material_t195 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_53, L_56);
		NullCheck(L_57);
		String_t* L_58 = Object_get_name_m508(L_57, /*hidden argument*/NULL);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 5);
		ArrayElementTypeCheck (L_52, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 5, sizeof(Object_t *))) = (Object_t *)L_58;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Concat_m422(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		MaterialU5BU5D_t194* L_60 = V_11;
		int32_t L_61 = V_12;
		List_1_t192 * L_62 = V_2;
		List_1_t192 * L_63 = V_1;
		Material_t195 * L_64 = V_13;
		NullCheck(L_63);
		int32_t L_65 = (int32_t)VirtFuncInvoker1< int32_t, Material_t195 * >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(!0) */, L_63, L_64);
		NullCheck(L_62);
		Material_t195 * L_66 = (Material_t195 *)VirtFuncInvoker1< Material_t195 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_62, L_65);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		ArrayElementTypeCheck (L_60, L_66);
		*((Material_t195 **)(Material_t195 **)SZArrayLdElema(L_60, L_61, sizeof(Material_t195 *))) = (Material_t195 *)L_66;
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
		Renderer_t193 * L_70 = V_8;
		NullCheck(L_70);
		MaterialU5BU5D_t194* L_71 = Renderer_get_sharedMaterials_m608(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		if ((((int32_t)L_69) < ((int32_t)(((int32_t)(((Array_t *)L_71)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		MaterialU5BU5D_t194* L_72 = V_11;
		if (!L_72)
		{
			goto IL_0169;
		}
	}
	{
		Renderer_t193 * L_73 = V_8;
		MaterialU5BU5D_t194* L_74 = V_11;
		NullCheck(L_73);
		Renderer_set_materials_m613(L_73, L_74, /*hidden argument*/NULL);
	}

IL_0169:
	{
		int32_t L_75 = V_10;
		V_10 = ((int32_t)((int32_t)L_75+(int32_t)1));
	}

IL_016f:
	{
		int32_t L_76 = V_10;
		RendererU5BU5D_t191* L_77 = V_9;
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
		ReplacementDefinitionU5BU5D_t80* L_80 = V_6;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)(((int32_t)(((Array_t *)L_80)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_81 = V_4;
		int32_t L_82 = L_81;
		Object_t * L_83 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_82);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Concat_m606(NULL /*static, unused*/, L_83, _stringLiteral87, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		int32_t L_85 = V_3;
		int32_t L_86 = L_85;
		Object_t * L_87 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_86);
		String_t* L_88 = String_Concat_m606(NULL /*static, unused*/, L_87, _stringLiteral88, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		V_15 = 0;
		goto IL_023e;
	}

IL_01be:
	{
		StringU5BU5D_t35* L_89 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 8));
		List_1_t192 * L_90 = V_1;
		int32_t L_91 = V_15;
		NullCheck(L_90);
		Material_t195 * L_92 = (Material_t195 *)VirtFuncInvoker1< Material_t195 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_90, L_91);
		NullCheck(L_92);
		String_t* L_93 = Object_get_name_m508(L_92, /*hidden argument*/NULL);
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 0);
		ArrayElementTypeCheck (L_89, L_93);
		*((String_t**)(String_t**)SZArrayLdElema(L_89, 0, sizeof(String_t*))) = (String_t*)L_93;
		StringU5BU5D_t35* L_94 = L_89;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 1);
		ArrayElementTypeCheck (L_94, _stringLiteral89);
		*((String_t**)(String_t**)SZArrayLdElema(L_94, 1, sizeof(String_t*))) = (String_t*)_stringLiteral89;
		StringU5BU5D_t35* L_95 = L_94;
		List_1_t192 * L_96 = V_1;
		int32_t L_97 = V_15;
		NullCheck(L_96);
		Material_t195 * L_98 = (Material_t195 *)VirtFuncInvoker1< Material_t195 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_96, L_97);
		NullCheck(L_98);
		Shader_t78 * L_99 = Material_get_shader_m609(L_98, /*hidden argument*/NULL);
		NullCheck(L_99);
		String_t* L_100 = Object_get_name_m508(L_99, /*hidden argument*/NULL);
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, 2);
		ArrayElementTypeCheck (L_95, L_100);
		*((String_t**)(String_t**)SZArrayLdElema(L_95, 2, sizeof(String_t*))) = (String_t*)L_100;
		StringU5BU5D_t35* L_101 = L_95;
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, 3);
		ArrayElementTypeCheck (L_101, _stringLiteral90);
		*((String_t**)(String_t**)SZArrayLdElema(L_101, 3, sizeof(String_t*))) = (String_t*)_stringLiteral90;
		StringU5BU5D_t35* L_102 = L_101;
		List_1_t192 * L_103 = V_2;
		int32_t L_104 = V_15;
		NullCheck(L_103);
		Material_t195 * L_105 = (Material_t195 *)VirtFuncInvoker1< Material_t195 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_103, L_104);
		NullCheck(L_105);
		String_t* L_106 = Object_get_name_m508(L_105, /*hidden argument*/NULL);
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 4);
		ArrayElementTypeCheck (L_102, L_106);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 4, sizeof(String_t*))) = (String_t*)L_106;
		StringU5BU5D_t35* L_107 = L_102;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 5);
		ArrayElementTypeCheck (L_107, _stringLiteral89);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 5, sizeof(String_t*))) = (String_t*)_stringLiteral89;
		StringU5BU5D_t35* L_108 = L_107;
		List_1_t192 * L_109 = V_2;
		int32_t L_110 = V_15;
		NullCheck(L_109);
		Material_t195 * L_111 = (Material_t195 *)VirtFuncInvoker1< Material_t195 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32) */, L_109, L_110);
		NullCheck(L_111);
		Shader_t78 * L_112 = Material_get_shader_m609(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		String_t* L_113 = Object_get_name_m508(L_112, /*hidden argument*/NULL);
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 6);
		ArrayElementTypeCheck (L_108, L_113);
		*((String_t**)(String_t**)SZArrayLdElema(L_108, 6, sizeof(String_t*))) = (String_t*)L_113;
		StringU5BU5D_t35* L_114 = L_108;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, 7);
		ArrayElementTypeCheck (L_114, _stringLiteral30);
		*((String_t**)(String_t**)SZArrayLdElema(L_114, 7, sizeof(String_t*))) = (String_t*)_stringLiteral30;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_115 = String_Concat_m517(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_115, /*hidden argument*/NULL);
		int32_t L_116 = V_15;
		V_15 = ((int32_t)((int32_t)L_116+(int32_t)1));
	}

IL_023e:
	{
		int32_t L_117 = V_15;
		List_1_t192 * L_118 = V_1;
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
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_2MethodDeclarations.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Vector3andSpace__ctor_m273 (Vector3andSpace_t82 * __this, const MethodInfo* method)
{
	{
		__this->___space_1 = 1;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMoveAndRotate
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_3.h"
// UnityStandardAssets.Utility.AutoMoveAndRotate
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_3MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void AutoMoveAndRotate__ctor_m274 (AutoMoveAndRotate_t83 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern "C" void AutoMoveAndRotate_Start_m275 (AutoMoveAndRotate_t83 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_m616(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_LastRealTime_5 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Update()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void AutoMoveAndRotate_Update_m276 (AutoMoveAndRotate_t83 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___ignoreTimescale_4);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_m616(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___m_LastRealTime_5);
		V_0 = ((float)((float)L_2-(float)L_3));
		float L_4 = Time_get_realtimeSinceStartup_m616(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_LastRealTime_5 = L_4;
	}

IL_0029:
	{
		Transform_t41 * L_5 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3andSpace_t82 * L_6 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_6);
		Vector3_t42  L_7 = (L_6->___value_0);
		float L_8 = V_0;
		Vector3_t42  L_9 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3andSpace_t82 * L_10 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_10);
		int32_t L_11 = (L_10->___space_1);
		NullCheck(L_5);
		Transform_Translate_m617(L_5, L_9, L_11, /*hidden argument*/NULL);
		Transform_t41 * L_12 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Vector3andSpace_t82 * L_13 = (__this->___rotateDegreesPerSecond_3);
		NullCheck(L_13);
		Vector3_t42  L_14 = (L_13->___value_0);
		float L_15 = V_0;
		Vector3_t42  L_16 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3andSpace_t82 * L_17 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_17);
		int32_t L_18 = (L_17->___space_1);
		NullCheck(L_12);
		Transform_Rotate_m618(L_12, L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.CameraRefocus
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ca.h"
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
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CameraRefocus__ctor_m277 (CameraRefocus_t84 * __this, Camera_t85 * ___camera, Transform_t41 * ___parent, Vector3_t42  ___origCameraPos, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Vector3_t42  L_0 = ___origCameraPos;
		__this->___m_OrigCameraPos_3 = L_0;
		Camera_t85 * L_1 = ___camera;
		__this->___Camera_0 = L_1;
		Transform_t41 * L_2 = ___parent;
		__this->___Parent_2 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C" void CameraRefocus_ChangeCamera_m278 (CameraRefocus_t84 * __this, Camera_t85 * ___camera, const MethodInfo* method)
{
	{
		Camera_t85 * L_0 = ___camera;
		__this->___Camera_0 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C" void CameraRefocus_ChangeParent_m279 (CameraRefocus_t84 * __this, Transform_t41 * ___parent, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = ___parent;
		__this->___Parent_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
extern "C" void CameraRefocus_GetFocusPoint_m280 (CameraRefocus_t84 * __this, const MethodInfo* method)
{
	RaycastHit_t196  V_0 = {0};
	{
		Transform_t41 * L_0 = (__this->___Parent_2);
		NullCheck(L_0);
		Transform_t41 * L_1 = Component_get_transform_m519(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t42  L_2 = Transform_get_position_m518(L_1, /*hidden argument*/NULL);
		Vector3_t42  L_3 = (__this->___m_OrigCameraPos_3);
		Vector3_t42  L_4 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Transform_t41 * L_5 = (__this->___Parent_2);
		NullCheck(L_5);
		Transform_t41 * L_6 = Component_get_transform_m519(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t42  L_7 = Transform_get_forward_m619(L_6, /*hidden argument*/NULL);
		bool L_8 = Physics_Raycast_m620(NULL /*static, unused*/, L_4, L_7, (&V_0), (100.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		Vector3_t42  L_9 = RaycastHit_get_point_m621((&V_0), /*hidden argument*/NULL);
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
extern "C" void CameraRefocus_SetFocusPoint_m281 (CameraRefocus_t84 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Refocus_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t85 * L_1 = (__this->___Camera_0);
		NullCheck(L_1);
		Transform_t41 * L_2 = Component_get_transform_m519(L_1, /*hidden argument*/NULL);
		Vector3_t42  L_3 = (__this->___Lookatpoint_1);
		NullCheck(L_2);
		Transform_LookAt_m622(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// UnityStandardAssets.Utility.CurveControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Cu.h"
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
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* KeyframeU5BU5D_t197_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationCurve_t87_il2cpp_TypeInfo_var;
extern "C" void CurveControlledBob__ctor_m282 (CurveControlledBob_t86 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyframeU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		AnimationCurve_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___HorizontalBobRange_0 = (0.33f);
		__this->___VerticalBobRange_1 = (0.33f);
		KeyframeU5BU5D_t197* L_0 = ((KeyframeU5BU5D_t197*)SZArrayNew(KeyframeU5BU5D_t197_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Keyframe_t198  L_1 = {0};
		Keyframe__ctor_m623(&L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t198 *)(Keyframe_t198 *)SZArrayLdElema(L_0, 0, sizeof(Keyframe_t198 ))) = L_1;
		KeyframeU5BU5D_t197* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Keyframe_t198  L_3 = {0};
		Keyframe__ctor_m623(&L_3, (0.5f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t198 *)(Keyframe_t198 *)SZArrayLdElema(L_2, 1, sizeof(Keyframe_t198 ))) = L_3;
		KeyframeU5BU5D_t197* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Keyframe_t198  L_5 = {0};
		Keyframe__ctor_m623(&L_5, (1.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t198 *)(Keyframe_t198 *)SZArrayLdElema(L_4, 2, sizeof(Keyframe_t198 ))) = L_5;
		KeyframeU5BU5D_t197* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		Keyframe_t198  L_7 = {0};
		Keyframe__ctor_m623(&L_7, (1.5f), (-1.0f), /*hidden argument*/NULL);
		*((Keyframe_t198 *)(Keyframe_t198 *)SZArrayLdElema(L_6, 3, sizeof(Keyframe_t198 ))) = L_7;
		KeyframeU5BU5D_t197* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		Keyframe_t198  L_9 = {0};
		Keyframe__ctor_m623(&L_9, (2.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t198 *)(Keyframe_t198 *)SZArrayLdElema(L_8, 4, sizeof(Keyframe_t198 ))) = L_9;
		AnimationCurve_t87 * L_10 = (AnimationCurve_t87 *)il2cpp_codegen_object_new (AnimationCurve_t87_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m624(L_10, L_8, /*hidden argument*/NULL);
		__this->___Bobcurve_2 = L_10;
		__this->___VerticaltoHorizontalRatio_3 = (1.0f);
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void CurveControlledBob_Setup_m283 (CurveControlledBob_t86 * __this, Camera_t85 * ___camera, float ___bobBaseInterval, const MethodInfo* method)
{
	Keyframe_t198  V_0 = {0};
	{
		float L_0 = ___bobBaseInterval;
		__this->___m_BobBaseInterval_6 = L_0;
		Camera_t85 * L_1 = ___camera;
		NullCheck(L_1);
		Transform_t41 * L_2 = Component_get_transform_m519(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_localPosition_m625(L_2, /*hidden argument*/NULL);
		__this->___m_OriginalCameraPosition_7 = L_3;
		AnimationCurve_t87 * L_4 = (__this->___Bobcurve_2);
		AnimationCurve_t87 * L_5 = (__this->___Bobcurve_2);
		NullCheck(L_5);
		int32_t L_6 = AnimationCurve_get_length_m626(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Keyframe_t198  L_7 = AnimationCurve_get_Item_m627(L_4, ((int32_t)((int32_t)L_6-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = Keyframe_get_time_m628((&V_0), /*hidden argument*/NULL);
		__this->___m_Time_8 = L_8;
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Vector3_t42  CurveControlledBob_DoHeadBob_m284 (CurveControlledBob_t86 * __this, float ___speed, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t42 * L_0 = &(__this->___m_OriginalCameraPosition_7);
		float L_1 = (L_0->___x_1);
		AnimationCurve_t87 * L_2 = (__this->___Bobcurve_2);
		float L_3 = (__this->___m_CyclePositionX_4);
		NullCheck(L_2);
		float L_4 = AnimationCurve_Evaluate_m629(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = (__this->___HorizontalBobRange_0);
		V_0 = ((float)((float)L_1+(float)((float)((float)L_4*(float)L_5))));
		Vector3_t42 * L_6 = &(__this->___m_OriginalCameraPosition_7);
		float L_7 = (L_6->___y_2);
		AnimationCurve_t87 * L_8 = (__this->___Bobcurve_2);
		float L_9 = (__this->___m_CyclePositionY_5);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m629(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = (__this->___VerticalBobRange_1);
		V_1 = ((float)((float)L_7+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m_CyclePositionX_4);
		float L_13 = ___speed;
		float L_14 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = (__this->___m_BobBaseInterval_6);
		__this->___m_CyclePositionX_4 = ((float)((float)L_12+(float)((float)((float)((float)((float)L_13*(float)L_14))/(float)L_15))));
		float L_16 = (__this->___m_CyclePositionY_5);
		float L_17 = ___speed;
		float L_18 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Vector3_t42  L_31 = {0};
		Vector3__ctor_m537(&L_31, L_29, L_30, (0.0f), /*hidden argument*/NULL);
		return L_31;
	}
}
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr.h"
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
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CDragObjectU3Ec__Iterator0__ctor_m285 (U3CDragObjectU3Ec__Iterator0_t88 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m286 (U3CDragObjectU3Ec__Iterator0_t88 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m287 (U3CDragObjectU3Ec__Iterator0_t88 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::MoveNext()
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityStandardAssets.Utility.DragRigidbody
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr_0MethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern "C" bool U3CDragObjectU3Ec__Iterator0_MoveNext_m288 (U3CDragObjectU3Ec__Iterator0_t88 * __this, const MethodInfo* method)
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
			goto IL_00f0;
		}
	}
	{
		goto IL_0163;
	}

IL_0021:
	{
		DragRigidbody_t90 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		SpringJoint_t91 * L_3 = (L_2->___m_SpringJoint_8);
		NullCheck(L_3);
		Rigidbody_t108 * L_4 = Joint_get_connectedBody_m630(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = Rigidbody_get_drag_m631(L_4, /*hidden argument*/NULL);
		__this->___U3ColdDragU3E__0_0 = L_5;
		DragRigidbody_t90 * L_6 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_6);
		SpringJoint_t91 * L_7 = (L_6->___m_SpringJoint_8);
		NullCheck(L_7);
		Rigidbody_t108 * L_8 = Joint_get_connectedBody_m630(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = Rigidbody_get_angularDrag_m632(L_8, /*hidden argument*/NULL);
		__this->___U3ColdAngularDragU3E__1_1 = L_9;
		DragRigidbody_t90 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		SpringJoint_t91 * L_11 = (L_10->___m_SpringJoint_8);
		NullCheck(L_11);
		Rigidbody_t108 * L_12 = Joint_get_connectedBody_m630(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_set_drag_m633(L_12, (10.0f), /*hidden argument*/NULL);
		DragRigidbody_t90 * L_13 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_13);
		SpringJoint_t91 * L_14 = (L_13->___m_SpringJoint_8);
		NullCheck(L_14);
		Rigidbody_t108 * L_15 = Joint_get_connectedBody_m630(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody_set_angularDrag_m634(L_15, (5.0f), /*hidden argument*/NULL);
		DragRigidbody_t90 * L_16 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_16);
		Camera_t85 * L_17 = DragRigidbody_FindCamera_m294(L_16, /*hidden argument*/NULL);
		__this->___U3CmainCameraU3E__2_2 = L_17;
		goto IL_00f0;
	}

IL_00a1:
	{
		Camera_t85 * L_18 = (__this->___U3CmainCameraU3E__2_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_19 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Ray_t89  L_20 = Camera_ScreenPointToRay_m635(L_18, L_19, /*hidden argument*/NULL);
		__this->___U3CrayU3E__3_3 = L_20;
		DragRigidbody_t90 * L_21 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_21);
		SpringJoint_t91 * L_22 = (L_21->___m_SpringJoint_8);
		NullCheck(L_22);
		Transform_t41 * L_23 = Component_get_transform_m519(L_22, /*hidden argument*/NULL);
		Ray_t89 * L_24 = &(__this->___U3CrayU3E__3_3);
		float L_25 = (__this->___distance_4);
		Vector3_t42  L_26 = Ray_GetPoint_m636(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m532(L_23, L_26, /*hidden argument*/NULL);
		__this->___U24current_6 = NULL;
		__this->___U24PC_5 = 1;
		goto IL_0165;
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		bool L_27 = Input_GetMouseButton_m637(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00a1;
		}
	}
	{
		DragRigidbody_t90 * L_28 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_28);
		SpringJoint_t91 * L_29 = (L_28->___m_SpringJoint_8);
		NullCheck(L_29);
		Rigidbody_t108 * L_30 = Joint_get_connectedBody_m630(L_29, /*hidden argument*/NULL);
		bool L_31 = Object_op_Implicit_m554(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_015c;
		}
	}
	{
		DragRigidbody_t90 * L_32 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_32);
		SpringJoint_t91 * L_33 = (L_32->___m_SpringJoint_8);
		NullCheck(L_33);
		Rigidbody_t108 * L_34 = Joint_get_connectedBody_m630(L_33, /*hidden argument*/NULL);
		float L_35 = (__this->___U3ColdDragU3E__0_0);
		NullCheck(L_34);
		Rigidbody_set_drag_m633(L_34, L_35, /*hidden argument*/NULL);
		DragRigidbody_t90 * L_36 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_36);
		SpringJoint_t91 * L_37 = (L_36->___m_SpringJoint_8);
		NullCheck(L_37);
		Rigidbody_t108 * L_38 = Joint_get_connectedBody_m630(L_37, /*hidden argument*/NULL);
		float L_39 = (__this->___U3ColdAngularDragU3E__1_1);
		NullCheck(L_38);
		Rigidbody_set_angularDrag_m634(L_38, L_39, /*hidden argument*/NULL);
		DragRigidbody_t90 * L_40 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_40);
		SpringJoint_t91 * L_41 = (L_40->___m_SpringJoint_8);
		NullCheck(L_41);
		Joint_set_connectedBody_m638(L_41, (Rigidbody_t108 *)NULL, /*hidden argument*/NULL);
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
extern "C" void U3CDragObjectU3Ec__Iterator0_Dispose_m289 (U3CDragObjectU3Ec__Iterator0_t88 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CDragObjectU3Ec__Iterator0_Reset_m290 (U3CDragObjectU3Ec__Iterator0_t88 * __this, const MethodInfo* method)
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
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJointMethodDeclarations.h"
struct Rigidbody_t108;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
#define GameObject_AddComponent_TisRigidbody_t108_m646(__this, method) (( Rigidbody_t108 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct SpringJoint_t91;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
#define GameObject_AddComponent_TisSpringJoint_t91_m647(__this, method) (( SpringJoint_t91 * (*) (GameObject_t11 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m576_gshared)(__this, method)
struct Camera_t85;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t85_m655(__this, method) (( Camera_t85 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// System.Void UnityStandardAssets.Utility.DragRigidbody::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void DragRigidbody__ctor_m291 (DragRigidbody_t90 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody::Update()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityStandardAssets.Utility.DragRigidbody
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr_0MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJointMethodDeclarations.h"
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern TypeInfo* RaycastHit_t196_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t11_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t176_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody_t108_m646_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSpringJoint_t91_m647_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral92;
extern "C" void DragRigidbody_Update_m292 (DragRigidbody_t90 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		RaycastHit_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		GameObject_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		Single_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		GameObject_AddComponent_TisRigidbody_t108_m646_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		GameObject_AddComponent_TisSpringJoint_t91_m647_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t85 * V_0 = {0};
	RaycastHit_t196  V_1 = {0};
	GameObject_t11 * V_2 = {0};
	Rigidbody_t108 * V_3 = {0};
	Ray_t89  V_4 = {0};
	Ray_t89  V_5 = {0};
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
		Camera_t85 * L_1 = DragRigidbody_FindCamera_m294(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		Initobj (RaycastHit_t196_il2cpp_TypeInfo_var, (&V_1));
		Camera_t85 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_3 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t89  L_4 = Camera_ScreenPointToRay_m635(L_2, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		Vector3_t42  L_5 = Ray_get_origin_m641((&V_4), /*hidden argument*/NULL);
		Camera_t85 * L_6 = V_0;
		Vector3_t42  L_7 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Ray_t89  L_8 = Camera_ScreenPointToRay_m635(L_6, L_7, /*hidden argument*/NULL);
		V_5 = L_8;
		Vector3_t42  L_9 = Ray_get_direction_m642((&V_5), /*hidden argument*/NULL);
		bool L_10 = Physics_Raycast_m643(NULL /*static, unused*/, L_5, L_9, (&V_1), (100.0f), ((int32_t)-5), /*hidden argument*/NULL);
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
		Rigidbody_t108 * L_11 = RaycastHit_get_rigidbody_m644((&V_1), /*hidden argument*/NULL);
		bool L_12 = Object_op_Implicit_m554(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		Rigidbody_t108 * L_13 = RaycastHit_get_rigidbody_m644((&V_1), /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = Rigidbody_get_isKinematic_m645(L_13, /*hidden argument*/NULL);
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
		SpringJoint_t91 * L_15 = (__this->___m_SpringJoint_8);
		bool L_16 = Object_op_Implicit_m554(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00af;
		}
	}
	{
		GameObject_t11 * L_17 = (GameObject_t11 *)il2cpp_codegen_object_new (GameObject_t11_il2cpp_TypeInfo_var);
		GameObject__ctor_m571(L_17, _stringLiteral91, /*hidden argument*/NULL);
		V_2 = L_17;
		GameObject_t11 * L_18 = V_2;
		NullCheck(L_18);
		Rigidbody_t108 * L_19 = GameObject_AddComponent_TisRigidbody_t108_m646(L_18, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t108_m646_MethodInfo_var);
		V_3 = L_19;
		GameObject_t11 * L_20 = V_2;
		NullCheck(L_20);
		SpringJoint_t91 * L_21 = GameObject_AddComponent_TisSpringJoint_t91_m647(L_20, /*hidden argument*/GameObject_AddComponent_TisSpringJoint_t91_m647_MethodInfo_var);
		__this->___m_SpringJoint_8 = L_21;
		Rigidbody_t108 * L_22 = V_3;
		NullCheck(L_22);
		Rigidbody_set_isKinematic_m648(L_22, 1, /*hidden argument*/NULL);
	}

IL_00af:
	{
		SpringJoint_t91 * L_23 = (__this->___m_SpringJoint_8);
		NullCheck(L_23);
		Transform_t41 * L_24 = Component_get_transform_m519(L_23, /*hidden argument*/NULL);
		Vector3_t42  L_25 = RaycastHit_get_point_m621((&V_1), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_m532(L_24, L_25, /*hidden argument*/NULL);
		SpringJoint_t91 * L_26 = (__this->___m_SpringJoint_8);
		Vector3_t42  L_27 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		Joint_set_anchor_m649(L_26, L_27, /*hidden argument*/NULL);
		SpringJoint_t91 * L_28 = (__this->___m_SpringJoint_8);
		NullCheck(L_28);
		SpringJoint_set_spring_m650(L_28, (50.0f), /*hidden argument*/NULL);
		SpringJoint_t91 * L_29 = (__this->___m_SpringJoint_8);
		NullCheck(L_29);
		SpringJoint_set_damper_m651(L_29, (5.0f), /*hidden argument*/NULL);
		SpringJoint_t91 * L_30 = (__this->___m_SpringJoint_8);
		NullCheck(L_30);
		SpringJoint_set_maxDistance_m652(L_30, (0.2f), /*hidden argument*/NULL);
		SpringJoint_t91 * L_31 = (__this->___m_SpringJoint_8);
		Rigidbody_t108 * L_32 = RaycastHit_get_rigidbody_m644((&V_1), /*hidden argument*/NULL);
		NullCheck(L_31);
		Joint_set_connectedBody_m638(L_31, L_32, /*hidden argument*/NULL);
		float L_33 = RaycastHit_get_distance_m653((&V_1), /*hidden argument*/NULL);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t176_il2cpp_TypeInfo_var, &L_34);
		MonoBehaviour_StartCoroutine_m654(__this, _stringLiteral92, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.DragRigidbody::DragObject(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_DrMethodDeclarations.h"
extern TypeInfo* U3CDragObjectU3Ec__Iterator0_t88_il2cpp_TypeInfo_var;
extern "C" Object_t * DragRigidbody_DragObject_m293 (DragRigidbody_t90 * __this, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDragObjectU3Ec__Iterator0_t88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	U3CDragObjectU3Ec__Iterator0_t88 * V_0 = {0};
	{
		U3CDragObjectU3Ec__Iterator0_t88 * L_0 = (U3CDragObjectU3Ec__Iterator0_t88 *)il2cpp_codegen_object_new (U3CDragObjectU3Ec__Iterator0_t88_il2cpp_TypeInfo_var);
		U3CDragObjectU3Ec__Iterator0__ctor_m285(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDragObjectU3Ec__Iterator0_t88 * L_1 = V_0;
		float L_2 = ___distance;
		NullCheck(L_1);
		L_1->___distance_4 = L_2;
		U3CDragObjectU3Ec__Iterator0_t88 * L_3 = V_0;
		float L_4 = ___distance;
		NullCheck(L_3);
		L_3->___U3CU24U3Edistance_7 = L_4;
		U3CDragObjectU3Ec__Iterator0_t88 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_8 = __this;
		U3CDragObjectU3Ec__Iterator0_t88 * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
extern const MethodInfo* Component_GetComponent_TisCamera_t85_m655_MethodInfo_var;
extern "C" Camera_t85 * DragRigidbody_FindCamera_m294 (DragRigidbody_t90 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t85_m655_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483703);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t85 * L_0 = Component_GetComponent_TisCamera_t85_m655(__this, /*hidden argument*/Component_GetComponent_TisCamera_t85_m655_MethodInfo_var);
		bool L_1 = Object_op_Implicit_m554(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Camera_t85 * L_2 = Component_GetComponent_TisCamera_t85_m655(__this, /*hidden argument*/Component_GetComponent_TisCamera_t85_m655_MethodInfo_var);
		return L_2;
	}

IL_0017:
	{
		Camera_t85 * L_3 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityStandardAssets.Utility.DynamicShadowSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dy.h"
// UnityStandardAssets.Utility.DynamicShadowSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_DyMethodDeclarations.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void DynamicShadowSettings__ctor_m295 (DynamicShadowSettings_t92 * __this, const MethodInfo* method)
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
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Start()
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
extern "C" void DynamicShadowSettings_Start_m296 (DynamicShadowSettings_t92 * __this, const MethodInfo* method)
{
	{
		Light_t93 * L_0 = (__this->___sunLight_2);
		NullCheck(L_0);
		float L_1 = Light_get_shadowStrength_m657(L_0, /*hidden argument*/NULL);
		__this->___m_OriginalStrength_12 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Update()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void DynamicShadowSettings_Update_m297 (DynamicShadowSettings_t92 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t89  V_0 = {0};
	RaycastHit_t196  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t42  V_4 = {0};
	{
		Camera_t85 * L_0 = Camera_get_main_m656(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t41 * L_1 = Component_get_transform_m519(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t42  L_2 = Transform_get_position_m518(L_1, /*hidden argument*/NULL);
		Vector3_t42  L_3 = Vector3_get_up_m658(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_4 = Vector3_op_UnaryNegation_m659(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Ray__ctor_m660((&V_0), L_2, L_4, /*hidden argument*/NULL);
		Transform_t41 * L_5 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t42  L_6 = Transform_get_position_m518(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = ((&V_4)->___y_2);
		V_2 = L_7;
		Ray_t89  L_8 = V_0;
		bool L_9 = Physics_Raycast_m661(NULL /*static, unused*/, L_8, (&V_1), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		float L_10 = RaycastHit_get_distance_m653((&V_1), /*hidden argument*/NULL);
		V_2 = L_10;
	}

IL_004a:
	{
		float L_11 = V_2;
		float L_12 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_18 = Mathf_SmoothDamp_m662(NULL /*static, unused*/, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		__this->___m_SmoothHeight_10 = L_18;
	}

IL_007f:
	{
		float L_19 = (__this->___minHeight_3);
		float L_20 = (__this->___maxHeight_6);
		float L_21 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_22 = Mathf_InverseLerp_m585(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		float L_23 = (__this->___minShadowDistance_4);
		float L_24 = (__this->___maxShadowDistance_7);
		float L_25 = V_3;
		float L_26 = Mathf_Lerp_m535(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		QualitySettings_set_shadowDistance_m663(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Light_t93 * L_27 = (__this->___sunLight_2);
		float L_28 = (__this->___minShadowBias_5);
		float L_29 = (__this->___maxShadowBias_8);
		float L_30 = V_3;
		float L_31 = V_3;
		float L_32 = Mathf_Lerp_m535(NULL /*static, unused*/, L_28, L_29, ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_30))*(float)((float)((float)(1.0f)-(float)L_31)))))), /*hidden argument*/NULL);
		NullCheck(L_27);
		Light_set_shadowBias_m664(L_27, L_32, /*hidden argument*/NULL);
		Light_t93 * L_33 = (__this->___sunLight_2);
		float L_34 = (__this->___m_OriginalStrength_12);
		float L_35 = V_3;
		float L_36 = Mathf_Lerp_m535(NULL /*static, unused*/, L_34, (0.0f), L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Light_set_shadowStrength_m665(L_33, L_36, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO.h"
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FOMethodDeclarations.h"
// UnityStandardAssets.Utility.FOVKick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_1.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CFOVKickUpU3Ec__Iterator1__ctor_m298 (U3CFOVKickUpU3Ec__Iterator1_t94 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CFOVKickUpU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m299 (U3CFOVKickUpU3Ec__Iterator1_t94 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CFOVKickUpU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m300 (U3CFOVKickUpU3Ec__Iterator1_t94 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::MoveNext()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForEndOfFrame_t200_il2cpp_TypeInfo_var;
extern "C" bool U3CFOVKickUpU3Ec__Iterator1_MoveNext_m301 (U3CFOVKickUpU3Ec__Iterator1_t94 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		WaitForEndOfFrame_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
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
		FOVKick_t95 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Camera_t85 * L_3 = (L_2->___Camera_0);
		NullCheck(L_3);
		float L_4 = Camera_get_fieldOfView_m666(L_3, /*hidden argument*/NULL);
		FOVKick_t95 * L_5 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_5);
		float L_6 = (L_5->___originalFov_1);
		FOVKick_t95 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		float L_8 = (L_7->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->___U3CtU3E__0_0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t95 * L_10 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		Camera_t85 * L_11 = (L_10->___Camera_0);
		FOVKick_t95 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		float L_13 = (L_12->___originalFov_1);
		FOVKick_t95 * L_14 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_14);
		AnimationCurve_t87 * L_15 = (L_14->___IncreaseCurve_5);
		float L_16 = (__this->___U3CtU3E__0_0);
		FOVKick_t95 * L_17 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_17);
		float L_18 = (L_17->___TimeToIncrease_3);
		NullCheck(L_15);
		float L_19 = AnimationCurve_Evaluate_m629(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/NULL);
		FOVKick_t95 * L_20 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_20);
		float L_21 = (L_20->___FOVIncrease_2);
		NullCheck(L_11);
		Camera_set_fieldOfView_m667(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), /*hidden argument*/NULL);
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22+(float)L_23));
		WaitForEndOfFrame_t200 * L_24 = (WaitForEndOfFrame_t200 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t200_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m668(L_24, /*hidden argument*/NULL);
		__this->___U24current_2 = L_24;
		__this->___U24PC_1 = 1;
		goto IL_00eb;
	}

IL_00cc:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		FOVKick_t95 * L_26 = (__this->___U3CU3Ef__this_3);
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
extern "C" void U3CFOVKickUpU3Ec__Iterator1_Dispose_m302 (U3CFOVKickUpU3Ec__Iterator1_t94 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CFOVKickUpU3Ec__Iterator1_Reset_m303 (U3CFOVKickUpU3Ec__Iterator1_t94 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_0.h"
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_0MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CFOVKickDownU3Ec__Iterator2__ctor_m304 (U3CFOVKickDownU3Ec__Iterator2_t96 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CFOVKickDownU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m305 (U3CFOVKickDownU3Ec__Iterator2_t96 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CFOVKickDownU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m306 (U3CFOVKickDownU3Ec__Iterator2_t96 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::MoveNext()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForEndOfFrame_t200_il2cpp_TypeInfo_var;
extern "C" bool U3CFOVKickDownU3Ec__Iterator2_MoveNext_m307 (U3CFOVKickDownU3Ec__Iterator2_t96 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		WaitForEndOfFrame_t200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
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
		FOVKick_t95 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Camera_t85 * L_3 = (L_2->___Camera_0);
		NullCheck(L_3);
		float L_4 = Camera_get_fieldOfView_m666(L_3, /*hidden argument*/NULL);
		FOVKick_t95 * L_5 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_5);
		float L_6 = (L_5->___originalFov_1);
		FOVKick_t95 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		float L_8 = (L_7->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->___U3CtU3E__0_0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t95 * L_10 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		Camera_t85 * L_11 = (L_10->___Camera_0);
		FOVKick_t95 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		float L_13 = (L_12->___originalFov_1);
		FOVKick_t95 * L_14 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_14);
		AnimationCurve_t87 * L_15 = (L_14->___IncreaseCurve_5);
		float L_16 = (__this->___U3CtU3E__0_0);
		FOVKick_t95 * L_17 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_17);
		float L_18 = (L_17->___TimeToDecrease_4);
		NullCheck(L_15);
		float L_19 = AnimationCurve_Evaluate_m629(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/NULL);
		FOVKick_t95 * L_20 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_20);
		float L_21 = (L_20->___FOVIncrease_2);
		NullCheck(L_11);
		Camera_set_fieldOfView_m667(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), /*hidden argument*/NULL);
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22-(float)L_23));
		WaitForEndOfFrame_t200 * L_24 = (WaitForEndOfFrame_t200 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t200_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m668(L_24, /*hidden argument*/NULL);
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
		FOVKick_t95 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		Camera_t85 * L_27 = (L_26->___Camera_0);
		FOVKick_t95 * L_28 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_28);
		float L_29 = (L_28->___originalFov_1);
		NullCheck(L_27);
		Camera_set_fieldOfView_m667(L_27, L_29, /*hidden argument*/NULL);
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
extern "C" void U3CFOVKickDownU3Ec__Iterator2_Dispose_m308 (U3CFOVKickDownU3Ec__Iterator2_t96 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CFOVKickDownU3Ec__Iterator2_Reset_m309 (U3CFOVKickDownU3Ec__Iterator2_t96 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.FOVKick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_1MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void FOVKick__ctor_m310 (FOVKick_t95 * __this, const MethodInfo* method)
{
	{
		__this->___FOVIncrease_2 = (3.0f);
		__this->___TimeToIncrease_3 = (1.0f);
		__this->___TimeToDecrease_4 = (1.0f);
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityStandardAssets.Utility.FOVKick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_1MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" void FOVKick_Setup_m311 (FOVKick_t95 * __this, Camera_t85 * ___camera, const MethodInfo* method)
{
	{
		Camera_t85 * L_0 = ___camera;
		FOVKick_CheckStatus_m312(__this, L_0, /*hidden argument*/NULL);
		Camera_t85 * L_1 = ___camera;
		__this->___Camera_0 = L_1;
		Camera_t85 * L_2 = ___camera;
		NullCheck(L_2);
		float L_3 = Camera_get_fieldOfView_m666(L_2, /*hidden argument*/NULL);
		__this->___originalFov_1 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral94;
extern "C" void FOVKick_CheckStatus_m312 (FOVKick_t95 * __this, Camera_t85 * ___camera, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		_stringLiteral94 = il2cpp_codegen_string_literal_from_index(94);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t85 * L_0 = ___camera;
		bool L_1 = Object_op_Equality_m473(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t154 * L_2 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_2, _stringLiteral93, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		AnimationCurve_t87 * L_3 = (__this->___IncreaseCurve_5);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Exception_t154 * L_4 = (Exception_t154 *)il2cpp_codegen_object_new (Exception_t154_il2cpp_TypeInfo_var);
		Exception__ctor_m457(L_4, _stringLiteral94, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
extern "C" void FOVKick_ChangeCamera_m313 (FOVKick_t95 * __this, Camera_t85 * ___camera, const MethodInfo* method)
{
	{
		Camera_t85 * L_0 = ___camera;
		__this->___Camera_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FOMethodDeclarations.h"
extern TypeInfo* U3CFOVKickUpU3Ec__Iterator1_t94_il2cpp_TypeInfo_var;
extern "C" Object_t * FOVKick_FOVKickUp_m314 (FOVKick_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CFOVKickUpU3Ec__Iterator1_t94_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	U3CFOVKickUpU3Ec__Iterator1_t94 * V_0 = {0};
	{
		U3CFOVKickUpU3Ec__Iterator1_t94 * L_0 = (U3CFOVKickUpU3Ec__Iterator1_t94 *)il2cpp_codegen_object_new (U3CFOVKickUpU3Ec__Iterator1_t94_il2cpp_TypeInfo_var);
		U3CFOVKickUpU3Ec__Iterator1__ctor_m298(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFOVKickUpU3Ec__Iterator1_t94 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CFOVKickUpU3Ec__Iterator1_t94 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_0MethodDeclarations.h"
extern TypeInfo* U3CFOVKickDownU3Ec__Iterator2_t96_il2cpp_TypeInfo_var;
extern "C" Object_t * FOVKick_FOVKickDown_m315 (FOVKick_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CFOVKickDownU3Ec__Iterator2_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	U3CFOVKickDownU3Ec__Iterator2_t96 * V_0 = {0};
	{
		U3CFOVKickDownU3Ec__Iterator2_t96 * L_0 = (U3CFOVKickDownU3Ec__Iterator2_t96 *)il2cpp_codegen_object_new (U3CFOVKickDownU3Ec__Iterator2_t96_il2cpp_TypeInfo_var);
		U3CFOVKickDownU3Ec__Iterator2__ctor_m304(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFOVKickDownU3Ec__Iterator2_t96 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CFOVKickDownU3Ec__Iterator2_t96 * L_2 = V_0;
		return L_2;
	}
}
// UnityStandardAssets.Utility.FPSCounter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FP.h"
// UnityStandardAssets.Utility.FPSCounter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FPMethodDeclarations.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
struct GUIText_t98;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t98_m669(__this, method) (( GUIText_t98 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void FPSCounter__ctor_m316 (FPSCounter_t97 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisGUIText_t98_m669_MethodInfo_var;
extern "C" void FPSCounter_Start_m317 (FPSCounter_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGUIText_t98_m669_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483704);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_realtimeSinceStartup_m616(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_FpsNextPeriod_5 = ((float)((float)L_0+(float)(0.5f)));
		GUIText_t98 * L_1 = Component_GetComponent_TisGUIText_t98_m669(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t98_m669_MethodInfo_var);
		__this->___m_GuiText_7 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral95;
extern "C" void FPSCounter_Update_m318 (FPSCounter_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral95 = il2cpp_codegen_string_literal_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___m_FpsAccumulator_4);
		__this->___m_FpsAccumulator_4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		float L_1 = Time_get_realtimeSinceStartup_m616(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		GUIText_t98 * L_5 = (__this->___m_GuiText_7);
		int32_t L_6 = (__this->___m_CurrentFps_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m486(NULL /*static, unused*/, _stringLiteral95, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIText_set_text_m670(L_5, L_9, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// UnityStandardAssets.Utility.FollowTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Fo_2.h"
// UnityStandardAssets.Utility.FollowTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Fo_2MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.FollowTarget::.ctor()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void FollowTarget__ctor_m319 (FollowTarget_t99 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m537(&L_0, (0.0f), (7.5f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_3 = L_0;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FollowTarget::LateUpdate()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void FollowTarget_LateUpdate_m320 (FollowTarget_t99 * __this, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Transform_t41 * L_1 = (__this->___target_2);
		NullCheck(L_1);
		Vector3_t42  L_2 = Transform_get_position_m518(L_1, /*hidden argument*/NULL);
		Vector3_t42  L_3 = (__this->___offset_3);
		Vector3_t42  L_4 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m532(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// ForcedReset
#include "AssemblyU2DCSharpU2Dfirstpass_ForcedReset.h"
// ForcedReset
#include "AssemblyU2DCSharpU2Dfirstpass_ForcedResetMethodDeclarations.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// System.Void ForcedReset::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void ForcedReset__ctor_m321 (ForcedReset_t100 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ForcedReset::Update()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral96;
extern "C" void ForcedReset_Update_m322 (ForcedReset_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		_stringLiteral96 = il2cpp_codegen_string_literal_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		bool L_0 = CrossPlatformInputManager_GetButtonDown_m184(NULL /*static, unused*/, _stringLiteral96, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = Application_get_loadedLevelName_m561(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevelAsync_m671(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le.h"
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_LeMethodDeclarations.h"
// UnityStandardAssets.Utility.LerpControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le_0.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CDoBobCycleU3Ec__Iterator3__ctor_m323 (U3CDoBobCycleU3Ec__Iterator3_t101 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDoBobCycleU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m324 (U3CDoBobCycleU3Ec__Iterator3_t101 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDoBobCycleU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m325 (U3CDoBobCycleU3Ec__Iterator3_t101 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::MoveNext()
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForFixedUpdate_t201_il2cpp_TypeInfo_var;
extern "C" bool U3CDoBobCycleU3Ec__Iterator3_MoveNext_m326 (U3CDoBobCycleU3Ec__Iterator3_t101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		WaitForFixedUpdate_t201_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
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
		LerpControlledBob_t102 * L_2 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t102 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		float L_4 = (L_3->___BobAmount_1);
		float L_5 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t102 * L_6 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_6);
		float L_7 = (L_6->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Lerp_m535(NULL /*static, unused*/, (0.0f), L_4, ((float)((float)L_5/(float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___m_Offset_2 = L_8;
		float L_9 = (__this->___U3CtU3E__0_0);
		float L_10 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_9+(float)L_10));
		WaitForFixedUpdate_t201 * L_11 = (WaitForFixedUpdate_t201 *)il2cpp_codegen_object_new (WaitForFixedUpdate_t201_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m672(L_11, /*hidden argument*/NULL);
		__this->___U24current_2 = L_11;
		__this->___U24PC_1 = 1;
		goto IL_0140;
	}

IL_0090:
	{
		float L_12 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t102 * L_13 = (__this->___U3CU3Ef__this_3);
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
		LerpControlledBob_t102 * L_15 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t102 * L_16 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_16);
		float L_17 = (L_16->___BobAmount_1);
		float L_18 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t102 * L_19 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_19);
		float L_20 = (L_19->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Lerp_m535(NULL /*static, unused*/, L_17, (0.0f), ((float)((float)L_18/(float)L_20)), /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->___m_Offset_2 = L_21;
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22+(float)L_23));
		WaitForFixedUpdate_t201 * L_24 = (WaitForFixedUpdate_t201 *)il2cpp_codegen_object_new (WaitForFixedUpdate_t201_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m672(L_24, /*hidden argument*/NULL);
		__this->___U24current_2 = L_24;
		__this->___U24PC_1 = 2;
		goto IL_0140;
	}

IL_0111:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t102 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		float L_27 = (L_26->___BobDuration_0);
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		LerpControlledBob_t102 * L_28 = (__this->___U3CU3Ef__this_3);
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
extern "C" void U3CDoBobCycleU3Ec__Iterator3_Dispose_m327 (U3CDoBobCycleU3Ec__Iterator3_t101 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CDoBobCycleU3Ec__Iterator3_Reset_m328 (U3CDoBobCycleU3Ec__Iterator3_t101 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.LerpControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le_0MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void LerpControlledBob__ctor_m329 (LerpControlledBob_t102 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
extern "C" float LerpControlledBob_Offset_m330 (LerpControlledBob_t102 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Offset_2);
		return L_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_LeMethodDeclarations.h"
extern TypeInfo* U3CDoBobCycleU3Ec__Iterator3_t101_il2cpp_TypeInfo_var;
extern "C" Object_t * LerpControlledBob_DoBobCycle_m331 (LerpControlledBob_t102 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDoBobCycleU3Ec__Iterator3_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(104);
		s_Il2CppMethodIntialized = true;
	}
	U3CDoBobCycleU3Ec__Iterator3_t101 * V_0 = {0};
	{
		U3CDoBobCycleU3Ec__Iterator3_t101 * L_0 = (U3CDoBobCycleU3Ec__Iterator3_t101 *)il2cpp_codegen_object_new (U3CDoBobCycleU3Ec__Iterator3_t101_il2cpp_TypeInfo_var);
		U3CDoBobCycleU3Ec__Iterator3__ctor_m323(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoBobCycleU3Ec__Iterator3_t101 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CDoBobCycleU3Ec__Iterator3_t101 * L_2 = V_0;
		return L_2;
	}
}
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob.h"
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_ObMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityStandardAssets.Utility.ObjectResetter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob_0.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
struct TransformU5BU5D_t104;
struct ObjectU5BU5D_t148;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t148* Component_GetComponentsInChildren_TisObject_t_m679_gshared (Component_t178 * __this, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m679(__this, method) (( ObjectU5BU5D_t148* (*) (Component_t178 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m679_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
#define Component_GetComponentsInChildren_TisTransform_t41_m674(__this, method) (( TransformU5BU5D_t104* (*) (Component_t178 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m679_gshared)(__this, method)
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CResetCoroutineU3Ec__Iterator4__ctor_m332 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CResetCoroutineU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m333 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CResetCoroutineU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m334 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::MoveNext()
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
extern TypeInfo* WaitForSeconds_t202_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisTransform_t41_m674_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral97;
extern "C" bool U3CResetCoroutineU3Ec__Iterator4_MoveNext_m335 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Component_GetComponentsInChildren_TisTransform_t41_m674_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		_stringLiteral97 = il2cpp_codegen_string_literal_from_index(97);
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
		WaitForSeconds_t202 * L_3 = (WaitForSeconds_t202 *)il2cpp_codegen_object_new (WaitForSeconds_t202_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m673(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_5 = L_3;
		__this->___U24PC_4 = 1;
		goto IL_0144;
	}

IL_003e:
	{
		ObjectResetter_t105 * L_4 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_4);
		TransformU5BU5D_t104* L_5 = Component_GetComponentsInChildren_TisTransform_t41_m674(L_4, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t41_m674_MethodInfo_var);
		__this->___U3CU24s_18U3E__0_1 = L_5;
		__this->___U3CU24s_19U3E__1_2 = 0;
		goto IL_00a3;
	}

IL_005b:
	{
		TransformU5BU5D_t104* L_6 = (__this->___U3CU24s_18U3E__0_1);
		int32_t L_7 = (__this->___U3CU24s_19U3E__1_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		__this->___U3CtU3E__2_3 = (*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_6, L_8, sizeof(Transform_t41 *)));
		ObjectResetter_t105 * L_9 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_9);
		List_1_t107 * L_10 = (L_9->___originalStructure_4);
		Transform_t41 * L_11 = (__this->___U3CtU3E__2_3);
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, Transform_t41 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(!0) */, L_10, L_11);
		if (L_12)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t41 * L_13 = (__this->___U3CtU3E__2_3);
		NullCheck(L_13);
		Transform_set_parent_m521(L_13, (Transform_t41 *)NULL, /*hidden argument*/NULL);
	}

IL_0095:
	{
		int32_t L_14 = (__this->___U3CU24s_19U3E__1_2);
		__this->___U3CU24s_19U3E__1_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_15 = (__this->___U3CU24s_19U3E__1_2);
		TransformU5BU5D_t104* L_16 = (__this->___U3CU24s_18U3E__0_1);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_005b;
		}
	}
	{
		ObjectResetter_t105 * L_17 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_17);
		Transform_t41 * L_18 = Component_get_transform_m519(L_17, /*hidden argument*/NULL);
		ObjectResetter_t105 * L_19 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_19);
		Vector3_t42  L_20 = (L_19->___originalPosition_2);
		NullCheck(L_18);
		Transform_set_position_m532(L_18, L_20, /*hidden argument*/NULL);
		ObjectResetter_t105 * L_21 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_21);
		Transform_t41 * L_22 = Component_get_transform_m519(L_21, /*hidden argument*/NULL);
		ObjectResetter_t105 * L_23 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_23);
		Quaternion_t106  L_24 = (L_23->___originalRotation_3);
		NullCheck(L_22);
		Transform_set_rotation_m675(L_22, L_24, /*hidden argument*/NULL);
		ObjectResetter_t105 * L_25 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_25);
		Rigidbody_t108 * L_26 = (L_25->___Rigidbody_5);
		bool L_27 = Object_op_Implicit_m554(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_012b;
		}
	}
	{
		ObjectResetter_t105 * L_28 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_28);
		Rigidbody_t108 * L_29 = (L_28->___Rigidbody_5);
		Vector3_t42  L_30 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody_set_velocity_m676(L_29, L_30, /*hidden argument*/NULL);
		ObjectResetter_t105 * L_31 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_31);
		Rigidbody_t108 * L_32 = (L_31->___Rigidbody_5);
		Vector3_t42  L_33 = Vector3_get_zero_m526(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_32);
		Rigidbody_set_angularVelocity_m677(L_32, L_33, /*hidden argument*/NULL);
	}

IL_012b:
	{
		ObjectResetter_t105 * L_34 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_34);
		Component_SendMessage_m678(L_34, _stringLiteral97, /*hidden argument*/NULL);
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
extern "C" void U3CResetCoroutineU3Ec__Iterator4_Dispose_m336 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_4 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CResetCoroutineU3Ec__Iterator4_Reset_m337 (U3CResetCoroutineU3Ec__Iterator4_t103 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.ObjectResetter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob_0MethodDeclarations.h"
struct Rigidbody_t108;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t108_m681(__this, method) (( Rigidbody_t108 * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
// System.Void UnityStandardAssets.Utility.ObjectResetter::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void ObjectResetter__ctor_m338 (ObjectResetter_t105 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* List_1_t107_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisTransform_t41_m674_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m680_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t108_m681_MethodInfo_var;
extern "C" void ObjectResetter_Start_m339 (ObjectResetter_t105 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		Component_GetComponentsInChildren_TisTransform_t41_m674_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		List_1__ctor_m680_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		Component_GetComponent_TisRigidbody_t108_m681_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	{
		TransformU5BU5D_t104* L_0 = Component_GetComponentsInChildren_TisTransform_t41_m674(__this, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t41_m674_MethodInfo_var);
		List_1_t107 * L_1 = (List_1_t107 *)il2cpp_codegen_object_new (List_1_t107_il2cpp_TypeInfo_var);
		List_1__ctor_m680(L_1, (Object_t*)(Object_t*)L_0, /*hidden argument*/List_1__ctor_m680_MethodInfo_var);
		__this->___originalStructure_4 = L_1;
		Transform_t41 * L_2 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_position_m518(L_2, /*hidden argument*/NULL);
		__this->___originalPosition_2 = L_3;
		Transform_t41 * L_4 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t106  L_5 = Transform_get_rotation_m598(L_4, /*hidden argument*/NULL);
		__this->___originalRotation_3 = L_5;
		Rigidbody_t108 * L_6 = Component_GetComponent_TisRigidbody_t108_m681(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t108_m681_MethodInfo_var);
		__this->___Rigidbody_5 = L_6;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::DelayedReset(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityStandardAssets.Utility.ObjectResetter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob_0MethodDeclarations.h"
extern "C" void ObjectResetter_DelayedReset_m340 (ObjectResetter_t105 * __this, float ___delay, const MethodInfo* method)
{
	{
		float L_0 = ___delay;
		Object_t * L_1 = ObjectResetter_ResetCoroutine_m341(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m682(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ObjectResetter::ResetCoroutine(System.Single)
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_ObMethodDeclarations.h"
extern TypeInfo* U3CResetCoroutineU3Ec__Iterator4_t103_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectResetter_ResetCoroutine_m341 (ObjectResetter_t105 * __this, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CResetCoroutineU3Ec__Iterator4_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	U3CResetCoroutineU3Ec__Iterator4_t103 * V_0 = {0};
	{
		U3CResetCoroutineU3Ec__Iterator4_t103 * L_0 = (U3CResetCoroutineU3Ec__Iterator4_t103 *)il2cpp_codegen_object_new (U3CResetCoroutineU3Ec__Iterator4_t103_il2cpp_TypeInfo_var);
		U3CResetCoroutineU3Ec__Iterator4__ctor_m332(L_0, /*hidden argument*/NULL);
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
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_PaMethodDeclarations.h"
// UnityStandardAssets.Utility.ParticleSystemDestroyer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa_0.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
struct ParticleSystemU5BU5D_t110;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentsInChildren_TisParticleSystem_t111_m683(__this, method) (( ParticleSystemU5BU5D_t110* (*) (Component_t178 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m679_gshared)(__this, method)
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CStartU3Ec__Iterator5__ctor_m342 (U3CStartU3Ec__Iterator5_t109 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m343 (U3CStartU3Ec__Iterator5_t109 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_9);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m344 (U3CStartU3Ec__Iterator5_t109 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_9);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::MoveNext()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t202_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisParticleSystem_t111_m683_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral98;
extern Il2CppCodeGenString* _stringLiteral99;
extern "C" bool U3CStartU3Ec__Iterator5_MoveNext_m345 (U3CStartU3Ec__Iterator5_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		WaitForSeconds_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Component_GetComponentsInChildren_TisParticleSystem_t111_m683_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		_stringLiteral98 = il2cpp_codegen_string_literal_from_index(98);
		_stringLiteral99 = il2cpp_codegen_string_literal_from_index(99);
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
		ParticleSystemDestroyer_t112 * L_2 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_2);
		ParticleSystemU5BU5D_t110* L_3 = Component_GetComponentsInChildren_TisParticleSystem_t111_m683(L_2, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t111_m683_MethodInfo_var);
		__this->___U3CsystemsU3E__0_0 = L_3;
		ParticleSystemU5BU5D_t110* L_4 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3CU24s_20U3E__1_1 = L_4;
		__this->___U3CU24s_21U3E__2_2 = 0;
		goto IL_0095;
	}

IL_004e:
	{
		ParticleSystemU5BU5D_t110* L_5 = (__this->___U3CU24s_20U3E__1_1);
		int32_t L_6 = (__this->___U3CU24s_21U3E__2_2);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U3CsystemU3E__3_3 = (*(ParticleSystem_t111 **)(ParticleSystem_t111 **)SZArrayLdElema(L_5, L_7, sizeof(ParticleSystem_t111 *)));
		ParticleSystemDestroyer_t112 * L_8 = (__this->___U3CU3Ef__this_10);
		ParticleSystem_t111 * L_9 = (__this->___U3CsystemU3E__3_3);
		NullCheck(L_9);
		float L_10 = ParticleSystem_get_startLifetime_m684(L_9, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t112 * L_11 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_11);
		float L_12 = (L_11->___m_MaxLifetime_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Max_m685(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->___m_MaxLifetime_4 = L_13;
		int32_t L_14 = (__this->___U3CU24s_21U3E__2_2);
		__this->___U3CU24s_21U3E__2_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_15 = (__this->___U3CU24s_21U3E__2_2);
		ParticleSystemU5BU5D_t110* L_16 = (__this->___U3CU24s_20U3E__1_1);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		float L_17 = Time_get_time_m686(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t112 * L_18 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_18);
		float L_19 = (L_18->___minDuration_2);
		ParticleSystemDestroyer_t112 * L_20 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_20);
		float L_21 = (L_20->___maxDuration_3);
		float L_22 = Random_Range_m687(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
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
		float L_23 = Time_get_time_m686(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = (__this->___U3CstopTimeU3E__4_4);
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t112 * L_25 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_25);
		bool L_26 = (L_25->___m_EarlyStop_5);
		if (L_26)
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t112 * L_27 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_27);
		String_t* L_28 = Object_get_name_m508(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral98, L_28, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		ParticleSystemU5BU5D_t110* L_30 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3CU24s_22U3E__5_5 = L_30;
		__this->___U3CU24s_23U3E__6_6 = 0;
		goto IL_0166;
	}

IL_0139:
	{
		ParticleSystemU5BU5D_t110* L_31 = (__this->___U3CU24s_22U3E__5_5);
		int32_t L_32 = (__this->___U3CU24s_23U3E__6_6);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		__this->___U3CsystemU3E__7_7 = (*(ParticleSystem_t111 **)(ParticleSystem_t111 **)SZArrayLdElema(L_31, L_33, sizeof(ParticleSystem_t111 *)));
		ParticleSystem_t111 * L_34 = (__this->___U3CsystemU3E__7_7);
		NullCheck(L_34);
		ParticleSystem_set_enableEmission_m688(L_34, 0, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___U3CU24s_23U3E__6_6);
		__this->___U3CU24s_23U3E__6_6 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0166:
	{
		int32_t L_36 = (__this->___U3CU24s_23U3E__6_6);
		ParticleSystemU5BU5D_t110* L_37 = (__this->___U3CU24s_22U3E__5_5);
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((Array_t *)L_37)->max_length))))))
		{
			goto IL_0139;
		}
	}
	{
		ParticleSystemDestroyer_t112 * L_38 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_38);
		Component_BroadcastMessage_m689(L_38, _stringLiteral99, 1, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t112 * L_39 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_39);
		float L_40 = (L_39->___m_MaxLifetime_4);
		WaitForSeconds_t202 * L_41 = (WaitForSeconds_t202 *)il2cpp_codegen_object_new (WaitForSeconds_t202_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m673(L_41, L_40, /*hidden argument*/NULL);
		__this->___U24current_9 = L_41;
		__this->___U24PC_8 = 2;
		goto IL_01c5;
	}

IL_01ac:
	{
		ParticleSystemDestroyer_t112 * L_42 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_42);
		GameObject_t11 * L_43 = Component_get_gameObject_m547(L_42, /*hidden argument*/NULL);
		Object_Destroy_m690(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
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
extern "C" void U3CStartU3Ec__Iterator5_Dispose_m346 (U3CStartU3Ec__Iterator5_t109 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_8 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator5_Reset_m347 (U3CStartU3Ec__Iterator5_t109 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.ParticleSystemDestroyer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa_0MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void ParticleSystemDestroyer__ctor_m348 (ParticleSystemDestroyer_t112 * __this, const MethodInfo* method)
{
	{
		__this->___minDuration_2 = (8.0f);
		__this->___maxDuration_3 = (10.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ParticleSystemDestroyer::Start()
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_PaMethodDeclarations.h"
extern TypeInfo* U3CStartU3Ec__Iterator5_t109_il2cpp_TypeInfo_var;
extern "C" Object_t * ParticleSystemDestroyer_Start_m349 (ParticleSystemDestroyer_t112 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__Iterator5_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartU3Ec__Iterator5_t109 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator5_t109 * L_0 = (U3CStartU3Ec__Iterator5_t109 *)il2cpp_codegen_object_new (U3CStartU3Ec__Iterator5_t109_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator5__ctor_m342(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator5_t109 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_10 = __this;
		U3CStartU3Ec__Iterator5_t109 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::Stop()
extern "C" void ParticleSystemDestroyer_Stop_m350 (ParticleSystemDestroyer_t112 * __this, const MethodInfo* method)
{
	{
		__this->___m_EarlyStop_5 = 1;
		return;
	}
}
// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl.h"
// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_PlMethodDeclarations.h"
// UnityStandardAssets.Utility.PlatformSpecificContent
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl_0.h"
// UnityStandardAssets.Utility.PlatformSpecificContent
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl_0MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* GameObjectU5BU5D_t115_il2cpp_TypeInfo_var;
extern TypeInfo* MonoBehaviourU5BU5D_t116_il2cpp_TypeInfo_var;
extern "C" void PlatformSpecificContent__ctor_m351 (PlatformSpecificContent_t114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObjectU5BU5D_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		MonoBehaviourU5BU5D_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Content_3 = ((GameObjectU5BU5D_t115*)SZArrayNew(GameObjectU5BU5D_t115_il2cpp_TypeInfo_var, 0));
		__this->___m_MonoBehaviours_4 = ((MonoBehaviourU5BU5D_t116*)SZArrayNew(MonoBehaviourU5BU5D_t116_il2cpp_TypeInfo_var, 0));
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::OnEnable()
// UnityStandardAssets.Utility.PlatformSpecificContent
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl_0MethodDeclarations.h"
extern "C" void PlatformSpecificContent_OnEnable_m352 (PlatformSpecificContent_t114 * __this, const MethodInfo* method)
{
	{
		PlatformSpecificContent_CheckEnableContent_m353(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::CheckEnableContent()
extern "C" void PlatformSpecificContent_CheckEnableContent_m353 (PlatformSpecificContent_t114 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BuildTargetGroup_2);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		PlatformSpecificContent_EnableContent_m354(__this, 1, /*hidden argument*/NULL);
		goto IL_001f;
	}

IL_0018:
	{
		PlatformSpecificContent_EnableContent_m354(__this, 0, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::EnableContent(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t41_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void PlatformSpecificContent_EnableContent_m354 (PlatformSpecificContent_t114 * __this, bool ___enabled, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Transform_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t11 * V_0 = {0};
	GameObjectU5BU5D_t115* V_1 = {0};
	int32_t V_2 = 0;
	Transform_t41 * V_3 = {0};
	Object_t * V_4 = {0};
	MonoBehaviour_t32 * V_5 = {0};
	MonoBehaviourU5BU5D_t116* V_6 = {0};
	int32_t V_7 = 0;
	Object_t * V_8 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObjectU5BU5D_t115* L_0 = (__this->___m_Content_3);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		GameObjectU5BU5D_t115* L_1 = (__this->___m_Content_3);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		GameObjectU5BU5D_t115* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GameObject_t11 **)(GameObject_t11 **)SZArrayLdElema(L_2, L_4, sizeof(GameObject_t11 *)));
		GameObject_t11 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m548(NULL /*static, unused*/, L_5, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t11 * L_7 = V_0;
		bool L_8 = ___enabled;
		NullCheck(L_7);
		GameObject_SetActive_m444(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0033:
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_2;
		GameObjectU5BU5D_t115* L_11 = V_1;
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
		Transform_t41 * L_13 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
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
			Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_15);
			V_3 = ((Transform_t41 *)CastclassClass(L_16, Transform_t41_il2cpp_TypeInfo_var));
			Transform_t41 * L_17 = V_3;
			NullCheck(L_17);
			GameObject_t11 * L_18 = Component_get_gameObject_m547(L_17, /*hidden argument*/NULL);
			bool L_19 = ___enabled;
			NullCheck(L_18);
			GameObject_SetActive_m444(L_18, L_19, /*hidden argument*/NULL);
		}

IL_0076:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_20);
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
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_4;
			V_8 = ((Object_t *)IsInst(L_22, IDisposable_t157_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_009d:
	{
		MonoBehaviourU5BU5D_t116* L_25 = (__this->___m_MonoBehaviours_4);
		NullCheck(L_25);
		if ((((int32_t)(((int32_t)(((Array_t *)L_25)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		MonoBehaviourU5BU5D_t116* L_26 = (__this->___m_MonoBehaviours_4);
		V_6 = L_26;
		V_7 = 0;
		goto IL_00d0;
	}

IL_00bb:
	{
		MonoBehaviourU5BU5D_t116* L_27 = V_6;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		int32_t L_29 = L_28;
		V_5 = (*(MonoBehaviour_t32 **)(MonoBehaviour_t32 **)SZArrayLdElema(L_27, L_29, sizeof(MonoBehaviour_t32 *)));
		MonoBehaviour_t32 * L_30 = V_5;
		bool L_31 = ___enabled;
		NullCheck(L_30);
		Behaviour_set_enabled_m601(L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00d0:
	{
		int32_t L_33 = V_7;
		MonoBehaviourU5BU5D_t116* L_34 = V_6;
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
// UnityStandardAssets.Utility.SimpleActivatorMenu
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_SiMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void SimpleActivatorMenu__ctor_m355 (SimpleActivatorMenu_t117 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::OnEnable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
extern "C" void SimpleActivatorMenu_OnEnable_m356 (SimpleActivatorMenu_t117 * __this, const MethodInfo* method)
{
	{
		__this->___m_CurrentActiveObject_4 = 0;
		GUIText_t98 * L_0 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t115* L_1 = (__this->___objects_3);
		int32_t L_2 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(GameObject_t11 **)(GameObject_t11 **)SZArrayLdElema(L_1, L_3, sizeof(GameObject_t11 *))));
		String_t* L_4 = Object_get_name_m508((*(GameObject_t11 **)(GameObject_t11 **)SZArrayLdElema(L_1, L_3, sizeof(GameObject_t11 *))), /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIText_set_text_m670(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::NextCamera()
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void SimpleActivatorMenu_NextCamera_m357 (SimpleActivatorMenu_t117 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___m_CurrentActiveObject_4);
		GameObjectU5BU5D_t115* L_1 = (__this->___objects_3);
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
		GameObjectU5BU5D_t115* L_3 = (__this->___objects_3);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((*(GameObject_t11 **)(GameObject_t11 **)SZArrayLdElema(L_3, L_5, sizeof(GameObject_t11 *))));
		GameObject_SetActive_m444((*(GameObject_t11 **)(GameObject_t11 **)SZArrayLdElema(L_3, L_5, sizeof(GameObject_t11 *))), ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_9 = V_1;
		GameObjectU5BU5D_t115* L_10 = (__this->___objects_3);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_11 = V_0;
		__this->___m_CurrentActiveObject_4 = L_11;
		GUIText_t98 * L_12 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t115* L_13 = (__this->___objects_3);
		int32_t L_14 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((*(GameObject_t11 **)(GameObject_t11 **)SZArrayLdElema(L_13, L_15, sizeof(GameObject_t11 *))));
		String_t* L_16 = Object_get_name_m508((*(GameObject_t11 **)(GameObject_t11 **)SZArrayLdElema(L_13, L_15, sizeof(GameObject_t11 *))), /*hidden argument*/NULL);
		NullCheck(L_12);
		GUIText_set_text_m670(L_12, L_16, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.SimpleMouseRotator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si_0.h"
// UnityStandardAssets.Utility.SimpleMouseRotator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si_0MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::.ctor()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void SimpleMouseRotator__ctor_m358 (SimpleMouseRotator_t118 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = {0};
		Vector3__ctor_m691(&L_0, (70.0f), (70.0f), /*hidden argument*/NULL);
		Vector2_t44  L_1 = Vector2_op_Implicit_m544(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___rotationRange_2 = L_1;
		__this->___rotationSpeed_3 = (10.0f);
		__this->___dampingTime_4 = (0.2f);
		__this->___autoZeroVerticalOnMobile_5 = 1;
		__this->___relative_7 = 1;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void SimpleMouseRotator_Start_m359 (SimpleMouseRotator_t118 * __this, const MethodInfo* method)
{
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t106  L_1 = Transform_get_localRotation_m692(L_0, /*hidden argument*/NULL);
		__this->___m_OriginalRotation_11 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Update()
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern TypeInfo* CrossPlatformInputManager_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t177_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral100;
extern Il2CppCodeGenString* _stringLiteral101;
extern "C" void SimpleMouseRotator_Update_m360 (SimpleMouseRotator_t118 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Input_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		_stringLiteral100 = il2cpp_codegen_string_literal_from_index(100);
		_stringLiteral101 = il2cpp_codegen_string_literal_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t42  V_2 = {0};
	Vector3_t42  V_3 = {0};
	{
		Transform_t41 * L_0 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_1 = (__this->___m_OriginalRotation_11);
		NullCheck(L_0);
		Transform_set_localRotation_m693(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___relative_7);
		if (!L_2)
		{
			goto IL_0293;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t56_il2cpp_TypeInfo_var);
		float L_3 = CrossPlatformInputManager_GetAxis_m180(NULL /*static, unused*/, _stringLiteral100, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = CrossPlatformInputManager_GetAxis_m180(NULL /*static, unused*/, _stringLiteral101, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t42 * L_5 = &(__this->___m_TargetAngles_8);
		float L_6 = (L_5->___y_2);
		if ((!(((float)L_6) > ((float)(180.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		Vector3_t42 * L_7 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_8 = L_7;
		float L_9 = (L_8->___y_2);
		L_8->___y_2 = ((float)((float)L_9-(float)(360.0f)));
		Vector3_t42 * L_10 = &(__this->___m_FollowAngles_9);
		Vector3_t42 * L_11 = L_10;
		float L_12 = (L_11->___y_2);
		L_11->___y_2 = ((float)((float)L_12-(float)(360.0f)));
	}

IL_0075:
	{
		Vector3_t42 * L_13 = &(__this->___m_TargetAngles_8);
		float L_14 = (L_13->___x_1);
		if ((!(((float)L_14) > ((float)(180.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_t42 * L_15 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_16 = L_15;
		float L_17 = (L_16->___x_1);
		L_16->___x_1 = ((float)((float)L_17-(float)(360.0f)));
		Vector3_t42 * L_18 = &(__this->___m_FollowAngles_9);
		Vector3_t42 * L_19 = L_18;
		float L_20 = (L_19->___x_1);
		L_19->___x_1 = ((float)((float)L_20-(float)(360.0f)));
	}

IL_00b8:
	{
		Vector3_t42 * L_21 = &(__this->___m_TargetAngles_8);
		float L_22 = (L_21->___y_2);
		if ((!(((float)L_22) < ((float)(-180.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		Vector3_t42 * L_23 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_24 = L_23;
		float L_25 = (L_24->___y_2);
		L_24->___y_2 = ((float)((float)L_25+(float)(360.0f)));
		Vector3_t42 * L_26 = &(__this->___m_FollowAngles_9);
		Vector3_t42 * L_27 = L_26;
		float L_28 = (L_27->___y_2);
		L_27->___y_2 = ((float)((float)L_28+(float)(360.0f)));
	}

IL_00fb:
	{
		Vector3_t42 * L_29 = &(__this->___m_TargetAngles_8);
		float L_30 = (L_29->___x_1);
		if ((!(((float)L_30) < ((float)(-180.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Vector3_t42 * L_31 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_32 = L_31;
		float L_33 = (L_32->___x_1);
		L_32->___x_1 = ((float)((float)L_33+(float)(360.0f)));
		Vector3_t42 * L_34 = &(__this->___m_FollowAngles_9);
		Vector3_t42 * L_35 = L_34;
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
		Vector3_t42 * L_38 = &(__this->___m_TargetAngles_8);
		Vector2_t44 * L_39 = &(__this->___rotationRange_2);
		float L_40 = (L_39->___y_2);
		Vector2_t44 * L_41 = &(__this->___rotationRange_2);
		float L_42 = (L_41->___y_2);
		float L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_44 = Mathf_Lerp_m535(NULL /*static, unused*/, ((float)((float)((-L_40))*(float)(0.5f))), ((float)((float)L_42*(float)(0.5f))), ((float)((float)((float)((float)L_43*(float)(0.5f)))+(float)(0.5f))), /*hidden argument*/NULL);
		L_38->___y_2 = L_44;
		goto IL_01a8;
	}

IL_018e:
	{
		Vector3_t42 * L_45 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_46 = L_45;
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
		Vector3_t42 * L_51 = &(__this->___m_TargetAngles_8);
		Vector2_t44 * L_52 = &(__this->___rotationRange_2);
		float L_53 = (L_52->___x_1);
		Vector2_t44 * L_54 = &(__this->___rotationRange_2);
		float L_55 = (L_54->___x_1);
		float L_56 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_57 = Mathf_Lerp_m535(NULL /*static, unused*/, ((float)((float)((-L_53))*(float)(0.5f))), ((float)((float)L_55*(float)(0.5f))), ((float)((float)((float)((float)L_56*(float)(0.5f)))+(float)(0.5f))), /*hidden argument*/NULL);
		L_51->___x_1 = L_57;
		goto IL_0212;
	}

IL_01f8:
	{
		Vector3_t42 * L_58 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_59 = L_58;
		float L_60 = (L_59->___x_1);
		float L_61 = V_1;
		float L_62 = (__this->___rotationSpeed_3);
		L_59->___x_1 = ((float)((float)L_60+(float)((float)((float)L_61*(float)L_62))));
	}

IL_0212:
	{
		Vector3_t42 * L_63 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_64 = &(__this->___m_TargetAngles_8);
		float L_65 = (L_64->___y_2);
		Vector2_t44 * L_66 = &(__this->___rotationRange_2);
		float L_67 = (L_66->___y_2);
		Vector2_t44 * L_68 = &(__this->___rotationRange_2);
		float L_69 = (L_68->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_70 = Mathf_Clamp_m536(NULL /*static, unused*/, L_65, ((float)((float)((-L_67))*(float)(0.5f))), ((float)((float)L_69*(float)(0.5f))), /*hidden argument*/NULL);
		L_63->___y_2 = L_70;
		Vector3_t42 * L_71 = &(__this->___m_TargetAngles_8);
		Vector3_t42 * L_72 = &(__this->___m_TargetAngles_8);
		float L_73 = (L_72->___x_1);
		Vector2_t44 * L_74 = &(__this->___rotationRange_2);
		float L_75 = (L_74->___x_1);
		Vector2_t44 * L_76 = &(__this->___rotationRange_2);
		float L_77 = (L_76->___x_1);
		float L_78 = Mathf_Clamp_m536(NULL /*static, unused*/, L_73, ((float)((float)((-L_75))*(float)(0.5f))), ((float)((float)L_77*(float)(0.5f))), /*hidden argument*/NULL);
		L_71->___x_1 = L_78;
		goto IL_0325;
	}

IL_0293:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t177_il2cpp_TypeInfo_var);
		Vector3_t42  L_79 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_79;
		float L_80 = ((&V_2)->___x_1);
		V_0 = L_80;
		Vector3_t42  L_81 = Input_get_mousePosition_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_81;
		float L_82 = ((&V_3)->___y_2);
		V_1 = L_82;
		Vector3_t42 * L_83 = &(__this->___m_TargetAngles_8);
		Vector2_t44 * L_84 = &(__this->___rotationRange_2);
		float L_85 = (L_84->___y_2);
		Vector2_t44 * L_86 = &(__this->___rotationRange_2);
		float L_87 = (L_86->___y_2);
		float L_88 = V_0;
		int32_t L_89 = Screen_get_width_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_90 = Mathf_Lerp_m535(NULL /*static, unused*/, ((float)((float)((-L_85))*(float)(0.5f))), ((float)((float)L_87*(float)(0.5f))), ((float)((float)L_88/(float)(((float)L_89)))), /*hidden argument*/NULL);
		L_83->___y_2 = L_90;
		Vector3_t42 * L_91 = &(__this->___m_TargetAngles_8);
		Vector2_t44 * L_92 = &(__this->___rotationRange_2);
		float L_93 = (L_92->___x_1);
		Vector2_t44 * L_94 = &(__this->___rotationRange_2);
		float L_95 = (L_94->___x_1);
		float L_96 = V_1;
		int32_t L_97 = Screen_get_height_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_98 = Mathf_Lerp_m535(NULL /*static, unused*/, ((float)((float)((-L_93))*(float)(0.5f))), ((float)((float)L_95*(float)(0.5f))), ((float)((float)L_96/(float)(((float)L_97)))), /*hidden argument*/NULL);
		L_91->___x_1 = L_98;
	}

IL_0325:
	{
		Vector3_t42  L_99 = (__this->___m_FollowAngles_9);
		Vector3_t42  L_100 = (__this->___m_TargetAngles_8);
		Vector3_t42 * L_101 = &(__this->___m_FollowVelocity_10);
		float L_102 = (__this->___dampingTime_4);
		Vector3_t42  L_103 = Vector3_SmoothDamp_m531(NULL /*static, unused*/, L_99, L_100, L_101, L_102, /*hidden argument*/NULL);
		__this->___m_FollowAngles_9 = L_103;
		Transform_t41 * L_104 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Quaternion_t106  L_105 = (__this->___m_OriginalRotation_11);
		Vector3_t42 * L_106 = &(__this->___m_FollowAngles_9);
		float L_107 = (L_106->___x_1);
		Vector3_t42 * L_108 = &(__this->___m_FollowAngles_9);
		float L_109 = (L_108->___y_2);
		Quaternion_t106  L_110 = Quaternion_Euler_m694(NULL /*static, unused*/, ((-L_107)), L_109, (0.0f), /*hidden argument*/NULL);
		Quaternion_t106  L_111 = Quaternion_op_Multiply_m695(NULL /*static, unused*/, L_105, L_110, /*hidden argument*/NULL);
		NullCheck(L_104);
		Transform_set_localRotation_m693(L_104, L_111, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.SmoothFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Sm.h"
// UnityStandardAssets.Utility.SmoothFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_SmMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.SmoothFollow::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void SmoothFollow__ctor_m361 (SmoothFollow_t119 * __this, const MethodInfo* method)
{
	{
		__this->___distance_3 = (10.0f);
		__this->___height_4 = (5.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::Start()
extern "C" void SmoothFollow_Start_m362 (SmoothFollow_t119 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::LateUpdate()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void SmoothFollow_LateUpdate_m363 (SmoothFollow_t119 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t106  V_4 = {0};
	Vector3_t42  V_5 = {0};
	Vector3_t42  V_6 = {0};
	Vector3_t42  V_7 = {0};
	Vector3_t42  V_8 = {0};
	Vector3_t42  V_9 = {0};
	Vector3_t42  V_10 = {0};
	{
		Transform_t41 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Implicit_m554(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		Transform_t41 * L_2 = (__this->___target_2);
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_eulerAngles_m696(L_2, /*hidden argument*/NULL);
		V_5 = L_3;
		float L_4 = ((&V_5)->___y_2);
		V_0 = L_4;
		Transform_t41 * L_5 = (__this->___target_2);
		NullCheck(L_5);
		Vector3_t42  L_6 = Transform_get_position_m518(L_5, /*hidden argument*/NULL);
		V_6 = L_6;
		float L_7 = ((&V_6)->___y_2);
		float L_8 = (__this->___height_4);
		V_1 = ((float)((float)L_7+(float)L_8));
		Transform_t41 * L_9 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t42  L_10 = Transform_get_eulerAngles_m696(L_9, /*hidden argument*/NULL);
		V_7 = L_10;
		float L_11 = ((&V_7)->___y_2);
		V_2 = L_11;
		Transform_t41 * L_12 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t42  L_13 = Transform_get_position_m518(L_12, /*hidden argument*/NULL);
		V_8 = L_13;
		float L_14 = ((&V_8)->___y_2);
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = V_0;
		float L_17 = (__this->___rotationDamping_5);
		float L_18 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_19 = Mathf_LerpAngle_m697(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = (__this->___heightDamping_6);
		float L_23 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = Mathf_Lerp_m535(NULL /*static, unused*/, L_20, L_21, ((float)((float)L_22*(float)L_23)), /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = V_2;
		Quaternion_t106  L_26 = Quaternion_Euler_m694(NULL /*static, unused*/, (0.0f), L_25, (0.0f), /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t41 * L_27 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Transform_t41 * L_28 = (__this->___target_2);
		NullCheck(L_28);
		Vector3_t42  L_29 = Transform_get_position_m518(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_m532(L_27, L_29, /*hidden argument*/NULL);
		Transform_t41 * L_30 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Transform_t41 * L_31 = L_30;
		NullCheck(L_31);
		Vector3_t42  L_32 = Transform_get_position_m518(L_31, /*hidden argument*/NULL);
		Quaternion_t106  L_33 = V_4;
		Vector3_t42  L_34 = Vector3_get_forward_m530(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t42  L_35 = Quaternion_op_Multiply_m698(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = (__this->___distance_3);
		Vector3_t42  L_37 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t42  L_38 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_m532(L_31, L_38, /*hidden argument*/NULL);
		Transform_t41 * L_39 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Transform_t41 * L_40 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t42  L_41 = Transform_get_position_m518(L_40, /*hidden argument*/NULL);
		V_9 = L_41;
		float L_42 = ((&V_9)->___x_1);
		float L_43 = V_3;
		Transform_t41 * L_44 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t42  L_45 = Transform_get_position_m518(L_44, /*hidden argument*/NULL);
		V_10 = L_45;
		float L_46 = ((&V_10)->___z_3);
		Vector3_t42  L_47 = {0};
		Vector3__ctor_m537(&L_47, L_42, L_43, L_46, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_position_m532(L_39, L_47, /*hidden argument*/NULL);
		Transform_t41 * L_48 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		Transform_t41 * L_49 = (__this->___target_2);
		NullCheck(L_48);
		Transform_LookAt_m699(L_48, L_49, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/Action
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti.h"
// UnityStandardAssets.Utility.TimedObjectActivator/Action
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_TiMethodDeclarations.h"
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_0.h"
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_0MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entry::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Entry__ctor_m364 (Entry_t121 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_1.h"
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_1MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Entries__ctor_m365 (Entries_t122 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_2.h"
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_2MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CActivateU3Ec__Iterator6__ctor_m366 (U3CActivateU3Ec__Iterator6_t124 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CActivateU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m367 (U3CActivateU3Ec__Iterator6_t124 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CActivateU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m368 (U3CActivateU3Ec__Iterator6_t124 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::MoveNext()
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* WaitForSeconds_t202_il2cpp_TypeInfo_var;
extern "C" bool U3CActivateU3Ec__Iterator6_MoveNext_m369 (U3CActivateU3Ec__Iterator6_t124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
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
		Entry_t121 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t202 * L_4 = (WaitForSeconds_t202 *)il2cpp_codegen_object_new (WaitForSeconds_t202_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m673(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_2 = L_4;
		__this->___U24PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t121 * L_5 = (__this->___entry_0);
		NullCheck(L_5);
		GameObject_t11 * L_6 = (L_5->___target_0);
		NullCheck(L_6);
		GameObject_SetActive_m444(L_6, 1, /*hidden argument*/NULL);
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
extern "C" void U3CActivateU3Ec__Iterator6_Dispose_m370 (U3CActivateU3Ec__Iterator6_t124 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CActivateU3Ec__Iterator6_Reset_m371 (U3CActivateU3Ec__Iterator6_t124 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_3.h"
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_3MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CDeactivateU3Ec__Iterator7__ctor_m372 (U3CDeactivateU3Ec__Iterator7_t125 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDeactivateU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m373 (U3CDeactivateU3Ec__Iterator7_t125 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDeactivateU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m374 (U3CDeactivateU3Ec__Iterator7_t125 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::MoveNext()
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* WaitForSeconds_t202_il2cpp_TypeInfo_var;
extern "C" bool U3CDeactivateU3Ec__Iterator7_MoveNext_m375 (U3CDeactivateU3Ec__Iterator7_t125 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
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
		Entry_t121 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t202 * L_4 = (WaitForSeconds_t202 *)il2cpp_codegen_object_new (WaitForSeconds_t202_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m673(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_2 = L_4;
		__this->___U24PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t121 * L_5 = (__this->___entry_0);
		NullCheck(L_5);
		GameObject_t11 * L_6 = (L_5->___target_0);
		NullCheck(L_6);
		GameObject_SetActive_m444(L_6, 0, /*hidden argument*/NULL);
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
extern "C" void U3CDeactivateU3Ec__Iterator7_Dispose_m376 (U3CDeactivateU3Ec__Iterator7_t125 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CDeactivateU3Ec__Iterator7_Reset_m377 (U3CDeactivateU3Ec__Iterator7_t125 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_4.h"
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_4MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CReloadLevelU3Ec__Iterator8__ctor_m378 (U3CReloadLevelU3Ec__Iterator8_t126 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CReloadLevelU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m379 (U3CReloadLevelU3Ec__Iterator8_t126 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CReloadLevelU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m380 (U3CReloadLevelU3Ec__Iterator8_t126 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::MoveNext()
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern TypeInfo* WaitForSeconds_t202_il2cpp_TypeInfo_var;
extern "C" bool U3CReloadLevelU3Ec__Iterator8_MoveNext_m381 (U3CReloadLevelU3Ec__Iterator8_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
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
		Entry_t121 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t202 * L_4 = (WaitForSeconds_t202 *)il2cpp_codegen_object_new (WaitForSeconds_t202_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m673(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_2 = L_4;
		__this->___U24PC_1 = 1;
		goto IL_0056;
	}

IL_0043:
	{
		int32_t L_5 = Application_get_loadedLevel_m700(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m701(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
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
extern "C" void U3CReloadLevelU3Ec__Iterator8_Dispose_m382 (U3CReloadLevelU3Ec__Iterator8_t126 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void U3CReloadLevelU3Ec__Iterator8_Reset_m383 (U3CReloadLevelU3Ec__Iterator8_t126 * __this, const MethodInfo* method)
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
// UnityStandardAssets.Utility.TimedObjectActivator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_5.h"
// UnityStandardAssets.Utility.TimedObjectActivator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_5MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_1MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* Entries_t122_il2cpp_TypeInfo_var;
extern "C" void TimedObjectActivator__ctor_m384 (TimedObjectActivator_t127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Entries_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	{
		Entries_t122 * L_0 = (Entries_t122 *)il2cpp_codegen_object_new (Entries_t122_il2cpp_TypeInfo_var);
		Entries__ctor_m365(L_0, /*hidden argument*/NULL);
		__this->___entries_2 = L_0;
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
// UnityStandardAssets.Utility.TimedObjectActivator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_5MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void TimedObjectActivator_Awake_m385 (TimedObjectActivator_t127 * __this, const MethodInfo* method)
{
	Entry_t121 * V_0 = {0};
	EntryU5BU5D_t123* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		Entries_t122 * L_0 = (__this->___entries_2);
		NullCheck(L_0);
		EntryU5BU5D_t123* L_1 = (L_0->___entries_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_008c;
	}

IL_0013:
	{
		EntryU5BU5D_t123* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Entry_t121 **)(Entry_t121 **)SZArrayLdElema(L_2, L_4, sizeof(Entry_t121 *)));
		Entry_t121 * L_5 = V_0;
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
		Entry_t121 * L_8 = V_0;
		Object_t * L_9 = TimedObjectActivator_Activate_m386(__this, L_8, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m682(__this, L_9, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_004c:
	{
		Entry_t121 * L_10 = V_0;
		Object_t * L_11 = TimedObjectActivator_Deactivate_m387(__this, L_10, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m682(__this, L_11, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_005f:
	{
		Entry_t121 * L_12 = V_0;
		NullCheck(L_12);
		GameObject_t11 * L_13 = (L_12->___target_0);
		Entry_t121 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = (L_14->___delay_2);
		Object_Destroy_m702(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0075:
	{
		Entry_t121 * L_16 = V_0;
		Object_t * L_17 = TimedObjectActivator_ReloadLevel_m388(__this, L_16, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m682(__this, L_17, /*hidden argument*/NULL);
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
		EntryU5BU5D_t123* L_20 = V_1;
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
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_0.h"
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_2MethodDeclarations.h"
extern TypeInfo* U3CActivateU3Ec__Iterator6_t124_il2cpp_TypeInfo_var;
extern "C" Object_t * TimedObjectActivator_Activate_m386 (TimedObjectActivator_t127 * __this, Entry_t121 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CActivateU3Ec__Iterator6_t124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	U3CActivateU3Ec__Iterator6_t124 * V_0 = {0};
	{
		U3CActivateU3Ec__Iterator6_t124 * L_0 = (U3CActivateU3Ec__Iterator6_t124 *)il2cpp_codegen_object_new (U3CActivateU3Ec__Iterator6_t124_il2cpp_TypeInfo_var);
		U3CActivateU3Ec__Iterator6__ctor_m366(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CActivateU3Ec__Iterator6_t124 * L_1 = V_0;
		Entry_t121 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CActivateU3Ec__Iterator6_t124 * L_3 = V_0;
		Entry_t121 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3CU24U3Eentry_3 = L_4;
		U3CActivateU3Ec__Iterator6_t124 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_3MethodDeclarations.h"
extern TypeInfo* U3CDeactivateU3Ec__Iterator7_t125_il2cpp_TypeInfo_var;
extern "C" Object_t * TimedObjectActivator_Deactivate_m387 (TimedObjectActivator_t127 * __this, Entry_t121 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDeactivateU3Ec__Iterator7_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	U3CDeactivateU3Ec__Iterator7_t125 * V_0 = {0};
	{
		U3CDeactivateU3Ec__Iterator7_t125 * L_0 = (U3CDeactivateU3Ec__Iterator7_t125 *)il2cpp_codegen_object_new (U3CDeactivateU3Ec__Iterator7_t125_il2cpp_TypeInfo_var);
		U3CDeactivateU3Ec__Iterator7__ctor_m372(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDeactivateU3Ec__Iterator7_t125 * L_1 = V_0;
		Entry_t121 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CDeactivateU3Ec__Iterator7_t125 * L_3 = V_0;
		Entry_t121 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3CU24U3Eentry_3 = L_4;
		U3CDeactivateU3Ec__Iterator7_t125 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_4MethodDeclarations.h"
extern TypeInfo* U3CReloadLevelU3Ec__Iterator8_t126_il2cpp_TypeInfo_var;
extern "C" Object_t * TimedObjectActivator_ReloadLevel_m388 (TimedObjectActivator_t127 * __this, Entry_t121 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CReloadLevelU3Ec__Iterator8_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	U3CReloadLevelU3Ec__Iterator8_t126 * V_0 = {0};
	{
		U3CReloadLevelU3Ec__Iterator8_t126 * L_0 = (U3CReloadLevelU3Ec__Iterator8_t126 *)il2cpp_codegen_object_new (U3CReloadLevelU3Ec__Iterator8_t126_il2cpp_TypeInfo_var);
		U3CReloadLevelU3Ec__Iterator8__ctor_m378(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CReloadLevelU3Ec__Iterator8_t126 * L_1 = V_0;
		Entry_t121 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CReloadLevelU3Ec__Iterator8_t126 * L_3 = V_0;
		Entry_t121 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3CU24U3Eentry_3 = L_4;
		U3CReloadLevelU3Ec__Iterator8_t126 * L_5 = V_0;
		return L_5;
	}
}
// UnityStandardAssets.Utility.TimedObjectDestructor
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_6.h"
// UnityStandardAssets.Utility.TimedObjectDestructor
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_6MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void TimedObjectDestructor__ctor_m389 (TimedObjectDestructor_t128 * __this, const MethodInfo* method)
{
	{
		__this->___m_TimeOut_2 = (1.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::Awake()
extern Il2CppCodeGenString* _stringLiteral102;
extern "C" void TimedObjectDestructor_Awake_m390 (TimedObjectDestructor_t128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral102 = il2cpp_codegen_string_literal_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___m_TimeOut_2);
		MonoBehaviour_Invoke_m703(__this, _stringLiteral102, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::DestroyNow()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void TimedObjectDestructor_DestroyNow_m391 (TimedObjectDestructor_t128 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_DetachChildren_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t41 * L_1 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_DetachChildren_m704(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		GameObject_t11 * L_2 = Component_get_gameObject_m547(__this, /*hidden argument*/NULL);
		Object_DestroyObject_m600(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa.h"
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_WaMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* TransformU5BU5D_t104_il2cpp_TypeInfo_var;
extern "C" void WaypointList__ctor_m392 (WaypointList_t129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___items_1 = ((TransformU5BU5D_t104*)SZArrayNew(TransformU5BU5D_t104_il2cpp_TypeInfo_var, 0));
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void RoutePoint__ctor_m393 (RoutePoint_t131 * __this, Vector3_t42  ___position, Vector3_t42  ___direction, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___position;
		__this->___position_0 = L_0;
		Vector3_t42  L_1 = ___direction;
		__this->___direction_1 = L_1;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1.h"
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1MethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_WaMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* WaypointList_t129_il2cpp_TypeInfo_var;
extern "C" void WaypointCircuit__ctor_m394 (WaypointCircuit_t130 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaypointList_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		WaypointList_t129 * L_0 = (WaypointList_t129 *)il2cpp_codegen_object_new (WaypointList_t129_il2cpp_TypeInfo_var);
		WaypointList__ctor_m392(L_0, /*hidden argument*/NULL);
		__this->___waypointList_2 = L_0;
		__this->___smoothRoute_3 = 1;
		__this->___editorVisualisationSubsteps_7 = (100.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" float WaypointCircuit_get_Length_m395 (WaypointCircuit_t130 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CLengthU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void WaypointCircuit_set_Length_m396 (WaypointCircuit_t130 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CLengthU3Ek__BackingField_17 = L_0;
		return;
	}
}
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" TransformU5BU5D_t104* WaypointCircuit_get_Waypoints_m397 (WaypointCircuit_t130 * __this, const MethodInfo* method)
{
	{
		WaypointList_t129 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		TransformU5BU5D_t104* L_1 = (L_0->___items_1);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1MethodDeclarations.h"
extern "C" void WaypointCircuit_Awake_m398 (WaypointCircuit_t130 * __this, const MethodInfo* method)
{
	{
		TransformU5BU5D_t104* L_0 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		WaypointCircuit_CachePositionsAndDistances_m402(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		TransformU5BU5D_t104* L_1 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_1)->max_length)));
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0MethodDeclarations.h"
extern "C" RoutePoint_t131  WaypointCircuit_GetRoutePoint_m399 (WaypointCircuit_t130 * __this, float ___dist, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	Vector3_t42  V_2 = {0};
	{
		float L_0 = ___dist;
		Vector3_t42  L_1 = WaypointCircuit_GetRoutePosition_m400(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ___dist;
		Vector3_t42  L_3 = WaypointCircuit_GetRoutePosition_m400(__this, ((float)((float)L_2+(float)(0.1f))), /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t42  L_4 = V_1;
		Vector3_t42  L_5 = V_0;
		Vector3_t42  L_6 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector3_t42  L_7 = V_0;
		Vector3_t42  L_8 = Vector3_get_normalized_m587((&V_2), /*hidden argument*/NULL);
		RoutePoint_t131  L_9 = {0};
		RoutePoint__ctor_m393(&L_9, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" Vector3_t42  WaypointCircuit_GetRoutePosition_m400 (WaypointCircuit_t130 * __this, float ___dist, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = WaypointCircuit_get_Length_m395(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		SingleU5BU5D_t133* L_1 = (__this->___distances_6);
		SingleU5BU5D_t133* L_2 = (__this->___distances_6);
		NullCheck(L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)1));
		WaypointCircuit_set_Length_m396(__this, (*(float*)(float*)SZArrayLdElema(L_1, L_3, sizeof(float))), /*hidden argument*/NULL);
	}

IL_0029:
	{
		float L_4 = ___dist;
		float L_5 = WaypointCircuit_get_Length_m395(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Repeat_m705(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
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
		SingleU5BU5D_t133* L_8 = (__this->___distances_6);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		float L_11 = ___dist;
		if ((((float)(*(float*)(float*)SZArrayLdElema(L_8, L_10, sizeof(float)))) < ((float)L_11)))
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
		SingleU5BU5D_t133* L_16 = (__this->___distances_6);
		int32_t L_17 = (__this->___p1n_9);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		SingleU5BU5D_t133* L_19 = (__this->___distances_6);
		int32_t L_20 = (__this->___p2n_10);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		float L_22 = ___dist;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_23 = Mathf_InverseLerp_m585(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_16, L_18, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_19, L_21, sizeof(float))), L_22, /*hidden argument*/NULL);
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
		Vector3U5BU5D_t132* L_32 = (__this->___points_5);
		int32_t L_33 = (__this->___p0n_8);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		__this->___P0_13 = (*(Vector3_t42 *)((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_32, L_33, sizeof(Vector3_t42 ))));
		Vector3U5BU5D_t132* L_34 = (__this->___points_5);
		int32_t L_35 = (__this->___p1n_9);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		__this->___P1_14 = (*(Vector3_t42 *)((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_34, L_35, sizeof(Vector3_t42 ))));
		Vector3U5BU5D_t132* L_36 = (__this->___points_5);
		int32_t L_37 = (__this->___p2n_10);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		__this->___P2_15 = (*(Vector3_t42 *)((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_36, L_37, sizeof(Vector3_t42 ))));
		Vector3U5BU5D_t132* L_38 = (__this->___points_5);
		int32_t L_39 = (__this->___p3n_11);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		__this->___P3_16 = (*(Vector3_t42 *)((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_38, L_39, sizeof(Vector3_t42 ))));
		Vector3_t42  L_40 = (__this->___P0_13);
		Vector3_t42  L_41 = (__this->___P1_14);
		Vector3_t42  L_42 = (__this->___P2_15);
		Vector3_t42  L_43 = (__this->___P3_16);
		float L_44 = (__this->___i_12);
		Vector3_t42  L_45 = WaypointCircuit_CatmullRom_m401(__this, L_40, L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
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
		Vector3U5BU5D_t132* L_50 = (__this->___points_5);
		int32_t L_51 = (__this->___p1n_9);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		Vector3U5BU5D_t132* L_52 = (__this->___points_5);
		int32_t L_53 = (__this->___p2n_10);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		float L_54 = (__this->___i_12);
		Vector3_t42  L_55 = Vector3_Lerp_m706(NULL /*static, unused*/, (*(Vector3_t42 *)((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_50, L_51, sizeof(Vector3_t42 )))), (*(Vector3_t42 *)((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_52, L_53, sizeof(Vector3_t42 )))), L_54, /*hidden argument*/NULL);
		return L_55;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t42  WaypointCircuit_CatmullRom_m401 (WaypointCircuit_t130 * __this, Vector3_t42  ___p0, Vector3_t42  ___p1, Vector3_t42  ___p2, Vector3_t42  ___p3, float ___i, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = ___p1;
		Vector3_t42  L_1 = Vector3_op_Multiply_m523(NULL /*static, unused*/, (2.0f), L_0, /*hidden argument*/NULL);
		Vector3_t42  L_2 = ___p0;
		Vector3_t42  L_3 = Vector3_op_UnaryNegation_m659(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector3_t42  L_4 = ___p2;
		Vector3_t42  L_5 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ___i;
		Vector3_t42  L_7 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t42  L_8 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_1, L_7, /*hidden argument*/NULL);
		Vector3_t42  L_9 = ___p0;
		Vector3_t42  L_10 = Vector3_op_Multiply_m523(NULL /*static, unused*/, (2.0f), L_9, /*hidden argument*/NULL);
		Vector3_t42  L_11 = ___p1;
		Vector3_t42  L_12 = Vector3_op_Multiply_m523(NULL /*static, unused*/, (5.0f), L_11, /*hidden argument*/NULL);
		Vector3_t42  L_13 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		Vector3_t42  L_14 = ___p2;
		Vector3_t42  L_15 = Vector3_op_Multiply_m523(NULL /*static, unused*/, (4.0f), L_14, /*hidden argument*/NULL);
		Vector3_t42  L_16 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t42  L_17 = ___p3;
		Vector3_t42  L_18 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = ___i;
		Vector3_t42  L_20 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		float L_21 = ___i;
		Vector3_t42  L_22 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Vector3_t42  L_23 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_8, L_22, /*hidden argument*/NULL);
		Vector3_t42  L_24 = ___p0;
		Vector3_t42  L_25 = Vector3_op_UnaryNegation_m659(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Vector3_t42  L_26 = ___p1;
		Vector3_t42  L_27 = Vector3_op_Multiply_m523(NULL /*static, unused*/, (3.0f), L_26, /*hidden argument*/NULL);
		Vector3_t42  L_28 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		Vector3_t42  L_29 = ___p2;
		Vector3_t42  L_30 = Vector3_op_Multiply_m523(NULL /*static, unused*/, (3.0f), L_29, /*hidden argument*/NULL);
		Vector3_t42  L_31 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		Vector3_t42  L_32 = ___p3;
		Vector3_t42  L_33 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		float L_34 = ___i;
		Vector3_t42  L_35 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = ___i;
		Vector3_t42  L_37 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		float L_38 = ___i;
		Vector3_t42  L_39 = Vector3_op_Multiply_m525(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		Vector3_t42  L_40 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_23, L_39, /*hidden argument*/NULL);
		Vector3_t42  L_41 = Vector3_op_Multiply_m523(NULL /*static, unused*/, (0.5f), L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* Vector3U5BU5D_t132_il2cpp_TypeInfo_var;
extern TypeInfo* SingleU5BU5D_t133_il2cpp_TypeInfo_var;
extern "C" void WaypointCircuit_CachePositionsAndDistances_m402 (WaypointCircuit_t130 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		SingleU5BU5D_t133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Transform_t41 * V_2 = {0};
	Transform_t41 * V_3 = {0};
	Vector3_t42  V_4 = {0};
	Vector3_t42  V_5 = {0};
	Vector3_t42  V_6 = {0};
	{
		TransformU5BU5D_t104* L_0 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		__this->___points_5 = ((Vector3U5BU5D_t132*)SZArrayNew(Vector3U5BU5D_t132_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))+(int32_t)1))));
		TransformU5BU5D_t104* L_1 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		__this->___distances_6 = ((SingleU5BU5D_t133*)SZArrayNew(SingleU5BU5D_t133_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))+(int32_t)1))));
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00ce;
	}

IL_0037:
	{
		TransformU5BU5D_t104* L_2 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		TransformU5BU5D_t104* L_4 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))));
		int32_t L_5 = ((int32_t)((int32_t)L_3%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		V_2 = (*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_2, L_5, sizeof(Transform_t41 *)));
		TransformU5BU5D_t104* L_6 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		TransformU5BU5D_t104* L_8 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_3 = (*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_6, L_9, sizeof(Transform_t41 *)));
		Transform_t41 * L_10 = V_2;
		bool L_11 = Object_op_Inequality_m548(NULL /*static, unused*/, L_10, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t41 * L_12 = V_3;
		bool L_13 = Object_op_Inequality_m548(NULL /*static, unused*/, L_12, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t41 * L_14 = V_2;
		NullCheck(L_14);
		Vector3_t42  L_15 = Transform_get_position_m518(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		Transform_t41 * L_16 = V_3;
		NullCheck(L_16);
		Vector3_t42  L_17 = Transform_get_position_m518(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		Vector3U5BU5D_t132* L_18 = (__this->___points_5);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		TransformU5BU5D_t104* L_20 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		TransformU5BU5D_t104* L_22 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21%(int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))));
		int32_t L_23 = ((int32_t)((int32_t)L_21%(int32_t)(((int32_t)(((Array_t *)L_22)->max_length)))));
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_20, L_23, sizeof(Transform_t41 *))));
		Vector3_t42  L_24 = Transform_get_position_m518((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_20, L_23, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
		*((Vector3_t42 *)(Vector3_t42 *)SZArrayLdElema(L_18, L_19, sizeof(Vector3_t42 ))) = L_24;
		SingleU5BU5D_t133* L_25 = (__this->___distances_6);
		int32_t L_26 = V_1;
		float L_27 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		*((float*)(float*)SZArrayLdElema(L_25, L_26, sizeof(float))) = (float)L_27;
		float L_28 = V_0;
		Vector3_t42  L_29 = V_4;
		Vector3_t42  L_30 = V_5;
		Vector3_t42  L_31 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = Vector3_get_magnitude_m707((&V_6), /*hidden argument*/NULL);
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
		Vector3U5BU5D_t132* L_35 = (__this->___points_5);
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
extern "C" void WaypointCircuit_OnDrawGizmos_m403 (WaypointCircuit_t130 * __this, const MethodInfo* method)
{
	{
		WaypointCircuit_DrawGizmos_m405(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C" void WaypointCircuit_OnDrawGizmosSelected_m404 (WaypointCircuit_t130 * __this, const MethodInfo* method)
{
	{
		WaypointCircuit_DrawGizmos_m405(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"
extern "C" void WaypointCircuit_DrawGizmos_m405 (WaypointCircuit_t130 * __this, bool ___selected, const MethodInfo* method)
{
	Vector3_t42  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t42  V_2 = {0};
	int32_t V_3 = 0;
	Vector3_t42  V_4 = {0};
	Color_t203  G_B4_0 = {0};
	{
		WaypointList_t129 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		L_0->___circuit_0 = __this;
		TransformU5BU5D_t104* L_1 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		TransformU5BU5D_t104* L_2 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_2)->max_length)));
		WaypointCircuit_CachePositionsAndDistances_m402(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t133* L_3 = (__this->___distances_6);
		SingleU5BU5D_t133* L_4 = (__this->___distances_6);
		NullCheck(L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1));
		WaypointCircuit_set_Length_m396(__this, (*(float*)(float*)SZArrayLdElema(L_3, L_5, sizeof(float))), /*hidden argument*/NULL);
		bool L_6 = ___selected;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		Color_t203  L_7 = Color_get_yellow_m708(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		goto IL_006e;
	}

IL_0055:
	{
		Color_t203  L_8 = {0};
		Color__ctor_m709(&L_8, (1.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		G_B4_0 = L_8;
	}

IL_006e:
	{
		Gizmos_set_color_m710(NULL /*static, unused*/, G_B4_0, /*hidden argument*/NULL);
		TransformU5BU5D_t104* L_9 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_9, L_10, sizeof(Transform_t41 *))));
		Vector3_t42  L_11 = Transform_get_position_m518((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_9, L_10, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
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
		Vector3_t42  L_14 = WaypointCircuit_GetRoutePosition_m400(__this, ((float)((float)L_13+(float)(1.0f))), /*hidden argument*/NULL);
		V_2 = L_14;
		Vector3_t42  L_15 = V_0;
		Vector3_t42  L_16 = V_2;
		Gizmos_DrawLine_m711(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Vector3_t42  L_17 = V_2;
		V_0 = L_17;
		float L_18 = V_1;
		float L_19 = WaypointCircuit_get_Length_m395(__this, /*hidden argument*/NULL);
		float L_20 = (__this->___editorVisualisationSubsteps_7);
		V_1 = ((float)((float)L_18+(float)((float)((float)L_19/(float)L_20))));
	}

IL_00be:
	{
		float L_21 = V_1;
		float L_22 = WaypointCircuit_get_Length_m395(__this, /*hidden argument*/NULL);
		if ((((float)L_21) < ((float)L_22)))
		{
			goto IL_0097;
		}
	}
	{
		Vector3_t42  L_23 = V_0;
		TransformU5BU5D_t104* L_24 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		int32_t L_25 = 0;
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_24, L_25, sizeof(Transform_t41 *))));
		Vector3_t42  L_26 = Transform_get_position_m518((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_24, L_25, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
		Gizmos_DrawLine_m711(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00e2:
	{
		V_3 = 0;
		goto IL_0112;
	}

IL_00e9:
	{
		TransformU5BU5D_t104* L_27 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		TransformU5BU5D_t104* L_29 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))));
		int32_t L_30 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_29)->max_length)))));
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_27, L_30, sizeof(Transform_t41 *))));
		Vector3_t42  L_31 = Transform_get_position_m518((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_27, L_30, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
		V_4 = L_31;
		Vector3_t42  L_32 = V_0;
		Vector3_t42  L_33 = V_4;
		Gizmos_DrawLine_m711(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		Vector3_t42  L_34 = V_4;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0112:
	{
		int32_t L_36 = V_3;
		TransformU5BU5D_t104* L_37 = WaypointCircuit_get_Waypoints_m397(__this, /*hidden argument*/NULL);
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
// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_2MethodDeclarations.h"
// UnityStandardAssets.Utility.WaypointProgressTracker
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_3.h"
// UnityStandardAssets.Utility.WaypointProgressTracker
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_3MethodDeclarations.h"
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void WaypointProgressTracker__ctor_m406 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
{
	{
		__this->___lookAheadForTargetOffset_3 = (5.0f);
		__this->___lookAheadForTargetFactor_4 = (0.1f);
		__this->___lookAheadForSpeedOffset_5 = (10.0f);
		__this->___lookAheadForSpeedFactor_6 = (0.2f);
		__this->___pointToPointThreshold_8 = (4.0f);
		MonoBehaviour__ctor_m501(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
extern "C" RoutePoint_t131  WaypointProgressTracker_get_targetPoint_m407 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
{
	{
		RoutePoint_t131  L_0 = (__this->___U3CtargetPointU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
extern "C" void WaypointProgressTracker_set_targetPoint_m408 (WaypointProgressTracker_t135 * __this, RoutePoint_t131  ___value, const MethodInfo* method)
{
	{
		RoutePoint_t131  L_0 = ___value;
		__this->___U3CtargetPointU3Ek__BackingField_14 = L_0;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
extern "C" RoutePoint_t131  WaypointProgressTracker_get_speedPoint_m409 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
{
	{
		RoutePoint_t131  L_0 = (__this->___U3CspeedPointU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" void WaypointProgressTracker_set_speedPoint_m410 (WaypointProgressTracker_t135 * __this, RoutePoint_t131  ___value, const MethodInfo* method)
{
	{
		RoutePoint_t131  L_0 = ___value;
		__this->___U3CspeedPointU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
extern "C" RoutePoint_t131  WaypointProgressTracker_get_progressPoint_m411 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
{
	{
		RoutePoint_t131  L_0 = (__this->___U3CprogressPointU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" void WaypointProgressTracker_set_progressPoint_m412 (WaypointProgressTracker_t135 * __this, RoutePoint_t131  ___value, const MethodInfo* method)
{
	{
		RoutePoint_t131  L_0 = ___value;
		__this->___U3CprogressPointU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityStandardAssets.Utility.WaypointProgressTracker
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_3MethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t11_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral103;
extern "C" void WaypointProgressTracker_Start_m413 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t41 * L_0 = (__this->___target_9);
		bool L_1 = Object_op_Equality_m473(NULL /*static, unused*/, L_0, (Object_t76 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = Object_get_name_m508(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m423(NULL /*static, unused*/, L_2, _stringLiteral103, /*hidden argument*/NULL);
		GameObject_t11 * L_4 = (GameObject_t11 *)il2cpp_codegen_object_new (GameObject_t11_il2cpp_TypeInfo_var);
		GameObject__ctor_m571(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t41 * L_5 = GameObject_get_transform_m534(L_4, /*hidden argument*/NULL);
		__this->___target_9 = L_5;
	}

IL_0031:
	{
		WaypointProgressTracker_Reset_m414(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void WaypointProgressTracker_Reset_m414 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
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
		Transform_t41 * L_1 = (__this->___target_9);
		WaypointCircuit_t130 * L_2 = (__this->___circuit_2);
		NullCheck(L_2);
		TransformU5BU5D_t104* L_3 = WaypointCircuit_get_Waypoints_m397(L_2, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___progressNum_11);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_3, L_5, sizeof(Transform_t41 *))));
		Vector3_t42  L_6 = Transform_get_position_m518((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_3, L_5, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m532(L_1, L_6, /*hidden argument*/NULL);
		Transform_t41 * L_7 = (__this->___target_9);
		WaypointCircuit_t130 * L_8 = (__this->___circuit_2);
		NullCheck(L_8);
		TransformU5BU5D_t104* L_9 = WaypointCircuit_get_Waypoints_m397(L_8, /*hidden argument*/NULL);
		int32_t L_10 = (__this->___progressNum_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_9, L_11, sizeof(Transform_t41 *))));
		Quaternion_t106  L_12 = Transform_get_rotation_m598((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_9, L_11, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m675(L_7, L_12, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern TypeInfo* Mathf_t175_il2cpp_TypeInfo_var;
extern "C" void WaypointProgressTracker_Update_m415 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t42  V_0 = {0};
	Vector3_t42  V_1 = {0};
	Vector3_t42  V_2 = {0};
	Vector3_t42  V_3 = {0};
	RoutePoint_t131  V_4 = {0};
	RoutePoint_t131  V_5 = {0};
	RoutePoint_t131  V_6 = {0};
	RoutePoint_t131  V_7 = {0};
	RoutePoint_t131  V_8 = {0};
	RoutePoint_t131  V_9 = {0};
	{
		int32_t L_0 = (__this->___progressStyle_7);
		if (L_0)
		{
			goto IL_0153;
		}
	}
	{
		float L_1 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = (__this->___speed_13);
		Vector3_t42  L_3 = (__this->___lastPosition_12);
		Transform_t41 * L_4 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t42  L_5 = Transform_get_position_m518(L_4, /*hidden argument*/NULL);
		Vector3_t42  L_6 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = Vector3_get_magnitude_m707((&V_3), /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = Time_get_deltaTime_m527(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t175_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Lerp_m535(NULL /*static, unused*/, L_2, ((float)((float)L_7/(float)L_8)), L_9, /*hidden argument*/NULL);
		__this->___speed_13 = L_10;
	}

IL_0054:
	{
		Transform_t41 * L_11 = (__this->___target_9);
		WaypointCircuit_t130 * L_12 = (__this->___circuit_2);
		float L_13 = (__this->___progressDistance_10);
		float L_14 = (__this->___lookAheadForTargetOffset_3);
		float L_15 = (__this->___lookAheadForTargetFactor_4);
		float L_16 = (__this->___speed_13);
		NullCheck(L_12);
		RoutePoint_t131  L_17 = WaypointCircuit_GetRoutePoint_m399(L_12, ((float)((float)((float)((float)L_13+(float)L_14))+(float)((float)((float)L_15*(float)L_16)))), /*hidden argument*/NULL);
		V_4 = L_17;
		Vector3_t42  L_18 = ((&V_4)->___position_0);
		NullCheck(L_11);
		Transform_set_position_m532(L_11, L_18, /*hidden argument*/NULL);
		Transform_t41 * L_19 = (__this->___target_9);
		WaypointCircuit_t130 * L_20 = (__this->___circuit_2);
		float L_21 = (__this->___progressDistance_10);
		float L_22 = (__this->___lookAheadForSpeedOffset_5);
		float L_23 = (__this->___lookAheadForSpeedFactor_6);
		float L_24 = (__this->___speed_13);
		NullCheck(L_20);
		RoutePoint_t131  L_25 = WaypointCircuit_GetRoutePoint_m399(L_20, ((float)((float)((float)((float)L_21+(float)L_22))+(float)((float)((float)L_23*(float)L_24)))), /*hidden argument*/NULL);
		V_5 = L_25;
		Vector3_t42  L_26 = ((&V_5)->___direction_1);
		Quaternion_t106  L_27 = Quaternion_LookRotation_m712(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_rotation_m675(L_19, L_27, /*hidden argument*/NULL);
		WaypointCircuit_t130 * L_28 = (__this->___circuit_2);
		float L_29 = (__this->___progressDistance_10);
		NullCheck(L_28);
		RoutePoint_t131  L_30 = WaypointCircuit_GetRoutePoint_m399(L_28, L_29, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m412(__this, L_30, /*hidden argument*/NULL);
		RoutePoint_t131  L_31 = WaypointProgressTracker_get_progressPoint_m411(__this, /*hidden argument*/NULL);
		V_6 = L_31;
		Vector3_t42  L_32 = ((&V_6)->___position_0);
		Transform_t41 * L_33 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t42  L_34 = Transform_get_position_m518(L_33, /*hidden argument*/NULL);
		Vector3_t42  L_35 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		Vector3_t42  L_36 = V_0;
		RoutePoint_t131  L_37 = WaypointProgressTracker_get_progressPoint_m411(__this, /*hidden argument*/NULL);
		V_7 = L_37;
		Vector3_t42  L_38 = ((&V_7)->___direction_1);
		float L_39 = Vector3_Dot_m713(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_013d;
		}
	}
	{
		float L_40 = (__this->___progressDistance_10);
		float L_41 = Vector3_get_magnitude_m707((&V_0), /*hidden argument*/NULL);
		__this->___progressDistance_10 = ((float)((float)L_40+(float)((float)((float)L_41*(float)(0.5f)))));
	}

IL_013d:
	{
		Transform_t41 * L_42 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t42  L_43 = Transform_get_position_m518(L_42, /*hidden argument*/NULL);
		__this->___lastPosition_12 = L_43;
		goto IL_025c;
	}

IL_0153:
	{
		Transform_t41 * L_44 = (__this->___target_9);
		NullCheck(L_44);
		Vector3_t42  L_45 = Transform_get_position_m518(L_44, /*hidden argument*/NULL);
		Transform_t41 * L_46 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t42  L_47 = Transform_get_position_m518(L_46, /*hidden argument*/NULL);
		Vector3_t42  L_48 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		V_1 = L_48;
		float L_49 = Vector3_get_magnitude_m707((&V_1), /*hidden argument*/NULL);
		float L_50 = (__this->___pointToPointThreshold_8);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_51 = (__this->___progressNum_11);
		WaypointCircuit_t130 * L_52 = (__this->___circuit_2);
		NullCheck(L_52);
		TransformU5BU5D_t104* L_53 = WaypointCircuit_get_Waypoints_m397(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		__this->___progressNum_11 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_53)->max_length)))));
	}

IL_019d:
	{
		Transform_t41 * L_54 = (__this->___target_9);
		WaypointCircuit_t130 * L_55 = (__this->___circuit_2);
		NullCheck(L_55);
		TransformU5BU5D_t104* L_56 = WaypointCircuit_get_Waypoints_m397(L_55, /*hidden argument*/NULL);
		int32_t L_57 = (__this->___progressNum_11);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		int32_t L_58 = L_57;
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_56, L_58, sizeof(Transform_t41 *))));
		Vector3_t42  L_59 = Transform_get_position_m518((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_56, L_58, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_position_m532(L_54, L_59, /*hidden argument*/NULL);
		Transform_t41 * L_60 = (__this->___target_9);
		WaypointCircuit_t130 * L_61 = (__this->___circuit_2);
		NullCheck(L_61);
		TransformU5BU5D_t104* L_62 = WaypointCircuit_get_Waypoints_m397(L_61, /*hidden argument*/NULL);
		int32_t L_63 = (__this->___progressNum_11);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		NullCheck((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_62, L_64, sizeof(Transform_t41 *))));
		Quaternion_t106  L_65 = Transform_get_rotation_m598((*(Transform_t41 **)(Transform_t41 **)SZArrayLdElema(L_62, L_64, sizeof(Transform_t41 *))), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_rotation_m675(L_60, L_65, /*hidden argument*/NULL);
		WaypointCircuit_t130 * L_66 = (__this->___circuit_2);
		float L_67 = (__this->___progressDistance_10);
		NullCheck(L_66);
		RoutePoint_t131  L_68 = WaypointCircuit_GetRoutePoint_m399(L_66, L_67, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m412(__this, L_68, /*hidden argument*/NULL);
		RoutePoint_t131  L_69 = WaypointProgressTracker_get_progressPoint_m411(__this, /*hidden argument*/NULL);
		V_8 = L_69;
		Vector3_t42  L_70 = ((&V_8)->___position_0);
		Transform_t41 * L_71 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t42  L_72 = Transform_get_position_m518(L_71, /*hidden argument*/NULL);
		Vector3_t42  L_73 = Vector3_op_Subtraction_m520(NULL /*static, unused*/, L_70, L_72, /*hidden argument*/NULL);
		V_2 = L_73;
		Vector3_t42  L_74 = V_2;
		RoutePoint_t131  L_75 = WaypointProgressTracker_get_progressPoint_m411(__this, /*hidden argument*/NULL);
		V_9 = L_75;
		Vector3_t42  L_76 = ((&V_9)->___direction_1);
		float L_77 = Vector3_Dot_m713(NULL /*static, unused*/, L_74, L_76, /*hidden argument*/NULL);
		if ((!(((float)L_77) < ((float)(0.0f)))))
		{
			goto IL_024b;
		}
	}
	{
		float L_78 = (__this->___progressDistance_10);
		float L_79 = Vector3_get_magnitude_m707((&V_2), /*hidden argument*/NULL);
		__this->___progressDistance_10 = ((float)((float)L_78+(float)L_79));
	}

IL_024b:
	{
		Transform_t41 * L_80 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t42  L_81 = Transform_get_position_m518(L_80, /*hidden argument*/NULL);
		__this->___lastPosition_12 = L_81;
	}

IL_025c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"
extern "C" void WaypointProgressTracker_OnDrawGizmos_m416 (WaypointProgressTracker_t135 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Application_get_isPlaying_m714(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Color_t203  L_1 = Color_get_green_m715(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m710(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Transform_t41 * L_2 = Component_get_transform_m519(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t42  L_3 = Transform_get_position_m518(L_2, /*hidden argument*/NULL);
		Transform_t41 * L_4 = (__this->___target_9);
		NullCheck(L_4);
		Vector3_t42  L_5 = Transform_get_position_m518(L_4, /*hidden argument*/NULL);
		Gizmos_DrawLine_m711(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		WaypointCircuit_t130 * L_6 = (__this->___circuit_2);
		float L_7 = (__this->___progressDistance_10);
		NullCheck(L_6);
		Vector3_t42  L_8 = WaypointCircuit_GetRoutePosition_m400(L_6, L_7, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m716(NULL /*static, unused*/, L_8, (1.0f), /*hidden argument*/NULL);
		Color_t203  L_9 = Color_get_yellow_m708(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m710(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Transform_t41 * L_10 = (__this->___target_9);
		NullCheck(L_10);
		Vector3_t42  L_11 = Transform_get_position_m518(L_10, /*hidden argument*/NULL);
		Transform_t41 * L_12 = (__this->___target_9);
		NullCheck(L_12);
		Vector3_t42  L_13 = Transform_get_position_m518(L_12, /*hidden argument*/NULL);
		Transform_t41 * L_14 = (__this->___target_9);
		NullCheck(L_14);
		Vector3_t42  L_15 = Transform_get_forward_m619(L_14, /*hidden argument*/NULL);
		Vector3_t42  L_16 = Vector3_op_Addition_m529(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Gizmos_DrawLine_m711(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
