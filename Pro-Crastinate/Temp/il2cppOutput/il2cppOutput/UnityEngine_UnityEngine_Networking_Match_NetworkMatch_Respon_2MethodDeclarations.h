#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t797;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t683;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m18191(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t797 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m18171_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m18192(__this, ___response, method) (( void (*) (ResponseDelegate_1_t797 *, ListMatchResponse_t683 *, const MethodInfo*))ResponseDelegate_1_Invoke_m18173_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m18193(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t797 *, ListMatchResponse_t683 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m18175_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m18194(__this, ___result, method) (( void (*) (ResponseDelegate_1_t797 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m18177_gshared)(__this, ___result, method)
