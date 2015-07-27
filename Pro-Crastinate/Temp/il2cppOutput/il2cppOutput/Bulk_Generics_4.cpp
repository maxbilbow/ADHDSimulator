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

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_30.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_30MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25.h"
extern "C" void Enumerator__ctor_m18351_gshared (Enumerator_t2457 * __this, Dictionary_2_t2447 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2447 * L_0 = ___host;
		NullCheck((Dictionary_2_t2447 *)L_0);
		Enumerator_t2454  L_1 = (( Enumerator_t2454  (*) (Dictionary_2_t2447 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2447 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18352_gshared (Enumerator_t2457 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2454 * L_0 = (Enumerator_t2454 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2454 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2454 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18353_gshared (Enumerator_t2457 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2454 * L_0 = (Enumerator_t2454 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2454 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2454 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18354_gshared (Enumerator_t2457 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2454 * L_0 = (Enumerator_t2454 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2454 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2454 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m18355_gshared (Enumerator_t2457 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2454 * L_0 = (Enumerator_t2454 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2449 * L_1 = (KeyValuePair_2_t2449 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2449 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_39.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_39MethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m18356_gshared (Transform_1_t2458 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>::Invoke(TKey,TValue)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" Object_t * Transform_1_Invoke_m18357_gshared (Transform_1_t2458 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18357((Transform_1_t2458 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18358_gshared (Transform_1_t2458 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkID_t694_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m18359_gshared (Transform_1_t2458 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40MethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m18360_gshared (Transform_1_t2448 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" DictionaryEntry_t1247  Transform_1_Invoke_m18361_gshared (Transform_1_t2448 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18361((Transform_1_t2448 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18362_gshared (Transform_1_t2448 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkID_t694_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1247  Transform_1_EndInvoke_m18363_gshared (Transform_1_t2448 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1247 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m18364_gshared (Transform_1_t2459 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::Invoke(TKey,TValue)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" KeyValuePair_2_t2449  Transform_1_Invoke_m18365_gshared (Transform_1_t2459 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18365((Transform_1_t2459 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2449  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2449  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* NetworkID_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18366_gshared (Transform_1_t2459 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NetworkID_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkID_t694_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2449  Transform_1_EndInvoke_m18367_gshared (Transform_1_t2459 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2449 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_5.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_5MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m18368_gshared (ShimEnumerator_t2460 * __this, Dictionary_2_t2447 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2447 * L_0 = ___host;
		NullCheck((Dictionary_2_t2447 *)L_0);
		Enumerator_t2454  L_1 = (( Enumerator_t2454  (*) (Dictionary_2_t2447 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2447 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18369_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2454 * L_0 = (Enumerator_t2454 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2454 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2454 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m18370_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2454  L_0 = (Enumerator_t2454 )(__this->___host_enumerator_0);
		Enumerator_t2454  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1247  L_3 = (DictionaryEntry_t1247 )InterfaceFuncInvoker0< DictionaryEntry_t1247  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18371_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2449  V_0 = {0};
	{
		Enumerator_t2454 * L_0 = (Enumerator_t2454 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2449  L_1 = (( KeyValuePair_2_t2449  (*) (Enumerator_t2454 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2454 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2449 )L_1;
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t2449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2449 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18372_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2449  V_0 = {0};
	{
		Enumerator_t2454 * L_0 = (Enumerator_t2454 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2449  L_1 = (( KeyValuePair_2_t2449  (*) (Enumerator_t2454 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2454 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2449 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2449 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m18373_gshared (ShimEnumerator_t2460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2460 *)__this);
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry() */, (ShimEnumerator_t2460 *)__this);
		DictionaryEntry_t1247  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1247_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9MethodDeclarations.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m18374_gshared (EqualityComparer_1_t2461 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m18375_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2934_0_0_0_var = il2cpp_codegen_type_from_index(3046);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericEqualityComparer_1_t2934_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2461_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2461 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2462 * L_8 = (DefaultComparer_t2462 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2462 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2461_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18376_gshared (EqualityComparer_1_t2461 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2461 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint64_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T) */, (EqualityComparer_1_t2461 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18377_gshared (EqualityComparer_1_t2461 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2461 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::Equals(T,T) */, (EqualityComparer_1_t2461 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::get_Default()
extern "C" EqualityComparer_1_t2461 * EqualityComparer_1_get_Default_m18378_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2461 * L_0 = ((EqualityComparer_1_t2461_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::.ctor()
extern "C" void DefaultComparer__ctor_m18379_gshared (DefaultComparer_t2462 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2461 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2461 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2461 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern "C" int32_t DefaultComparer_GetHashCode_m18380_gshared (DefaultComparer_t2462 * __this, uint64_t ___obj, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18381_gshared (DefaultComparer_t2462 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___x;
		goto IL_0015;
	}
	{
		uint64_t L_1 = ___y;
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		uint64_t L_4 = ___y;
		uint64_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ResponseDelegate_1__ctor_m18433_gshared (ResponseDelegate_1_t840 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m18435_gshared (ResponseDelegate_1_t840 * __this, Object_t * ___response, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResponseDelegate_1_Invoke_m18435((ResponseDelegate_1_t840 *)__this->___prev_9,___response, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___response, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___response, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m18437_gshared (ResponseDelegate_1_t840 * __this, Object_t * ___response, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___response;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m18439_gshared (ResponseDelegate_1_t840 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CProMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.FormatException
#include "mscorlib_System_FormatException.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
struct Object_t;
// System.Activator
#include "mscorlib_System_Activator.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m20757_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m20757(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisObject_t_m20757_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m18440_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2467 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m18441_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2467 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m18442_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2467 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::MoveNext()
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t838_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2995;
extern Il2CppCodeGenString* _stringLiteral2996;
extern Il2CppCodeGenString* _stringLiteral2997;
extern Il2CppCodeGenString* _stringLiteral2998;
extern "C" bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m18443_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2467 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		FormatException_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral2995 = il2cpp_codegen_string_literal_from_index(2995);
		_stringLiteral2996 = il2cpp_codegen_string_literal_from_index(2996);
		_stringLiteral2997 = il2cpp_codegen_string_literal_from_index(2997);
		_stringLiteral2998 = il2cpp_codegen_string_literal_from_index(2998);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	FormatException_t838 * V_1 = {0};
	bool V_2 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_6);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_018b;
	}

IL_0021:
	{
		WWW_t622 * L_2 = (WWW_t622 *)(__this->___client_0);
		__this->___U24current_7 = L_2;
		__this->___U24PC_6 = 1;
		goto IL_018d;
	}

IL_0039:
	{
		__this->___U3CjsonInterfaceU3E__0_1 = ((Object_t *)Castclass(NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
		WWW_t622 * L_3 = (WWW_t622 *)(__this->___client_0);
		NullCheck((WWW_t622 *)L_3);
		String_t* L_4 = WWW_get_error_m3220((WWW_t622 *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m471(NULL /*static, unused*/, (String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		WWW_t622 * L_6 = (WWW_t622 *)(__this->___client_0);
		NullCheck((WWW_t622 *)L_6);
		String_t* L_7 = WWW_get_text_m3216((WWW_t622 *)L_6, /*hidden argument*/NULL);
		Object_t ** L_8 = (Object_t **)&(__this->___U3CoU3E__1_2);
		bool L_9 = SimpleJson_TryDeserializeObject_m3729(NULL /*static, unused*/, (String_t*)L_7, (Object_t **)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		Object_t * L_10 = (Object_t *)(__this->___U3CoU3E__1_2);
		__this->___U3CdictJsonObjU3E__2_3 = ((Object_t*)IsInst(L_10, IDictionary_2_t802_il2cpp_TypeInfo_var));
		Object_t* L_11 = (Object_t*)(__this->___U3CdictJsonObjU3E__2_3);
		if (!L_11)
		{
			goto IL_00d0;
		}
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		Object_t * L_12 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___U3CjsonInterfaceU3E__0_1 = L_12;
		Object_t ** L_13 = (Object_t **)&(__this->___U3CjsonInterfaceU3E__0_1);
		Object_t * L_14 = (Object_t *)(__this->___U3CoU3E__1_2);
		NullCheck((Response_t677 *)(*L_13));
		VirtActionInvoker1< Object_t * >::Invoke(4 /* System.Void UnityEngine.Networking.Match.Response::Parse(System.Object) */, (Response_t677 *)(*L_13), (Object_t *)L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t838_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = (FormatException_t838 *)((FormatException_t838 *)__exception_local);
		FormatException_t838 * L_15 = V_1;
		__this->___U3CexceptionU3E__3_4 = L_15;
		FormatException_t838 * L_16 = (FormatException_t838 *)(__this->___U3CexceptionU3E__3_4);
		Debug_Log_m454(NULL /*static, unused*/, (Object_t *)L_16, /*hidden argument*/NULL);
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		Object_t * L_17 = (Object_t *)(__this->___U3CjsonInterfaceU3E__0_1);
		if (L_17)
		{
			goto IL_00ff;
		}
	}
	{
		WWW_t622 * L_18 = (WWW_t622 *)(__this->___client_0);
		NullCheck((WWW_t622 *)L_18);
		String_t* L_19 = WWW_get_text_m3216((WWW_t622 *)L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2995, (String_t*)L_19, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, (Object_t *)L_20, /*hidden argument*/NULL);
		goto IL_011f;
	}

IL_00ff:
	{
		Object_t ** L_21 = (Object_t **)&(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((Response_t677 *)(*L_21));
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Networking.Match.Response::ToString() */, (Response_t677 *)(*L_21));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2996, (String_t*)L_22, /*hidden argument*/NULL);
		Debug_Log_m454(NULL /*static, unused*/, (Object_t *)L_23, /*hidden argument*/NULL);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		WWW_t622 * L_24 = (WWW_t622 *)(__this->___client_0);
		NullCheck((WWW_t622 *)L_24);
		String_t* L_25 = WWW_get_error_m3220((WWW_t622 *)L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2997, (String_t*)L_25, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, (Object_t *)L_26, /*hidden argument*/NULL);
		WWW_t622 * L_27 = (WWW_t622 *)(__this->___client_0);
		NullCheck((WWW_t622 *)L_27);
		String_t* L_28 = WWW_get_text_m3216((WWW_t622 *)L_27, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2998, (String_t*)L_28, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, (Object_t *)L_29, /*hidden argument*/NULL);
	}

IL_0158:
	{
		Object_t * L_30 = (Object_t *)(__this->___U3CjsonInterfaceU3E__0_1);
		if (L_30)
		{
			goto IL_0173;
		}
	}
	{
		Object_t * L_31 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___U3CjsonInterfaceU3E__0_1 = L_31;
	}

IL_0173:
	{
		ResponseDelegate_1_t840 * L_32 = (ResponseDelegate_1_t840 *)(__this->___callback_5);
		Object_t * L_33 = (Object_t *)(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((ResponseDelegate_1_t840 *)L_32);
		(( void (*) (ResponseDelegate_1_t840 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ResponseDelegate_1_t840 *)L_32, (Object_t *)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___U24PC_6 = (-1);
	}

IL_018b:
	{
		return 0;
	}

IL_018d:
	{
		return 1;
	}
	// Dead block : IL_018f: ldloc.2
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::Dispose()
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m18444_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2467 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_6 = (-1);
		return;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
extern "C" KeyValuePair_2_t2468  Array_InternalArray__get_Item_TisKeyValuePair_2_t2468_m21044_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2468_m21044(__this, p0, method) (( KeyValuePair_2_t2468  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2468_m21044_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m18462_gshared (InternalEnumerator_1_t2469 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18463_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2468  L_0 = (( KeyValuePair_2_t2468  (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2469 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2468  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18464_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m18465_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" KeyValuePair_2_t2468  InternalEnumerator_1_get_Current_m18466_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2468  L_8 = (( KeyValuePair_2_t2468  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern "C" void KeyValuePair_2__ctor_m18467_gshared (KeyValuePair_2_t2468 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2468 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2468 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2049  L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2468 *, KeyValuePair_2_t2049 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2468 *)__this, (KeyValuePair_2_t2049 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m18468_gshared (KeyValuePair_2_t2468 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18469_gshared (KeyValuePair_2_t2468 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" KeyValuePair_2_t2049  KeyValuePair_2_get_Value_m18470_gshared (KeyValuePair_2_t2468 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = (KeyValuePair_2_t2049 )(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18471_gshared (KeyValuePair_2_t2468 * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_ToString_m12436_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral534;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" String_t* KeyValuePair_2_ToString_m18472_gshared (KeyValuePair_2_t2468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		KeyValuePair_2_ToString_m12436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484154);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		_stringLiteral534 = il2cpp_codegen_string_literal_from_index(534);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	KeyValuePair_2_t2049  V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t35* G_B2_1 = {0};
	StringU5BU5D_t35* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t35* G_B1_1 = {0};
	StringU5BU5D_t35* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t35* G_B3_2 = {0};
	StringU5BU5D_t35* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t35* G_B5_1 = {0};
	StringU5BU5D_t35* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t35* G_B4_1 = {0};
	StringU5BU5D_t35* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t35* G_B6_2 = {0};
	StringU5BU5D_t35* G_B6_3 = {0};
	{
		StringU5BU5D_t35* L_0 = (StringU5BU5D_t35*)((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral471);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral471;
		StringU5BU5D_t35* L_1 = (StringU5BU5D_t35*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2468 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2468 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t35* L_6 = (StringU5BU5D_t35*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral534);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral534;
		StringU5BU5D_t35* L_7 = (StringU5BU5D_t35*)L_6;
		KeyValuePair_2_t2049  L_8 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2468 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		KeyValuePair_2_t2049  L_9 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2468 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (KeyValuePair_2_t2049 )L_9;
		NullCheck((KeyValuePair_2_t2049 *)(&V_1));
		String_t* L_10 = KeyValuePair_2_ToString_m12436((KeyValuePair_2_t2049 *)(&V_1), KeyValuePair_2_ToString_m12436_MethodInfo_var);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t35* L_12 = (StringU5BU5D_t35*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral472);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral472;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m517(NULL /*static, unused*/, (StringU5BU5D_t35*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5MethodDeclarations.h"
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ThreadSafeDictionaryValueFactory_2__ctor_m18473_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m18475_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___key, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ThreadSafeDictionaryValueFactory_2_Invoke_m18475((ThreadSafeDictionaryValueFactory_2_t2470 *)__this->___prev_9,___key, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m18477_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___key, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m18479_gshared (ThreadSafeDictionaryValueFactory_2_t2470 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2__ctor_m18480_gshared (ThreadSafeDictionary_2_t2472 * __this, ThreadSafeDictionaryValueFactory_2_t2470 * ___valueFactory, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m417(L_0, /*hidden argument*/NULL);
		__this->____lock_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		ThreadSafeDictionaryValueFactory_2_t2470 * L_1 = ___valueFactory;
		__this->____valueFactory_1 = L_1;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18482_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2047 *)L_0);
		Enumerator_t2053  L_1 = (( Enumerator_t2053  (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2053  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (Object_t *)L_3;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * ThreadSafeDictionary_2_Get_m18484_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2472 *)__this);
		Object_t * L_2 = (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ThreadSafeDictionary_2_t2472 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t2047 * L_3 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
		Object_t * L_4 = ___key;
		NullCheck((Dictionary_2_t2047 *)L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (Dictionary_2_t2047 *)L_3, (Object_t *)L_4, (Object_t **)(&V_0));
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		Object_t * L_6 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2472 *)__this);
		Object_t * L_7 = (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ThreadSafeDictionary_2_t2472 *)__this, (Object_t *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_7;
	}

IL_002e:
	{
		Object_t * L_8 = V_0;
		return L_8;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m18486_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Dictionary_2_t2047 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ThreadSafeDictionaryValueFactory_2_t2470 * L_0 = (ThreadSafeDictionaryValueFactory_2_t2470 *)(__this->____valueFactory_1);
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionaryValueFactory_2_t2470 *)L_0);
		Object_t * L_2 = (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t2470 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ThreadSafeDictionaryValueFactory_2_t2470 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = (Object_t *)L_2;
		Object_t * L_3 = (Object_t *)(__this->____lock_0);
		V_1 = (Object_t *)L_3;
		Object_t * L_4 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t2047 * L_5 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
			if (L_5)
			{
				goto IL_0042;
			}
		}

IL_0025:
		{
			Dictionary_2_t2047 * L_6 = (Dictionary_2_t2047 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			__this->____dictionary_2 = L_6;
			Dictionary_2_t2047 * L_7 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
			Object_t * L_8 = ___key;
			Object_t * L_9 = V_0;
			NullCheck((Dictionary_2_t2047 *)L_7);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t2047 *)L_7, (Object_t *)L_8, (Object_t *)L_9);
			goto IL_0078;
		}

IL_0042:
		{
			Dictionary_2_t2047 * L_10 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
			Object_t * L_11 = ___key;
			NullCheck((Dictionary_2_t2047 *)L_10);
			bool L_12 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (Dictionary_2_t2047 *)L_10, (Object_t *)L_11, (Object_t **)(&V_2));
			if (!L_12)
			{
				goto IL_005d;
			}
		}

IL_0055:
		{
			Object_t * L_13 = V_2;
			V_4 = (Object_t *)L_13;
			IL2CPP_LEAVE(0x86, FINALLY_007d);
		}

IL_005d:
		{
			Dictionary_2_t2047 * L_14 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
			Dictionary_2_t2047 * L_15 = (Dictionary_2_t2047 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (Dictionary_2_t2047 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_15, (Object_t*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			V_3 = (Dictionary_2_t2047 *)L_15;
			Dictionary_2_t2047 * L_16 = V_3;
			Object_t * L_17 = ___key;
			Object_t * L_18 = V_0;
			NullCheck((Dictionary_2_t2047 *)L_16);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t2047 *)L_16, (Object_t *)L_17, (Object_t *)L_18);
			Dictionary_2_t2047 * L_19 = V_3;
			__this->____dictionary_2 = L_19;
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x84, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, (Object_t *)L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0084:
	{
		Object_t * L_21 = V_0;
		return L_21;
	}

IL_0086:
	{
		Object_t * L_22 = V_4;
		return L_22;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Add_m18488_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
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
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m18490_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2047 *)L_0);
		KeyCollection_t2051 * L_1 = (( KeyCollection_t2051 * (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_1;
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m18492_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Object_t ** L_0 = ___value;
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2472 *)__this);
		Object_t * L_2 = (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((ThreadSafeDictionary_2_t2472 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		*L_0 = L_2;
		return 1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m18494_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2047 *)L_0);
		ValueCollection_t2055 * L_1 = (( ValueCollection_t2055 * (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m18496_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2472 *)__this);
		Object_t * L_1 = (( Object_t * (*) (ThreadSafeDictionary_2_t2472 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((ThreadSafeDictionary_2_t2472 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_set_Item_m18498_gshared (ThreadSafeDictionary_2_t2472 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
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
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Add_m18500_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method)
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
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Clear_m18502_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method)
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
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_Contains_m18504_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method)
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
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_CopyTo_m18506_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___arrayIndex, const MethodInfo* method)
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
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m18508_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2047 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2047 *)L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m18510_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method)
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
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t172_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_Remove_m18512_gshared (ThreadSafeDictionary_2_t2472 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method)
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
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m18514_gshared (ThreadSafeDictionary_2_t2472 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2047 *)L_0);
		Enumerator_t2053  L_1 = (( Enumerator_t2053  (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2053  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (Object_t*)L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6MethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33MethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2836;
struct Transform_1_t2494;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m21060_gshared (Dictionary_2_t2492 * __this, DictionaryEntryU5BU5D_t2836* p0, int32_t p1, Transform_1_t2494 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m21060(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2492 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2494 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m21060_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t2502;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2468_m21061_gshared (Dictionary_2_t2492 * __this, Array_t * p0, int32_t p1, Transform_1_t2502 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2468_m21061(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, Transform_1_t2502 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2468_m21061_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2797;
struct Transform_1_t2502;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2468_TisKeyValuePair_2_t2468_m21063_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2797* p0, int32_t p1, Transform_1_t2502 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2468_TisKeyValuePair_2_t2468_m21063(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2797*, int32_t, Transform_1_t2502 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2468_TisKeyValuePair_2_t2468_m21063_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m18820_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18822_gshared (Dictionary_2_t2492 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18824_gshared (Dictionary_2_t2492 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2492 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m18826_gshared (Dictionary_2_t2492 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void Dictionary_2__ctor_m18828_gshared (Dictionary_2_t2492 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2468  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2468  L_9 = (KeyValuePair_2_t2468 )InterfaceFuncInvoker0< KeyValuePair_2_t2468  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2468 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2468 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			KeyValuePair_2_t2049  L_11 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2468 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2492 *)__this);
			VirtActionInvoker2< Object_t *, KeyValuePair_2_t2049  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_10, (KeyValuePair_2_t2049 )L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
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
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m18830_gshared (Dictionary_2_t2492 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18832_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2492 *)__this);
		KeyCollection_t2495 * L_0 = (( KeyCollection_t2495 * (*) (Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18834_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2492 *)__this);
		ValueCollection_t2499 * L_0 = (( ValueCollection_t2499 * (*) (Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18836_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2492 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t2492 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2492 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2492 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2492 *)__this);
		KeyValuePair_2_t2049  L_5 = (KeyValuePair_2_t2049 )VirtFuncInvoker1< KeyValuePair_2_t2049 , Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_4);
		KeyValuePair_2_t2049  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18838_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2492 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2492 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2492 *)__this);
		KeyValuePair_2_t2049  L_3 = (( KeyValuePair_2_t2049  (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2492 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2492 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2049  >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_1, (KeyValuePair_2_t2049 )L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18840_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2492 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2492 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2492 *)__this);
		KeyValuePair_2_t2049  L_3 = (( KeyValuePair_2_t2049  (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2492 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2492 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2049  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_1, (KeyValuePair_2_t2049 )L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18842_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2492 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t2492 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18844_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2492 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (Dictionary_2_t2492 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18846_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18848_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18850_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18852_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2468 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2_t2049  L_1 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2468 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2492 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2049  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_0, (KeyValuePair_2_t2049 )L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18854_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2468  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2492 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2468 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2492 *)__this, (KeyValuePair_2_t2468 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18856_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2797* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2797* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2797*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2492 *)__this, (KeyValuePair_2U5BU5D_t2797*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18858_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2468  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2492 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2468 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2492 *)__this, (KeyValuePair_2_t2468 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2468 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2492 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18860_gshared (Dictionary_2_t2492 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3048);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2797* V_0 = {0};
	DictionaryEntryU5BU5D_t2836* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B5_1 = {0};
	Dictionary_2_t2492 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B4_1 = {0};
	Dictionary_2_t2492 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2797*)((KeyValuePair_2U5BU5D_t2797*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2797* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2797* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2797*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2492 *)__this, (KeyValuePair_2U5BU5D_t2797*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2492 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2836*)((DictionaryEntryU5BU5D_t2836*)IsInst(L_6, DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2836* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2836* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2494 * L_10 = ((Dictionary_2_t2492_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2492 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2492 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2494 * L_12 = (Transform_1_t2494 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2494 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2492_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2492 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2494 * L_13 = ((Dictionary_2_t2492_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2492 *)G_B5_2);
		(( void (*) (Dictionary_2_t2492 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2492 *)G_B5_2, (DictionaryEntryU5BU5D_t2836*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2494 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2502 * L_17 = (Transform_1_t2502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2502 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, Transform_1_t2502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2492 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2502 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18862_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497  L_0 = {0};
		(( void (*) (Enumerator_t2497 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2497  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18864_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497  L_0 = {0};
		(( void (*) (Enumerator_t2497 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2497  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18866_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2503 * L_0 = (ShimEnumerator_t2503 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2503 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18868_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1368_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" KeyValuePair_2_t2049  Dictionary_2_get_Item_m18870_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		KeyNotFoundException_t1368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3049);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2493* L_19 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_19, L_21, sizeof(KeyValuePair_2_t2049 )));
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1368 * L_26 = (KeyNotFoundException_t1368 *)il2cpp_codegen_object_new (KeyNotFoundException_t1368_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7532(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_set_Item_m18872_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t2017* L_38 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t2017* L_41 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t1037* L_43 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_46 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t2017* L_49 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1367 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t148* L_52 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t2017* L_56 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t2017* L_58 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1367 )))->___Next_1 = L_60;
		LinkU5BU5D_t2017* L_61 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t1037* L_63 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_66 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		KeyValuePair_2U5BU5D_t2493* L_69 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		KeyValuePair_2_t2049  L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_69, L_70, sizeof(KeyValuePair_2_t2049 ))) = (KeyValuePair_2_t2049 )L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void Dictionary_2_Init_m18874_gshared (Dictionary_2_t2492 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2492 * G_B4_0 = {0};
	Dictionary_2_t2492 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2492 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, (String_t*)_stringLiteral1504, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2492 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2492 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2492 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t1968 * L_5 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2492 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2492 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m18876_gshared (Dictionary_2_t2492 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((KeyValuePair_2U5BU5D_t2493*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral897;
extern Il2CppCodeGenString* _stringLiteral2982;
extern Il2CppCodeGenString* _stringLiteral2983;
extern "C" void Dictionary_2_CopyToCheck_m18878_gshared (Dictionary_2_t2492 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		_stringLiteral2982 = il2cpp_codegen_string_literal_from_index(2982);
		_stringLiteral2983 = il2cpp_codegen_string_literal_from_index(2983);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral458, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t275 * L_7 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_7, (String_t*)_stringLiteral2982, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m6110((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2492 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t2492 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t275 * L_12 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_12, (String_t*)_stringLiteral2983, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2468  Dictionary_2_make_pair_m18880_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		KeyValuePair_2_t2049  L_1 = ___value;
		KeyValuePair_2_t2468  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2468 *, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (Object_t *)L_0, (KeyValuePair_2_t2049 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18882_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2049  Dictionary_2_pick_value_m18884_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18886_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2797* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2797* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2492 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2797* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2502 * L_5 = (Transform_1_t2502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2502 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2797*, int32_t, Transform_1_t2502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2492 *)__this, (KeyValuePair_2U5BU5D_t2797*)L_2, (int32_t)L_3, (Transform_1_t2502 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m18888_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1037* V_1 = {0};
	LinkU5BU5D_t2017* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t148* V_7 = {0};
	KeyValuePair_2U5BU5D_t2493* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t985_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7766(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1037*)((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t2017*)((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t2017* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_10 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1367 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2017* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1037* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2017* L_26 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1367 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1037* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2017* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (KeyValuePair_2U5BU5D_t2493*)((KeyValuePair_2U5BU5D_t2493*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t148* L_37 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t2493* L_40 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		KeyValuePair_2U5BU5D_t2493* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		KeyValuePair_2U5BU5D_t2493* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2984;
extern "C" void Dictionary_2_Add_m18890_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2984 = il2cpp_codegen_string_literal_from_index(2984);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_15 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t275 * L_20 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_20, (String_t*)_stringLiteral2984, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_21 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t1037* L_30 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t2017* L_42 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1037* L_44 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_47 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t148* L_50 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		KeyValuePair_2U5BU5D_t2493* L_53 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		KeyValuePair_2_t2049  L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_53, L_54, sizeof(KeyValuePair_2_t2049 ))) = (KeyValuePair_2_t2049 )L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m18892_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t2493* L_4 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		KeyValuePair_2U5BU5D_t2493* L_5 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t2017* L_6 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		LinkU5BU5D_t2017* L_7 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_ContainsKey_m18894_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t2017* L_19 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18896_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2504 * L_0 = (( EqualityComparer_1_t2504 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		KeyValuePair_2U5BU5D_t2493* L_5 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		KeyValuePair_2_t2049  L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, KeyValuePair_2_t2049 , KeyValuePair_2_t2049  >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (KeyValuePair_2_t2049 )(*(KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_5, L_7, sizeof(KeyValuePair_2_t2049 ))), (KeyValuePair_2_t2049 )L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t1037* L_16 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral906;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_GetObjectData_m18898_gshared (Dictionary_2_t2492 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral906 = il2cpp_codegen_string_literal_from_index(906);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2797* V_0 = {0};
	{
		SerializationInfo_t818 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral906, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t818 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t818 *)L_2);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_2, (String_t*)_stringLiteral908, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t818 *)L_4);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_4, (String_t*)_stringLiteral910, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2797*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2797*)((KeyValuePair_2U5BU5D_t2797*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2797* L_8 = V_0;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2797*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2492 *)__this, (KeyValuePair_2U5BU5D_t2797*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t818 * L_9 = ___info;
		Int32U5BU5D_t1037* L_10 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t818 *)L_9);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_9, (String_t*)_stringLiteral1538, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t818 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2797* L_12 = V_0;
		NullCheck((SerializationInfo_t818 *)L_11);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_11, (String_t*)_stringLiteral2985, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_OnDeserialization_m18900_gshared (Dictionary_2_t2492 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2797* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t818 * L_0 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
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
		SerializationInfo_t818 * L_1 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_1, (String_t*)_stringLiteral908, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t818 * L_3 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_3, (String_t*)_stringLiteral910, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t818 * L_6 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_6, (String_t*)_stringLiteral1538, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t818 * L_8 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_8, (String_t*)_stringLiteral2985, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2797*)((KeyValuePair_2U5BU5D_t2797*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2492 *)__this);
		(( void (*) (Dictionary_2_t2492 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2492 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2797* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2797* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2468 *)((KeyValuePair_2_t2468 *)(KeyValuePair_2_t2468 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t2468 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2797* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		KeyValuePair_2_t2049  L_19 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2468 *)((KeyValuePair_2_t2468 *)(KeyValuePair_2_t2468 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t2468 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2492 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2049  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_16, (KeyValuePair_2_t2049 )L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2797* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t818 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t2049_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_Remove_m18902_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		KeyValuePair_2_t2049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1550);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	KeyValuePair_2_t2049  V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t1037* L_29 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t2017* L_31 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1367 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t2017* L_34 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1367 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t2017* L_43 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1367 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t148* L_45 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		KeyValuePair_2U5BU5D_t2493* L_48 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (KeyValuePair_2_t2049_il2cpp_TypeInfo_var, (&V_5));
		KeyValuePair_2_t2049  L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_48, L_49, sizeof(KeyValuePair_2_t2049 ))) = (KeyValuePair_2_t2049 )L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t2049_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_TryGetValue_m18904_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, KeyValuePair_2_t2049 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		KeyValuePair_2_t2049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1550);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t2049  V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		KeyValuePair_2_t2049 * L_19 = ___value;
		KeyValuePair_2U5BU5D_t2493* L_20 = (KeyValuePair_2U5BU5D_t2493*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_20, L_22, sizeof(KeyValuePair_2_t2049 )));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t2017* L_23 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyValuePair_2_t2049 * L_27 = ___value;
		Initobj (KeyValuePair_2_t2049_il2cpp_TypeInfo_var, (&V_2));
		KeyValuePair_2_t2049  L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2495 * Dictionary_2_get_Keys_m18906_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2495 * L_0 = (KeyCollection_t2495 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2495 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2499 * Dictionary_2_get_Values_m18908_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2499 * L_0 = (ValueCollection_t2499 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2499 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2986;
extern "C" Object_t * Dictionary_2_ToTKey_m18910_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t275 * L_6 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_6, (String_t*)L_5, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t2049_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2986;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" KeyValuePair_2_t2049  Dictionary_2_ToTValue_m18912_gshared (Dictionary_2_t2492 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		KeyValuePair_2_t2049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1550);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t2049  V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (KeyValuePair_2_t2049_il2cpp_TypeInfo_var, (&V_0));
		KeyValuePair_2_t2049  L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t275 * L_8 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_8, (String_t*)L_7, (String_t*)_stringLiteral575, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((*(KeyValuePair_2_t2049 *)((KeyValuePair_2_t2049 *)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18914_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2468  ___pair, const MethodInfo* method)
{
	KeyValuePair_2_t2049  V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2468 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2492 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, KeyValuePair_2_t2049 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2492 *)__this, (Object_t *)L_0, (KeyValuePair_2_t2049 *)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2504 * L_2 = (( EqualityComparer_1_t2504 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		KeyValuePair_2_t2049  L_3 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2468 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		KeyValuePair_2_t2049  L_4 = V_0;
		NullCheck((EqualityComparer_1_t2504 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t2049 , KeyValuePair_2_t2049  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (EqualityComparer_1_t2504 *)L_2, (KeyValuePair_2_t2049 )L_3, (KeyValuePair_2_t2049 )L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2497  Dictionary_2_GetEnumerator_m18916_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497  L_0 = {0};
		(( void (*) (Enumerator_t2497 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2492 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m18918_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		KeyValuePair_2_t2049  L_1 = ___value;
		KeyValuePair_2_t2049  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_2);
		DictionaryEntry_t1247  L_4 = {0};
		DictionaryEntry__ctor_m6108(&L_4, (Object_t *)L_0, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_32.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_47.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_47MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_32MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2498;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21055_gshared (Dictionary_2_t2492 * __this, Array_t * p0, int32_t p1, Transform_1_t2498 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21055(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, Transform_1_t2498 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21055_gshared)(__this, p0, p1, p2, method)
struct ObjectU5BU5D_t148;
struct Transform_1_t2498;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21056_gshared (Dictionary_2_t2492 * __this, ObjectU5BU5D_t148* p0, int32_t p1, Transform_1_t2498 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21056(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2492 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2498 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21056_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void KeyCollection__ctor_m18919_gshared (KeyCollection_t2495 * __this, Dictionary_2_t2492 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2492 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t2492 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18920_gshared (KeyCollection_t2495 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18921_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18922_gshared (KeyCollection_t2495 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2492 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t2492 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18923_gshared (KeyCollection_t2495 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18924_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2495 *)__this);
		Enumerator_t2496  L_0 = (( Enumerator_t2496  (*) (KeyCollection_t2495 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2495 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2496  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m18925_gshared (KeyCollection_t2495 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t148* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t148* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t148* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2495 *)__this);
		(( void (*) (KeyCollection_t2495 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2495 *)__this, (ObjectU5BU5D_t148*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2492 * L_4 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2492 *)L_4);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2492 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2492 * L_7 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2498 * L_11 = (Transform_1_t2498 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2498 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2492 *)L_7);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, Transform_1_t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2492 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2498 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18926_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2495 *)__this);
		Enumerator_t2496  L_0 = (( Enumerator_t2496  (*) (KeyCollection_t2495 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2495 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2496  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18927_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18928_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m18929_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TKey[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void KeyCollection_CopyTo_m18930_gshared (KeyCollection_t2495 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2492 *)L_0);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2492 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2492 * L_3 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2498 * L_7 = (Transform_1_t2498 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2498 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2492 *)L_3);
		(( void (*) (Dictionary_2_t2492 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2492 *)L_3, (ObjectU5BU5D_t148*)L_4, (int32_t)L_5, (Transform_1_t2498 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2496  KeyCollection_GetEnumerator_m18931_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		Enumerator_t2496  L_1 = {0};
		(( void (*) (Enumerator_t2496 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2492 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m18932_gshared (KeyCollection_t2495 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2492 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t2492 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
extern "C" void Enumerator__ctor_m18933_gshared (Enumerator_t2496 * __this, Dictionary_2_t2492 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = ___host;
		NullCheck((Dictionary_2_t2492 *)L_0);
		Enumerator_t2497  L_1 = (( Enumerator_t2497  (*) (Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18934_gshared (Enumerator_t2496 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18935_gshared (Enumerator_t2496 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18936_gshared (Enumerator_t2496 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m18937_gshared (Enumerator_t2496 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2468 * L_1 = (KeyValuePair_2_t2468 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2468 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
extern "C" void Enumerator__ctor_m18938_gshared (Enumerator_t2497 * __this, Dictionary_2_t2492 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2492 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18939_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2468  L_0 = (KeyValuePair_2_t2468 )(__this->___current_3);
		KeyValuePair_2_t2468  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18940_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2468 * L_0 = (KeyValuePair_2_t2468 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2468 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2468 * L_2 = (KeyValuePair_2_t2468 *)&(__this->___current_3);
		KeyValuePair_2_t2049  L_3 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2468 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		KeyValuePair_2_t2049  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t1247  L_6 = {0};
		DictionaryEntry__ctor_m6108(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18941_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18942_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = (( KeyValuePair_2_t2049  (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		KeyValuePair_2_t2049  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18943_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2492 * L_4 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2017* L_5 = (LinkU5BU5D_t2017*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1367 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2492 * L_8 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t148* L_9 = (ObjectU5BU5D_t148*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2492 * L_12 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck(L_12);
		KeyValuePair_2U5BU5D_t2493* L_13 = (KeyValuePair_2U5BU5D_t2493*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2468  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2468 *, Object_t *, KeyValuePair_2_t2049 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (KeyValuePair_2_t2049 )(*(KeyValuePair_2_t2049 *)(KeyValuePair_2_t2049 *)SZArrayLdElema(L_13, L_15, sizeof(KeyValuePair_2_t2049 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2492 * L_18 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2468  Enumerator_get_Current_m18944_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2468  L_0 = (KeyValuePair_2_t2468 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18945_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2468 * L_0 = (KeyValuePair_2_t2468 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2468 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2049  Enumerator_get_CurrentValue_m18946_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2468 * L_0 = (KeyValuePair_2_t2468 *)&(__this->___current_3);
		KeyValuePair_2_t2049  L_1 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2468 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2988;
extern "C" void Enumerator_VerifyState_m18947_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2988 = il2cpp_codegen_string_literal_from_index(2988);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t905 * L_1 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t2492 * L_2 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1075 * L_5 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_5, (String_t*)_stringLiteral2988, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2989;
extern "C" void Enumerator_VerifyCurrent_m18948_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2989 = il2cpp_codegen_string_literal_from_index(2989);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2989, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18949_gshared (Enumerator_t2497 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2492 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m18950_gshared (Transform_1_t2498 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern "C" Object_t * Transform_1_Invoke_m18951_gshared (Transform_1_t2498 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18951((Transform_1_t2498 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* KeyValuePair_2_t2049_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18952_gshared (Transform_1_t2498 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1550);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2049_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m18953_gshared (Transform_1_t2498 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2501;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2049_m21057_gshared (Dictionary_2_t2492 * __this, Array_t * p0, int32_t p1, Transform_1_t2501 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2049_m21057(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, Transform_1_t2501 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2049_m21057_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2493;
struct Transform_1_t2501;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2049_TisKeyValuePair_2_t2049_m21059_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2493* p0, int32_t p1, Transform_1_t2501 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2049_TisKeyValuePair_2_t2049_m21059(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2493*, int32_t, Transform_1_t2501 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2049_TisKeyValuePair_2_t2049_m21059_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void ValueCollection__ctor_m18954_gshared (ValueCollection_t2499 * __this, Dictionary_2_t2492 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2492 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t2492 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18955_gshared (ValueCollection_t2499 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18956_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18957_gshared (ValueCollection_t2499 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		KeyValuePair_2_t2049  L_1 = ___item;
		NullCheck((Dictionary_2_t2492 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2049 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)L_0, (KeyValuePair_2_t2049 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18958_gshared (ValueCollection_t2499 * __this, KeyValuePair_2_t2049  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18959_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2499 *)__this);
		Enumerator_t2500  L_0 = (( Enumerator_t2500  (*) (ValueCollection_t2499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2499 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2500  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18960_gshared (ValueCollection_t2499 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t2493* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2493*)((KeyValuePair_2U5BU5D_t2493*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		KeyValuePair_2U5BU5D_t2493* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2493* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2499 *)__this);
		(( void (*) (ValueCollection_t2499 *, KeyValuePair_2U5BU5D_t2493*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2499 *)__this, (KeyValuePair_2U5BU5D_t2493*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2492 * L_4 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2492 *)L_4);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2492 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2492 * L_7 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2501 * L_11 = (Transform_1_t2501 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2501 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2492 *)L_7);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, Transform_1_t2501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2492 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2501 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18961_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2499 *)__this);
		Enumerator_t2500  L_0 = (( Enumerator_t2500  (*) (ValueCollection_t2499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2499 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2500  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18962_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18963_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18964_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m18965_gshared (ValueCollection_t2499 * __this, KeyValuePair_2U5BU5D_t2493* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		KeyValuePair_2U5BU5D_t2493* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2492 *)L_0);
		(( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2492 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2492 * L_3 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		KeyValuePair_2U5BU5D_t2493* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2501 * L_7 = (Transform_1_t2501 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2501 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2492 *)L_3);
		(( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2493*, int32_t, Transform_1_t2501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2492 *)L_3, (KeyValuePair_2U5BU5D_t2493*)L_4, (int32_t)L_5, (Transform_1_t2501 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2500  ValueCollection_GetEnumerator_m18966_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		Enumerator_t2500  L_1 = {0};
		(( void (*) (Enumerator_t2500 *, Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2492 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18967_gshared (ValueCollection_t2499 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = (Dictionary_2_t2492 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2492 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t2492 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
extern "C" void Enumerator__ctor_m18968_gshared (Enumerator_t2500 * __this, Dictionary_2_t2492 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2492 * L_0 = ___host;
		NullCheck((Dictionary_2_t2492 *)L_0);
		Enumerator_t2497  L_1 = (( Enumerator_t2497  (*) (Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18969_gshared (Enumerator_t2500 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2049  L_1 = (( KeyValuePair_2_t2049  (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		KeyValuePair_2_t2049  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18970_gshared (Enumerator_t2500 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18971_gshared (Enumerator_t2500 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2049  Enumerator_get_Current_m18972_gshared (Enumerator_t2500 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2468 * L_1 = (KeyValuePair_2_t2468 *)&(L_0->___current_3);
		KeyValuePair_2_t2049  L_2 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2468 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m18973_gshared (Transform_1_t2501 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern "C" KeyValuePair_2_t2049  Transform_1_Invoke_m18974_gshared (Transform_1_t2501 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18974((Transform_1_t2501 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2049  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2049  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2049  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* KeyValuePair_2_t2049_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18975_gshared (Transform_1_t2501 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1550);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2049_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2049  Transform_1_EndInvoke_m18976_gshared (Transform_1_t2501 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2049 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m18977_gshared (Transform_1_t2494 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern "C" DictionaryEntry_t1247  Transform_1_Invoke_m18978_gshared (Transform_1_t2494 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18978((Transform_1_t2494 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* KeyValuePair_2_t2049_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18979_gshared (Transform_1_t2494 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1550);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2049_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1247  Transform_1_EndInvoke_m18980_gshared (Transform_1_t2494 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1247 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m18981_gshared (Transform_1_t2502 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern "C" KeyValuePair_2_t2468  Transform_1_Invoke_m18982_gshared (Transform_1_t2502 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18982((Transform_1_t2502 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2468  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2468  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2468  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2049  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* KeyValuePair_2_t2049_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18983_gshared (Transform_1_t2502 * __this, Object_t * ___key, KeyValuePair_2_t2049  ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1550);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2049_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2468  Transform_1_EndInvoke_m18984_gshared (Transform_1_t2502 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2468 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m18985_gshared (ShimEnumerator_t2503 * __this, Dictionary_2_t2492 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2492 * L_0 = ___host;
		NullCheck((Dictionary_2_t2492 *)L_0);
		Enumerator_t2497  L_1 = (( Enumerator_t2497  (*) (Dictionary_2_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2492 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18986_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m18987_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2497  L_0 = (Enumerator_t2497 )(__this->___host_enumerator_0);
		Enumerator_t2497  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1247  L_3 = (DictionaryEntry_t1247 )InterfaceFuncInvoker0< DictionaryEntry_t1247  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18988_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2468  V_0 = {0};
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2468  L_1 = (( KeyValuePair_2_t2468  (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2468 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2468 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18989_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2468  V_0 = {0};
	{
		Enumerator_t2497 * L_0 = (Enumerator_t2497 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2468  L_1 = (( KeyValuePair_2_t2468  (*) (Enumerator_t2497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2497 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2468 )L_1;
		KeyValuePair_2_t2049  L_2 = (( KeyValuePair_2_t2049  (*) (KeyValuePair_2_t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2468 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		KeyValuePair_2_t2049  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m18990_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2503 *)__this);
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry() */, (ShimEnumerator_t2503 *)__this);
		DictionaryEntry_t1247  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1247_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m18991_gshared (EqualityComparer_1_t2504 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m18992_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2934_0_0_0_var = il2cpp_codegen_type_from_index(3046);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericEqualityComparer_1_t2934_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2504_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2504 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2505 * L_8 = (DefaultComparer_t2505 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2504_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18993_gshared (EqualityComparer_1_t2504 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2504 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2049  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T) */, (EqualityComparer_1_t2504 *)__this, (KeyValuePair_2_t2049 )((*(KeyValuePair_2_t2049 *)((KeyValuePair_2_t2049 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18994_gshared (EqualityComparer_1_t2504 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2504 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t2049 , KeyValuePair_2_t2049  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (EqualityComparer_1_t2504 *)__this, (KeyValuePair_2_t2049 )((*(KeyValuePair_2_t2049 *)((KeyValuePair_2_t2049 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t2049 )((*(KeyValuePair_2_t2049 *)((KeyValuePair_2_t2049 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Default()
extern "C" EqualityComparer_1_t2504 * EqualityComparer_1_get_Default_m18995_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2504 * L_0 = ((EqualityComparer_1_t2504_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m18996_gshared (DefaultComparer_t2505 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2504 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2504 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2504 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
extern "C" int32_t DefaultComparer_GetHashCode_m18997_gshared (DefaultComparer_t2505 * __this, KeyValuePair_2_t2049  ___obj, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18998_gshared (DefaultComparer_t2505 * __this, KeyValuePair_2_t2049  ___x, KeyValuePair_2_t2049  ___y, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = ___x;
		goto IL_0015;
	}
	{
		KeyValuePair_2_t2049  L_1 = ___y;
		KeyValuePair_2_t2049  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		KeyValuePair_2_t2049  L_4 = ___y;
		KeyValuePair_2_t2049  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61MethodDeclarations.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C" ParameterModifier_t1524  Array_InternalArray__get_Item_TisParameterModifier_t1524_m21064_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisParameterModifier_t1524_m21064(__this, p0, method) (( ParameterModifier_t1524  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisParameterModifier_t1524_m21064_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m19194_gshared (InternalEnumerator_1_t2523 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_gshared (InternalEnumerator_1_t2523 * __this, const MethodInfo* method)
{
	{
		ParameterModifier_t1524  L_0 = (( ParameterModifier_t1524  (*) (InternalEnumerator_1_t2523 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2523 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ParameterModifier_t1524  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19196_gshared (InternalEnumerator_1_t2523 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m19197_gshared (InternalEnumerator_1_t2523 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" ParameterModifier_t1524  InternalEnumerator_1_get_Current_m19198_gshared (InternalEnumerator_1_t2523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		ParameterModifier_t1524  L_8 = (( ParameterModifier_t1524  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" HitInfo_t752  Array_InternalArray__get_Item_TisHitInfo_t752_m21075_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisHitInfo_t752_m21075(__this, p0, method) (( HitInfo_t752  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisHitInfo_t752_m21075_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m19199_gshared (InternalEnumerator_1_t2524 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
{
	{
		HitInfo_t752  L_0 = (( HitInfo_t752  (*) (InternalEnumerator_1_t2524 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2524 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		HitInfo_t752  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19201_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m19202_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" HitInfo_t752  InternalEnumerator_1_get_Current_m19203_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		HitInfo_t752  L_8 = (( HitInfo_t752  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_34.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_36.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_7.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_7MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_34MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_36MethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2836;
struct Transform_1_t2530;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m21113_gshared (Dictionary_2_t2529 * __this, DictionaryEntryU5BU5D_t2836* p0, int32_t p1, Transform_1_t2530 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m21113(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2529 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2530 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m21113_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t2541;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2531_m21114_gshared (Dictionary_2_t2529 * __this, Array_t * p0, int32_t p1, Transform_1_t2541 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2531_m21114(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, Transform_1_t2541 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2531_m21114_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2804;
struct Transform_1_t2541;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2531_TisKeyValuePair_2_t2531_m21116_gshared (Dictionary_2_t2529 * __this, KeyValuePair_2U5BU5D_t2804* p0, int32_t p1, Transform_1_t2541 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2531_TisKeyValuePair_2_t2531_m21116(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2529 *, KeyValuePair_2U5BU5D_t2804*, int32_t, Transform_1_t2541 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2531_TisKeyValuePair_2_t2531_m21116_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m19205_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19207_gshared (Dictionary_2_t2529 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19209_gshared (Dictionary_2_t2529 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2529 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m19211_gshared (Dictionary_2_t2529 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void Dictionary_2__ctor_m19213_gshared (Dictionary_2_t2529 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2531  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2531  L_9 = (KeyValuePair_2_t2531 )InterfaceFuncInvoker0< KeyValuePair_2_t2531  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2531 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2531 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2531 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2529 *)__this);
			VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_10, (int32_t)L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
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
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m19215_gshared (Dictionary_2_t2529 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19217_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2529 *)__this);
		KeyCollection_t2534 * L_0 = (( KeyCollection_t2534 * (*) (Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19219_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2529 *)__this);
		ValueCollection_t2538 * L_0 = (( ValueCollection_t2538 * (*) (Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19221_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2529 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey) */, (Dictionary_2_t2529 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2529 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2529 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2529 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2529 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19223_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2529 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2529 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2529 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2529 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2529 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2529 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2529 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19225_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2529 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2529 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2529 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2529 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2529 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2529 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2529 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19227_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2529 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey) */, (Dictionary_2_t2529 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19229_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2529 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey) */, (Dictionary_2_t2529 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19231_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19233_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19235_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19237_gshared (Dictionary_2_t2529 * __this, KeyValuePair_2_t2531  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2531 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2531 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2529 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19239_gshared (Dictionary_2_t2529 * __this, KeyValuePair_2_t2531  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2531  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2529 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2529 *, KeyValuePair_2_t2531 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2529 *)__this, (KeyValuePair_2_t2531 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19241_gshared (Dictionary_2_t2529 * __this, KeyValuePair_2U5BU5D_t2804* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2804* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, KeyValuePair_2U5BU5D_t2804*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2529 *)__this, (KeyValuePair_2U5BU5D_t2804*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19243_gshared (Dictionary_2_t2529 * __this, KeyValuePair_2_t2531  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2531  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2529 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2529 *, KeyValuePair_2_t2531 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2529 *)__this, (KeyValuePair_2_t2531 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2531 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2529 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19245_gshared (Dictionary_2_t2529 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3048);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2804* V_0 = {0};
	DictionaryEntryU5BU5D_t2836* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B5_1 = {0};
	Dictionary_2_t2529 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B4_1 = {0};
	Dictionary_2_t2529 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2804*)((KeyValuePair_2U5BU5D_t2804*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2804* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2804* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, KeyValuePair_2U5BU5D_t2804*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2529 *)__this, (KeyValuePair_2U5BU5D_t2804*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2529 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2836*)((DictionaryEntryU5BU5D_t2836*)IsInst(L_6, DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2836* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2836* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2530 * L_10 = ((Dictionary_2_t2529_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2529 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2529 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2530 * L_12 = (Transform_1_t2530 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2530 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2529_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2529 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2530 * L_13 = ((Dictionary_2_t2529_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2529 *)G_B5_2);
		(( void (*) (Dictionary_2_t2529 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2530 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2529 *)G_B5_2, (DictionaryEntryU5BU5D_t2836*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2530 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2541 * L_17 = (Transform_1_t2541 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2541 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, Transform_1_t2541 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2529 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2541 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19247_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536  L_0 = {0};
		(( void (*) (Enumerator_t2536 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2536  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19249_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536  L_0 = {0};
		(( void (*) (Enumerator_t2536 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2536  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19251_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2542 * L_0 = (ShimEnumerator_t2542 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2542 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19253_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1368_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" int32_t Dictionary_2_get_Item_m19255_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		KeyNotFoundException_t1368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3049);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		TextEditOpU5BU5D_t2526* L_19 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21, sizeof(int32_t)));
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1368 * L_26 = (KeyNotFoundException_t1368 *)il2cpp_codegen_object_new (KeyNotFoundException_t1368_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7532(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_set_Item_m19257_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t2017* L_38 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t2017* L_41 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t1037* L_43 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_46 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t2017* L_49 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1367 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t148* L_52 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t2017* L_56 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t2017* L_58 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1367 )))->___Next_1 = L_60;
		LinkU5BU5D_t2017* L_61 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t1037* L_63 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_66 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		TextEditOpU5BU5D_t2526* L_69 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		int32_t L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_69, L_70, sizeof(int32_t))) = (int32_t)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void Dictionary_2_Init_m19259_gshared (Dictionary_2_t2529 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2529 * G_B4_0 = {0};
	Dictionary_2_t2529 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2529 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, (String_t*)_stringLiteral1504, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2529 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2529 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2529 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t1968 * L_5 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2529 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2529 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m19261_gshared (Dictionary_2_t2529 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((TextEditOpU5BU5D_t2526*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral897;
extern Il2CppCodeGenString* _stringLiteral2982;
extern Il2CppCodeGenString* _stringLiteral2983;
extern "C" void Dictionary_2_CopyToCheck_m19263_gshared (Dictionary_2_t2529 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		_stringLiteral2982 = il2cpp_codegen_string_literal_from_index(2982);
		_stringLiteral2983 = il2cpp_codegen_string_literal_from_index(2983);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral458, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t275 * L_7 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_7, (String_t*)_stringLiteral2982, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m6110((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2529 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count() */, (Dictionary_2_t2529 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t275 * L_12 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_12, (String_t*)_stringLiteral2983, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2531  Dictionary_2_make_pair_m19265_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t2531  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2531 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (Object_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19267_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m19269_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19271_gshared (Dictionary_2_t2529 * __this, KeyValuePair_2U5BU5D_t2804* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2804* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2529 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2804* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2541 * L_5 = (Transform_1_t2541 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2541 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, KeyValuePair_2U5BU5D_t2804*, int32_t, Transform_1_t2541 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2529 *)__this, (KeyValuePair_2U5BU5D_t2804*)L_2, (int32_t)L_3, (Transform_1_t2541 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m19273_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		LinkU5BU5D_t2017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3050);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1037* V_1 = {0};
	LinkU5BU5D_t2017* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t148* V_7 = {0};
	TextEditOpU5BU5D_t2526* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t985_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7766(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1037*)((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t2017*)((LinkU5BU5D_t2017*)SZArrayNew(LinkU5BU5D_t2017_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t1037* L_4 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t2017* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_10 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1367 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2017* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1037* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2017* L_26 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1367 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t1037* L_32 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1037* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2017* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (TextEditOpU5BU5D_t2526*)((TextEditOpU5BU5D_t2526*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t148* L_37 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		TextEditOpU5BU5D_t2526* L_40 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		TextEditOpU5BU5D_t2526* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		TextEditOpU5BU5D_t2526* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2984;
extern "C" void Dictionary_2_Add_m19275_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2984 = il2cpp_codegen_string_literal_from_index(2984);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_15 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t275 * L_20 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_20, (String_t*)_stringLiteral2984, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t2017* L_21 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t1037* L_30 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t2017* L_42 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1037* L_44 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1367 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t1037* L_47 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t148* L_50 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		TextEditOpU5BU5D_t2526* L_53 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		int32_t L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_53, L_54, sizeof(int32_t))) = (int32_t)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m19277_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		TextEditOpU5BU5D_t2526* L_4 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		TextEditOpU5BU5D_t2526* L_5 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t2017* L_6 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		LinkU5BU5D_t2017* L_7 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_ContainsKey_m19279_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t2017* L_19 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19281_gshared (Dictionary_2_t2529 * __this, int32_t ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2543 * L_0 = (( EqualityComparer_1_t2543 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		TextEditOpU5BU5D_t2526* L_5 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7, sizeof(int32_t))), (int32_t)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t2017* L_10 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t1037* L_16 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral906;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_GetObjectData_m19283_gshared (Dictionary_2_t2529 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral906 = il2cpp_codegen_string_literal_from_index(906);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2804* V_0 = {0};
	{
		SerializationInfo_t818 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral906, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t818 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t818 *)L_2);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_2, (String_t*)_stringLiteral908, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t818 *)L_4);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_4, (String_t*)_stringLiteral910, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2804*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2804*)((KeyValuePair_2U5BU5D_t2804*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2804* L_8 = V_0;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, KeyValuePair_2U5BU5D_t2804*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2529 *)__this, (KeyValuePair_2U5BU5D_t2804*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t818 * L_9 = ___info;
		Int32U5BU5D_t1037* L_10 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t818 *)L_9);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_9, (String_t*)_stringLiteral1538, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t818 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2804* L_12 = V_0;
		NullCheck((SerializationInfo_t818 *)L_11);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_11, (String_t*)_stringLiteral2985, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_OnDeserialization_m19285_gshared (Dictionary_2_t2529 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		_stringLiteral908 = il2cpp_codegen_string_literal_from_index(908);
		_stringLiteral910 = il2cpp_codegen_string_literal_from_index(910);
		_stringLiteral1538 = il2cpp_codegen_string_literal_from_index(1538);
		_stringLiteral2985 = il2cpp_codegen_string_literal_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2804* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t818 * L_0 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
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
		SerializationInfo_t818 * L_1 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_1, (String_t*)_stringLiteral908, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t818 * L_3 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_3, (String_t*)_stringLiteral910, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t818 * L_6 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t818 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m6125((SerializationInfo_t818 *)L_6, (String_t*)_stringLiteral1538, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t818 * L_8 = (SerializationInfo_t818 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t818 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m6118((SerializationInfo_t818 *)L_8, (String_t*)_stringLiteral2985, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2804*)((KeyValuePair_2U5BU5D_t2804*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2529 *)__this);
		(( void (*) (Dictionary_2_t2529 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2529 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2804* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2804* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2531 *)((KeyValuePair_2_t2531 *)(KeyValuePair_2_t2531 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t2531 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2804* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2531 *)((KeyValuePair_2_t2531 *)(KeyValuePair_2_t2531 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t2531 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2529 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2804* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t818 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextEditOp_t773_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_Remove_m19287_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		TextEditOp_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1037* L_6 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t2017* L_11 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_16 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2017* L_22 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1367 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t1037* L_29 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t2017* L_31 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1367 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t2017* L_34 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t2017* L_36 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1367 )))->___Next_1);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1367 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t2017* L_39 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1367 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t2017* L_43 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1367 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t148* L_45 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		TextEditOpU5BU5D_t2526* L_48 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (TextEditOp_t773_il2cpp_TypeInfo_var, (&V_5));
		int32_t L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49, sizeof(int32_t))) = (int32_t)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* TextEditOp_t773_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_TryGetValue_m19289_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		TextEditOp_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1037* L_5 = (Int32U5BU5D_t1037*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1037* L_7 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t2017* L_9 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1367 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t148* L_14 = (ObjectU5BU5D_t148*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		int32_t* L_19 = ___value;
		TextEditOpU5BU5D_t2526* L_20 = (TextEditOpU5BU5D_t2526*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t2017* L_23 = (LinkU5BU5D_t2017*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1367 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_27 = ___value;
		Initobj (TextEditOp_t773_il2cpp_TypeInfo_var, (&V_2));
		int32_t L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2534 * Dictionary_2_get_Keys_m19291_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2534 * L_0 = (KeyCollection_t2534 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2534 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2538 * Dictionary_2_get_Values_m19293_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2538 * L_0 = (ValueCollection_t2538 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2538 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2986;
extern "C" Object_t * Dictionary_2_ToTKey_m19295_gshared (Dictionary_2_t2529 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t275 * L_6 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_6, (String_t*)L_5, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextEditOp_t773_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2986;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" int32_t Dictionary_2_ToTValue_m19297_gshared (Dictionary_2_t2529 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TextEditOp_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (TextEditOp_t773_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m423(NULL /*static, unused*/, (String_t*)_stringLiteral2986, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t275 * L_8 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_8, (String_t*)L_7, (String_t*)_stringLiteral575, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19299_gshared (Dictionary_2_t2529 * __this, KeyValuePair_2_t2531  ___pair, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2531 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2529 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2529 *)__this, (Object_t *)L_0, (int32_t*)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2543 * L_2 = (( EqualityComparer_1_t2543 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2531 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t2543 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T) */, (EqualityComparer_1_t2543 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2536  Dictionary_2_GetEnumerator_m19301_gshared (Dictionary_2_t2529 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536  L_0 = {0};
		(( void (*) (Enumerator_t2536 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2529 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m19303_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_2);
		DictionaryEntry_t1247  L_4 = {0};
		DictionaryEntry__ctor_m6108(&L_4, (Object_t *)L_0, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Int32)
extern "C" KeyValuePair_2_t2531  Array_InternalArray__get_Item_TisKeyValuePair_2_t2531_m21086_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2531_m21086(__this, p0, method) (( KeyValuePair_2_t2531  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2531_m21086_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m19304_gshared (InternalEnumerator_1_t2532 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19305_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2531  L_0 = (( KeyValuePair_2_t2531  (*) (InternalEnumerator_1_t2532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2532 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2531  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19306_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m19307_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" KeyValuePair_2_t2531  InternalEnumerator_1_get_Current_m19308_gshared (InternalEnumerator_1_t2532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2531  L_8 = (( KeyValuePair_2_t2531  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
extern "C" void KeyValuePair_2__ctor_m19309_gshared (KeyValuePair_2_t2531 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2531 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2531 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2531 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2531 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m19310_gshared (KeyValuePair_2_t2531 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m19311_gshared (KeyValuePair_2_t2531 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m19312_gshared (KeyValuePair_2_t2531 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m19313_gshared (KeyValuePair_2_t2531 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral534;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" String_t* KeyValuePair_2_ToString_m19314_gshared (KeyValuePair_2_t2531 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		_stringLiteral534 = il2cpp_codegen_string_literal_from_index(534);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t35* G_B2_1 = {0};
	StringU5BU5D_t35* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t35* G_B1_1 = {0};
	StringU5BU5D_t35* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t35* G_B3_2 = {0};
	StringU5BU5D_t35* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t35* G_B5_1 = {0};
	StringU5BU5D_t35* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t35* G_B4_1 = {0};
	StringU5BU5D_t35* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t35* G_B6_2 = {0};
	StringU5BU5D_t35* G_B6_3 = {0};
	{
		StringU5BU5D_t35* L_0 = (StringU5BU5D_t35*)((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral471);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral471;
		StringU5BU5D_t35* L_1 = (StringU5BU5D_t35*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t35* L_6 = (StringU5BU5D_t35*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral534);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral534;
		StringU5BU5D_t35* L_7 = (StringU5BU5D_t35*)L_6;
		int32_t L_8 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t35* L_12 = (StringU5BU5D_t35*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral472);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral472;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m517(NULL /*static, unused*/, (StringU5BU5D_t35*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
// System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.TextEditor/TextEditOp>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.TextEditor/TextEditOp>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisTextEditOp_t773_m21097_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTextEditOp_t773_m21097(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTextEditOp_t773_m21097_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m19315_gshared (InternalEnumerator_1_t2533 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19316_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2533 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19317_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m19318_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" int32_t InternalEnumerator_1_get_Current_m19319_gshared (InternalEnumerator_1_t2533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_35.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_35MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2537;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21108_gshared (Dictionary_2_t2529 * __this, Array_t * p0, int32_t p1, Transform_1_t2537 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21108(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, Transform_1_t2537 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21108_gshared)(__this, p0, p1, p2, method)
struct ObjectU5BU5D_t148;
struct Transform_1_t2537;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21109_gshared (Dictionary_2_t2529 * __this, ObjectU5BU5D_t148* p0, int32_t p1, Transform_1_t2537 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21109(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2529 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2537 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21109_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void KeyCollection__ctor_m19320_gshared (KeyCollection_t2534 * __this, Dictionary_2_t2529 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2529 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t2529 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m19321_gshared (KeyCollection_t2534 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m19322_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m19323_gshared (KeyCollection_t2534 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2529 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey) */, (Dictionary_2_t2529 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m19324_gshared (KeyCollection_t2534 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m19325_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2534 *)__this);
		Enumerator_t2535  L_0 = (( Enumerator_t2535  (*) (KeyCollection_t2534 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2534 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2535  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m19326_gshared (KeyCollection_t2534 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t148* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t148* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t148* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2534 *)__this);
		(( void (*) (KeyCollection_t2534 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2534 *)__this, (ObjectU5BU5D_t148*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2529 * L_4 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2529 *)L_4);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2529 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2529 * L_7 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2537 * L_11 = (Transform_1_t2537 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2537 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2529 *)L_7);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, Transform_1_t2537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2529 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2537 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m19327_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2534 *)__this);
		Enumerator_t2535  L_0 = (( Enumerator_t2535  (*) (KeyCollection_t2534 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2534 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2535  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m19328_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m19329_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m19330_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(TKey[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void KeyCollection_CopyTo_m19331_gshared (KeyCollection_t2534 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2529 *)L_0);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2529 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2529 * L_3 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2537 * L_7 = (Transform_1_t2537 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2537 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2529 *)L_3);
		(( void (*) (Dictionary_2_t2529 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2529 *)L_3, (ObjectU5BU5D_t148*)L_4, (int32_t)L_5, (Transform_1_t2537 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2535  KeyCollection_GetEnumerator_m19332_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		Enumerator_t2535  L_1 = {0};
		(( void (*) (Enumerator_t2535 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2529 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m19333_gshared (KeyCollection_t2534 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2529 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count() */, (Dictionary_2_t2529 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
extern "C" void Enumerator__ctor_m19334_gshared (Enumerator_t2535 * __this, Dictionary_2_t2529 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = ___host;
		NullCheck((Dictionary_2_t2529 *)L_0);
		Enumerator_t2536  L_1 = (( Enumerator_t2536  (*) (Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19335_gshared (Enumerator_t2535 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19336_gshared (Enumerator_t2535 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19337_gshared (Enumerator_t2535 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m19338_gshared (Enumerator_t2535 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2531 * L_1 = (KeyValuePair_2_t2531 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2531 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
extern "C" void Enumerator__ctor_m19339_gshared (Enumerator_t2536 * __this, Dictionary_2_t2529 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2529 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19340_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2531  L_0 = (KeyValuePair_2_t2531 )(__this->___current_3);
		KeyValuePair_2_t2531  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19341_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2531 * L_0 = (KeyValuePair_2_t2531 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2531 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2531 * L_2 = (KeyValuePair_2_t2531 *)&(__this->___current_3);
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2531 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t1247  L_6 = {0};
		DictionaryEntry__ctor_m6108(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19342_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19343_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19344_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2529 * L_4 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2017* L_5 = (LinkU5BU5D_t2017*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1367 *)(Link_t1367 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1367 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2529 * L_8 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t148* L_9 = (ObjectU5BU5D_t148*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2529 * L_12 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck(L_12);
		TextEditOpU5BU5D_t2526* L_13 = (TextEditOpU5BU5D_t2526*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2531  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2531 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15, sizeof(int32_t))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2529 * L_18 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2531  Enumerator_get_Current_m19345_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2531  L_0 = (KeyValuePair_2_t2531 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19346_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2531 * L_0 = (KeyValuePair_2_t2531 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2531 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m19347_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2531 * L_0 = (KeyValuePair_2_t2531 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2531 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2988;
extern "C" void Enumerator_VerifyState_m19348_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2988 = il2cpp_codegen_string_literal_from_index(2988);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t905 * L_1 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t2529 * L_2 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1075 * L_5 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_5, (String_t*)_stringLiteral2988, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2989;
extern "C" void Enumerator_VerifyCurrent_m19349_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2989 = il2cpp_codegen_string_literal_from_index(2989);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2989, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19350_gshared (Enumerator_t2536 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2529 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m19351_gshared (Transform_1_t2537 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::Invoke(TKey,TValue)
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
extern "C" Object_t * Transform_1_Invoke_m19352_gshared (Transform_1_t2537 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19352((Transform_1_t2537 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* TextEditOp_t773_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19353_gshared (Transform_1_t2537 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t773_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m19354_gshared (Transform_1_t2537 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_37.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_37MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2540;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<UnityEngine.TextEditor/TextEditOp>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<UnityEngine.TextEditor/TextEditOp>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t773_m21110_gshared (Dictionary_2_t2529 * __this, Array_t * p0, int32_t p1, Transform_1_t2540 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t773_m21110(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, Transform_1_t2540 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t773_m21110_gshared)(__this, p0, p1, p2, method)
struct TextEditOpU5BU5D_t2526;
struct Transform_1_t2540;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisTextEditOp_t773_TisTextEditOp_t773_m21112_gshared (Dictionary_2_t2529 * __this, TextEditOpU5BU5D_t2526* p0, int32_t p1, Transform_1_t2540 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisTextEditOp_t773_TisTextEditOp_t773_m21112(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2529 *, TextEditOpU5BU5D_t2526*, int32_t, Transform_1_t2540 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisTextEditOp_t773_TisTextEditOp_t773_m21112_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void ValueCollection__ctor_m19355_gshared (ValueCollection_t2538 * __this, Dictionary_2_t2529 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1533 = il2cpp_codegen_string_literal_from_index(1533);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2529 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t2529 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19356_gshared (ValueCollection_t2538 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19357_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19358_gshared (ValueCollection_t2538 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t2529 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2529 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19359_gshared (ValueCollection_t2538 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2987 = il2cpp_codegen_string_literal_from_index(2987);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, (String_t*)_stringLiteral2987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19360_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2538 *)__this);
		Enumerator_t2539  L_0 = (( Enumerator_t2539  (*) (ValueCollection_t2538 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2538 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2539  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m19361_gshared (ValueCollection_t2538 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	TextEditOpU5BU5D_t2526* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (TextEditOpU5BU5D_t2526*)((TextEditOpU5BU5D_t2526*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		TextEditOpU5BU5D_t2526* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		TextEditOpU5BU5D_t2526* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2538 *)__this);
		(( void (*) (ValueCollection_t2538 *, TextEditOpU5BU5D_t2526*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2538 *)__this, (TextEditOpU5BU5D_t2526*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2529 * L_4 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2529 *)L_4);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2529 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2529 * L_7 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2540 * L_11 = (Transform_1_t2540 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2540 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2529 *)L_7);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, Transform_1_t2540 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2529 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2540 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19362_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2538 *)__this);
		Enumerator_t2539  L_0 = (( Enumerator_t2539  (*) (ValueCollection_t2538 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2538 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2539  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19363_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19364_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m19365_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(TValue[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m19366_gshared (ValueCollection_t2538 * __this, TextEditOpU5BU5D_t2526* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		TextEditOpU5BU5D_t2526* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2529 *)L_0);
		(( void (*) (Dictionary_2_t2529 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2529 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2529 * L_3 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		TextEditOpU5BU5D_t2526* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2540 * L_7 = (Transform_1_t2540 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2540 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2529 *)L_3);
		(( void (*) (Dictionary_2_t2529 *, TextEditOpU5BU5D_t2526*, int32_t, Transform_1_t2540 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2529 *)L_3, (TextEditOpU5BU5D_t2526*)L_4, (int32_t)L_5, (Transform_1_t2540 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2539  ValueCollection_GetEnumerator_m19367_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		Enumerator_t2539  L_1 = {0};
		(( void (*) (Enumerator_t2539 *, Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2529 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m19368_gshared (ValueCollection_t2538 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = (Dictionary_2_t2529 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2529 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count() */, (Dictionary_2_t2529 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
extern "C" void Enumerator__ctor_m19369_gshared (Enumerator_t2539 * __this, Dictionary_2_t2529 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2529 * L_0 = ___host;
		NullCheck((Dictionary_2_t2529 *)L_0);
		Enumerator_t2536  L_1 = (( Enumerator_t2536  (*) (Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19370_gshared (Enumerator_t2539 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19371_gshared (Enumerator_t2539 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19372_gshared (Enumerator_t2539 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" int32_t Enumerator_get_Current_m19373_gshared (Enumerator_t2539 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2531 * L_1 = (KeyValuePair_2_t2531 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2531 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m19374_gshared (Transform_1_t2540 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::Invoke(TKey,TValue)
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
extern "C" int32_t Transform_1_Invoke_m19375_gshared (Transform_1_t2540 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19375((Transform_1_t2540 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* TextEditOp_t773_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19376_gshared (Transform_1_t2540 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t773_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m19377_gshared (Transform_1_t2540 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m19378_gshared (Transform_1_t2530 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
extern "C" DictionaryEntry_t1247  Transform_1_Invoke_m19379_gshared (Transform_1_t2530 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19379((Transform_1_t2530 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* TextEditOp_t773_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19380_gshared (Transform_1_t2530 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t773_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1247  Transform_1_EndInvoke_m19381_gshared (Transform_1_t2530 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1247 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m19382_gshared (Transform_1_t2541 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
extern "C" KeyValuePair_2_t2531  Transform_1_Invoke_m19383_gshared (Transform_1_t2541 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19383((Transform_1_t2541 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2531  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2531  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2531  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* TextEditOp_t773_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19384_gshared (Transform_1_t2541 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t773_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2531  Transform_1_EndInvoke_m19385_gshared (Transform_1_t2541 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2531 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m19386_gshared (ShimEnumerator_t2542 * __this, Dictionary_2_t2529 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2529 * L_0 = ___host;
		NullCheck((Dictionary_2_t2529 *)L_0);
		Enumerator_t2536  L_1 = (( Enumerator_t2536  (*) (Dictionary_2_t2529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2529 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19387_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m19388_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2536  L_0 = (Enumerator_t2536 )(__this->___host_enumerator_0);
		Enumerator_t2536  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1247  L_3 = (DictionaryEntry_t1247 )InterfaceFuncInvoker0< DictionaryEntry_t1247  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19389_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2531  V_0 = {0};
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2531  L_1 = (( KeyValuePair_2_t2531  (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2531 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2531 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19390_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2531  V_0 = {0};
	{
		Enumerator_t2536 * L_0 = (Enumerator_t2536 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2531  L_1 = (( KeyValuePair_2_t2531  (*) (Enumerator_t2536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2531 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2531 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m19391_gshared (ShimEnumerator_t2542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2542 *)__this);
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry() */, (ShimEnumerator_t2542 *)__this);
		DictionaryEntry_t1247  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1247_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m19392_gshared (EqualityComparer_1_t2543 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m19393_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2934_0_0_0_var = il2cpp_codegen_type_from_index(3046);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericEqualityComparer_1_t2934_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2543_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2543 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2544 * L_8 = (DefaultComparer_t2544 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2544 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2543_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19394_gshared (EqualityComparer_1_t2543 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2543 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::GetHashCode(T) */, (EqualityComparer_1_t2543 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19395_gshared (EqualityComparer_1_t2543 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2543 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T) */, (EqualityComparer_1_t2543 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::get_Default()
extern "C" EqualityComparer_1_t2543 * EqualityComparer_1_get_Default_m19396_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2543 * L_0 = ((EqualityComparer_1_t2543_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void DefaultComparer__ctor_m19397_gshared (DefaultComparer_t2544 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2543 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2543 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2543 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::GetHashCode(T)
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
extern "C" int32_t DefaultComparer_GetHashCode_m19398_gshared (DefaultComparer_t2544 * __this, int32_t ___obj, const MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19399_gshared (DefaultComparer_t2544 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		goto IL_0015;
	}
	{
		int32_t L_1 = ___y;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		int32_t L_4 = ___y;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_gen.h"
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_genMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_genMethodDeclarations.h"
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20755_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20755(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20755_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_2__ctor_m19450_gshared (InvokableCall_2_t2549 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t777 *)__this);
		BaseInvokableCall__ctor_m3949((BaseInvokableCall_t777 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_3 = ___target;
		MethodInfo_t * L_4 = ___theFunction;
		Delegate_t520 * L_5 = Delegate_CreateDelegate_m4146(NULL /*static, unused*/, (Type_t *)L_2, (Object_t *)L_3, (MethodInfo_t *)L_4, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_2_t2550 *)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2991;
extern "C" void InvokableCall_2_Invoke_m19451_gshared (InvokableCall_2_t2549 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2991 = il2cpp_codegen_string_literal_from_index(2991);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t275 * L_1 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_1, (String_t*)_stringLiteral2991, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t148* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t148* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_2_t2550 * L_6 = (UnityAction_2_t2550 *)(__this->___Delegate_0);
		bool L_7 = BaseInvokableCall_AllowInvoke_m3950(NULL /*static, unused*/, (Delegate_t520 *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		UnityAction_2_t2550 * L_8 = (UnityAction_2_t2550 *)(__this->___Delegate_0);
		ObjectU5BU5D_t148* L_9 = ___args;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		ObjectU5BU5D_t148* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((UnityAction_2_t2550 *)L_8);
		(( void (*) (UnityAction_2_t2550 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((UnityAction_2_t2550 *)L_8, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_10, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m19452_gshared (InvokableCall_2_t2549 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t2550 * L_0 = (UnityAction_2_t2550 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4145((Delegate_t520 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_2_t2550 * L_3 = (UnityAction_2_t2550 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4144((Delegate_t520 *)L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_2__ctor_m19453_gshared (UnityAction_2_t2550 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" void UnityAction_2_Invoke_m19454_gshared (UnityAction_2_t2550 * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_2_Invoke_m19454((UnityAction_2_t2550 *)__this->___prev_9,___arg0, ___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_2_BeginInvoke_m19455_gshared (UnityAction_2_t2550 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_2_EndInvoke_m19456_gshared (UnityAction_2_t2550 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_gen.h"
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_genMethodDeclarations.h"
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_gen.h"
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_genMethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_3__ctor_m19457_gshared (InvokableCall_3_t2551 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t777 *)__this);
		BaseInvokableCall__ctor_m3949((BaseInvokableCall_t777 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_3_t2552 * L_2 = (UnityAction_3_t2552 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t520 * L_6 = Delegate_CreateDelegate_m4146(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t520 * L_7 = Delegate_Combine_m2407(NULL /*static, unused*/, (Delegate_t520 *)L_2, (Delegate_t520 *)((UnityAction_3_t2552 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_3_t2552 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2991;
extern "C" void InvokableCall_3_Invoke_m19458_gshared (InvokableCall_3_t2551 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2991 = il2cpp_codegen_string_literal_from_index(2991);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t275 * L_1 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_1, (String_t*)_stringLiteral2991, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t148* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t148* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t148* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		UnityAction_3_t2552 * L_8 = (UnityAction_3_t2552 *)(__this->___Delegate_0);
		bool L_9 = BaseInvokableCall_AllowInvoke_m3950(NULL /*static, unused*/, (Delegate_t520 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		UnityAction_3_t2552 * L_10 = (UnityAction_3_t2552 *)(__this->___Delegate_0);
		ObjectU5BU5D_t148* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		ObjectU5BU5D_t148* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		int32_t L_14 = 1;
		ObjectU5BU5D_t148* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		NullCheck((UnityAction_3_t2552 *)L_10);
		(( void (*) (UnityAction_3_t2552 *, Object_t *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((UnityAction_3_t2552 *)L_10, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m19459_gshared (InvokableCall_3_t2551 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t2552 * L_0 = (UnityAction_3_t2552 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4145((Delegate_t520 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_3_t2552 * L_3 = (UnityAction_3_t2552 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4144((Delegate_t520 *)L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_3__ctor_m19460_gshared (UnityAction_3_t2552 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m19461_gshared (UnityAction_3_t2552 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_3_Invoke_m19461((UnityAction_3_t2552 *)__this->___prev_9,___arg0, ___arg1, ___arg2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_3_BeginInvoke_m19462_gshared (UnityAction_3_t2552 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m19463_gshared (UnityAction_3_t2552 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_gen.h"
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_genMethodDeclarations.h"
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_gen.h"
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_genMethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_4__ctor_m19464_gshared (InvokableCall_4_t2553 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t777 *)__this);
		BaseInvokableCall__ctor_m3949((BaseInvokableCall_t777 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_4_t2554 * L_2 = (UnityAction_4_t2554 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t520 * L_6 = Delegate_CreateDelegate_m4146(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t520 * L_7 = Delegate_Combine_m2407(NULL /*static, unused*/, (Delegate_t520 *)L_2, (Delegate_t520 *)((UnityAction_4_t2554 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_4_t2554 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2991;
extern "C" void InvokableCall_4_Invoke_m19465_gshared (InvokableCall_4_t2553 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2991 = il2cpp_codegen_string_literal_from_index(2991);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t275 * L_1 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_1, (String_t*)_stringLiteral2991, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t148* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t148* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t148* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ObjectU5BU5D_t148* L_8 = ___args;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		int32_t L_9 = 3;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		UnityAction_4_t2554 * L_10 = (UnityAction_4_t2554 *)(__this->___Delegate_0);
		bool L_11 = BaseInvokableCall_AllowInvoke_m3950(NULL /*static, unused*/, (Delegate_t520 *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		UnityAction_4_t2554 * L_12 = (UnityAction_4_t2554 *)(__this->___Delegate_0);
		ObjectU5BU5D_t148* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		ObjectU5BU5D_t148* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		int32_t L_16 = 1;
		ObjectU5BU5D_t148* L_17 = ___args;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		int32_t L_18 = 2;
		ObjectU5BU5D_t148* L_19 = ___args;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		NullCheck((UnityAction_4_t2554 *)L_12);
		(( void (*) (UnityAction_4_t2554 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((UnityAction_4_t2554 *)L_12, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
	}

IL_006f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m19466_gshared (InvokableCall_4_t2553 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t2554 * L_0 = (UnityAction_4_t2554 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4145((Delegate_t520 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_4_t2554 * L_3 = (UnityAction_4_t2554 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4144((Delegate_t520 *)L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_4__ctor_m19467_gshared (UnityAction_4_t2554 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m19468_gshared (UnityAction_4_t2554 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_4_Invoke_m19468((UnityAction_4_t2554 *)__this->___prev_9,___arg0, ___arg1, ___arg2, ___arg3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_4_BeginInvoke_m19469_gshared (UnityAction_4_t2554 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	__d_args[3] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m19470_gshared (UnityAction_4_t2554 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m19471_gshared (CachedInvokableCall_1_t2555 * __this, Object_t76 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		Object_t76 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2142 *)__this);
		(( void (*) (InvokableCall_1_t2142 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2142 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		Object_t * L_3 = ___argument;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m19472_gshared (CachedInvokableCall_1_t2555 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2142 *)__this);
		(( void (*) (InvokableCall_1_t2142 *, ObjectU5BU5D_t148*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2142 *)__this, (ObjectU5BU5D_t148*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m4147_gshared (CachedInvokableCall_1_t878 * __this, Object_t76 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		Object_t76 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2297 *)__this);
		(( void (*) (InvokableCall_1_t2297 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2297 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		float L_3 = ___argument;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m19473_gshared (CachedInvokableCall_1_t878 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2297 *)__this);
		(( void (*) (InvokableCall_1_t2297 *, ObjectU5BU5D_t148*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2297 *)__this, (ObjectU5BU5D_t148*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4MethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m4148_gshared (CachedInvokableCall_1_t879 * __this, Object_t76 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		Object_t76 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2556 *)__this);
		(( void (*) (InvokableCall_1_t2556 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2556 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		int32_t L_3 = ___argument;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m19474_gshared (CachedInvokableCall_1_t879 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2556 *)__this);
		(( void (*) (InvokableCall_1_t2556 *, ObjectU5BU5D_t148*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2556 *)__this, (ObjectU5BU5D_t148*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11MethodDeclarations.h"
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t151_m21117_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t151_m21117(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t151_m21117_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m19475_gshared (InvokableCall_1_t2556 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t777 *)__this);
		BaseInvokableCall__ctor_m3949((BaseInvokableCall_t777 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t2557 * L_2 = (UnityAction_1_t2557 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t520 * L_6 = Delegate_CreateDelegate_m4146(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t520 * L_7 = Delegate_Combine_m2407(NULL /*static, unused*/, (Delegate_t520 *)L_2, (Delegate_t520 *)((UnityAction_1_t2557 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t2557 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
extern "C" void InvokableCall_1__ctor_m19476_gshared (InvokableCall_1_t2556 * __this, UnityAction_1_t2557 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t777 *)__this);
		BaseInvokableCall__ctor_m3948((BaseInvokableCall_t777 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2557 * L_0 = (UnityAction_1_t2557 *)(__this->___Delegate_0);
		UnityAction_1_t2557 * L_1 = ___callback;
		Delegate_t520 * L_2 = Delegate_Combine_m2407(NULL /*static, unused*/, (Delegate_t520 *)L_0, (Delegate_t520 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t2557 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2991;
extern "C" void InvokableCall_1_Invoke_m19477_gshared (InvokableCall_1_t2556 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2991 = il2cpp_codegen_string_literal_from_index(2991);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t275 * L_1 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_1, (String_t*)_stringLiteral2991, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t148* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t2557 * L_4 = (UnityAction_1_t2557 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3950(NULL /*static, unused*/, (Delegate_t520 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2557 * L_6 = (UnityAction_1_t2557 *)(__this->___Delegate_0);
		ObjectU5BU5D_t148* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t2557 *)L_6);
		(( void (*) (UnityAction_1_t2557 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t2557 *)L_6, (int32_t)((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m19478_gshared (InvokableCall_1_t2556 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2557 * L_0 = (UnityAction_1_t2557 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4145((Delegate_t520 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2557 * L_3 = (UnityAction_1_t2557 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4144((Delegate_t520 *)L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m19479_gshared (UnityAction_1_t2557 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityAction_1_Invoke_m19480_gshared (UnityAction_1_t2557 * __this, int32_t ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m19480((UnityAction_1_t2557 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m19481_gshared (UnityAction_1_t2557 * __this, int32_t ___arg0, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t151_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m19482_gshared (UnityAction_1_t2557 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m4150_gshared (CachedInvokableCall_1_t881 * __this, Object_t76 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		Object_t76 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2319 *)__this);
		(( void (*) (InvokableCall_1_t2319 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2319 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		bool L_3 = ___argument;
		bool L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m19488_gshared (CachedInvokableCall_1_t881 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2319 *)__this);
		(( void (*) (InvokableCall_1_t2319 *, ObjectU5BU5D_t148*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2319 *)__this, (ObjectU5BU5D_t148*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen.h"
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_genMethodDeclarations.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_2__ctor_m19679_gshared (UnityEvent_2_t2569 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 2));
		NullCheck((UnityEventBase_t785 *)__this);
		UnityEventBase__ctor_m3971((UnityEventBase_t785 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m19680_gshared (UnityEvent_2_t2569 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t707* L_2 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1, sizeof(Type_t *))) = (Type_t *)L_5;
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3982(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t707*)L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t777 * UnityEvent_2_GetDelegate_m19681_gshared (UnityEvent_2_t2569 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_2_t2549 * L_2 = (InvokableCall_2_t2549 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_2_t2549 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen.h"
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_genMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_3__ctor_m19682_gshared (UnityEvent_3_t2570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 3));
		NullCheck((UnityEventBase_t785 *)__this);
		UnityEventBase__ctor_m3971((UnityEventBase_t785 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m19683_gshared (UnityEvent_3_t2570 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t707* L_2 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1, sizeof(Type_t *))) = (Type_t *)L_5;
		TypeU5BU5D_t707* L_6 = (TypeU5BU5D_t707*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2, sizeof(Type_t *))) = (Type_t *)L_7;
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m3982(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t707*)L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t777 * UnityEvent_3_GetDelegate_m19684_gshared (UnityEvent_3_t2570 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_3_t2551 * L_2 = (InvokableCall_3_t2551 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_3_t2551 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen.h"
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_genMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_4__ctor_m19685_gshared (UnityEvent_4_t2571 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		NullCheck((UnityEventBase_t785 *)__this);
		UnityEventBase__ctor_m3971((UnityEventBase_t785 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m19686_gshared (UnityEvent_4_t2571 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t707* L_2 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1, sizeof(Type_t *))) = (Type_t *)L_5;
		TypeU5BU5D_t707* L_6 = (TypeU5BU5D_t707*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2, sizeof(Type_t *))) = (Type_t *)L_7;
		TypeU5BU5D_t707* L_8 = (TypeU5BU5D_t707*)L_6;
		Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 3, sizeof(Type_t *))) = (Type_t *)L_9;
		MethodInfo_t * L_10 = UnityEventBase_GetValidMethodInfo_m3982(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t707*)L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t777 * UnityEvent_4_GetDelegate_m19687_gshared (UnityEvent_4_t2571 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_4_t2553 * L_2 = (InvokableCall_4_t2553 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (InvokableCall_4_t2553 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_66.h"
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_66MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t839_m21118_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t839_m21118(__this, p0, method) (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t839_m21118_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m19693_gshared (InternalEnumerator_1_t2573 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19694_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (InternalEnumerator_1_t2573 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2573 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19695_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m19696_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" uint32_t InternalEnumerator_1_get_Current_m19697_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint32_t L_8 = (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69.h"
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisClientCertificateType_t1023_m21129_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisClientCertificateType_t1023_m21129(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisClientCertificateType_t1023_m21129_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m19708_gshared (InternalEnumerator_1_t2576 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19709_gshared (InternalEnumerator_1_t2576 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2576 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2576 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19710_gshared (InternalEnumerator_1_t2576 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m19711_gshared (InternalEnumerator_1_t2576 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" int32_t InternalEnumerator_1_get_Current_m19712_gshared (InternalEnumerator_1_t2576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70.h"
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70MethodDeclarations.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C" uint16_t Array_InternalArray__get_Item_TisUInt16_t837_m21140_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt16_t837_m21140(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt16_t837_m21140_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m19713_gshared (InternalEnumerator_1_t2577 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19714_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (( uint16_t (*) (InternalEnumerator_1_t2577 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2577 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19715_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt16>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m19716_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m6110((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt16>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" uint16_t InternalEnumerator_1_get_Current_m19717_gshared (InternalEnumerator_1_t2577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2977 = il2cpp_codegen_string_literal_from_index(2977);
		_stringLiteral2978 = il2cpp_codegen_string_literal_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, (String_t*)_stringLiteral2977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, (String_t*)_stringLiteral2978, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6110((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint16_t L_8 = (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
