#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t700;
// System.Uri
struct Uri_t701;
// UnityEngine.Coroutine
struct Coroutine_t398;
struct Coroutine_t398_marshaled;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t803;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t679;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t804;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t682;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t805;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t684;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t685;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t806;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t686;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C" void NetworkMatch__ctor_m3696 (NetworkMatch_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t701 * NetworkMatch_get_baseUri_m3697 (NetworkMatch_t700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m3698 (NetworkMatch_t700 * __this, Uri_t701 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m3699 (NetworkMatch_t700 * __this, uint64_t ___programAppID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t398 * NetworkMatch_CreateMatch_m3700 (NetworkMatch_t700 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t803 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t398 * NetworkMatch_CreateMatch_m3701 (NetworkMatch_t700 * __this, CreateMatchRequest_t679 * ___req, ResponseDelegate_1_t803 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t398 * NetworkMatch_JoinMatch_m3702 (NetworkMatch_t700 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t804 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t398 * NetworkMatch_JoinMatch_m3703 (NetworkMatch_t700 * __this, JoinMatchRequest_t682 * ___req, ResponseDelegate_1_t804 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t398 * NetworkMatch_DestroyMatch_m3704 (NetworkMatch_t700 * __this, uint64_t ___netId, ResponseDelegate_1_t805 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t398 * NetworkMatch_DestroyMatch_m3705 (NetworkMatch_t700 * __this, DestroyMatchRequest_t684 * ___req, ResponseDelegate_1_t805 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t398 * NetworkMatch_DropConnection_m3706 (NetworkMatch_t700 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t805 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t398 * NetworkMatch_DropConnection_m3707 (NetworkMatch_t700 * __this, DropConnectionRequest_t685 * ___req, ResponseDelegate_1_t805 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t398 * NetworkMatch_ListMatches_m3708 (NetworkMatch_t700 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t806 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t398 * NetworkMatch_ListMatches_m3709 (NetworkMatch_t700 * __this, ListMatchRequest_t686 * ___req, ResponseDelegate_1_t806 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
