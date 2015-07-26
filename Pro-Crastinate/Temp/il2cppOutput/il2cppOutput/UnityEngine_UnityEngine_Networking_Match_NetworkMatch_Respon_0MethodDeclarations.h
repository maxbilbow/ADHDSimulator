#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t795;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t675;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m18171(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t795 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m18159_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m18172(__this, ___response, method) (( void (*) (ResponseDelegate_1_t795 *, JoinMatchResponse_t675 *, const MethodInfo*))ResponseDelegate_1_Invoke_m18161_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m18173(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t795 *, JoinMatchResponse_t675 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m18163_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m18174(__this, ___result, method) (( void (*) (ResponseDelegate_1_t795 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m18165_gshared)(__this, ___result, method)
