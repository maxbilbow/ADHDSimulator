﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_39.h"
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
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_39MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18097_gshared (Transform_1_t2409 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m18098_gshared (Transform_1_t2409 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18098((Transform_1_t2409 *)__this->___prev_9,___key, ___value, method);
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
extern TypeInfo* NetworkID_t686_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18099_gshared (Transform_1_t2409 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NetworkID_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkID_t686_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m18100_gshared (Transform_1_t2409 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40MethodDeclarations.h"

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18101_gshared (Transform_1_t2398 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1235  Transform_1_Invoke_m18102_gshared (Transform_1_t2398 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18102((Transform_1_t2398 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* NetworkID_t686_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18103_gshared (Transform_1_t2398 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NetworkID_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkID_t686_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1235  Transform_1_EndInvoke_m18104_gshared (Transform_1_t2398 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1235 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41MethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18105_gshared (Transform_1_t2410 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2400  Transform_1_Invoke_m18106_gshared (Transform_1_t2410 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18106((Transform_1_t2410 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2400  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2400  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* NetworkID_t686_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18107_gshared (Transform_1_t2410 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NetworkID_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkID_t686_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2400  Transform_1_EndInvoke_m18108_gshared (Transform_1_t2410 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2400 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_5MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25MethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18109_gshared (ShimEnumerator_t2411 * __this, Dictionary_2_t2399 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2399 * L_0 = ___host;
		NullCheck((Dictionary_2_t2399 *)L_0);
		Enumerator_t2405  L_1 = (( Enumerator_t2405  (*) (Dictionary_2_t2399 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2399 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18110_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2405 * L_0 = (Enumerator_t2405 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2405 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2405 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m18111_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2405  L_0 = (Enumerator_t2405 )(__this->___host_enumerator_0);
		Enumerator_t2405  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1235  L_3 = (DictionaryEntry_t1235 )InterfaceFuncInvoker0< DictionaryEntry_t1235  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18112_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2400  V_0 = {0};
	{
		Enumerator_t2405 * L_0 = (Enumerator_t2405 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2400  L_1 = (( KeyValuePair_2_t2400  (*) (Enumerator_t2405 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2405 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2400 )L_1;
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t2400 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2400 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18113_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2400  V_0 = {0};
	{
		Enumerator_t2405 * L_0 = (Enumerator_t2405 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2400  L_1 = (( KeyValuePair_2_t2400  (*) (Enumerator_t2405 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2405 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2400 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2400 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2400 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1235_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m18114_gshared (ShimEnumerator_t2411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2411 *)__this);
		DictionaryEntry_t1235  L_0 = (DictionaryEntry_t1235 )VirtFuncInvoker0< DictionaryEntry_t1235  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry() */, (ShimEnumerator_t2411 *)__this);
		DictionaryEntry_t1235  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1235_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
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
extern "C" void EqualityComparer_1__ctor_m18115_gshared (EqualityComparer_1_t2412 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3053_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m18116_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3053_0_0_0_var = il2cpp_codegen_type_from_index(2990);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(GenericEqualityComparer_1_t3053_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t702* L_4 = (TypeU5BU5D_t702*)((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t702* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t702*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10250(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2412_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2412 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2413 * L_8 = (DefaultComparer_t2413 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2413 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2412_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18117_gshared (EqualityComparer_1_t2412 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2412 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint64_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T) */, (EqualityComparer_1_t2412 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18118_gshared (EqualityComparer_1_t2412 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2412 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::Equals(T,T) */, (EqualityComparer_1_t2412 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::get_Default()
extern "C" EqualityComparer_1_t2412 * EqualityComparer_1_get_Default_m18119_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2412 * L_0 = ((EqualityComparer_1_t2412_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::.ctor()
extern "C" void DefaultComparer__ctor_m18120_gshared (DefaultComparer_t2413 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2412 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2412 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2412 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18121_gshared (DefaultComparer_t2413 * __this, uint64_t ___obj, const MethodInfo* method)
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
extern "C" bool DefaultComparer_Equals_m18122_gshared (DefaultComparer_t2413 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m18174_gshared (ResponseDelegate_1_t829 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m18176_gshared (ResponseDelegate_1_t829 * __this, Object_t * ___response, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResponseDelegate_1_Invoke_m18176((ResponseDelegate_1_t829 *)__this->___prev_9,___response, method);
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
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m18178_gshared (ResponseDelegate_1_t829 * __this, Object_t * ___response, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___response;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m18180_gshared (ResponseDelegate_1_t829 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
#ifndef _MSC_VER
#else
#endif
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
struct Activator_t1778;
struct Object_t;
// System.Activator
#include "mscorlib_System_Activator.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m20492_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m20492(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisObject_t_m20492_gshared)(__this /* static, unused */, method)


// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::.ctor()
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m18181_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2418 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m18182_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2418 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m18183_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2418 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::MoveNext()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t793_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t827_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2979;
extern Il2CppCodeGenString* _stringLiteral2980;
extern Il2CppCodeGenString* _stringLiteral2981;
extern Il2CppCodeGenString* _stringLiteral2982;
extern "C" bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m18184_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2418 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDictionary_2_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		FormatException_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		_stringLiteral2979 = il2cpp_codegen_string_literal_from_index(2979);
		_stringLiteral2980 = il2cpp_codegen_string_literal_from_index(2980);
		_stringLiteral2981 = il2cpp_codegen_string_literal_from_index(2981);
		_stringLiteral2982 = il2cpp_codegen_string_literal_from_index(2982);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	FormatException_t827 * V_1 = {0};
	bool V_2 = false;
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
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
		goto IL_0170;
	}

IL_0021:
	{
		WWW_t614 * L_2 = (WWW_t614 *)(__this->___client_0);
		__this->___U24current_7 = L_2;
		__this->___U24PC_6 = 1;
		goto IL_0172;
	}

IL_0039:
	{
		__this->___U3CjsonInterfaceU3E__0_1 = ((Object_t *)Castclass(NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
		WWW_t614 * L_3 = (WWW_t614 *)(__this->___client_0);
		NullCheck((WWW_t614 *)L_3);
		String_t* L_4 = WWW_get_error_m3200((WWW_t614 *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m465(NULL /*static, unused*/, (String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		WWW_t614 * L_6 = (WWW_t614 *)(__this->___client_0);
		NullCheck((WWW_t614 *)L_6);
		String_t* L_7 = WWW_get_text_m3196((WWW_t614 *)L_6, /*hidden argument*/NULL);
		Object_t ** L_8 = (Object_t **)&(__this->___U3CoU3E__1_2);
		bool L_9 = SimpleJson_TryDeserializeObject_m3709(NULL /*static, unused*/, (String_t*)L_7, (Object_t **)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		Object_t * L_10 = (Object_t *)(__this->___U3CoU3E__1_2);
		__this->___U3CdictJsonObjU3E__2_3 = ((Object_t*)IsInst(L_10, IDictionary_2_t793_il2cpp_TypeInfo_var));
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
		NullCheck((Response_t669 *)(*L_13));
		VirtActionInvoker1< Object_t * >::Invoke(4 /* System.Void UnityEngine.Networking.Match.Response::Parse(System.Object) */, (Response_t669 *)(*L_13), (Object_t *)L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t143 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t827_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = (FormatException_t827 *)((FormatException_t827 *)__exception_local);
		FormatException_t827 * L_15 = V_1;
		__this->___U3CexceptionU3E__3_4 = L_15;
		FormatException_t827 * L_16 = (FormatException_t827 *)(__this->___U3CexceptionU3E__3_4);
		Debug_Log_m416(NULL /*static, unused*/, (Object_t *)L_16, /*hidden argument*/NULL);
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
		WWW_t614 * L_18 = (WWW_t614 *)(__this->___client_0);
		NullCheck((WWW_t614 *)L_18);
		String_t* L_19 = WWW_get_text_m3196((WWW_t614 *)L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2979, (String_t*)L_19, /*hidden argument*/NULL);
		Debug_LogError_m503(NULL /*static, unused*/, (Object_t *)L_20, /*hidden argument*/NULL);
		goto IL_011f;
	}

IL_00ff:
	{
		Object_t ** L_21 = (Object_t **)&(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((Response_t669 *)(*L_21));
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Networking.Match.Response::ToString() */, (Response_t669 *)(*L_21));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2980, (String_t*)L_22, /*hidden argument*/NULL);
		Debug_Log_m416(NULL /*static, unused*/, (Object_t *)L_23, /*hidden argument*/NULL);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		WWW_t614 * L_24 = (WWW_t614 *)(__this->___client_0);
		NullCheck((WWW_t614 *)L_24);
		String_t* L_25 = WWW_get_error_m3200((WWW_t614 *)L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2981, (String_t*)L_25, /*hidden argument*/NULL);
		Debug_LogError_m503(NULL /*static, unused*/, (Object_t *)L_26, /*hidden argument*/NULL);
		WWW_t614 * L_27 = (WWW_t614 *)(__this->___client_0);
		NullCheck((WWW_t614 *)L_27);
		String_t* L_28 = WWW_get_text_m3196((WWW_t614 *)L_27, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2982, (String_t*)L_28, /*hidden argument*/NULL);
		Debug_LogError_m503(NULL /*static, unused*/, (Object_t *)L_29, /*hidden argument*/NULL);
	}

IL_0158:
	{
		ResponseDelegate_1_t829 * L_30 = (ResponseDelegate_1_t829 *)(__this->___callback_5);
		Object_t * L_31 = (Object_t *)(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((ResponseDelegate_1_t829 *)L_30);
		(( void (*) (ResponseDelegate_1_t829 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ResponseDelegate_1_t829 *)L_30, (Object_t *)L_31, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___U24PC_6 = (-1);
	}

IL_0170:
	{
		return 0;
	}

IL_0172:
	{
		return 1;
	}
	// Dead block : IL_0174: ldloc.2
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::Dispose()
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m18185_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t2418 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_6 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"


#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
extern "C" KeyValuePair_2_t2419  Array_InternalArray__get_Item_TisKeyValuePair_2_t2419_m20780_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2419_m20780(__this, p0, method) (( KeyValuePair_2_t2419  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2419_m20780_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18203_gshared (InternalEnumerator_1_t2420 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18204_gshared (InternalEnumerator_1_t2420 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2419  L_0 = (( KeyValuePair_2_t2419  (*) (InternalEnumerator_1_t2420 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2420 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2419  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18205_gshared (InternalEnumerator_1_t2420 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18206_gshared (InternalEnumerator_1_t2420 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" KeyValuePair_2_t2419  InternalEnumerator_1_get_Current_m18207_gshared (InternalEnumerator_1_t2420 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2419  L_8 = (( KeyValuePair_2_t2419  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m18208_gshared (KeyValuePair_2_t2419 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2419 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2419 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2006  L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2419 *, KeyValuePair_2_t2006 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2419 *)__this, (KeyValuePair_2_t2006 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m18209_gshared (KeyValuePair_2_t2419 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18210_gshared (KeyValuePair_2_t2419 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" KeyValuePair_2_t2006  KeyValuePair_2_get_Value_m18211_gshared (KeyValuePair_2_t2419 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2006  L_0 = (KeyValuePair_2_t2006 )(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18212_gshared (KeyValuePair_2_t2419 * __this, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2006  L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7MethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_ToString_m12168_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral463;
extern Il2CppCodeGenString* _stringLiteral526;
extern Il2CppCodeGenString* _stringLiteral464;
extern "C" String_t* KeyValuePair_2_ToString_m18213_gshared (KeyValuePair_2_t2419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		KeyValuePair_2_ToString_m12168_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484148);
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		_stringLiteral526 = il2cpp_codegen_string_literal_from_index(526);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	KeyValuePair_2_t2006  V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t31* G_B2_1 = {0};
	StringU5BU5D_t31* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t31* G_B1_1 = {0};
	StringU5BU5D_t31* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t31* G_B3_2 = {0};
	StringU5BU5D_t31* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t31* G_B5_1 = {0};
	StringU5BU5D_t31* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t31* G_B4_1 = {0};
	StringU5BU5D_t31* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t31* G_B6_2 = {0};
	StringU5BU5D_t31* G_B6_3 = {0};
	{
		StringU5BU5D_t31* L_0 = (StringU5BU5D_t31*)((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral463);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral463;
		StringU5BU5D_t31* L_1 = (StringU5BU5D_t31*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2419 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2419 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t31* L_6 = (StringU5BU5D_t31*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral526);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)_stringLiteral526;
		StringU5BU5D_t31* L_7 = (StringU5BU5D_t31*)L_6;
		KeyValuePair_2_t2006  L_8 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2419 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		KeyValuePair_2_t2006  L_9 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2419 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (KeyValuePair_2_t2006 )L_9;
		NullCheck((KeyValuePair_2_t2006 *)(&V_1));
		String_t* L_10 = KeyValuePair_2_ToString_m12168((KeyValuePair_2_t2006 *)(&V_1), KeyValuePair_2_ToString_m12168_MethodInfo_var);
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
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t31* L_12 = (StringU5BU5D_t31*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral464);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4)) = (String_t*)_stringLiteral464;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m509(NULL /*static, unused*/, (StringU5BU5D_t31*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadSafeDictionaryValueFactory_2__ctor_m18214_gshared (ThreadSafeDictionaryValueFactory_2_t2421 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m18216_gshared (ThreadSafeDictionaryValueFactory_2_t2421 * __this, Object_t * ___key, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ThreadSafeDictionaryValueFactory_2_Invoke_m18216((ThreadSafeDictionaryValueFactory_2_t2421 *)__this->___prev_9,___key, method);
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
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m18218_gshared (ThreadSafeDictionaryValueFactory_2_t2421 * __this, Object_t * ___key, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m18220_gshared (ThreadSafeDictionaryValueFactory_2_t2421 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2__ctor_m18221_gshared (ThreadSafeDictionary_2_t2423 * __this, ThreadSafeDictionaryValueFactory_2_t2421 * ___valueFactory, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m413(L_0, /*hidden argument*/NULL);
		__this->____lock_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		ThreadSafeDictionaryValueFactory_2_t2421 * L_1 = ___valueFactory;
		__this->____valueFactory_1 = L_1;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18223_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2005 * L_0 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2005 *)L_0);
		Enumerator_t2010  L_1 = (( Enumerator_t2010  (*) (Dictionary_2_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2005 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2010  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (Object_t *)L_3;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m18225_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Dictionary_2_t2005 * L_0 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2423 *)__this);
		Object_t * L_2 = (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ThreadSafeDictionary_2_t2423 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t2005 * L_3 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
		Object_t * L_4 = ___key;
		NullCheck((Dictionary_2_t2005 *)L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (Dictionary_2_t2005 *)L_3, (Object_t *)L_4, (Object_t **)(&V_0));
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		Object_t * L_6 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2423 *)__this);
		Object_t * L_7 = (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ThreadSafeDictionary_2_t2423 *)__this, (Object_t *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_7;
	}

IL_002e:
	{
		Object_t * L_8 = V_0;
		return L_8;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m18227_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Dictionary_2_t2005 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ThreadSafeDictionaryValueFactory_2_t2421 * L_0 = (ThreadSafeDictionaryValueFactory_2_t2421 *)(__this->____valueFactory_1);
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionaryValueFactory_2_t2421 *)L_0);
		Object_t * L_2 = (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t2421 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ThreadSafeDictionaryValueFactory_2_t2421 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = (Object_t *)L_2;
		Object_t * L_3 = (Object_t *)(__this->____lock_0);
		V_1 = (Object_t *)L_3;
		Object_t * L_4 = V_1;
		Monitor_Enter_m5158(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t2005 * L_5 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
			if (L_5)
			{
				goto IL_0042;
			}
		}

IL_0025:
		{
			Dictionary_2_t2005 * L_6 = (Dictionary_2_t2005 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (Dictionary_2_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			__this->____dictionary_2 = L_6;
			Dictionary_2_t2005 * L_7 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
			Object_t * L_8 = ___key;
			Object_t * L_9 = V_0;
			NullCheck((Dictionary_2_t2005 *)L_7);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t2005 *)L_7, (Object_t *)L_8, (Object_t *)L_9);
			goto IL_0078;
		}

IL_0042:
		{
			Dictionary_2_t2005 * L_10 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
			Object_t * L_11 = ___key;
			NullCheck((Dictionary_2_t2005 *)L_10);
			bool L_12 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (Dictionary_2_t2005 *)L_10, (Object_t *)L_11, (Object_t **)(&V_2));
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
			Dictionary_2_t2005 * L_14 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
			Dictionary_2_t2005 * L_15 = (Dictionary_2_t2005 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (Dictionary_2_t2005 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_15, (Object_t*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			V_3 = (Dictionary_2_t2005 *)L_15;
			Dictionary_2_t2005 * L_16 = V_3;
			Object_t * L_17 = ___key;
			Object_t * L_18 = V_0;
			NullCheck((Dictionary_2_t2005 *)L_16);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t2005 *)L_16, (Object_t *)L_17, (Object_t *)L_18);
			Dictionary_2_t2005 * L_19 = V_3;
			__this->____dictionary_2 = L_19;
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x84, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t143 *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m5160(NULL /*static, unused*/, (Object_t *)L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t143 *)
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
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Add_m18229_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m18231_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2005 * L_0 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2005 *)L_0);
		KeyCollection_t2008 * L_1 = (( KeyCollection_t2008 * (*) (Dictionary_2_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2005 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_1;
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m18233_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Object_t ** L_0 = ___value;
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2423 *)__this);
		Object_t * L_2 = (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((ThreadSafeDictionary_2_t2423 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		*L_0 = L_2;
		return 1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m18235_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2005 * L_0 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2005 *)L_0);
		ValueCollection_t2012 * L_1 = (( ValueCollection_t2012 * (*) (Dictionary_2_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((Dictionary_2_t2005 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m18237_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((ThreadSafeDictionary_2_t2423 *)__this);
		Object_t * L_1 = (( Object_t * (*) (ThreadSafeDictionary_2_t2423 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((ThreadSafeDictionary_2_t2423 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_set_Item_m18239_gshared (ThreadSafeDictionary_2_t2423 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Add_m18241_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Clear_m18243_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_Contains_m18245_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_CopyTo_m18247_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2U5BU5D_t2443* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m18249_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2005 * L_0 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2005 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2005 *)L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m18251_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t166_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_Remove_m18253_gshared (ThreadSafeDictionary_2_t2423 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t166 * L_0 = (NotImplementedException_t166 *)il2cpp_codegen_object_new (NotImplementedException_t166_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m483(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m18255_gshared (ThreadSafeDictionary_2_t2423 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2005 * L_0 = (Dictionary_2_t2005 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t2005 *)L_0);
		Enumerator_t2010  L_1 = (( Enumerator_t2010  (*) (Dictionary_2_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2005 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2010  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (Object_t*)L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6.h"
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
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6MethodDeclarations.h"
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t2445;
struct DictionaryEntryU5BU5D_t2955;
struct Transform_1_t2444;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1235_TisDictionaryEntry_t1235_m20795_gshared (Dictionary_2_t2445 * __this, DictionaryEntryU5BU5D_t2955* p0, int32_t p1, Transform_1_t2444 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1235_TisDictionaryEntry_t1235_m20795(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2445 *, DictionaryEntryU5BU5D_t2955*, int32_t, Transform_1_t2444 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1235_TisDictionaryEntry_t1235_m20795_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2445;
struct Array_t;
struct Transform_1_t2453;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2419_m20797_gshared (Dictionary_2_t2445 * __this, Array_t * p0, int32_t p1, Transform_1_t2453 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2419_m20797(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, Transform_1_t2453 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2419_m20797_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2445;
struct KeyValuePair_2U5BU5D_t2900;
struct Transform_1_t2453;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2419_TisKeyValuePair_2_t2419_m20798_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2U5BU5D_t2900* p0, int32_t p1, Transform_1_t2453 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2419_TisKeyValuePair_2_t2419_m20798(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2900*, int32_t, Transform_1_t2453 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2419_TisKeyValuePair_2_t2419_m20798_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m18561_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18563_gshared (Dictionary_2_t2445 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18565_gshared (Dictionary_2_t2445 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2445 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18567_gshared (Dictionary_2_t2445 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1525;
extern "C" void Dictionary_2__ctor_m18569_gshared (Dictionary_2_t2445 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral1525 = il2cpp_codegen_string_literal_from_index(1525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2419  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral1525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t2419  L_9 = (KeyValuePair_2_t2419 )InterfaceFuncInvoker0< KeyValuePair_2_t2419  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2419 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2419 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			KeyValuePair_2_t2006  L_11 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2419 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2445 *)__this);
			VirtActionInvoker2< Object_t *, KeyValuePair_2_t2006  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_10, (KeyValuePair_2_t2006 )L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, (Object_t *)L_12);
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
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, (Object_t *)L_15);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18571_gshared (Dictionary_2_t2445 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t809 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18573_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2445 *)__this);
		KeyCollection_t2446 * L_0 = (( KeyCollection_t2446 * (*) (Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18575_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2445 *)__this);
		ValueCollection_t2450 * L_0 = (( ValueCollection_t2450 * (*) (Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18577_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2445 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t2445 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2445 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2445 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2445 *)__this);
		KeyValuePair_2_t2006  L_5 = (KeyValuePair_2_t2006 )VirtFuncInvoker1< KeyValuePair_2_t2006 , Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_4);
		KeyValuePair_2_t2006  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18579_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2445 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2445 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2445 *)__this);
		KeyValuePair_2_t2006  L_3 = (( KeyValuePair_2_t2006  (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2445 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2445 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2006  >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_1, (KeyValuePair_2_t2006 )L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18581_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2445 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2445 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2445 *)__this);
		KeyValuePair_2_t2006  L_3 = (( KeyValuePair_2_t2006  (*) (Dictionary_2_t2445 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2445 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2445 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2006  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_1, (KeyValuePair_2_t2006 )L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18583_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		NullCheck((Dictionary_2_t2445 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t2445 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18585_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		NullCheck((Dictionary_2_t2445 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (Dictionary_2_t2445 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18587_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18589_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18591_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18593_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2419 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2_t2006  L_1 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2419 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2445 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2006  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_0, (KeyValuePair_2_t2006 )L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18595_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2419  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2445 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2419 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2445 *)__this, (KeyValuePair_2_t2419 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18597_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2U5BU5D_t2900* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2900* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2900*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2445 *)__this, (KeyValuePair_2U5BU5D_t2900*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18599_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2419  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2445 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2419 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2445 *)__this, (KeyValuePair_2_t2419 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2419 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2445 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t2955_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18601_gshared (Dictionary_2_t2445 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2992);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2900* V_0 = {0};
	DictionaryEntryU5BU5D_t2955* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2955* G_B5_1 = {0};
	Dictionary_2_t2445 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2955* G_B4_1 = {0};
	Dictionary_2_t2445 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2900*)((KeyValuePair_2U5BU5D_t2900*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2900* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2900* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2900*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2445 *)__this, (KeyValuePair_2U5BU5D_t2900*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2445 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2955*)((DictionaryEntryU5BU5D_t2955*)IsInst(L_6, DictionaryEntryU5BU5D_t2955_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2955* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2955* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2444 * L_10 = ((Dictionary_2_t2445_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2445 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2445 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2444 * L_12 = (Transform_1_t2444 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2444 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2445_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2445 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2444 * L_13 = ((Dictionary_2_t2445_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2445 *)G_B5_2);
		(( void (*) (Dictionary_2_t2445 *, DictionaryEntryU5BU5D_t2955*, int32_t, Transform_1_t2444 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2445 *)G_B5_2, (DictionaryEntryU5BU5D_t2955*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2444 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2453 * L_17 = (Transform_1_t2453 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2453 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, Transform_1_t2453 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2445 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2453 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18603_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448  L_0 = {0};
		(( void (*) (Enumerator_t2448 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2448  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18605_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448  L_0 = {0};
		(( void (*) (Enumerator_t2448 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2448  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18607_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2454 * L_0 = (ShimEnumerator_t2454 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2454 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18609_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1356_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" KeyValuePair_2_t2006  Dictionary_2_get_Item_m18611_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		KeyNotFoundException_t1356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2993);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1025* L_5 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t1974* L_9 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_14 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2443* L_19 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(KeyValuePair_2_t2006 *)(KeyValuePair_2_t2006 *)SZArrayLdElema(L_19, L_21));
	}

IL_0089:
	{
		LinkU5BU5D_t1974* L_22 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_22, L_23))->___Next_1);
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
		KeyNotFoundException_t1356 * L_26 = (KeyNotFoundException_t1356 *)il2cpp_codegen_object_new (KeyNotFoundException_t1356_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7509(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" void Dictionary_2_set_Item_m18613_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t1974* L_11 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_16 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
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
		LinkU5BU5D_t1974* L_22 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_22, L_23))->___Next_1);
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
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t1025* L_32 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
		LinkU5BU5D_t1974* L_38 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t1974* L_41 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t1025* L_43 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_41, L_42))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45))-(int32_t)1));
		Int32U5BU5D_t1025* L_46 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47)) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t1974* L_49 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_49, L_50))->___HashCode_0 = L_51;
		ObjectU5BU5D_t146* L_52 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53)) = (Object_t *)L_54;
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
		LinkU5BU5D_t1974* L_56 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t1974* L_58 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_58, L_59))->___Next_1);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_56, L_57))->___Next_1 = L_60;
		LinkU5BU5D_t1974* L_61 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t1025* L_63 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_61, L_62))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65))-(int32_t)1));
		Int32U5BU5D_t1025* L_66 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67)) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		KeyValuePair_2U5BU5D_t2443* L_69 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		KeyValuePair_2_t2006  L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((KeyValuePair_2_t2006 *)(KeyValuePair_2_t2006 *)SZArrayLdElema(L_69, L_70)) = (KeyValuePair_2_t2006 )L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1496;
extern "C" void Dictionary_2_Init_m18615_gshared (Dictionary_2_t2445 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		_stringLiteral1496 = il2cpp_codegen_string_literal_from_index(1496);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2445 * G_B4_0 = {0};
	Dictionary_2_t2445 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2445 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t834 * L_1 = (ArgumentOutOfRangeException_t834 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5079(L_1, (String_t*)_stringLiteral1496, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2445 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2445 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2445 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t1938 * L_5 = (( EqualityComparer_1_t1938 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2445 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2445 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1025_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1974_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m18617_gshared (Dictionary_2_t2445 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1025_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(701);
		LinkU5BU5D_t1974_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1025*)SZArrayNew(Int32U5BU5D_t1025_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1974*)SZArrayNew(LinkU5BU5D_t1974_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t146*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((KeyValuePair_2U5BU5D_t2443*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1025* L_4 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral451;
extern Il2CppCodeGenString* _stringLiteral889;
extern Il2CppCodeGenString* _stringLiteral2966;
extern Il2CppCodeGenString* _stringLiteral2967;
extern "C" void Dictionary_2_CopyToCheck_m18619_gshared (Dictionary_2_t2445 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		_stringLiteral889 = il2cpp_codegen_string_literal_from_index(889);
		_stringLiteral2966 = il2cpp_codegen_string_literal_from_index(2966);
		_stringLiteral2967 = il2cpp_codegen_string_literal_from_index(2967);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral451, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		ArgumentOutOfRangeException_t834 * L_3 = (ArgumentOutOfRangeException_t834 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5079(L_3, (String_t*)_stringLiteral889, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t274 * L_7 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_7, (String_t*)_stringLiteral2966, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m6088((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2445 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t2445 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t274 * L_12 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_12, (String_t*)_stringLiteral2967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2419  Dictionary_2_make_pair_m18621_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		KeyValuePair_2_t2006  L_1 = ___value;
		KeyValuePair_2_t2419  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2419 *, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (Object_t *)L_0, (KeyValuePair_2_t2006 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18623_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2006  Dictionary_2_pick_value_m18625_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2006  L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18627_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2U5BU5D_t2900* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2900* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2445 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2900* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2453 * L_5 = (Transform_1_t2453 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2453 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2900*, int32_t, Transform_1_t2453 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2445 *)__this, (KeyValuePair_2U5BU5D_t2900*)L_2, (int32_t)L_3, (Transform_1_t2453 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern TypeInfo* Hashtable_t972_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1025_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1974_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m18629_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(665);
		Int32U5BU5D_t1025_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(701);
		LinkU5BU5D_t1974_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1025* V_1 = {0};
	LinkU5BU5D_t1974* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t146* V_7 = {0};
	KeyValuePair_2U5BU5D_t2443* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1025* L_0 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t972_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7743(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1025*)((Int32U5BU5D_t1025*)SZArrayNew(Int32U5BU5D_t1025_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1974*)((LinkU5BU5D_t1974*)SZArrayNew(LinkU5BU5D_t1974_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t1025* L_4 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t1974* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_10 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1974* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1025* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t1025* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1974* L_26 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_26, L_27))->___Next_1);
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
		Int32U5BU5D_t1025* L_32 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1025* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1974* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t146*)((ObjectU5BU5D_t146*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (KeyValuePair_2U5BU5D_t2443*)((KeyValuePair_2U5BU5D_t2443*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t146* L_37 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		ObjectU5BU5D_t146* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t2443* L_40 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		KeyValuePair_2U5BU5D_t2443* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t146* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		KeyValuePair_2U5BU5D_t2443* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern Il2CppCodeGenString* _stringLiteral2968;
extern "C" void Dictionary_2_Add_m18631_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
		_stringLiteral2968 = il2cpp_codegen_string_literal_from_index(2968);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t1974* L_10 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_15 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t274 * L_20 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_20, (String_t*)_stringLiteral2968, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t1974* L_21 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_21, L_22))->___Next_1);
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
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t1025* L_30 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
		LinkU5BU5D_t1974* L_36 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t1974* L_39 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_39, L_40))->___HashCode_0 = L_41;
		LinkU5BU5D_t1974* L_42 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1025* L_44 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t1025* L_47 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t146* L_50 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)) = (Object_t *)L_52;
		KeyValuePair_2U5BU5D_t2443* L_53 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		KeyValuePair_2_t2006  L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((KeyValuePair_2_t2006 *)(KeyValuePair_2_t2006 *)SZArrayLdElema(L_53, L_54)) = (KeyValuePair_2_t2006 )L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m18633_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1025* L_0 = (Int32U5BU5D_t1025*)(__this->___table_4);
		Int32U5BU5D_t1025* L_1 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		ObjectU5BU5D_t146* L_3 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t2443* L_4 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		KeyValuePair_2U5BU5D_t2443* L_5 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1974* L_6 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		LinkU5BU5D_t1974* L_7 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_ContainsKey_m18635_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1025* L_5 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t1974* L_9 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_14 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
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
		LinkU5BU5D_t1974* L_19 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_19, L_20))->___Next_1);
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
extern "C" bool Dictionary_2_ContainsValue_m18637_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2455 * L_0 = (( EqualityComparer_1_t2455 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t1025* L_1 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		KeyValuePair_2U5BU5D_t2443* L_5 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		KeyValuePair_2_t2006  L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, KeyValuePair_2_t2006 , KeyValuePair_2_t2006  >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (KeyValuePair_2_t2006 )(*(KeyValuePair_2_t2006 *)(KeyValuePair_2_t2006 *)SZArrayLdElema(L_5, L_7)), (KeyValuePair_2_t2006 )L_8);
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
		LinkU5BU5D_t1974* L_10 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_10, L_11))->___Next_1);
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
		Int32U5BU5D_t1025* L_16 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral898;
extern Il2CppCodeGenString* _stringLiteral900;
extern Il2CppCodeGenString* _stringLiteral902;
extern Il2CppCodeGenString* _stringLiteral1530;
extern Il2CppCodeGenString* _stringLiteral2969;
extern "C" void Dictionary_2_GetObjectData_m18639_gshared (Dictionary_2_t2445 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral898 = il2cpp_codegen_string_literal_from_index(898);
		_stringLiteral900 = il2cpp_codegen_string_literal_from_index(900);
		_stringLiteral902 = il2cpp_codegen_string_literal_from_index(902);
		_stringLiteral1530 = il2cpp_codegen_string_literal_from_index(1530);
		_stringLiteral2969 = il2cpp_codegen_string_literal_from_index(2969);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2900* V_0 = {0};
	{
		SerializationInfo_t809 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral898, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		SerializationInfo_t809 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t809 *)L_2);
		SerializationInfo_AddValue_m6095((SerializationInfo_t809 *)L_2, (String_t*)_stringLiteral900, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t809 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t809 *)L_4);
		SerializationInfo_AddValue_m5129((SerializationInfo_t809 *)L_4, (String_t*)_stringLiteral902, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2900*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2900*)((KeyValuePair_2U5BU5D_t2900*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2900* L_8 = V_0;
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2900*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2445 *)__this, (KeyValuePair_2U5BU5D_t2900*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t809 * L_9 = ___info;
		Int32U5BU5D_t1025* L_10 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t809 *)L_9);
		SerializationInfo_AddValue_m6095((SerializationInfo_t809 *)L_9, (String_t*)_stringLiteral1530, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t809 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2900* L_12 = V_0;
		NullCheck((SerializationInfo_t809 *)L_11);
		SerializationInfo_AddValue_m5129((SerializationInfo_t809 *)L_11, (String_t*)_stringLiteral2969, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral900;
extern Il2CppCodeGenString* _stringLiteral902;
extern Il2CppCodeGenString* _stringLiteral1530;
extern Il2CppCodeGenString* _stringLiteral2969;
extern "C" void Dictionary_2_OnDeserialization_m18641_gshared (Dictionary_2_t2445 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral900 = il2cpp_codegen_string_literal_from_index(900);
		_stringLiteral902 = il2cpp_codegen_string_literal_from_index(902);
		_stringLiteral1530 = il2cpp_codegen_string_literal_from_index(1530);
		_stringLiteral2969 = il2cpp_codegen_string_literal_from_index(2969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2900* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t809 * L_0 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
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
		SerializationInfo_t809 * L_1 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t809 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m6103((SerializationInfo_t809 *)L_1, (String_t*)_stringLiteral900, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t809 * L_3 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t809 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m6096((SerializationInfo_t809 *)L_3, (String_t*)_stringLiteral902, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t809 * L_6 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t809 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m6103((SerializationInfo_t809 *)L_6, (String_t*)_stringLiteral1530, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t809 * L_8 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t809 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m6096((SerializationInfo_t809 *)L_8, (String_t*)_stringLiteral2969, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2900*)((KeyValuePair_2U5BU5D_t2900*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t2445 *)__this);
		(( void (*) (Dictionary_2_t2445 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2445 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2900* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t2900* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2419 *)((KeyValuePair_2_t2419 *)(KeyValuePair_2_t2419 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2900* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		KeyValuePair_2_t2006  L_19 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2419 *)((KeyValuePair_2_t2419 *)(KeyValuePair_2_t2419 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2445 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t2006  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_16, (KeyValuePair_2_t2006 )L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2900* L_22 = V_1;
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
		__this->___serialization_info_13 = (SerializationInfo_t809 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t2006_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_Remove_m18643_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		KeyValuePair_2_t2006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1505);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	KeyValuePair_2_t2006  V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
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
		LinkU5BU5D_t1974* L_11 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_16 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
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
		LinkU5BU5D_t1974* L_22 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_22, L_23))->___Next_1);
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
		Int32U5BU5D_t1025* L_29 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t1974* L_31 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_31, L_32))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30)) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t1974* L_34 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t1974* L_36 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_34, L_35))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t1974* L_39 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_39, L_40))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t1974* L_43 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_43, L_44))->___HashCode_0 = 0;
		ObjectU5BU5D_t146* L_45 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46)) = (Object_t *)L_47;
		KeyValuePair_2U5BU5D_t2443* L_48 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (KeyValuePair_2_t2006_il2cpp_TypeInfo_var, (&V_5));
		KeyValuePair_2_t2006  L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((KeyValuePair_2_t2006 *)(KeyValuePair_2_t2006 *)SZArrayLdElema(L_48, L_49)) = (KeyValuePair_2_t2006 )L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t2006_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_TryGetValue_m18645_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, KeyValuePair_2_t2006 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		KeyValuePair_2_t2006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1505);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t2006  V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1025* L_5 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t1974* L_9 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_14 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		KeyValuePair_2_t2006 * L_19 = ___value;
		KeyValuePair_2U5BU5D_t2443* L_20 = (KeyValuePair_2U5BU5D_t2443*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(KeyValuePair_2_t2006 *)(KeyValuePair_2_t2006 *)SZArrayLdElema(L_20, L_22));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t1974* L_23 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_23, L_24))->___Next_1);
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
		KeyValuePair_2_t2006 * L_27 = ___value;
		Initobj (KeyValuePair_2_t2006_il2cpp_TypeInfo_var, (&V_2));
		KeyValuePair_2_t2006  L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2446 * Dictionary_2_get_Keys_m18647_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2446 * L_0 = (KeyCollection_t2446 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2446 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2450 * Dictionary_2_get_Values_m18649_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2450 * L_0 = (ValueCollection_t2450 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2450 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern Il2CppCodeGenString* _stringLiteral2970;
extern "C" Object_t * Dictionary_2_ToTKey_m18651_gshared (Dictionary_2_t2445 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
		_stringLiteral2970 = il2cpp_codegen_string_literal_from_index(2970);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2970, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t274 * L_6 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4196(L_6, (String_t*)L_5, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t2006_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2970;
extern Il2CppCodeGenString* _stringLiteral567;
extern "C" KeyValuePair_2_t2006  Dictionary_2_ToTValue_m18653_gshared (Dictionary_2_t2445 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		KeyValuePair_2_t2006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1505);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral2970 = il2cpp_codegen_string_literal_from_index(2970);
		_stringLiteral567 = il2cpp_codegen_string_literal_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t2006  V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (KeyValuePair_2_t2006_il2cpp_TypeInfo_var, (&V_0));
		KeyValuePair_2_t2006  L_3 = V_0;
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
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2970, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t274 * L_8 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4196(L_8, (String_t*)L_7, (String_t*)_stringLiteral567, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((*(KeyValuePair_2_t2006 *)((KeyValuePair_2_t2006 *)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18655_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2_t2419  ___pair, const MethodInfo* method)
{
	KeyValuePair_2_t2006  V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2419 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2445 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, KeyValuePair_2_t2006 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2445 *)__this, (Object_t *)L_0, (KeyValuePair_2_t2006 *)(&V_0));
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
		EqualityComparer_1_t2455 * L_2 = (( EqualityComparer_1_t2455 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		KeyValuePair_2_t2006  L_3 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2419 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		KeyValuePair_2_t2006  L_4 = V_0;
		NullCheck((EqualityComparer_1_t2455 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t2006 , KeyValuePair_2_t2006  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (EqualityComparer_1_t2455 *)L_2, (KeyValuePair_2_t2006 )L_3, (KeyValuePair_2_t2006 )L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2448  Dictionary_2_GetEnumerator_m18657_gshared (Dictionary_2_t2445 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448  L_0 = {0};
		(( void (*) (Enumerator_t2448 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2445 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m18659_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		KeyValuePair_2_t2006  L_1 = ___value;
		KeyValuePair_2_t2006  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_2);
		DictionaryEntry_t1235  L_4 = {0};
		DictionaryEntry__ctor_m6086(&L_4, (Object_t *)L_0, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

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
struct Dictionary_2_t2445;
struct Array_t;
struct Transform_1_t2449;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20791_gshared (Dictionary_2_t2445 * __this, Array_t * p0, int32_t p1, Transform_1_t2449 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20791(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, Transform_1_t2449 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20791_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2445;
struct ObjectU5BU5D_t146;
struct Transform_1_t2449;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20790_gshared (Dictionary_2_t2445 * __this, ObjectU5BU5D_t146* p0, int32_t p1, Transform_1_t2449 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20790(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2445 *, ObjectU5BU5D_t146*, int32_t, Transform_1_t2449 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20790_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1525;
extern "C" void KeyCollection__ctor_m18660_gshared (KeyCollection_t2446 * __this, Dictionary_2_t2445 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral1525 = il2cpp_codegen_string_literal_from_index(1525);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2445 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral1525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2445 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18661_gshared (KeyCollection_t2446 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18662_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18663_gshared (KeyCollection_t2446 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2445 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t2445 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18664_gshared (KeyCollection_t2446 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18665_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2446 *)__this);
		Enumerator_t2447  L_0 = (( Enumerator_t2447  (*) (KeyCollection_t2446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2447  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m18666_gshared (KeyCollection_t2446 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t146* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t146*)((ObjectU5BU5D_t146*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t146* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t146* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2446 *)__this);
		(( void (*) (KeyCollection_t2446 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2446 *)__this, (ObjectU5BU5D_t146*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2445 * L_4 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2445 *)L_4);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2445 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2445 * L_7 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2449 * L_11 = (Transform_1_t2449 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2449 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2445 *)L_7);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, Transform_1_t2449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2445 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2449 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18667_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2446 *)__this);
		Enumerator_t2447  L_0 = (( Enumerator_t2447  (*) (KeyCollection_t2446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2447  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18668_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18669_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1236_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m18670_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1236_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m18671_gshared (KeyCollection_t2446 * __this, ObjectU5BU5D_t146* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		ObjectU5BU5D_t146* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2445 *)L_0);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2445 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2445 * L_3 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		ObjectU5BU5D_t146* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2449 * L_7 = (Transform_1_t2449 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2449 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2445 *)L_3);
		(( void (*) (Dictionary_2_t2445 *, ObjectU5BU5D_t146*, int32_t, Transform_1_t2449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2445 *)L_3, (ObjectU5BU5D_t146*)L_4, (int32_t)L_5, (Transform_1_t2449 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2447  KeyCollection_GetEnumerator_m18672_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		Enumerator_t2447  L_1 = {0};
		(( void (*) (Enumerator_t2447 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2445 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m18673_gshared (KeyCollection_t2446 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2445 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t2445 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18674_gshared (Enumerator_t2447 * __this, Dictionary_2_t2445 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = ___host;
		NullCheck((Dictionary_2_t2445 *)L_0);
		Enumerator_t2448  L_1 = (( Enumerator_t2448  (*) (Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18675_gshared (Enumerator_t2447 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18676_gshared (Enumerator_t2447 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18677_gshared (Enumerator_t2447 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m18678_gshared (Enumerator_t2447 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2419 * L_1 = (KeyValuePair_2_t2419 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2419 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18679_gshared (Enumerator_t2448 * __this, Dictionary_2_t2445 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2445 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18680_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2419  L_0 = (KeyValuePair_2_t2419 )(__this->___current_3);
		KeyValuePair_2_t2419  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18681_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2419 * L_0 = (KeyValuePair_2_t2419 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2419 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2419 * L_2 = (KeyValuePair_2_t2419 *)&(__this->___current_3);
		KeyValuePair_2_t2006  L_3 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2419 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		KeyValuePair_2_t2006  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t1235  L_6 = {0};
		DictionaryEntry__ctor_m6086(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18682_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18683_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2006  L_0 = (( KeyValuePair_2_t2006  (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		KeyValuePair_2_t2006  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18684_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2445 * L_4 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1974* L_5 = (LinkU5BU5D_t1974*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2445 * L_8 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t146* L_9 = (ObjectU5BU5D_t146*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2445 * L_12 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck(L_12);
		KeyValuePair_2U5BU5D_t2443* L_13 = (KeyValuePair_2U5BU5D_t2443*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2419  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2419 *, Object_t *, KeyValuePair_2_t2006 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (KeyValuePair_2_t2006 )(*(KeyValuePair_2_t2006 *)(KeyValuePair_2_t2006 *)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2445 * L_18 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
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
extern "C" KeyValuePair_2_t2419  Enumerator_get_Current_m18685_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2419  L_0 = (KeyValuePair_2_t2419 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18686_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2419 * L_0 = (KeyValuePair_2_t2419 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2419 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2006  Enumerator_get_CurrentValue_m18687_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2419 * L_0 = (KeyValuePair_2_t2419 *)&(__this->___current_3);
		KeyValuePair_2_t2006  L_1 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2419 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern TypeInfo* ObjectDisposedException_t893_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2972;
extern "C" void Enumerator_VerifyState_m18688_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2972 = il2cpp_codegen_string_literal_from_index(2972);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t893 * L_1 = (ObjectDisposedException_t893 *)il2cpp_codegen_object_new (ObjectDisposedException_t893_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4197(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Dictionary_2_t2445 * L_2 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1063 * L_5 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_5, (String_t*)_stringLiteral2972, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2973;
extern "C" void Enumerator_VerifyCurrent_m18689_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2973 = il2cpp_codegen_string_literal_from_index(2973);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2973, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18690_gshared (Enumerator_t2448 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2445 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18691_gshared (Transform_1_t2449 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m18692_gshared (Transform_1_t2449 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18692((Transform_1_t2449 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2006_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18693_gshared (Transform_1_t2449 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1505);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2006_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m18694_gshared (Transform_1_t2449 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_48MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34MethodDeclarations.h"
struct Dictionary_2_t2445;
struct Array_t;
struct Transform_1_t2452;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2006_m20793_gshared (Dictionary_2_t2445 * __this, Array_t * p0, int32_t p1, Transform_1_t2452 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2006_m20793(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, Transform_1_t2452 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2006_m20793_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2445;
struct KeyValuePair_2U5BU5D_t2443;
struct Transform_1_t2452;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2006_TisKeyValuePair_2_t2006_m20794_gshared (Dictionary_2_t2445 * __this, KeyValuePair_2U5BU5D_t2443* p0, int32_t p1, Transform_1_t2452 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2006_TisKeyValuePair_2_t2006_m20794(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2443*, int32_t, Transform_1_t2452 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2006_TisKeyValuePair_2_t2006_m20794_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1525;
extern "C" void ValueCollection__ctor_m18695_gshared (ValueCollection_t2450 * __this, Dictionary_2_t2445 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral1525 = il2cpp_codegen_string_literal_from_index(1525);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2445 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral1525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2445 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18696_gshared (ValueCollection_t2450 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18697_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18698_gshared (ValueCollection_t2450 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		KeyValuePair_2_t2006  L_1 = ___item;
		NullCheck((Dictionary_2_t2445 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2445 *, KeyValuePair_2_t2006 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)L_0, (KeyValuePair_2_t2006 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18699_gshared (ValueCollection_t2450 * __this, KeyValuePair_2_t2006  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18700_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2450 *)__this);
		Enumerator_t2451  L_0 = (( Enumerator_t2451  (*) (ValueCollection_t2450 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2450 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2451  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18701_gshared (ValueCollection_t2450 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t2443* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2443*)((KeyValuePair_2U5BU5D_t2443*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		KeyValuePair_2U5BU5D_t2443* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2443* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2450 *)__this);
		(( void (*) (ValueCollection_t2450 *, KeyValuePair_2U5BU5D_t2443*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2450 *)__this, (KeyValuePair_2U5BU5D_t2443*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2445 * L_4 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2445 *)L_4);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2445 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2445 * L_7 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2452 * L_11 = (Transform_1_t2452 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2452 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2445 *)L_7);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, Transform_1_t2452 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2445 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2452 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18702_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2450 *)__this);
		Enumerator_t2451  L_0 = (( Enumerator_t2451  (*) (ValueCollection_t2450 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2450 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2451  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18703_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18704_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1236_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18705_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1236_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18706_gshared (ValueCollection_t2450 * __this, KeyValuePair_2U5BU5D_t2443* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		KeyValuePair_2U5BU5D_t2443* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2445 *)L_0);
		(( void (*) (Dictionary_2_t2445 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2445 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2445 * L_3 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		KeyValuePair_2U5BU5D_t2443* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2452 * L_7 = (Transform_1_t2452 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2452 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2445 *)L_3);
		(( void (*) (Dictionary_2_t2445 *, KeyValuePair_2U5BU5D_t2443*, int32_t, Transform_1_t2452 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2445 *)L_3, (KeyValuePair_2U5BU5D_t2443*)L_4, (int32_t)L_5, (Transform_1_t2452 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2451  ValueCollection_GetEnumerator_m18707_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		Enumerator_t2451  L_1 = {0};
		(( void (*) (Enumerator_t2451 *, Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2445 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18708_gshared (ValueCollection_t2450 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = (Dictionary_2_t2445 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2445 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t2445 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18709_gshared (Enumerator_t2451 * __this, Dictionary_2_t2445 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2445 * L_0 = ___host;
		NullCheck((Dictionary_2_t2445 *)L_0);
		Enumerator_t2448  L_1 = (( Enumerator_t2448  (*) (Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18710_gshared (Enumerator_t2451 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2006  L_1 = (( KeyValuePair_2_t2006  (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		KeyValuePair_2_t2006  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m18711_gshared (Enumerator_t2451 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18712_gshared (Enumerator_t2451 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2006  Enumerator_get_Current_m18713_gshared (Enumerator_t2451 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2419 * L_1 = (KeyValuePair_2_t2419 *)&(L_0->___current_3);
		KeyValuePair_2_t2006  L_2 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2419 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18714_gshared (Transform_1_t2452 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2006  Transform_1_Invoke_m18715_gshared (Transform_1_t2452 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18715((Transform_1_t2452 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2006  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2006  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2006  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2006_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18716_gshared (Transform_1_t2452 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1505);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2006_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2006  Transform_1_EndInvoke_m18717_gshared (Transform_1_t2452 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2006 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18718_gshared (Transform_1_t2444 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1235  Transform_1_Invoke_m18719_gshared (Transform_1_t2444 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18719((Transform_1_t2444 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2006_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18720_gshared (Transform_1_t2444 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1505);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2006_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1235  Transform_1_EndInvoke_m18721_gshared (Transform_1_t2444 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1235 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18722_gshared (Transform_1_t2453 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2419  Transform_1_Invoke_m18723_gshared (Transform_1_t2453 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18723((Transform_1_t2453 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2419  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2419  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2419  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t2006  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t2006_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m18724_gshared (Transform_1_t2453 * __this, Object_t * ___key, KeyValuePair_2_t2006  ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t2006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1505);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t2006_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2419  Transform_1_EndInvoke_m18725_gshared (Transform_1_t2453 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2419 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18726_gshared (ShimEnumerator_t2454 * __this, Dictionary_2_t2445 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2445 * L_0 = ___host;
		NullCheck((Dictionary_2_t2445 *)L_0);
		Enumerator_t2448  L_1 = (( Enumerator_t2448  (*) (Dictionary_2_t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2445 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18727_gshared (ShimEnumerator_t2454 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m18728_gshared (ShimEnumerator_t2454 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2448  L_0 = (Enumerator_t2448 )(__this->___host_enumerator_0);
		Enumerator_t2448  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1235  L_3 = (DictionaryEntry_t1235 )InterfaceFuncInvoker0< DictionaryEntry_t1235  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18729_gshared (ShimEnumerator_t2454 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2419  V_0 = {0};
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2419  L_1 = (( KeyValuePair_2_t2419  (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2419 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2419 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18730_gshared (ShimEnumerator_t2454 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2419  V_0 = {0};
	{
		Enumerator_t2448 * L_0 = (Enumerator_t2448 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2419  L_1 = (( KeyValuePair_2_t2419  (*) (Enumerator_t2448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2448 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2419 )L_1;
		KeyValuePair_2_t2006  L_2 = (( KeyValuePair_2_t2006  (*) (KeyValuePair_2_t2419 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2419 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		KeyValuePair_2_t2006  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern TypeInfo* DictionaryEntry_t1235_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m18731_gshared (ShimEnumerator_t2454 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2454 *)__this);
		DictionaryEntry_t1235  L_0 = (DictionaryEntry_t1235 )VirtFuncInvoker0< DictionaryEntry_t1235  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry() */, (ShimEnumerator_t2454 *)__this);
		DictionaryEntry_t1235  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1235_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void EqualityComparer_1__ctor_m18732_gshared (EqualityComparer_1_t2455 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3053_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m18733_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3053_0_0_0_var = il2cpp_codegen_type_from_index(2990);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(GenericEqualityComparer_1_t3053_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t702* L_4 = (TypeU5BU5D_t702*)((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t702* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t702*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10250(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2455_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2455 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2456 * L_8 = (DefaultComparer_t2456 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2456 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2455_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18734_gshared (EqualityComparer_1_t2455 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2455 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t2006  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T) */, (EqualityComparer_1_t2455 *)__this, (KeyValuePair_2_t2006 )((*(KeyValuePair_2_t2006 *)((KeyValuePair_2_t2006 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18735_gshared (EqualityComparer_1_t2455 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2455 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t2006 , KeyValuePair_2_t2006  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (EqualityComparer_1_t2455 *)__this, (KeyValuePair_2_t2006 )((*(KeyValuePair_2_t2006 *)((KeyValuePair_2_t2006 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t2006 )((*(KeyValuePair_2_t2006 *)((KeyValuePair_2_t2006 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Default()
extern "C" EqualityComparer_1_t2455 * EqualityComparer_1_get_Default_m18736_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2455 * L_0 = ((EqualityComparer_1_t2455_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m18737_gshared (DefaultComparer_t2456 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2455 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2455 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2455 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18738_gshared (DefaultComparer_t2456 * __this, KeyValuePair_2_t2006  ___obj, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2006  L_0 = ___obj;
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
extern "C" bool DefaultComparer_Equals_m18739_gshared (DefaultComparer_t2456 * __this, KeyValuePair_2_t2006  ___x, KeyValuePair_2_t2006  ___y, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2006  L_0 = ___x;
		goto IL_0015;
	}
	{
		KeyValuePair_2_t2006  L_1 = ___y;
		KeyValuePair_2_t2006  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		KeyValuePair_2_t2006  L_4 = ___y;
		KeyValuePair_2_t2006  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C" ParameterModifier_t1512  Array_InternalArray__get_Item_TisParameterModifier_t1512_m20800_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisParameterModifier_t1512_m20800(__this, p0, method) (( ParameterModifier_t1512  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisParameterModifier_t1512_m20800_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18935_gshared (InternalEnumerator_1_t2474 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18936_gshared (InternalEnumerator_1_t2474 * __this, const MethodInfo* method)
{
	{
		ParameterModifier_t1512  L_0 = (( ParameterModifier_t1512  (*) (InternalEnumerator_1_t2474 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2474 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ParameterModifier_t1512  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18937_gshared (InternalEnumerator_1_t2474 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18938_gshared (InternalEnumerator_1_t2474 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" ParameterModifier_t1512  InternalEnumerator_1_get_Current_m18939_gshared (InternalEnumerator_1_t2474 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		ParameterModifier_t1512  L_8 = (( ParameterModifier_t1512  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"


// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" HitInfo_t744  Array_InternalArray__get_Item_TisHitInfo_t744_m20811_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisHitInfo_t744_m20811(__this, p0, method) (( HitInfo_t744  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisHitInfo_t744_m20811_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18940_gshared (InternalEnumerator_1_t2475 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18941_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method)
{
	{
		HitInfo_t744  L_0 = (( HitInfo_t744  (*) (InternalEnumerator_1_t2475 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2475 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		HitInfo_t744  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18942_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18943_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" HitInfo_t744  InternalEnumerator_1_get_Current_m18944_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		HitInfo_t744  L_8 = (( HitInfo_t744  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_34.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_36.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_7.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_34MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_36MethodDeclarations.h"
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
struct Dictionary_2_t2481;
struct DictionaryEntryU5BU5D_t2955;
struct Transform_1_t2480;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1235_TisDictionaryEntry_t1235_m20848_gshared (Dictionary_2_t2481 * __this, DictionaryEntryU5BU5D_t2955* p0, int32_t p1, Transform_1_t2480 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1235_TisDictionaryEntry_t1235_m20848(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2481 *, DictionaryEntryU5BU5D_t2955*, int32_t, Transform_1_t2480 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1235_TisDictionaryEntry_t1235_m20848_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2481;
struct Array_t;
struct Transform_1_t2492;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2482_m20850_gshared (Dictionary_2_t2481 * __this, Array_t * p0, int32_t p1, Transform_1_t2492 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2482_m20850(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, Transform_1_t2492 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2482_m20850_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2481;
struct KeyValuePair_2U5BU5D_t2913;
struct Transform_1_t2492;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2482_TisKeyValuePair_2_t2482_m20851_gshared (Dictionary_2_t2481 * __this, KeyValuePair_2U5BU5D_t2913* p0, int32_t p1, Transform_1_t2492 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2482_TisKeyValuePair_2_t2482_m20851(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2481 *, KeyValuePair_2U5BU5D_t2913*, int32_t, Transform_1_t2492 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2482_TisKeyValuePair_2_t2482_m20851_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m18946_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18948_gshared (Dictionary_2_t2481 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18950_gshared (Dictionary_2_t2481 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2481 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18952_gshared (Dictionary_2_t2481 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t153_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1525;
extern "C" void Dictionary_2__ctor_m18954_gshared (Dictionary_2_t2481 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		IDisposable_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral1525 = il2cpp_codegen_string_literal_from_index(1525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2482  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t143 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t143 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral1525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t2482  L_9 = (KeyValuePair_2_t2482 )InterfaceFuncInvoker0< KeyValuePair_2_t2482  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2482 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2482 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2482 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2481 *)__this);
			VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_10, (int32_t)L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, (Object_t *)L_12);
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
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t153_il2cpp_TypeInfo_var, (Object_t *)L_15);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18956_gshared (Dictionary_2_t2481 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t809 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18958_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2481 *)__this);
		KeyCollection_t2485 * L_0 = (( KeyCollection_t2485 * (*) (Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18960_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2481 *)__this);
		ValueCollection_t2489 * L_0 = (( ValueCollection_t2489 * (*) (Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18962_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2481 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey) */, (Dictionary_2_t2481 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2481 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2481 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2481 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2481 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_4);
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
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18964_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2481 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2481 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2481 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2481 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2481 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2481 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2481 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18966_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2481 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2481 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2481 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2481 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2481 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2481 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2481 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18968_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		NullCheck((Dictionary_2_t2481 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey) */, (Dictionary_2_t2481 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18970_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		NullCheck((Dictionary_2_t2481 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey) */, (Dictionary_2_t2481 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18972_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18974_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18976_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18978_gshared (Dictionary_2_t2481 * __this, KeyValuePair_2_t2482  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2482 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2482 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2481 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18980_gshared (Dictionary_2_t2481 * __this, KeyValuePair_2_t2482  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2482  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2481 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2481 *, KeyValuePair_2_t2482 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2481 *)__this, (KeyValuePair_2_t2482 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18982_gshared (Dictionary_2_t2481 * __this, KeyValuePair_2U5BU5D_t2913* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2913* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, KeyValuePair_2U5BU5D_t2913*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2481 *)__this, (KeyValuePair_2U5BU5D_t2913*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18984_gshared (Dictionary_2_t2481 * __this, KeyValuePair_2_t2482  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2482  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2481 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2481 *, KeyValuePair_2_t2482 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2481 *)__this, (KeyValuePair_2_t2482 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2482 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2481 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t2955_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18986_gshared (Dictionary_2_t2481 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2992);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2913* V_0 = {0};
	DictionaryEntryU5BU5D_t2955* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2955* G_B5_1 = {0};
	Dictionary_2_t2481 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2955* G_B4_1 = {0};
	Dictionary_2_t2481 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2913*)((KeyValuePair_2U5BU5D_t2913*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2913* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2913* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, KeyValuePair_2U5BU5D_t2913*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2481 *)__this, (KeyValuePair_2U5BU5D_t2913*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2481 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2955*)((DictionaryEntryU5BU5D_t2955*)IsInst(L_6, DictionaryEntryU5BU5D_t2955_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2955* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2955* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2480 * L_10 = ((Dictionary_2_t2481_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2481 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2481 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2480 * L_12 = (Transform_1_t2480 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2480 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2481_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2481 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2480 * L_13 = ((Dictionary_2_t2481_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2481 *)G_B5_2);
		(( void (*) (Dictionary_2_t2481 *, DictionaryEntryU5BU5D_t2955*, int32_t, Transform_1_t2480 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2481 *)G_B5_2, (DictionaryEntryU5BU5D_t2955*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2480 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2492 * L_17 = (Transform_1_t2492 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2492 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, Transform_1_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2481 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2492 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18988_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487  L_0 = {0};
		(( void (*) (Enumerator_t2487 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2487  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18990_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487  L_0 = {0};
		(( void (*) (Enumerator_t2487 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2487  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18992_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2493 * L_0 = (ShimEnumerator_t2493 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2493 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18994_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1356_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" int32_t Dictionary_2_get_Item_m18996_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		KeyNotFoundException_t1356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2993);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1025* L_5 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t1974* L_9 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_14 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		TextEditOpU5BU5D_t2477* L_19 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21));
	}

IL_0089:
	{
		LinkU5BU5D_t1974* L_22 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_22, L_23))->___Next_1);
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
		KeyNotFoundException_t1356 * L_26 = (KeyNotFoundException_t1356 *)il2cpp_codegen_object_new (KeyNotFoundException_t1356_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7509(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" void Dictionary_2_set_Item_m18998_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t1974* L_11 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_16 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
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
		LinkU5BU5D_t1974* L_22 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_22, L_23))->___Next_1);
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
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t1025* L_32 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
		LinkU5BU5D_t1974* L_38 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t1974* L_41 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t1025* L_43 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_41, L_42))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45))-(int32_t)1));
		Int32U5BU5D_t1025* L_46 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47)) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t1974* L_49 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_49, L_50))->___HashCode_0 = L_51;
		ObjectU5BU5D_t146* L_52 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53)) = (Object_t *)L_54;
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
		LinkU5BU5D_t1974* L_56 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t1974* L_58 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_58, L_59))->___Next_1);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_56, L_57))->___Next_1 = L_60;
		LinkU5BU5D_t1974* L_61 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t1025* L_63 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_61, L_62))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65))-(int32_t)1));
		Int32U5BU5D_t1025* L_66 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67)) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		TextEditOpU5BU5D_t2477* L_69 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		int32_t L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_69, L_70)) = (int32_t)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1496;
extern "C" void Dictionary_2_Init_m19000_gshared (Dictionary_2_t2481 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		_stringLiteral1496 = il2cpp_codegen_string_literal_from_index(1496);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2481 * G_B4_0 = {0};
	Dictionary_2_t2481 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2481 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t834 * L_1 = (ArgumentOutOfRangeException_t834 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5079(L_1, (String_t*)_stringLiteral1496, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2481 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2481 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2481 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t1938 * L_5 = (( EqualityComparer_1_t1938 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2481 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2481 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1025_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1974_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m19002_gshared (Dictionary_2_t2481 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1025_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(701);
		LinkU5BU5D_t1974_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1025*)SZArrayNew(Int32U5BU5D_t1025_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1974*)SZArrayNew(LinkU5BU5D_t1974_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t146*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((TextEditOpU5BU5D_t2477*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1025* L_4 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral451;
extern Il2CppCodeGenString* _stringLiteral889;
extern Il2CppCodeGenString* _stringLiteral2966;
extern Il2CppCodeGenString* _stringLiteral2967;
extern "C" void Dictionary_2_CopyToCheck_m19004_gshared (Dictionary_2_t2481 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		_stringLiteral889 = il2cpp_codegen_string_literal_from_index(889);
		_stringLiteral2966 = il2cpp_codegen_string_literal_from_index(2966);
		_stringLiteral2967 = il2cpp_codegen_string_literal_from_index(2967);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral451, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		ArgumentOutOfRangeException_t834 * L_3 = (ArgumentOutOfRangeException_t834 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t834_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5079(L_3, (String_t*)_stringLiteral889, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t274 * L_7 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_7, (String_t*)_stringLiteral2966, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m6088((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2481 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count() */, (Dictionary_2_t2481 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t274 * L_12 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_12, (String_t*)_stringLiteral2967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2482  Dictionary_2_make_pair_m19006_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t2482  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2482 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (Object_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19008_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m19010_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19012_gshared (Dictionary_2_t2481 * __this, KeyValuePair_2U5BU5D_t2913* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2913* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2481 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2913* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2492 * L_5 = (Transform_1_t2492 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2492 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, KeyValuePair_2U5BU5D_t2913*, int32_t, Transform_1_t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2481 *)__this, (KeyValuePair_2U5BU5D_t2913*)L_2, (int32_t)L_3, (Transform_1_t2492 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern TypeInfo* Hashtable_t972_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1025_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1974_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m19014_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t972_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(665);
		Int32U5BU5D_t1025_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(701);
		LinkU5BU5D_t1974_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1025* V_1 = {0};
	LinkU5BU5D_t1974* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t146* V_7 = {0};
	TextEditOpU5BU5D_t2477* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1025* L_0 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t972_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7743(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1025*)((Int32U5BU5D_t1025*)SZArrayNew(Int32U5BU5D_t1025_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1974*)((LinkU5BU5D_t1974*)SZArrayNew(LinkU5BU5D_t1974_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t1025* L_4 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t1974* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_10 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1974* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1025* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t1025* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1974* L_26 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_26, L_27))->___Next_1);
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
		Int32U5BU5D_t1025* L_32 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1025* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1974* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t146*)((ObjectU5BU5D_t146*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (TextEditOpU5BU5D_t2477*)((TextEditOpU5BU5D_t2477*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t146* L_37 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		ObjectU5BU5D_t146* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		TextEditOpU5BU5D_t2477* L_40 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		TextEditOpU5BU5D_t2477* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t146* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		TextEditOpU5BU5D_t2477* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern Il2CppCodeGenString* _stringLiteral2968;
extern "C" void Dictionary_2_Add_m19016_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
		_stringLiteral2968 = il2cpp_codegen_string_literal_from_index(2968);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t1974* L_10 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_15 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t274 * L_20 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_20, (String_t*)_stringLiteral2968, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t1974* L_21 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_21, L_22))->___Next_1);
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
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t1025* L_30 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
		LinkU5BU5D_t1974* L_36 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t1974* L_39 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_39, L_40))->___HashCode_0 = L_41;
		LinkU5BU5D_t1974* L_42 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1025* L_44 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t1025* L_47 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t146* L_50 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)) = (Object_t *)L_52;
		TextEditOpU5BU5D_t2477* L_53 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		int32_t L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_53, L_54)) = (int32_t)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m19018_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1025* L_0 = (Int32U5BU5D_t1025*)(__this->___table_4);
		Int32U5BU5D_t1025* L_1 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		ObjectU5BU5D_t146* L_3 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		TextEditOpU5BU5D_t2477* L_4 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		TextEditOpU5BU5D_t2477* L_5 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1974* L_6 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		LinkU5BU5D_t1974* L_7 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m4194(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_ContainsKey_m19020_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1025* L_5 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t1974* L_9 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_14 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
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
		LinkU5BU5D_t1974* L_19 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_19, L_20))->___Next_1);
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
extern "C" bool Dictionary_2_ContainsValue_m19022_gshared (Dictionary_2_t2481 * __this, int32_t ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2494 * L_0 = (( EqualityComparer_1_t2494 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t1025* L_1 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		TextEditOpU5BU5D_t2477* L_5 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), (int32_t)L_8);
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
		LinkU5BU5D_t1974* L_10 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_10, L_11))->___Next_1);
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
		Int32U5BU5D_t1025* L_16 = (Int32U5BU5D_t1025*)(__this->___table_4);
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
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral898;
extern Il2CppCodeGenString* _stringLiteral900;
extern Il2CppCodeGenString* _stringLiteral902;
extern Il2CppCodeGenString* _stringLiteral1530;
extern Il2CppCodeGenString* _stringLiteral2969;
extern "C" void Dictionary_2_GetObjectData_m19024_gshared (Dictionary_2_t2481 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral898 = il2cpp_codegen_string_literal_from_index(898);
		_stringLiteral900 = il2cpp_codegen_string_literal_from_index(900);
		_stringLiteral902 = il2cpp_codegen_string_literal_from_index(902);
		_stringLiteral1530 = il2cpp_codegen_string_literal_from_index(1530);
		_stringLiteral2969 = il2cpp_codegen_string_literal_from_index(2969);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2913* V_0 = {0};
	{
		SerializationInfo_t809 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral898, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		SerializationInfo_t809 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t809 *)L_2);
		SerializationInfo_AddValue_m6095((SerializationInfo_t809 *)L_2, (String_t*)_stringLiteral900, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t809 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t809 *)L_4);
		SerializationInfo_AddValue_m5129((SerializationInfo_t809 *)L_4, (String_t*)_stringLiteral902, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2913*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2913*)((KeyValuePair_2U5BU5D_t2913*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2913* L_8 = V_0;
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, KeyValuePair_2U5BU5D_t2913*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2481 *)__this, (KeyValuePair_2U5BU5D_t2913*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t809 * L_9 = ___info;
		Int32U5BU5D_t1025* L_10 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t809 *)L_9);
		SerializationInfo_AddValue_m6095((SerializationInfo_t809 *)L_9, (String_t*)_stringLiteral1530, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t809 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2913* L_12 = V_0;
		NullCheck((SerializationInfo_t809 *)L_11);
		SerializationInfo_AddValue_m5129((SerializationInfo_t809 *)L_11, (String_t*)_stringLiteral2969, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral900;
extern Il2CppCodeGenString* _stringLiteral902;
extern Il2CppCodeGenString* _stringLiteral1530;
extern Il2CppCodeGenString* _stringLiteral2969;
extern "C" void Dictionary_2_OnDeserialization_m19026_gshared (Dictionary_2_t2481 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		_stringLiteral900 = il2cpp_codegen_string_literal_from_index(900);
		_stringLiteral902 = il2cpp_codegen_string_literal_from_index(902);
		_stringLiteral1530 = il2cpp_codegen_string_literal_from_index(1530);
		_stringLiteral2969 = il2cpp_codegen_string_literal_from_index(2969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2913* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t809 * L_0 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
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
		SerializationInfo_t809 * L_1 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t809 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m6103((SerializationInfo_t809 *)L_1, (String_t*)_stringLiteral900, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t809 * L_3 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t809 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m6096((SerializationInfo_t809 *)L_3, (String_t*)_stringLiteral902, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t809 * L_6 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t809 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m6103((SerializationInfo_t809 *)L_6, (String_t*)_stringLiteral1530, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t809 * L_8 = (SerializationInfo_t809 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t809 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m6096((SerializationInfo_t809 *)L_8, (String_t*)_stringLiteral2969, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2913*)((KeyValuePair_2U5BU5D_t2913*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t2481 *)__this);
		(( void (*) (Dictionary_2_t2481 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2481 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2913* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t2913* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2482 *)((KeyValuePair_2_t2482 *)(KeyValuePair_2_t2482 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2913* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2482 *)((KeyValuePair_2_t2482 *)(KeyValuePair_2_t2482 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2481 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2913* L_22 = V_1;
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
		__this->___serialization_info_13 = (SerializationInfo_t809 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextEditOp_t765_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_Remove_m19028_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		TextEditOp_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2420);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t1025* L_6 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
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
		LinkU5BU5D_t1974* L_11 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_16 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
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
		LinkU5BU5D_t1974* L_22 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_22, L_23))->___Next_1);
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
		Int32U5BU5D_t1025* L_29 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t1974* L_31 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_31, L_32))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30)) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t1974* L_34 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t1974* L_36 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_34, L_35))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t1974* L_39 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_39, L_40))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t1974* L_43 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_43, L_44))->___HashCode_0 = 0;
		ObjectU5BU5D_t146* L_45 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46)) = (Object_t *)L_47;
		TextEditOpU5BU5D_t2477* L_48 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (TextEditOp_t765_il2cpp_TypeInfo_var, (&V_5));
		int32_t L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* TextEditOp_t765_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern "C" bool Dictionary_2_TryGetValue_m19030_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		TextEditOp_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2420);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1025* L_5 = (Int32U5BU5D_t1025*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t1025* L_7 = (Int32U5BU5D_t1025*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t1974* L_9 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t146* L_14 = (ObjectU5BU5D_t146*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		int32_t* L_19 = ___value;
		TextEditOpU5BU5D_t2477* L_20 = (TextEditOpU5BU5D_t2477*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t1974* L_23 = (LinkU5BU5D_t1974*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_23, L_24))->___Next_1);
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
		Initobj (TextEditOp_t765_il2cpp_TypeInfo_var, (&V_2));
		int32_t L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2485 * Dictionary_2_get_Keys_m19032_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2485 * L_0 = (KeyCollection_t2485 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2485 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2489 * Dictionary_2_get_Values_m19034_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2489 * L_0 = (ValueCollection_t2489 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2489 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral886;
extern Il2CppCodeGenString* _stringLiteral2970;
extern "C" Object_t * Dictionary_2_ToTKey_m19036_gshared (Dictionary_2_t2481 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral886 = il2cpp_codegen_string_literal_from_index(886);
		_stringLiteral2970 = il2cpp_codegen_string_literal_from_index(2970);
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
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2970, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t274 * L_6 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4196(L_6, (String_t*)L_5, (String_t*)_stringLiteral886, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextEditOp_t765_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2970;
extern Il2CppCodeGenString* _stringLiteral567;
extern "C" int32_t Dictionary_2_ToTValue_m19038_gshared (Dictionary_2_t2481 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		TextEditOp_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2420);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral2970 = il2cpp_codegen_string_literal_from_index(2970);
		_stringLiteral567 = il2cpp_codegen_string_literal_from_index(567);
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
		Type_t * L_1 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (TextEditOp_t765_il2cpp_TypeInfo_var, (&V_0));
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
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m420(NULL /*static, unused*/, (String_t*)_stringLiteral2970, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t274 * L_8 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4196(L_8, (String_t*)L_7, (String_t*)_stringLiteral567, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19040_gshared (Dictionary_2_t2481 * __this, KeyValuePair_2_t2482  ___pair, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2482 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2481 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2481 *)__this, (Object_t *)L_0, (int32_t*)(&V_0));
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
		EqualityComparer_1_t2494 * L_2 = (( EqualityComparer_1_t2494 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2482 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t2494 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T) */, (EqualityComparer_1_t2494 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2487  Dictionary_2_GetEnumerator_m19042_gshared (Dictionary_2_t2481 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487  L_0 = {0};
		(( void (*) (Enumerator_t2487 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1235  Dictionary_2_U3CCopyToU3Em__0_m19044_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_2);
		DictionaryEntry_t1235  L_4 = {0};
		DictionaryEntry__ctor_m6086(&L_4, (Object_t *)L_0, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>(System.Int32)
extern "C" KeyValuePair_2_t2482  Array_InternalArray__get_Item_TisKeyValuePair_2_t2482_m20822_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2482_m20822(__this, p0, method) (( KeyValuePair_2_t2482  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2482_m20822_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19045_gshared (InternalEnumerator_1_t2483 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19046_gshared (InternalEnumerator_1_t2483 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2482  L_0 = (( KeyValuePair_2_t2482  (*) (InternalEnumerator_1_t2483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2483 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2482  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19047_gshared (InternalEnumerator_1_t2483 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19048_gshared (InternalEnumerator_1_t2483 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" KeyValuePair_2_t2482  InternalEnumerator_1_get_Current_m19049_gshared (InternalEnumerator_1_t2483 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2482  L_8 = (( KeyValuePair_2_t2482  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m19050_gshared (KeyValuePair_2_t2482 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2482 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2482 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2482 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2482 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m19051_gshared (KeyValuePair_2_t2482 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m19052_gshared (KeyValuePair_2_t2482 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m19053_gshared (KeyValuePair_2_t2482 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m19054_gshared (KeyValuePair_2_t2482 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToString()
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral463;
extern Il2CppCodeGenString* _stringLiteral526;
extern Il2CppCodeGenString* _stringLiteral464;
extern "C" String_t* KeyValuePair_2_ToString_m19055_gshared (KeyValuePair_2_t2482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		_stringLiteral526 = il2cpp_codegen_string_literal_from_index(526);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t31* G_B2_1 = {0};
	StringU5BU5D_t31* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t31* G_B1_1 = {0};
	StringU5BU5D_t31* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t31* G_B3_2 = {0};
	StringU5BU5D_t31* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t31* G_B5_1 = {0};
	StringU5BU5D_t31* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t31* G_B4_1 = {0};
	StringU5BU5D_t31* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t31* G_B6_2 = {0};
	StringU5BU5D_t31* G_B6_3 = {0};
	{
		StringU5BU5D_t31* L_0 = (StringU5BU5D_t31*)((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral463);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral463;
		StringU5BU5D_t31* L_1 = (StringU5BU5D_t31*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2482 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2482 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t31* L_6 = (StringU5BU5D_t31*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral526);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)_stringLiteral526;
		StringU5BU5D_t31* L_7 = (StringU5BU5D_t31*)L_6;
		int32_t L_8 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2482 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2482 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t31* L_12 = (StringU5BU5D_t31*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral464);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4)) = (String_t*)_stringLiteral464;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m509(NULL /*static, unused*/, (StringU5BU5D_t31*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.TextEditor/TextEditOp>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.TextEditor/TextEditOp>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisTextEditOp_t765_m20833_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTextEditOp_t765_m20833(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTextEditOp_t765_m20833_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19056_gshared (InternalEnumerator_1_t2484 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_gshared (InternalEnumerator_1_t2484 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2484 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2484 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19058_gshared (InternalEnumerator_1_t2484 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19059_gshared (InternalEnumerator_1_t2484 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" int32_t InternalEnumerator_1_get_Current_m19060_gshared (InternalEnumerator_1_t2484 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_35.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_35MethodDeclarations.h"
struct Dictionary_2_t2481;
struct Array_t;
struct Transform_1_t2488;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20844_gshared (Dictionary_2_t2481 * __this, Array_t * p0, int32_t p1, Transform_1_t2488 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20844(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, Transform_1_t2488 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20844_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2481;
struct ObjectU5BU5D_t146;
struct Transform_1_t2488;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20843_gshared (Dictionary_2_t2481 * __this, ObjectU5BU5D_t146* p0, int32_t p1, Transform_1_t2488 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20843(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2481 *, ObjectU5BU5D_t146*, int32_t, Transform_1_t2488 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20843_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1525;
extern "C" void KeyCollection__ctor_m19061_gshared (KeyCollection_t2485 * __this, Dictionary_2_t2481 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral1525 = il2cpp_codegen_string_literal_from_index(1525);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2481 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral1525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2481 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m19062_gshared (KeyCollection_t2485 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m19063_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m19064_gshared (KeyCollection_t2485 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2481 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey) */, (Dictionary_2_t2481 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m19065_gshared (KeyCollection_t2485 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m19066_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2485 *)__this);
		Enumerator_t2486  L_0 = (( Enumerator_t2486  (*) (KeyCollection_t2485 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2485 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2486  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m19067_gshared (KeyCollection_t2485 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t146* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t146*)((ObjectU5BU5D_t146*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t146* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t146* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2485 *)__this);
		(( void (*) (KeyCollection_t2485 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2485 *)__this, (ObjectU5BU5D_t146*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2481 * L_4 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2481 *)L_4);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2481 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2481 * L_7 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2488 * L_11 = (Transform_1_t2488 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2488 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2481 *)L_7);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, Transform_1_t2488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2481 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2488 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m19068_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2485 *)__this);
		Enumerator_t2486  L_0 = (( Enumerator_t2486  (*) (KeyCollection_t2485 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2485 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2486  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m19069_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m19070_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1236_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m19071_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1236_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m19072_gshared (KeyCollection_t2485 * __this, ObjectU5BU5D_t146* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		ObjectU5BU5D_t146* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2481 *)L_0);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2481 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2481 * L_3 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		ObjectU5BU5D_t146* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2488 * L_7 = (Transform_1_t2488 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2488 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2481 *)L_3);
		(( void (*) (Dictionary_2_t2481 *, ObjectU5BU5D_t146*, int32_t, Transform_1_t2488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2481 *)L_3, (ObjectU5BU5D_t146*)L_4, (int32_t)L_5, (Transform_1_t2488 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2486  KeyCollection_GetEnumerator_m19073_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		Enumerator_t2486  L_1 = {0};
		(( void (*) (Enumerator_t2486 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2481 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m19074_gshared (KeyCollection_t2485 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2481 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count() */, (Dictionary_2_t2481 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19075_gshared (Enumerator_t2486 * __this, Dictionary_2_t2481 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = ___host;
		NullCheck((Dictionary_2_t2481 *)L_0);
		Enumerator_t2487  L_1 = (( Enumerator_t2487  (*) (Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19076_gshared (Enumerator_t2486 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19077_gshared (Enumerator_t2486 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19078_gshared (Enumerator_t2486 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m19079_gshared (Enumerator_t2486 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2482 * L_1 = (KeyValuePair_2_t2482 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2482 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19080_gshared (Enumerator_t2487 * __this, Dictionary_2_t2481 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2481 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19081_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2482  L_0 = (KeyValuePair_2_t2482 )(__this->___current_3);
		KeyValuePair_2_t2482  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1235  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19082_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2482 * L_0 = (KeyValuePair_2_t2482 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2482 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2482 * L_2 = (KeyValuePair_2_t2482 *)&(__this->___current_3);
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2482 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t1235  L_6 = {0};
		DictionaryEntry__ctor_m6086(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19083_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19084_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19085_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2481 * L_4 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1974* L_5 = (LinkU5BU5D_t1974*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1355 *)(Link_t1355 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2481 * L_8 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t146* L_9 = (ObjectU5BU5D_t146*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2481 * L_12 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck(L_12);
		TextEditOpU5BU5D_t2477* L_13 = (TextEditOpU5BU5D_t2477*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2482  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2482 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2481 * L_18 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
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
extern "C" KeyValuePair_2_t2482  Enumerator_get_Current_m19086_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2482  L_0 = (KeyValuePair_2_t2482 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19087_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2482 * L_0 = (KeyValuePair_2_t2482 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2482 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m19088_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2482 * L_0 = (KeyValuePair_2_t2482 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2482 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern TypeInfo* ObjectDisposedException_t893_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2972;
extern "C" void Enumerator_VerifyState_m19089_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2972 = il2cpp_codegen_string_literal_from_index(2972);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t893 * L_1 = (ObjectDisposedException_t893 *)il2cpp_codegen_object_new (ObjectDisposedException_t893_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4197(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Dictionary_2_t2481 * L_2 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1063 * L_5 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_5, (String_t*)_stringLiteral2972, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2973;
extern "C" void Enumerator_VerifyCurrent_m19090_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2973 = il2cpp_codegen_string_literal_from_index(2973);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2487 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2973, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19091_gshared (Enumerator_t2487 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2481 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19092_gshared (Transform_1_t2488 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m19093_gshared (Transform_1_t2488 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19093((Transform_1_t2488 *)__this->___prev_9,___key, ___value, method);
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
extern TypeInfo* TextEditOp_t765_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19094_gshared (Transform_1_t2488 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2420);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t765_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m19095_gshared (Transform_1_t2488 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_37.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_37MethodDeclarations.h"
struct Dictionary_2_t2481;
struct Array_t;
struct Transform_1_t2491;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<UnityEngine.TextEditor/TextEditOp>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_ICollectionCopyTo<UnityEngine.TextEditor/TextEditOp>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t765_m20846_gshared (Dictionary_2_t2481 * __this, Array_t * p0, int32_t p1, Transform_1_t2491 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t765_m20846(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, Transform_1_t2491 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisTextEditOp_t765_m20846_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2481;
struct TextEditOpU5BU5D_t2477;
struct Transform_1_t2491;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Do_CopyTo<UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisTextEditOp_t765_TisTextEditOp_t765_m20847_gshared (Dictionary_2_t2481 * __this, TextEditOpU5BU5D_t2477* p0, int32_t p1, Transform_1_t2491 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisTextEditOp_t765_TisTextEditOp_t765_m20847(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2481 *, TextEditOpU5BU5D_t2477*, int32_t, Transform_1_t2491 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisTextEditOp_t765_TisTextEditOp_t765_m20847_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t180_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1525;
extern "C" void ValueCollection__ctor_m19096_gshared (ValueCollection_t2489 * __this, Dictionary_2_t2481 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		_stringLiteral1525 = il2cpp_codegen_string_literal_from_index(1525);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2481 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t180 * L_1 = (ArgumentNullException_t180 *)il2cpp_codegen_object_new (ArgumentNullException_t180_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m557(L_1, (String_t*)_stringLiteral1525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2481 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19097_gshared (ValueCollection_t2489 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19098_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19099_gshared (ValueCollection_t2489 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t2481 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2481 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t196_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2971;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19100_gshared (ValueCollection_t2489 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral2971 = il2cpp_codegen_string_literal_from_index(2971);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t196 * L_0 = (NotSupportedException_t196 *)il2cpp_codegen_object_new (NotSupportedException_t196_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5080(L_0, (String_t*)_stringLiteral2971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19101_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2489 *)__this);
		Enumerator_t2490  L_0 = (( Enumerator_t2490  (*) (ValueCollection_t2489 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2489 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2490  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m19102_gshared (ValueCollection_t2489 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	TextEditOpU5BU5D_t2477* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (TextEditOpU5BU5D_t2477*)((TextEditOpU5BU5D_t2477*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		TextEditOpU5BU5D_t2477* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		TextEditOpU5BU5D_t2477* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2489 *)__this);
		(( void (*) (ValueCollection_t2489 *, TextEditOpU5BU5D_t2477*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2489 *)__this, (TextEditOpU5BU5D_t2477*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2481 * L_4 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2481 *)L_4);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2481 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2481 * L_7 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2491 * L_11 = (Transform_1_t2491 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2491 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2481 *)L_7);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, Transform_1_t2491 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2481 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2491 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19103_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2489 *)__this);
		Enumerator_t2490  L_0 = (( Enumerator_t2490  (*) (ValueCollection_t2489 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2489 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2490  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19104_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19105_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1236_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m19106_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1236_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m19107_gshared (ValueCollection_t2489 * __this, TextEditOpU5BU5D_t2477* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		TextEditOpU5BU5D_t2477* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2481 *)L_0);
		(( void (*) (Dictionary_2_t2481 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2481 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2481 * L_3 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		TextEditOpU5BU5D_t2477* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2491 * L_7 = (Transform_1_t2491 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2491 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2481 *)L_3);
		(( void (*) (Dictionary_2_t2481 *, TextEditOpU5BU5D_t2477*, int32_t, Transform_1_t2491 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2481 *)L_3, (TextEditOpU5BU5D_t2477*)L_4, (int32_t)L_5, (Transform_1_t2491 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2490  ValueCollection_GetEnumerator_m19108_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		Enumerator_t2490  L_1 = {0};
		(( void (*) (Enumerator_t2490 *, Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2481 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m19109_gshared (ValueCollection_t2489 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = (Dictionary_2_t2481 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2481 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count() */, (Dictionary_2_t2481 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19110_gshared (Enumerator_t2490 * __this, Dictionary_2_t2481 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2481 * L_0 = ___host;
		NullCheck((Dictionary_2_t2481 *)L_0);
		Enumerator_t2487  L_1 = (( Enumerator_t2487  (*) (Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19111_gshared (Enumerator_t2490 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m19112_gshared (Enumerator_t2490 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19113_gshared (Enumerator_t2490 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" int32_t Enumerator_get_Current_m19114_gshared (Enumerator_t2490 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2482 * L_1 = (KeyValuePair_2_t2482 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2482 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19115_gshared (Transform_1_t2491 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m19116_gshared (Transform_1_t2491 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19116((Transform_1_t2491 *)__this->___prev_9,___key, ___value, method);
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
extern TypeInfo* TextEditOp_t765_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19117_gshared (Transform_1_t2491 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2420);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t765_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m19118_gshared (Transform_1_t2491 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19119_gshared (Transform_1_t2480 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1235  Transform_1_Invoke_m19120_gshared (Transform_1_t2480 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19120((Transform_1_t2480 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1235  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* TextEditOp_t765_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19121_gshared (Transform_1_t2480 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2420);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t765_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1235  Transform_1_EndInvoke_m19122_gshared (Transform_1_t2480 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1235 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19123_gshared (Transform_1_t2492 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2482  Transform_1_Invoke_m19124_gshared (Transform_1_t2492 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19124((Transform_1_t2492 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2482  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2482  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2482  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* TextEditOp_t765_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m19125_gshared (Transform_1_t2492 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2420);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(TextEditOp_t765_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2482  Transform_1_EndInvoke_m19126_gshared (Transform_1_t2492 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2482 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19127_gshared (ShimEnumerator_t2493 * __this, Dictionary_2_t2481 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2481 * L_0 = ___host;
		NullCheck((Dictionary_2_t2481 *)L_0);
		Enumerator_t2487  L_1 = (( Enumerator_t2487  (*) (Dictionary_2_t2481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2481 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19128_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1235  ShimEnumerator_get_Entry_m19129_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2487  L_0 = (Enumerator_t2487 )(__this->___host_enumerator_0);
		Enumerator_t2487  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1235  L_3 = (DictionaryEntry_t1235 )InterfaceFuncInvoker0< DictionaryEntry_t1235  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1234_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19130_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2482  V_0 = {0};
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2482  L_1 = (( KeyValuePair_2_t2482  (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2482 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2482 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19131_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2482  V_0 = {0};
	{
		Enumerator_t2487 * L_0 = (Enumerator_t2487 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2482  L_1 = (( KeyValuePair_2_t2482  (*) (Enumerator_t2487 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2487 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2482 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2482 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern TypeInfo* DictionaryEntry_t1235_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m19132_gshared (ShimEnumerator_t2493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2493 *)__this);
		DictionaryEntry_t1235  L_0 = (DictionaryEntry_t1235 )VirtFuncInvoker0< DictionaryEntry_t1235  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry() */, (ShimEnumerator_t2493 *)__this);
		DictionaryEntry_t1235  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1235_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void EqualityComparer_1__ctor_m19133_gshared (EqualityComparer_1_t2494 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3053_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m19134_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3053_0_0_0_var = il2cpp_codegen_type_from_index(2990);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(GenericEqualityComparer_1_t3053_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t702* L_4 = (TypeU5BU5D_t702*)((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t702* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t702*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10250(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2494_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2494 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2495 * L_8 = (DefaultComparer_t2495 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2495 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2494_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19135_gshared (EqualityComparer_1_t2494 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2494 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::GetHashCode(T) */, (EqualityComparer_1_t2494 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19136_gshared (EqualityComparer_1_t2494 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2494 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::Equals(T,T) */, (EqualityComparer_1_t2494 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.TextEditor/TextEditOp>::get_Default()
extern "C" EqualityComparer_1_t2494 * EqualityComparer_1_get_Default_m19137_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2494 * L_0 = ((EqualityComparer_1_t2494_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void DefaultComparer__ctor_m19138_gshared (DefaultComparer_t2495 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2494 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2494 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.TextEditor/TextEditOp>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19139_gshared (DefaultComparer_t2495 * __this, int32_t ___obj, const MethodInfo* method)
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
extern "C" bool DefaultComparer_Equals_m19140_gshared (DefaultComparer_t2495 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif
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
struct BaseInvokableCall_t769;
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20490_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20490(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20490_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_2__ctor_m19191_gshared (InvokableCall_2_t2501 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t769 *)__this);
		BaseInvokableCall__ctor_m3929((BaseInvokableCall_t769 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_3 = ___target;
		MethodInfo_t * L_4 = ___theFunction;
		Delegate_t513 * L_5 = Delegate_CreateDelegate_m4124(NULL /*static, unused*/, (Type_t *)L_2, (Object_t *)L_3, (MethodInfo_t *)L_4, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_2_t2500 *)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" void InvokableCall_2_Invoke_m19192_gshared (InvokableCall_2_t2501 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t274 * L_1 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_1, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t146* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t146* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_2_t2500 * L_6 = (UnityAction_2_t2500 *)(__this->___Delegate_0);
		bool L_7 = BaseInvokableCall_AllowInvoke_m3930(NULL /*static, unused*/, (Delegate_t513 *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		UnityAction_2_t2500 * L_8 = (UnityAction_2_t2500 *)(__this->___Delegate_0);
		ObjectU5BU5D_t146* L_9 = ___args;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		ObjectU5BU5D_t146* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((UnityAction_2_t2500 *)L_8);
		(( void (*) (UnityAction_2_t2500 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((UnityAction_2_t2500 *)L_8, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_10)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m19193_gshared (InvokableCall_2_t2501 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t2500 * L_0 = (UnityAction_2_t2500 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4123((Delegate_t513 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_2_t2500 * L_3 = (UnityAction_2_t2500 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4122((Delegate_t513 *)L_3, /*hidden argument*/NULL);
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
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_2__ctor_m19194_gshared (UnityAction_2_t2500 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" void UnityAction_2_Invoke_m19195_gshared (UnityAction_2_t2500 * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_2_Invoke_m19195((UnityAction_2_t2500 *)__this->___prev_9,___arg0, ___arg1, method);
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
extern "C" Object_t * UnityAction_2_BeginInvoke_m19196_gshared (UnityAction_2_t2500 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_2_EndInvoke_m19197_gshared (UnityAction_2_t2500 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_gen.h"
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_genMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_3__ctor_m19198_gshared (InvokableCall_3_t2503 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t769 *)__this);
		BaseInvokableCall__ctor_m3929((BaseInvokableCall_t769 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_3_t2502 * L_2 = (UnityAction_3_t2502 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t513 * L_6 = Delegate_CreateDelegate_m4124(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t513 * L_7 = Delegate_Combine_m2393(NULL /*static, unused*/, (Delegate_t513 *)L_2, (Delegate_t513 *)((UnityAction_3_t2502 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_3_t2502 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" void InvokableCall_3_Invoke_m19199_gshared (InvokableCall_3_t2503 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t274 * L_1 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_1, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t146* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t146* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t146* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		UnityAction_3_t2502 * L_8 = (UnityAction_3_t2502 *)(__this->___Delegate_0);
		bool L_9 = BaseInvokableCall_AllowInvoke_m3930(NULL /*static, unused*/, (Delegate_t513 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		UnityAction_3_t2502 * L_10 = (UnityAction_3_t2502 *)(__this->___Delegate_0);
		ObjectU5BU5D_t146* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		ObjectU5BU5D_t146* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		int32_t L_14 = 1;
		ObjectU5BU5D_t146* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		NullCheck((UnityAction_3_t2502 *)L_10);
		(( void (*) (UnityAction_3_t2502 *, Object_t *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((UnityAction_3_t2502 *)L_10, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m19200_gshared (InvokableCall_3_t2503 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t2502 * L_0 = (UnityAction_3_t2502 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4123((Delegate_t513 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_3_t2502 * L_3 = (UnityAction_3_t2502 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4122((Delegate_t513 *)L_3, /*hidden argument*/NULL);
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
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_3__ctor_m19201_gshared (UnityAction_3_t2502 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m19202_gshared (UnityAction_3_t2502 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_3_Invoke_m19202((UnityAction_3_t2502 *)__this->___prev_9,___arg0, ___arg1, ___arg2, method);
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
extern "C" Object_t * UnityAction_3_BeginInvoke_m19203_gshared (UnityAction_3_t2502 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m19204_gshared (UnityAction_3_t2502 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_gen.h"
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_genMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_4__ctor_m19205_gshared (InvokableCall_4_t2505 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t769 *)__this);
		BaseInvokableCall__ctor_m3929((BaseInvokableCall_t769 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_4_t2504 * L_2 = (UnityAction_4_t2504 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t513 * L_6 = Delegate_CreateDelegate_m4124(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t513 * L_7 = Delegate_Combine_m2393(NULL /*static, unused*/, (Delegate_t513 *)L_2, (Delegate_t513 *)((UnityAction_4_t2504 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_4_t2504 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" void InvokableCall_4_Invoke_m19206_gshared (InvokableCall_4_t2505 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t274 * L_1 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_1, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t146* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t146* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t146* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ObjectU5BU5D_t146* L_8 = ___args;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		int32_t L_9 = 3;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		UnityAction_4_t2504 * L_10 = (UnityAction_4_t2504 *)(__this->___Delegate_0);
		bool L_11 = BaseInvokableCall_AllowInvoke_m3930(NULL /*static, unused*/, (Delegate_t513 *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		UnityAction_4_t2504 * L_12 = (UnityAction_4_t2504 *)(__this->___Delegate_0);
		ObjectU5BU5D_t146* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		ObjectU5BU5D_t146* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		int32_t L_16 = 1;
		ObjectU5BU5D_t146* L_17 = ___args;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		int32_t L_18 = 2;
		ObjectU5BU5D_t146* L_19 = ___args;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		NullCheck((UnityAction_4_t2504 *)L_12);
		(( void (*) (UnityAction_4_t2504 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((UnityAction_4_t2504 *)L_12, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
	}

IL_006f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m19207_gshared (InvokableCall_4_t2505 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t2504 * L_0 = (UnityAction_4_t2504 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4123((Delegate_t513 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_4_t2504 * L_3 = (UnityAction_4_t2504 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4122((Delegate_t513 *)L_3, /*hidden argument*/NULL);
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
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_4__ctor_m19208_gshared (UnityAction_4_t2504 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m19209_gshared (UnityAction_4_t2504 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_4_Invoke_m19209((UnityAction_4_t2504 *)__this->___prev_9,___arg0, ___arg1, ___arg2, ___arg3, method);
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
extern "C" Object_t * UnityAction_4_BeginInvoke_m19210_gshared (UnityAction_4_t2504 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	__d_args[3] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m19211_gshared (UnityAction_4_t2504 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m19212_gshared (CachedInvokableCall_1_t2506 * __this, Object_t73 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 1));
		Object_t73 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2092 *)__this);
		(( void (*) (InvokableCall_1_t2092 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2092 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		Object_t * L_3 = ___argument;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m19213_gshared (CachedInvokableCall_1_t2506 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t146* L_0 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2092 *)__this);
		(( void (*) (InvokableCall_1_t2092 *, ObjectU5BU5D_t146*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2092 *)__this, (ObjectU5BU5D_t146*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m4125_gshared (CachedInvokableCall_1_t867 * __this, Object_t73 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 1));
		Object_t73 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2248 *)__this);
		(( void (*) (InvokableCall_1_t2248 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2248 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		float L_3 = ___argument;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m19214_gshared (CachedInvokableCall_1_t867 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t146* L_0 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2248 *)__this);
		(( void (*) (InvokableCall_1_t2248 *, ObjectU5BU5D_t146*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2248 *)__this, (ObjectU5BU5D_t146*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4MethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m4126_gshared (CachedInvokableCall_1_t868 * __this, Object_t73 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 1));
		Object_t73 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2507 *)__this);
		(( void (*) (InvokableCall_1_t2507 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2507 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		int32_t L_3 = ___argument;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m19215_gshared (CachedInvokableCall_1_t868 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t146* L_0 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2507 *)__this);
		(( void (*) (InvokableCall_1_t2507 *, ObjectU5BU5D_t146*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2507 *)__this, (ObjectU5BU5D_t146*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11MethodDeclarations.h"
struct BaseInvokableCall_t769;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t149_m20852_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t149_m20852(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t149_m20852_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m19216_gshared (InvokableCall_1_t2507 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t769 *)__this);
		BaseInvokableCall__ctor_m3929((BaseInvokableCall_t769 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t2508 * L_2 = (UnityAction_1_t2508 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t513 * L_6 = Delegate_CreateDelegate_m4124(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t513 * L_7 = Delegate_Combine_m2393(NULL /*static, unused*/, (Delegate_t513 *)L_2, (Delegate_t513 *)((UnityAction_1_t2508 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t2508 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m19217_gshared (InvokableCall_1_t2507 * __this, UnityAction_1_t2508 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t769 *)__this);
		BaseInvokableCall__ctor_m3928((BaseInvokableCall_t769 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2508 * L_0 = (UnityAction_1_t2508 *)(__this->___Delegate_0);
		UnityAction_1_t2508 * L_1 = ___callback;
		Delegate_t513 * L_2 = Delegate_Combine_m2393(NULL /*static, unused*/, (Delegate_t513 *)L_0, (Delegate_t513 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t2508 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" void InvokableCall_1_Invoke_m19218_gshared (InvokableCall_1_t2507 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t146* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t274 * L_1 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m965(L_1, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t146* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t2508 * L_4 = (UnityAction_1_t2508 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3930(NULL /*static, unused*/, (Delegate_t513 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2508 * L_6 = (UnityAction_1_t2508 *)(__this->___Delegate_0);
		ObjectU5BU5D_t146* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t2508 *)L_6);
		(( void (*) (UnityAction_1_t2508 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t2508 *)L_6, (int32_t)((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m19219_gshared (InvokableCall_1_t2507 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2508 * L_0 = (UnityAction_1_t2508 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4123((Delegate_t513 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2508 * L_3 = (UnityAction_1_t2508 *)(__this->___Delegate_0);
		NullCheck((Delegate_t513 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4122((Delegate_t513 *)L_3, /*hidden argument*/NULL);
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
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m19220_gshared (UnityAction_1_t2508 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m19221_gshared (UnityAction_1_t2508 * __this, int32_t ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m19221((UnityAction_1_t2508 *)__this->___prev_9,___arg0, method);
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
extern TypeInfo* Int32_t149_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m19222_gshared (UnityAction_1_t2508 * __this, int32_t ___arg0, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t149_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m19223_gshared (UnityAction_1_t2508 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m4128_gshared (CachedInvokableCall_1_t870 * __this, Object_t73 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 1));
		Object_t73 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t2270 *)__this);
		(( void (*) (InvokableCall_1_t2270 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t2270 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t146* L_2 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		bool L_3 = ___argument;
		bool L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m19229_gshared (CachedInvokableCall_1_t870 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t146* L_0 = (ObjectU5BU5D_t146*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t2270 *)__this);
		(( void (*) (InvokableCall_1_t2270 *, ObjectU5BU5D_t146*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t2270 *)__this, (ObjectU5BU5D_t146*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_genMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_2__ctor_m19420_gshared (UnityEvent_2_t2520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 2));
		NullCheck((UnityEventBase_t777 *)__this);
		UnityEventBase__ctor_m3951((UnityEventBase_t777 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m19421_gshared (UnityEvent_2_t2520 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t702* L_2 = (TypeU5BU5D_t702*)((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t702* L_4 = (TypeU5BU5D_t702*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3962(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t702*)L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t769 * UnityEvent_2_GetDelegate_m19422_gshared (UnityEvent_2_t2520 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_2_t2501 * L_2 = (InvokableCall_2_t2501 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_2_t2501 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_genMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_3__ctor_m19423_gshared (UnityEvent_3_t2521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 3));
		NullCheck((UnityEventBase_t777 *)__this);
		UnityEventBase__ctor_m3951((UnityEventBase_t777 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m19424_gshared (UnityEvent_3_t2521 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t702* L_2 = (TypeU5BU5D_t702*)((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t702* L_4 = (TypeU5BU5D_t702*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t702* L_6 = (TypeU5BU5D_t702*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m3962(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t702*)L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t769 * UnityEvent_3_GetDelegate_m19425_gshared (UnityEvent_3_t2521 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_3_t2503 * L_2 = (InvokableCall_3_t2503 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_3_t2503 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_genMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t146_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_4__ctor_m19426_gshared (UnityEvent_4_t2522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t146*)SZArrayNew(ObjectU5BU5D_t146_il2cpp_TypeInfo_var, 4));
		NullCheck((UnityEventBase_t777 *)__this);
		UnityEventBase__ctor_m3951((UnityEventBase_t777 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m19427_gshared (UnityEvent_4_t2522 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t702* L_2 = (TypeU5BU5D_t702*)((TypeU5BU5D_t702*)SZArrayNew(TypeU5BU5D_t702_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t702* L_4 = (TypeU5BU5D_t702*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t702* L_6 = (TypeU5BU5D_t702*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		TypeU5BU5D_t702* L_8 = (TypeU5BU5D_t702*)L_6;
		Type_t * L_9 = Type_GetTypeFromHandle_m493(NULL /*static, unused*/, (RuntimeTypeHandle_t1258 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 3)) = (Type_t *)L_9;
		MethodInfo_t * L_10 = UnityEventBase_GetValidMethodInfo_m3962(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t702*)L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t769 * UnityEvent_4_GetDelegate_m19428_gshared (UnityEvent_4_t2522 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_4_t2505 * L_2 = (InvokableCall_4_t2505 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (InvokableCall_4_t2505 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_66.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_66MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t828_m20854_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t828_m20854(__this, p0, method) (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t828_m20854_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19434_gshared (InternalEnumerator_1_t2524 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19435_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (InternalEnumerator_1_t2524 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2524 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19436_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19437_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" uint32_t InternalEnumerator_1_get_Current_m19438_gshared (InternalEnumerator_1_t2524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint32_t L_8 = (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"


// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisClientCertificateType_t1011_m20865_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisClientCertificateType_t1011_m20865(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisClientCertificateType_t1011_m20865_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19449_gshared (InternalEnumerator_1_t2527 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19450_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2527 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2527 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19451_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19452_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" int32_t InternalEnumerator_1_get_Current_m19453_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "Mono.Security_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// System.UInt16
#include "mscorlib_System_UInt16.h"


// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C" uint16_t Array_InternalArray__get_Item_TisUInt16_t826_m20876_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt16_t826_m20876(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt16_t826_m20876_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.UInt16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19454_gshared (InternalEnumerator_1_t2528 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19455_gshared (InternalEnumerator_1_t2528 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (( uint16_t (*) (InternalEnumerator_1_t2528 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2528 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19456_gshared (InternalEnumerator_1_t2528 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19457_gshared (InternalEnumerator_1_t2528 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m6088((Array_t *)L_1, /*hidden argument*/NULL);
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
extern TypeInfo* InvalidOperationException_t1063_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2961;
extern Il2CppCodeGenString* _stringLiteral2962;
extern "C" uint16_t InternalEnumerator_1_get_Current_m19458_gshared (InternalEnumerator_1_t2528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(656);
		_stringLiteral2961 = il2cpp_codegen_string_literal_from_index(2961);
		_stringLiteral2962 = il2cpp_codegen_string_literal_from_index(2962);
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
		InvalidOperationException_t1063 * L_1 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_1, (String_t*)_stringLiteral2961, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
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
		InvalidOperationException_t1063 * L_3 = (InvalidOperationException_t1063 *)il2cpp_codegen_object_new (InvalidOperationException_t1063_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5153(L_3, (String_t*)_stringLiteral2962, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m6088((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint16_t L_8 = (( uint16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
