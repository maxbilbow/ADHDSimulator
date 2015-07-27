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

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2049  Array_InternalArray__get_Item_TisKeyValuePair_2_t2049_m20644_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2049_m20644(__this, p0, method) (( KeyValuePair_2_t2049  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2049_m20644_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12426_gshared (InternalEnumerator_1_t2050 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12427_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = (( KeyValuePair_2_t2049  (*) (InternalEnumerator_1_t2050 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2050 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2049  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12428_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12429_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" KeyValuePair_2_t2049  InternalEnumerator_1_get_Current_m12430_gshared (InternalEnumerator_1_t2050 * __this, const MethodInfo* method)
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
		KeyValuePair_2_t2049  L_8 = (( KeyValuePair_2_t2049  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void KeyValuePair_2__ctor_m12431_gshared (KeyValuePair_2_t2049 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2049 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2049 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2049 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2049 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12432_gshared (KeyValuePair_2_t2049 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12433_gshared (KeyValuePair_2_t2049 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m12434_gshared (KeyValuePair_2_t2049 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12435_gshared (KeyValuePair_2_t2049 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral534;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" String_t* KeyValuePair_2_ToString_m12436_gshared (KeyValuePair_2_t2049 * __this, const MethodInfo* method)
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
	Object_t * V_1 = {0};
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2049 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2049 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_8 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2049 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2049 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_9;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
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
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2054;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20655_gshared (Dictionary_2_t2047 * __this, Array_t * p0, int32_t p1, Transform_1_t2054 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20655(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, Transform_1_t2054 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20655_gshared)(__this, p0, p1, p2, method)
struct ObjectU5BU5D_t148;
struct Transform_1_t2054;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20656_gshared (Dictionary_2_t2047 * __this, ObjectU5BU5D_t148* p0, int32_t p1, Transform_1_t2054 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20656(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2047 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2054 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20656_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void KeyCollection__ctor_m12437_gshared (KeyCollection_t2051 * __this, Dictionary_2_t2047 * ___dictionary, const MethodInfo* method)
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
		Dictionary_2_t2047 * L_0 = ___dictionary;
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
		Dictionary_2_t2047 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m12438_gshared (KeyCollection_t2051 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m12439_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m12440_gshared (KeyCollection_t2051 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2047 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2047 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m12441_gshared (KeyCollection_t2051 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m12442_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2051 *)__this);
		Enumerator_t2052  L_0 = (( Enumerator_t2052  (*) (KeyCollection_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2052  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m12443_gshared (KeyCollection_t2051 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
		NullCheck((KeyCollection_t2051 *)__this);
		(( void (*) (KeyCollection_t2051 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2051 *)__this, (ObjectU5BU5D_t148*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2047 * L_4 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2047 *)L_4);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2047 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2047 * L_7 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2054 * L_11 = (Transform_1_t2054 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2054 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2047 *)L_7);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, Transform_1_t2054 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2047 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2054 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m12444_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2051 *)__this);
		Enumerator_t2052  L_0 = (( Enumerator_t2052  (*) (KeyCollection_t2051 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2051 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2052  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m12445_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m12446_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m12447_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void KeyCollection_CopyTo_m12448_gshared (KeyCollection_t2051 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2047 *)L_0);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2047 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2047 * L_3 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2054 * L_7 = (Transform_1_t2054 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2054 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2047 *)L_3);
		(( void (*) (Dictionary_2_t2047 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2054 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2047 *)L_3, (ObjectU5BU5D_t148*)L_4, (int32_t)L_5, (Transform_1_t2054 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2052  KeyCollection_GetEnumerator_m12449_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Enumerator_t2052  L_1 = {0};
		(( void (*) (Enumerator_t2052 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m12450_gshared (KeyCollection_t2051 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2047 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2047 *)L_0);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
extern "C" void Enumerator__ctor_m12451_gshared (Enumerator_t2052 * __this, Dictionary_2_t2047 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = ___host;
		NullCheck((Dictionary_2_t2047 *)L_0);
		Enumerator_t2053  L_1 = (( Enumerator_t2053  (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12452_gshared (Enumerator_t2052 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12453_gshared (Enumerator_t2052 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12454_gshared (Enumerator_t2052 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m12455_gshared (Enumerator_t2052 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2049 * L_1 = (KeyValuePair_2_t2049 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2049 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
extern "C" void Enumerator__ctor_m12456_gshared (Enumerator_t2053 * __this, Dictionary_2_t2047 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2047 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12457_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2049  L_0 = (KeyValuePair_2_t2049 )(__this->___current_3);
		KeyValuePair_2_t2049  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12458_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2049 * L_0 = (KeyValuePair_2_t2049 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2049 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2049 * L_2 = (KeyValuePair_2_t2049 *)&(__this->___current_3);
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2049 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		DictionaryEntry_t1247  L_4 = {0};
		DictionaryEntry__ctor_m6108(&L_4, (Object_t *)L_1, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12459_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12460_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12461_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2047 * L_4 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
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
		Dictionary_2_t2047 * L_8 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t148* L_9 = (ObjectU5BU5D_t148*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2047 * L_12 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t148* L_13 = (ObjectU5BU5D_t148*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2049  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2049 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2047 * L_18 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2049  Enumerator_get_Current_m12462_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2049  L_0 = (KeyValuePair_2_t2049 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12463_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2049 * L_0 = (KeyValuePair_2_t2049 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2049 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12464_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2049 * L_0 = (KeyValuePair_2_t2049 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2049 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2988;
extern "C" void Enumerator_VerifyState_m12465_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
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
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
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
		Dictionary_2_t2047 * L_2 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2989;
extern "C" void Enumerator_VerifyCurrent_m12466_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2989 = il2cpp_codegen_string_literal_from_index(2989);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2053 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12467_gshared (Enumerator_t2053 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2047 *)NULL;
		return;
	}
}
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12468_gshared (Transform_1_t2054 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m12469_gshared (Transform_1_t2054 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12469((Transform_1_t2054 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m12470_gshared (Transform_1_t2054 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m12471_gshared (Transform_1_t2054 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void ValueCollection__ctor_m12472_gshared (ValueCollection_t2055 * __this, Dictionary_2_t2047 * ___dictionary, const MethodInfo* method)
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
		Dictionary_2_t2047 * L_0 = ___dictionary;
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
		Dictionary_2_t2047 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12473_gshared (ValueCollection_t2055 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12474_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12475_gshared (ValueCollection_t2055 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2047 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2047 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12476_gshared (ValueCollection_t2055 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12477_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2055 *)__this);
		Enumerator_t2056  L_0 = (( Enumerator_t2056  (*) (ValueCollection_t2055 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2055 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2056  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12478_gshared (ValueCollection_t2055 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
		NullCheck((ValueCollection_t2055 *)__this);
		(( void (*) (ValueCollection_t2055 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2055 *)__this, (ObjectU5BU5D_t148*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2047 * L_4 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2047 *)L_4);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2047 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2047 * L_7 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2054 * L_11 = (Transform_1_t2054 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2054 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2047 *)L_7);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, Transform_1_t2054 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2047 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2054 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12479_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2055 *)__this);
		Enumerator_t2056  L_0 = (( Enumerator_t2056  (*) (ValueCollection_t2055 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2055 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2056  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12480_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12481_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12482_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m12483_gshared (ValueCollection_t2055 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2047 *)L_0);
		(( void (*) (Dictionary_2_t2047 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2047 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2047 * L_3 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2054 * L_7 = (Transform_1_t2054 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2054 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2047 *)L_3);
		(( void (*) (Dictionary_2_t2047 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2054 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2047 *)L_3, (ObjectU5BU5D_t148*)L_4, (int32_t)L_5, (Transform_1_t2054 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2056  ValueCollection_GetEnumerator_m12484_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		Enumerator_t2056  L_1 = {0};
		(( void (*) (Enumerator_t2056 *, Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m12485_gshared (ValueCollection_t2055 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = (Dictionary_2_t2047 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2047 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2047 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
extern "C" void Enumerator__ctor_m12486_gshared (Enumerator_t2056 * __this, Dictionary_2_t2047 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2047 * L_0 = ___host;
		NullCheck((Dictionary_2_t2047 *)L_0);
		Enumerator_t2053  L_1 = (( Enumerator_t2053  (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12487_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12488_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12489_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m12490_gshared (Enumerator_t2056 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2049 * L_1 = (KeyValuePair_2_t2049 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2049 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12491_gshared (Transform_1_t2048 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1247  Transform_1_Invoke_m12492_gshared (Transform_1_t2048 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12492((Transform_1_t2048 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m12493_gshared (Transform_1_t2048 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1247  Transform_1_EndInvoke_m12494_gshared (Transform_1_t2048 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1247 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12495_gshared (Transform_1_t2057 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2049  Transform_1_Invoke_m12496_gshared (Transform_1_t2057 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12496((Transform_1_t2057 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2049  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2049  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2049  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m12497_gshared (Transform_1_t2057 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2049  Transform_1_EndInvoke_m12498_gshared (Transform_1_t2057 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2049 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m12499_gshared (ShimEnumerator_t2058 * __this, Dictionary_2_t2047 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2047 * L_0 = ___host;
		NullCheck((Dictionary_2_t2047 *)L_0);
		Enumerator_t2053  L_1 = (( Enumerator_t2053  (*) (Dictionary_2_t2047 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2047 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12500_gshared (ShimEnumerator_t2058 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m12501_gshared (ShimEnumerator_t2058 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2053  L_0 = (Enumerator_t2053 )(__this->___host_enumerator_0);
		Enumerator_t2053  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1247  L_3 = (DictionaryEntry_t1247 )InterfaceFuncInvoker0< DictionaryEntry_t1247  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12502_gshared (ShimEnumerator_t2058 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2049  V_0 = {0};
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2049  L_1 = (( KeyValuePair_2_t2049  (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2049 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2049 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12503_gshared (ShimEnumerator_t2058 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2049  V_0 = {0};
	{
		Enumerator_t2053 * L_0 = (Enumerator_t2053 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2049  L_1 = (( KeyValuePair_2_t2049  (*) (Enumerator_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2053 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2049 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2049 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m12504_gshared (ShimEnumerator_t2058 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2058 *)__this);
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry() */, (ShimEnumerator_t2058 *)__this);
		DictionaryEntry_t1247  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1247_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_genMethodDeclarations.h"
// System.Array/InternalEnumerator`1<UnityEngine.Touch>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// System.Array/InternalEnumerator`1<UnityEngine.Touch>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12MethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Touch>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Touch>(System.Int32)
extern "C" Touch_t188  Array_InternalArray__get_Item_TisTouch_t188_m20663_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTouch_t188_m20663(__this, p0, method) (( Touch_t188  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTouch_t188_m20663_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12856_gshared (InternalEnumerator_1_t2079 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Touch>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12857_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method)
{
	{
		Touch_t188  L_0 = (( Touch_t188  (*) (InternalEnumerator_1_t2079 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2079 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Touch_t188  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12858_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Touch>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12859_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Touch>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" Touch_t188  InternalEnumerator_1_get_Current_m12860_gshared (InternalEnumerator_1_t2079 * __this, const MethodInfo* method)
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
		Touch_t188  L_8 = (( Touch_t188  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15MethodDeclarations.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t198  Array_InternalArray__get_Item_TisKeyframe_t198_m20675_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t198_m20675(__this, p0, method) (( Keyframe_t198  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t198_m20675_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12969_gshared (InternalEnumerator_1_t2087 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12970_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method)
{
	{
		Keyframe_t198  L_0 = (( Keyframe_t198  (*) (InternalEnumerator_1_t2087 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2087 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t198  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12971_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12972_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" Keyframe_t198  InternalEnumerator_1_get_Current_m12973_gshared (InternalEnumerator_1_t2087 * __this, const MethodInfo* method)
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
		Keyframe_t198  L_8 = (( Keyframe_t198  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" Vector3_t42  Array_InternalArray__get_Item_TisVector3_t42_m20688_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector3_t42_m20688(__this, p0, method) (( Vector3_t42  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector3_t42_m20688_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13086_gshared (InternalEnumerator_1_t2095 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13087_gshared (InternalEnumerator_1_t2095 * __this, const MethodInfo* method)
{
	{
		Vector3_t42  L_0 = (( Vector3_t42  (*) (InternalEnumerator_1_t2095 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2095 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3_t42  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13088_gshared (InternalEnumerator_1_t2095 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13089_gshared (InternalEnumerator_1_t2095 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" Vector3_t42  InternalEnumerator_1_get_Current_m13090_gshared (InternalEnumerator_1_t2095 * __this, const MethodInfo* method)
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
		Vector3_t42  L_8 = (( Vector3_t42  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20MethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t176_m20699_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t176_m20699(__this, p0, method) (( float (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSingle_t176_m20699_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13091_gshared (InternalEnumerator_1_t2096 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13092_gshared (InternalEnumerator_1_t2096 * __this, const MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t2096 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2096 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13093_gshared (InternalEnumerator_1_t2096 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13094_gshared (InternalEnumerator_1_t2096 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" float InternalEnumerator_1_get_Current_m13095_gshared (InternalEnumerator_1_t2096 * __this, const MethodInfo* method)
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
		float L_8 = (( float (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// Procrastinate.ABonus`2<System.Object,System.Object>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_gen_0.h"
// Procrastinate.ABonus`2<System.Object,System.Object>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_gen_0MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
struct Object_t;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m540_gshared (Component_t178 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m540(__this, method) (( Object_t * (*) (Component_t178 *, const MethodInfo*))Component_GetComponent_TisObject_t_m540_gshared)(__this, method)
struct Object_t;
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedData.h"
// Declaration !!0 RMX.SavedData::Get<System.Single>(System.Object)
// !!0 RMX.SavedData::Get<System.Single>(System.Object)
extern "C" float SavedData_Get_TisSingle_t176_m946_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisSingle_t176_m946(__this /* static, unused */, p0, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisSingle_t176_m946_gshared)(__this /* static, unused */, p0, method)
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Boolean>(System.Object)
// !!0 RMX.SavedData::Get<System.Boolean>(System.Object)
extern "C" bool SavedData_Get_TisBoolean_t156_m949_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisBoolean_t156_m949(__this /* static, unused */, p0, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisBoolean_t156_m949_gshared)(__this /* static, unused */, p0, method)
struct String_t;
struct Object_t;
struct Object_t;
// Declaration !!0 RMX.SavedData::Get<System.Object>(System.Object)
// !!0 RMX.SavedData::Get<System.Object>(System.Object)
extern "C" Object_t * SavedData_Get_TisObject_t_m20662_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define SavedData_Get_TisObject_t_m20662(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisObject_t_m20662_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 RMX.SavedData::Get<System.String>(System.Object)
// !!0 RMX.SavedData::Get<System.String>(System.Object)
#define SavedData_Get_TisString_t_m21407(__this /* static, unused */, p0, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))SavedData_Get_TisObject_t_m20662_gshared)(__this /* static, unused */, p0, method)
// System.Void Procrastinate.ABonus`2<System.Object,System.Object>::.ctor()
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
extern TypeInfo* RMXObject_t31_il2cpp_TypeInfo_var;
extern "C" void ABonus_2__ctor_m13096_gshared (ABonus_2_t2097 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXObject_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___deactivateOnPause_7 = 1;
		__this->___min_10 = (30.0f);
		__this->___max_11 = (45.0f);
		__this->___probability_13 = (0.5f);
		NullCheck((RMXObject_t31 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t31_il2cpp_TypeInfo_var);
		RMXObject__ctor_m71((RMXObject_t31 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Object>::SetComponent(TComponent)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void ABonus_2_SetComponent_m13097_gshared (ABonus_2_t2097 * __this, Object_t * ___component, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___component;
		__this->___component_12 = L_0;
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Object>::Start()
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2990;
extern "C" void ABonus_2_Start_m13098_gshared (ABonus_2_t2097 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral2990 = il2cpp_codegen_string_literal_from_index(2990);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ABonus_2_t2097 * G_B2_0 = {0};
	ABonus_2_t2097 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	ABonus_2_t2097 * G_B3_1 = {0};
	{
		float L_0 = (float)(__this->___min_10);
		float L_1 = (float)(__this->___max_11);
		G_B1_0 = ((ABonus_2_t2097 *)(__this));
		if ((!(((float)L_0) > ((float)L_1))))
		{
			G_B2_0 = ((ABonus_2_t2097 *)(__this));
			goto IL_001d;
		}
	}
	{
		float L_2 = (float)(__this->___min_10);
		G_B3_0 = L_2;
		G_B3_1 = ((ABonus_2_t2097 *)(G_B1_0));
		goto IL_002e;
	}

IL_001d:
	{
		float L_3 = (float)(__this->___min_10);
		float L_4 = (float)(__this->___max_11);
		float L_5 = Random_Range_m687(NULL /*static, unused*/, (float)L_3, (float)L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = ((ABonus_2_t2097 *)(G_B2_0));
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___threshold_9 = G_B3_0;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			NullCheck((Component_t178 *)__this);
			Object_t * L_6 = (( Object_t * (*) (Component_t178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Component_t178 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			NullCheck((ABonus_2_t2097 *)__this);
			VirtActionInvoker1< Object_t * >::Invoke(21 /* System.Void Procrastinate.ABonus`2<System.Object,System.Object>::SetComponent(TComponent) */, (ABonus_2_t2097 *)__this, (Object_t *)L_6);
			IL2CPP_LEAVE(0x77, FINALLY_0056);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0044;
			throw e;
		}

CATCH_0044:
		{ // begin catch(System.Object)
			NullCheck((ABonus_2_t2097 *)__this);
			VirtActionInvoker1< Object_t * >::Invoke(21 /* System.Void Procrastinate.ABonus`2<System.Object,System.Object>::SetComponent(TComponent) */, (ABonus_2_t2097 *)__this, (Object_t *)((Object_t *)Castclass(NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
			IL2CPP_LEAVE(0x77, FINALLY_0056);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_7 = (Object_t *)(__this->___component_12);
			bool L_8 = Object_op_Equality_m473(NULL /*static, unused*/, (Object_t76 *)L_7, (Object_t76 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0076;
			}
		}

IL_006c:
		{
			MonoBehaviour_print_m893(NULL /*static, unused*/, (Object_t *)_stringLiteral2990, /*hidden argument*/NULL);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0077:
	{
		NullCheck((ABonus_2_t2097 *)__this);
		VirtActionInvoker0::Invoke(23 /* System.Void Procrastinate.ABonus`2<System.Object,System.Object>::Deactivate() */, (ABonus_2_t2097 *)__this);
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Object>::Update()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern const Il2CppType* Single_t176_0_0_0_var;
extern const Il2CppType* Boolean_t156_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisString_t_m21407_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral118;
extern "C" void ABonus_2_Update_m13099_gshared (ABonus_2_t2097 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t176_0_0_0_var = il2cpp_codegen_type_from_index(60);
		Boolean_t156_0_0_0_var = il2cpp_codegen_type_from_index(20);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		SavedData_Get_TisString_t_m21407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)), /*hidden argument*/NULL);
			Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(Single_t176_0_0_0_var), /*hidden argument*/NULL);
			if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
			{
				goto IL_0045;
			}
		}

IL_0019:
		{
			NullCheck((ABonus_2_t2097 *)__this);
			bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean Procrastinate.ABonus`2<System.Object,System.Object>::get_isBonusActive() */, (ABonus_2_t2097 *)__this);
			if (L_2)
			{
				goto IL_0045;
			}
		}

IL_0024:
		{
			int32_t L_3 = (int32_t)(__this->___key_8);
			int32_t L_4 = L_3;
			Object_t * L_5 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_4);
			float L_6 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
			float L_7 = (float)(__this->___threshold_9);
			if ((!(((float)L_6) > ((float)L_7))))
			{
				goto IL_0045;
			}
		}

IL_003f:
		{
			NullCheck((ABonus_2_t2097 *)__this);
			VirtActionInvoker0::Invoke(22 /* System.Void Procrastinate.ABonus`2<System.Object,System.Object>::Activate() */, (ABonus_2_t2097 *)__this);
		}

IL_0045:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_8 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)), /*hidden argument*/NULL);
			Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(Boolean_t156_0_0_0_var), /*hidden argument*/NULL);
			if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
			{
				goto IL_0084;
			}
		}

IL_005e:
		{
			NullCheck((ABonus_2_t2097 *)__this);
			bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean Procrastinate.ABonus`2<System.Object,System.Object>::get_isBonusActive() */, (ABonus_2_t2097 *)__this);
			if (L_10)
			{
				goto IL_0084;
			}
		}

IL_0069:
		{
			int32_t L_11 = (int32_t)(__this->___key_8);
			int32_t L_12 = L_11;
			Object_t * L_13 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_12);
			bool L_14 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, (Object_t *)L_13, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
			if (!L_14)
			{
				goto IL_0084;
			}
		}

IL_007e:
		{
			NullCheck((ABonus_2_t2097 *)__this);
			VirtActionInvoker0::Invoke(22 /* System.Void Procrastinate.ABonus`2<System.Object,System.Object>::Activate() */, (ABonus_2_t2097 *)__this);
		}

IL_0084:
		{
			goto IL_00be;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0089;
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Object)
		int32_t L_15 = (int32_t)(__this->___key_8);
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_16);
		NullCheck((Enum_t6 *)L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t6 *)L_17);
		int32_t L_19 = (int32_t)(__this->___key_8);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = SavedData_Get_TisString_t_m21407(NULL /*static, unused*/, (Object_t *)L_21, /*hidden argument*/SavedData_Get_TisString_t_m21407_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m440(NULL /*static, unused*/, (String_t*)L_18, (String_t*)_stringLiteral118, (String_t*)L_22, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, (Object_t *)L_23, /*hidden argument*/NULL);
		goto IL_00be;
	} // end catch (depth: 1)

IL_00be:
	{
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Object>::Activate()
extern "C" void ABonus_2_Activate_m13100_gshared (ABonus_2_t2097 * __this, const MethodInfo* method)
{
	{
		__this->___isActive_6 = 1;
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Object>::Deactivate()
extern "C" void ABonus_2_Deactivate_m13101_gshared (ABonus_2_t2097 * __this, const MethodInfo* method)
{
	{
		__this->___isActive_6 = 0;
		return;
	}
}
// System.Boolean Procrastinate.ABonus`2<System.Object,System.Object>::get_isBonusActive()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" bool ABonus_2_get_isBonusActive_m13102_gshared (ABonus_2_t2097 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		NullCheck((Behaviour_t189 *)__this);
		bool L_0 = Behaviour_get_isActiveAndEnabled_m2285((Behaviour_t189 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = (bool)(__this->___isActive_6);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return G_B3_0;
	}
}
// Procrastinate.ABonus`2<System.Object,System.Single>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_gen_1.h"
// Procrastinate.ABonus`2<System.Object,System.Single>
#include "AssemblyU2DCSharp_Procrastinate_ABonus_2_gen_1MethodDeclarations.h"
// System.Void Procrastinate.ABonus`2<System.Object,System.Single>::.ctor()
// RMX.RMXObject
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_RMXObjectMethodDeclarations.h"
extern TypeInfo* RMXObject_t31_il2cpp_TypeInfo_var;
extern "C" void ABonus_2__ctor_m13103_gshared (ABonus_2_t2098 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RMXObject_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___deactivateOnPause_7 = 1;
		__this->___min_10 = (30.0f);
		__this->___max_11 = (45.0f);
		__this->___probability_13 = (0.5f);
		NullCheck((RMXObject_t31 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(RMXObject_t31_il2cpp_TypeInfo_var);
		RMXObject__ctor_m71((RMXObject_t31 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Single>::SetComponent(TComponent)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void ABonus_2_SetComponent_m13105_gshared (ABonus_2_t2098 * __this, Object_t * ___component, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___component;
		__this->___component_12 = L_0;
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Single>::Start()
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2990;
extern "C" void ABonus_2_Start_m13107_gshared (ABonus_2_t2098 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral2990 = il2cpp_codegen_string_literal_from_index(2990);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ABonus_2_t2098 * G_B2_0 = {0};
	ABonus_2_t2098 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	ABonus_2_t2098 * G_B3_1 = {0};
	{
		float L_0 = (float)(__this->___min_10);
		float L_1 = (float)(__this->___max_11);
		G_B1_0 = ((ABonus_2_t2098 *)(__this));
		if ((!(((float)L_0) > ((float)L_1))))
		{
			G_B2_0 = ((ABonus_2_t2098 *)(__this));
			goto IL_001d;
		}
	}
	{
		float L_2 = (float)(__this->___min_10);
		G_B3_0 = L_2;
		G_B3_1 = ((ABonus_2_t2098 *)(G_B1_0));
		goto IL_002e;
	}

IL_001d:
	{
		float L_3 = (float)(__this->___min_10);
		float L_4 = (float)(__this->___max_11);
		float L_5 = Random_Range_m687(NULL /*static, unused*/, (float)L_3, (float)L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = ((ABonus_2_t2098 *)(G_B2_0));
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___threshold_9 = G_B3_0;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			NullCheck((Component_t178 *)__this);
			Object_t * L_6 = (( Object_t * (*) (Component_t178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Component_t178 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			NullCheck((ABonus_2_t2098 *)__this);
			VirtActionInvoker1< Object_t * >::Invoke(21 /* System.Void Procrastinate.ABonus`2<System.Object,System.Single>::SetComponent(TComponent) */, (ABonus_2_t2098 *)__this, (Object_t *)L_6);
			IL2CPP_LEAVE(0x77, FINALLY_0056);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t154 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0044;
			throw e;
		}

CATCH_0044:
		{ // begin catch(System.Object)
			NullCheck((ABonus_2_t2098 *)__this);
			VirtActionInvoker1< Object_t * >::Invoke(21 /* System.Void Procrastinate.ABonus`2<System.Object,System.Single>::SetComponent(TComponent) */, (ABonus_2_t2098 *)__this, (Object_t *)((Object_t *)Castclass(NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
			IL2CPP_LEAVE(0x77, FINALLY_0056);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_7 = (Object_t *)(__this->___component_12);
			bool L_8 = Object_op_Equality_m473(NULL /*static, unused*/, (Object_t76 *)L_7, (Object_t76 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0076;
			}
		}

IL_006c:
		{
			MonoBehaviour_print_m893(NULL /*static, unused*/, (Object_t *)_stringLiteral2990, /*hidden argument*/NULL);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0077:
	{
		NullCheck((ABonus_2_t2098 *)__this);
		VirtActionInvoker0::Invoke(23 /* System.Void Procrastinate.ABonus`2<System.Object,System.Single>::Deactivate() */, (ABonus_2_t2098 *)__this);
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Single>::Update()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// RMX.SavedData
#include "AssemblyU2DCSharpU2Dfirstpass_RMX_SavedDataMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern const Il2CppType* Single_t176_0_0_0_var;
extern const Il2CppType* Boolean_t156_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* SavedData_Get_TisSingle_t176_m946_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisBoolean_t156_m949_MethodInfo_var;
extern const MethodInfo* SavedData_Get_TisString_t_m21407_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral118;
extern "C" void ABonus_2_Update_m13109_gshared (ABonus_2_t2098 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t176_0_0_0_var = il2cpp_codegen_type_from_index(60);
		Boolean_t156_0_0_0_var = il2cpp_codegen_type_from_index(20);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		SavedData_Get_TisSingle_t176_m946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		SavedData_Get_TisBoolean_t156_m949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		SavedData_Get_TisString_t_m21407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)), /*hidden argument*/NULL);
			Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(Single_t176_0_0_0_var), /*hidden argument*/NULL);
			if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
			{
				goto IL_0045;
			}
		}

IL_0019:
		{
			NullCheck((ABonus_2_t2098 *)__this);
			bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean Procrastinate.ABonus`2<System.Object,System.Single>::get_isBonusActive() */, (ABonus_2_t2098 *)__this);
			if (L_2)
			{
				goto IL_0045;
			}
		}

IL_0024:
		{
			int32_t L_3 = (int32_t)(__this->___key_8);
			int32_t L_4 = L_3;
			Object_t * L_5 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_4);
			float L_6 = SavedData_Get_TisSingle_t176_m946(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/SavedData_Get_TisSingle_t176_m946_MethodInfo_var);
			float L_7 = (float)(__this->___threshold_9);
			if ((!(((float)L_6) > ((float)L_7))))
			{
				goto IL_0045;
			}
		}

IL_003f:
		{
			NullCheck((ABonus_2_t2098 *)__this);
			VirtActionInvoker0::Invoke(22 /* System.Void Procrastinate.ABonus`2<System.Object,System.Single>::Activate() */, (ABonus_2_t2098 *)__this);
		}

IL_0045:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_8 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)), /*hidden argument*/NULL);
			Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(Boolean_t156_0_0_0_var), /*hidden argument*/NULL);
			if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
			{
				goto IL_0084;
			}
		}

IL_005e:
		{
			NullCheck((ABonus_2_t2098 *)__this);
			bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean Procrastinate.ABonus`2<System.Object,System.Single>::get_isBonusActive() */, (ABonus_2_t2098 *)__this);
			if (L_10)
			{
				goto IL_0084;
			}
		}

IL_0069:
		{
			int32_t L_11 = (int32_t)(__this->___key_8);
			int32_t L_12 = L_11;
			Object_t * L_13 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_12);
			bool L_14 = SavedData_Get_TisBoolean_t156_m949(NULL /*static, unused*/, (Object_t *)L_13, /*hidden argument*/SavedData_Get_TisBoolean_t156_m949_MethodInfo_var);
			if (!L_14)
			{
				goto IL_0084;
			}
		}

IL_007e:
		{
			NullCheck((ABonus_2_t2098 *)__this);
			VirtActionInvoker0::Invoke(22 /* System.Void Procrastinate.ABonus`2<System.Object,System.Single>::Activate() */, (ABonus_2_t2098 *)__this);
		}

IL_0084:
		{
			goto IL_00be;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0089;
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Object)
		int32_t L_15 = (int32_t)(__this->___key_8);
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_16);
		NullCheck((Enum_t6 *)L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t6 *)L_17);
		int32_t L_19 = (int32_t)(__this->___key_8);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(UserData_t253_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = SavedData_Get_TisString_t_m21407(NULL /*static, unused*/, (Object_t *)L_21, /*hidden argument*/SavedData_Get_TisString_t_m21407_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m440(NULL /*static, unused*/, (String_t*)L_18, (String_t*)_stringLiteral118, (String_t*)L_22, /*hidden argument*/NULL);
		Debug_LogError_m596(NULL /*static, unused*/, (Object_t *)L_23, /*hidden argument*/NULL);
		goto IL_00be;
	} // end catch (depth: 1)

IL_00be:
	{
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Single>::Activate()
extern "C" void ABonus_2_Activate_m13110_gshared (ABonus_2_t2098 * __this, const MethodInfo* method)
{
	{
		__this->___isActive_6 = 1;
		return;
	}
}
// System.Void Procrastinate.ABonus`2<System.Object,System.Single>::Deactivate()
extern "C" void ABonus_2_Deactivate_m13111_gshared (ABonus_2_t2098 * __this, const MethodInfo* method)
{
	{
		__this->___isActive_6 = 0;
		return;
	}
}
// System.Boolean Procrastinate.ABonus`2<System.Object,System.Single>::get_isBonusActive()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" bool ABonus_2_get_isBonusActive_m13113_gshared (ABonus_2_t2098 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		NullCheck((Behaviour_t189 *)__this);
		bool L_0 = Behaviour_get_isActiveAndEnabled_m2285((Behaviour_t189 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = (bool)(__this->___isActive_6);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return G_B3_0;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.Plane>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21.h"
// System.Array/InternalEnumerator`1<UnityEngine.Plane>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21MethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Plane>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Plane>(System.Int32)
extern "C" Plane_t528  Array_InternalArray__get_Item_TisPlane_t528_m20712_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisPlane_t528_m20712(__this, p0, method) (( Plane_t528  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisPlane_t528_m20712_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Plane>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13207_gshared (InternalEnumerator_1_t2103 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Plane>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13208_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method)
{
	{
		Plane_t528  L_0 = (( Plane_t528  (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2103 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Plane_t528  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Plane>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13209_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Plane>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13210_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Plane>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" Plane_t528  InternalEnumerator_1_get_Current_m13211_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method)
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
		Plane_t528  L_8 = (( Plane_t528  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
#include "Assembly-CSharp_ArrayTypes.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2836;
struct Transform_1_t2111;
// Declaration System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20750_gshared (Dictionary_2_t2110 * __this, DictionaryEntryU5BU5D_t2836* p0, int32_t p1, Transform_1_t2111 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20750(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2110 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2111 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20750_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t2122;
// Declaration System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2112_m20751_gshared (Dictionary_2_t2110 * __this, Array_t * p0, int32_t p1, Transform_1_t2122 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2112_m20751(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, Transform_1_t2122 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2112_m20751_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2706;
struct Transform_1_t2122;
// Declaration System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2112_TisKeyValuePair_2_t2112_m20753_gshared (Dictionary_2_t2110 * __this, KeyValuePair_2U5BU5D_t2706* p0, int32_t p1, Transform_1_t2122 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2112_TisKeyValuePair_2_t2112_m20753(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2110 *, KeyValuePair_2U5BU5D_t2706*, int32_t, Transform_1_t2122 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2112_TisKeyValuePair_2_t2112_m20753_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m13241_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13243_gshared (Dictionary_2_t2110 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13245_gshared (Dictionary_2_t2110 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2110 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m13247_gshared (Dictionary_2_t2110 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void Dictionary_2__ctor_m13249_gshared (Dictionary_2_t2110 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
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
	KeyValuePair_2_t2112  V_1 = {0};
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
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
			KeyValuePair_2_t2112  L_9 = (KeyValuePair_2_t2112 )InterfaceFuncInvoker0< KeyValuePair_2_t2112  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2112 )L_9;
			int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2112 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2112 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2110 *)__this);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2110 *)__this, (int32_t)L_10, (Object_t *)L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m13251_gshared (Dictionary_2_t2110 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13253_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2110 *)__this);
		KeyCollection_t2115 * L_0 = (( KeyCollection_t2115 * (*) (Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13255_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2110 *)__this);
		ValueCollection_t2119 * L_0 = (( ValueCollection_t2119 * (*) (Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13257_gshared (Dictionary_2_t2110 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2110 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2110 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2110 *)__this);
		int32_t L_4 = (( int32_t (*) (Dictionary_2_t2110 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2110 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2110 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Item(TKey) */, (Dictionary_2_t2110 *)__this, (int32_t)L_4);
		return L_5;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13259_gshared (Dictionary_2_t2110 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2110 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2110 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2110 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2110 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2110 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2110 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2110 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t2110 *)__this, (int32_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13261_gshared (Dictionary_2_t2110 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2110 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2110 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2110 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2110 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2110 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2110 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2110 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2110 *)__this, (int32_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13263_gshared (Dictionary_2_t2110 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2110 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2110 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13265_gshared (Dictionary_2_t2110 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2110 *)__this);
		VirtFuncInvoker1< bool, int32_t >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Remove(TKey) */, (Dictionary_2_t2110 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13267_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13269_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13271_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13273_gshared (Dictionary_2_t2110 * __this, KeyValuePair_2_t2112  ___keyValuePair, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2112 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2112 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2110 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2110 *)__this, (int32_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13275_gshared (Dictionary_2_t2110 * __this, KeyValuePair_2_t2112  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2112  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2110 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2110 *, KeyValuePair_2_t2112 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2110 *)__this, (KeyValuePair_2_t2112 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13277_gshared (Dictionary_2_t2110 * __this, KeyValuePair_2U5BU5D_t2706* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2706* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, KeyValuePair_2U5BU5D_t2706*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2110 *)__this, (KeyValuePair_2U5BU5D_t2706*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13279_gshared (Dictionary_2_t2110 * __this, KeyValuePair_2_t2112  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2112  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2110 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2110 *, KeyValuePair_2_t2112 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2110 *)__this, (KeyValuePair_2_t2112 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2112 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2110 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Remove(TKey) */, (Dictionary_2_t2110 *)__this, (int32_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13281_gshared (Dictionary_2_t2110 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3048);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2706* V_0 = {0};
	DictionaryEntryU5BU5D_t2836* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B5_1 = {0};
	Dictionary_2_t2110 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B4_1 = {0};
	Dictionary_2_t2110 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2706*)((KeyValuePair_2U5BU5D_t2706*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2706* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2706* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, KeyValuePair_2U5BU5D_t2706*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2110 *)__this, (KeyValuePair_2U5BU5D_t2706*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2110 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t2111 * L_10 = ((Dictionary_2_t2110_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2110 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2110 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2111 * L_12 = (Transform_1_t2111 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2111 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2110_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2110 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2111 * L_13 = ((Dictionary_2_t2110_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2110 *)G_B5_2);
		(( void (*) (Dictionary_2_t2110 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2110 *)G_B5_2, (DictionaryEntryU5BU5D_t2836*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2111 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2122 * L_17 = (Transform_1_t2122 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2122 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, Transform_1_t2122 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2110 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2122 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13283_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117  L_0 = {0};
		(( void (*) (Enumerator_t2117 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2117  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13285_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117  L_0 = {0};
		(( void (*) (Enumerator_t2117 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2117  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13287_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2123 * L_0 = (ShimEnumerator_t2123 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2123 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13289_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Item(TKey)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1368_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" Object_t * Dictionary_2_get_Item_m13291_gshared (Dictionary_2_t2110 * __this, int32_t ___key, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		UserDataU5BU5D_t2107* L_14 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16, sizeof(int32_t))), (int32_t)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t148* L_19 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_21, sizeof(Object_t *)));
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
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_set_Item_m13293_gshared (Dictionary_2_t2110 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		UserDataU5BU5D_t2107* L_16 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18, sizeof(int32_t))), (int32_t)L_19);
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
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		UserDataU5BU5D_t2107* L_52 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int32_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53, sizeof(int32_t))) = (int32_t)L_54;
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
		ObjectU5BU5D_t148* L_69 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		Object_t * L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, L_70, sizeof(Object_t *))) = (Object_t *)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void Dictionary_2_Init_m13295_gshared (Dictionary_2_t2110 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2110 * G_B4_0 = {0};
	Dictionary_2_t2110 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2110 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t2110 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2110 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2110 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t2124 * L_5 = (( EqualityComparer_1_t2124 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2110 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2110 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m13297_gshared (Dictionary_2_t2110 * __this, int32_t ___size, const MethodInfo* method)
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
		__this->___keySlots_6 = ((UserDataU5BU5D_t2107*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::CopyToCheck(System.Array,System.Int32)
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
extern "C" void Dictionary_2_CopyToCheck_m13299_gshared (Dictionary_2_t2110 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2110 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Count() */, (Dictionary_2_t2110 *)__this);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2112  Dictionary_2_make_pair_m13301_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2112  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2112 *, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (int32_t)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m13303_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13305_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13307_gshared (Dictionary_2_t2110 * __this, KeyValuePair_2U5BU5D_t2706* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2706* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2110 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2706* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2122 * L_5 = (Transform_1_t2122 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2122 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, KeyValuePair_2U5BU5D_t2706*, int32_t, Transform_1_t2122 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2110 *)__this, (KeyValuePair_2U5BU5D_t2706*)L_2, (int32_t)L_3, (Transform_1_t2122 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m13309_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
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
	UserDataU5BU5D_t2107* V_7 = {0};
	ObjectU5BU5D_t148* V_8 = {0};
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
		UserDataU5BU5D_t2107* L_10 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12, sizeof(int32_t))));
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
		V_7 = (UserDataU5BU5D_t2107*)((UserDataU5BU5D_t2107*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		UserDataU5BU5D_t2107* L_37 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		UserDataU5BU5D_t2107* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_40 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		ObjectU5BU5D_t148* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		UserDataU5BU5D_t2107* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t148* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2984;
extern "C" void Dictionary_2_Add_m13311_gshared (Dictionary_2_t2110 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		UserDataU5BU5D_t2107* L_15 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		int32_t L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_17, sizeof(int32_t))), (int32_t)L_18);
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
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		UserDataU5BU5D_t2107* L_50 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		int32_t L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51, sizeof(int32_t))) = (int32_t)L_52;
		ObjectU5BU5D_t148* L_53 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54, sizeof(Object_t *))) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13313_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		UserDataU5BU5D_t2107* L_2 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		UserDataU5BU5D_t2107* L_3 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_4 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_ContainsKey_m13315_gshared (Dictionary_2_t2110 * __this, int32_t ___key, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		UserDataU5BU5D_t2107* L_14 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16, sizeof(int32_t))), (int32_t)L_17);
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
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13317_gshared (Dictionary_2_t2110 * __this, Object_t * ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t1968 * L_0 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7, sizeof(Object_t *))), (Object_t *)L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral906;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_GetObjectData_m13319_gshared (Dictionary_2_t2110 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
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
	KeyValuePair_2U5BU5D_t2706* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t2706*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2706*)((KeyValuePair_2U5BU5D_t2706*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2706* L_8 = V_0;
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, KeyValuePair_2U5BU5D_t2706*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2110 *)__this, (KeyValuePair_2U5BU5D_t2706*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t818 * L_9 = ___info;
		Int32U5BU5D_t1037* L_10 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t818 *)L_9);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_9, (String_t*)_stringLiteral1538, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t818 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2706* L_12 = V_0;
		NullCheck((SerializationInfo_t818 *)L_11);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_11, (String_t*)_stringLiteral2985, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_OnDeserialization_m13321_gshared (Dictionary_2_t2110 * __this, Object_t * ___sender, const MethodInfo* method)
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
	KeyValuePair_2U5BU5D_t2706* V_1 = {0};
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
		V_1 = (KeyValuePair_2U5BU5D_t2706*)((KeyValuePair_2U5BU5D_t2706*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t2110 *)__this);
		(( void (*) (Dictionary_2_t2110 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2110 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2706* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t2706* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2112 *)((KeyValuePair_2_t2112 *)(KeyValuePair_2_t2112 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t2112 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2706* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2112 *)((KeyValuePair_2_t2112 *)(KeyValuePair_2_t2112 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t2112 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2110 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2110 *)__this, (int32_t)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2706* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_Remove_m13323_gshared (Dictionary_2_t2110 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = {0};
	Object_t * V_5 = {0};
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		UserDataU5BU5D_t2107* L_16 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18, sizeof(int32_t))), (int32_t)L_19);
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
		UserDataU5BU5D_t2107* L_45 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (UserData_t253_il2cpp_TypeInfo_var, (&V_4));
		int32_t L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_45, L_46, sizeof(int32_t))) = (int32_t)L_47;
		ObjectU5BU5D_t148* L_48 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, L_49, sizeof(Object_t *))) = (Object_t *)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_TryGetValue_m13325_gshared (Dictionary_2_t2110 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		UserDataU5BU5D_t2107* L_14 = (UserDataU5BU5D_t2107*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16, sizeof(int32_t))), (int32_t)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		Object_t ** L_19 = ___value;
		ObjectU5BU5D_t148* L_20 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22, sizeof(Object_t *)));
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
		Object_t ** L_27 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Keys()
extern "C" KeyCollection_t2115 * Dictionary_2_get_Keys_m13327_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2115 * L_0 = (KeyCollection_t2115 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2115 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Values()
extern "C" ValueCollection_t2119 * Dictionary_2_get_Values_m13329_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2119 * L_0 = (ValueCollection_t2119 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2119 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2986;
extern "C" int32_t Dictionary_2_ToTKey_m13331_gshared (Dictionary_2_t2110 * __this, Object_t * ___key, const MethodInfo* method)
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
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2986;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" Object_t * Dictionary_2_ToTValue_m13333_gshared (Dictionary_2_t2110 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
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
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
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
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13335_gshared (Dictionary_2_t2110 * __this, KeyValuePair_2_t2112  ___pair, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2112 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2110 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2110 *)__this, (int32_t)L_0, (Object_t **)(&V_0));
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
		EqualityComparer_1_t1968 * L_2 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2112 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t1968 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t1968 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::GetEnumerator()
extern "C" Enumerator_t2117  Dictionary_2_GetEnumerator_m13336_gshared (Dictionary_2_t2110 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117  L_0 = {0};
		(( void (*) (Enumerator_t2117 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2110 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m13338_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		Object_t * L_3 = ___value;
		DictionaryEntry_t1247  L_4 = {0};
		DictionaryEntry__ctor_m6108(&L_4, (Object_t *)L_2, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2112  Array_InternalArray__get_Item_TisKeyValuePair_2_t2112_m20723_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2112_m20723(__this, p0, method) (( KeyValuePair_2_t2112  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2112_m20723_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13339_gshared (InternalEnumerator_1_t2113 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13340_gshared (InternalEnumerator_1_t2113 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2112  L_0 = (( KeyValuePair_2_t2112  (*) (InternalEnumerator_1_t2113 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2113 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2112  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13341_gshared (InternalEnumerator_1_t2113 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13342_gshared (InternalEnumerator_1_t2113 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" KeyValuePair_2_t2112  InternalEnumerator_1_get_Current_m13343_gshared (InternalEnumerator_1_t2113 * __this, const MethodInfo* method)
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
		KeyValuePair_2_t2112  L_8 = (( KeyValuePair_2_t2112  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::.ctor(TKey,TValue)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void KeyValuePair_2__ctor_m13344_gshared (KeyValuePair_2_t2112 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2112 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2112 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2112 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2112 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m13345_gshared (KeyValuePair_2_t2112 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m13346_gshared (KeyValuePair_2_t2112 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m13347_gshared (KeyValuePair_2_t2112 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m13348_gshared (KeyValuePair_2_t2112 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral534;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" String_t* KeyValuePair_2_ToString_m13349_gshared (KeyValuePair_2_t2112 * __this, const MethodInfo* method)
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
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
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
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2112 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2112 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
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
		Object_t * L_8 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2112 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2112 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_9;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
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
// System.Array/InternalEnumerator`1<Procrastinate.UserData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23.h"
// System.Array/InternalEnumerator`1<Procrastinate.UserData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Procrastinate.UserData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Procrastinate.UserData>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisUserData_t253_m20734_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUserData_t253_m20734(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUserData_t253_m20734_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<Procrastinate.UserData>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13350_gshared (InternalEnumerator_1_t2114 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Procrastinate.UserData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13351_gshared (InternalEnumerator_1_t2114 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2114 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2114 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Procrastinate.UserData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13352_gshared (InternalEnumerator_1_t2114 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Procrastinate.UserData>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13353_gshared (InternalEnumerator_1_t2114 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Procrastinate.UserData>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" int32_t InternalEnumerator_1_get_Current_m13354_gshared (InternalEnumerator_1_t2114 * __this, const MethodInfo* method)
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2118;
// Declaration System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_ICollectionCopyTo<Procrastinate.UserData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_ICollectionCopyTo<Procrastinate.UserData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUserData_t253_m20745_gshared (Dictionary_2_t2110 * __this, Array_t * p0, int32_t p1, Transform_1_t2118 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisUserData_t253_m20745(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, Transform_1_t2118 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUserData_t253_m20745_gshared)(__this, p0, p1, p2, method)
struct UserDataU5BU5D_t2107;
struct Transform_1_t2118;
// Declaration System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<Procrastinate.UserData,Procrastinate.UserData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<Procrastinate.UserData,Procrastinate.UserData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUserData_t253_TisUserData_t253_m20747_gshared (Dictionary_2_t2110 * __this, UserDataU5BU5D_t2107* p0, int32_t p1, Transform_1_t2118 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisUserData_t253_TisUserData_t253_m20747(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2110 *, UserDataU5BU5D_t2107*, int32_t, Transform_1_t2118 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisUserData_t253_TisUserData_t253_m20747_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void KeyCollection__ctor_m13355_gshared (KeyCollection_t2115 * __this, Dictionary_2_t2110 * ___dictionary, const MethodInfo* method)
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
		Dictionary_2_t2110 * L_0 = ___dictionary;
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
		Dictionary_2_t2110 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13356_gshared (KeyCollection_t2115 * __this, int32_t ___item, const MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13357_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13358_gshared (KeyCollection_t2115 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t2110 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2110 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13359_gshared (KeyCollection_t2115 * __this, int32_t ___item, const MethodInfo* method)
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
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13360_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2115 *)__this);
		Enumerator_t2116  L_0 = (( Enumerator_t2116  (*) (KeyCollection_t2115 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2115 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2116  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13361_gshared (KeyCollection_t2115 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	UserDataU5BU5D_t2107* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (UserDataU5BU5D_t2107*)((UserDataU5BU5D_t2107*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		UserDataU5BU5D_t2107* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		UserDataU5BU5D_t2107* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2115 *)__this);
		(( void (*) (KeyCollection_t2115 *, UserDataU5BU5D_t2107*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2115 *)__this, (UserDataU5BU5D_t2107*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2110 * L_4 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2110 *)L_4);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2110 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2110 * L_7 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2118 * L_11 = (Transform_1_t2118 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2118 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2110 *)L_7);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, Transform_1_t2118 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2110 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2118 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13362_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2115 *)__this);
		Enumerator_t2116  L_0 = (( Enumerator_t2116  (*) (KeyCollection_t2115 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2115 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2116  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13363_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13364_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13365_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::CopyTo(TKey[],System.Int32)
#include "Assembly-CSharp_ArrayTypes.h"
extern "C" void KeyCollection_CopyTo_m13366_gshared (KeyCollection_t2115 * __this, UserDataU5BU5D_t2107* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		UserDataU5BU5D_t2107* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2110 *)L_0);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2110 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2110 * L_3 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		UserDataU5BU5D_t2107* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2118 * L_7 = (Transform_1_t2118 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2118 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2110 *)L_3);
		(( void (*) (Dictionary_2_t2110 *, UserDataU5BU5D_t2107*, int32_t, Transform_1_t2118 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2110 *)L_3, (UserDataU5BU5D_t2107*)L_4, (int32_t)L_5, (Transform_1_t2118 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::GetEnumerator()
extern "C" Enumerator_t2116  KeyCollection_GetEnumerator_m13367_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		Enumerator_t2116  L_1 = {0};
		(( void (*) (Enumerator_t2116 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2110 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<Procrastinate.UserData,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m13368_gshared (KeyCollection_t2115 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2110 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Count() */, (Dictionary_2_t2110 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
extern "C" void Enumerator__ctor_m13369_gshared (Enumerator_t2116 * __this, Dictionary_2_t2110 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = ___host;
		NullCheck((Dictionary_2_t2110 *)L_0);
		Enumerator_t2117  L_1 = (( Enumerator_t2117  (*) (Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13370_gshared (Enumerator_t2116 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Procrastinate.UserData,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13371_gshared (Enumerator_t2116 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13372_gshared (Enumerator_t2116 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Procrastinate.UserData,System.Object>::get_Current()
extern "C" int32_t Enumerator_get_Current_m13373_gshared (Enumerator_t2116 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2112 * L_1 = (KeyValuePair_2_t2112 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2112 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
extern "C" void Enumerator__ctor_m13374_gshared (Enumerator_t2117 * __this, Dictionary_2_t2110 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2110 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13375_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2112  L_0 = (KeyValuePair_2_t2112 )(__this->___current_3);
		KeyValuePair_2_t2112  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13376_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2112 * L_0 = (KeyValuePair_2_t2112 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2112 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t2112 * L_4 = (KeyValuePair_2_t2112 *)&(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2112 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		DictionaryEntry_t1247  L_6 = {0};
		DictionaryEntry__ctor_m6108(&L_6, (Object_t *)L_3, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13377_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13378_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13379_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2110 * L_4 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
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
		Dictionary_2_t2110 * L_8 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		NullCheck(L_8);
		UserDataU5BU5D_t2107* L_9 = (UserDataU5BU5D_t2107*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2110 * L_12 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t148* L_13 = (ObjectU5BU5D_t148*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2112  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2112 *, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11, sizeof(int32_t))), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2110 * L_18 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2112  Enumerator_get_Current_m13380_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2112  L_0 = (KeyValuePair_2_t2112 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13381_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2112 * L_0 = (KeyValuePair_2_t2112 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2112 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13382_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2112 * L_0 = (KeyValuePair_2_t2112 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2112 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2988;
extern "C" void Enumerator_VerifyState_m13383_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
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
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
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
		Dictionary_2_t2110 * L_2 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2989;
extern "C" void Enumerator_VerifyCurrent_m13384_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2989 = il2cpp_codegen_string_literal_from_index(2989);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Procrastinate.UserData,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13385_gshared (Enumerator_t2117 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2110 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m13386_gshared (Transform_1_t2118 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::Invoke(TKey,TValue)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
extern "C" int32_t Transform_1_Invoke_m13387_gshared (Transform_1_t2118 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13387((Transform_1_t2118 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13388_gshared (Transform_1_t2118 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UserData_t253_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,Procrastinate.UserData>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m13389_gshared (Transform_1_t2118 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12MethodDeclarations.h"
struct Array_t;
struct Transform_1_t2121;
// Declaration System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20748_gshared (Dictionary_2_t2110 * __this, Array_t * p0, int32_t p1, Transform_1_t2121 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20748(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, Transform_1_t2121 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m20748_gshared)(__this, p0, p1, p2, method)
struct ObjectU5BU5D_t148;
struct Transform_1_t2121;
// Declaration System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20749_gshared (Dictionary_2_t2110 * __this, ObjectU5BU5D_t148* p0, int32_t p1, Transform_1_t2121 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20749(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2110 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2121 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m20749_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void ValueCollection__ctor_m13390_gshared (ValueCollection_t2119 * __this, Dictionary_2_t2110 * ___dictionary, const MethodInfo* method)
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
		Dictionary_2_t2110 * L_0 = ___dictionary;
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
		Dictionary_2_t2110 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13391_gshared (ValueCollection_t2119 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13392_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13393_gshared (ValueCollection_t2119 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2110 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2110 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2987;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13394_gshared (ValueCollection_t2119 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13395_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2119 *)__this);
		Enumerator_t2120  L_0 = (( Enumerator_t2120  (*) (ValueCollection_t2119 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2119 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2120  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13396_gshared (ValueCollection_t2119 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
		NullCheck((ValueCollection_t2119 *)__this);
		(( void (*) (ValueCollection_t2119 *, ObjectU5BU5D_t148*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2119 *)__this, (ObjectU5BU5D_t148*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2110 * L_4 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2110 *)L_4);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2110 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2110 * L_7 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2121 * L_11 = (Transform_1_t2121 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2121 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2110 *)L_7);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, Transform_1_t2121 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2110 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2121 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13397_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2119 *)__this);
		Enumerator_t2120  L_0 = (( Enumerator_t2120  (*) (ValueCollection_t2119 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2119 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2120  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13398_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13399_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13400_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m13401_gshared (ValueCollection_t2119 * __this, ObjectU5BU5D_t148* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2110 *)L_0);
		(( void (*) (Dictionary_2_t2110 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2110 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2110 * L_3 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		ObjectU5BU5D_t148* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2121 * L_7 = (Transform_1_t2121 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2121 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2110 *)L_3);
		(( void (*) (Dictionary_2_t2110 *, ObjectU5BU5D_t148*, int32_t, Transform_1_t2121 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2110 *)L_3, (ObjectU5BU5D_t148*)L_4, (int32_t)L_5, (Transform_1_t2121 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::GetEnumerator()
extern "C" Enumerator_t2120  ValueCollection_GetEnumerator_m13402_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		Enumerator_t2120  L_1 = {0};
		(( void (*) (Enumerator_t2120 *, Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2110 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<Procrastinate.UserData,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13403_gshared (ValueCollection_t2119 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = (Dictionary_2_t2110 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2110 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>::get_Count() */, (Dictionary_2_t2110 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
extern "C" void Enumerator__ctor_m13404_gshared (Enumerator_t2120 * __this, Dictionary_2_t2110 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2110 * L_0 = ___host;
		NullCheck((Dictionary_2_t2110 *)L_0);
		Enumerator_t2117  L_1 = (( Enumerator_t2117  (*) (Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13405_gshared (Enumerator_t2120 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13406_gshared (Enumerator_t2120 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13407_gshared (Enumerator_t2120 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Procrastinate.UserData,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m13408_gshared (Enumerator_t2120 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2112 * L_1 = (KeyValuePair_2_t2112 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2112 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m13409_gshared (Transform_1_t2121 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Object>::Invoke(TKey,TValue)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
extern "C" Object_t * Transform_1_Invoke_m13410_gshared (Transform_1_t2121 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13410((Transform_1_t2121 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13411_gshared (Transform_1_t2121 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UserData_t253_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m13412_gshared (Transform_1_t2121 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m13413_gshared (Transform_1_t2111 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
extern "C" DictionaryEntry_t1247  Transform_1_Invoke_m13414_gshared (Transform_1_t2111 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13414((Transform_1_t2111 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1247  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13415_gshared (Transform_1_t2111 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UserData_t253_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1247  Transform_1_EndInvoke_m13416_gshared (Transform_1_t2111 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1247 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m13417_gshared (Transform_1_t2122 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::Invoke(TKey,TValue)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
extern "C" KeyValuePair_2_t2112  Transform_1_Invoke_m13418_gshared (Transform_1_t2122 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13418((Transform_1_t2122 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2112  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2112  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UserData_t253_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13419_gshared (Transform_1_t2122 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserData_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UserData_t253_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.Object,System.Collections.Generic.KeyValuePair`2<Procrastinate.UserData,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2112  Transform_1_EndInvoke_m13420_gshared (Transform_1_t2122 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2112 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m13421_gshared (ShimEnumerator_t2123 * __this, Dictionary_2_t2110 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2110 * L_0 = ___host;
		NullCheck((Dictionary_2_t2110 *)L_0);
		Enumerator_t2117  L_1 = (( Enumerator_t2117  (*) (Dictionary_2_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2110 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13422_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1247  ShimEnumerator_get_Entry_m13423_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2117  L_0 = (Enumerator_t2117 )(__this->___host_enumerator_0);
		Enumerator_t2117  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1247  L_3 = (DictionaryEntry_t1247 )InterfaceFuncInvoker0< DictionaryEntry_t1247  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13424_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2112  V_0 = {0};
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2112  L_1 = (( KeyValuePair_2_t2112  (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2112 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2112 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13425_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2112  V_0 = {0};
	{
		Enumerator_t2117 * L_0 = (Enumerator_t2117 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2112  L_1 = (( KeyValuePair_2_t2112  (*) (Enumerator_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2112 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2112 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m13426_gshared (ShimEnumerator_t2123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2123 *)__this);
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<Procrastinate.UserData,System.Object>::get_Entry() */, (ShimEnumerator_t2123 *)__this);
		DictionaryEntry_t1247  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1247_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Procrastinate.UserData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Procrastinate.UserData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m13427_gshared (EqualityComparer_1_t2124 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m13428_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t2124_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2124 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2125 * L_8 = (DefaultComparer_t2125 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2125 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2124_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13429_gshared (EqualityComparer_1_t2124 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2124 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>::GetHashCode(T) */, (EqualityComparer_1_t2124 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13430_gshared (EqualityComparer_1_t2124 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2124 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>::Equals(T,T) */, (EqualityComparer_1_t2124 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Procrastinate.UserData>::get_Default()
extern "C" EqualityComparer_1_t2124 * EqualityComparer_1_get_Default_m13431_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2124 * L_0 = ((EqualityComparer_1_t2124_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Procrastinate.UserData>::.ctor()
extern "C" void DefaultComparer__ctor_m13432_gshared (DefaultComparer_t2125 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2124 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2124 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2124 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Procrastinate.UserData>::GetHashCode(T)
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"
extern "C" int32_t DefaultComparer_GetHashCode_m13433_gshared (DefaultComparer_t2125 * __this, int32_t ___obj, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Procrastinate.UserData>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13434_gshared (DefaultComparer_t2125 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
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
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Action_1__ctor_m13487_gshared (Action_1_t2129 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m13488_gshared (Action_1_t2129 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m13488((Action_1_t2129 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Action_1_BeginInvoke_m13490_gshared (Action_1_t2129 * __this, Object_t * ___obj, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m13492_gshared (Action_1_t2129 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m13639_gshared (UnityAction_1_t2140 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13641_gshared (UnityAction_1_t2140 * __this, Object_t * ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m13641((UnityAction_1_t2140 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_1_BeginInvoke_m13643_gshared (UnityAction_1_t2140 * __this, Object_t * ___arg0, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13645_gshared (UnityAction_1_t2140 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5.h"
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m13646_gshared (UnityEvent_1_t2141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t785 *)__this);
		UnityEventBase__ctor_m3971((UnityEventBase_t785 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7.h"
extern "C" void UnityEvent_1_AddListener_m13647_gshared (UnityEvent_1_t2141 * __this, UnityAction_1_t2140 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t2140 * L_0 = ___call;
		BaseInvokableCall_t777 * L_1 = (( BaseInvokableCall_t777 * (*) (Object_t * /* static, unused */, UnityAction_1_t2140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t2140 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t785 *)__this);
		UnityEventBase_AddCall_m3978((UnityEventBase_t785 *)__this, (BaseInvokableCall_t777 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m13649_gshared (UnityEvent_1_t2141 * __this, UnityAction_1_t2140 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t2140 * L_0 = ___call;
		NullCheck((Delegate_t520 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4145((Delegate_t520 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2140 * L_2 = ___call;
		NullCheck((Delegate_t520 *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m4144((Delegate_t520 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t785 *)__this);
		UnityEventBase_RemoveListener_m3979((UnityEventBase_t785 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13651_gshared (UnityEvent_1_t2141 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
		TypeU5BU5D_t707* L_2 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3982(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t707*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t777 * UnityEvent_1_GetDelegate_m13653_gshared (UnityEvent_1_t2141 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2142 * L_2 = (InvokableCall_1_t2142 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t2142 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t777 * UnityEvent_1_GetDelegate_m13655_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2140 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t2140 * L_0 = ___action;
		InvokableCall_1_t2142 * L_1 = (InvokableCall_1_t2142 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t2142 *, UnityAction_1_t2140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t2140 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m13656_gshared (UnityEvent_1_t2141 * __this, Object_t * ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->___m_InvokeArray_4);
		Object_t * L_1 = ___arg0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t785 *)__this);
		UnityEventBase_Invoke_m3980((UnityEventBase_t785 *)__this, (ObjectU5BU5D_t148*)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20755_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20755(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m20755_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern "C" void InvokableCall_1__ctor_m13657_gshared (InvokableCall_1_t2142 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		UnityAction_1_t2140 * L_2 = (UnityAction_1_t2140 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t520 * L_6 = Delegate_CreateDelegate_m4146(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t520 * L_7 = Delegate_Combine_m2407(NULL /*static, unused*/, (Delegate_t520 *)L_2, (Delegate_t520 *)((UnityAction_1_t2140 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t2140 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7.h"
extern "C" void InvokableCall_1__ctor_m13658_gshared (InvokableCall_1_t2142 * __this, UnityAction_1_t2140 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t777 *)__this);
		BaseInvokableCall__ctor_m3948((BaseInvokableCall_t777 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2140 * L_0 = (UnityAction_1_t2140 *)(__this->___Delegate_0);
		UnityAction_1_t2140 * L_1 = ___callback;
		Delegate_t520 * L_2 = Delegate_Combine_m2407(NULL /*static, unused*/, (Delegate_t520 *)L_0, (Delegate_t520 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t2140 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2991;
extern "C" void InvokableCall_1_Invoke_m13659_gshared (InvokableCall_1_t2142 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
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
		UnityAction_1_t2140 * L_4 = (UnityAction_1_t2140 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3950(NULL /*static, unused*/, (Delegate_t520 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2140 * L_6 = (UnityAction_1_t2140 *)(__this->___Delegate_0);
		ObjectU5BU5D_t148* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t2140 *)L_6);
		(( void (*) (UnityAction_1_t2140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t2140 *)L_6, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13660_gshared (InvokableCall_1_t2142 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2140 * L_0 = (UnityAction_1_t2140 *)(__this->___Delegate_0);
		NullCheck((Delegate_t520 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m4145((Delegate_t520 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2140 * L_3 = (UnityAction_1_t2140 *)(__this->___Delegate_0);
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
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_gen.h"
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_genMethodDeclarations.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m2245_gshared (Comparison_1_t300 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
extern "C" int32_t Comparison_1_Invoke_m13865_gshared (Comparison_1_t300 * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m13865((Comparison_1_t300 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* RaycastResult_t326_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m13866_gshared (Comparison_1_t300 * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastResult_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(RaycastResult_t326_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(RaycastResult_t326_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13867_gshared (Comparison_1_t300 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void EventFunction_1__ctor_m13868_gshared (EventFunction_1_t503 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
extern "C" void EventFunction_1_Invoke_m13870_gshared (EventFunction_1_t503 * __this, Object_t * ___handler, BaseEventData_t262 * ___eventData, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventFunction_1_Invoke_m13870((EventFunction_1_t503 *)__this->___prev_9,___handler, ___eventData, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___handler, BaseEventData_t262 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___handler, BaseEventData_t262 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, BaseEventData_t262 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * EventFunction_1_BeginInvoke_m13872_gshared (EventFunction_1_t503 * __this, Object_t * ___handler, BaseEventData_t262 * ___eventData, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___handler;
	__d_args[1] = ___eventData;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m13874_gshared (EventFunction_1_t503 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3.h"
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
struct Object_t;
// System.Activator
#include "mscorlib_System_Activator.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m20757_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m20757(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisObject_t_m20757_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ObjectPool_1__ctor_m13974_gshared (ObjectPool_1_t2161 * __this, UnityAction_1_t2140 * ___actionOnGet, UnityAction_1_t2140 * ___actionOnRelease, const MethodInfo* method)
{
	{
		Stack_1_t2162 * L_0 = (Stack_1_t2162 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Stack_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_Stack_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2140 * L_1 = ___actionOnGet;
		__this->___m_ActionOnGet_1 = L_1;
		UnityAction_1_t2140 * L_2 = ___actionOnRelease;
		__this->___m_ActionOnRelease_2 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m13976_gshared (ObjectPool_1_t2161 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___U3CcountAllU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ObjectPool_1_set_countAll_m13978_gshared (ObjectPool_1_t2161 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcountAllU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m13980_gshared (ObjectPool_1_t2161 * __this, const MethodInfo* method)
{
	{
		NullCheck((ObjectPool_1_t2161 *)__this);
		int32_t L_0 = (( int32_t (*) (ObjectPool_1_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ObjectPool_1_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2161 *)__this);
		int32_t L_1 = (( int32_t (*) (ObjectPool_1_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ObjectPool_1_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((int32_t)((int32_t)L_0-(int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m13982_gshared (ObjectPool_1_t2161 * __this, const MethodInfo* method)
{
	{
		Stack_1_t2162 * L_0 = (Stack_1_t2162 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t2162 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t2162 *)L_0);
		return L_1;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectPool_1_Get_m13984_gshared (ObjectPool_1_t2161 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * G_B4_0 = {0};
	{
		Stack_1_t2162 * L_0 = (Stack_1_t2162 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t2162 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t2162 *)L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_2 = V_1;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_3 = V_1;
		G_B4_0 = L_3;
		goto IL_0033;
	}

IL_002e:
	{
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		G_B4_0 = L_4;
	}

IL_0033:
	{
		V_0 = (Object_t *)G_B4_0;
		NullCheck((ObjectPool_1_t2161 *)__this);
		int32_t L_5 = (( int32_t (*) (ObjectPool_1_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ObjectPool_1_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2161 *)__this);
		(( void (*) (ObjectPool_1_t2161 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t2161 *)__this, (int32_t)((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		Stack_1_t2162 * L_6 = (Stack_1_t2162 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t2162 *)L_6);
		Object_t * L_7 = (( Object_t * (*) (Stack_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Stack_1_t2162 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = (Object_t *)L_7;
	}

IL_0053:
	{
		UnityAction_1_t2140 * L_8 = (UnityAction_1_t2140 *)(__this->___m_ActionOnGet_1);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		UnityAction_1_t2140 * L_9 = (UnityAction_1_t2140 *)(__this->___m_ActionOnGet_1);
		Object_t * L_10 = V_0;
		NullCheck((UnityAction_1_t2140 *)L_9);
		(( void (*) (UnityAction_1_t2140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((UnityAction_1_t2140 *)L_9, (Object_t *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
	}

IL_006a:
	{
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2992;
extern "C" void ObjectPool_1_Release_m13986_gshared (ObjectPool_1_t2161 * __this, Object_t * ___element, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2992 = il2cpp_codegen_string_literal_from_index(2992);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_1_t2162 * L_0 = (Stack_1_t2162 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t2162 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t2162 *)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		Stack_1_t2162 * L_2 = (Stack_1_t2162 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t2162 *)L_2);
		Object_t * L_3 = (( Object_t * (*) (Stack_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Stack_1_t2162 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_4 = ___element;
		bool L_5 = Object_ReferenceEquals_m4032(NULL /*static, unused*/, (Object_t *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Debug_LogError_m596(NULL /*static, unused*/, (Object_t *)_stringLiteral2992, /*hidden argument*/NULL);
	}

IL_003b:
	{
		UnityAction_1_t2140 * L_6 = (UnityAction_1_t2140 *)(__this->___m_ActionOnRelease_2);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		UnityAction_1_t2140 * L_7 = (UnityAction_1_t2140 *)(__this->___m_ActionOnRelease_2);
		Object_t * L_8 = ___element;
		NullCheck((UnityAction_1_t2140 *)L_7);
		(( void (*) (UnityAction_1_t2140 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((UnityAction_1_t2140 *)L_7, (Object_t *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
	}

IL_0052:
	{
		Stack_1_t2162 * L_9 = (Stack_1_t2162 *)(__this->___m_Stack_0);
		Object_t * L_10 = ___element;
		NullCheck((Stack_1_t2162 *)L_9);
		(( void (*) (Stack_1_t2162 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((Stack_1_t2162 *)L_9, (Object_t *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_genMethodDeclarations.h"
struct ObjectU5BU5D_t148;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m20523_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t148** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisObject_t_m20523(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148**, int32_t, const MethodInfo*))Array_Resize_TisObject_t_m20523_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Stack_1__ctor_m13987_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m13988_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m13989_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArrayTypeMismatchException_t1811_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m13990_gshared (Stack_1_t2162 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayTypeMismatchException_t1811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(884);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____array_1);
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			ObjectU5BU5D_t148* L_1 = (ObjectU5BU5D_t148*)(__this->____array_1);
			Array_t * L_2 = ___dest;
			int32_t L_3 = ___idx;
			NullCheck((Array_t *)L_1);
			VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_1, (Array_t *)L_2, (int32_t)L_3);
			Array_t * L_4 = ___dest;
			int32_t L_5 = ___idx;
			int32_t L_6 = (int32_t)(__this->____size_2);
			Array_Reverse_m5140(NULL /*static, unused*/, (Array_t *)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		}

IL_0025:
		{
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_t1811_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t275 * L_7 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10350(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13991_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	{
		NullCheck((Stack_1_t2162 *)__this);
		Enumerator_t2163  L_0 = (( Enumerator_t2163  (*) (Stack_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Stack_1_t2162 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2163  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m13992_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	{
		NullCheck((Stack_1_t2162 *)__this);
		Enumerator_t2163  L_0 = (( Enumerator_t2163  (*) (Stack_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Stack_1_t2162 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2163  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t *)L_2;
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern "C" Object_t * Stack_1_Peek_m13993_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6112(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->____array_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3-(int32_t)1)));
		int32_t L_4 = ((int32_t)((int32_t)L_3-(int32_t)1));
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4, sizeof(Object_t *)));
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * Stack_1_Pop_m13994_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6112(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(__this->____array_1);
		int32_t L_4 = (int32_t)(__this->____size_2);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_1 = (int32_t)L_5;
		__this->____size_2 = L_5;
		int32_t L_6 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7, sizeof(Object_t *)));
		ObjectU5BU5D_t148* L_8 = (ObjectU5BU5D_t148*)(__this->____array_1);
		int32_t L_9 = (int32_t)(__this->____size_2);
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_10 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9, sizeof(Object_t *))) = (Object_t *)L_10;
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Stack_1_Push_m13995_gshared (Stack_1_t2162 * __this, Object_t * ___t, const MethodInfo* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t148** G_B4_0 = {0};
	ObjectU5BU5D_t148** G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t148** G_B5_1 = {0};
	{
		ObjectU5BU5D_t148* L_0 = (ObjectU5BU5D_t148*)(__this->____array_1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->____size_2);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)(__this->____array_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		ObjectU5BU5D_t148** L_3 = (ObjectU5BU5D_t148**)&(__this->____array_1);
		int32_t L_4 = (int32_t)(__this->____size_2);
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (int32_t)(__this->____size_2);
		G_B5_0 = ((int32_t)((int32_t)2*(int32_t)L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t148**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t148**)G_B5_1, (int32_t)G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}

IL_0043:
	{
		int32_t L_6 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_6+(int32_t)1));
		ObjectU5BU5D_t148* L_7 = (ObjectU5BU5D_t148*)(__this->____array_1);
		int32_t L_8 = (int32_t)(__this->____size_2);
		int32_t L_9 = (int32_t)L_8;
		V_0 = (int32_t)L_9;
		__this->____size_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_0;
		Object_t * L_11 = ___t;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, L_10, sizeof(Object_t *))) = (Object_t *)L_11;
		return;
	}
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m13996_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2163  Stack_1_GetEnumerator_m13997_gshared (Stack_1_t2162 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2163  L_0 = {0};
		(( void (*) (Enumerator_t2163 *, Stack_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(&L_0, (Stack_1_t2162 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_0;
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
extern "C" void Enumerator__ctor_m13998_gshared (Enumerator_t2163 * __this, Stack_1_t2162 * ___t, const MethodInfo* method)
{
	{
		Stack_1_t2162 * L_0 = ___t;
		__this->___parent_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Stack_1_t2162 * L_1 = ___t;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->____version_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13999_gshared (Enumerator_t2163 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2163 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2163 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_0;
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14000_gshared (Enumerator_t2163 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern "C" bool Enumerator_MoveNext_m14001_gshared (Enumerator_t2163 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____version_2);
		Stack_1_t2162 * L_1 = (Stack_1_t2162 *)(__this->___parent_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6112(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Stack_1_t2162 * L_5 = (Stack_1_t2162 *)(__this->___parent_0);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)(L_5->____size_2);
		__this->___idx_1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___idx_1);
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8-(int32_t)1));
		V_0 = (int32_t)L_9;
		__this->___idx_1 = L_9;
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_get_Current_m14002_gshared (Enumerator_t2163 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6112(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Stack_1_t2162 * L_2 = (Stack_1_t2162 *)(__this->___parent_0);
		NullCheck(L_2);
		ObjectU5BU5D_t148* L_3 = (ObjectU5BU5D_t148*)(L_2->____array_1);
		int32_t L_4 = (int32_t)(__this->___idx_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5, sizeof(Object_t *)));
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"
#include "UnityEngine.UI_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_17.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
struct RaycastResultU5BU5D_t2170;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisRaycastResult_t326_m20774_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2170* p0, RaycastResult_t326  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisRaycastResult_t326_m20774(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170*, RaycastResult_t326 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisRaycastResult_t326_m20774_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct RaycastResultU5BU5D_t2170;
struct IComparer_1_t2899;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t326_m20775_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2170* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisRaycastResult_t326_m20775(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisRaycastResult_t326_m20775_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct RaycastResultU5BU5D_t2170;
struct Comparison_1_t300;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t326_m20781_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2170* p0, int32_t p1, Comparison_1_t300 * p2, const MethodInfo* method);
#define Array_Sort_TisRaycastResult_t326_m20781(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170*, int32_t, Comparison_1_t300 *, const MethodInfo*))Array_Sort_TisRaycastResult_t326_m20781_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct RaycastResultU5BU5D_t2170;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisRaycastResult_t326_m20772_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2170** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisRaycastResult_t326_m20772(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170**, int32_t, const MethodInfo*))Array_Resize_TisRaycastResult_t326_m20772_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m2289_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2170* L_0 = ((List_1_t332_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14117_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t332 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2170* L_3 = ((List_1_t332_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t332 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((RaycastResultU5BU5D_t2170*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t332 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void List_1__ctor_m14118_gshared (List_1_t332 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, (String_t*)_stringLiteral1504, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((RaycastResultU5BU5D_t2170*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
#include "UnityEngine.UI_ArrayTypes.h"
extern "C" void List_1__ctor_m14119_gshared (List_1_t332 * __this, RaycastResultU5BU5D_t2170* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		RaycastResultU5BU5D_t2170* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m14120_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t332_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((RaycastResultU5BU5D_t2170*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14121_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t332 *)__this);
		Enumerator_t2172  L_0 = (( Enumerator_t2172  (*) (List_1_t332 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t332 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2172  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14122_gshared (List_1_t332 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14123_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t332 *)__this);
		Enumerator_t2172  L_0 = (( Enumerator_t2172  (*) (List_1_t332 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t332 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2172  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" int32_t List_1_System_Collections_IList_Add_m14124_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t332 *)__this);
			VirtActionInvoker1< RaycastResult_t326  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T) */, (List_1_t332 *)__this, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m14125_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t332 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, RaycastResult_t326  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, (List_1_t332 *)__this, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14126_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t332 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (List_1_t332 *)__this, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" void List_1_System_Collections_IList_Insert_m14127_gshared (List_1_t332 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t332 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t332 *)__this);
			VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T) */, (List_1_t332 *)__this, (int32_t)L_1, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t275 * L_3 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_3, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m14128_gshared (List_1_t332 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t332 *)__this);
			VirtFuncInvoker1< bool, RaycastResult_t326  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T) */, (List_1_t332 *)__this, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14129_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14130_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14131_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14132_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14133_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14134_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t332 *)__this);
		RaycastResult_t326  L_1 = (RaycastResult_t326 )VirtFuncInvoker1< RaycastResult_t326 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, (List_1_t332 *)__this, (int32_t)L_0);
		RaycastResult_t326  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" void List_1_System_Collections_IList_set_Item_m14135_gshared (List_1_t332 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidCastException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(855);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t332 *)__this);
			VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T) */, (List_1_t332 *)__this, (int32_t)L_0, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t160_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1840_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, (String_t*)_stringLiteral575, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
extern "C" void List_1_Add_m14136_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		RaycastResultU5BU5D_t2170* L_1 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t332 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		RaycastResultU5BU5D_t2170* L_2 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		RaycastResult_t326  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_2, L_5, sizeof(RaycastResult_t326 ))) = (RaycastResult_t326 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m14137_gshared (List_1_t332 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		RaycastResultU5BU5D_t2170* L_3 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t332 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t332 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t332 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m5119(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m5119(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t332 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14138_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t332 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		RaycastResultU5BU5D_t2170* L_5 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2170*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (RaycastResultU5BU5D_t2170*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m14139_gshared (List_1_t332 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	RaycastResult_t326  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			RaycastResult_t326  L_3 = (RaycastResult_t326 )InterfaceFuncInvoker0< RaycastResult_t326  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (RaycastResult_t326 )L_3;
			RaycastResult_t326  L_4 = V_0;
			NullCheck((List_1_t332 *)__this);
			VirtActionInvoker1< RaycastResult_t326  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T) */, (List_1_t332 *)__this, (RaycastResult_t326 )L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14140_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t332 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t332 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t332 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2173 * List_1_AsReadOnly_m14141_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2173 * L_0 = (ReadOnlyCollection_1_t2173 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2173 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m14142_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		RaycastResultU5BU5D_t2170* L_1 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m14143_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		RaycastResult_t326  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170*, RaycastResult_t326 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t2170*)L_0, (RaycastResult_t326 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14144_gshared (List_1_t332 * __this, RaycastResultU5BU5D_t2170* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		RaycastResultU5BU5D_t2170* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Exists(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_17.h"
extern "C" bool List_1_Exists_m14145_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	{
		Predicate_1_t2178 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2178 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2178 * L_2 = ___match;
		NullCheck((List_1_t332 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t332 *, int32_t, int32_t, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t332 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2178 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern TypeInfo* RaycastResult_t326_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t326  List_1_Find_m14146_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastResult_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RaycastResult_t326  V_1 = {0};
	RaycastResult_t326  G_B3_0 = {0};
	{
		Predicate_1_t2178 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2178 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2178 * L_2 = ___match;
		NullCheck((List_1_t332 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t332 *, int32_t, int32_t, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t332 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2178 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		RaycastResultU5BU5D_t2170* L_5 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_5, L_7, sizeof(RaycastResult_t326 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (RaycastResult_t326_il2cpp_TypeInfo_var, (&V_1));
		RaycastResult_t326  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2090;
extern "C" void List_1_CheckMatch_m14147_gshared (Object_t * __this /* static, unused */, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral2090 = il2cpp_codegen_string_literal_from_index(2090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2178 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral2090, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t332 * List_1_FindAll_m14148_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	{
		Predicate_1_t2178 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2178 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65536))))
		{
			goto IL_001e;
		}
	}
	{
		Predicate_1_t2178 * L_2 = ___match;
		NullCheck((List_1_t332 *)__this);
		List_1_t332 * L_3 = (( List_1_t332 * (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((List_1_t332 *)__this, (Predicate_1_t2178 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		return L_3;
	}

IL_001e:
	{
		Predicate_1_t2178 * L_4 = ___match;
		NullCheck((List_1_t332 *)__this);
		List_1_t332 * L_5 = (( List_1_t332 * (*) (List_1_t332 *, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)((List_1_t332 *)__this, (Predicate_1_t2178 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_5;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t332 * List_1_FindAllStackBits_m14149_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	uint32_t* V_0 = {0};
	uint32_t* V_1 = {0};
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	RaycastResultU5BU5D_t2170* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if ((uint64_t)(uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1)) * (uint64_t)(uint32_t)4 > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		int8_t* L_1 = (int8_t*) alloca(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		memset(L_1,0,((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		V_0 = (uint32_t*)(L_1);
		uint32_t* L_2 = V_0;
		V_1 = (uint32_t*)L_2;
		V_2 = (int32_t)0;
		V_3 = (uint32_t)((int32_t)-2147483648);
		V_4 = (int32_t)0;
		goto IL_005f;
	}

IL_0022:
	{
		Predicate_1_t2178 * L_3 = ___match;
		RaycastResultU5BU5D_t2170* L_4 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2178 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2178 *, RaycastResult_t326 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t2178 *)L_3, (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_4, L_6, sizeof(RaycastResult_t326 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t* L_8 = V_1;
		uint32_t* L_9 = V_1;
		uint32_t L_10 = V_3;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_9))|(int32_t)L_10));
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0044:
	{
		uint32_t L_12 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_12>>1));
		uint32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		uint32_t* L_14 = V_1;
		V_1 = (uint32_t*)((uint32_t*)((intptr_t)L_14+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_0059:
	{
		int32_t L_15 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_18 = V_2;
		V_5 = (RaycastResultU5BU5D_t2170*)((RaycastResultU5BU5D_t2170*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_18));
		V_3 = (uint32_t)((int32_t)-2147483648);
		uint32_t* L_19 = V_0;
		V_1 = (uint32_t*)L_19;
		V_6 = (int32_t)0;
		V_7 = (int32_t)0;
		goto IL_00c7;
	}

IL_0087:
	{
		uint32_t* L_20 = V_1;
		uint32_t L_21 = V_3;
		uint32_t L_22 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)(*((uint32_t*)L_20))&(int32_t)L_21))) == ((uint32_t)L_22))))
		{
			goto IL_00ac;
		}
	}
	{
		RaycastResultU5BU5D_t2170* L_23 = V_5;
		int32_t L_24 = V_6;
		int32_t L_25 = (int32_t)L_24;
		V_6 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		RaycastResultU5BU5D_t2170* L_26 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_27 = V_7;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		*((RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_23, L_25, sizeof(RaycastResult_t326 ))) = (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_26, L_28, sizeof(RaycastResult_t326 )));
	}

IL_00ac:
	{
		uint32_t L_29 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_29>>1));
		uint32_t L_30 = V_3;
		if (L_30)
		{
			goto IL_00c1;
		}
	}
	{
		uint32_t* L_31 = V_1;
		V_1 = (uint32_t*)((uint32_t*)((intptr_t)L_31+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_00c1:
	{
		int32_t L_32 = V_7;
		V_7 = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c7:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0087;
		}
	}

IL_00dc:
	{
		RaycastResultU5BU5D_t2170* L_37 = V_5;
		int32_t L_38 = V_2;
		List_1_t332 * L_39 = (List_1_t332 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t332 *, RaycastResultU5BU5D_t2170*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_39, (RaycastResultU5BU5D_t2170*)L_37, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_39;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t332 * List_1_FindAllList_m14150_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	List_1_t332 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t332 * L_0 = (List_1_t332 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t332 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		V_0 = (List_1_t332 *)L_0;
		V_1 = (int32_t)0;
		goto IL_003a;
	}

IL_000d:
	{
		Predicate_1_t2178 * L_1 = ___match;
		RaycastResultU5BU5D_t2170* L_2 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2178 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2178 *, RaycastResult_t326 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t2178 *)L_1, (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_2, L_4, sizeof(RaycastResult_t326 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		List_1_t332 * L_6 = V_0;
		RaycastResultU5BU5D_t2170* L_7 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((List_1_t332 *)L_6);
		VirtActionInvoker1< RaycastResult_t326  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T) */, (List_1_t332 *)L_6, (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_7, L_9, sizeof(RaycastResult_t326 ))));
	}

IL_0036:
	{
		int32_t L_10 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t332 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14151_gshared (List_1_t332 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t2178 * L_3 = ___match;
		RaycastResultU5BU5D_t2170* L_4 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2178 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2178 *, RaycastResult_t326 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t2178 *)L_3, (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_4, L_6, sizeof(RaycastResult_t326 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2172  List_1_GetEnumerator_m14152_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2172  L_0 = {0};
		(( void (*) (Enumerator_t2172 *, List_1_t332 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(&L_0, (List_1_t332 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14153_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		RaycastResult_t326  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170*, RaycastResult_t326 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t2170*)L_0, (RaycastResult_t326 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14154_gshared (List_1_t332 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		RaycastResultU5BU5D_t2170* L_5 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_6 = ___start;
		RaycastResultU5BU5D_t2170* L_7 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		RaycastResultU5BU5D_t2170* L_15 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_CheckIndex_m14155_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14156_gshared (List_1_t332 * __this, int32_t ___index, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t332 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		RaycastResultU5BU5D_t2170* L_2 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t332 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t332 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		RaycastResultU5BU5D_t2170* L_4 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t326  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_4, L_5, sizeof(RaycastResult_t326 ))) = (RaycastResult_t326 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2976;
extern "C" void List_1_CheckCollection_m14157_gshared (List_1_t332 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral2976 = il2cpp_codegen_string_literal_from_index(2976);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral2976, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m14158_gshared (List_1_t332 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t326  L_0 = ___item;
		NullCheck((List_1_t332 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (List_1_t332 *)__this, (RaycastResult_t326 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t332 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32) */, (List_1_t332 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14159_gshared (List_1_t332 * __this, Predicate_1_t2178 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2178 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2178 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2178 * L_1 = ___match;
		RaycastResultU5BU5D_t2170* L_2 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2178 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2178 *, RaycastResult_t326 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t2178 *)L_1, (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_2, L_4, sizeof(RaycastResult_t326 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t2178 * L_13 = ___match;
		RaycastResultU5BU5D_t2170* L_14 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2178 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2178 *, RaycastResult_t326 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Predicate_1_t2178 *)L_13, (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_14, L_16, sizeof(RaycastResult_t326 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		RaycastResultU5BU5D_t2170* L_18 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		RaycastResultU5BU5D_t2170* L_21 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_18, L_20, sizeof(RaycastResult_t326 ))) = (RaycastResult_t326 )(*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_21, L_23, sizeof(RaycastResult_t326 )));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		RaycastResultU5BU5D_t2170* L_29 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_RemoveAt_m14160_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t332 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		RaycastResultU5BU5D_t2170* L_5 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m14161_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m5140(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m14162_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		Comparer_1_t2179 * L_2 = (( Comparer_1_t2179 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t2170*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_gen.h"
extern "C" void List_1_Sort_m2252_gshared (List_1_t332 * __this, Comparison_1_t300 * ___comparison, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t300 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170*, int32_t, Comparison_1_t300 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t2170*)L_0, (int32_t)L_1, (Comparison_1_t300 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t2170* List_1_ToArray_m14163_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	RaycastResultU5BU5D_t2170* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (RaycastResultU5BU5D_t2170*)((RaycastResultU5BU5D_t2170*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		RaycastResultU5BU5D_t2170* L_1 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		RaycastResultU5BU5D_t2170* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		RaycastResultU5BU5D_t2170* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m14164_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t332 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14165_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2170* L_0 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m14166_gshared (List_1_t332 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_2 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6161(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		RaycastResultU5BU5D_t2170** L_3 = (RaycastResultU5BU5D_t2170**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2170**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t2170**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m14167_gshared (List_1_t332 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" RaycastResult_t326  List_1_get_Item_m14168_gshared (List_1_t332 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_2 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_2, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		RaycastResultU5BU5D_t2170* L_3 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_3, L_5, sizeof(RaycastResult_t326 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" void List_1_set_Item_m14169_gshared (List_1_t332 * __this, int32_t ___index, RaycastResult_t326  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t332 *)__this);
		(( void (*) (List_1_t332 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t332 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_3 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_3, (String_t*)_stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		RaycastResultU5BU5D_t2170* L_4 = (RaycastResultU5BU5D_t2170*)(__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t326  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_4, L_5, sizeof(RaycastResult_t326 ))) = (RaycastResult_t326 )L_6;
		return;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C" RaycastResult_t326  Array_InternalArray__get_Item_TisRaycastResult_t326_m20761_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastResult_t326_m20761(__this, p0, method) (( RaycastResult_t326  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastResult_t326_m20761_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m14170_gshared (InternalEnumerator_1_t2171 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14171_gshared (InternalEnumerator_1_t2171 * __this, const MethodInfo* method)
{
	{
		RaycastResult_t326  L_0 = (( RaycastResult_t326  (*) (InternalEnumerator_1_t2171 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2171 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResult_t326  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14172_gshared (InternalEnumerator_1_t2171 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m14173_gshared (InternalEnumerator_1_t2171 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" RaycastResult_t326  InternalEnumerator_1_get_Current_m14174_gshared (InternalEnumerator_1_t2171 * __this, const MethodInfo* method)
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
		RaycastResult_t326  L_8 = (( RaycastResult_t326  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
extern "C" void Enumerator__ctor_m14175_gshared (Enumerator_t2172 * __this, List_1_t332 * ___l, const MethodInfo* method)
{
	{
		List_1_t332 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t332 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14176_gshared (Enumerator_t2172 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2172 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6112(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		RaycastResult_t326  L_2 = (RaycastResult_t326 )(__this->___current_3);
		RaycastResult_t326  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern "C" void Enumerator_Dispose_m14177_gshared (Enumerator_t2172 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t332 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2979;
extern "C" void Enumerator_VerifyState_m14178_gshared (Enumerator_t2172 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2979 = il2cpp_codegen_string_literal_from_index(2979);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t332 * L_0 = (List_1_t332 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2172  L_1 = (*(Enumerator_t2172 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m495((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t905 * L_5 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t332 * L_7 = (List_1_t332 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t1075 * L_9 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_9, (String_t*)_stringLiteral2979, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14179_gshared (Enumerator_t2172 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2172 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t332 * L_2 = (List_1_t332 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t332 * L_4 = (List_1_t332 *)(__this->___l_0);
		NullCheck(L_4);
		RaycastResultU5BU5D_t2170* L_5 = (RaycastResultU5BU5D_t2170*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(RaycastResult_t326 *)(RaycastResult_t326 *)SZArrayLdElema(L_5, L_9, sizeof(RaycastResult_t326 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t326  Enumerator_get_Current_m14180_gshared (Enumerator_t2172 * __this, const MethodInfo* method)
{
	{
		RaycastResult_t326  L_0 = (RaycastResult_t326 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1515;
extern "C" void ReadOnlyCollection_1__ctor_m14181_gshared (ReadOnlyCollection_1_t2173 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral1515 = il2cpp_codegen_string_literal_from_index(1515);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral1515, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14182_gshared (ReadOnlyCollection_1_t2173 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14183_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14184_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, RaycastResult_t326  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14185_gshared (ReadOnlyCollection_1_t2173 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14186_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" RaycastResult_t326  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14187_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2173 *)__this);
		RaycastResult_t326  L_1 = (RaycastResult_t326 )VirtFuncInvoker1< RaycastResult_t326 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2173 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14188_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, RaycastResult_t326  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14189_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14190_gshared (ReadOnlyCollection_1_t2173 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t812_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14191_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t812_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14192_gshared (ReadOnlyCollection_1_t2173 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14193_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14194_gshared (ReadOnlyCollection_1_t2173 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14195_gshared (ReadOnlyCollection_1_t2173 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14196_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14197_gshared (ReadOnlyCollection_1_t2173 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14198_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14199_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14200_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14201_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14202_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14203_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t326  L_2 = (RaycastResult_t326 )InterfaceFuncInvoker1< RaycastResult_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		RaycastResult_t326  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14204_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14205_gshared (ReadOnlyCollection_1_t2173 * __this, RaycastResult_t326  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t326  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (RaycastResult_t326 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
#include "UnityEngine.UI_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m14206_gshared (ReadOnlyCollection_1_t2173 * __this, RaycastResultU5BU5D_t2170* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResultU5BU5D_t2170* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2170*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (RaycastResultU5BU5D_t2170*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14207_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14208_gshared (ReadOnlyCollection_1_t2173 * __this, RaycastResult_t326  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t326  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (RaycastResult_t326 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14209_gshared (ReadOnlyCollection_1_t2173 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t326  ReadOnlyCollection_1_get_Item_m14210_gshared (ReadOnlyCollection_1_t2173 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t326  L_2 = (RaycastResult_t326 )InterfaceFuncInvoker1< RaycastResult_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m14211_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t332 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t332 * L_0 = (List_1_t332 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t332 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t332 *)L_0;
		List_1_t332 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t332 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14212_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14213_gshared (Collection_1_t2175 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1248_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14214_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14215_gshared (Collection_1_t2175 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		RaycastResult_t326  L_4 = (( RaycastResult_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t2175 *)__this, (int32_t)L_2, (RaycastResult_t326 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14216_gshared (Collection_1_t2175 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14217_gshared (Collection_1_t2175 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14218_gshared (Collection_1_t2175 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t326  L_2 = (( RaycastResult_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t2175 *)__this, (int32_t)L_0, (RaycastResult_t326 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14219_gshared (Collection_1_t2175 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		RaycastResult_t326  L_2 = (( RaycastResult_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2175 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (Collection_1_t2175 *)__this, (RaycastResult_t326 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32) */, (Collection_1_t2175 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14220_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14221_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14222_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14223_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14224_gshared (Collection_1_t2175 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t326  L_2 = (RaycastResult_t326 )InterfaceFuncInvoker1< RaycastResult_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		RaycastResult_t326  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14225_gshared (Collection_1_t2175 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t326  L_2 = (( RaycastResult_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T) */, (Collection_1_t2175 *)__this, (int32_t)L_0, (RaycastResult_t326 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
extern "C" void Collection_1_Add_m14226_gshared (Collection_1_t2175 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		RaycastResult_t326  L_3 = ___item;
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t2175 *)__this, (int32_t)L_2, (RaycastResult_t326 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void Collection_1_Clear_m14227_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems() */, (Collection_1_t2175 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems()
extern "C" void Collection_1_ClearItems_m14228_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool Collection_1_Contains_m14229_gshared (Collection_1_t2175 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t326  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (RaycastResult_t326 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
#include "UnityEngine.UI_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m14230_gshared (Collection_1_t2175 * __this, RaycastResultU5BU5D_t2170* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResultU5BU5D_t2170* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2170*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (RaycastResultU5BU5D_t2170*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14231_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14232_gshared (Collection_1_t2175 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t326  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (RaycastResult_t326 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14233_gshared (Collection_1_t2175 * __this, int32_t ___index, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t326  L_1 = ___item;
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t2175 *)__this, (int32_t)L_0, (RaycastResult_t326 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14234_gshared (Collection_1_t2175 * __this, int32_t ___index, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t326  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (RaycastResult_t326 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool Collection_1_Remove_m14235_gshared (Collection_1_t2175 * __this, RaycastResult_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t326  L_0 = ___item;
		NullCheck((Collection_1_t2175 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (Collection_1_t2175 *)__this, (RaycastResult_t326 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32) */, (Collection_1_t2175 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14236_gshared (Collection_1_t2175 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32) */, (Collection_1_t2175 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14237_gshared (Collection_1_t2175 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14238_gshared (Collection_1_t2175 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t326  Collection_1_get_Item_m14239_gshared (Collection_1_t2175 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t326  L_2 = (RaycastResult_t326 )InterfaceFuncInvoker1< RaycastResult_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14240_gshared (Collection_1_t2175 * __this, int32_t ___index, RaycastResult_t326  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t326  L_1 = ___value;
		NullCheck((Collection_1_t2175 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T) */, (Collection_1_t2175 *)__this, (int32_t)L_0, (RaycastResult_t326 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14241_gshared (Collection_1_t2175 * __this, int32_t ___index, RaycastResult_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t326  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t326  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (RaycastResult_t326 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m14242_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2975;
extern "C" RaycastResult_t326  Collection_1_ConvertItem_m14243_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2975 = il2cpp_codegen_string_literal_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t275 * L_3 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_3, (String_t*)_stringLiteral2975, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m14244_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t199 * L_2 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m14245_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t1248_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t1248_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m14246_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t1207_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1207_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m14247_gshared (EqualityComparer_1_t2176 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14248_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t2176_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2176 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2177 * L_8 = (DefaultComparer_t2177 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2177 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2176_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14249_gshared (EqualityComparer_1_t2176 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2176 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T) */, (EqualityComparer_1_t2176 *)__this, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14250_gshared (EqualityComparer_1_t2176 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2176 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, RaycastResult_t326 , RaycastResult_t326  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T) */, (EqualityComparer_1_t2176 *)__this, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" EqualityComparer_1_t2176 * EqualityComparer_1_get_Default_m14251_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2176 * L_0 = ((EqualityComparer_1_t2176_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m14252_gshared (DefaultComparer_t2177 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2176 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2176 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2176 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
extern "C" int32_t DefaultComparer_GetHashCode_m14253_gshared (DefaultComparer_t2177 * __this, RaycastResult_t326  ___obj, const MethodInfo* method)
{
	{
		RaycastResult_t326  L_0 = ___obj;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14254_gshared (DefaultComparer_t2177 * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, const MethodInfo* method)
{
	{
		RaycastResult_t326  L_0 = ___x;
		goto IL_0015;
	}
	{
		RaycastResult_t326  L_1 = ___y;
		RaycastResult_t326  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		RaycastResult_t326  L_4 = ___y;
		RaycastResult_t326  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m14255_gshared (Predicate_1_t2178 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
extern "C" bool Predicate_1_Invoke_m14256_gshared (Predicate_1_t2178 * __this, RaycastResult_t326  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m14256((Predicate_1_t2178 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t326  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, RaycastResult_t326  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* RaycastResult_t326_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m14257_gshared (Predicate_1_t2178 * __this, RaycastResult_t326  ___obj, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastResult_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(RaycastResult_t326_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14258_gshared (Predicate_1_t2178 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m14259_gshared (Comparer_1_t2179 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2935_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m14260_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2935_0_0_0_var = il2cpp_codegen_type_from_index(3047);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(GenericComparer_1_t2935_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t707* L_4 = (TypeU5BU5D_t707*)((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, (RuntimeTypeHandle_t1269 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t707* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t707*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m10324(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2179_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2179 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2180 * L_8 = (DefaultComparer_t2180 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2179_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m14261_gshared (Comparer_1_t2179 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2179 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, RaycastResult_t326 , RaycastResult_t326  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T) */, (Comparer_1_t2179 *)__this, (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (RaycastResult_t326 )((*(RaycastResult_t326 *)((RaycastResult_t326 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t275 * L_8 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10350(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" Comparer_1_t2179 * Comparer_1_get_Default_m14262_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2179 * L_0 = ((Comparer_1_t2179_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m14263_gshared (DefaultComparer_t2180 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2179 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2179 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2179 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1924_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2980;
extern "C" int32_t DefaultComparer_Compare_m14264_gshared (DefaultComparer_t2180 * __this, RaycastResult_t326  ___x, RaycastResult_t326  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2980 = il2cpp_codegen_string_literal_from_index(2980);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		RaycastResult_t326  L_0 = ___x;
		goto IL_001e;
	}
	{
		RaycastResult_t326  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		RaycastResult_t326  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		RaycastResult_t326  L_3 = ___x;
		RaycastResult_t326  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		RaycastResult_t326  L_6 = ___x;
		RaycastResult_t326  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		RaycastResult_t326  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t326  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (RaycastResult_t326 )L_9);
		return L_10;
	}

IL_004d:
	{
		RaycastResult_t326  L_11 = ___x;
		RaycastResult_t326  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1924_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		RaycastResult_t326  L_14 = ___x;
		RaycastResult_t326  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		RaycastResult_t326  L_17 = ___y;
		RaycastResult_t326  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1924_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1924_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1924_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t275 * L_21 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_21, (String_t*)_stringLiteral2980, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15MethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2836;
struct Transform_1_t2196;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20801_gshared (Dictionary_2_t2195 * __this, DictionaryEntryU5BU5D_t2836* p0, int32_t p1, Transform_1_t2196 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20801(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2195 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2196 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1247_TisDictionaryEntry_t1247_m20801_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t2206;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2197_m20802_gshared (Dictionary_2_t2195 * __this, Array_t * p0, int32_t p1, Transform_1_t2206 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2197_m20802(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, Transform_1_t2206 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2197_m20802_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2721;
struct Transform_1_t2206;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2197_TisKeyValuePair_2_t2197_m20804_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2U5BU5D_t2721* p0, int32_t p1, Transform_1_t2206 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2197_TisKeyValuePair_2_t2197_m20804(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2721*, int32_t, Transform_1_t2206 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2197_TisKeyValuePair_2_t2197_m20804_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m14506_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2195 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14508_gshared (Dictionary_2_t2195 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2195 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14510_gshared (Dictionary_2_t2195 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2195 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m14512_gshared (Dictionary_2_t2195 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2195 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1533;
extern "C" void Dictionary_2__ctor_m14514_gshared (Dictionary_2_t2195 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
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
	KeyValuePair_2_t2197  V_1 = {0};
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2195 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
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
			KeyValuePair_2_t2197  L_9 = (KeyValuePair_2_t2197 )InterfaceFuncInvoker0< KeyValuePair_2_t2197  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2197 )L_9;
			int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2197 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2197 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2195 *)__this);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2195 *)__this, (int32_t)L_10, (Object_t *)L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m14516_gshared (Dictionary_2_t2195 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14518_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2195 *)__this);
		KeyCollection_t2199 * L_0 = (( KeyCollection_t2199 * (*) (Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14520_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2195 *)__this);
		ValueCollection_t2203 * L_0 = (( ValueCollection_t2203 * (*) (Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14522_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2195 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2195 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2195 *)__this);
		int32_t L_4 = (( int32_t (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2195 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2195 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey) */, (Dictionary_2_t2195 *)__this, (int32_t)L_4);
		return L_5;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14524_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2195 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2195 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2195 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2195 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2195 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t2195 *)__this, (int32_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14526_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2195 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2195 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2195 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2195 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2195 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2195 *)__this, (int32_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14528_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2195 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2195 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14530_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2195 *)__this);
		VirtFuncInvoker1< bool, int32_t >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey) */, (Dictionary_2_t2195 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14532_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14534_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14536_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14538_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2197 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2197 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2195 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2195 *)__this, (int32_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14540_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2197  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2195 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2195 *)__this, (KeyValuePair_2_t2197 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14542_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2721* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2195 *)__this, (KeyValuePair_2U5BU5D_t2721*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14544_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2197  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2195 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2195 *)__this, (KeyValuePair_2_t2197 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2197 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2195 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey) */, (Dictionary_2_t2195 *)__this, (int32_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14546_gshared (Dictionary_2_t2195 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3048);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2721* V_0 = {0};
	DictionaryEntryU5BU5D_t2836* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B5_1 = {0};
	Dictionary_2_t2195 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2836* G_B4_1 = {0};
	Dictionary_2_t2195 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2721*)((KeyValuePair_2U5BU5D_t2721*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2721* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2721* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2195 *)__this, (KeyValuePair_2U5BU5D_t2721*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2195 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t2196 * L_10 = ((Dictionary_2_t2195_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2195 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2195 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2196 * L_12 = (Transform_1_t2196 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2196 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2195_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2195 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2196 * L_13 = ((Dictionary_2_t2195_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2195 *)G_B5_2);
		(( void (*) (Dictionary_2_t2195 *, DictionaryEntryU5BU5D_t2836*, int32_t, Transform_1_t2196 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2195 *)G_B5_2, (DictionaryEntryU5BU5D_t2836*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2196 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2206 * L_17 = (Transform_1_t2206 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2206 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, Transform_1_t2206 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2195 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2206 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14548_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2201  L_0 = {0};
		(( void (*) (Enumerator_t2201 *, Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2201  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14550_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2201  L_0 = {0};
		(( void (*) (Enumerator_t2201 *, Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2201  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14552_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2207 * L_0 = (ShimEnumerator_t2207 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2207 *, Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14554_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1368_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" Object_t * Dictionary_2_get_Item_m14556_gshared (Dictionary_2_t2195 * __this, int32_t ___key, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		Int32U5BU5D_t1037* L_14 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16, sizeof(int32_t))), (int32_t)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t148* L_19 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_21, sizeof(Object_t *)));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" void Dictionary_2_set_Item_m14558_gshared (Dictionary_2_t2195 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		Int32U5BU5D_t1037* L_16 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18, sizeof(int32_t))), (int32_t)L_19);
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
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		Int32U5BU5D_t1037* L_52 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int32_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53, sizeof(int32_t))) = (int32_t)L_54;
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
		ObjectU5BU5D_t148* L_69 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		Object_t * L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, L_70, sizeof(Object_t *))) = (Object_t *)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern "C" void Dictionary_2_Init_m14560_gshared (Dictionary_2_t2195 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2195 * G_B4_0 = {0};
	Dictionary_2_t2195 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2195 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t2195 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2195 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2195 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t2208 * L_5 = (( EqualityComparer_1_t2208 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2195 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2195 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m14562_gshared (Dictionary_2_t2195 * __this, int32_t ___size, const MethodInfo* method)
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
		__this->___keySlots_6 = ((Int32U5BU5D_t1037*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
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
extern "C" void Dictionary_2_CopyToCheck_m14564_gshared (Dictionary_2_t2195 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t2195 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count() */, (Dictionary_2_t2195 *)__this);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2197  Dictionary_2_make_pair_m14566_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2197  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2197 *, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (int32_t)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m14568_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14570_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14572_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2721* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2195 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2721* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2206 * L_5 = (Transform_1_t2206 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2206 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2721*, int32_t, Transform_1_t2206 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2195 *)__this, (KeyValuePair_2U5BU5D_t2721*)L_2, (int32_t)L_3, (Transform_1_t2206 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2017_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m14574_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
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
	Int32U5BU5D_t1037* V_7 = {0};
	ObjectU5BU5D_t148* V_8 = {0};
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
		Int32U5BU5D_t1037* L_10 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12, sizeof(int32_t))));
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
		V_7 = (Int32U5BU5D_t1037*)((Int32U5BU5D_t1037*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t148*)((ObjectU5BU5D_t148*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		Int32U5BU5D_t1037* L_37 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		Int32U5BU5D_t1037* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_40 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		ObjectU5BU5D_t148* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6885(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int32U5BU5D_t1037* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t148* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2984;
extern "C" void Dictionary_2_Add_m14576_gshared (Dictionary_2_t2195 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		Int32U5BU5D_t1037* L_15 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		int32_t L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_17, sizeof(int32_t))), (int32_t)L_18);
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
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		Int32U5BU5D_t1037* L_50 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		int32_t L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51, sizeof(int32_t))) = (int32_t)L_52;
		ObjectU5BU5D_t148* L_53 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54, sizeof(Object_t *))) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14578_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1037* L_0 = (Int32U5BU5D_t1037*)(__this->___table_4);
		Int32U5BU5D_t1037* L_1 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t1037* L_2 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		Int32U5BU5D_t1037* L_3 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m4216(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t148* L_4 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_ContainsKey_m14580_gshared (Dictionary_2_t2195 * __this, int32_t ___key, const MethodInfo* method)
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
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		Int32U5BU5D_t1037* L_14 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16, sizeof(int32_t))), (int32_t)L_17);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14582_gshared (Dictionary_2_t2195 * __this, Object_t * ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t1968 * L_0 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		ObjectU5BU5D_t148* L_5 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7, sizeof(Object_t *))), (Object_t *)L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral906;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_GetObjectData_m14584_gshared (Dictionary_2_t2195 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
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
	KeyValuePair_2U5BU5D_t2721* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t2721*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2721*)((KeyValuePair_2U5BU5D_t2721*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2721* L_8 = V_0;
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2195 *)__this, (KeyValuePair_2U5BU5D_t2721*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t818 * L_9 = ___info;
		Int32U5BU5D_t1037* L_10 = (Int32U5BU5D_t1037*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t818 *)L_9);
		SerializationInfo_AddValue_m6117((SerializationInfo_t818 *)L_9, (String_t*)_stringLiteral1538, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t818 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2721* L_12 = V_0;
		NullCheck((SerializationInfo_t818 *)L_11);
		SerializationInfo_AddValue_m5151((SerializationInfo_t818 *)L_11, (String_t*)_stringLiteral2985, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral908;
extern Il2CppCodeGenString* _stringLiteral910;
extern Il2CppCodeGenString* _stringLiteral1538;
extern Il2CppCodeGenString* _stringLiteral2985;
extern "C" void Dictionary_2_OnDeserialization_m14586_gshared (Dictionary_2_t2195 * __this, Object_t * ___sender, const MethodInfo* method)
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
	KeyValuePair_2U5BU5D_t2721* V_1 = {0};
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
		V_1 = (KeyValuePair_2U5BU5D_t2721*)((KeyValuePair_2U5BU5D_t2721*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t2195 *)__this);
		(( void (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2195 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2721* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t2721* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (( int32_t (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2197 *)((KeyValuePair_2_t2197 *)(KeyValuePair_2_t2197 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t2197 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2721* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2197 *)((KeyValuePair_2_t2197 *)(KeyValuePair_2_t2197 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t2197 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2195 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2195 *)__this, (int32_t)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2721* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_Remove_m14588_gshared (Dictionary_2_t2195 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Object_t * V_5 = {0};
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		Int32U5BU5D_t1037* L_16 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18, sizeof(int32_t))), (int32_t)L_19);
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
		Int32U5BU5D_t1037* L_45 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Int32_t151_il2cpp_TypeInfo_var, (&V_4));
		int32_t L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_45, L_46, sizeof(int32_t))) = (int32_t)L_47;
		ObjectU5BU5D_t148* L_48 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, L_49, sizeof(Object_t *))) = (Object_t *)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern "C" bool Dictionary_2_TryGetValue_m14590_gshared (Dictionary_2_t2195 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral894 = il2cpp_codegen_string_literal_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, (String_t*)_stringLiteral894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
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
		Int32U5BU5D_t1037* L_14 = (Int32U5BU5D_t1037*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16, sizeof(int32_t))), (int32_t)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		Object_t ** L_19 = ___value;
		ObjectU5BU5D_t148* L_20 = (ObjectU5BU5D_t148*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22, sizeof(Object_t *)));
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
		Object_t ** L_27 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2199 * Dictionary_2_get_Keys_m14592_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2199 * L_0 = (KeyCollection_t2199 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2199 *, Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2203 * Dictionary_2_get_Values_m14593_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2203 * L_0 = (ValueCollection_t2203 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2203 *, Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral894;
extern Il2CppCodeGenString* _stringLiteral2986;
extern "C" int32_t Dictionary_2_ToTKey_m14595_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method)
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
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2986;
extern Il2CppCodeGenString* _stringLiteral575;
extern "C" Object_t * Dictionary_2_ToTValue_m14597_gshared (Dictionary_2_t2195 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2986 = il2cpp_codegen_string_literal_from_index(2986);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
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
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
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
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14599_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___pair, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2197 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2195 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2195 *)__this, (int32_t)L_0, (Object_t **)(&V_0));
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
		EqualityComparer_1_t1968 * L_2 = (( EqualityComparer_1_t1968 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2197 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2197 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t1968 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t1968 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2201  Dictionary_2_GetEnumerator_m14600_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2201  L_0 = {0};
		(( void (*) (Enumerator_t2201 *, Dictionary_2_t2195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2195 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1247  Dictionary_2_U3CCopyToU3Em__0_m14602_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		Object_t * L_3 = ___value;
		DictionaryEntry_t1247  L_4 = {0};
		DictionaryEntry__ctor_m6108(&L_4, (Object_t *)L_2, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2197  Array_InternalArray__get_Item_TisKeyValuePair_2_t2197_m20785_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2197_m20785(__this, p0, method) (( KeyValuePair_2_t2197  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2197_m20785_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m14603_gshared (InternalEnumerator_1_t2198 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14604_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2197  L_0 = (( KeyValuePair_2_t2197  (*) (InternalEnumerator_1_t2198 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2198 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2197  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14605_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m14606_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2977;
extern Il2CppCodeGenString* _stringLiteral2978;
extern "C" KeyValuePair_2_t2197  InternalEnumerator_1_get_Current_m14607_gshared (InternalEnumerator_1_t2198 * __this, const MethodInfo* method)
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
		KeyValuePair_2_t2197  L_8 = (( KeyValuePair_2_t2197  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
