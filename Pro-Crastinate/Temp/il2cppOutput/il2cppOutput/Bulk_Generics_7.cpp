#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_9.h"
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

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20233_gshared (DefaultComparer_t2631 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2630 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2630 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern TypeInfo* IComparable_t1900_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t274_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2959;
extern "C" int32_t DefaultComparer_Compare_m20234_gshared (DefaultComparer_t2631 * __this, TimeSpan_t1144  ___x, TimeSpan_t1144  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(874);
		ArgumentException_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral2959 = il2cpp_codegen_string_literal_from_index(2959);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t1144  L_0 = ___x;
		goto IL_001e;
	}
	{
		TimeSpan_t1144  L_1 = ___y;
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
		TimeSpan_t1144  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		TimeSpan_t1144  L_3 = ___x;
		TimeSpan_t1144  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		TimeSpan_t1144  L_6 = ___x;
		TimeSpan_t1144  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		TimeSpan_t1144  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t1144  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (TimeSpan_t1144 )L_9);
		return L_10;
	}

IL_004d:
	{
		TimeSpan_t1144  L_11 = ___x;
		TimeSpan_t1144  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1900_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		TimeSpan_t1144  L_14 = ___x;
		TimeSpan_t1144  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		TimeSpan_t1144  L_17 = ___y;
		TimeSpan_t1144  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1900_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1900_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1900_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t274 * L_21 = (ArgumentException_t274 *)il2cpp_codegen_object_new (ArgumentException_t274_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m963(L_21, (String_t*)_stringLiteral2959, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_16MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11112_gshared (GenericEqualityComparer_1_t1930 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2632 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2632 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2632 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m20235_gshared (GenericEqualityComparer_1_t1930 * __this, TimeSpan_t1144  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t1144  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((TimeSpan_t1144 *)(&___obj));
		int32_t L_1 = TimeSpan_GetHashCode_m10974((TimeSpan_t1144 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m20236_gshared (GenericEqualityComparer_1_t1930 * __this, TimeSpan_t1144  ___x, TimeSpan_t1144  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t1144  L_0 = ___x;
		goto IL_0015;
	}
	{
		TimeSpan_t1144  L_1 = ___y;
		TimeSpan_t1144  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t1144  L_4 = ___y;
		NullCheck((TimeSpan_t1144 *)(&___x));
		bool L_5 = TimeSpan_Equals_m10965((TimeSpan_t1144 *)(&___x), (TimeSpan_t1144 )L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif

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
extern "C" void EqualityComparer_1__ctor_m20237_gshared (EqualityComparer_1_t2632 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m413((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3053_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t702_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m20238_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		Object_t * L_7 = Activator_CreateInstance_m10247(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2632_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2632 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2633 * L_8 = (DefaultComparer_t2633 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2633 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2632_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20239_gshared (EqualityComparer_1_t2632 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2632 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t1144  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T) */, (EqualityComparer_1_t2632 *)__this, (TimeSpan_t1144 )((*(TimeSpan_t1144 *)((TimeSpan_t1144 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20240_gshared (EqualityComparer_1_t2632 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2632 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, TimeSpan_t1144 , TimeSpan_t1144  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T) */, (EqualityComparer_1_t2632 *)__this, (TimeSpan_t1144 )((*(TimeSpan_t1144 *)((TimeSpan_t1144 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (TimeSpan_t1144 )((*(TimeSpan_t1144 *)((TimeSpan_t1144 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern "C" EqualityComparer_1_t2632 * EqualityComparer_1_get_Default_m20241_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2632 * L_0 = ((EqualityComparer_1_t2632_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20242_gshared (DefaultComparer_t2633 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2632 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2632 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2632 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20243_gshared (DefaultComparer_t2633 * __this, TimeSpan_t1144  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t1144  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((TimeSpan_t1144 *)(&___obj));
		int32_t L_1 = TimeSpan_GetHashCode_m10974((TimeSpan_t1144 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20244_gshared (DefaultComparer_t2633 * __this, TimeSpan_t1144  ___x, TimeSpan_t1144  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t1144  L_0 = ___x;
		goto IL_0015;
	}
	{
		TimeSpan_t1144  L_1 = ___y;
		TimeSpan_t1144  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t1144  L_4 = ___y;
		TimeSpan_t1144  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((TimeSpan_t1144 *)(&___x));
		bool L_7 = TimeSpan_Equals_m10967((TimeSpan_t1144 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
