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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_9.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_9MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_9MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20500_gshared (DefaultComparer_t2681 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2680 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2680 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2680 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1924_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2980;
extern "C" int32_t DefaultComparer_Compare_m20501_gshared (DefaultComparer_t2681 * __this, TimeSpan_t1156  ___x, TimeSpan_t1156  ___y, const MethodInfo* method)
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
		TimeSpan_t1156  L_0 = ___x;
		goto IL_001e;
	}
	{
		TimeSpan_t1156  L_1 = ___y;
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
		TimeSpan_t1156  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		TimeSpan_t1156  L_3 = ___x;
		TimeSpan_t1156  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		TimeSpan_t1156  L_6 = ___x;
		TimeSpan_t1156  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		TimeSpan_t1156  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t1156  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (TimeSpan_t1156 )L_9);
		return L_10;
	}

IL_004d:
	{
		TimeSpan_t1156  L_11 = ___x;
		TimeSpan_t1156  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1924_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		TimeSpan_t1156  L_14 = ___x;
		TimeSpan_t1156  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		TimeSpan_t1156  L_17 = ___y;
		TimeSpan_t1156  L_18 = L_17;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_16MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11195_gshared (GenericEqualityComparer_1_t1959 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2682 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2682 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2682 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m20502_gshared (GenericEqualityComparer_1_t1959 * __this, TimeSpan_t1156  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t1156  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((TimeSpan_t1156 *)(&___obj));
		int32_t L_1 = TimeSpan_GetHashCode_m11055((TimeSpan_t1156 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m20503_gshared (GenericEqualityComparer_1_t1959 * __this, TimeSpan_t1156  ___x, TimeSpan_t1156  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t1156  L_0 = ___x;
		goto IL_0015;
	}
	{
		TimeSpan_t1156  L_1 = ___y;
		TimeSpan_t1156  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t1156  L_4 = ___y;
		NullCheck((TimeSpan_t1156 *)(&___x));
		bool L_5 = TimeSpan_Equals_m11046((TimeSpan_t1156 *)(&___x), (TimeSpan_t1156 )L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_16.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_16.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_16MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m20504_gshared (EqualityComparer_1_t2682 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m417((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2934_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m20505_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t2682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2682 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2683 * L_8 = (DefaultComparer_t2683 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20506_gshared (EqualityComparer_1_t2682 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2682 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t1156  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T) */, (EqualityComparer_1_t2682 *)__this, (TimeSpan_t1156 )((*(TimeSpan_t1156 *)((TimeSpan_t1156 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20507_gshared (EqualityComparer_1_t2682 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2682 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, TimeSpan_t1156 , TimeSpan_t1156  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T) */, (EqualityComparer_1_t2682 *)__this, (TimeSpan_t1156 )((*(TimeSpan_t1156 *)((TimeSpan_t1156 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (TimeSpan_t1156 )((*(TimeSpan_t1156 *)((TimeSpan_t1156 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern "C" EqualityComparer_1_t2682 * EqualityComparer_1_get_Default_m20508_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2682 * L_0 = ((EqualityComparer_1_t2682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20509_gshared (DefaultComparer_t2683 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2682 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2682 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2682 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m20510_gshared (DefaultComparer_t2683 * __this, TimeSpan_t1156  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t1156  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((TimeSpan_t1156 *)(&___obj));
		int32_t L_1 = TimeSpan_GetHashCode_m11055((TimeSpan_t1156 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20511_gshared (DefaultComparer_t2683 * __this, TimeSpan_t1156  ___x, TimeSpan_t1156  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t1156  L_0 = ___x;
		goto IL_0015;
	}
	{
		TimeSpan_t1156  L_1 = ___y;
		TimeSpan_t1156  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t1156  L_4 = ___y;
		TimeSpan_t1156  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((TimeSpan_t1156 *)(&___x));
		bool L_7 = TimeSpan_Equals_m11048((TimeSpan_t1156 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
