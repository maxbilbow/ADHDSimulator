#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t1781;
// System.Object
struct Object_t;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t1789;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AssemblyLoadEventHandler__ctor_m11080 (AssemblyLoadEventHandler_t1781 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C" void AssemblyLoadEventHandler_Invoke_m11081 (AssemblyLoadEventHandler_t1781 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1789 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t1781(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t1789 * ___args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m11082 (AssemblyLoadEventHandler_t1781 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1789 * ___args, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AssemblyLoadEventHandler_EndInvoke_m11083 (AssemblyLoadEventHandler_t1781 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
