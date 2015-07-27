#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t1876;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t390;
// System.AsyncCallback
struct AsyncCallback_t391;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void CrossContextDelegate__ctor_m11140 (CrossContextDelegate_t1876 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::Invoke()
extern "C" void CrossContextDelegate_Invoke_m11141 (CrossContextDelegate_t1876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CrossContextDelegate_t1876(Il2CppObject* delegate);
// System.IAsyncResult System.Runtime.Remoting.Contexts.CrossContextDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CrossContextDelegate_BeginInvoke_m11142 (CrossContextDelegate_t1876 * __this, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::EndInvoke(System.IAsyncResult)
extern "C" void CrossContextDelegate_EndInvoke_m11143 (CrossContextDelegate_t1876 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
