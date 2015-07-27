#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1332;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t938;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeyGeneratedEventHandler__ctor_m7255 (KeyGeneratedEventHandler_t1332 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void KeyGeneratedEventHandler_Invoke_m7256 (KeyGeneratedEventHandler_t1332 * __this, Object_t * ___sender, EventArgs_t938 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t1332(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t938 * ___e);
// System.IAsyncResult Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyGeneratedEventHandler_BeginInvoke_m7257 (KeyGeneratedEventHandler_t1332 * __this, Object_t * ___sender, EventArgs_t938 * ___e, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeyGeneratedEventHandler_EndInvoke_m7258 (KeyGeneratedEventHandler_t1332 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
