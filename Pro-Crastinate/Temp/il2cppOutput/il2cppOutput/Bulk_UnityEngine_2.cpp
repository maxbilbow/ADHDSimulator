#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
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
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"
struct NetworkMatch_t693;
struct IEnumerator_t142;
struct WWW_t614;
struct ResponseDelegate_1_t794;
struct NetworkMatch_t693;
struct IEnumerator_t142;
struct WWW_t614;
struct ResponseDelegate_1_t829;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m4051_gshared (NetworkMatch_t693 * __this, WWW_t614 * p0, ResponseDelegate_1_t829 * p1, const MethodInfo* method);
#define NetworkMatch_ProcessMatchResponse_TisObject_t_m4051(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t693 *, WWW_t614 *, ResponseDelegate_1_t829 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m4051_gshared)(__this, p0, p1, method)
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t673_m4050(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t693 *, WWW_t614 *, ResponseDelegate_1_t794 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m4051_gshared)(__this, p0, p1, method)
struct NetworkMatch_t693;
struct IEnumerator_t142;
struct WWW_t614;
struct ResponseDelegate_1_t795;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t675_m4052(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t693 *, WWW_t614 *, ResponseDelegate_1_t795 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m4051_gshared)(__this, p0, p1, method)
struct NetworkMatch_t693;
struct IEnumerator_t142;
struct WWW_t614;
struct ResponseDelegate_1_t796;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t693 *, WWW_t614 *, ResponseDelegate_1_t796 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m4051_gshared)(__this, p0, p1, method)
struct NetworkMatch_t693;
struct IEnumerator_t142;
struct WWW_t614;
struct ResponseDelegate_1_t797;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t683_m4054(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t693 *, WWW_t614 *, ResponseDelegate_1_t797 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m4051_gshared)(__this, p0, p1, method)

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern TypeInfo* Uri_t692_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral424;
extern Il2CppCodeGenString* _stringLiteral425;
extern Il2CppCodeGenString* _stringLiteral426;
extern "C" void NetworkMatch__ctor_m3673 (NetworkMatch_t693 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		_stringLiteral424 = il2cpp_codegen_string_literal_from_index(424);
		_stringLiteral425 = il2cpp_codegen_string_literal_from_index(425);
		_stringLiteral426 = il2cpp_codegen_string_literal_from_index(426);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		Uri_t692 * L_0 = (Uri_t692 *)il2cpp_codegen_object_new (Uri_t692_il2cpp_TypeInfo_var);
		Uri__ctor_m4055(L_0, _stringLiteral424, /*hidden argument*/NULL);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		String_t* L_1 = PlayerPrefs_GetString_m500(NULL /*static, unused*/, _stringLiteral425, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m4056(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m415(NULL /*static, unused*/, _stringLiteral426, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m3676(__this, L_4, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t692 * NetworkMatch_get_baseUri_m3674 (NetworkMatch_t693 * __this, const MethodInfo* method)
{
	{
		Uri_t692 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m3675 (NetworkMatch_t693 * __this, Uri_t692 * ___value, const MethodInfo* method)
{
	{
		Uri_t692 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t691_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch_SetProgramAppID_m3676 (NetworkMatch_t693 * __this, uint64_t ___programAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t691_il2cpp_TypeInfo_var);
		Utility_SetAppID_m3670(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* CreateMatchRequest_t672_il2cpp_TypeInfo_var;
extern "C" Coroutine_t393 * NetworkMatch_CreateMatch_m3677 (NetworkMatch_t693 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t794 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CreateMatchRequest_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		s_Il2CppMethodIntialized = true;
	}
	CreateMatchRequest_t672 * V_0 = {0};
	{
		CreateMatchRequest_t672 * L_0 = (CreateMatchRequest_t672 *)il2cpp_codegen_object_new (CreateMatchRequest_t672_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m3566(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CreateMatchRequest_t672 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m3568(L_1, L_2, /*hidden argument*/NULL);
		CreateMatchRequest_t672 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m3570(L_3, L_4, /*hidden argument*/NULL);
		CreateMatchRequest_t672 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m3572(L_5, L_6, /*hidden argument*/NULL);
		CreateMatchRequest_t672 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m3574(L_7, L_8, /*hidden argument*/NULL);
		CreateMatchRequest_t672 * L_9 = V_0;
		ResponseDelegate_1_t794 * L_10 = ___callback;
		Coroutine_t393 * L_11 = NetworkMatch_CreateMatch_m3678(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* Uri_t692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t617_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t691_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t685_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t684_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t614_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t673_m4050_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral427;
extern Il2CppCodeGenString* _stringLiteral428;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral430;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral406;
extern Il2CppCodeGenString* _stringLiteral432;
extern Il2CppCodeGenString* _stringLiteral72;
extern Il2CppCodeGenString* _stringLiteral433;
extern Il2CppCodeGenString* _stringLiteral434;
extern Il2CppCodeGenString* _stringLiteral435;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern "C" Coroutine_t393 * NetworkMatch_CreateMatch_m3678 (NetworkMatch_t693 * __this, CreateMatchRequest_t672 * ___req, ResponseDelegate_1_t794 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		WWWForm_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Utility_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		SourceID_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		AppID_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		WWW_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t673_m4050_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484050);
		_stringLiteral427 = il2cpp_codegen_string_literal_from_index(427);
		_stringLiteral428 = il2cpp_codegen_string_literal_from_index(428);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		_stringLiteral432 = il2cpp_codegen_string_literal_from_index(432);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		_stringLiteral433 = il2cpp_codegen_string_literal_from_index(433);
		_stringLiteral434 = il2cpp_codegen_string_literal_from_index(434);
		_stringLiteral435 = il2cpp_codegen_string_literal_from_index(435);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t692 * V_0 = {0};
	WWWForm_t617 * V_1 = {0};
	WWW_t614 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t692 * L_0 = NetworkMatch_get_baseUri_m3674(__this, /*hidden argument*/NULL);
		Uri_t692 * L_1 = (Uri_t692 *)il2cpp_codegen_object_new (Uri_t692_il2cpp_TypeInfo_var);
		Uri__ctor_m4057(L_1, L_0, _stringLiteral427, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t692 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m598(NULL /*static, unused*/, _stringLiteral428, L_2, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t617 * L_4 = (WWWForm_t617 *)il2cpp_codegen_object_new (WWWForm_t617_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3201(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t617 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m3224(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m3202(L_5, _stringLiteral429, L_6, /*hidden argument*/NULL);
		WWWForm_t617 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t691_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m3669(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t685_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m3202(L_7, _stringLiteral430, L_11, /*hidden argument*/NULL);
		WWWForm_t617 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m3671(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t684_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m3202(L_12, _stringLiteral431, L_16, /*hidden argument*/NULL);
		WWWForm_t617 * L_17 = V_1;
		NullCheck(L_17);
		WWWForm_AddField_m3204(L_17, _stringLiteral406, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_18 = V_1;
		NullCheck(L_18);
		WWWForm_AddField_m3204(L_18, _stringLiteral432, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_19 = V_1;
		CreateMatchRequest_t672 * L_20 = ___req;
		NullCheck(L_20);
		String_t* L_21 = CreateMatchRequest_get_name_m3567(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		WWWForm_AddField_m3202(L_19, _stringLiteral72, L_21, /*hidden argument*/NULL);
		WWWForm_t617 * L_22 = V_1;
		CreateMatchRequest_t672 * L_23 = ___req;
		NullCheck(L_23);
		uint32_t L_24 = CreateMatchRequest_get_size_m3569(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		String_t* L_25 = UInt32_ToString_m4058((&V_3), /*hidden argument*/NULL);
		NullCheck(L_22);
		WWWForm_AddField_m3202(L_22, _stringLiteral433, L_25, /*hidden argument*/NULL);
		WWWForm_t617 * L_26 = V_1;
		CreateMatchRequest_t672 * L_27 = ___req;
		NullCheck(L_27);
		bool L_28 = CreateMatchRequest_get_advertise_m3571(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		String_t* L_29 = Boolean_ToString_m4059((&V_4), /*hidden argument*/NULL);
		NullCheck(L_26);
		WWWForm_AddField_m3202(L_26, _stringLiteral434, L_29, /*hidden argument*/NULL);
		WWWForm_t617 * L_30 = V_1;
		CreateMatchRequest_t672 * L_31 = ___req;
		NullCheck(L_31);
		String_t* L_32 = CreateMatchRequest_get_password_m3573(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		WWWForm_AddField_m3202(L_30, _stringLiteral435, L_32, /*hidden argument*/NULL);
		WWWForm_t617 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t789 * L_34 = WWWForm_get_headers_m3205(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_34, _stringLiteral436, _stringLiteral437);
		Uri_t692 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_35);
		WWWForm_t617 * L_37 = V_1;
		WWW_t614 * L_38 = (WWW_t614 *)il2cpp_codegen_object_new (WWW_t614_il2cpp_TypeInfo_var);
		WWW__ctor_m3186(L_38, L_36, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		WWW_t614 * L_39 = V_2;
		ResponseDelegate_1_t794 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t673_m4050(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t673_m4050_MethodInfo_var);
		Coroutine_t393 * L_42 = MonoBehaviour_StartCoroutine_m671(__this, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* JoinMatchRequest_t674_il2cpp_TypeInfo_var;
extern "C" Coroutine_t393 * NetworkMatch_JoinMatch_m3679 (NetworkMatch_t693 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t795 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JoinMatchRequest_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	JoinMatchRequest_t674 * V_0 = {0};
	{
		JoinMatchRequest_t674 * L_0 = (JoinMatchRequest_t674 *)il2cpp_codegen_object_new (JoinMatchRequest_t674_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m3592(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t674 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m3594(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t674 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m3596(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t674 * L_5 = V_0;
		ResponseDelegate_1_t795 * L_6 = ___callback;
		Coroutine_t393 * L_7 = NetworkMatch_JoinMatch_m3680(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* Uri_t692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t617_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t691_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t685_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t684_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t686_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t614_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t675_m4052_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral439;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral430;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral406;
extern Il2CppCodeGenString* _stringLiteral432;
extern Il2CppCodeGenString* _stringLiteral405;
extern Il2CppCodeGenString* _stringLiteral435;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern "C" Coroutine_t393 * NetworkMatch_JoinMatch_m3680 (NetworkMatch_t693 * __this, JoinMatchRequest_t674 * ___req, ResponseDelegate_1_t795 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		WWWForm_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Utility_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		SourceID_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		AppID_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		NetworkID_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		WWW_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t675_m4052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484051);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral439 = il2cpp_codegen_string_literal_from_index(439);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		_stringLiteral432 = il2cpp_codegen_string_literal_from_index(432);
		_stringLiteral405 = il2cpp_codegen_string_literal_from_index(405);
		_stringLiteral435 = il2cpp_codegen_string_literal_from_index(435);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t692 * V_0 = {0};
	WWWForm_t617 * V_1 = {0};
	WWW_t614 * V_2 = {0};
	{
		Uri_t692 * L_0 = NetworkMatch_get_baseUri_m3674(__this, /*hidden argument*/NULL);
		Uri_t692 * L_1 = (Uri_t692 *)il2cpp_codegen_object_new (Uri_t692_il2cpp_TypeInfo_var);
		Uri__ctor_m4057(L_1, L_0, _stringLiteral438, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t692 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m598(NULL /*static, unused*/, _stringLiteral439, L_2, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t617 * L_4 = (WWWForm_t617 *)il2cpp_codegen_object_new (WWWForm_t617_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3201(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t617 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m3224(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m3202(L_5, _stringLiteral429, L_6, /*hidden argument*/NULL);
		WWWForm_t617 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t691_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m3669(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t685_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m3202(L_7, _stringLiteral430, L_11, /*hidden argument*/NULL);
		WWWForm_t617 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m3671(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t684_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m3202(L_12, _stringLiteral431, L_16, /*hidden argument*/NULL);
		WWWForm_t617 * L_17 = V_1;
		NullCheck(L_17);
		WWWForm_AddField_m3204(L_17, _stringLiteral406, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_18 = V_1;
		NullCheck(L_18);
		WWWForm_AddField_m3204(L_18, _stringLiteral432, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_19 = V_1;
		JoinMatchRequest_t674 * L_20 = ___req;
		NullCheck(L_20);
		uint64_t L_21 = JoinMatchRequest_get_networkId_m3593(L_20, /*hidden argument*/NULL);
		uint64_t L_22 = L_21;
		Object_t * L_23 = Box(NetworkID_t686_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_23);
		NullCheck(L_19);
		WWWForm_AddField_m3202(L_19, _stringLiteral405, L_24, /*hidden argument*/NULL);
		WWWForm_t617 * L_25 = V_1;
		JoinMatchRequest_t674 * L_26 = ___req;
		NullCheck(L_26);
		String_t* L_27 = JoinMatchRequest_get_password_m3595(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		WWWForm_AddField_m3202(L_25, _stringLiteral435, L_27, /*hidden argument*/NULL);
		WWWForm_t617 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t789 * L_29 = WWWForm_get_headers_m3205(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, _stringLiteral436, _stringLiteral437);
		Uri_t692 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_30);
		WWWForm_t617 * L_32 = V_1;
		WWW_t614 * L_33 = (WWW_t614 *)il2cpp_codegen_object_new (WWW_t614_il2cpp_TypeInfo_var);
		WWW__ctor_m3186(L_33, L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		WWW_t614 * L_34 = V_2;
		ResponseDelegate_1_t795 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t675_m4052(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t675_m4052_MethodInfo_var);
		Coroutine_t393 * L_37 = MonoBehaviour_StartCoroutine_m671(__this, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DestroyMatchRequest_t676_il2cpp_TypeInfo_var;
extern "C" Coroutine_t393 * NetworkMatch_DestroyMatch_m3681 (NetworkMatch_t693 * __this, uint64_t ___netId, ResponseDelegate_1_t796 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DestroyMatchRequest_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	DestroyMatchRequest_t676 * V_0 = {0};
	{
		DestroyMatchRequest_t676 * L_0 = (DestroyMatchRequest_t676 *)il2cpp_codegen_object_new (DestroyMatchRequest_t676_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m3613(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t676 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m3615(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t676 * L_3 = V_0;
		ResponseDelegate_1_t796 * L_4 = ___callback;
		Coroutine_t393 * L_5 = NetworkMatch_DestroyMatch_m3682(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t617_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t691_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t685_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t684_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t686_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t614_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral440;
extern Il2CppCodeGenString* _stringLiteral441;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral430;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral406;
extern Il2CppCodeGenString* _stringLiteral432;
extern Il2CppCodeGenString* _stringLiteral405;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern "C" Coroutine_t393 * NetworkMatch_DestroyMatch_m3682 (NetworkMatch_t693 * __this, DestroyMatchRequest_t676 * ___req, ResponseDelegate_1_t796 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		WWWForm_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Utility_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		SourceID_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		AppID_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		NetworkID_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		WWW_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484052);
		_stringLiteral440 = il2cpp_codegen_string_literal_from_index(440);
		_stringLiteral441 = il2cpp_codegen_string_literal_from_index(441);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		_stringLiteral432 = il2cpp_codegen_string_literal_from_index(432);
		_stringLiteral405 = il2cpp_codegen_string_literal_from_index(405);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t692 * V_0 = {0};
	WWWForm_t617 * V_1 = {0};
	WWW_t614 * V_2 = {0};
	{
		Uri_t692 * L_0 = NetworkMatch_get_baseUri_m3674(__this, /*hidden argument*/NULL);
		Uri_t692 * L_1 = (Uri_t692 *)il2cpp_codegen_object_new (Uri_t692_il2cpp_TypeInfo_var);
		Uri__ctor_m4057(L_1, L_0, _stringLiteral440, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t692 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m419(NULL /*static, unused*/, _stringLiteral441, L_3, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t617 * L_5 = (WWWForm_t617 *)il2cpp_codegen_object_new (WWWForm_t617_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3201(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		WWWForm_t617 * L_6 = V_1;
		String_t* L_7 = Application_get_cloudProjectId_m3224(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		WWWForm_AddField_m3202(L_6, _stringLiteral429, L_7, /*hidden argument*/NULL);
		WWWForm_t617 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t691_il2cpp_TypeInfo_var);
		uint64_t L_9 = Utility_GetSourceID_m3669(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(SourceID_t685_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_11);
		NullCheck(L_8);
		WWWForm_AddField_m3202(L_8, _stringLiteral430, L_12, /*hidden argument*/NULL);
		WWWForm_t617 * L_13 = V_1;
		uint64_t L_14 = Utility_GetAppID_m3671(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_15 = L_14;
		Object_t * L_16 = Box(AppID_t684_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_16);
		NullCheck(L_13);
		WWWForm_AddField_m3202(L_13, _stringLiteral431, L_17, /*hidden argument*/NULL);
		WWWForm_t617 * L_18 = V_1;
		DestroyMatchRequest_t676 * L_19 = ___req;
		NullCheck(L_19);
		uint64_t L_20 = DestroyMatchRequest_get_networkId_m3614(L_19, /*hidden argument*/NULL);
		NetworkAccessToken_t688 * L_21 = Utility_GetAccessTokenForNetwork_m3672(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = NetworkAccessToken_GetByteString_m3667(L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		WWWForm_AddField_m3202(L_18, _stringLiteral406, L_22, /*hidden argument*/NULL);
		WWWForm_t617 * L_23 = V_1;
		NullCheck(L_23);
		WWWForm_AddField_m3204(L_23, _stringLiteral432, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_24 = V_1;
		DestroyMatchRequest_t676 * L_25 = ___req;
		NullCheck(L_25);
		uint64_t L_26 = DestroyMatchRequest_get_networkId_m3614(L_25, /*hidden argument*/NULL);
		uint64_t L_27 = L_26;
		Object_t * L_28 = Box(NetworkID_t686_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_28);
		NullCheck(L_24);
		WWWForm_AddField_m3202(L_24, _stringLiteral405, L_29, /*hidden argument*/NULL);
		WWWForm_t617 * L_30 = V_1;
		NullCheck(L_30);
		Dictionary_2_t789 * L_31 = WWWForm_get_headers_m3205(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_31, _stringLiteral436, _stringLiteral437);
		Uri_t692 * L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_32);
		WWWForm_t617 * L_34 = V_1;
		WWW_t614 * L_35 = (WWW_t614 *)il2cpp_codegen_object_new (WWW_t614_il2cpp_TypeInfo_var);
		WWW__ctor_m3186(L_35, L_33, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		WWW_t614 * L_36 = V_2;
		ResponseDelegate_1_t796 * L_37 = ___callback;
		Object_t * L_38 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053(__this, L_36, L_37, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053_MethodInfo_var);
		Coroutine_t393 * L_39 = MonoBehaviour_StartCoroutine_m671(__this, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DropConnectionRequest_t677_il2cpp_TypeInfo_var;
extern "C" Coroutine_t393 * NetworkMatch_DropConnection_m3683 (NetworkMatch_t693 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t796 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DropConnectionRequest_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	DropConnectionRequest_t677 * V_0 = {0};
	{
		DropConnectionRequest_t677 * L_0 = (DropConnectionRequest_t677 *)il2cpp_codegen_object_new (DropConnectionRequest_t677_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m3617(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t677 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m3619(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t677 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m3621(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t677 * L_5 = V_0;
		ResponseDelegate_1_t796 * L_6 = ___callback;
		Coroutine_t393 * L_7 = NetworkMatch_DropConnection_m3684(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t617_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t691_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t685_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t684_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t686_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t687_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t614_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral442;
extern Il2CppCodeGenString* _stringLiteral443;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral430;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral406;
extern Il2CppCodeGenString* _stringLiteral432;
extern Il2CppCodeGenString* _stringLiteral405;
extern Il2CppCodeGenString* _stringLiteral407;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern "C" Coroutine_t393 * NetworkMatch_DropConnection_m3684 (NetworkMatch_t693 * __this, DropConnectionRequest_t677 * ___req, ResponseDelegate_1_t796 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		WWWForm_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Utility_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		SourceID_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		AppID_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		NetworkID_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		NodeID_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		WWW_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484052);
		_stringLiteral442 = il2cpp_codegen_string_literal_from_index(442);
		_stringLiteral443 = il2cpp_codegen_string_literal_from_index(443);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		_stringLiteral432 = il2cpp_codegen_string_literal_from_index(432);
		_stringLiteral405 = il2cpp_codegen_string_literal_from_index(405);
		_stringLiteral407 = il2cpp_codegen_string_literal_from_index(407);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t692 * V_0 = {0};
	WWWForm_t617 * V_1 = {0};
	WWW_t614 * V_2 = {0};
	{
		Uri_t692 * L_0 = NetworkMatch_get_baseUri_m3674(__this, /*hidden argument*/NULL);
		Uri_t692 * L_1 = (Uri_t692 *)il2cpp_codegen_object_new (Uri_t692_il2cpp_TypeInfo_var);
		Uri__ctor_m4057(L_1, L_0, _stringLiteral442, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t692 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m598(NULL /*static, unused*/, _stringLiteral443, L_2, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t617 * L_4 = (WWWForm_t617 *)il2cpp_codegen_object_new (WWWForm_t617_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3201(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t617 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m3224(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m3202(L_5, _stringLiteral429, L_6, /*hidden argument*/NULL);
		WWWForm_t617 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t691_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m3669(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t685_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m3202(L_7, _stringLiteral430, L_11, /*hidden argument*/NULL);
		WWWForm_t617 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m3671(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t684_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m3202(L_12, _stringLiteral431, L_16, /*hidden argument*/NULL);
		WWWForm_t617 * L_17 = V_1;
		DropConnectionRequest_t677 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = DropConnectionRequest_get_networkId_m3618(L_18, /*hidden argument*/NULL);
		NetworkAccessToken_t688 * L_20 = Utility_GetAccessTokenForNetwork_m3672(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = NetworkAccessToken_GetByteString_m3667(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m3202(L_17, _stringLiteral406, L_21, /*hidden argument*/NULL);
		WWWForm_t617 * L_22 = V_1;
		NullCheck(L_22);
		WWWForm_AddField_m3204(L_22, _stringLiteral432, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_23 = V_1;
		DropConnectionRequest_t677 * L_24 = ___req;
		NullCheck(L_24);
		uint64_t L_25 = DropConnectionRequest_get_networkId_m3618(L_24, /*hidden argument*/NULL);
		uint64_t L_26 = L_25;
		Object_t * L_27 = Box(NetworkID_t686_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_27);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_27);
		NullCheck(L_23);
		WWWForm_AddField_m3202(L_23, _stringLiteral405, L_28, /*hidden argument*/NULL);
		WWWForm_t617 * L_29 = V_1;
		DropConnectionRequest_t677 * L_30 = ___req;
		NullCheck(L_30);
		uint16_t L_31 = DropConnectionRequest_get_nodeId_m3620(L_30, /*hidden argument*/NULL);
		uint16_t L_32 = L_31;
		Object_t * L_33 = Box(NodeID_t687_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_33);
		NullCheck(L_29);
		WWWForm_AddField_m3202(L_29, _stringLiteral407, L_34, /*hidden argument*/NULL);
		WWWForm_t617 * L_35 = V_1;
		NullCheck(L_35);
		Dictionary_2_t789 * L_36 = WWWForm_get_headers_m3205(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_36, _stringLiteral436, _stringLiteral437);
		Uri_t692 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_37);
		WWWForm_t617 * L_39 = V_1;
		WWW_t614 * L_40 = (WWW_t614 *)il2cpp_codegen_object_new (WWW_t614_il2cpp_TypeInfo_var);
		WWW__ctor_m3186(L_40, L_38, L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		WWW_t614 * L_41 = V_2;
		ResponseDelegate_1_t796 * L_42 = ___callback;
		Object_t * L_43 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053(__this, L_41, L_42, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t670_m4053_MethodInfo_var);
		Coroutine_t393 * L_44 = MonoBehaviour_StartCoroutine_m671(__this, L_43, /*hidden argument*/NULL);
		return L_44;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* ListMatchRequest_t678_il2cpp_TypeInfo_var;
extern "C" Coroutine_t393 * NetworkMatch_ListMatches_m3685 (NetworkMatch_t693 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t797 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListMatchRequest_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	ListMatchRequest_t678 * V_0 = {0};
	{
		ListMatchRequest_t678 * L_0 = (ListMatchRequest_t678 *)il2cpp_codegen_object_new (ListMatchRequest_t678_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m3623(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ListMatchRequest_t678 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m3627(L_1, L_2, /*hidden argument*/NULL);
		ListMatchRequest_t678 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m3625(L_3, L_4, /*hidden argument*/NULL);
		ListMatchRequest_t678 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m3629(L_5, L_6, /*hidden argument*/NULL);
		ListMatchRequest_t678 * L_7 = V_0;
		ResponseDelegate_1_t797 * L_8 = ___callback;
		Coroutine_t393 * L_9 = NetworkMatch_ListMatches_m3686(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* Uri_t692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t617_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t691_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t685_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t684_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t614_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t683_m4054_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral444;
extern Il2CppCodeGenString* _stringLiteral445;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral430;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral446;
extern Il2CppCodeGenString* _stringLiteral406;
extern Il2CppCodeGenString* _stringLiteral432;
extern Il2CppCodeGenString* _stringLiteral447;
extern Il2CppCodeGenString* _stringLiteral448;
extern Il2CppCodeGenString* _stringLiteral449;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern "C" Coroutine_t393 * NetworkMatch_ListMatches_m3686 (NetworkMatch_t693 * __this, ListMatchRequest_t678 * ___req, ResponseDelegate_1_t797 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		WWWForm_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Utility_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		SourceID_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		AppID_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		WWW_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t683_m4054_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484053);
		_stringLiteral444 = il2cpp_codegen_string_literal_from_index(444);
		_stringLiteral445 = il2cpp_codegen_string_literal_from_index(445);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral446 = il2cpp_codegen_string_literal_from_index(446);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		_stringLiteral432 = il2cpp_codegen_string_literal_from_index(432);
		_stringLiteral447 = il2cpp_codegen_string_literal_from_index(447);
		_stringLiteral448 = il2cpp_codegen_string_literal_from_index(448);
		_stringLiteral449 = il2cpp_codegen_string_literal_from_index(449);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t692 * V_0 = {0};
	WWWForm_t617 * V_1 = {0};
	WWW_t614 * V_2 = {0};
	bool V_3 = false;
	{
		Uri_t692 * L_0 = NetworkMatch_get_baseUri_m3674(__this, /*hidden argument*/NULL);
		Uri_t692 * L_1 = (Uri_t692 *)il2cpp_codegen_object_new (Uri_t692_il2cpp_TypeInfo_var);
		Uri__ctor_m4057(L_1, L_0, _stringLiteral444, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t692 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m598(NULL /*static, unused*/, _stringLiteral445, L_2, /*hidden argument*/NULL);
		Debug_Log_m415(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t617 * L_4 = (WWWForm_t617 *)il2cpp_codegen_object_new (WWWForm_t617_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3201(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t617 * L_5 = V_1;
		String_t* L_6 = Application_get_cloudProjectId_m3224(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m3202(L_5, _stringLiteral429, L_6, /*hidden argument*/NULL);
		WWWForm_t617 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t691_il2cpp_TypeInfo_var);
		uint64_t L_8 = Utility_GetSourceID_m3669(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(SourceID_t685_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_10);
		NullCheck(L_7);
		WWWForm_AddField_m3202(L_7, _stringLiteral430, L_11, /*hidden argument*/NULL);
		WWWForm_t617 * L_12 = V_1;
		uint64_t L_13 = Utility_GetAppID_m3671(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(AppID_t684_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_15);
		NullCheck(L_12);
		WWWForm_AddField_m3202(L_12, _stringLiteral431, L_16, /*hidden argument*/NULL);
		WWWForm_t617 * L_17 = V_1;
		ListMatchRequest_t678 * L_18 = ___req;
		NullCheck(L_18);
		bool L_19 = ListMatchRequest_get_includePasswordMatches_m3630(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		String_t* L_20 = Boolean_ToString_m4059((&V_3), /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m3202(L_17, _stringLiteral446, L_20, /*hidden argument*/NULL);
		WWWForm_t617 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m3204(L_21, _stringLiteral406, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_22 = V_1;
		NullCheck(L_22);
		WWWForm_AddField_m3204(L_22, _stringLiteral432, 0, /*hidden argument*/NULL);
		WWWForm_t617 * L_23 = V_1;
		ListMatchRequest_t678 * L_24 = ___req;
		NullCheck(L_24);
		int32_t L_25 = ListMatchRequest_get_pageSize_m3624(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m3204(L_23, _stringLiteral447, L_25, /*hidden argument*/NULL);
		WWWForm_t617 * L_26 = V_1;
		ListMatchRequest_t678 * L_27 = ___req;
		NullCheck(L_27);
		int32_t L_28 = ListMatchRequest_get_pageNum_m3626(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		WWWForm_AddField_m3204(L_26, _stringLiteral448, L_28, /*hidden argument*/NULL);
		WWWForm_t617 * L_29 = V_1;
		ListMatchRequest_t678 * L_30 = ___req;
		NullCheck(L_30);
		String_t* L_31 = ListMatchRequest_get_nameFilter_m3628(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		WWWForm_AddField_m3202(L_29, _stringLiteral449, L_31, /*hidden argument*/NULL);
		WWWForm_t617 * L_32 = V_1;
		NullCheck(L_32);
		Dictionary_2_t789 * L_33 = WWWForm_get_headers_m3205(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_33, _stringLiteral436, _stringLiteral437);
		Uri_t692 * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_34);
		WWWForm_t617 * L_36 = V_1;
		WWW_t614 * L_37 = (WWW_t614 *)il2cpp_codegen_object_new (WWW_t614_il2cpp_TypeInfo_var);
		WWW__ctor_m3186(L_37, L_35, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		WWW_t614 * L_38 = V_2;
		ResponseDelegate_1_t797 * L_39 = ___callback;
		Object_t * L_40 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t683_m4054(__this, L_38, L_39, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t683_m4054_MethodInfo_var);
		Coroutine_t393 * L_41 = MonoBehaviour_StartCoroutine_m671(__this, L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"


// System.Void SimpleJson.JsonArray::.ctor()
extern TypeInfo* List_1_t495_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4060_MethodInfo_var;
extern "C" void JsonArray__ctor_m3687 (JsonArray_t694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		List_1__ctor_m4060_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484054);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t495_il2cpp_TypeInfo_var);
		List_1__ctor_m4060(__this, /*hidden argument*/List_1__ctor_m4060_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JsonArray_ToString_m3688 (JsonArray_t694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3708(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_ArrayTypes.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void SimpleJson.JsonObject::.ctor()
extern TypeInfo* Dictionary_2_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m489_MethodInfo_var;
extern "C" void JsonObject__ctor_m3689 (JsonObject_t695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Dictionary_2__ctor_m489_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		Dictionary_2_t29 * L_0 = (Dictionary_2_t29 *)il2cpp_codegen_object_new (Dictionary_2_t29_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m489(L_0, /*hidden argument*/Dictionary_2__ctor_m489_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* Enumerator_t830_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4061_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m3690 (JsonObject_t695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		Dictionary_2_GetEnumerator_m4061_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484055);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t830  L_1 = Dictionary_2_GetEnumerator_m4061(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m4061_MethodInfo_var);
		Enumerator_t830  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t830_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m3691 (JsonObject_t695 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern const MethodInfo* Dictionary_2_get_Keys_m4062_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m3692 (JsonObject_t695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Keys_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484056);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t831 * L_1 = Dictionary_2_get_Keys_m4062(L_0, /*hidden argument*/Dictionary_2_get_Keys_m4062_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m3693 (JsonObject_t695 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern const MethodInfo* Dictionary_2_get_Values_m4063_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m3694 (JsonObject_t695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Values_m4063_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484057);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t832 * L_1 = Dictionary_2_get_Values_m4063(L_0, /*hidden argument*/Dictionary_2_get_Values_m4063_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m3695 (JsonObject_t695 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m3696 (JsonObject_t695 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m4064_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4065_MethodInfo_var;
extern "C" void JsonObject_Add_m3697 (JsonObject_t695 * __this, KeyValuePair_2_t801  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m4064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484058);
		KeyValuePair_2_get_Value_m4065_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484059);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4064((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4064_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m4065((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m4065_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m3698 (JsonObject_t695 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m4064_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4065_MethodInfo_var;
extern "C" bool JsonObject_Contains_m3699 (JsonObject_t695 * __this, KeyValuePair_2_t801  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m4064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484058);
		KeyValuePair_2_get_Value_m4065_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484059);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4064((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4064_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t29 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m4064((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4064_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m4065((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m4065_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t802_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral450;
extern "C" void JsonObject_CopyTo_m3700 (JsonObject_t695 * __this, KeyValuePair_2U5BU5D_t800* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		IEnumerator_1_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral450 = il2cpp_codegen_string_literal_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t801  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t800* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m556(L_1, _stringLiteral450, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 SimpleJson.JsonObject::get_Count() */, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(10 /* System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator() */, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t801  L_5 = (KeyValuePair_2_t801 )InterfaceFuncInvoker0< KeyValuePair_2_t801  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t802_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t800* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t801  L_9 = V_1;
			*((KeyValuePair_2_t801 *)(KeyValuePair_2_t801 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
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
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m3701 (JsonObject_t695 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m3702 (JsonObject_t695 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m4064_MethodInfo_var;
extern "C" bool JsonObject_Remove_m3703 (JsonObject_t695 * __this, KeyValuePair_2_t801  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m4064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484058);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4064((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4064_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t830_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4061_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m3704 (JsonObject_t695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		Dictionary_2_GetEnumerator_m4061_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484055);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t29 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t830  L_1 = Dictionary_2_GetEnumerator_m4061(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m4061_MethodInfo_var);
		Enumerator_t830  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t830_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m3705 (JsonObject_t695 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3708(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m3706 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t163* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t163* L_2 = String_ToCharArray_m4066(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t163* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m3711(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern TypeInfo* StringBuilder_t164_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_SerializeObject_m3707 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t164 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t164 * L_0 = (StringBuilder_t164 *)il2cpp_codegen_object_new (StringBuilder_t164_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m469(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t164 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m3719(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t164 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = StringBuilder_ToString_m474(L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m3708 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m3725(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m3707(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonObject_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t793_il2cpp_TypeInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m3709 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonObject_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		IDictionary_2_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t695 * L_0 = (JsonObject_t695 *)il2cpp_codegen_object_new (JsonObject_t695_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3689(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t163* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t163* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3717(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t163* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t163* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t163* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m3712(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t163* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t163* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m3711(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t793_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonArray_t694_il2cpp_TypeInfo_var;
extern "C" JsonArray_t694 * SimpleJson_ParseArray_m3710 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonArray_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	JsonArray_t694 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t694 * L_0 = (JsonArray_t694 *)il2cpp_codegen_object_new (JsonArray_t694_il2cpp_TypeInfo_var);
		JsonArray__ctor_m3687(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t163* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t163* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3717(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t694 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t163* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t163* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t163* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m3711(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t694 *)NULL;
	}

IL_0063:
	{
		JsonArray_t694 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t694 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseValue_m3711 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t163* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m3717(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t163* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m3712(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t163* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m3714(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t163* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m3709(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t163* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t694 * L_19 = SimpleJson_ParseArray_m3710(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t163* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = 1;
		Object_t * L_23 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t163* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		bool L_26 = 0;
		Object_t * L_27 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t163* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* StringBuilder_t164_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t833_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral451;
extern "C" String_t* SimpleJson_ParseString_m3712 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t164 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t164 * L_0 = (StringBuilder_t164 *)il2cpp_codegen_object_new (StringBuilder_t164_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m469(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t163* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m3716(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t163* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t163* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t163* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t163* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t163* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t164 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m475(L_28, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t164 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m475(L_30, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t164 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m475(L_32, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t164 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m475(L_34, 8, /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t164 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m475(L_36, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t164 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m475(L_38, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t164 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m475(L_40, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t164 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m475(L_42, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t163* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t163* L_48 = ___json;
		int32_t* L_49 = ___index;
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_50 = String_CreateString_m4067(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_51 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_52 = UInt32_TryParse_m4069(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/NULL);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t163* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t163* L_63 = ___json;
		int32_t* L_64 = ___index;
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_65 = String_CreateString_m4067(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_66 = String_op_Equality_m417(NULL /*static, unused*/, L_65, _stringLiteral451, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t163* L_67 = ___json;
		int32_t* L_68 = ___index;
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_69 = String_CreateString_m4067(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_70 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_71 = UInt32_TryParse_m4069(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t164 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m475(L_74, (((uint16_t)L_75)), /*hidden argument*/NULL);
		StringBuilder_t164 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m475(L_76, (((uint16_t)L_77)), /*hidden argument*/NULL);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_81 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t164 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m3713(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		StringBuilder_Append_m4070(L_82, L_84, /*hidden argument*/NULL);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t164 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m475(L_87, L_88, /*hidden argument*/NULL);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t164 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = StringBuilder_ToString_m474(L_92, /*hidden argument*/NULL);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t163_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral452;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral454;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m3713 (Object_t * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		_stringLiteral452 = il2cpp_codegen_string_literal_from_index(452);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t834 * L_2 = (ArgumentOutOfRangeException_t834 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4071(L_2, _stringLiteral452, _stringLiteral453, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t834 * L_5 = (ArgumentOutOfRangeException_t834 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4071(L_5, _stringLiteral452, _stringLiteral454, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m2510(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t163* L_10 = ((CharU5BU5D_t163*)SZArrayNew(CharU5BU5D_t163_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t163* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_14 = String_CreateString_m4072(L_14, L_12, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t833_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t170_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t169_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral262;
extern Il2CppCodeGenString* _stringLiteral455;
extern "C" Object_t * SimpleJson_ParseNumber_m3714 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		Double_t170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Int64_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		_stringLiteral262 = il2cpp_codegen_string_literal_from_index(262);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t163* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3716(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t163* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m3715(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t163* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_10 = String_CreateString_m4067(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m4012(L_11, _stringLiteral262, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m4012(L_13, _stringLiteral455, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t163* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_19 = String_CreateString_m4067(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_20 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m4073(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(Double_t170_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t163* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_29 = String_CreateString_m4067(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_30 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m4074(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(Int64_t169_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern Il2CppCodeGenString* _stringLiteral456;
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m3715 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t163* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck(_stringLiteral456);
		int32_t L_4 = String_IndexOf_m2537(_stringLiteral456, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t163* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern Il2CppCodeGenString* _stringLiteral457;
extern "C" void SimpleJson_EatWhitespace_m3716 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t* ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral457 = il2cpp_codegen_string_literal_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t163* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck(_stringLiteral457);
		int32_t L_3 = String_IndexOf_m2537(_stringLiteral457, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t163* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m3717 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t163* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m3718(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m3718 (Object_t * __this /* static, unused */, CharU5BU5D_t163* ___json, int32_t* ___index, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t163* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3716(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index;
		CharU5BU5D_t163* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t163* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t163* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t163* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t163* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t163* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t163* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t163* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t163* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t163* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t163* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t163* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t163* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t163* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t163* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t163* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t793_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t835_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t803_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* IJsonSerializerStrategy_t696_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral102;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral459;
extern "C" bool SimpleJson_SerializeValue_m3719 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t164 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDictionary_2_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		IDictionary_2_t835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		IEnumerable_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		IJsonSerializerStrategy_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		_stringLiteral102 = il2cpp_codegen_string_literal_from_index(102);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral459 = il2cpp_codegen_string_literal_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t164 * G_B13_0 = {0};
	StringBuilder_t164 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t164 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t164 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m3722(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t793_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t793_il2cpp_TypeInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t793_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t164 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m3720(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t835_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t835_il2cpp_TypeInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t835_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t164 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m3720(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, IEnumerable_t803_il2cpp_TypeInfo_var));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t164 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m3721(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m3724(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t164 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m3723(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, Boolean_t171_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t164 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, Boolean_t171_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = _stringLiteral102;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = _stringLiteral458;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m4070(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t164 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m4070(L_38, _stringLiteral459, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(0 /* System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t696_il2cpp_TypeInfo_var, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t164 * L_45 = ___builder;
		SimpleJson_SerializeValue_m3719(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t803_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral460;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral461;
extern Il2CppCodeGenString* _stringLiteral301;
extern "C" bool SimpleJson_SerializeObject_m3720 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t164 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral461 = il2cpp_codegen_string_literal_from_index(461);
		_stringLiteral301 = il2cpp_codegen_string_literal_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t164 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m4070(L_0, _stringLiteral460, /*hidden argument*/NULL);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t803_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t803_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t164 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m4070(L_10, _stringLiteral17, /*hidden argument*/NULL);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t164 * L_14 = ___builder;
		SimpleJson_SerializeString_m3722(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t164 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m3719(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t164 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m4070(L_19, _stringLiteral461, /*hidden argument*/NULL);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t164 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m3719(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t164 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m4070(L_28, _stringLiteral301, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t803_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral462;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral463;
extern "C" bool SimpleJson_SerializeArray_m3721 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t164 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t164 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m4070(L_0, _stringLiteral462, /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t803_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t164 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m4070(L_6, _stringLiteral17, /*hidden argument*/NULL);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t164 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m3719(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, IDisposable_t153_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_006e:
	{
		StringBuilder_t164 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m4070(L_16, _stringLiteral463, /*hidden argument*/NULL);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral464;
extern Il2CppCodeGenString* _stringLiteral465;
extern Il2CppCodeGenString* _stringLiteral466;
extern Il2CppCodeGenString* _stringLiteral467;
extern Il2CppCodeGenString* _stringLiteral468;
extern Il2CppCodeGenString* _stringLiteral469;
extern Il2CppCodeGenString* _stringLiteral470;
extern "C" bool SimpleJson_SerializeString_m3722 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t164 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		_stringLiteral465 = il2cpp_codegen_string_literal_from_index(465);
		_stringLiteral466 = il2cpp_codegen_string_literal_from_index(466);
		_stringLiteral467 = il2cpp_codegen_string_literal_from_index(467);
		_stringLiteral468 = il2cpp_codegen_string_literal_from_index(468);
		_stringLiteral469 = il2cpp_codegen_string_literal_from_index(469);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t163* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t164 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m4070(L_0, _stringLiteral24, /*hidden argument*/NULL);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t163* L_2 = String_ToCharArray_m4066(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t163* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t164 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m4070(L_7, _stringLiteral464, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t164 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m4070(L_9, _stringLiteral465, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t164 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m4070(L_11, _stringLiteral466, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t164 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m4070(L_13, _stringLiteral467, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t164 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m4070(L_15, _stringLiteral468, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t164 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m4070(L_17, _stringLiteral469, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t164 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m4070(L_19, _stringLiteral470, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t164 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m475(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t163* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t164 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m4070(L_25, _stringLiteral24, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern TypeInfo* Int64_t169_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t833_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t837_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t828_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t836_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t819_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern "C" bool SimpleJson_SerializeNumber_m3723 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t164 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		CultureInfo_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		UInt64_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		UInt32_t828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Decimal_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Convert_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t836  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, Int64_t169_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t164 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, Int64_t169_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_3 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m4075((&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m4070(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, UInt64_t837_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t164 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, UInt64_t837_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_8 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m4076((&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m4070(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, Int32_t149_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t164 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, Int32_t149_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_13 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m4077((&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m4070(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, UInt32_t828_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t164 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, UInt32_t828_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_18 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m4078((&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m4070(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, Decimal_t836_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t164 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t836 *)((Decimal_t836 *)UnBox (L_22, Decimal_t836_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_23 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m4079((&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m4070(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, Single_t172_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t164 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, Single_t172_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_28 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m4080((&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m4070(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t164 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_32 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t819_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m4081(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t833 * L_34 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m4082((&V_6), _stringLiteral471, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m4070(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern TypeInfo* SByte_t838_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t821_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t839_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t826_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t828_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t169_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t837_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t172_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t170_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t836_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_IsNumeric_m3724 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		Byte_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Int16_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		UInt16_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(453);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		UInt32_t828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Int64_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		UInt64_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		Single_t172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Double_t170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Decimal_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, SByte_t838_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, Byte_t821_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, Int16_t839_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, UInt16_t826_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, Int32_t149_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, UInt32_t828_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, Int64_t169_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, UInt64_t837_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, Single_t172_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, Double_t170_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t836_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t698_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m3725 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t698_StaticFields*)SimpleJson_t698_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t697 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m3726(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t697 * L_3 = L_2;
		((SimpleJson_t698_StaticFields*)SimpleJson_t698_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t698_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var;
extern "C" PocoJsonSerializerStrategy_t697 * SimpleJson_get_PocoJsonSerializerStrategy_m3726 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	PocoJsonSerializerStrategy_t697 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t697 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t697 * L_0 = ((SimpleJson_t698_StaticFields*)SimpleJson_t698_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t697 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t697 * L_2 = (PocoJsonSerializerStrategy_t697 *)il2cpp_codegen_object_new (PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m3727(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t697 * L_3 = L_2;
		((SimpleJson_t698_StaticFields*)SimpleJson_t698_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// System.Type
#include "mscorlib_System_Type.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t841_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t842_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t843_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t844_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t845_il2cpp_TypeInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m4083_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m4084_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m4085_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m4086_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m4087_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m4088_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m3727 (PocoJsonSerializerStrategy_t697 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadSafeDictionaryValueFactory_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		ThreadSafeDictionary_2_t841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		ThreadSafeDictionaryValueFactory_2_t842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		ThreadSafeDictionary_2_t843_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		ThreadSafeDictionaryValueFactory_2_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		ThreadSafeDictionary_2_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		ThreadSafeDictionaryValueFactory_2__ctor_m4083_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		ThreadSafeDictionary_2__ctor_m4084_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		ThreadSafeDictionaryValueFactory_2__ctor_m4085_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		ThreadSafeDictionary_2__ctor_m4086_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		ThreadSafeDictionaryValueFactory_2__ctor_m4087_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		ThreadSafeDictionary_2__ctor_m4088_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484065);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GetVirtualMethodInfo(__this, 6) };
		ThreadSafeDictionaryValueFactory_2_t840 * L_1 = (ThreadSafeDictionaryValueFactory_2_t840 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t840_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m4083(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m4083_MethodInfo_var);
		ThreadSafeDictionary_2_t841 * L_2 = (ThreadSafeDictionary_2_t841 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t841_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m4084(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m4084_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { (void*)GetVirtualMethodInfo(__this, 7) };
		ThreadSafeDictionaryValueFactory_2_t842 * L_4 = (ThreadSafeDictionaryValueFactory_2_t842 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t842_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m4085(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m4085_MethodInfo_var);
		ThreadSafeDictionary_2_t843 * L_5 = (ThreadSafeDictionary_2_t843 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t843_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m4086(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m4086_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { (void*)GetVirtualMethodInfo(__this, 8) };
		ThreadSafeDictionaryValueFactory_2_t844 * L_7 = (ThreadSafeDictionaryValueFactory_2_t844 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t844_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m4087(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m4087_MethodInfo_var);
		ThreadSafeDictionary_2_t845 * L_8 = (ThreadSafeDictionary_2_t845 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t845_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m4088(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m4088_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const Il2CppType* Int32_t149_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral472;
extern Il2CppCodeGenString* _stringLiteral473;
extern Il2CppCodeGenString* _stringLiteral474;
extern "C" void PocoJsonSerializerStrategy__cctor_m3728 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t149_0_0_0_var = il2cpp_codegen_type_from_index(13);
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		_stringLiteral473 = il2cpp_codegen_string_literal_from_index(473);
		_stringLiteral474 = il2cpp_codegen_string_literal_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PocoJsonSerializerStrategy_t697_StaticFields*)PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t702* L_0 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Int32_t149_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t697_StaticFields*)PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t31* L_2 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, _stringLiteral472);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)_stringLiteral472;
		StringU5BU5D_t31* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, _stringLiteral473);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)_stringLiteral473;
		StringU5BU5D_t31* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, _stringLiteral474);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)_stringLiteral474;
		((PocoJsonSerializerStrategy_t697_StaticFields*)PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3729 (PocoJsonSerializerStrategy_t697 * __this, String_t* ___clrPropertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern TypeInfo* PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t705 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m3730 (PocoJsonSerializerStrategy_t697 * __this, Type_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t702* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var);
		TypeU5BU5D_t702* L_3 = ((PocoJsonSerializerStrategy_t697_StaticFields*)PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var);
		TypeU5BU5D_t702* L_4 = ((PocoJsonSerializerStrategy_t697_StaticFields*)PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		ConstructorDelegate_t705 * L_5 = ReflectionUtils_GetContructor_m3766(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t846_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t807_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t847_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t804_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t808_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t848_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4089_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m3731 (PocoJsonSerializerStrategy_t697 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		IEnumerable_1_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		IEnumerator_1_t847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		IDictionary_2_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IEnumerable_1_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		IEnumerator_1_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		Dictionary_2__ctor_m4089_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t846 * L_0 = (Dictionary_2_t846 *)il2cpp_codegen_object_new (Dictionary_2_t846_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4089(L_0, /*hidden argument*/Dictionary_2__ctor_m4089_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m3762(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t807_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t847_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m3764(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
			GetDelegate_t703 * L_19 = ReflectionUtils_GetGetMethod_m3769(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t703 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t804_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		Object_t* L_25 = ReflectionUtils_GetFields_m3763(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t808_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t848_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
			GetDelegate_t703 * L_38 = ReflectionUtils_GetGetMethod_m3770(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t703 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t804_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t849_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t807_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t847_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t805_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t808_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t848_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4090_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m4091_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m3732 (PocoJsonSerializerStrategy_t697 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t849_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		IEnumerable_1_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		IEnumerator_1_t847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		IDictionary_2_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IEnumerable_1_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		IEnumerator_1_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		Dictionary_2__ctor_m4090_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484067);
		KeyValuePair_2__ctor_m4091_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484068);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t849 * L_0 = (Dictionary_2_t849 *)il2cpp_codegen_object_new (Dictionary_2_t849_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4090(L_0, /*hidden argument*/Dictionary_2__ctor_m4090_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m3762(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t807_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t847_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m3765(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
			SetDelegate_t704 * L_21 = ReflectionUtils_GetSetMethod_m3773(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t850  L_22 = {0};
			KeyValuePair_2__ctor_m4091(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m4091_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t850  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t805_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		Object_t* L_28 = ReflectionUtils_GetFields_m3763(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t808_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t848_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsInitOnly() */, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
			SetDelegate_t704 * L_45 = ReflectionUtils_GetSetMethod_m3774(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t850  L_46 = {0};
			KeyValuePair_2__ctor_m4091(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m4091_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t850  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t805_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3733 (PocoJsonSerializerStrategy_t697 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern TypeInfo* CultureInfo_t833_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t819_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t170_il2cpp_TypeInfo_var;
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m3734 (PocoJsonSerializerStrategy_t697 * __this, Enum_t5 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		Convert_t819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		Double_t170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t5 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_1 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t819_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m4081(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		Object_t * L_4 = Box(Double_t170_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern TypeInfo* DateTime_t578_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t833_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeOffset_t851_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t852_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t5_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral475;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3735 (PocoJsonSerializerStrategy_t697 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		CultureInfo_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		DateTimeOffset_t851_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(518);
		Guid_t852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		Uri_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Enum_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral475 = il2cpp_codegen_string_literal_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Enum_t5 * V_1 = {0};
	DateTime_t578  V_2 = {0};
	DateTime_t578  V_3 = {0};
	DateTimeOffset_t851  V_4 = {0};
	DateTimeOffset_t851  V_5 = {0};
	Guid_t852  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, DateTime_t578_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t578 *)((DateTime_t578 *)UnBox (L_2, DateTime_t578_il2cpp_TypeInfo_var))));
		DateTime_t578  L_3 = DateTime_ToUniversalTime_m4092((&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var);
		StringU5BU5D_t31* L_4 = ((PocoJsonSerializerStrategy_t697_StaticFields*)PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_6 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = DateTime_ToString_m4093((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/NULL);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, DateTimeOffset_t851_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t851 *)((DateTimeOffset_t851 *)UnBox (L_10, DateTimeOffset_t851_il2cpp_TypeInfo_var))));
		DateTimeOffset_t851  L_11 = DateTimeOffset_ToUniversalTime_m4094((&V_4), /*hidden argument*/NULL);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var);
		StringU5BU5D_t31* L_12 = ((PocoJsonSerializerStrategy_t697_StaticFields*)PocoJsonSerializerStrategy_t697_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t833_il2cpp_TypeInfo_var);
		CultureInfo_t833 * L_14 = CultureInfo_get_InvariantCulture_m4068(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_15 = DateTimeOffset_ToString_m4095((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, Guid_t852_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t852 *)((Guid_t852 *)UnBox (L_18, Guid_t852_il2cpp_TypeInfo_var))));
		String_t* L_19 = Guid_ToString_m4096((&V_6), _stringLiteral475, /*hidden argument*/NULL);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t692 *)IsInst(L_20, Uri_t692_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t5 *)IsInst(L_24, Enum_t5_il2cpp_TypeInfo_var));
		Enum_t5 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t5 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t5 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* JsonObject_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t700_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t854_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t855_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t793_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4097_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4098_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral476;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3736 (PocoJsonSerializerStrategy_t697 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		JsonObject_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		IDictionary_2_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		IEnumerable_1_t854_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		IEnumerator_1_t855_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		IDictionary_2_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		KeyValuePair_2_get_Value_m4097_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		KeyValuePair_2_get_Key_m4098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484070);
		_stringLiteral476 = il2cpp_codegen_string_literal_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t853  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m556(L_1, _stringLiteral476, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m485(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t695 * L_7 = (JsonObject_t695 *)il2cpp_codegen_object_new (JsonObject_t695_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3689(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t700_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t854_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t853  L_14 = (KeyValuePair_2_t853 )InterfaceFuncInvoker0< KeyValuePair_2_t853  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t855_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t703 * L_15 = KeyValuePair_2_get_Value_m4097((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4097_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m4098((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4098_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t703 * L_19 = KeyValuePair_2_get_Value_m4097((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4097_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = GetDelegate_Invoke_m3738(L_19, L_20, /*hidden argument*/NULL);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t793_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetDelegate__ctor_m3737 (GetDelegate_t703 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m3738 (GetDelegate_t703 * __this, Object_t * ___source, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m3738((GetDelegate_t703 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t703(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetDelegate_BeginInvoke_m3739 (GetDelegate_t703 * __this, Object_t * ___source, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetDelegate_EndInvoke_m3740 (GetDelegate_t703 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m3741 (SetDelegate_t704 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m3742 (SetDelegate_t704 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m3742((SetDelegate_t704 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t704(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m3743 (SetDelegate_t704 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m3744 (SetDelegate_t704 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m3745 (ConstructorDelegate_t705 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m3746 (ConstructorDelegate_t705 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m3746((ConstructorDelegate_t705 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t705(Il2CppObject* delegate, ObjectU5BU5D_t146* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m3747 (ConstructorDelegate_t705 * __this, ObjectU5BU5D_t146* ___args, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m3748 (ConstructorDelegate_t705 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3749 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3750 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	{
		ConstructorInfo_t706 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t146* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m4099(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3751 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3752 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708 * __this, Object_t * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t146* L_2 = ((ReflectionUtils_t712_StaticFields*)ReflectionUtils_t712_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t146* >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3753 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3754 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709 * __this, Object_t * ___source, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3755 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3756 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t146* L_2 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t146* >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3757 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3758 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m3759 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ReflectionUtils_t712_StaticFields*)ReflectionUtils_t712_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m3760 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t856* L_1 = (ConstructorInfoU5BU5D_t856*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t856* >::Invoke(71 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors() */, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t806_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t859_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t706 * ReflectionUtils_GetConstructorInfo_m3761 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t702* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		IEnumerable_1_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		IEnumerator_1_t859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t706 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t857* V_5 = {0};
	ParameterInfo_t858 * V_6 = {0};
	ParameterInfoU5BU5D_t857* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t706 * V_9 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		Object_t* L_1 = ReflectionUtils_GetConstructors_m3760(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t806_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t706 * L_5 = (ConstructorInfo_t706 *)InterfaceFuncInvoker0< ConstructorInfo_t706 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t859_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t706 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t857* L_7 = (ParameterInfoU5BU5D_t857*)VirtFuncInvoker0< ParameterInfoU5BU5D_t857* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t702* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t857* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t706 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t857* L_11 = (ParameterInfoU5BU5D_t857*)VirtFuncInvoker0< ParameterInfoU5BU5D_t857* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t857* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t858 **)(ParameterInfo_t858 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t858 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			TypeU5BU5D_t702* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t857* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t706 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t706 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t706 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m3762 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t860* L_1 = (PropertyInfoU5BU5D_t860*)VirtFuncInvoker1< PropertyInfoU5BU5D_t860*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m3763 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t861* L_1 = (FieldInfoU5BU5D_t861*)VirtFuncInvoker1< FieldInfoU5BU5D_t861*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3764 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m3765 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t705 * ReflectionUtils_GetContructor_m3766 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t702* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t702* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		ConstructorDelegate_t705 * L_2 = ReflectionUtils_GetConstructorByReflection_m3768(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern TypeInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorDelegate_t705_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3750_MethodInfo_var;
extern "C" ConstructorDelegate_t705 * ReflectionUtils_GetConstructorByReflection_m3767 (Object_t * __this /* static, unused */, ConstructorInfo_t706 * ___constructorInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		ConstructorDelegate_t705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3750_MethodInfo_var = il2cpp_codegen_method_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707 *)il2cpp_codegen_object_new (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3749(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707 * L_1 = V_0;
		ConstructorInfo_t706 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t707 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3750_MethodInfo_var };
		ConstructorDelegate_t705 * L_5 = (ConstructorDelegate_t705 *)il2cpp_codegen_object_new (ConstructorDelegate_t705_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m3745(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t705 * ReflectionUtils_GetConstructorByReflection_m3768 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t702* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t706 * V_0 = {0};
	ConstructorDelegate_t705 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t702* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		ConstructorInfo_t706 * L_2 = ReflectionUtils_GetConstructorInfo_m3761(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t706 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t705 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t706 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		ConstructorDelegate_t705 * L_5 = ReflectionUtils_GetConstructorByReflection_m3767(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t703 * ReflectionUtils_GetGetMethod_m3769 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		GetDelegate_t703 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3771(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t703 * ReflectionUtils_GetGetMethod_m3770 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		GetDelegate_t703 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3772(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t703_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3752_MethodInfo_var;
extern "C" GetDelegate_t703 * ReflectionUtils_GetGetMethodByReflection_m3771 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		GetDelegate_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3752_MethodInfo_var = il2cpp_codegen_method_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3751(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m3764(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t708 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3752_MethodInfo_var };
		GetDelegate_t703 * L_6 = (GetDelegate_t703 *)il2cpp_codegen_object_new (GetDelegate_t703_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m3737(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t703_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3754_MethodInfo_var;
extern "C" GetDelegate_t703 * ReflectionUtils_GetGetMethodByReflection_m3772 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		GetDelegate_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3754_MethodInfo_var = il2cpp_codegen_method_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3753(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t709 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3754_MethodInfo_var };
		GetDelegate_t703 * L_5 = (GetDelegate_t703 *)il2cpp_codegen_object_new (GetDelegate_t703_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m3737(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t704 * ReflectionUtils_GetSetMethod_m3773 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		SetDelegate_t704 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3775(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t704 * ReflectionUtils_GetSetMethod_m3774 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		SetDelegate_t704 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3776(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t712_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t704_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3756_MethodInfo_var;
extern "C" SetDelegate_t704 * ReflectionUtils_GetSetMethodByReflection_m3775 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		ReflectionUtils_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		SetDelegate_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3756_MethodInfo_var = il2cpp_codegen_method_info_from_index(426);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3755(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t712_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m3765(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t710 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3756_MethodInfo_var };
		SetDelegate_t704 * L_6 = (SetDelegate_t704 *)il2cpp_codegen_object_new (SetDelegate_t704_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m3741(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t704_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3758_MethodInfo_var;
extern "C" SetDelegate_t704 * ReflectionUtils_GetSetMethodByReflection_m3776 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		SetDelegate_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3758_MethodInfo_var = il2cpp_codegen_method_info_from_index(427);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3757(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t711 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3758_MethodInfo_var };
		SetDelegate_t704 * L_5 = (SetDelegate_t704 *)il2cpp_codegen_object_new (SetDelegate_t704_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m3741(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C" void WrapperlessIcall__ctor_m3777 (WrapperlessIcall_t713 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m3778 (IL2CPPStructAlignmentAttribute_t714 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t715_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t718_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t716_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t717_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m3779 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(532);
		AttributeHelperEngine_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		ExecuteInEditModeU5BU5D_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		RequireComponentU5BU5D_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t718_StaticFields*)AttributeHelperEngine_t718_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t715*)SZArrayNew(DisallowMultipleComponentU5BU5D_t715_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t718_StaticFields*)AttributeHelperEngine_t718_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t716*)SZArrayNew(ExecuteInEditModeU5BU5D_t716_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t718_StaticFields*)AttributeHelperEngine_t718_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t717*)SZArrayNew(RequireComponentU5BU5D_t717_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const Il2CppType* MonoBehaviour_t33_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t719_0_0_0_var;
extern TypeInfo* Stack_1_t862_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m4100_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m4101_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m4102_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3780 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t33_0_0_0_var = il2cpp_codegen_type_from_index(108);
		DisallowMultipleComponent_t719_0_0_0_var = il2cpp_codegen_type_from_index(533);
		Stack_1_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(539);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Stack_1__ctor_m4100_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484076);
		Stack_1_Push_m4101_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484077);
		Stack_1_Pop_m4102_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484078);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t862 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t146* V_2 = {0};
	{
		Stack_1_t862 * L_0 = (Stack_1_t862 *)il2cpp_codegen_object_new (Stack_1_t862_il2cpp_TypeInfo_var);
		Stack_1__ctor_m4100(L_0, /*hidden argument*/Stack_1__ctor_m4100_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t862 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m4101(L_1, L_2, /*hidden argument*/Stack_1_Push_m4101_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t33_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t862 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m4102(L_8, /*hidden argument*/Stack_1_Pop_m4102_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t719_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t146* L_12 = (ObjectU5BU5D_t146*)VirtFuncInvoker2< ObjectU5BU5D_t146*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t146* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t862 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const Il2CppType* RequireComponent_t720_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t33_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponent_t720_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t863_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4103_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m4104_MethodInfo_var;
extern "C" TypeU5BU5D_t702* AttributeHelperEngine_GetRequiredComponents_m3781 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t720_0_0_0_var = il2cpp_codegen_type_from_index(538);
		MonoBehaviour_t33_0_0_0_var = il2cpp_codegen_type_from_index(108);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		RequireComponent_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		List_1_t863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		List_1__ctor_m4103_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484079);
		List_1_ToArray_m4104_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484080);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t863 * V_0 = {0};
	ObjectU5BU5D_t146* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t720 * V_3 = {0};
	TypeU5BU5D_t702* V_4 = {0};
	{
		V_0 = (List_1_t863 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t720_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)VirtFuncInvoker2< ObjectU5BU5D_t146*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t146* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t720 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), RequireComponent_t720_il2cpp_TypeInfo_var));
		List_1_t863 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t146* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t33_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t702* L_11 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 3));
		RequireComponent_t720 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t702* L_14 = L_11;
		RequireComponent_t720 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t702* L_17 = L_14;
		RequireComponent_t720 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t702* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t863 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t863 * L_22 = (List_1_t863 *)il2cpp_codegen_object_new (List_1_t863_il2cpp_TypeInfo_var);
		List_1__ctor_m4103(L_22, /*hidden argument*/List_1__ctor_m4103_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t720 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t863 * L_25 = V_0;
		RequireComponent_t720 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t720 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t863 * L_30 = V_0;
		RequireComponent_t720 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t720 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t863 * L_35 = V_0;
		RequireComponent_t720 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t146* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t33_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t863 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t702*)NULL;
	}

IL_00f7:
	{
		List_1_t863 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t702* L_48 = List_1_ToArray_m4104(L_47, /*hidden argument*/List_1_ToArray_m4104_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t722_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t33_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3782 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t722_0_0_0_var = il2cpp_codegen_type_from_index(536);
		MonoBehaviour_t33_0_0_0_var = il2cpp_codegen_type_from_index(108);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t146* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t722_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)VirtFuncInvoker2< ObjectU5BU5D_t146*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t146* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t33_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern "C" void DisallowMultipleComponent__ctor_m3783 (DisallowMultipleComponent_t719 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern "C" void RequireComponent__ctor_m3784 (RequireComponent_t720 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern "C" void AddComponentMenu__ctor_m3785 (AddComponentMenu_t721 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern "C" void AddComponentMenu__ctor_m3786 (AddComponentMenu_t721 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern "C" void ExecuteInEditMode__ctor_m3787 (ExecuteInEditMode_t722 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"



// System.Void UnityEngine.HideInInspector::.ctor()
extern "C" void HideInInspector__ctor_m3788 (HideInInspector_t723 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m3789 (SetupCoroutine_t724 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m3790 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t146* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t146*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t146* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m485(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t146* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t864 *, Object_t *, ObjectU5BU5D_t146*, ParameterModifierU5BU5D_t865*, CultureInfo_t833 *, StringU5BU5D_t31* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t864 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t865*)(ParameterModifierU5BU5D_t865*)NULL, (CultureInfo_t833 *)NULL, (StringU5BU5D_t31*)(StringU5BU5D_t31*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m3791 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t146* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t146*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t146* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t146* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t864 *, Object_t *, ObjectU5BU5D_t146*, ParameterModifierU5BU5D_t865*, CultureInfo_t833 *, StringU5BU5D_t31* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t864 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t865*)(ParameterModifierU5BU5D_t865*)NULL, (CultureInfo_t833 *)NULL, (StringU5BU5D_t31*)(StringU5BU5D_t31*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C" void WritableAttribute__ctor_m3792 (WritableAttribute_t725 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern "C" void AssemblyIsEditorAssembly__ctor_m3793 (AssemblyIsEditorAssembly_t726 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern TypeInfo* UserProfile_t737_il2cpp_TypeInfo_var;
extern "C" UserProfile_t737 * GcUserProfileData_ToUserProfile_m3794 (GcUserProfileData_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t737_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t353 * L_3 = (__this->___image_3);
		UserProfile_t737 * L_4 = (UserProfile_t737 *)il2cpp_codegen_object_new (UserProfile_t737_il2cpp_TypeInfo_var);
		UserProfile__ctor_m3814(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern Il2CppCodeGenString* _stringLiteral477;
extern "C" void GcUserProfileData_AddToArray_m3795 (GcUserProfileData_t727 * __this, UserProfileU5BU5D_t557** ___array, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral477 = il2cpp_codegen_string_literal_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t557** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t557**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t557**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t557** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t737 * L_5 = GcUserProfileData_ToUserProfile_m3794(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t557**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t557**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t557**)L_3)), L_5);
		*((UserProfile_t737 **)(UserProfile_t737 **)SZArrayLdElema((*((UserProfileU5BU5D_t557**)L_3)), L_4)) = (UserProfile_t737 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m415(NULL /*static, unused*/, _stringLiteral477, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern TypeInfo* AchievementDescription_t739_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t739 * GcAchievementDescriptionData_ToAchievementDescription_m3796 (GcAchievementDescriptionData_t728 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(376);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t353 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t353 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t353 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t353 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t739 * L_7 = (AchievementDescription_t739 *)il2cpp_codegen_object_new (AchievementDescription_t739_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m3834(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern TypeInfo* Achievement_t738_il2cpp_TypeInfo_var;
extern "C" Achievement_t738 * GcAchievementData_ToAchievement_m3797 (GcAchievementData_t729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t578  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m4105((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t578  L_5 = DateTime_AddSeconds_m4106((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t738 * L_6 = (Achievement_t738 *)il2cpp_codegen_object_new (Achievement_t738_il2cpp_TypeInfo_var);
		Achievement__ctor_m3823(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t729_marshal(const GcAchievementData_t729& unmarshaled, GcAchievementData_t729_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t729_marshal_back(const GcAchievementData_t729_marshaled& marshaled, GcAchievementData_t729& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t729_marshal_cleanup(GcAchievementData_t729_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern TypeInfo* Score_t740_il2cpp_TypeInfo_var;
extern "C" Score_t740 * GcScoreData_ToScore_m3798 (GcScoreData_t730 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t578  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m4105((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t578  L_5 = DateTime_AddSeconds_m4106((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t740 * L_8 = (Score_t740 *)il2cpp_codegen_object_new (Score_t740_il2cpp_TypeInfo_var);
		Score__ctor_m3845(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t730_marshal(const GcScoreData_t730& unmarshaled, GcScoreData_t730_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t730_marshal_back(const GcScoreData_t730_marshaled& marshaled, GcScoreData_t730& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t730_marshal_cleanup(GcScoreData_t730_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"

// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m3799 (Resolution_t731 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern "C" void Resolution_set_width_m3800 (Resolution_t731 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m3801 (Resolution_t731 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m3802 (Resolution_t731 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m3803 (Resolution_t731 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m3804 (Resolution_t731 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral478;
extern "C" String_t* Resolution_ToString_m3805 (Resolution_t731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral478 = il2cpp_codegen_string_literal_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t146* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t146* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m3215(NULL /*static, unused*/, _stringLiteral478, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatformMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern TypeInfo* UserProfileU5BU5D_t557_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m3806 (LocalUser_t558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m3813(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t736*)((UserProfileU5BU5D_t557*)SZArrayNew(UserProfileU5BU5D_t557_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t749_il2cpp_TypeInfo_var;
extern "C" void LocalUser_Authenticate_m3807 (LocalUser_t558 * __this, Action_1_t145 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ActivePlatform_get_Instance_m3872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t145 * L_1 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker2< Object_t *, Action_1_t145 * >::Invoke(4 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>) */, ISocialPlatform_t749_il2cpp_TypeInfo_var, L_0, __this, L_1);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m3808 (LocalUser_t558 * __this, IUserProfileU5BU5D_t736* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t736* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m3809 (LocalUser_t558 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m3810 (LocalUser_t558 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m3811 (LocalUser_t558 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_underage()
extern "C" bool LocalUser_get_underage_m3812 (LocalUser_t558 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Underage_7);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern TypeInfo* Texture2D_t353_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral479;
extern Il2CppCodeGenString* _stringLiteral281;
extern "C" void UserProfile__ctor_m3813 (UserProfile_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		_stringLiteral479 = il2cpp_codegen_string_literal_from_index(479);
		_stringLiteral281 = il2cpp_codegen_string_literal_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = _stringLiteral479;
		__this->___m_ID_1 = _stringLiteral281;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t353 * L_0 = (Texture2D_t353 *)il2cpp_codegen_object_new (Texture2D_t353_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2798(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m3814 (UserProfile_t737 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t353 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t353 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t751_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral480;
extern "C" String_t* UserProfile_ToString_m3815 (UserProfile_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		UserState_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral480 = il2cpp_codegen_string_literal_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t146* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t146* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t146* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t751_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m418(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m3816 (UserProfile_t737 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m3817 (UserProfile_t737 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m3818 (UserProfile_t737 * __this, Texture2D_t353 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t353 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m3819 (UserProfile_t737 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m3820 (UserProfile_t737 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m3821 (UserProfile_t737 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m3822 (UserProfile_t737 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m3823 (Achievement_t738 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t578  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t578  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t578_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m3824 (Achievement_t738 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t578_il2cpp_TypeInfo_var);
		DateTime_t578  L_2 = ((DateTime_t578_StaticFields*)DateTime_t578_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern Il2CppCodeGenString* _stringLiteral481;
extern "C" void Achievement__ctor_m3825 (Achievement_t738 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral481 = il2cpp_codegen_string_literal_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		Achievement__ctor_m3824(__this, _stringLiteral481, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t170_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t578_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral480;
extern "C" String_t* Achievement_ToString_m3826 (Achievement_t738 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Double_t170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		DateTime_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral480 = il2cpp_codegen_string_literal_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t146* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(5 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t170_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t146* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t146* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t146* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_18 = L_17;
		DateTime_t578  L_19 = (DateTime_t578 )VirtFuncInvoker0< DateTime_t578  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t578  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t578_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m418(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m3827 (Achievement_t738 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m3828 (Achievement_t738 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m3829 (Achievement_t738 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m3830 (Achievement_t738 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m3831 (Achievement_t738 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m3832 (Achievement_t738 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t578  Achievement_get_lastReportedDate_m3833 (Achievement_t738 * __this, const MethodInfo* method)
{
	{
		DateTime_t578  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m3834 (AchievementDescription_t739 * __this, String_t* ___id, String_t* ___title, Texture2D_t353 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t353 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral480;
extern "C" String_t* AchievementDescription_ToString_m3835 (AchievementDescription_t739 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral480 = il2cpp_codegen_string_literal_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t146* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t146* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t146* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t146* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t146* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, _stringLiteral480);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)_stringLiteral480;
		ObjectU5BU5D_t146* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m418(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m3836 (AchievementDescription_t739 * __this, Texture2D_t353 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t353 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m3837 (AchievementDescription_t739 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m3838 (AchievementDescription_t739 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m3839 (AchievementDescription_t739 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m3840 (AchievementDescription_t739 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m3841 (AchievementDescription_t739 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m3842 (AchievementDescription_t739 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m3843 (AchievementDescription_t739 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t578_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral281;
extern "C" void Score__ctor_m3844 (Score_t740 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral281 = il2cpp_codegen_string_literal_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t578_il2cpp_TypeInfo_var);
		DateTime_t578  L_2 = DateTime_get_Now_m3993(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m3845(__this, L_0, L_1, _stringLiteral281, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3845 (Score_t740 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t578  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t578  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t169_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t578_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral482;
extern Il2CppCodeGenString* _stringLiteral483;
extern Il2CppCodeGenString* _stringLiteral484;
extern Il2CppCodeGenString* _stringLiteral485;
extern Il2CppCodeGenString* _stringLiteral486;
extern "C" String_t* Score_ToString_m3846 (Score_t740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Int64_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		DateTime_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral482 = il2cpp_codegen_string_literal_from_index(482);
		_stringLiteral483 = il2cpp_codegen_string_literal_from_index(483);
		_stringLiteral484 = il2cpp_codegen_string_literal_from_index(484);
		_stringLiteral485 = il2cpp_codegen_string_literal_from_index(485);
		_stringLiteral486 = il2cpp_codegen_string_literal_from_index(486);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral482);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)_stringLiteral482;
		ObjectU5BU5D_t146* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t146* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, _stringLiteral483);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)_stringLiteral483;
		ObjectU5BU5D_t146* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t169_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t146* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral484);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)_stringLiteral484;
		ObjectU5BU5D_t146* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t146* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, _stringLiteral485);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)_stringLiteral485;
		ObjectU5BU5D_t146* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t146* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, _stringLiteral486);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)_stringLiteral486;
		ObjectU5BU5D_t146* L_17 = L_16;
		DateTime_t578  L_18 = (__this->___m_Date_0);
		DateTime_t578  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t578_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m418(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3847 (Score_t740 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3848 (Score_t740 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3849 (Score_t740 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3850 (Score_t740 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t740_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t813_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral487;
extern "C" void Leaderboard__ctor_m3851 (Leaderboard_t560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ScoreU5BU5D_t813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		_stringLiteral487 = il2cpp_codegen_string_literal_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, _stringLiteral487);
		Range_t743  L_0 = {0};
		Range__ctor_m3874(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t743  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t740 * L_1 = (Score_t740 *)il2cpp_codegen_object_new (Score_t740_il2cpp_TypeInfo_var);
		Score__ctor_m3844(L_1, _stringLiteral487, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t742*)((ScoreU5BU5D_t813*)SZArrayNew(ScoreU5BU5D_t813_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = _stringLiteral487;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t171_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t828_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t752_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t753_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral488;
extern Il2CppCodeGenString* _stringLiteral489;
extern Il2CppCodeGenString* _stringLiteral490;
extern Il2CppCodeGenString* _stringLiteral491;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral492;
extern Il2CppCodeGenString* _stringLiteral493;
extern Il2CppCodeGenString* _stringLiteral494;
extern Il2CppCodeGenString* _stringLiteral495;
extern Il2CppCodeGenString* _stringLiteral496;
extern "C" String_t* Leaderboard_ToString_m3852 (Leaderboard_t560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Boolean_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		UInt32_t828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		UserScope_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		TimeScope_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral488 = il2cpp_codegen_string_literal_from_index(488);
		_stringLiteral489 = il2cpp_codegen_string_literal_from_index(489);
		_stringLiteral490 = il2cpp_codegen_string_literal_from_index(490);
		_stringLiteral491 = il2cpp_codegen_string_literal_from_index(491);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral492 = il2cpp_codegen_string_literal_from_index(492);
		_stringLiteral493 = il2cpp_codegen_string_literal_from_index(493);
		_stringLiteral494 = il2cpp_codegen_string_literal_from_index(494);
		_stringLiteral495 = il2cpp_codegen_string_literal_from_index(495);
		_stringLiteral496 = il2cpp_codegen_string_literal_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	Range_t743  V_0 = {0};
	Range_t743  V_1 = {0};
	{
		ObjectU5BU5D_t146* L_0 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral488);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)_stringLiteral488;
		ObjectU5BU5D_t146* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t146* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral489);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)_stringLiteral489;
		ObjectU5BU5D_t146* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t146* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral490);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)_stringLiteral490;
		ObjectU5BU5D_t146* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t171_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t146* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, _stringLiteral491);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)_stringLiteral491;
		ObjectU5BU5D_t146* L_12 = L_11;
		Range_t743  L_13 = (Range_t743 )VirtFuncInvoker0< Range_t743  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t146* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, _stringLiteral17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)_stringLiteral17;
		ObjectU5BU5D_t146* L_18 = L_17;
		Range_t743  L_19 = (Range_t743 )VirtFuncInvoker0< Range_t743  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t146* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, _stringLiteral492);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)_stringLiteral492;
		ObjectU5BU5D_t146* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t828_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t146* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, _stringLiteral493);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)_stringLiteral493;
		ObjectU5BU5D_t146* L_29 = L_28;
		IScoreU5BU5D_t742* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t146* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, _stringLiteral494);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)_stringLiteral494;
		ObjectU5BU5D_t146* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t752_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t146* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, _stringLiteral495);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)_stringLiteral495;
		ObjectU5BU5D_t146* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t753_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t146* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, _stringLiteral496);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)_stringLiteral496;
		ObjectU5BU5D_t146* L_44 = L_43;
		StringU5BU5D_t31* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t149_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m418(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m3853 (Leaderboard_t560 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m3854 (Leaderboard_t560 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m3855 (Leaderboard_t560 * __this, IScoreU5BU5D_t742* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t742* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m3856 (Leaderboard_t560 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t31* Leaderboard_GetUserFilter_m3857 (Leaderboard_t560 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t31* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3858 (Leaderboard_t560 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3859 (Leaderboard_t560 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3860 (Leaderboard_t560 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3861 (Leaderboard_t560 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t743  Leaderboard_get_range_m3862 (Leaderboard_t560 * __this, const MethodInfo* method)
{
	{
		Range_t743  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3863 (Leaderboard_t560 * __this, Range_t743  ___value, const MethodInfo* method)
{
	{
		Range_t743  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3864 (Leaderboard_t560 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3865 (Leaderboard_t560 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m3866 (HitInfo_t744 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t9 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m3324(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m3867 (Object_t * __this /* static, unused */, HitInfo_t744  ___lhs, HitInfo_t744  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t9 * L_0 = ((&___lhs)->___target_0);
		GameObject_t9 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m466(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t82 * L_3 = ((&___lhs)->___camera_1);
		Camera_t82 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m466(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m3868 (Object_t * __this /* static, unused */, HitInfo_t744  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t9 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m538(NULL /*static, unused*/, L_0, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t82 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m538(NULL /*static, unused*/, L_2, (Object_t73 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct Component_t174;
struct GUILayer_t570;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t174;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m530_gshared (Component_t174 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m530(__this, method) (( Object_t * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t570_m4107(__this, method) (( GUILayer_t570 * (*) (Component_t174 *, const MethodInfo*))Component_GetComponent_TisObject_t_m530_gshared)(__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* HitInfoU5BU5D_t745_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t744_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t747_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m3869 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HitInfoU5BU5D_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		HitInfo_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		SendMouseEvents_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t744  V_0 = {0};
	HitInfo_t744  V_1 = {0};
	HitInfo_t744  V_2 = {0};
	HitInfo_t744  V_3 = {0};
	HitInfo_t744  V_4 = {0};
	HitInfo_t744  V_5 = {0};
	HitInfo_t744  V_6 = {0};
	HitInfo_t744  V_7 = {0};
	HitInfo_t744  V_8 = {0};
	{
		HitInfoU5BU5D_t745* L_0 = ((HitInfoU5BU5D_t745*)SZArrayNew(HitInfoU5BU5D_t745_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t744  L_1 = V_0;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t745* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t744  L_3 = V_1;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t745* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t744  L_5 = V_2;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t745* L_6 = ((HitInfoU5BU5D_t745*)SZArrayNew(HitInfoU5BU5D_t745_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t744  L_7 = V_3;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t745* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t744  L_9 = V_4;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t745* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t744  L_11 = V_5;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t745* L_12 = ((HitInfoU5BU5D_t745*)SZArrayNew(HitInfoU5BU5D_t745_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t744  L_13 = V_6;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t745* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t744  L_15 = V_7;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t745* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t744  L_17 = V_8;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t747_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t746_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t744_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t570_m4107_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m3870 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		SendMouseEvents_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		CameraU5BU5D_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(549);
		HitInfo_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		Component_GetComponent_TisGUILayer_t570_m4107_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484081);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t40  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t82 * V_3 = {0};
	CameraU5BU5D_t746* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t148  V_6 = {0};
	GUILayer_t570 * V_7 = {0};
	GUIElement_t568 * V_8 = {0};
	Ray_t88  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t9 * V_12 = {0};
	GameObject_t9 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t744  V_15 = {0};
	Vector3_t40  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		Vector3_t40  L_0 = Input_get_mousePosition_m572(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m3243(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		CameraU5BU5D_t746* L_2 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		CameraU5BU5D_t746* L_3 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t746*)SZArrayNew(CameraU5BU5D_t746_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		CameraU5BU5D_t746* L_6 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m3244(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_7 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t744  L_9 = V_15;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_12 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		CameraU5BU5D_t746* L_14 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t746* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t82 **)(Camera_t82 **)SZArrayLdElema(L_15, L_17));
		Camera_t82 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m466(NULL /*static, unused*/, L_18, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t82 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t566 * L_22 = Camera_get_targetTexture_m3234(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m538(NULL /*static, unused*/, L_22, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t82 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t148  L_25 = Camera_get_pixelRect_m3232(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t40  L_26 = V_0;
		bool L_27 = Rect_Contains_m3046((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t82 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t570 * L_29 = Component_GetComponent_TisGUILayer_t570_m4107(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t570_m4107_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t570 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m544(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t570 * L_32 = V_7;
		Vector3_t40  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t568 * L_34 = GUILayer_HitTest_m2804(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t568 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m544(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_37 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t568 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t9 * L_39 = Component_get_gameObject_m421(L_38, /*hidden argument*/NULL);
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t745* L_40 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t82 * L_41 = V_3;
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_42 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t9 *)NULL;
		HitInfoU5BU5D_t745* L_43 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t82 *)NULL;
	}

IL_0141:
	{
		Camera_t82 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m3231(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t82 * L_46 = V_3;
		Vector3_t40  L_47 = V_0;
		NullCheck(L_46);
		Ray_t88  L_48 = Camera_ScreenPointToRay_m624(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t40  L_49 = Ray_get_direction_m634((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m2311(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t82 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m2318(L_53, /*hidden argument*/NULL);
		Camera_t82 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m2319(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t82 * L_59 = V_3;
		Ray_t88  L_60 = V_9;
		float L_61 = V_11;
		Camera_t82 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m2328(L_62, /*hidden argument*/NULL);
		Camera_t82 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m3231(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t9 * L_66 = Camera_RaycastTry_m3248(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t9 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m538(NULL /*static, unused*/, L_67, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_69 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t9 * L_70 = V_12;
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t745* L_71 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t82 * L_72 = V_3;
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t82 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m3239(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t82 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m3239(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_77 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t9 *)NULL;
		HitInfoU5BU5D_t745* L_78 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t82 *)NULL;
	}

IL_0226:
	{
		Camera_t82 * L_79 = V_3;
		Ray_t88  L_80 = V_9;
		float L_81 = V_11;
		Camera_t82 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m2328(L_82, /*hidden argument*/NULL);
		Camera_t82 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m3231(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t9 * L_86 = Camera_RaycastTry2D_m3250(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t9 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m538(NULL /*static, unused*/, L_87, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_89 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t9 * L_90 = V_13;
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t745* L_91 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t82 * L_92 = V_3;
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t82 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m3239(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t82 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m3239(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_97 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t9 *)NULL;
		HitInfoU5BU5D_t745* L_98 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t82 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t746* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_103 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m3871(NULL /*static, unused*/, L_102, (*(HitInfo_t744 *)((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_107 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t175_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t747_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t744_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral497;
extern Il2CppCodeGenString* _stringLiteral498;
extern Il2CppCodeGenString* _stringLiteral499;
extern Il2CppCodeGenString* _stringLiteral500;
extern Il2CppCodeGenString* _stringLiteral501;
extern Il2CppCodeGenString* _stringLiteral502;
extern Il2CppCodeGenString* _stringLiteral503;
extern "C" void SendMouseEvents_SendEvents_m3871 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t744  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		SendMouseEvents_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		HitInfo_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		_stringLiteral497 = il2cpp_codegen_string_literal_from_index(497);
		_stringLiteral498 = il2cpp_codegen_string_literal_from_index(498);
		_stringLiteral499 = il2cpp_codegen_string_literal_from_index(499);
		_stringLiteral500 = il2cpp_codegen_string_literal_from_index(500);
		_stringLiteral501 = il2cpp_codegen_string_literal_from_index(501);
		_stringLiteral502 = il2cpp_codegen_string_literal_from_index(502);
		_stringLiteral503 = il2cpp_codegen_string_literal_from_index(503);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t744  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t175_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m632(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m626(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t744  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m3868(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_5 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t744  L_7 = ___hit;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t745* L_8 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m3866(((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_8, L_9)), _stringLiteral497, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_11 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m3868(NULL /*static, unused*/, (*(HitInfo_t744 *)((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t744  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_15 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m3867(NULL /*static, unused*/, L_14, (*(HitInfo_t744 *)((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_18 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m3866(((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_18, L_19)), _stringLiteral498, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_20 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m3866(((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_20, L_21)), _stringLiteral499, /*hidden argument*/NULL);
		HitInfoU5BU5D_t745* L_22 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t744_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t744  L_24 = V_2;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_25 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m3868(NULL /*static, unused*/, (*(HitInfo_t744 *)((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_28 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m3866(((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_28, L_29)), _stringLiteral500, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t744  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_31 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m3867(NULL /*static, unused*/, L_30, (*(HitInfo_t744 *)((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t744  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m3868(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m3866((&___hit), _stringLiteral501, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_36 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m3868(NULL /*static, unused*/, (*(HitInfo_t744 *)((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_39 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m3866(((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_39, L_40)), _stringLiteral502, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t744  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m3868(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m3866((&___hit), _stringLiteral503, /*hidden argument*/NULL);
		HitInfo_SendMessage_m3866((&___hit), _stringLiteral501, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t747_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t745* L_43 = ((SendMouseEvents_t747_StaticFields*)SendMouseEvents_t747_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t744  L_45 = ___hit;
		*((HitInfo_t744 *)(HitInfo_t744 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
// UnityEngine.Social
#include "UnityEngine_UnityEngine_Social.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_0.h"


// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" Object_t * Social_get_Active_m413 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Object_t * L_0 = ActivePlatform_get_Instance_m3872(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern TypeInfo* ISocialPlatform_t749_il2cpp_TypeInfo_var;
extern "C" Object_t * Social_get_localUser_m962 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.ISocialPlatform::get_localUser() */, ISocialPlatform_t749_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t749_il2cpp_TypeInfo_var;
extern "C" void Social_ReportProgress_m416 (Object_t * __this /* static, unused */, String_t* ___achievementID, double ___progress, Action_1_t145 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___achievementID;
		double L_2 = ___progress;
		Action_1_t145 * L_3 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, Action_1_t145 * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>) */, ISocialPlatform_t749_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Social::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern TypeInfo* ISocialPlatform_t749_il2cpp_TypeInfo_var;
extern "C" void Social_LoadAchievements_m974 (Object_t * __this /* static, unused */, Action_1_t275 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t275 * L_1 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t275 * >::Invoke(2 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>) */, ISocialPlatform_t749_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t749_il2cpp_TypeInfo_var;
extern "C" void Social_ReportScore_m971 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t145 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		int64_t L_1 = ___score;
		String_t* L_2 = ___board;
		Action_1_t145 * L_3 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker3< int64_t, String_t*, Action_1_t145 * >::Invoke(3 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>) */, ISocialPlatform_t749_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatform.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"


// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
extern TypeInfo* ActivePlatform_t750_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivePlatform_get_Instance_m3872 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivePlatform_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivePlatform_t750_StaticFields*)ActivePlatform_t750_il2cpp_TypeInfo_var->static_fields)->____active_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ActivePlatform_SelectSocialPlatform_m3873(NULL /*static, unused*/, /*hidden argument*/NULL);
		((ActivePlatform_t750_StaticFields*)ActivePlatform_t750_il2cpp_TypeInfo_var->static_fields)->____active_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = ((ActivePlatform_t750_StaticFields*)ActivePlatform_t750_il2cpp_TypeInfo_var->static_fields)->____active_0;
		return L_2;
	}
}
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
extern TypeInfo* GameCenterPlatform_t144_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivePlatform_SelectSocialPlatform_m3873 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameCenterPlatform_t144 * L_0 = (GameCenterPlatform_t144 *)il2cpp_codegen_object_new (GameCenterPlatform_t144_il2cpp_TypeInfo_var);
		GameCenterPlatform__ctor_m2698(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m3874 (Range_t743 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"



// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" void PropertyAttribute__ctor_m3875 (PropertyAttribute_t754 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m3876 (TooltipAttribute_t755 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3875(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" void SpaceAttribute__ctor_m3877 (SpaceAttribute_t756 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3875(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern "C" void RangeAttribute__ctor_m3878 (RangeAttribute_t757 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3875(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TextAreaAttribute__ctor_m3879 (TextAreaAttribute_t758 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3875(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" void SelectionBaseAttribute__ctor_m3880 (SelectionBaseAttribute_t759 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m3881 (SliderState_t760 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m3882 (StackTraceUtility_t761 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t761_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m3883 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t761_StaticFields*)StackTraceUtility_t761_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t761_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m3884 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		((StackTraceUtility_t761_StaticFields*)StackTraceUtility_t761_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t156_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t761_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m3885 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		StackTraceUtility_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t156 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t156 * L_0 = (StackTrace_t156 *)il2cpp_codegen_object_new (StackTrace_t156_il2cpp_TypeInfo_var);
		StackTrace__ctor_m4108(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t156 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m3890(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m4020(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral504;
extern Il2CppCodeGenString* _stringLiteral505;
extern Il2CppCodeGenString* _stringLiteral506;
extern Il2CppCodeGenString* _stringLiteral507;
extern Il2CppCodeGenString* _stringLiteral508;
extern Il2CppCodeGenString* _stringLiteral509;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m3886 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral504 = il2cpp_codegen_string_literal_from_index(504);
		_stringLiteral505 = il2cpp_codegen_string_literal_from_index(505);
		_stringLiteral506 = il2cpp_codegen_string_literal_from_index(506);
		_stringLiteral507 = il2cpp_codegen_string_literal_from_index(507);
		_stringLiteral508 = il2cpp_codegen_string_literal_from_index(508);
		_stringLiteral509 = il2cpp_codegen_string_literal_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m969(L_1, _stringLiteral504, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m969(L_3, _stringLiteral505, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m969(L_5, _stringLiteral506, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m969(L_7, _stringLiteral507, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m969(L_9, _stringLiteral508, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m969(L_11, _stringLiteral509, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t761_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m3887 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m3888(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m438(NULL /*static, unused*/, L_3, _stringLiteral19, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t143_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t164_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t156_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t761_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral510;
extern Il2CppCodeGenString* _stringLiteral511;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral107;
extern Il2CppCodeGenString* _stringLiteral512;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m3888 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		Exception_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StringBuilder_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTrace_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		StackTraceUtility_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		_stringLiteral510 = il2cpp_codegen_string_literal_from_index(510);
		_stringLiteral511 = il2cpp_codegen_string_literal_from_index(511);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		_stringLiteral512 = il2cpp_codegen_string_literal_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t143 * V_0 = {0};
	StringBuilder_t164 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t156 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t274 * L_1 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m963(L_1, _stringLiteral510, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t143 *)IsInst(L_2, Exception_t143_il2cpp_TypeInfo_var));
		Exception_t143 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t274 * L_4 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m963(L_4, _stringLiteral511, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t143 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t143 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m471(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t164 * L_10 = (StringBuilder_t164 *)il2cpp_codegen_object_new (StringBuilder_t164_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m469(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m471(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t143 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t143 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m438(NULL /*static, unused*/, L_19, _stringLiteral19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t143 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t143 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t143 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m465(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m471(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m419(NULL /*static, unused*/, L_33, _stringLiteral107, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m419(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t143 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t143 * L_41 = (Exception_t143 *)VirtFuncInvoker0< Exception_t143 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m992(NULL /*static, unused*/, _stringLiteral512, L_42, _stringLiteral19, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t143 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t143 * L_46 = (Exception_t143 *)VirtFuncInvoker0< Exception_t143 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t143 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t164 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m419(NULL /*static, unused*/, L_49, _stringLiteral19, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m4070(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t156 * L_51 = (StackTrace_t156 *)il2cpp_codegen_object_new (StackTrace_t156_il2cpp_TypeInfo_var);
		StackTrace__ctor_m4108(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t164 * L_52 = V_1;
		StackTrace_t156 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m3890(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m4070(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t164 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m474(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t163_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t164_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t761_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral513;
extern Il2CppCodeGenString* _stringLiteral514;
extern Il2CppCodeGenString* _stringLiteral515;
extern Il2CppCodeGenString* _stringLiteral516;
extern Il2CppCodeGenString* _stringLiteral517;
extern Il2CppCodeGenString* _stringLiteral518;
extern Il2CppCodeGenString* _stringLiteral462;
extern Il2CppCodeGenString* _stringLiteral463;
extern Il2CppCodeGenString* _stringLiteral519;
extern Il2CppCodeGenString* _stringLiteral520;
extern Il2CppCodeGenString* _stringLiteral521;
extern Il2CppCodeGenString* _stringLiteral522;
extern Il2CppCodeGenString* _stringLiteral523;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m3889 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		StringBuilder_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		StackTraceUtility_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		_stringLiteral513 = il2cpp_codegen_string_literal_from_index(513);
		_stringLiteral514 = il2cpp_codegen_string_literal_from_index(514);
		_stringLiteral515 = il2cpp_codegen_string_literal_from_index(515);
		_stringLiteral516 = il2cpp_codegen_string_literal_from_index(516);
		_stringLiteral517 = il2cpp_codegen_string_literal_from_index(517);
		_stringLiteral518 = il2cpp_codegen_string_literal_from_index(518);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		_stringLiteral519 = il2cpp_codegen_string_literal_from_index(519);
		_stringLiteral520 = il2cpp_codegen_string_literal_from_index(520);
		_stringLiteral521 = il2cpp_codegen_string_literal_from_index(521);
		_stringLiteral522 = il2cpp_codegen_string_literal_from_index(522);
		_stringLiteral523 = il2cpp_codegen_string_literal_from_index(523);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t31* V_0 = {0};
	StringBuilder_t164 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t163* L_3 = ((CharU5BU5D_t163*)SZArrayNew(CharU5BU5D_t163_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t31* L_4 = String_Split_m468(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m471(L_5, /*hidden argument*/NULL);
		StringBuilder_t164 * L_7 = (StringBuilder_t164 *)il2cpp_codegen_object_new (StringBuilder_t164_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m469(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t31* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t31* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m465((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t31* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t31* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m471(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m470(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m969(L_24, _stringLiteral513, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m969(L_27, _stringLiteral514, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t31* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m3886(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t31* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m3886(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m4025(L_38, _stringLiteral515, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2485(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m4025(L_44, _stringLiteral516, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m4025(L_46, _stringLiteral517, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m4025(L_48, _stringLiteral518, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m969(L_51, _stringLiteral462, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m4109(L_53, _stringLiteral463, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m969(L_55, _stringLiteral519, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m2505(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m4025(L_59, _stringLiteral520, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m4110(L_62, _stringLiteral463, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m2505(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m478(L_73, _stringLiteral521, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t761_StaticFields*)StackTraceUtility_t761_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m478(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m4111(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m4112(L_82, _stringLiteral522, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m2505(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m2507(L_88, L_89, _stringLiteral523, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m471(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m2507(L_91, L_93, _stringLiteral27, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t164 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m419(NULL /*static, unused*/, L_96, _stringLiteral19, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m4070(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t31* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t164 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m474(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t164_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t761_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral262;
extern Il2CppCodeGenString* _stringLiteral461;
extern Il2CppCodeGenString* _stringLiteral524;
extern Il2CppCodeGenString* _stringLiteral525;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral526;
extern Il2CppCodeGenString* _stringLiteral527;
extern Il2CppCodeGenString* _stringLiteral523;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m3890 (Object_t * __this /* static, unused */, StackTrace_t156 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		_stringLiteral262 = il2cpp_codegen_string_literal_from_index(262);
		_stringLiteral461 = il2cpp_codegen_string_literal_from_index(461);
		_stringLiteral524 = il2cpp_codegen_string_literal_from_index(524);
		_stringLiteral525 = il2cpp_codegen_string_literal_from_index(525);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral526 = il2cpp_codegen_string_literal_from_index(526);
		_stringLiteral527 = il2cpp_codegen_string_literal_from_index(527);
		_stringLiteral523 = il2cpp_codegen_string_literal_from_index(523);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t164 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t155 * V_2 = {0};
	MethodBase_t157 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t857* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t164 * L_0 = (StringBuilder_t164 *)il2cpp_codegen_object_new (StringBuilder_t164_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m469(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t156 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t155 * L_3 = (StackFrame_t155 *)VirtFuncInvoker1< StackFrame_t155 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t155 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t157 * L_5 = (MethodBase_t157 *)VirtFuncInvoker0< MethodBase_t157 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t157 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t157 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m471(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t164 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m4070(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t164 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m4070(L_17, _stringLiteral262, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t164 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m4070(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t164 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m4070(L_21, _stringLiteral461, /*hidden argument*/NULL);
		StringBuilder_t164 * L_22 = V_0;
		MethodBase_t157 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m4070(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t164 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m4070(L_25, _stringLiteral524, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t157 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t857* L_27 = (ParameterInfoU5BU5D_t857*)VirtFuncInvoker0< ParameterInfoU5BU5D_t857* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t164 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m4070(L_29, _stringLiteral525, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t164 * L_30 = V_0;
		ParameterInfoU5BU5D_t857* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t858 **)(ParameterInfo_t858 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t858 **)(ParameterInfo_t858 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m4070(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t857* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t164 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m4070(L_39, _stringLiteral27, /*hidden argument*/NULL);
		StackFrame_t155 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m417(NULL /*static, unused*/, L_44, _stringLiteral526, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m417(NULL /*static, unused*/, L_47, _stringLiteral527, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t164 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m4070(L_49, _stringLiteral523, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t761_StaticFields*)StackTraceUtility_t761_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m969(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t761_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t761_StaticFields*)StackTraceUtility_t761_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m471(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m471(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t761_StaticFields*)StackTraceUtility_t761_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m471(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m2485(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t164 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m4070(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t164 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m4070(L_63, _stringLiteral461, /*hidden argument*/NULL);
		StringBuilder_t164 * L_64 = V_0;
		StackFrame_t155 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m505((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m4070(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t164 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m4070(L_68, _stringLiteral27, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t164 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m4070(L_69, _stringLiteral19, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t156 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t164 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m474(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void UnityEngine.UnityException::.ctor()
extern Il2CppCodeGenString* _stringLiteral528;
extern "C" void UnityException__ctor_m3891 (UnityException_t287 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral528 = il2cpp_codegen_string_literal_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m449(__this, _stringLiteral528, /*hidden argument*/NULL);
		Exception_set_HResult_m4113(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m1060 (UnityException_t287 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m449(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m4113(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m3892 (UnityException_t287 * __this, String_t* ___message, Exception_t143 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t143 * L_1 = ___innerException;
		Exception__ctor_m4114(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m4113(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m3893 (UnityException_t287 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t809 * L_0 = ___info;
		StreamingContext_t810  L_1 = ___context;
		Exception__ctor_m4115(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m3894 (SharedBetweenAnimatorsAttribute_t762 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m3895 (StateMachineBehaviour_t763 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2693(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m3896 (StateMachineBehaviour_t763 * __this, Animator_t45 * ___animator, AnimatorStateInfo_t651  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m3897 (StateMachineBehaviour_t763 * __this, Animator_t45 * ___animator, AnimatorStateInfo_t651  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m3898 (StateMachineBehaviour_t763 * __this, Animator_t45 * ___animator, AnimatorStateInfo_t651  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m3899 (StateMachineBehaviour_t763 * __this, Animator_t45 * ___animator, AnimatorStateInfo_t651  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m3900 (StateMachineBehaviour_t763 * __this, Animator_t45 * ___animator, AnimatorStateInfo_t651  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m3901 (StateMachineBehaviour_t763 * __this, Animator_t45 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m3902 (StateMachineBehaviour_t763 * __this, Animator_t45 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"


// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t520_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t147_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m2477 (TextEditor_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t520_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		GUIStyle_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t520 * L_0 = (GUIContent_t520 *)il2cpp_codegen_object_new (GUIContent_t520_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2939(L_0, /*hidden argument*/NULL);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t147_il2cpp_TypeInfo_var);
		GUIStyle_t147 * L_1 = GUIStyle_get_none_m2981(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_5 = L_1;
		Vector2_t42  L_2 = Vector2_get_zero_m919(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m3903 (TextEditor_t519 * __this, const MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m2481 (TextEditor_t519 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m3904(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m3904 (TextEditor_t519 * __this, const MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t520 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2479(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m471(L_1, /*hidden argument*/NULL);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m3903(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_DeleteSelection_m3905 (TextEditor_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIContent_t520 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2479(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m471(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t520 * L_13 = (__this->___content_4);
		GUIContent_t520 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m2479(L_14, /*hidden argument*/NULL);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m2485(L_15, 0, L_16, /*hidden argument*/NULL);
		GUIContent_t520 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m2479(L_18, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t520 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m2479(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m471(L_22, /*hidden argument*/NULL);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m2485(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m419(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIContent_set_text_m2941(L_13, L_26, /*hidden argument*/NULL);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t520 * L_28 = (__this->___content_4);
		GUIContent_t520 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m2479(L_29, /*hidden argument*/NULL);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m2485(L_30, 0, L_31, /*hidden argument*/NULL);
		GUIContent_t520 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m2479(L_33, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t520 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m2479(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m471(L_37, /*hidden argument*/NULL);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m2485(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m419(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIContent_set_text_m2941(L_28, L_41, /*hidden argument*/NULL);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m3903(__this, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m3906 (TextEditor_t519 * __this, String_t* ___replace, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m3905(__this, /*hidden argument*/NULL);
		GUIContent_t520 * L_0 = (__this->___content_4);
		GUIContent_t520 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m2479(L_1, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m2507(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIContent_set_text_m2941(L_0, L_5, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m471(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m3903(__this, /*hidden argument*/NULL);
		TextEditor_UpdateScrollOffset_m3907(__this, /*hidden argument*/NULL);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m3907 (TextEditor_t519 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t148  V_1 = {0};
	Vector2_t42  V_2 = {0};
	Vector2_t42  V_3 = {0};
	Vector2_t42 * G_B17_0 = {0};
	Vector2_t42 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t42 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t147 * L_1 = (__this->___style_5);
		Rect_t148 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m2371(L_2, /*hidden argument*/NULL);
		Rect_t148 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m2372(L_4, /*hidden argument*/NULL);
		Rect_t148  L_6 = {0};
		Rect__ctor_m436(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t520 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t42  L_9 = GUIStyle_GetCursorPixelPosition_m2982(L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t147 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t150 * L_11 = GUIStyle_get_padding_m429(L_10, /*hidden argument*/NULL);
		Rect_t148  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t148  L_13 = RectOffset_Remove_m2959(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		GUIStyle_t147 * L_14 = (__this->___style_5);
		GUIContent_t520 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t42  L_16 = GUIStyle_CalcSize_m2985(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t147 * L_18 = (__this->___style_5);
		GUIContent_t520 * L_19 = (__this->___content_4);
		Rect_t148 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m2371(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m2987(L_18, L_19, L_21, /*hidden argument*/NULL);
		Vector2__ctor_m545((&V_2), L_17, L_22, /*hidden argument*/NULL);
		float L_23 = ((&V_2)->___x_1);
		Rect_t148 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m2371(L_24, /*hidden argument*/NULL);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t42 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t42 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t42 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m2371((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t42 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t42 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m2371((&V_1), /*hidden argument*/NULL);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t42 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t42 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t147 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t150 * L_41 = GUIStyle_get_padding_m429(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m2644(L_41, /*hidden argument*/NULL);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t42 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t42 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t147 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t150 * L_47 = GUIStyle_get_padding_m429(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m2644(L_47, /*hidden argument*/NULL);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m2372((&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t42 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t42 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t147 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m2979(L_54, /*hidden argument*/NULL);
		Vector2_t42 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m2372((&V_1), /*hidden argument*/NULL);
		GUIStyle_t147 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t150 * L_60 = GUIStyle_get_padding_m429(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m2645(L_60, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t42 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t42 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m2372((&V_1), /*hidden argument*/NULL);
		GUIStyle_t147 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t150 * L_67 = GUIStyle_get_padding_m429(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m2645(L_67, /*hidden argument*/NULL);
		GUIStyle_t147 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m2979(L_69, /*hidden argument*/NULL);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t42 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t42 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t147 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t150 * L_76 = GUIStyle_get_padding_m429(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m2645(L_76, /*hidden argument*/NULL);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t42 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t42 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t147 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t150 * L_82 = GUIStyle_get_padding_m429(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m2645(L_82, /*hidden argument*/NULL);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t42 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t42 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m2372((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t42 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m2372((&V_1), /*hidden argument*/NULL);
		GUIStyle_t147 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t150 * L_94 = GUIStyle_get_padding_m429(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m2645(L_94, /*hidden argument*/NULL);
		GUIStyle_t147 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t150 * L_97 = GUIStyle_get_padding_m429(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m2958(L_97, /*hidden argument*/NULL);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t42 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t42 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t42 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern TypeInfo* GUIUtility_t590_il2cpp_TypeInfo_var;
extern "C" void TextEditor_Copy_m2482 (TextEditor_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t520 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2479(L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m2485(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t520 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m2479(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m2485(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t590_il2cpp_TypeInfo_var);
		GUIUtility_set_systemCopyBuffer_m2871(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern Il2CppCodeGenString* _stringLiteral369;
extern Il2CppCodeGenString* _stringLiteral292;
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m3908 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral369 = il2cpp_codegen_string_literal_from_index(369);
		_stringLiteral292 = il2cpp_codegen_string_literal_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m478(L_0, _stringLiteral369, _stringLiteral292, /*hidden argument*/NULL);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m4111(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m4111(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern TypeInfo* GUIUtility_t590_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_Paste_m2478 (TextEditor_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t590_il2cpp_TypeInfo_var);
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m2870(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m1061(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m3908(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m3906(__this, L_7, /*hidden argument*/NULL);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Color32_t494_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m3909 (TextGenerationSettings_t489 * __this, Color_t200  ___left, Color_t200  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(552);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t494  V_0 = {0};
	Color32_t494  V_1 = {0};
	{
		Color_t200  L_0 = ___left;
		Color32_t494  L_1 = Color32_op_Implicit_m2379(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Color_t200  L_2 = ___right;
		Color32_t494  L_3 = Color32_op_Implicit_m2379(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Color32_t494  L_4 = V_0;
		Color32_t494  L_5 = L_4;
		Object_t * L_6 = Box(Color32_t494_il2cpp_TypeInfo_var, &L_5);
		Color32_t494  L_7 = V_1;
		Color32_t494  L_8 = L_7;
		Object_t * L_9 = Box(Color32_t494_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m3910 (TextGenerationSettings_t489 * __this, Vector2_t42  ___left, Vector2_t42  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m2311(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m2311(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t173_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m3911 (TextGenerationSettings_t489 * __this, TextGenerationSettings_t489  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t200  L_0 = (__this->___color_1);
		Color_t200  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m3909(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m2311(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t173_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m2311(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t42  L_35 = (__this->___generationExtents_14);
		Vector2_t42  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m3910(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t42  L_38 = (__this->___pivot_15);
		Vector2_t42  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m3910(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t277 * L_41 = (__this->___font_0);
		Font_t277 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m466(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t655_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m3912 (TrackedReference_t655 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(553);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m3914(NULL /*static, unused*/, ((TrackedReference_t655 *)IsInst(L_0, TrackedReference_t655_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m3913 (TrackedReference_t655 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m4116(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m3914 (Object_t * __this /* static, unused */, TrackedReference_t655 * ___x, TrackedReference_t655 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t655 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t655 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t655 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m4117(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t655 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m4117(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t655 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t655 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m4117(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t655_marshal(const TrackedReference_t655& unmarshaled, TrackedReference_t655_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
void TrackedReference_t655_marshal_back(const TrackedReference_t655_marshaled& marshaled, TrackedReference_t655& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t655_marshal_cleanup(TrackedReference_t655_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m3915 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t73 * ArgumentCache_get_unityObjectArgument_m3916 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		Object_t73 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3917 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m3918 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m3919 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m3920 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m3921 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t866_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral529;
extern Il2CppCodeGenString* _stringLiteral530;
extern Il2CppCodeGenString* _stringLiteral531;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m3922 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Regex_t866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		_stringLiteral529 = il2cpp_codegen_string_literal_from_index(529);
		_stringLiteral530 = il2cpp_codegen_string_literal_from_index(530);
		_stringLiteral531 = il2cpp_codegen_string_literal_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m464(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t866_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m4118(NULL /*static, unused*/, L_2, _stringLiteral529, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m4118(NULL /*static, unused*/, L_5, _stringLiteral530, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m4118(NULL /*static, unused*/, L_8, _stringLiteral531, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m3923 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3922(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m3924 (ArgumentCache_t768 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3922(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m3925 (BaseInvokableCall_t769 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral532;
extern Il2CppCodeGenString* _stringLiteral533;
extern "C" void BaseInvokableCall__ctor_m3926 (BaseInvokableCall_t769 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral532 = il2cpp_codegen_string_literal_from_index(532);
		_stringLiteral533 = il2cpp_codegen_string_literal_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m556(L_1, _stringLiteral532, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t180 * L_3 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m556(L_3, _stringLiteral533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" bool BaseInvokableCall_AllowInvoke_m3927 (Object_t * __this /* static, unused */, Delegate_t513 * ___delegate, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t513 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m4119(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t513 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m4120(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t284_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t284_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3928 (InvokableCall_t770 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t284_0_0_0_var = il2cpp_codegen_type_from_index(182);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		UnityAction_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3926(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t284 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(UnityAction_t284_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t513 * L_6 = Delegate_CreateDelegate_m4121(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t513 * L_7 = Delegate_Combine_m2390(NULL /*static, unused*/, L_2, ((UnityAction_t284 *)IsInst(L_6, UnityAction_t284_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t284 *)Castclass(L_7, UnityAction_t284_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern TypeInfo* UnityAction_t284_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3929 (InvokableCall_t770 * __this, UnityAction_t284 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m3925(__this, /*hidden argument*/NULL);
		UnityAction_t284 * L_0 = (__this->___Delegate_0);
		UnityAction_t284 * L_1 = ___action;
		Delegate_t513 * L_2 = Delegate_Combine_m2390(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t284 *)Castclass(L_2, UnityAction_t284_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m3930 (InvokableCall_t770 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	{
		UnityAction_t284 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m3927(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t284 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		UnityAction_Invoke_m2364(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m3931 (InvokableCall_t770 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t284 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4120(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t284 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4119(L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t768_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m3932 (PersistentCall_t772 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t768 * L_0 = (ArgumentCache_t768 *)il2cpp_codegen_object_new (ArgumentCache_t768_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m3915(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t73 * PersistentCall_get_target_m3933 (PersistentCall_t772 * __this, const MethodInfo* method)
{
	{
		Object_t73 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3934 (PersistentCall_t772 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m3935 (PersistentCall_t772 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t768 * PersistentCall_get_arguments_m3936 (PersistentCall_t772 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t768 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m3937 (PersistentCall_t772 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t73 * L_0 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m538(NULL /*static, unused*/, L_0, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m3934(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m464(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t867_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t868_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t869_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t870_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t770_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m4122_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m4123_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m4124_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m4125_MethodInfo_var;
extern "C" BaseInvokableCall_t769 * PersistentCall_GetRuntimeCall_m3938 (PersistentCall_t772 * __this, UnityEventBase_t777 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		CachedInvokableCall_1_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		CachedInvokableCall_1_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		CachedInvokableCall_1_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		InvokableCall_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		CachedInvokableCall_1__ctor_m4122_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484082);
		CachedInvokableCall_1__ctor_m4123_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484083);
		CachedInvokableCall_1__ctor_m4124_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		CachedInvokableCall_1__ctor_m4125_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484085);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t777 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t769 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t777 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m3951(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t769 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t777 * L_7 = ___theEvent;
		Object_t73 * L_8 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t769 * L_10 = (BaseInvokableCall_t769 *)VirtFuncInvoker2< BaseInvokableCall_t769 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t73 * L_11 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t768 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t769 * L_14 = PersistentCall_GetObjectCall_m3939(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t73 * L_15 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t768 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m3919(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t867 * L_19 = (CachedInvokableCall_1_t867 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t867_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4122(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m4122_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t73 * L_20 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t768 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m3918(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t868 * L_24 = (CachedInvokableCall_1_t868 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t868_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4123(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m4123_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t73 * L_25 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t768 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m3920(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t869 * L_29 = (CachedInvokableCall_1_t869 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t869_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4124(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m4124_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t73 * L_30 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t768 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m3921(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t870 * L_34 = (CachedInvokableCall_1_t870 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t870_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4125(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m4125_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t73 * L_35 = PersistentCall_get_target_m3933(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t770 * L_37 = (InvokableCall_t770 *)il2cpp_codegen_object_new (InvokableCall_t770_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3928(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t769 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t73_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t871_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t769_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t769 * PersistentCall_GetObjectCall_m3939 (Object_t * __this /* static, unused */, Object_t73 * ___target, MethodInfo_t * ___method, ArgumentCache_t768 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t73_0_0_0_var = il2cpp_codegen_type_from_index(260);
		CachedInvokableCall_1_t871_0_0_0_var = il2cpp_codegen_type_from_index(561);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(562);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		BaseInvokableCall_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t706 * V_3 = {0};
	Object_t73 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Object_t73_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t768 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3917(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m464(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t768 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3917(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetType_m4126(NULL /*static, unused*/, L_5, 0, /*hidden argument*/NULL);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Object_t73_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t871_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t702* L_11 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t702* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t702* L_15 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Object_t73_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t702* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t702* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t706 * L_21 = (ConstructorInfo_t706 *)VirtFuncInvoker1< ConstructorInfo_t706 *, TypeU5BU5D_t702* >::Invoke(68 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t768 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t73 * L_23 = ArgumentCache_get_unityObjectArgument_m3916(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t73 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m538(NULL /*static, unused*/, L_24, (Object_t73 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t73 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m485(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t73 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t706 * L_30 = V_3;
		ObjectU5BU5D_t146* L_31 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 3));
		Object_t73 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t146* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t146* L_35 = L_33;
		Object_t73 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m4099(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t769 *)IsInst(L_37, BaseInvokableCall_t769_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t773_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4127_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m3940 (PersistentCallGroup_t774 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		List_1__ctor_m4127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484086);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		List_1_t773 * L_0 = (List_1_t773 *)il2cpp_codegen_object_new (List_1_t773_il2cpp_TypeInfo_var);
		List_1__ctor_m4127(L_0, /*hidden argument*/List_1__ctor_m4127_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t872_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m4128_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4129_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4130_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m3941 (PersistentCallGroup_t774 * __this, InvokableCallList_t776 * ___invokableList, UnityEventBase_t777 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1_GetEnumerator_m4128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484087);
		Enumerator_get_Current_m4129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
		Enumerator_MoveNext_m4130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484089);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t772 * V_0 = {0};
	Enumerator_t872  V_1 = {0};
	BaseInvokableCall_t769 * V_2 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t773 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t872  L_1 = List_1_GetEnumerator_m4128(L_0, /*hidden argument*/List_1_GetEnumerator_m4128_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t772 * L_2 = Enumerator_get_Current_m4129((&V_1), /*hidden argument*/Enumerator_get_Current_m4129_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t772 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m3937(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t772 * L_5 = V_0;
			UnityEventBase_t777 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t769 * L_7 = PersistentCall_GetRuntimeCall_m3938(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t769 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t776 * L_9 = ___invokableList;
			BaseInvokableCall_t769 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m3943(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m4130((&V_1), /*hidden argument*/Enumerator_MoveNext_m4130_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t872  L_12 = V_1;
		Enumerator_t872  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t872_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_5.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_5MethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t775_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4131_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m3942 (InvokableCallList_t776 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		List_1__ctor_m4131_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484090);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t775 * L_0 = (List_1_t775 *)il2cpp_codegen_object_new (List_1_t775_il2cpp_TypeInfo_var);
		List_1__ctor_m4131(L_0, /*hidden argument*/List_1__ctor_m4131_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t775 * L_1 = (List_1_t775 *)il2cpp_codegen_object_new (List_1_t775_il2cpp_TypeInfo_var);
		List_1__ctor_m4131(L_1, /*hidden argument*/List_1__ctor_m4131_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t775 * L_2 = (List_1_t775 *)il2cpp_codegen_object_new (List_1_t775_il2cpp_TypeInfo_var);
		List_1__ctor_m4131(L_2, /*hidden argument*/List_1__ctor_m4131_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3943 (InvokableCallList_t776 * __this, BaseInvokableCall_t769 * ___call, const MethodInfo* method)
{
	{
		List_1_t775 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t769 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t769 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3944 (InvokableCallList_t776 * __this, BaseInvokableCall_t769 * ___call, const MethodInfo* method)
{
	{
		List_1_t775 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t769 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t769 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t775_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t873_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4131_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m4132_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m4133_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m3945 (InvokableCallList_t776 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		Predicate_1_t873_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		List_1__ctor_m4131_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484090);
		Predicate_1__ctor_m4132_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484091);
		List_1_RemoveAll_m4133_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484092);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t775 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t775 * L_0 = (List_1_t775 *)il2cpp_codegen_object_new (List_1_t775_il2cpp_TypeInfo_var);
		List_1__ctor_m4131(L_0, /*hidden argument*/List_1__ctor_m4131_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t775 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t769 * L_3 = (BaseInvokableCall_t769 *)VirtFuncInvoker1< BaseInvokableCall_t769 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t775 * L_7 = V_0;
		List_1_t775 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t769 * L_10 = (BaseInvokableCall_t769 *)VirtFuncInvoker1< BaseInvokableCall_t769 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t769 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t775 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t775 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t775 * L_16 = V_0;
		List_1_t775 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t873 * L_19 = (Predicate_1_t873 *)il2cpp_codegen_object_new (Predicate_1_t873_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4132(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m4132_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m4133(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m4133_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3946 (InvokableCallList_t776 * __this, const MethodInfo* method)
{
	{
		List_1_t775 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m4134_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m3947 (InvokableCallList_t776 * __this, ObjectU5BU5D_t146* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m4134_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484093);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t775 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t775 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m4134(L_0, L_1, /*hidden argument*/List_1_AddRange_m4134_MethodInfo_var);
		List_1_t775 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t775 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m4134(L_2, L_3, /*hidden argument*/List_1_AddRange_m4134_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t775 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t769 * L_6 = (BaseInvokableCall_t769 *)VirtFuncInvoker1< BaseInvokableCall_t769 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_4, L_5);
		ObjectU5BU5D_t146* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t146* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t775 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t775 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t776_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t774_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m3948 (UnityEventBase_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		PersistentCallGroup_t774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m412(__this, /*hidden argument*/NULL);
		InvokableCallList_t776 * L_0 = (InvokableCallList_t776 *)il2cpp_codegen_object_new (InvokableCallList_t776_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m3942(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t774 * L_1 = (PersistentCallGroup_t774 *)il2cpp_codegen_object_new (PersistentCallGroup_t774_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m3940(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m485(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3949 (UnityEventBase_t777 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3950 (UnityEventBase_t777 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3953(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m485(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t73_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3951 (UnityEventBase_t777 * __this, PersistentCall_t772 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t73_0_0_0_var = il2cpp_codegen_type_from_index(260);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Object_t73_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t772 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t768 * L_2 = PersistentCall_get_arguments_m3936(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3917(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m464(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t772 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t768 * L_6 = PersistentCall_get_arguments_m3936(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3917(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetType_m4126(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Object_t73_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t772 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m3934(L_11, /*hidden argument*/NULL);
		PersistentCall_t772 * L_13 = ___call;
		NullCheck(L_13);
		Object_t73 * L_14 = PersistentCall_get_target_m3933(L_13, /*hidden argument*/NULL);
		PersistentCall_t772 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m3935(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m3952(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t172_0_0_0_var;
extern const Il2CppType* Int32_t149_0_0_0_var;
extern const Il2CppType* Boolean_t171_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t73_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3952 (UnityEventBase_t777 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t172_0_0_0_var = il2cpp_codegen_type_from_index(55);
		Int32_t149_0_0_0_var = il2cpp_codegen_type_from_index(13);
		Boolean_t171_0_0_0_var = il2cpp_codegen_type_from_index(54);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Object_t73_0_0_0_var = il2cpp_codegen_type_from_index(260);
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t702* G_B10_2 = {0};
	TypeU5BU5D_t702* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t702* G_B9_2 = {0};
	TypeU5BU5D_t702* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m3959(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t702* L_10 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Single_t172_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3959(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t702* L_15 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Int32_t149_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m3959(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t702* L_20 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Boolean_t171_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m3959(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t702* L_25 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m3959(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t702* L_30 = ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Object_t73_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m3959(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3953 (UnityEventBase_t777 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t776 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m3946(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3954 (UnityEventBase_t777 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t774 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t776 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m3941(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m3955 (UnityEventBase_t777 * __this, BaseInvokableCall_t769 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t776 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t769 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m3944(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m3956 (UnityEventBase_t777 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t776 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m3945(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m3957 (UnityEventBase_t777 * __this, ObjectU5BU5D_t146* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m3954(__this, /*hidden argument*/NULL);
		InvokableCallList_t776 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t146* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m3947(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral292;
extern "C" String_t* UnityEventBase_ToString_m3958 (UnityEventBase_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral292 = il2cpp_codegen_string_literal_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m4036(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m485(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m438(NULL /*static, unused*/, L_0, _stringLiteral292, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3959 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t702* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t857* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t858 * V_5 = {0};
	ParameterInfoU5BU5D_t857* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m485(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t702* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t864 *, TypeU5BU5D_t702*, ParameterModifierU5BU5D_t865* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t864 *)NULL, L_4, (ParameterModifierU5BU5D_t865*)(ParameterModifierU5BU5D_t865*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t857* L_8 = (ParameterInfoU5BU5D_t857*)VirtFuncInvoker0< ParameterInfoU5BU5D_t857* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t857* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t857* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t858 **)(ParameterInfo_t858 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t702* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t858 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t857* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m492(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m2337 (UnityEvent_t341 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m3948(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m1043 (UnityEvent_t341 * __this, UnityAction_t284 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t284 * L_0 = ___call;
		BaseInvokableCall_t769 * L_1 = UnityEvent_GetDelegate_m3962(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m3955(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m3960 (UnityEvent_t341 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3959(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t770_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t769 * UnityEvent_GetDelegate_m3961 (UnityEvent_t341 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t770 * L_2 = (InvokableCall_t770 *)il2cpp_codegen_object_new (InvokableCall_t770_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3928(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t770_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t769 * UnityEvent_GetDelegate_m3962 (Object_t * __this /* static, unused */, UnityAction_t284 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t284 * L_0 = ___action;
		InvokableCall_t770 * L_1 = (InvokableCall_t770 *)il2cpp_codegen_object_new (InvokableCall_t770_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3929(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m2339 (UnityEvent_t341 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t146* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3957(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"



// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern "C" void UserAuthorizationDialog__ctor_m3963 (UserAuthorizationDialog_t778 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern "C" void UserAuthorizationDialog_Start_m3964 (UserAuthorizationDialog_t778 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern "C" void UserAuthorizationDialog_OnGUI_m3965 (UserAuthorizationDialog_t778 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m3966 (UserAuthorizationDialog_t778 * __this, int32_t ___windowID, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m3967 (DefaultValueAttribute_t779 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m3968 (DefaultValueAttribute_t779 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t779_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m3969 (DefaultValueAttribute_t779 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t779 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t779 *)IsInst(L_0, DefaultValueAttribute_t779_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t779 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t779 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m3968(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t779 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m3968(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m3970 (DefaultValueAttribute_t779 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m4135(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m3971 (ExcludeFromDocsAttribute_t780 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m3972 (FormerlySerializedAsAttribute_t781 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"



// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t782_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m3973 (TypeInferenceRuleAttribute_t783 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t782_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m3974(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m3974 (TypeInferenceRuleAttribute_t783 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m4010(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m3975 (TypeInferenceRuleAttribute_t783 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m3976 (GenericStack_t577 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m4136(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m1042 (UnityAction_t284 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m2364 (UnityAction_t284 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m2364((UnityAction_t284 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t284(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m3977 (UnityAction_t284 * __this, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m3978 (UnityAction_t284 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
