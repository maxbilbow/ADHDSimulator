#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1340;
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

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeyGeneratedEventHandler__ctor_m7335 (KeyGeneratedEventHandler_t1340 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void KeyGeneratedEventHandler_Invoke_m7336 (KeyGeneratedEventHandler_t1340 * __this, Object_t * ___sender, EventArgs_t938 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t1340(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t938 * ___e);
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyGeneratedEventHandler_BeginInvoke_m7337 (KeyGeneratedEventHandler_t1340 * __this, Object_t * ___sender, EventArgs_t938 * ___e, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeyGeneratedEventHandler_EndInvoke_m7338 (KeyGeneratedEventHandler_t1340 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
