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

// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void TimerCallback__ctor_m11152 (TimerCallback_t1799 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern "C" void TimerCallback_Invoke_m11153 (TimerCallback_t1799 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TimerCallback_Invoke_m11153((TimerCallback_t1799 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_TimerCallback_t1799(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * TimerCallback_BeginInvoke_m11154 (TimerCallback_t1799 * __this, Object_t * ___state, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void TimerCallback_EndInvoke_m11155 (TimerCallback_t1799 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallback.h"
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WaitCallback__ctor_m11156 (WaitCallback_t1880 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern "C" void WaitCallback_Invoke_m11157 (WaitCallback_t1880 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WaitCallback_Invoke_m11157((WaitCallback_t1880 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WaitCallback_t1880(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * WaitCallback_BeginInvoke_m11158 (WaitCallback_t1880 * __this, Object_t * ___state, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitCallback_EndInvoke_m11159 (WaitCallback_t1880 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_String.h"
// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AppDomainInitializer__ctor_m11160 (AppDomainInitializer_t1809 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AppDomainInitializer::Invoke(System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void AppDomainInitializer_Invoke_m11161 (AppDomainInitializer_t1809 * __this, StringU5BU5D_t35* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AppDomainInitializer_Invoke_m11161((AppDomainInitializer_t1809 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, StringU5BU5D_t35* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, StringU5BU5D_t35* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1809(Il2CppObject* delegate, StringU5BU5D_t35* ___args)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	char** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_string_array(___args);

	// Native function invocation
	_il2cpp_pinvoke_func(____args_marshaled);

	// Marshaling cleanup of parameter '___args' native representation
	if (___args != NULL) il2cpp_codegen_marshal_free_string_array((void**)____args_marshaled, ((Il2CppCodeGenArray*)___args)->max_length);
	____args_marshaled = NULL;

}
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m11162 (AppDomainInitializer_t1809 * __this, StringU5BU5D_t35* ___args, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m11163 (AppDomainInitializer_t1809 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"
// System.AssemblyLoadEventArgs
#include "mscorlib_System_AssemblyLoadEventArgs.h"
// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AssemblyLoadEventHandler__ctor_m11164 (AssemblyLoadEventHandler_t1805 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
// System.AssemblyLoadEventArgs
#include "mscorlib_System_AssemblyLoadEventArgs.h"
extern "C" void AssemblyLoadEventHandler_Invoke_m11165 (AssemblyLoadEventHandler_t1805 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1812 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AssemblyLoadEventHandler_Invoke_m11165((AssemblyLoadEventHandler_t1805 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1812 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1812 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, AssemblyLoadEventArgs_t1812 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t1805(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t1812 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m11166 (AssemblyLoadEventHandler_t1805 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1812 * ___args, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AssemblyLoadEventHandler_EndInvoke_m11167 (AssemblyLoadEventHandler_t1805 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void EventHandler__ctor_m11168 (EventHandler_t1807 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
extern "C" void EventHandler_Invoke_m11169 (EventHandler_t1807 * __this, Object_t * ___sender, EventArgs_t938 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandler_Invoke_m11169((EventHandler_t1807 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, EventArgs_t938 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, EventArgs_t938 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, EventArgs_t938 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1807(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t938 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * EventHandler_BeginInvoke_m11170 (EventHandler_t1807 * __this, Object_t * ___sender, EventArgs_t938 * ___e, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m11171 (EventHandler_t1807 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ResolveEventHandler__ctor_m11172 (ResolveEventHandler_t1806 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
extern "C" Assembly_t1255 * ResolveEventHandler_Invoke_m11173 (ResolveEventHandler_t1806 * __this, Object_t * ___sender, ResolveEventArgs_t1861 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResolveEventHandler_Invoke_m11173((ResolveEventHandler_t1806 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Assembly_t1255 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1861 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Assembly_t1255 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1861 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Assembly_t1255 * (*FunctionPointerType) (Object_t * __this, ResolveEventArgs_t1861 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Assembly_t1255 * pinvoke_delegate_wrapper_ResolveEventHandler_t1806(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1861 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m11174 (ResolveEventHandler_t1806 * __this, Object_t * ___sender, ResolveEventArgs_t1861 * ___args, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1255 * ResolveEventHandler_EndInvoke_m11175 (ResolveEventHandler_t1806 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Assembly_t1255 *)__result;
}
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnhandledExceptionEventHandler__ctor_m4004 (UnhandledExceptionEventHandler_t821 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
extern "C" void UnhandledExceptionEventHandler_Invoke_m11176 (UnhandledExceptionEventHandler_t821 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t793 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m11176((UnhandledExceptionEventHandler_t821 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t793 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t793 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnhandledExceptionEventArgs_t793 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t821(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t793 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m11177 (UnhandledExceptionEventHandler_t821 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t793 * ___e, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m11178 (UnhandledExceptionEventHandler_t821 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void U24ArrayTypeU2456_t1881_marshal(const U24ArrayTypeU2456_t1881& unmarshaled, U24ArrayTypeU2456_t1881_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2456_t1881_marshal_back(const U24ArrayTypeU2456_t1881_marshaled& marshaled, U24ArrayTypeU2456_t1881& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void U24ArrayTypeU2456_t1881_marshal_cleanup(U24ArrayTypeU2456_t1881_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void U24ArrayTypeU2424_t1882_marshal(const U24ArrayTypeU2424_t1882& unmarshaled, U24ArrayTypeU2424_t1882_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2424_t1882_marshal_back(const U24ArrayTypeU2424_t1882_marshaled& marshaled, U24ArrayTypeU2424_t1882& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void U24ArrayTypeU2424_t1882_marshal_cleanup(U24ArrayTypeU2424_t1882_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1883_marshal(const U24ArrayTypeU2416_t1883& unmarshaled, U24ArrayTypeU2416_t1883_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2416_t1883_marshal_back(const U24ArrayTypeU2416_t1883_marshaled& marshaled, U24ArrayTypeU2416_t1883& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1883_marshal_cleanup(U24ArrayTypeU2416_t1883_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void U24ArrayTypeU24120_t1884_marshal(const U24ArrayTypeU24120_t1884& unmarshaled, U24ArrayTypeU24120_t1884_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24120_t1884_marshal_back(const U24ArrayTypeU24120_t1884_marshaled& marshaled, U24ArrayTypeU24120_t1884& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void U24ArrayTypeU24120_t1884_marshal_cleanup(U24ArrayTypeU24120_t1884_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void U24ArrayTypeU243132_t1885_marshal(const U24ArrayTypeU243132_t1885& unmarshaled, U24ArrayTypeU243132_t1885_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU243132_t1885_marshal_back(const U24ArrayTypeU243132_t1885_marshaled& marshaled, U24ArrayTypeU243132_t1885& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void U24ArrayTypeU243132_t1885_marshal_cleanup(U24ArrayTypeU243132_t1885_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t1886_marshal(const U24ArrayTypeU2420_t1886& unmarshaled, U24ArrayTypeU2420_t1886_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2420_t1886_marshal_back(const U24ArrayTypeU2420_t1886_marshaled& marshaled, U24ArrayTypeU2420_t1886& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t1886_marshal_cleanup(U24ArrayTypeU2420_t1886_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void U24ArrayTypeU2432_t1887_marshal(const U24ArrayTypeU2432_t1887& unmarshaled, U24ArrayTypeU2432_t1887_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2432_t1887_marshal_back(const U24ArrayTypeU2432_t1887_marshaled& marshaled, U24ArrayTypeU2432_t1887& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void U24ArrayTypeU2432_t1887_marshal_cleanup(U24ArrayTypeU2432_t1887_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void U24ArrayTypeU2448_t1888_marshal(const U24ArrayTypeU2448_t1888& unmarshaled, U24ArrayTypeU2448_t1888_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2448_t1888_marshal_back(const U24ArrayTypeU2448_t1888_marshaled& marshaled, U24ArrayTypeU2448_t1888& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void U24ArrayTypeU2448_t1888_marshal_cleanup(U24ArrayTypeU2448_t1888_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void U24ArrayTypeU2464_t1889_marshal(const U24ArrayTypeU2464_t1889& unmarshaled, U24ArrayTypeU2464_t1889_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2464_t1889_marshal_back(const U24ArrayTypeU2464_t1889_marshaled& marshaled, U24ArrayTypeU2464_t1889& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void U24ArrayTypeU2464_t1889_marshal_cleanup(U24ArrayTypeU2464_t1889_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1890_marshal(const U24ArrayTypeU2412_t1890& unmarshaled, U24ArrayTypeU2412_t1890_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2412_t1890_marshal_back(const U24ArrayTypeU2412_t1890_marshaled& marshaled, U24ArrayTypeU2412_t1890& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1890_marshal_cleanup(U24ArrayTypeU2412_t1890_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void U24ArrayTypeU24136_t1891_marshal(const U24ArrayTypeU24136_t1891& unmarshaled, U24ArrayTypeU24136_t1891_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24136_t1891_marshal_back(const U24ArrayTypeU24136_t1891_marshaled& marshaled, U24ArrayTypeU24136_t1891& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void U24ArrayTypeU24136_t1891_marshal_cleanup(U24ArrayTypeU24136_t1891_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t1892_marshal(const U24ArrayTypeU248_t1892& unmarshaled, U24ArrayTypeU248_t1892_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU248_t1892_marshal_back(const U24ArrayTypeU248_t1892_marshaled& marshaled, U24ArrayTypeU248_t1892& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t1892_marshal_cleanup(U24ArrayTypeU248_t1892_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void U24ArrayTypeU2472_t1893_marshal(const U24ArrayTypeU2472_t1893& unmarshaled, U24ArrayTypeU2472_t1893_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2472_t1893_marshal_back(const U24ArrayTypeU2472_t1893_marshaled& marshaled, U24ArrayTypeU2472_t1893& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void U24ArrayTypeU2472_t1893_marshal_cleanup(U24ArrayTypeU2472_t1893_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void U24ArrayTypeU24124_t1894_marshal(const U24ArrayTypeU24124_t1894& unmarshaled, U24ArrayTypeU24124_t1894_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24124_t1894_marshal_back(const U24ArrayTypeU24124_t1894_marshaled& marshaled, U24ArrayTypeU24124_t1894& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void U24ArrayTypeU24124_t1894_marshal_cleanup(U24ArrayTypeU24124_t1894_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void U24ArrayTypeU2496_t1895_marshal(const U24ArrayTypeU2496_t1895& unmarshaled, U24ArrayTypeU2496_t1895_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2496_t1895_marshal_back(const U24ArrayTypeU2496_t1895_marshaled& marshaled, U24ArrayTypeU2496_t1895& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void U24ArrayTypeU2496_t1895_marshal_cleanup(U24ArrayTypeU2496_t1895_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void U24ArrayTypeU242048_t1896_marshal(const U24ArrayTypeU242048_t1896& unmarshaled, U24ArrayTypeU242048_t1896_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU242048_t1896_marshal_back(const U24ArrayTypeU242048_t1896_marshaled& marshaled, U24ArrayTypeU242048_t1896& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void U24ArrayTypeU242048_t1896_marshal_cleanup(U24ArrayTypeU242048_t1896_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t1897_marshal(const U24ArrayTypeU24256_t1897& unmarshaled, U24ArrayTypeU24256_t1897_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24256_t1897_marshal_back(const U24ArrayTypeU24256_t1897_marshaled& marshaled, U24ArrayTypeU24256_t1897& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t1897_marshal_cleanup(U24ArrayTypeU24256_t1897_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void U24ArrayTypeU241024_t1898_marshal(const U24ArrayTypeU241024_t1898& unmarshaled, U24ArrayTypeU241024_t1898_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU241024_t1898_marshal_back(const U24ArrayTypeU241024_t1898_marshaled& marshaled, U24ArrayTypeU241024_t1898& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void U24ArrayTypeU241024_t1898_marshal_cleanup(U24ArrayTypeU241024_t1898_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void U24ArrayTypeU24640_t1899_marshal(const U24ArrayTypeU24640_t1899& unmarshaled, U24ArrayTypeU24640_t1899_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24640_t1899_marshal_back(const U24ArrayTypeU24640_t1899_marshaled& marshaled, U24ArrayTypeU24640_t1899& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void U24ArrayTypeU24640_t1899_marshal_cleanup(U24ArrayTypeU24640_t1899_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1900_marshal(const U24ArrayTypeU24128_t1900& unmarshaled, U24ArrayTypeU24128_t1900_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24128_t1900_marshal_back(const U24ArrayTypeU24128_t1900_marshaled& marshaled, U24ArrayTypeU24128_t1900& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1900_marshal_cleanup(U24ArrayTypeU24128_t1900_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void U24ArrayTypeU2452_t1901_marshal(const U24ArrayTypeU2452_t1901& unmarshaled, U24ArrayTypeU2452_t1901_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2452_t1901_marshal_back(const U24ArrayTypeU2452_t1901_marshaled& marshaled, U24ArrayTypeU2452_t1901& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void U24ArrayTypeU2452_t1901_marshal_cleanup(U24ArrayTypeU2452_t1901_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
#ifdef __clang__
#pragma clang diagnostic pop
#endif
