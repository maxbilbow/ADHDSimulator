﻿#include "il2cpp-config.h"
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

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0.h"
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
extern "C" void PatternLinkStack__ctor_m5756 (PatternLinkStack_t1195 * __this, const MethodInfo* method)
{
	{
		LinkStack__ctor_m5803(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void PatternLinkStack_set_BaseAddress_m5757 (PatternLinkStack_t1195 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Link_t1194 * L_0 = &(__this->___link_1);
		int32_t L_1 = ___value;
		L_0->___base_addr_0 = L_1;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
extern "C" int32_t PatternLinkStack_get_OffsetAddress_m5758 (PatternLinkStack_t1195 * __this, const MethodInfo* method)
{
	{
		Link_t1194 * L_0 = &(__this->___link_1);
		int32_t L_1 = (L_0->___offset_addr_1);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
extern "C" void PatternLinkStack_set_OffsetAddress_m5759 (PatternLinkStack_t1195 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Link_t1194 * L_0 = &(__this->___link_1);
		int32_t L_1 = ___value;
		L_0->___offset_addr_1 = L_1;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
extern "C" int32_t PatternLinkStack_GetOffset_m5760 (PatternLinkStack_t1195 * __this, int32_t ___target_addr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___target_addr;
		Link_t1194 * L_1 = &(__this->___link_1);
		int32_t L_2 = (L_1->___base_addr_0);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
extern TypeInfo* Link_t1194_il2cpp_TypeInfo_var;
extern "C" Object_t * PatternLinkStack_GetCurrent_m5761 (PatternLinkStack_t1195 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Link_t1194_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(809);
		s_Il2CppMethodIntialized = true;
	}
	{
		Link_t1194  L_0 = (__this->___link_1);
		Link_t1194  L_1 = L_0;
		Object_t * L_2 = Box(Link_t1194_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Link_t1194_il2cpp_TypeInfo_var;
extern "C" void PatternLinkStack_SetCurrent_m5762 (PatternLinkStack_t1195 * __this, Object_t * ___l, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Link_t1194_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(809);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___l;
		__this->___link_1 = ((*(Link_t1194 *)((Link_t1194 *)UnBox (L_0, Link_t1194_il2cpp_TypeInfo_var))));
		return;
	}
}
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompiler.h"
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompilerMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Text.RegularExpressions.OpCode
#include "System_System_Text_RegularExpressions_OpCode.h"
// System.Text.RegularExpressions.OpFlags
#include "System_System_Text_RegularExpressions_OpFlags.h"
#include "mscorlib_ArrayTypes.h"
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactory.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArray.h"
// System.String
#include "mscorlib_System_String.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactoryMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArrayMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern "C" void PatternCompiler__ctor_m5763 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		__this->___pgm_0 = L_0;
		return;
	}
}
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
// System.Text.RegularExpressions.OpCode
#include "System_System_Text_RegularExpressions_OpCode.h"
// System.Text.RegularExpressions.OpFlags
#include "System_System_Text_RegularExpressions_OpFlags.h"
extern "C" uint16_t PatternCompiler_EncodeOp_m5764 (Object_t * __this /* static, unused */, uint16_t ___op, uint16_t ___flags, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___op;
		uint16_t L_1 = ___flags;
		return (((uint16_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65280)))))));
	}
}
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactoryMethodDeclarations.h"
extern TypeInfo* UInt16U5BU5D_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* InterpreterFactory_t1193_il2cpp_TypeInfo_var;
extern "C" Object_t * PatternCompiler_GetMachineFactory_m5765 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16U5BU5D_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		InterpreterFactory_t1193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(810);
		s_Il2CppMethodIntialized = true;
	}
	UInt16U5BU5D_t1126* V_0 = {0};
	{
		ArrayList_t920 * L_0 = (__this->___pgm_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = ((UInt16U5BU5D_t1126*)SZArrayNew(UInt16U5BU5D_t1126_il2cpp_TypeInfo_var, L_1));
		ArrayList_t920 * L_2 = (__this->___pgm_0);
		UInt16U5BU5D_t1126* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< Array_t * >::Invoke(39 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_2, (Array_t *)(Array_t *)L_3);
		UInt16U5BU5D_t1126* L_4 = V_0;
		InterpreterFactory_t1193 * L_5 = (InterpreterFactory_t1193 *)il2cpp_codegen_object_new (InterpreterFactory_t1193_il2cpp_TypeInfo_var);
		InterpreterFactory__ctor_m5747(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompilerMethodDeclarations.h"
extern "C" void PatternCompiler_EmitFalse_m5766 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	{
		PatternCompiler_Emit_m5797(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern "C" void PatternCompiler_EmitTrue_m5767 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	{
		PatternCompiler_Emit_m5797(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void PatternCompiler_EmitCount_m5768 (PatternCompiler_t1197 * __this, int32_t ___count, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___count;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65535))))), /*hidden argument*/NULL);
		uint32_t L_2 = V_0;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)((int32_t)((uint32_t)L_2>>((int32_t)16))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
// System.Char
#include "mscorlib_System_Char.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" void PatternCompiler_EmitCharacter_m5769 (PatternCompiler_t1197 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___negate;
		bool L_1 = ___ignore;
		bool L_2 = ___reverse;
		uint16_t L_3 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, 5, L_3, /*hidden argument*/NULL);
		bool L_4 = ___ignore;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		uint16_t L_5 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		uint16_t L_6 = Char_ToLower_m2554(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		___c = L_6;
	}

IL_001f:
	{
		uint16_t L_7 = ___c;
		PatternCompiler_Emit_m5799(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
extern "C" void PatternCompiler_EmitCategory_m5770 (PatternCompiler_t1197 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method)
{
	{
		bool L_0 = ___negate;
		bool L_1 = ___reverse;
		uint16_t L_2 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, L_0, 0, L_1, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, 6, L_2, /*hidden argument*/NULL);
		uint16_t L_3 = ___cat;
		PatternCompiler_Emit_m5799(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitNotCategory_m5771 (PatternCompiler_t1197 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method)
{
	{
		bool L_0 = ___negate;
		bool L_1 = ___reverse;
		uint16_t L_2 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, L_0, 0, L_1, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, 7, L_2, /*hidden argument*/NULL);
		uint16_t L_3 = ___cat;
		PatternCompiler_Emit_m5799(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitRange_m5772 (PatternCompiler_t1197 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	{
		bool L_0 = ___negate;
		bool L_1 = ___ignore;
		bool L_2 = ___reverse;
		uint16_t L_3 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, 8, L_3, /*hidden argument*/NULL);
		uint16_t L_4 = ___lo;
		PatternCompiler_Emit_m5799(__this, L_4, /*hidden argument*/NULL);
		uint16_t L_5 = ___hi;
		PatternCompiler_Emit_m5799(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArray.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArrayMethodDeclarations.h"
extern "C" void PatternCompiler_EmitSet_m5773 (PatternCompiler_t1197 * __this, uint16_t ___lo, BitArray_t1230 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = ___negate;
		bool L_1 = ___ignore;
		bool L_2 = ___reverse;
		uint16_t L_3 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, ((int32_t)9), L_3, /*hidden argument*/NULL);
		uint16_t L_4 = ___lo;
		PatternCompiler_Emit_m5799(__this, L_4, /*hidden argument*/NULL);
		BitArray_t1230 * L_5 = ___set;
		NullCheck(L_5);
		int32_t L_6 = BitArray_get_Length_m6170(L_5, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6+(int32_t)((int32_t)15)))>>(int32_t)4));
		int32_t L_7 = V_0;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_7)), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_007d;
	}

IL_0035:
	{
		V_2 = 0;
		V_3 = 0;
		goto IL_006e;
	}

IL_003e:
	{
		int32_t L_8 = V_1;
		BitArray_t1230 * L_9 = ___set;
		NullCheck(L_9);
		int32_t L_10 = BitArray_get_Length_m6170(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0076;
	}

IL_004f:
	{
		BitArray_t1230 * L_11 = ___set;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
		NullCheck(L_11);
		bool L_14 = BitArray_get_Item_m6171(L_11, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		uint16_t L_15 = V_2;
		int32_t L_16 = V_3;
		V_2 = (((uint16_t)((int32_t)((int32_t)L_15|(int32_t)(((uint16_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31)))))))))));
	}

IL_006a:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)16))))
		{
			goto IL_003e;
		}
	}

IL_0076:
	{
		uint16_t L_19 = V_2;
		PatternCompiler_Emit_m5799(__this, L_19, /*hidden argument*/NULL);
	}

IL_007d:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		V_0 = ((int32_t)((int32_t)L_21-(int32_t)1));
		if (L_21)
		{
			goto IL_0035;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" void PatternCompiler_EmitString_m5774 (PatternCompiler_t1197 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = ___ignore;
		bool L_1 = ___reverse;
		uint16_t L_2 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, 0, L_0, L_1, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, 3, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m478(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_5)), /*hidden argument*/NULL);
		bool L_6 = ___ignore;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_7 = ___str;
		NullCheck(L_7);
		String_t* L_8 = String_ToLower_m1063(L_7, /*hidden argument*/NULL);
		___str = L_8;
	}

IL_002d:
	{
		V_1 = 0;
		goto IL_0045;
	}

IL_0034:
	{
		String_t* L_9 = ___str;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m477(L_9, L_10, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5799(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
extern "C" void PatternCompiler_EmitPosition_m5775 (PatternCompiler_t1197 * __this, uint16_t ___pos, const MethodInfo* method)
{
	{
		PatternCompiler_Emit_m5798(__this, 2, 0, /*hidden argument*/NULL);
		uint16_t L_0 = ___pos;
		PatternCompiler_Emit_m5799(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern "C" void PatternCompiler_EmitOpen_m5776 (PatternCompiler_t1197 * __this, int32_t ___gid, const MethodInfo* method)
{
	{
		PatternCompiler_Emit_m5797(__this, ((int32_t)11), /*hidden argument*/NULL);
		int32_t L_0 = ___gid;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern "C" void PatternCompiler_EmitClose_m5777 (PatternCompiler_t1197 * __this, int32_t ___gid, const MethodInfo* method)
{
	{
		PatternCompiler_Emit_m5797(__this, ((int32_t)12), /*hidden argument*/NULL);
		int32_t L_0 = ___gid;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
extern "C" void PatternCompiler_EmitBalanceStart_m5778 (PatternCompiler_t1197 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t1192 * ___tail, const MethodInfo* method)
{
	PatternCompiler_t1197 * G_B2_0 = {0};
	PatternCompiler_t1197 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	PatternCompiler_t1197 * G_B3_1 = {0};
	{
		LinkRef_t1192 * L_0 = ___tail;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5797(__this, ((int32_t)14), /*hidden argument*/NULL);
		int32_t L_1 = ___gid;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = ___balance;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_2)), /*hidden argument*/NULL);
		bool L_3 = ___capture;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		PatternCompiler_Emit_m5799(G_B3_1, (((uint16_t)G_B3_0)), /*hidden argument*/NULL);
		LinkRef_t1192 * L_4 = ___tail;
		PatternCompiler_EmitLink_m5802(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern "C" void PatternCompiler_EmitBalance_m5779 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	{
		PatternCompiler_Emit_m5797(__this, ((int32_t)13), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitReference_m5780 (PatternCompiler_t1197 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	{
		bool L_0 = ___ignore;
		bool L_1 = ___reverse;
		uint16_t L_2 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, 0, L_0, L_1, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, 4, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___gid;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_3)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitIfDefined_m5781 (PatternCompiler_t1197 * __this, int32_t ___gid, LinkRef_t1192 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___tail;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5797(__this, ((int32_t)15), /*hidden argument*/NULL);
		LinkRef_t1192 * L_1 = ___tail;
		PatternCompiler_EmitLink_m5802(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___gid;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitSub_m5782 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___tail;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5797(__this, ((int32_t)16), /*hidden argument*/NULL);
		LinkRef_t1192 * L_1 = ___tail;
		PatternCompiler_EmitLink_m5802(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitTest_m5783 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___yes, LinkRef_t1192 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___yes;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		LinkRef_t1192 * L_1 = ___tail;
		PatternCompiler_BeginLink_m5801(__this, L_1, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5797(__this, ((int32_t)17), /*hidden argument*/NULL);
		LinkRef_t1192 * L_2 = ___yes;
		PatternCompiler_EmitLink_m5802(__this, L_2, /*hidden argument*/NULL);
		LinkRef_t1192 * L_3 = ___tail;
		PatternCompiler_EmitLink_m5802(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitBranch_m5784 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___next, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___next;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, ((int32_t)18), 0, /*hidden argument*/NULL);
		LinkRef_t1192 * L_1 = ___next;
		PatternCompiler_EmitLink_m5802(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitJump_m5785 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___target, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___target;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, ((int32_t)19), 0, /*hidden argument*/NULL);
		LinkRef_t1192 * L_1 = ___target;
		PatternCompiler_EmitLink_m5802(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitRepeat_m5786 (PatternCompiler_t1197 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t1192 * ___until, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___until;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___lazy;
		uint16_t L_2 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, 0, 0, 0, L_1, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, ((int32_t)20), L_2, /*hidden argument*/NULL);
		LinkRef_t1192 * L_3 = ___until;
		PatternCompiler_EmitLink_m5802(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___min;
		PatternCompiler_EmitCount_m5768(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___max;
		PatternCompiler_EmitCount_m5768(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitUntil_m5787 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___repeat, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___repeat;
		VirtActionInvoker1< LinkRef_t1192 * >::Invoke(33 /* System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, __this, L_0);
		PatternCompiler_Emit_m5797(__this, ((int32_t)21), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitFastRepeat_m5788 (PatternCompiler_t1197 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t1192 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___tail;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___lazy;
		uint16_t L_2 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, 0, 0, 0, L_1, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, ((int32_t)22), L_2, /*hidden argument*/NULL);
		LinkRef_t1192 * L_3 = ___tail;
		PatternCompiler_EmitLink_m5802(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___min;
		PatternCompiler_EmitCount_m5768(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___max;
		PatternCompiler_EmitCount_m5768(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitIn_m5789 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___tail;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5797(__this, ((int32_t)10), /*hidden argument*/NULL);
		LinkRef_t1192 * L_1 = ___tail;
		PatternCompiler_EmitLink_m5802(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitAnchor_m5790 (PatternCompiler_t1197 * __this, bool ___reverse, int32_t ___offset, LinkRef_t1192 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t1192 * L_0 = ___tail;
		PatternCompiler_BeginLink_m5801(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___reverse;
		uint16_t L_2 = PatternCompiler_MakeFlags_m5796(NULL /*static, unused*/, 0, 0, L_1, 0, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5798(__this, ((int32_t)23), L_2, /*hidden argument*/NULL);
		LinkRef_t1192 * L_3 = ___tail;
		PatternCompiler_EmitLink_m5802(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___offset;
		PatternCompiler_Emit_m5799(__this, (((uint16_t)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C" void PatternCompiler_EmitInfo_m5791 (PatternCompiler_t1197 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		PatternCompiler_Emit_m5797(__this, ((int32_t)24), /*hidden argument*/NULL);
		int32_t L_0 = ___count;
		PatternCompiler_EmitCount_m5768(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___min;
		PatternCompiler_EmitCount_m5768(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___max;
		PatternCompiler_EmitCount_m5768(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0MethodDeclarations.h"
extern TypeInfo* PatternLinkStack_t1195_il2cpp_TypeInfo_var;
extern "C" LinkRef_t1192 * PatternCompiler_NewLink_m5792 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PatternLinkStack_t1195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(811);
		s_Il2CppMethodIntialized = true;
	}
	{
		PatternLinkStack_t1195 * L_0 = (PatternLinkStack_t1195 *)il2cpp_codegen_object_new (PatternLinkStack_t1195_il2cpp_TypeInfo_var);
		PatternLinkStack__ctor_m5756(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
extern TypeInfo* PatternLinkStack_t1195_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t837_il2cpp_TypeInfo_var;
extern "C" void PatternCompiler_ResolveLink_m5793 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___lref, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PatternLinkStack_t1195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(811);
		UInt16_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	PatternLinkStack_t1195 * V_0 = {0};
	{
		LinkRef_t1192 * L_0 = ___lref;
		V_0 = ((PatternLinkStack_t1195 *)CastclassClass(L_0, PatternLinkStack_t1195_il2cpp_TypeInfo_var));
		goto IL_002f;
	}

IL_000c:
	{
		ArrayList_t920 * L_1 = (__this->___pgm_0);
		PatternLinkStack_t1195 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = PatternLinkStack_get_OffsetAddress_m5758(L_2, /*hidden argument*/NULL);
		PatternLinkStack_t1195 * L_4 = V_0;
		int32_t L_5 = PatternCompiler_get_CurrentAddress_m5800(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = PatternLinkStack_GetOffset_m5760(L_4, L_5, /*hidden argument*/NULL);
		uint16_t L_7 = (((uint16_t)L_6));
		Object_t * L_8 = Box(UInt16_t837_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(21 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_1, L_3, L_8);
	}

IL_002f:
	{
		PatternLinkStack_t1195 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = LinkStack_Pop_m5805(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern "C" void PatternCompiler_EmitBranchEnd_m5794 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern "C" void PatternCompiler_EmitAlternationEnd_m5795 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" uint16_t PatternCompiler_MakeFlags_m5796 (Object_t * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method)
{
	uint16_t V_0 = {0};
	{
		V_0 = 0;
		bool L_0 = ___negate;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint16_t L_1 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)256)))));
	}

IL_0011:
	{
		bool L_2 = ___ignore;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)512)))));
	}

IL_0020:
	{
		bool L_4 = ___reverse;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		uint16_t L_5 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)1024)))));
	}

IL_002f:
	{
		bool L_6 = ___lazy;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_7 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)2048)))));
	}

IL_003e:
	{
		uint16_t L_8 = V_0;
		return L_8;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern "C" void PatternCompiler_Emit_m5797 (PatternCompiler_t1197 * __this, uint16_t ___op, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___op;
		PatternCompiler_Emit_m5798(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C" void PatternCompiler_Emit_m5798 (PatternCompiler_t1197 * __this, uint16_t ___op, uint16_t ___flags, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___op;
		uint16_t L_1 = ___flags;
		uint16_t L_2 = PatternCompiler_EncodeOp_m5764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5799(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo* UInt16_t837_il2cpp_TypeInfo_var;
extern "C" void PatternCompiler_Emit_m5799 (PatternCompiler_t1197 * __this, uint16_t ___word, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->___pgm_0);
		uint16_t L_1 = ___word;
		uint16_t L_2 = L_1;
		Object_t * L_3 = Box(UInt16_t837_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_3);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern "C" int32_t PatternCompiler_get_CurrentAddress_m5800 (PatternCompiler_t1197 * __this, const MethodInfo* method)
{
	{
		ArrayList_t920 * L_0 = (__this->___pgm_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern TypeInfo* PatternLinkStack_t1195_il2cpp_TypeInfo_var;
extern "C" void PatternCompiler_BeginLink_m5801 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___lref, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PatternLinkStack_t1195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(811);
		s_Il2CppMethodIntialized = true;
	}
	PatternLinkStack_t1195 * V_0 = {0};
	{
		LinkRef_t1192 * L_0 = ___lref;
		V_0 = ((PatternLinkStack_t1195 *)CastclassClass(L_0, PatternLinkStack_t1195_il2cpp_TypeInfo_var));
		PatternLinkStack_t1195 * L_1 = V_0;
		int32_t L_2 = PatternCompiler_get_CurrentAddress_m5800(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PatternLinkStack_set_BaseAddress_m5757(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern TypeInfo* PatternLinkStack_t1195_il2cpp_TypeInfo_var;
extern "C" void PatternCompiler_EmitLink_m5802 (PatternCompiler_t1197 * __this, LinkRef_t1192 * ___lref, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PatternLinkStack_t1195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(811);
		s_Il2CppMethodIntialized = true;
	}
	PatternLinkStack_t1195 * V_0 = {0};
	{
		LinkRef_t1192 * L_0 = ___lref;
		V_0 = ((PatternLinkStack_t1195 *)CastclassClass(L_0, PatternLinkStack_t1195_il2cpp_TypeInfo_var));
		PatternLinkStack_t1195 * L_1 = V_0;
		int32_t L_2 = PatternCompiler_get_CurrentAddress_m5800(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PatternLinkStack_set_OffsetAddress_m5759(L_1, L_2, /*hidden argument*/NULL);
		PatternCompiler_Emit_m5799(__this, 0, /*hidden argument*/NULL);
		PatternLinkStack_t1195 * L_3 = V_0;
		NullCheck(L_3);
		LinkStack_Push_m5804(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStack.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.LinkStack::.ctor()
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern TypeInfo* Stack_t792_il2cpp_TypeInfo_var;
extern "C" void LinkStack__ctor_m5803 (LinkStack_t1196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(812);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkRef__ctor_m5746(__this, /*hidden argument*/NULL);
		Stack_t792 * L_0 = (Stack_t792 *)il2cpp_codegen_object_new (Stack_t792_il2cpp_TypeInfo_var);
		Stack__ctor_m4161(L_0, /*hidden argument*/NULL);
		__this->___stack_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.LinkStack::Push()
extern "C" void LinkStack_Push_m5804 (LinkStack_t1196 * __this, const MethodInfo* method)
{
	{
		Stack_t792 * L_0 = (__this->___stack_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Text.RegularExpressions.LinkStack::GetCurrent() */, __this);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.LinkStack::Pop()
extern "C" bool LinkStack_Pop_m5805 (LinkStack_t1196 * __this, const MethodInfo* method)
{
	{
		Stack_t792 * L_0 = (__this->___stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Stack_t792 * L_2 = (__this->___stack_0);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_2);
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Text.RegularExpressions.LinkStack::SetCurrent(System.Object) */, __this, L_3);
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
extern "C" bool Mark_get_IsDefined_m5806 (Mark_t1198 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___Start_0);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = (__this->___End_1);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
extern "C" int32_t Mark_get_Index_m5807 (Mark_t1198 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___Start_0);
		int32_t L_1 = (__this->___End_1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = (__this->___Start_0);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		int32_t L_3 = (__this->___End_1);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
extern "C" int32_t Mark_get_Length_m5808 (Mark_t1198 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___Start_0);
		int32_t L_1 = (__this->___End_1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (__this->___End_1);
		int32_t L_3 = (__this->___Start_0);
		G_B3_0 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		goto IL_0030;
	}

IL_0023:
	{
		int32_t L_4 = (__this->___Start_0);
		int32_t L_5 = (__this->___End_1);
		G_B3_0 = ((int32_t)((int32_t)L_4-(int32_t)L_5));
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m5809 (IntStack_t1199 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (__this->___values_0);
		int32_t L_1 = (__this->___count_1);
		int32_t L_2 = ((int32_t)((int32_t)L_1-(int32_t)1));
		V_0 = L_2;
		__this->___count_1 = L_2;
		int32_t L_3 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_3);
		int32_t L_4 = L_3;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_4, sizeof(int32_t)));
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern "C" void IntStack_Push_m5810 (IntStack_t1199 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1037* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (__this->___values_0);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		__this->___values_0 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, 8));
		goto IL_006e;
	}

IL_001c:
	{
		int32_t L_1 = (__this->___count_1);
		Int32U5BU5D_t1037* L_2 = (__this->___values_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t1037* L_3 = (__this->___values_0);
		NullCheck(L_3);
		V_0 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)L_5>>(int32_t)1))));
		int32_t L_6 = V_0;
		V_1 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_6));
		V_2 = 0;
		goto IL_005b;
	}

IL_004c:
	{
		Int32U5BU5D_t1037* L_7 = V_1;
		int32_t L_8 = V_2;
		Int32U5BU5D_t1037* L_9 = (__this->___values_0);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8, sizeof(int32_t))) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11, sizeof(int32_t)));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = (__this->___count_1);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}
	{
		Int32U5BU5D_t1037* L_15 = V_1;
		__this->___values_0 = L_15;
	}

IL_006e:
	{
		Int32U5BU5D_t1037* L_16 = (__this->___values_0);
		int32_t L_17 = (__this->___count_1);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->___count_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = ___value;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, L_19, sizeof(int32_t))) = (int32_t)L_20;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m5811 (IntStack_t1199 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern TypeInfo* SystemException_t1256_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1145;
extern "C" void IntStack_set_Count_m5812 (IntStack_t1199 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SystemException_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(787);
		_stringLiteral1145 = il2cpp_codegen_string_literal_from_index(1145);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->___count_1);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		SystemException_t1256 * L_2 = (SystemException_t1256 *)il2cpp_codegen_object_new (SystemException_t1256_il2cpp_TypeInfo_var);
		SystemException__ctor_m6163(L_2, _stringLiteral1145, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___value;
		__this->___count_1 = L_3;
		return;
	}
}
#include "mscorlib_ArrayTypes.h"
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
extern "C" void IntStack_t1199_marshal(const IntStack_t1199& unmarshaled, IntStack_t1199_marshaled& marshaled)
{
	marshaled.___values_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.___values_0);
	marshaled.___count_1 = unmarshaled.___count_1;
}
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern "C" void IntStack_t1199_marshal_back(const IntStack_t1199_marshaled& marshaled, IntStack_t1199& unmarshaled)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	unmarshaled.___values_0 = (Int32U5BU5D_t1037*)il2cpp_codegen_marshal_array_result(Int32_t151_il2cpp_TypeInfo_var, marshaled.___values_0, 1);
	unmarshaled.___count_1 = marshaled.___count_1;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
extern "C" void IntStack_t1199_marshal_cleanup(IntStack_t1199_marshaled& marshaled)
{
}
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void RepeatContext__ctor_m5813 (RepeatContext_t1200 * __this, RepeatContext_t1200 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_0 = ___previous;
		__this->___previous_5 = L_0;
		int32_t L_1 = ___min;
		__this->___min_1 = L_1;
		int32_t L_2 = ___max;
		__this->___max_2 = L_2;
		bool L_3 = ___lazy;
		__this->___lazy_3 = L_3;
		int32_t L_4 = ___expr_pc;
		__this->___expr_pc_4 = L_4;
		__this->___start_0 = (-1);
		__this->___count_6 = 0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
extern "C" int32_t RepeatContext_get_Count_m5814 (RepeatContext_t1200 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_6);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
extern "C" void RepeatContext_set_Count_m5815 (RepeatContext_t1200 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___count_6 = L_0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
extern "C" int32_t RepeatContext_get_Start_m5816 (RepeatContext_t1200 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___start_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
extern "C" void RepeatContext_set_Start_m5817 (RepeatContext_t1200 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___start_0 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
extern "C" bool RepeatContext_get_IsMinimum_m5818 (RepeatContext_t1200 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___min_1);
		int32_t L_1 = (__this->___count_6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
extern "C" bool RepeatContext_get_IsMaximum_m5819 (RepeatContext_t1200 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___max_2);
		int32_t L_1 = (__this->___count_6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
extern "C" bool RepeatContext_get_IsLazy_m5820 (RepeatContext_t1200 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___lazy_3);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
extern "C" int32_t RepeatContext_get_Expression_m5821 (RepeatContext_t1200 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___expr_pc_4);
		return L_0;
	}
}
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
extern "C" RepeatContext_t1200 * RepeatContext_get_Previous_m5822 (RepeatContext_t1200 * __this, const MethodInfo* method)
{
	{
		RepeatContext_t1200 * L_0 = (__this->___previous_5);
		return L_0;
	}
}
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_ModeMethodDeclarations.h"
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_Interpreter.h"
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearch.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
#include "System_ArrayTypes.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.CaptureCollection
#include "System_System_Text_RegularExpressions_CaptureCollection.h"
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachine.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachineMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.CaptureCollection
#include "System_System_Text_RegularExpressions_CaptureCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
#include "mscorlib_ArrayTypes.h"
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachineMethodDeclarations.h"
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"
extern TypeInfo* IntStack_t1199_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern "C" void Interpreter__ctor_m5823 (Interpreter_t1202 * __this, UInt16U5BU5D_t1126* ___program, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntStack_t1199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(813);
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	IntStack_t1199  V_0 = {0};
	{
		Initobj (IntStack_t1199_il2cpp_TypeInfo_var, (&V_0));
		IntStack_t1199  L_0 = V_0;
		__this->___stack_11 = L_0;
		BaseMachine__ctor_m5654(__this, /*hidden argument*/NULL);
		UInt16U5BU5D_t1126* L_1 = ___program;
		__this->___program_1 = L_1;
		__this->___qs_7 = (QuickSearch_t1203 *)NULL;
		int32_t L_2 = Interpreter_ReadProgramCount_m5824(__this, 1, /*hidden argument*/NULL);
		__this->___group_count_5 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = Interpreter_ReadProgramCount_m5824(__this, 3, /*hidden argument*/NULL);
		__this->___match_min_6 = L_3;
		__this->___program_start_2 = 7;
		int32_t L_4 = (__this->___group_count_5);
		__this->___groups_16 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_4));
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Interpreter_ReadProgramCount_m5824 (Interpreter_t1202 * __this, int32_t ___ptr, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UInt16U5BU5D_t1126* L_0 = (__this->___program_1);
		int32_t L_1 = ___ptr;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, ((int32_t)((int32_t)L_1+(int32_t)1)));
		int32_t L_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2, sizeof(uint16_t)));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3<<(int32_t)((int32_t)16)));
		int32_t L_4 = V_0;
		UInt16U5BU5D_t1126* L_5 = (__this->___program_1);
		int32_t L_6 = ___ptr;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7, sizeof(uint16_t)))));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.String
#include "mscorlib_System_String.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
extern TypeInfo* Match_t1087_il2cpp_TypeInfo_var;
extern "C" Match_t1087 * Interpreter_Scan_m5825 (Interpreter_t1202 * __this, Regex_t877 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Match_t1087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(793);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		__this->___text_3 = L_0;
		int32_t L_1 = ___end;
		__this->___text_end_4 = L_1;
		int32_t L_2 = ___start;
		__this->___scan_ptr_8 = L_2;
		int32_t* L_3 = &(__this->___scan_ptr_8);
		int32_t L_4 = (__this->___program_start_2);
		bool L_5 = Interpreter_Eval_m5827(__this, 1, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Regex_t877 * L_6 = ___regex;
		Match_t1087 * L_7 = Interpreter_GenerateMatch_m5843(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Match_t1087_il2cpp_TypeInfo_var);
		Match_t1087 * L_8 = Match_get_Empty_m5688(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern "C" void Interpreter_Reset_m5826 (Interpreter_t1202 * __this, const MethodInfo* method)
{
	RepeatContext_t1200 * V_0 = {0};
	{
		Interpreter_ResetGroups_m5838(__this, /*hidden argument*/NULL);
		V_0 = (RepeatContext_t1200 *)NULL;
		__this->___repeat_9 = (RepeatContext_t1200 *)NULL;
		RepeatContext_t1200 * L_0 = V_0;
		__this->___fast_10 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"
extern TypeInfo* QuickSearch_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* RepeatContext_t1200_il2cpp_TypeInfo_var;
extern "C" bool Interpreter_Eval_m5827 (Interpreter_t1202 * __this, int32_t ___mode, int32_t* ___ref_ptr, int32_t ___pc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QuickSearch_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(814);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		RepeatContext_t1200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(815);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = {0};
	uint16_t V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint16_t V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = {0};
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint16_t V_18 = 0x0;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	uint16_t V_31 = {0};
	int32_t V_32 = 0;
	RepeatContext_t1200 * V_33 = {0};
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	uint16_t V_42 = 0;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	uint16_t V_46 = {0};
	uint16_t V_47 = {0};
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	int32_t V_51 = 0;
	uint16_t V_52 = {0};
	uint16_t V_53 = {0};
	int32_t V_54 = {0};
	int32_t G_B7_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B162_0 = 0;
	int32_t G_B162_1 = 0;
	Interpreter_t1202 * G_B162_2 = {0};
	int32_t G_B161_0 = 0;
	int32_t G_B161_1 = 0;
	Interpreter_t1202 * G_B161_2 = {0};
	int32_t G_B163_0 = 0;
	int32_t G_B163_1 = 0;
	int32_t G_B163_2 = 0;
	Interpreter_t1202 * G_B163_3 = {0};
	{
		int32_t* L_0 = ___ref_ptr;
		V_0 = (*((int32_t*)L_0));
	}

IL_0003:
	{
		goto IL_0fee;
	}

IL_0008:
	{
		UInt16U5BU5D_t1126* L_1 = (__this->___program_1);
		int32_t L_2 = ___pc;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3, sizeof(uint16_t)));
		uint16_t L_4 = V_1;
		V_2 = (((uint16_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		uint16_t L_5 = V_1;
		V_3 = (((uint16_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)65280)))));
		uint16_t L_6 = V_2;
		V_52 = L_6;
		uint16_t L_7 = V_52;
		if (L_7 == 0)
		{
			goto IL_04b8;
		}
		if (L_7 == 1)
		{
			goto IL_04bd;
		}
		if (L_7 == 2)
		{
			goto IL_04c2;
		}
		if (L_7 == 3)
		{
			goto IL_04e7;
		}
		if (L_7 == 4)
		{
			goto IL_05ab;
		}
		if (L_7 == 5)
		{
			goto IL_06ef;
		}
		if (L_7 == 6)
		{
			goto IL_06ef;
		}
		if (L_7 == 7)
		{
			goto IL_06ef;
		}
		if (L_7 == 8)
		{
			goto IL_06ef;
		}
		if (L_7 == 9)
		{
			goto IL_06ef;
		}
		if (L_7 == 10)
		{
			goto IL_070a;
		}
		if (L_7 == 11)
		{
			goto IL_073c;
		}
		if (L_7 == 12)
		{
			goto IL_0757;
		}
		if (L_7 == 13)
		{
			goto IL_07db;
		}
		if (L_7 == 14)
		{
			goto IL_0772;
		}
		if (L_7 == 15)
		{
			goto IL_07e0;
		}
		if (L_7 == 16)
		{
			goto IL_0817;
		}
		if (L_7 == 17)
		{
			goto IL_0840;
		}
		if (L_7 == 18)
		{
			goto IL_088a;
		}
		if (L_7 == 19)
		{
			goto IL_08db;
		}
		if (L_7 == 20)
		{
			goto IL_08ee;
		}
		if (L_7 == 21)
		{
			goto IL_0957;
		}
		if (L_7 == 22)
		{
			goto IL_0c6f;
		}
		if (L_7 == 23)
		{
			goto IL_0096;
		}
		if (L_7 == 24)
		{
			goto IL_0fe9;
		}
	}
	{
		goto IL_0fee;
	}

IL_0096:
	{
		UInt16U5BU5D_t1126* L_8 = (__this->___program_1);
		int32_t L_9 = ___pc;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10, sizeof(uint16_t)));
		UInt16U5BU5D_t1126* L_11 = (__this->___program_1);
		int32_t L_12 = ___pc;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12+(int32_t)2)));
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)2));
		V_5 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13, sizeof(uint16_t)));
		uint16_t L_14 = V_3;
		V_6 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_5;
		G_B7_0 = ((int32_t)((int32_t)L_16-(int32_t)L_17));
		goto IL_00d2;
	}

IL_00ce:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_5;
		G_B7_0 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_00d2:
	{
		V_7 = G_B7_0;
		int32_t L_20 = (__this->___text_end_4);
		int32_t L_21 = (__this->___match_min_6);
		int32_t L_22 = V_5;
		V_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_20-(int32_t)L_21))+(int32_t)L_22));
		V_9 = 0;
		UInt16U5BU5D_t1126* L_23 = (__this->___program_1);
		int32_t L_24 = ___pc;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)3)));
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)3));
		V_10 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25, sizeof(uint16_t)))&(int32_t)((int32_t)255)))));
		uint16_t L_26 = V_10;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_27 = V_4;
		if ((!(((uint32_t)L_27) == ((uint32_t)6))))
		{
			goto IL_0285;
		}
	}
	{
		UInt16U5BU5D_t1126* L_28 = (__this->___program_1);
		int32_t L_29 = ___pc;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)4)));
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)4));
		V_53 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30, sizeof(uint16_t)));
		uint16_t L_31 = V_53;
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 0)
		{
			goto IL_0132;
		}
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 1)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 2)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_027b;
	}

IL_0132:
	{
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_33 = V_5;
		if (L_33)
		{
			goto IL_0160;
		}
	}

IL_0140:
	{
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_35 = V_5;
		V_0 = L_35;
	}

IL_014a:
	{
		int32_t L_36 = ___pc;
		int32_t L_37 = V_4;
		bool L_38 = Interpreter_TryMatch_m5829(__this, (&V_0), ((int32_t)((int32_t)L_36+(int32_t)L_37)), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0160:
	{
		goto IL_0280;
	}

IL_0165:
	{
		int32_t L_39 = V_7;
		if (L_39)
		{
			goto IL_018a;
		}
	}
	{
		V_0 = 0;
		int32_t L_40 = ___pc;
		int32_t L_41 = V_4;
		bool L_42 = Interpreter_TryMatch_m5829(__this, (&V_0), ((int32_t)((int32_t)L_40+(int32_t)L_41)), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0184;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0184:
	{
		int32_t L_43 = V_7;
		V_7 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_018a:
	{
		goto IL_0210;
	}

IL_018f:
	{
		int32_t L_44 = V_7;
		if (!L_44)
		{
			goto IL_01ac;
		}
	}
	{
		String_t* L_45 = (__this->___text_3);
		int32_t L_46 = V_7;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m477(L_45, ((int32_t)((int32_t)L_46-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01f8;
		}
	}

IL_01ac:
	{
		bool L_48 = V_6;
		if (!L_48)
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_8;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_51 = V_7;
		G_B29_0 = L_51;
		goto IL_01c8;
	}

IL_01c3:
	{
		int32_t L_52 = V_7;
		int32_t L_53 = V_5;
		G_B29_0 = ((int32_t)((int32_t)L_52+(int32_t)L_53));
	}

IL_01c8:
	{
		V_0 = G_B29_0;
		goto IL_01e2;
	}

IL_01ce:
	{
		int32_t L_54 = V_7;
		if (L_54)
		{
			goto IL_01dc;
		}
	}
	{
		int32_t L_55 = V_7;
		G_B33_0 = L_55;
		goto IL_01e1;
	}

IL_01dc:
	{
		int32_t L_56 = V_7;
		int32_t L_57 = V_5;
		G_B33_0 = ((int32_t)((int32_t)L_56-(int32_t)L_57));
	}

IL_01e1:
	{
		V_0 = G_B33_0;
	}

IL_01e2:
	{
		int32_t L_58 = ___pc;
		int32_t L_59 = V_4;
		bool L_60 = Interpreter_TryMatch_m5829(__this, (&V_0), ((int32_t)((int32_t)L_58+(int32_t)L_59)), /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_01f8:
	{
		bool L_61 = V_6;
		if (!L_61)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_62 = V_7;
		V_7 = ((int32_t)((int32_t)L_62-(int32_t)1));
		goto IL_0210;
	}

IL_020a:
	{
		int32_t L_63 = V_7;
		V_7 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0210:
	{
		bool L_64 = V_6;
		if (!L_64)
		{
			goto IL_021f;
		}
	}
	{
		int32_t L_65 = V_7;
		if ((((int32_t)L_65) >= ((int32_t)0)))
		{
			goto IL_018f;
		}
	}

IL_021f:
	{
		bool L_66 = V_6;
		if (L_66)
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_67 = V_7;
		int32_t L_68 = V_8;
		if ((((int32_t)L_67) <= ((int32_t)L_68)))
		{
			goto IL_018f;
		}
	}

IL_022f:
	{
		goto IL_0280;
	}

IL_0234:
	{
		int32_t L_69 = V_7;
		int32_t L_70 = (__this->___scan_ptr_8);
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0276;
		}
	}
	{
		bool L_71 = V_6;
		if (!L_71)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_72 = (__this->___scan_ptr_8);
		int32_t L_73 = V_5;
		G_B48_0 = ((int32_t)((int32_t)L_72+(int32_t)L_73));
		goto IL_025f;
	}

IL_0256:
	{
		int32_t L_74 = (__this->___scan_ptr_8);
		int32_t L_75 = V_5;
		G_B48_0 = ((int32_t)((int32_t)L_74-(int32_t)L_75));
	}

IL_025f:
	{
		V_0 = G_B48_0;
		int32_t L_76 = ___pc;
		int32_t L_77 = V_4;
		bool L_78 = Interpreter_TryMatch_m5829(__this, (&V_0), ((int32_t)((int32_t)L_76+(int32_t)L_77)), /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0276:
	{
		goto IL_0280;
	}

IL_027b:
	{
		goto IL_0280;
	}

IL_0280:
	{
		goto IL_04b3;
	}

IL_0285:
	{
		QuickSearch_t1203 * L_79 = (__this->___qs_7);
		if (L_79)
		{
			goto IL_02ab;
		}
	}
	{
		uint16_t L_80 = V_10;
		if ((!(((uint32_t)L_80) == ((uint32_t)3))))
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_81 = V_4;
		UInt16U5BU5D_t1126* L_82 = (__this->___program_1);
		int32_t L_83 = ___pc;
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, ((int32_t)((int32_t)L_83+(int32_t)4)));
		int32_t L_84 = ((int32_t)((int32_t)L_83+(int32_t)4));
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)((int32_t)6+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_82, L_84, sizeof(uint16_t)))))))))
		{
			goto IL_03d2;
		}
	}

IL_02ab:
	{
		UInt16U5BU5D_t1126* L_85 = (__this->___program_1);
		int32_t L_86 = ___pc;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, ((int32_t)((int32_t)L_86+(int32_t)3)));
		int32_t L_87 = ((int32_t)((int32_t)L_86+(int32_t)3));
		V_11 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_85, L_87, sizeof(uint16_t)))&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		QuickSearch_t1203 * L_88 = (__this->___qs_7);
		if (L_88)
		{
			goto IL_0304;
		}
	}
	{
		UInt16U5BU5D_t1126* L_89 = (__this->___program_1);
		int32_t L_90 = ___pc;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, ((int32_t)((int32_t)L_90+(int32_t)3)));
		int32_t L_91 = ((int32_t)((int32_t)L_90+(int32_t)3));
		V_12 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_89, L_91, sizeof(uint16_t)))&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_92 = ___pc;
		String_t* L_93 = Interpreter_GetString_m5832(__this, ((int32_t)((int32_t)L_92+(int32_t)3)), /*hidden argument*/NULL);
		V_13 = L_93;
		String_t* L_94 = V_13;
		bool L_95 = V_12;
		bool L_96 = V_11;
		QuickSearch_t1203 * L_97 = (QuickSearch_t1203 *)il2cpp_codegen_object_new (QuickSearch_t1203_il2cpp_TypeInfo_var);
		QuickSearch__ctor_m5907(L_97, L_94, L_95, L_96, /*hidden argument*/NULL);
		__this->___qs_7 = L_97;
	}

IL_0304:
	{
		goto IL_03ad;
	}

IL_0309:
	{
		bool L_98 = V_11;
		if (!L_98)
		{
			goto IL_0344;
		}
	}
	{
		QuickSearch_t1203 * L_99 = (__this->___qs_7);
		String_t* L_100 = (__this->___text_3);
		int32_t L_101 = V_7;
		int32_t L_102 = V_9;
		NullCheck(L_99);
		int32_t L_103 = QuickSearch_Search_m5910(L_99, L_100, L_101, L_102, /*hidden argument*/NULL);
		V_7 = L_103;
		int32_t L_104 = V_7;
		if ((((int32_t)L_104) == ((int32_t)(-1))))
		{
			goto IL_033f;
		}
	}
	{
		int32_t L_105 = V_7;
		QuickSearch_t1203 * L_106 = (__this->___qs_7);
		NullCheck(L_106);
		int32_t L_107 = QuickSearch_get_Length_m5909(L_106, /*hidden argument*/NULL);
		V_7 = ((int32_t)((int32_t)L_105+(int32_t)L_107));
	}

IL_033f:
	{
		goto IL_035b;
	}

IL_0344:
	{
		QuickSearch_t1203 * L_108 = (__this->___qs_7);
		String_t* L_109 = (__this->___text_3);
		int32_t L_110 = V_7;
		int32_t L_111 = V_8;
		NullCheck(L_108);
		int32_t L_112 = QuickSearch_Search_m5910(L_108, L_109, L_110, L_111, /*hidden argument*/NULL);
		V_7 = L_112;
	}

IL_035b:
	{
		int32_t L_113 = V_7;
		if ((((int32_t)L_113) >= ((int32_t)0)))
		{
			goto IL_0368;
		}
	}
	{
		goto IL_03cd;
	}

IL_0368:
	{
		bool L_114 = V_11;
		if (!L_114)
		{
			goto IL_0379;
		}
	}
	{
		int32_t L_115 = V_7;
		int32_t L_116 = V_5;
		G_B69_0 = ((int32_t)((int32_t)L_115+(int32_t)L_116));
		goto IL_037e;
	}

IL_0379:
	{
		int32_t L_117 = V_7;
		int32_t L_118 = V_5;
		G_B69_0 = ((int32_t)((int32_t)L_117-(int32_t)L_118));
	}

IL_037e:
	{
		V_0 = G_B69_0;
		int32_t L_119 = ___pc;
		int32_t L_120 = V_4;
		bool L_121 = Interpreter_TryMatch_m5829(__this, (&V_0), ((int32_t)((int32_t)L_119+(int32_t)L_120)), /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0395;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0395:
	{
		bool L_122 = V_11;
		if (!L_122)
		{
			goto IL_03a7;
		}
	}
	{
		int32_t L_123 = V_7;
		V_7 = ((int32_t)((int32_t)L_123-(int32_t)2));
		goto IL_03ad;
	}

IL_03a7:
	{
		int32_t L_124 = V_7;
		V_7 = ((int32_t)((int32_t)L_124+(int32_t)1));
	}

IL_03ad:
	{
		bool L_125 = V_6;
		if (!L_125)
		{
			goto IL_03bd;
		}
	}
	{
		int32_t L_126 = V_7;
		int32_t L_127 = V_9;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_0309;
		}
	}

IL_03bd:
	{
		bool L_128 = V_6;
		if (L_128)
		{
			goto IL_03cd;
		}
	}
	{
		int32_t L_129 = V_7;
		int32_t L_130 = V_8;
		if ((((int32_t)L_129) <= ((int32_t)L_130)))
		{
			goto IL_0309;
		}
	}

IL_03cd:
	{
		goto IL_04b3;
	}

IL_03d2:
	{
		uint16_t L_131 = V_10;
		if ((!(((uint32_t)L_131) == ((uint32_t)1))))
		{
			goto IL_0435;
		}
	}
	{
		goto IL_0410;
	}

IL_03df:
	{
		int32_t L_132 = V_7;
		V_0 = L_132;
		int32_t L_133 = ___pc;
		int32_t L_134 = V_4;
		bool L_135 = Interpreter_TryMatch_m5829(__this, (&V_0), ((int32_t)((int32_t)L_133+(int32_t)L_134)), /*hidden argument*/NULL);
		if (!L_135)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_03f8:
	{
		bool L_136 = V_6;
		if (!L_136)
		{
			goto IL_040a;
		}
	}
	{
		int32_t L_137 = V_7;
		V_7 = ((int32_t)((int32_t)L_137-(int32_t)1));
		goto IL_0410;
	}

IL_040a:
	{
		int32_t L_138 = V_7;
		V_7 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0410:
	{
		bool L_139 = V_6;
		if (!L_139)
		{
			goto IL_0420;
		}
	}
	{
		int32_t L_140 = V_7;
		int32_t L_141 = V_9;
		if ((((int32_t)L_140) >= ((int32_t)L_141)))
		{
			goto IL_03df;
		}
	}

IL_0420:
	{
		bool L_142 = V_6;
		if (L_142)
		{
			goto IL_0430;
		}
	}
	{
		int32_t L_143 = V_7;
		int32_t L_144 = V_8;
		if ((((int32_t)L_143) <= ((int32_t)L_144)))
		{
			goto IL_03df;
		}
	}

IL_0430:
	{
		goto IL_04b3;
	}

IL_0435:
	{
		goto IL_0493;
	}

IL_043a:
	{
		int32_t L_145 = V_7;
		V_0 = L_145;
		int32_t L_146 = ___pc;
		bool L_147 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_146+(int32_t)3)), /*hidden argument*/NULL);
		if (!L_147)
		{
			goto IL_047b;
		}
	}
	{
		bool L_148 = V_6;
		if (!L_148)
		{
			goto IL_045f;
		}
	}
	{
		int32_t L_149 = V_7;
		int32_t L_150 = V_5;
		G_B96_0 = ((int32_t)((int32_t)L_149+(int32_t)L_150));
		goto IL_0464;
	}

IL_045f:
	{
		int32_t L_151 = V_7;
		int32_t L_152 = V_5;
		G_B96_0 = ((int32_t)((int32_t)L_151-(int32_t)L_152));
	}

IL_0464:
	{
		V_0 = G_B96_0;
		int32_t L_153 = ___pc;
		int32_t L_154 = V_4;
		bool L_155 = Interpreter_TryMatch_m5829(__this, (&V_0), ((int32_t)((int32_t)L_153+(int32_t)L_154)), /*hidden argument*/NULL);
		if (!L_155)
		{
			goto IL_047b;
		}
	}
	{
		goto IL_0ff3;
	}

IL_047b:
	{
		bool L_156 = V_6;
		if (!L_156)
		{
			goto IL_048d;
		}
	}
	{
		int32_t L_157 = V_7;
		V_7 = ((int32_t)((int32_t)L_157-(int32_t)1));
		goto IL_0493;
	}

IL_048d:
	{
		int32_t L_158 = V_7;
		V_7 = ((int32_t)((int32_t)L_158+(int32_t)1));
	}

IL_0493:
	{
		bool L_159 = V_6;
		if (!L_159)
		{
			goto IL_04a3;
		}
	}
	{
		int32_t L_160 = V_7;
		int32_t L_161 = V_9;
		if ((((int32_t)L_160) >= ((int32_t)L_161)))
		{
			goto IL_043a;
		}
	}

IL_04a3:
	{
		bool L_162 = V_6;
		if (L_162)
		{
			goto IL_04b3;
		}
	}
	{
		int32_t L_163 = V_7;
		int32_t L_164 = V_8;
		if ((((int32_t)L_163) <= ((int32_t)L_164)))
		{
			goto IL_043a;
		}
	}

IL_04b3:
	{
		goto IL_1067;
	}

IL_04b8:
	{
		goto IL_1067;
	}

IL_04bd:
	{
		goto IL_0ff3;
	}

IL_04c2:
	{
		UInt16U5BU5D_t1126* L_165 = (__this->___program_1);
		int32_t L_166 = ___pc;
		NullCheck(L_165);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_165, ((int32_t)((int32_t)L_166+(int32_t)1)));
		int32_t L_167 = ((int32_t)((int32_t)L_166+(int32_t)1));
		int32_t L_168 = V_0;
		bool L_169 = Interpreter_IsPosition_m5830(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_165, L_167, sizeof(uint16_t))), L_168, /*hidden argument*/NULL);
		if (L_169)
		{
			goto IL_04dd;
		}
	}
	{
		goto IL_1067;
	}

IL_04dd:
	{
		int32_t L_170 = ___pc;
		___pc = ((int32_t)((int32_t)L_170+(int32_t)2));
		goto IL_0fee;
	}

IL_04e7:
	{
		uint16_t L_171 = V_3;
		V_14 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_171&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_172 = V_3;
		V_15 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_172&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt16U5BU5D_t1126* L_173 = (__this->___program_1);
		int32_t L_174 = ___pc;
		NullCheck(L_173);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_173, ((int32_t)((int32_t)L_174+(int32_t)1)));
		int32_t L_175 = ((int32_t)((int32_t)L_174+(int32_t)1));
		V_16 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_173, L_175, sizeof(uint16_t)));
		bool L_176 = V_14;
		if (!L_176)
		{
			goto IL_0530;
		}
	}
	{
		int32_t L_177 = V_0;
		int32_t L_178 = V_16;
		V_0 = ((int32_t)((int32_t)L_177-(int32_t)L_178));
		int32_t L_179 = V_0;
		if ((((int32_t)L_179) >= ((int32_t)0)))
		{
			goto IL_052b;
		}
	}
	{
		goto IL_1067;
	}

IL_052b:
	{
		goto IL_0544;
	}

IL_0530:
	{
		int32_t L_180 = V_0;
		int32_t L_181 = V_16;
		int32_t L_182 = (__this->___text_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_180+(int32_t)L_181))) <= ((int32_t)L_182)))
		{
			goto IL_0544;
		}
	}
	{
		goto IL_1067;
	}

IL_0544:
	{
		int32_t L_183 = ___pc;
		___pc = ((int32_t)((int32_t)L_183+(int32_t)2));
		V_17 = 0;
		goto IL_0591;
	}

IL_0551:
	{
		String_t* L_184 = (__this->___text_3);
		int32_t L_185 = V_0;
		int32_t L_186 = V_17;
		NullCheck(L_184);
		uint16_t L_187 = String_get_Chars_m477(L_184, ((int32_t)((int32_t)L_185+(int32_t)L_186)), /*hidden argument*/NULL);
		V_18 = L_187;
		bool L_188 = V_15;
		if (!L_188)
		{
			goto IL_0572;
		}
	}
	{
		uint16_t L_189 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		uint16_t L_190 = Char_ToLower_m2554(NULL /*static, unused*/, L_189, /*hidden argument*/NULL);
		V_18 = L_190;
	}

IL_0572:
	{
		uint16_t L_191 = V_18;
		UInt16U5BU5D_t1126* L_192 = (__this->___program_1);
		int32_t L_193 = ___pc;
		int32_t L_194 = L_193;
		___pc = ((int32_t)((int32_t)L_194+(int32_t)1));
		NullCheck(L_192);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_192, L_194);
		int32_t L_195 = L_194;
		if ((((int32_t)L_191) == ((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_192, L_195, sizeof(uint16_t))))))
		{
			goto IL_058b;
		}
	}
	{
		goto IL_1067;
	}

IL_058b:
	{
		int32_t L_196 = V_17;
		V_17 = ((int32_t)((int32_t)L_196+(int32_t)1));
	}

IL_0591:
	{
		int32_t L_197 = V_17;
		int32_t L_198 = V_16;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_0551;
		}
	}
	{
		bool L_199 = V_14;
		if (L_199)
		{
			goto IL_05a6;
		}
	}
	{
		int32_t L_200 = V_0;
		int32_t L_201 = V_16;
		V_0 = ((int32_t)((int32_t)L_200+(int32_t)L_201));
	}

IL_05a6:
	{
		goto IL_0fee;
	}

IL_05ab:
	{
		uint16_t L_202 = V_3;
		V_19 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_202&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_203 = V_3;
		V_20 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_203&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt16U5BU5D_t1126* L_204 = (__this->___program_1);
		int32_t L_205 = ___pc;
		NullCheck(L_204);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_204, ((int32_t)((int32_t)L_205+(int32_t)1)));
		int32_t L_206 = ((int32_t)((int32_t)L_205+(int32_t)1));
		int32_t L_207 = Interpreter_GetLastDefined_m5839(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_204, L_206, sizeof(uint16_t))), /*hidden argument*/NULL);
		V_21 = L_207;
		int32_t L_208 = V_21;
		if ((((int32_t)L_208) >= ((int32_t)0)))
		{
			goto IL_05ea;
		}
	}
	{
		goto IL_1067;
	}

IL_05ea:
	{
		MarkU5BU5D_t1204* L_209 = (__this->___marks_13);
		int32_t L_210 = V_21;
		NullCheck(L_209);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_209, L_210);
		int32_t L_211 = Mark_get_Index_m5807(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_209, L_210, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		V_22 = L_211;
		MarkU5BU5D_t1204* L_212 = (__this->___marks_13);
		int32_t L_213 = V_21;
		NullCheck(L_212);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_212, L_213);
		int32_t L_214 = Mark_get_Length_m5808(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_212, L_213, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		V_23 = L_214;
		bool L_215 = V_19;
		if (!L_215)
		{
			goto IL_062f;
		}
	}
	{
		int32_t L_216 = V_0;
		int32_t L_217 = V_23;
		V_0 = ((int32_t)((int32_t)L_216-(int32_t)L_217));
		int32_t L_218 = V_0;
		if ((((int32_t)L_218) >= ((int32_t)0)))
		{
			goto IL_062a;
		}
	}
	{
		goto IL_1067;
	}

IL_062a:
	{
		goto IL_0643;
	}

IL_062f:
	{
		int32_t L_219 = V_0;
		int32_t L_220 = V_23;
		int32_t L_221 = (__this->___text_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_219+(int32_t)L_220))) <= ((int32_t)L_221)))
		{
			goto IL_0643;
		}
	}
	{
		goto IL_1067;
	}

IL_0643:
	{
		int32_t L_222 = ___pc;
		___pc = ((int32_t)((int32_t)L_222+(int32_t)2));
		bool L_223 = V_20;
		if (!L_223)
		{
			goto IL_069e;
		}
	}
	{
		V_24 = 0;
		goto IL_0690;
	}

IL_0657:
	{
		String_t* L_224 = (__this->___text_3);
		int32_t L_225 = V_0;
		int32_t L_226 = V_24;
		NullCheck(L_224);
		uint16_t L_227 = String_get_Chars_m477(L_224, ((int32_t)((int32_t)L_225+(int32_t)L_226)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		uint16_t L_228 = Char_ToLower_m2554(NULL /*static, unused*/, L_227, /*hidden argument*/NULL);
		String_t* L_229 = (__this->___text_3);
		int32_t L_230 = V_22;
		int32_t L_231 = V_24;
		NullCheck(L_229);
		uint16_t L_232 = String_get_Chars_m477(L_229, ((int32_t)((int32_t)L_230+(int32_t)L_231)), /*hidden argument*/NULL);
		uint16_t L_233 = Char_ToLower_m2554(NULL /*static, unused*/, L_232, /*hidden argument*/NULL);
		if ((((int32_t)L_228) == ((int32_t)L_233)))
		{
			goto IL_068a;
		}
	}
	{
		goto IL_1067;
	}

IL_068a:
	{
		int32_t L_234 = V_24;
		V_24 = ((int32_t)((int32_t)L_234+(int32_t)1));
	}

IL_0690:
	{
		int32_t L_235 = V_24;
		int32_t L_236 = V_23;
		if ((((int32_t)L_235) < ((int32_t)L_236)))
		{
			goto IL_0657;
		}
	}
	{
		goto IL_06de;
	}

IL_069e:
	{
		V_25 = 0;
		goto IL_06d5;
	}

IL_06a6:
	{
		String_t* L_237 = (__this->___text_3);
		int32_t L_238 = V_0;
		int32_t L_239 = V_25;
		NullCheck(L_237);
		uint16_t L_240 = String_get_Chars_m477(L_237, ((int32_t)((int32_t)L_238+(int32_t)L_239)), /*hidden argument*/NULL);
		String_t* L_241 = (__this->___text_3);
		int32_t L_242 = V_22;
		int32_t L_243 = V_25;
		NullCheck(L_241);
		uint16_t L_244 = String_get_Chars_m477(L_241, ((int32_t)((int32_t)L_242+(int32_t)L_243)), /*hidden argument*/NULL);
		if ((((int32_t)L_240) == ((int32_t)L_244)))
		{
			goto IL_06cf;
		}
	}
	{
		goto IL_1067;
	}

IL_06cf:
	{
		int32_t L_245 = V_25;
		V_25 = ((int32_t)((int32_t)L_245+(int32_t)1));
	}

IL_06d5:
	{
		int32_t L_246 = V_25;
		int32_t L_247 = V_23;
		if ((((int32_t)L_246) < ((int32_t)L_247)))
		{
			goto IL_06a6;
		}
	}

IL_06de:
	{
		bool L_248 = V_19;
		if (L_248)
		{
			goto IL_06ea;
		}
	}
	{
		int32_t L_249 = V_0;
		int32_t L_250 = V_23;
		V_0 = ((int32_t)((int32_t)L_249+(int32_t)L_250));
	}

IL_06ea:
	{
		goto IL_0fee;
	}

IL_06ef:
	{
		int32_t L_251 = ___mode;
		bool L_252 = Interpreter_EvalChar_m5828(__this, L_251, (&V_0), (&___pc), 0, /*hidden argument*/NULL);
		if (L_252)
		{
			goto IL_0705;
		}
	}
	{
		goto IL_1067;
	}

IL_0705:
	{
		goto IL_0fee;
	}

IL_070a:
	{
		int32_t L_253 = ___pc;
		UInt16U5BU5D_t1126* L_254 = (__this->___program_1);
		int32_t L_255 = ___pc;
		NullCheck(L_254);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_254, ((int32_t)((int32_t)L_255+(int32_t)1)));
		int32_t L_256 = ((int32_t)((int32_t)L_255+(int32_t)1));
		V_26 = ((int32_t)((int32_t)L_253+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_254, L_256, sizeof(uint16_t)))));
		int32_t L_257 = ___pc;
		___pc = ((int32_t)((int32_t)L_257+(int32_t)2));
		int32_t L_258 = ___mode;
		bool L_259 = Interpreter_EvalChar_m5828(__this, L_258, (&V_0), (&___pc), 1, /*hidden argument*/NULL);
		if (L_259)
		{
			goto IL_0733;
		}
	}
	{
		goto IL_1067;
	}

IL_0733:
	{
		int32_t L_260 = V_26;
		___pc = L_260;
		goto IL_0fee;
	}

IL_073c:
	{
		UInt16U5BU5D_t1126* L_261 = (__this->___program_1);
		int32_t L_262 = ___pc;
		NullCheck(L_261);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_261, ((int32_t)((int32_t)L_262+(int32_t)1)));
		int32_t L_263 = ((int32_t)((int32_t)L_262+(int32_t)1));
		int32_t L_264 = V_0;
		Interpreter_Open_m5833(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_261, L_263, sizeof(uint16_t))), L_264, /*hidden argument*/NULL);
		int32_t L_265 = ___pc;
		___pc = ((int32_t)((int32_t)L_265+(int32_t)2));
		goto IL_0fee;
	}

IL_0757:
	{
		UInt16U5BU5D_t1126* L_266 = (__this->___program_1);
		int32_t L_267 = ___pc;
		NullCheck(L_266);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_266, ((int32_t)((int32_t)L_267+(int32_t)1)));
		int32_t L_268 = ((int32_t)((int32_t)L_267+(int32_t)1));
		int32_t L_269 = V_0;
		Interpreter_Close_m5834(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_266, L_268, sizeof(uint16_t))), L_269, /*hidden argument*/NULL);
		int32_t L_270 = ___pc;
		___pc = ((int32_t)((int32_t)L_270+(int32_t)2));
		goto IL_0fee;
	}

IL_0772:
	{
		int32_t L_271 = V_0;
		V_27 = L_271;
		int32_t L_272 = ___pc;
		bool L_273 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_272+(int32_t)5)), /*hidden argument*/NULL);
		if (L_273)
		{
			goto IL_078b;
		}
	}
	{
		goto IL_1067;
	}

IL_078b:
	{
		UInt16U5BU5D_t1126* L_274 = (__this->___program_1);
		int32_t L_275 = ___pc;
		NullCheck(L_274);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_274, ((int32_t)((int32_t)L_275+(int32_t)1)));
		int32_t L_276 = ((int32_t)((int32_t)L_275+(int32_t)1));
		UInt16U5BU5D_t1126* L_277 = (__this->___program_1);
		int32_t L_278 = ___pc;
		NullCheck(L_277);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_277, ((int32_t)((int32_t)L_278+(int32_t)2)));
		int32_t L_279 = ((int32_t)((int32_t)L_278+(int32_t)2));
		UInt16U5BU5D_t1126* L_280 = (__this->___program_1);
		int32_t L_281 = ___pc;
		NullCheck(L_280);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_280, ((int32_t)((int32_t)L_281+(int32_t)3)));
		int32_t L_282 = ((int32_t)((int32_t)L_281+(int32_t)3));
		G_B161_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_277, L_279, sizeof(uint16_t)))));
		G_B161_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_274, L_276, sizeof(uint16_t)))));
		G_B161_2 = __this;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_280, L_282, sizeof(uint16_t)))) == ((uint32_t)1))))
		{
			G_B162_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_277, L_279, sizeof(uint16_t)))));
			G_B162_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_274, L_276, sizeof(uint16_t)))));
			G_B162_2 = __this;
			goto IL_07b6;
		}
	}
	{
		G_B163_0 = 1;
		G_B163_1 = G_B161_0;
		G_B163_2 = G_B161_1;
		G_B163_3 = G_B161_2;
		goto IL_07b7;
	}

IL_07b6:
	{
		G_B163_0 = 0;
		G_B163_1 = G_B162_0;
		G_B163_2 = G_B162_1;
		G_B163_3 = G_B162_2;
	}

IL_07b7:
	{
		int32_t L_283 = V_27;
		NullCheck(G_B163_3);
		bool L_284 = Interpreter_Balance_m5835(G_B163_3, G_B163_2, G_B163_1, G_B163_0, L_283, /*hidden argument*/NULL);
		if (L_284)
		{
			goto IL_07c8;
		}
	}
	{
		goto IL_1067;
	}

IL_07c8:
	{
		int32_t L_285 = ___pc;
		UInt16U5BU5D_t1126* L_286 = (__this->___program_1);
		int32_t L_287 = ___pc;
		NullCheck(L_286);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_286, ((int32_t)((int32_t)L_287+(int32_t)4)));
		int32_t L_288 = ((int32_t)((int32_t)L_287+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_285+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_286, L_288, sizeof(uint16_t)))));
		goto IL_0fee;
	}

IL_07db:
	{
		goto IL_0ff3;
	}

IL_07e0:
	{
		UInt16U5BU5D_t1126* L_289 = (__this->___program_1);
		int32_t L_290 = ___pc;
		NullCheck(L_289);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_289, ((int32_t)((int32_t)L_290+(int32_t)2)));
		int32_t L_291 = ((int32_t)((int32_t)L_290+(int32_t)2));
		int32_t L_292 = Interpreter_GetLastDefined_m5839(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_289, L_291, sizeof(uint16_t))), /*hidden argument*/NULL);
		V_28 = L_292;
		int32_t L_293 = V_28;
		if ((((int32_t)L_293) >= ((int32_t)0)))
		{
			goto IL_080d;
		}
	}
	{
		int32_t L_294 = ___pc;
		UInt16U5BU5D_t1126* L_295 = (__this->___program_1);
		int32_t L_296 = ___pc;
		NullCheck(L_295);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_295, ((int32_t)((int32_t)L_296+(int32_t)1)));
		int32_t L_297 = ((int32_t)((int32_t)L_296+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_294+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_295, L_297, sizeof(uint16_t)))));
		goto IL_0812;
	}

IL_080d:
	{
		int32_t L_298 = ___pc;
		___pc = ((int32_t)((int32_t)L_298+(int32_t)3));
	}

IL_0812:
	{
		goto IL_0fee;
	}

IL_0817:
	{
		int32_t L_299 = ___pc;
		bool L_300 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_299+(int32_t)2)), /*hidden argument*/NULL);
		if (L_300)
		{
			goto IL_082d;
		}
	}
	{
		goto IL_1067;
	}

IL_082d:
	{
		int32_t L_301 = ___pc;
		UInt16U5BU5D_t1126* L_302 = (__this->___program_1);
		int32_t L_303 = ___pc;
		NullCheck(L_302);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_302, ((int32_t)((int32_t)L_303+(int32_t)1)));
		int32_t L_304 = ((int32_t)((int32_t)L_303+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_301+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_302, L_304, sizeof(uint16_t)))));
		goto IL_0fee;
	}

IL_0840:
	{
		int32_t L_305 = Interpreter_Checkpoint_m5836(__this, /*hidden argument*/NULL);
		V_29 = L_305;
		int32_t L_306 = V_0;
		V_30 = L_306;
		int32_t L_307 = ___pc;
		bool L_308 = Interpreter_Eval_m5827(__this, 1, (&V_30), ((int32_t)((int32_t)L_307+(int32_t)3)), /*hidden argument*/NULL);
		if (!L_308)
		{
			goto IL_086f;
		}
	}
	{
		int32_t L_309 = ___pc;
		UInt16U5BU5D_t1126* L_310 = (__this->___program_1);
		int32_t L_311 = ___pc;
		NullCheck(L_310);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_310, ((int32_t)((int32_t)L_311+(int32_t)1)));
		int32_t L_312 = ((int32_t)((int32_t)L_311+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_309+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_310, L_312, sizeof(uint16_t)))));
		goto IL_0885;
	}

IL_086f:
	{
		int32_t L_313 = V_29;
		Interpreter_Backtrack_m5837(__this, L_313, /*hidden argument*/NULL);
		int32_t L_314 = ___pc;
		UInt16U5BU5D_t1126* L_315 = (__this->___program_1);
		int32_t L_316 = ___pc;
		NullCheck(L_315);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_315, ((int32_t)((int32_t)L_316+(int32_t)2)));
		int32_t L_317 = ((int32_t)((int32_t)L_316+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_314+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_315, L_317, sizeof(uint16_t)))));
	}

IL_0885:
	{
		goto IL_0fee;
	}

IL_088a:
	{
		int32_t L_318 = Interpreter_Checkpoint_m5836(__this, /*hidden argument*/NULL);
		V_32 = L_318;
		int32_t L_319 = ___pc;
		bool L_320 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_319+(int32_t)2)), /*hidden argument*/NULL);
		if (!L_320)
		{
			goto IL_08a8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_08a8:
	{
		int32_t L_321 = V_32;
		Interpreter_Backtrack_m5837(__this, L_321, /*hidden argument*/NULL);
		int32_t L_322 = ___pc;
		UInt16U5BU5D_t1126* L_323 = (__this->___program_1);
		int32_t L_324 = ___pc;
		NullCheck(L_323);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_323, ((int32_t)((int32_t)L_324+(int32_t)1)));
		int32_t L_325 = ((int32_t)((int32_t)L_324+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_322+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_323, L_325, sizeof(uint16_t)))));
		UInt16U5BU5D_t1126* L_326 = (__this->___program_1);
		int32_t L_327 = ___pc;
		NullCheck(L_326);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_326, L_327);
		int32_t L_328 = L_327;
		V_31 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_326, L_328, sizeof(uint16_t)))&(int32_t)((int32_t)255)))));
		uint16_t L_329 = V_31;
		if (L_329)
		{
			goto IL_088a;
		}
	}
	{
		goto IL_1067;
	}

IL_08db:
	{
		int32_t L_330 = ___pc;
		UInt16U5BU5D_t1126* L_331 = (__this->___program_1);
		int32_t L_332 = ___pc;
		NullCheck(L_331);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_331, ((int32_t)((int32_t)L_332+(int32_t)1)));
		int32_t L_333 = ((int32_t)((int32_t)L_332+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_330+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_331, L_333, sizeof(uint16_t)))));
		goto IL_0fee;
	}

IL_08ee:
	{
		RepeatContext_t1200 * L_334 = (__this->___repeat_9);
		int32_t L_335 = ___pc;
		int32_t L_336 = Interpreter_ReadProgramCount_m5824(__this, ((int32_t)((int32_t)L_335+(int32_t)2)), /*hidden argument*/NULL);
		int32_t L_337 = ___pc;
		int32_t L_338 = Interpreter_ReadProgramCount_m5824(__this, ((int32_t)((int32_t)L_337+(int32_t)4)), /*hidden argument*/NULL);
		uint16_t L_339 = V_3;
		int32_t L_340 = ___pc;
		RepeatContext_t1200 * L_341 = (RepeatContext_t1200 *)il2cpp_codegen_object_new (RepeatContext_t1200_il2cpp_TypeInfo_var);
		RepeatContext__ctor_m5813(L_341, L_334, L_336, L_338, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_339&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)((int32_t)L_340+(int32_t)6)), /*hidden argument*/NULL);
		__this->___repeat_9 = L_341;
		int32_t L_342 = ___pc;
		UInt16U5BU5D_t1126* L_343 = (__this->___program_1);
		int32_t L_344 = ___pc;
		NullCheck(L_343);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_343, ((int32_t)((int32_t)L_344+(int32_t)1)));
		int32_t L_345 = ((int32_t)((int32_t)L_344+(int32_t)1));
		bool L_346 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_342+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_343, L_345, sizeof(uint16_t))))), /*hidden argument*/NULL);
		if (!L_346)
		{
			goto IL_0941;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0941:
	{
		RepeatContext_t1200 * L_347 = (__this->___repeat_9);
		NullCheck(L_347);
		RepeatContext_t1200 * L_348 = RepeatContext_get_Previous_m5822(L_347, /*hidden argument*/NULL);
		__this->___repeat_9 = L_348;
		goto IL_1067;
	}

IL_0957:
	{
		RepeatContext_t1200 * L_349 = (__this->___repeat_9);
		V_33 = L_349;
		RepeatContext_t1200 * L_350 = (__this->___deep_12);
		RepeatContext_t1200 * L_351 = V_33;
		if ((!(((Object_t*)(RepeatContext_t1200 *)L_350) == ((Object_t*)(RepeatContext_t1200 *)L_351))))
		{
			goto IL_0971;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0971:
	{
		RepeatContext_t1200 * L_352 = V_33;
		NullCheck(L_352);
		int32_t L_353 = RepeatContext_get_Start_m5816(L_352, /*hidden argument*/NULL);
		V_34 = L_353;
		RepeatContext_t1200 * L_354 = V_33;
		NullCheck(L_354);
		int32_t L_355 = RepeatContext_get_Count_m5814(L_354, /*hidden argument*/NULL);
		V_35 = L_355;
		goto IL_09e5;
	}

IL_0988:
	{
		RepeatContext_t1200 * L_356 = V_33;
		RepeatContext_t1200 * L_357 = L_356;
		NullCheck(L_357);
		int32_t L_358 = RepeatContext_get_Count_m5814(L_357, /*hidden argument*/NULL);
		NullCheck(L_357);
		RepeatContext_set_Count_m5815(L_357, ((int32_t)((int32_t)L_358+(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t1200 * L_359 = V_33;
		int32_t L_360 = V_0;
		NullCheck(L_359);
		RepeatContext_set_Start_m5817(L_359, L_360, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_361 = V_33;
		__this->___deep_12 = L_361;
		RepeatContext_t1200 * L_362 = V_33;
		NullCheck(L_362);
		int32_t L_363 = RepeatContext_get_Expression_m5821(L_362, /*hidden argument*/NULL);
		bool L_364 = Interpreter_Eval_m5827(__this, 1, (&V_0), L_363, /*hidden argument*/NULL);
		if (L_364)
		{
			goto IL_09d3;
		}
	}
	{
		RepeatContext_t1200 * L_365 = V_33;
		int32_t L_366 = V_34;
		NullCheck(L_365);
		RepeatContext_set_Start_m5817(L_365, L_366, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_367 = V_33;
		int32_t L_368 = V_35;
		NullCheck(L_367);
		RepeatContext_set_Count_m5815(L_367, L_368, /*hidden argument*/NULL);
		goto IL_1067;
	}

IL_09d3:
	{
		RepeatContext_t1200 * L_369 = (__this->___deep_12);
		RepeatContext_t1200 * L_370 = V_33;
		if ((((Object_t*)(RepeatContext_t1200 *)L_369) == ((Object_t*)(RepeatContext_t1200 *)L_370)))
		{
			goto IL_09e5;
		}
	}
	{
		goto IL_0ff3;
	}

IL_09e5:
	{
		RepeatContext_t1200 * L_371 = V_33;
		NullCheck(L_371);
		bool L_372 = RepeatContext_get_IsMinimum_m5818(L_371, /*hidden argument*/NULL);
		if (!L_372)
		{
			goto IL_0988;
		}
	}
	{
		int32_t L_373 = V_0;
		RepeatContext_t1200 * L_374 = V_33;
		NullCheck(L_374);
		int32_t L_375 = RepeatContext_get_Start_m5816(L_374, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_373) == ((uint32_t)L_375))))
		{
			goto IL_0a35;
		}
	}
	{
		RepeatContext_t1200 * L_376 = V_33;
		NullCheck(L_376);
		RepeatContext_t1200 * L_377 = RepeatContext_get_Previous_m5822(L_376, /*hidden argument*/NULL);
		__this->___repeat_9 = L_377;
		__this->___deep_12 = (RepeatContext_t1200 *)NULL;
		int32_t L_378 = ___pc;
		bool L_379 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_378+(int32_t)1)), /*hidden argument*/NULL);
		if (!L_379)
		{
			goto IL_0a28;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a28:
	{
		RepeatContext_t1200 * L_380 = V_33;
		__this->___repeat_9 = L_380;
		goto IL_1067;
	}

IL_0a35:
	{
		RepeatContext_t1200 * L_381 = V_33;
		NullCheck(L_381);
		bool L_382 = RepeatContext_get_IsLazy_m5820(L_381, /*hidden argument*/NULL);
		if (!L_382)
		{
			goto IL_0b0d;
		}
	}
	{
		goto IL_0b08;
	}

IL_0a46:
	{
		RepeatContext_t1200 * L_383 = V_33;
		NullCheck(L_383);
		RepeatContext_t1200 * L_384 = RepeatContext_get_Previous_m5822(L_383, /*hidden argument*/NULL);
		__this->___repeat_9 = L_384;
		__this->___deep_12 = (RepeatContext_t1200 *)NULL;
		int32_t L_385 = Interpreter_Checkpoint_m5836(__this, /*hidden argument*/NULL);
		V_36 = L_385;
		int32_t L_386 = ___pc;
		bool L_387 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_386+(int32_t)1)), /*hidden argument*/NULL);
		if (!L_387)
		{
			goto IL_0a78;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a78:
	{
		int32_t L_388 = V_36;
		Interpreter_Backtrack_m5837(__this, L_388, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_389 = V_33;
		__this->___repeat_9 = L_389;
		RepeatContext_t1200 * L_390 = V_33;
		NullCheck(L_390);
		bool L_391 = RepeatContext_get_IsMaximum_m5819(L_390, /*hidden argument*/NULL);
		if (!L_391)
		{
			goto IL_0a99;
		}
	}
	{
		goto IL_1067;
	}

IL_0a99:
	{
		RepeatContext_t1200 * L_392 = V_33;
		RepeatContext_t1200 * L_393 = L_392;
		NullCheck(L_393);
		int32_t L_394 = RepeatContext_get_Count_m5814(L_393, /*hidden argument*/NULL);
		NullCheck(L_393);
		RepeatContext_set_Count_m5815(L_393, ((int32_t)((int32_t)L_394+(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t1200 * L_395 = V_33;
		int32_t L_396 = V_0;
		NullCheck(L_395);
		RepeatContext_set_Start_m5817(L_395, L_396, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_397 = V_33;
		__this->___deep_12 = L_397;
		RepeatContext_t1200 * L_398 = V_33;
		NullCheck(L_398);
		int32_t L_399 = RepeatContext_get_Expression_m5821(L_398, /*hidden argument*/NULL);
		bool L_400 = Interpreter_Eval_m5827(__this, 1, (&V_0), L_399, /*hidden argument*/NULL);
		if (L_400)
		{
			goto IL_0ae4;
		}
	}
	{
		RepeatContext_t1200 * L_401 = V_33;
		int32_t L_402 = V_34;
		NullCheck(L_401);
		RepeatContext_set_Start_m5817(L_401, L_402, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_403 = V_33;
		int32_t L_404 = V_35;
		NullCheck(L_403);
		RepeatContext_set_Count_m5815(L_403, L_404, /*hidden argument*/NULL);
		goto IL_1067;
	}

IL_0ae4:
	{
		RepeatContext_t1200 * L_405 = (__this->___deep_12);
		RepeatContext_t1200 * L_406 = V_33;
		if ((((Object_t*)(RepeatContext_t1200 *)L_405) == ((Object_t*)(RepeatContext_t1200 *)L_406)))
		{
			goto IL_0af6;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0af6:
	{
		int32_t L_407 = V_0;
		RepeatContext_t1200 * L_408 = V_33;
		NullCheck(L_408);
		int32_t L_409 = RepeatContext_get_Start_m5816(L_408, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_407) == ((uint32_t)L_409))))
		{
			goto IL_0b08;
		}
	}
	{
		goto IL_1067;
	}

IL_0b08:
	{
		goto IL_0a46;
	}

IL_0b0d:
	{
		IntStack_t1199 * L_410 = &(__this->___stack_11);
		int32_t L_411 = IntStack_get_Count_m5811(L_410, /*hidden argument*/NULL);
		V_37 = L_411;
		goto IL_0bd7;
	}

IL_0b1f:
	{
		int32_t L_412 = Interpreter_Checkpoint_m5836(__this, /*hidden argument*/NULL);
		V_38 = L_412;
		int32_t L_413 = V_0;
		V_39 = L_413;
		RepeatContext_t1200 * L_414 = V_33;
		NullCheck(L_414);
		int32_t L_415 = RepeatContext_get_Start_m5816(L_414, /*hidden argument*/NULL);
		V_40 = L_415;
		RepeatContext_t1200 * L_416 = V_33;
		RepeatContext_t1200 * L_417 = L_416;
		NullCheck(L_417);
		int32_t L_418 = RepeatContext_get_Count_m5814(L_417, /*hidden argument*/NULL);
		NullCheck(L_417);
		RepeatContext_set_Count_m5815(L_417, ((int32_t)((int32_t)L_418+(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t1200 * L_419 = V_33;
		int32_t L_420 = V_0;
		NullCheck(L_419);
		RepeatContext_set_Start_m5817(L_419, L_420, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_421 = V_33;
		__this->___deep_12 = L_421;
		RepeatContext_t1200 * L_422 = V_33;
		NullCheck(L_422);
		int32_t L_423 = RepeatContext_get_Expression_m5821(L_422, /*hidden argument*/NULL);
		bool L_424 = Interpreter_Eval_m5827(__this, 1, (&V_0), L_423, /*hidden argument*/NULL);
		if (L_424)
		{
			goto IL_0b8c;
		}
	}
	{
		RepeatContext_t1200 * L_425 = V_33;
		RepeatContext_t1200 * L_426 = L_425;
		NullCheck(L_426);
		int32_t L_427 = RepeatContext_get_Count_m5814(L_426, /*hidden argument*/NULL);
		NullCheck(L_426);
		RepeatContext_set_Count_m5815(L_426, ((int32_t)((int32_t)L_427-(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t1200 * L_428 = V_33;
		int32_t L_429 = V_40;
		NullCheck(L_428);
		RepeatContext_set_Start_m5817(L_428, L_429, /*hidden argument*/NULL);
		int32_t L_430 = V_38;
		Interpreter_Backtrack_m5837(__this, L_430, /*hidden argument*/NULL);
		goto IL_0be3;
	}

IL_0b8c:
	{
		RepeatContext_t1200 * L_431 = (__this->___deep_12);
		RepeatContext_t1200 * L_432 = V_33;
		if ((((Object_t*)(RepeatContext_t1200 *)L_431) == ((Object_t*)(RepeatContext_t1200 *)L_432)))
		{
			goto IL_0bab;
		}
	}
	{
		IntStack_t1199 * L_433 = &(__this->___stack_11);
		int32_t L_434 = V_37;
		IntStack_set_Count_m5812(L_433, L_434, /*hidden argument*/NULL);
		goto IL_0ff3;
	}

IL_0bab:
	{
		IntStack_t1199 * L_435 = &(__this->___stack_11);
		int32_t L_436 = V_38;
		IntStack_Push_m5810(L_435, L_436, /*hidden argument*/NULL);
		IntStack_t1199 * L_437 = &(__this->___stack_11);
		int32_t L_438 = V_39;
		IntStack_Push_m5810(L_437, L_438, /*hidden argument*/NULL);
		int32_t L_439 = V_0;
		RepeatContext_t1200 * L_440 = V_33;
		NullCheck(L_440);
		int32_t L_441 = RepeatContext_get_Start_m5816(L_440, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_439) == ((uint32_t)L_441))))
		{
			goto IL_0bd7;
		}
	}
	{
		goto IL_0be3;
	}

IL_0bd7:
	{
		RepeatContext_t1200 * L_442 = V_33;
		NullCheck(L_442);
		bool L_443 = RepeatContext_get_IsMaximum_m5819(L_442, /*hidden argument*/NULL);
		if (!L_443)
		{
			goto IL_0b1f;
		}
	}

IL_0be3:
	{
		RepeatContext_t1200 * L_444 = V_33;
		NullCheck(L_444);
		RepeatContext_t1200 * L_445 = RepeatContext_get_Previous_m5822(L_444, /*hidden argument*/NULL);
		__this->___repeat_9 = L_445;
		goto IL_0c6a;
	}

IL_0bf5:
	{
		__this->___deep_12 = (RepeatContext_t1200 *)NULL;
		int32_t L_446 = ___pc;
		bool L_447 = Interpreter_Eval_m5827(__this, 1, (&V_0), ((int32_t)((int32_t)L_446+(int32_t)1)), /*hidden argument*/NULL);
		if (!L_447)
		{
			goto IL_0c1f;
		}
	}
	{
		IntStack_t1199 * L_448 = &(__this->___stack_11);
		int32_t L_449 = V_37;
		IntStack_set_Count_m5812(L_448, L_449, /*hidden argument*/NULL);
		goto IL_0ff3;
	}

IL_0c1f:
	{
		IntStack_t1199 * L_450 = &(__this->___stack_11);
		int32_t L_451 = IntStack_get_Count_m5811(L_450, /*hidden argument*/NULL);
		int32_t L_452 = V_37;
		if ((!(((uint32_t)L_451) == ((uint32_t)L_452))))
		{
			goto IL_0c3e;
		}
	}
	{
		RepeatContext_t1200 * L_453 = V_33;
		__this->___repeat_9 = L_453;
		goto IL_1067;
	}

IL_0c3e:
	{
		RepeatContext_t1200 * L_454 = V_33;
		RepeatContext_t1200 * L_455 = L_454;
		NullCheck(L_455);
		int32_t L_456 = RepeatContext_get_Count_m5814(L_455, /*hidden argument*/NULL);
		NullCheck(L_455);
		RepeatContext_set_Count_m5815(L_455, ((int32_t)((int32_t)L_456-(int32_t)1)), /*hidden argument*/NULL);
		IntStack_t1199 * L_457 = &(__this->___stack_11);
		int32_t L_458 = IntStack_Pop_m5809(L_457, /*hidden argument*/NULL);
		V_0 = L_458;
		IntStack_t1199 * L_459 = &(__this->___stack_11);
		int32_t L_460 = IntStack_Pop_m5809(L_459, /*hidden argument*/NULL);
		Interpreter_Backtrack_m5837(__this, L_460, /*hidden argument*/NULL);
	}

IL_0c6a:
	{
		goto IL_0bf5;
	}

IL_0c6f:
	{
		RepeatContext_t1200 * L_461 = (__this->___fast_10);
		int32_t L_462 = ___pc;
		int32_t L_463 = Interpreter_ReadProgramCount_m5824(__this, ((int32_t)((int32_t)L_462+(int32_t)2)), /*hidden argument*/NULL);
		int32_t L_464 = ___pc;
		int32_t L_465 = Interpreter_ReadProgramCount_m5824(__this, ((int32_t)((int32_t)L_464+(int32_t)4)), /*hidden argument*/NULL);
		uint16_t L_466 = V_3;
		int32_t L_467 = ___pc;
		RepeatContext_t1200 * L_468 = (RepeatContext_t1200 *)il2cpp_codegen_object_new (RepeatContext_t1200_il2cpp_TypeInfo_var);
		RepeatContext__ctor_m5813(L_468, L_461, L_463, L_465, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_466&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)((int32_t)L_467+(int32_t)6)), /*hidden argument*/NULL);
		__this->___fast_10 = L_468;
		RepeatContext_t1200 * L_469 = (__this->___fast_10);
		int32_t L_470 = V_0;
		NullCheck(L_469);
		RepeatContext_set_Start_m5817(L_469, L_470, /*hidden argument*/NULL);
		int32_t L_471 = Interpreter_Checkpoint_m5836(__this, /*hidden argument*/NULL);
		V_41 = L_471;
		int32_t L_472 = ___pc;
		UInt16U5BU5D_t1126* L_473 = (__this->___program_1);
		int32_t L_474 = ___pc;
		NullCheck(L_473);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_473, ((int32_t)((int32_t)L_474+(int32_t)1)));
		int32_t L_475 = ((int32_t)((int32_t)L_474+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_472+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_473, L_475, sizeof(uint16_t)))));
		UInt16U5BU5D_t1126* L_476 = (__this->___program_1);
		int32_t L_477 = ___pc;
		NullCheck(L_476);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_476, L_477);
		int32_t L_478 = L_477;
		V_42 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_476, L_478, sizeof(uint16_t)));
		V_43 = (-1);
		V_44 = (-1);
		V_45 = 0;
		uint16_t L_479 = V_42;
		V_46 = (((uint16_t)((int32_t)((int32_t)L_479&(int32_t)((int32_t)255)))));
		uint16_t L_480 = V_46;
		if ((((int32_t)L_480) == ((int32_t)5)))
		{
			goto IL_0cf3;
		}
	}
	{
		uint16_t L_481 = V_46;
		if ((!(((uint32_t)L_481) == ((uint32_t)3))))
		{
			goto IL_0d92;
		}
	}

IL_0cf3:
	{
		uint16_t L_482 = V_42;
		V_47 = (((uint16_t)((int32_t)((int32_t)L_482&(int32_t)((int32_t)65280)))));
		uint16_t L_483 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_483&(int32_t)((int32_t)256))))))
		{
			goto IL_0d11;
		}
	}
	{
		goto IL_0d92;
	}

IL_0d11:
	{
		uint16_t L_484 = V_46;
		if ((!(((uint32_t)L_484) == ((uint32_t)3))))
		{
			goto IL_0d4c;
		}
	}
	{
		V_48 = 0;
		uint16_t L_485 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_485&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d38;
		}
	}
	{
		UInt16U5BU5D_t1126* L_486 = (__this->___program_1);
		int32_t L_487 = ___pc;
		NullCheck(L_486);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_486, ((int32_t)((int32_t)L_487+(int32_t)1)));
		int32_t L_488 = ((int32_t)((int32_t)L_487+(int32_t)1));
		V_48 = ((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_486, L_488, sizeof(uint16_t)))-(int32_t)1));
	}

IL_0d38:
	{
		UInt16U5BU5D_t1126* L_489 = (__this->___program_1);
		int32_t L_490 = ___pc;
		int32_t L_491 = V_48;
		NullCheck(L_489);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_489, ((int32_t)((int32_t)((int32_t)((int32_t)L_490+(int32_t)2))+(int32_t)L_491)));
		int32_t L_492 = ((int32_t)((int32_t)((int32_t)((int32_t)L_490+(int32_t)2))+(int32_t)L_491));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_489, L_492, sizeof(uint16_t)));
		goto IL_0d58;
	}

IL_0d4c:
	{
		UInt16U5BU5D_t1126* L_493 = (__this->___program_1);
		int32_t L_494 = ___pc;
		NullCheck(L_493);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_493, ((int32_t)((int32_t)L_494+(int32_t)1)));
		int32_t L_495 = ((int32_t)((int32_t)L_494+(int32_t)1));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_493, L_495, sizeof(uint16_t)));
	}

IL_0d58:
	{
		uint16_t L_496 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_496&(int32_t)((int32_t)512))))))
		{
			goto IL_0d75;
		}
	}
	{
		int32_t L_497 = V_43;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		uint16_t L_498 = Char_ToUpper_m2552(NULL /*static, unused*/, (((uint16_t)L_497)), /*hidden argument*/NULL);
		V_44 = L_498;
		goto IL_0d79;
	}

IL_0d75:
	{
		int32_t L_499 = V_43;
		V_44 = L_499;
	}

IL_0d79:
	{
		uint16_t L_500 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_500&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d8f;
		}
	}
	{
		V_45 = (-1);
		goto IL_0d92;
	}

IL_0d8f:
	{
		V_45 = 0;
	}

IL_0d92:
	{
		RepeatContext_t1200 * L_501 = (__this->___fast_10);
		NullCheck(L_501);
		bool L_502 = RepeatContext_get_IsLazy_m5820(L_501, /*hidden argument*/NULL);
		if (!L_502)
		{
			goto IL_0ebf;
		}
	}
	{
		RepeatContext_t1200 * L_503 = (__this->___fast_10);
		NullCheck(L_503);
		bool L_504 = RepeatContext_get_IsMinimum_m5818(L_503, /*hidden argument*/NULL);
		if (L_504)
		{
			goto IL_0de1;
		}
	}
	{
		RepeatContext_t1200 * L_505 = (__this->___fast_10);
		NullCheck(L_505);
		int32_t L_506 = RepeatContext_get_Expression_m5821(L_505, /*hidden argument*/NULL);
		bool L_507 = Interpreter_Eval_m5827(__this, 2, (&V_0), L_506, /*hidden argument*/NULL);
		if (L_507)
		{
			goto IL_0de1;
		}
	}
	{
		RepeatContext_t1200 * L_508 = (__this->___fast_10);
		NullCheck(L_508);
		RepeatContext_t1200 * L_509 = RepeatContext_get_Previous_m5822(L_508, /*hidden argument*/NULL);
		__this->___fast_10 = L_509;
		goto IL_1067;
	}

IL_0de1:
	{
		int32_t L_510 = V_0;
		int32_t L_511 = V_45;
		V_49 = ((int32_t)((int32_t)L_510+(int32_t)L_511));
		int32_t L_512 = V_43;
		if ((((int32_t)L_512) < ((int32_t)0)))
		{
			goto IL_0e2c;
		}
	}
	{
		int32_t L_513 = V_49;
		if ((((int32_t)L_513) < ((int32_t)0)))
		{
			goto IL_0e47;
		}
	}
	{
		int32_t L_514 = V_49;
		int32_t L_515 = (__this->___text_end_4);
		if ((((int32_t)L_514) >= ((int32_t)L_515)))
		{
			goto IL_0e47;
		}
	}
	{
		int32_t L_516 = V_43;
		String_t* L_517 = (__this->___text_3);
		int32_t L_518 = V_49;
		NullCheck(L_517);
		uint16_t L_519 = String_get_Chars_m477(L_517, L_518, /*hidden argument*/NULL);
		if ((((int32_t)L_516) == ((int32_t)L_519)))
		{
			goto IL_0e2c;
		}
	}
	{
		int32_t L_520 = V_44;
		String_t* L_521 = (__this->___text_3);
		int32_t L_522 = V_49;
		NullCheck(L_521);
		uint16_t L_523 = String_get_Chars_m477(L_521, L_522, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_520) == ((uint32_t)L_523))))
		{
			goto IL_0e47;
		}
	}

IL_0e2c:
	{
		__this->___deep_12 = (RepeatContext_t1200 *)NULL;
		int32_t L_524 = ___pc;
		bool L_525 = Interpreter_Eval_m5827(__this, 1, (&V_0), L_524, /*hidden argument*/NULL);
		if (!L_525)
		{
			goto IL_0e47;
		}
	}
	{
		goto IL_0ea9;
	}

IL_0e47:
	{
		RepeatContext_t1200 * L_526 = (__this->___fast_10);
		NullCheck(L_526);
		bool L_527 = RepeatContext_get_IsMaximum_m5819(L_526, /*hidden argument*/NULL);
		if (!L_527)
		{
			goto IL_0e6d;
		}
	}
	{
		RepeatContext_t1200 * L_528 = (__this->___fast_10);
		NullCheck(L_528);
		RepeatContext_t1200 * L_529 = RepeatContext_get_Previous_m5822(L_528, /*hidden argument*/NULL);
		__this->___fast_10 = L_529;
		goto IL_1067;
	}

IL_0e6d:
	{
		int32_t L_530 = V_41;
		Interpreter_Backtrack_m5837(__this, L_530, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_531 = (__this->___fast_10);
		NullCheck(L_531);
		int32_t L_532 = RepeatContext_get_Expression_m5821(L_531, /*hidden argument*/NULL);
		bool L_533 = Interpreter_Eval_m5827(__this, 2, (&V_0), L_532, /*hidden argument*/NULL);
		if (L_533)
		{
			goto IL_0ea4;
		}
	}
	{
		RepeatContext_t1200 * L_534 = (__this->___fast_10);
		NullCheck(L_534);
		RepeatContext_t1200 * L_535 = RepeatContext_get_Previous_m5822(L_534, /*hidden argument*/NULL);
		__this->___fast_10 = L_535;
		goto IL_1067;
	}

IL_0ea4:
	{
		goto IL_0de1;
	}

IL_0ea9:
	{
		RepeatContext_t1200 * L_536 = (__this->___fast_10);
		NullCheck(L_536);
		RepeatContext_t1200 * L_537 = RepeatContext_get_Previous_m5822(L_536, /*hidden argument*/NULL);
		__this->___fast_10 = L_537;
		goto IL_0ff3;
	}

IL_0ebf:
	{
		RepeatContext_t1200 * L_538 = (__this->___fast_10);
		NullCheck(L_538);
		int32_t L_539 = RepeatContext_get_Expression_m5821(L_538, /*hidden argument*/NULL);
		bool L_540 = Interpreter_Eval_m5827(__this, 2, (&V_0), L_539, /*hidden argument*/NULL);
		if (L_540)
		{
			goto IL_0eee;
		}
	}
	{
		RepeatContext_t1200 * L_541 = (__this->___fast_10);
		NullCheck(L_541);
		RepeatContext_t1200 * L_542 = RepeatContext_get_Previous_m5822(L_541, /*hidden argument*/NULL);
		__this->___fast_10 = L_542;
		goto IL_1067;
	}

IL_0eee:
	{
		RepeatContext_t1200 * L_543 = (__this->___fast_10);
		NullCheck(L_543);
		int32_t L_544 = RepeatContext_get_Count_m5814(L_543, /*hidden argument*/NULL);
		if ((((int32_t)L_544) <= ((int32_t)0)))
		{
			goto IL_0f1f;
		}
	}
	{
		int32_t L_545 = V_0;
		RepeatContext_t1200 * L_546 = (__this->___fast_10);
		NullCheck(L_546);
		int32_t L_547 = RepeatContext_get_Start_m5816(L_546, /*hidden argument*/NULL);
		RepeatContext_t1200 * L_548 = (__this->___fast_10);
		NullCheck(L_548);
		int32_t L_549 = RepeatContext_get_Count_m5814(L_548, /*hidden argument*/NULL);
		V_50 = ((int32_t)((int32_t)((int32_t)((int32_t)L_545-(int32_t)L_547))/(int32_t)L_549));
		goto IL_0f22;
	}

IL_0f1f:
	{
		V_50 = 0;
	}

IL_0f22:
	{
		int32_t L_550 = V_0;
		int32_t L_551 = V_45;
		V_51 = ((int32_t)((int32_t)L_550+(int32_t)L_551));
		int32_t L_552 = V_43;
		if ((((int32_t)L_552) < ((int32_t)0)))
		{
			goto IL_0f6d;
		}
	}
	{
		int32_t L_553 = V_51;
		if ((((int32_t)L_553) < ((int32_t)0)))
		{
			goto IL_0f88;
		}
	}
	{
		int32_t L_554 = V_51;
		int32_t L_555 = (__this->___text_end_4);
		if ((((int32_t)L_554) >= ((int32_t)L_555)))
		{
			goto IL_0f88;
		}
	}
	{
		int32_t L_556 = V_43;
		String_t* L_557 = (__this->___text_3);
		int32_t L_558 = V_51;
		NullCheck(L_557);
		uint16_t L_559 = String_get_Chars_m477(L_557, L_558, /*hidden argument*/NULL);
		if ((((int32_t)L_556) == ((int32_t)L_559)))
		{
			goto IL_0f6d;
		}
	}
	{
		int32_t L_560 = V_44;
		String_t* L_561 = (__this->___text_3);
		int32_t L_562 = V_51;
		NullCheck(L_561);
		uint16_t L_563 = String_get_Chars_m477(L_561, L_562, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_560) == ((uint32_t)L_563))))
		{
			goto IL_0f88;
		}
	}

IL_0f6d:
	{
		__this->___deep_12 = (RepeatContext_t1200 *)NULL;
		int32_t L_564 = ___pc;
		bool L_565 = Interpreter_Eval_m5827(__this, 1, (&V_0), L_564, /*hidden argument*/NULL);
		if (!L_565)
		{
			goto IL_0f88;
		}
	}
	{
		goto IL_0fd3;
	}

IL_0f88:
	{
		RepeatContext_t1200 * L_566 = (__this->___fast_10);
		RepeatContext_t1200 * L_567 = L_566;
		NullCheck(L_567);
		int32_t L_568 = RepeatContext_get_Count_m5814(L_567, /*hidden argument*/NULL);
		NullCheck(L_567);
		RepeatContext_set_Count_m5815(L_567, ((int32_t)((int32_t)L_568-(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t1200 * L_569 = (__this->___fast_10);
		NullCheck(L_569);
		bool L_570 = RepeatContext_get_IsMinimum_m5818(L_569, /*hidden argument*/NULL);
		if (L_570)
		{
			goto IL_0fc1;
		}
	}
	{
		RepeatContext_t1200 * L_571 = (__this->___fast_10);
		NullCheck(L_571);
		RepeatContext_t1200 * L_572 = RepeatContext_get_Previous_m5822(L_571, /*hidden argument*/NULL);
		__this->___fast_10 = L_572;
		goto IL_1067;
	}

IL_0fc1:
	{
		int32_t L_573 = V_0;
		int32_t L_574 = V_50;
		V_0 = ((int32_t)((int32_t)L_573-(int32_t)L_574));
		int32_t L_575 = V_41;
		Interpreter_Backtrack_m5837(__this, L_575, /*hidden argument*/NULL);
		goto IL_0f22;
	}

IL_0fd3:
	{
		RepeatContext_t1200 * L_576 = (__this->___fast_10);
		NullCheck(L_576);
		RepeatContext_t1200 * L_577 = RepeatContext_get_Previous_m5822(L_576, /*hidden argument*/NULL);
		__this->___fast_10 = L_577;
		goto IL_0ff3;
	}

IL_0fe9:
	{
		goto IL_1067;
	}

IL_0fee:
	{
		goto IL_0008;
	}

IL_0ff3:
	{
		int32_t* L_578 = ___ref_ptr;
		int32_t L_579 = V_0;
		*((int32_t*)(L_578)) = (int32_t)L_579;
		int32_t L_580 = ___mode;
		V_54 = L_580;
		int32_t L_581 = V_54;
		if ((((int32_t)L_581) == ((int32_t)1)))
		{
			goto IL_100e;
		}
	}
	{
		int32_t L_582 = V_54;
		if ((((int32_t)L_582) == ((int32_t)2)))
		{
			goto IL_1010;
		}
	}
	{
		goto IL_1067;
	}

IL_100e:
	{
		return 1;
	}

IL_1010:
	{
		RepeatContext_t1200 * L_583 = (__this->___fast_10);
		RepeatContext_t1200 * L_584 = L_583;
		NullCheck(L_584);
		int32_t L_585 = RepeatContext_get_Count_m5814(L_584, /*hidden argument*/NULL);
		NullCheck(L_584);
		RepeatContext_set_Count_m5815(L_584, ((int32_t)((int32_t)L_585+(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t1200 * L_586 = (__this->___fast_10);
		NullCheck(L_586);
		bool L_587 = RepeatContext_get_IsMaximum_m5819(L_586, /*hidden argument*/NULL);
		if (L_587)
		{
			goto IL_1053;
		}
	}
	{
		RepeatContext_t1200 * L_588 = (__this->___fast_10);
		NullCheck(L_588);
		bool L_589 = RepeatContext_get_IsLazy_m5820(L_588, /*hidden argument*/NULL);
		if (!L_589)
		{
			goto IL_1055;
		}
	}
	{
		RepeatContext_t1200 * L_590 = (__this->___fast_10);
		NullCheck(L_590);
		bool L_591 = RepeatContext_get_IsMinimum_m5818(L_590, /*hidden argument*/NULL);
		if (!L_591)
		{
			goto IL_1055;
		}
	}

IL_1053:
	{
		return 1;
	}

IL_1055:
	{
		RepeatContext_t1200 * L_592 = (__this->___fast_10);
		NullCheck(L_592);
		int32_t L_593 = RepeatContext_get_Expression_m5821(L_592, /*hidden argument*/NULL);
		___pc = L_593;
		goto IL_0003;
	}

IL_1067:
	{
		int32_t L_594 = ___mode;
		V_54 = L_594;
		int32_t L_595 = V_54;
		if ((((int32_t)L_595) == ((int32_t)1)))
		{
			goto IL_107f;
		}
	}
	{
		int32_t L_596 = V_54;
		if ((((int32_t)L_596) == ((int32_t)2)))
		{
			goto IL_1081;
		}
	}
	{
		goto IL_10b2;
	}

IL_107f:
	{
		return 0;
	}

IL_1081:
	{
		RepeatContext_t1200 * L_597 = (__this->___fast_10);
		NullCheck(L_597);
		bool L_598 = RepeatContext_get_IsLazy_m5820(L_597, /*hidden argument*/NULL);
		if (L_598)
		{
			goto IL_10a3;
		}
	}
	{
		RepeatContext_t1200 * L_599 = (__this->___fast_10);
		NullCheck(L_599);
		bool L_600 = RepeatContext_get_IsMinimum_m5818(L_599, /*hidden argument*/NULL);
		if (!L_600)
		{
			goto IL_10a3;
		}
	}
	{
		return 1;
	}

IL_10a3:
	{
		int32_t* L_601 = ___ref_ptr;
		RepeatContext_t1200 * L_602 = (__this->___fast_10);
		NullCheck(L_602);
		int32_t L_603 = RepeatContext_get_Start_m5816(L_602, /*hidden argument*/NULL);
		*((int32_t*)(L_601)) = (int32_t)L_603;
		return 0;
	}

IL_10b2:
	{
		return 0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" bool Interpreter_EvalChar_m5828 (Interpreter_t1202 * __this, int32_t ___mode, int32_t* ___ptr, int32_t* ___pc, bool ___multi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	uint16_t V_4 = 0;
	uint16_t V_5 = {0};
	uint16_t V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint16_t V_14 = {0};
	{
		V_0 = 0;
		V_1 = 0;
	}

IL_0004:
	{
		UInt16U5BU5D_t1126* L_0 = (__this->___program_1);
		int32_t* L_1 = ___pc;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2, sizeof(uint16_t)));
		uint16_t L_3 = V_4;
		V_5 = (((uint16_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)255)))));
		uint16_t L_4 = V_4;
		V_6 = (((uint16_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)65280)))));
		int32_t* L_5 = ___pc;
		int32_t* L_6 = ___pc;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		uint16_t L_7 = V_6;
		V_3 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_00aa;
		}
	}
	{
		uint16_t L_9 = V_6;
		if (!(((uint16_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)1024))))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t* L_10 = ___ptr;
		if ((((int32_t)(*((int32_t*)L_10))) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		return 0;
	}

IL_0059:
	{
		String_t* L_11 = (__this->___text_3);
		int32_t* L_12 = ___ptr;
		int32_t* L_13 = ___ptr;
		int32_t L_14 = ((int32_t)((int32_t)(*((int32_t*)L_13))-(int32_t)1));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)L_14;
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m477(L_11, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_009b;
	}

IL_0075:
	{
		int32_t* L_17 = ___ptr;
		int32_t L_18 = (__this->___text_end_4);
		if ((((int32_t)(*((int32_t*)L_17))) < ((int32_t)L_18)))
		{
			goto IL_0084;
		}
	}
	{
		return 0;
	}

IL_0084:
	{
		String_t* L_19 = (__this->___text_3);
		int32_t* L_20 = ___ptr;
		int32_t* L_21 = ___ptr;
		int32_t L_22 = (*((int32_t*)L_21));
		V_13 = L_22;
		*((int32_t*)(L_20)) = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
		int32_t L_23 = V_13;
		NullCheck(L_19);
		uint16_t L_24 = String_get_Chars_m477(L_19, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
	}

IL_009b:
	{
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		uint16_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		uint16_t L_27 = Char_ToLower_m2554(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
	}

IL_00a8:
	{
		V_0 = 1;
	}

IL_00aa:
	{
		uint16_t L_28 = V_6;
		V_2 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)256)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_29 = V_5;
		V_14 = L_29;
		uint16_t L_30 = V_14;
		if (L_30 == 0)
		{
			goto IL_00f4;
		}
		if (L_30 == 1)
		{
			goto IL_00f2;
		}
		if (L_30 == 2)
		{
			goto IL_0221;
		}
		if (L_30 == 3)
		{
			goto IL_0221;
		}
		if (L_30 == 4)
		{
			goto IL_0221;
		}
		if (L_30 == 5)
		{
			goto IL_00f6;
		}
		if (L_30 == 6)
		{
			goto IL_0118;
		}
		if (L_30 == 7)
		{
			goto IL_013f;
		}
		if (L_30 == 8)
		{
			goto IL_0166;
		}
		if (L_30 == 9)
		{
			goto IL_01a8;
		}
	}
	{
		goto IL_0221;
	}

IL_00f2:
	{
		return 1;
	}

IL_00f4:
	{
		return 0;
	}

IL_00f6:
	{
		uint16_t L_31 = V_1;
		UInt16U5BU5D_t1126* L_32 = (__this->___program_1);
		int32_t* L_33 = ___pc;
		int32_t* L_34 = ___pc;
		int32_t L_35 = (*((int32_t*)L_34));
		V_13 = L_35;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_13;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_36);
		int32_t L_37 = L_36;
		if ((!(((uint32_t)L_31) == ((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_32, L_37, sizeof(uint16_t)))))))
		{
			goto IL_0113;
		}
	}
	{
		bool L_38 = V_2;
		return ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
	}

IL_0113:
	{
		goto IL_0221;
	}

IL_0118:
	{
		UInt16U5BU5D_t1126* L_39 = (__this->___program_1);
		int32_t* L_40 = ___pc;
		int32_t* L_41 = ___pc;
		int32_t L_42 = (*((int32_t*)L_41));
		V_13 = L_42;
		*((int32_t*)(L_40)) = (int32_t)((int32_t)((int32_t)L_42+(int32_t)1));
		int32_t L_43 = V_13;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_43);
		int32_t L_44 = L_43;
		uint16_t L_45 = V_1;
		bool L_46 = CategoryUtils_IsCategory_m5744(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_44, sizeof(uint16_t))), L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_013a;
		}
	}
	{
		bool L_47 = V_2;
		return ((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
	}

IL_013a:
	{
		goto IL_0221;
	}

IL_013f:
	{
		UInt16U5BU5D_t1126* L_48 = (__this->___program_1);
		int32_t* L_49 = ___pc;
		int32_t* L_50 = ___pc;
		int32_t L_51 = (*((int32_t*)L_50));
		V_13 = L_51;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		int32_t L_52 = V_13;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_52);
		int32_t L_53 = L_52;
		uint16_t L_54 = V_1;
		bool L_55 = CategoryUtils_IsCategory_m5744(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_48, L_53, sizeof(uint16_t))), L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_0161;
		}
	}
	{
		bool L_56 = V_2;
		return ((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
	}

IL_0161:
	{
		goto IL_0221;
	}

IL_0166:
	{
		UInt16U5BU5D_t1126* L_57 = (__this->___program_1);
		int32_t* L_58 = ___pc;
		int32_t* L_59 = ___pc;
		int32_t L_60 = (*((int32_t*)L_59));
		V_13 = L_60;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)L_60+(int32_t)1));
		int32_t L_61 = V_13;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_61);
		int32_t L_62 = L_61;
		V_7 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_62, sizeof(uint16_t)));
		UInt16U5BU5D_t1126* L_63 = (__this->___program_1);
		int32_t* L_64 = ___pc;
		int32_t* L_65 = ___pc;
		int32_t L_66 = (*((int32_t*)L_65));
		V_13 = L_66;
		*((int32_t*)(L_64)) = (int32_t)((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_13;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_67);
		int32_t L_68 = L_67;
		V_8 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_63, L_68, sizeof(uint16_t)));
		int32_t L_69 = V_7;
		uint16_t L_70 = V_1;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_01a3;
		}
	}
	{
		uint16_t L_71 = V_1;
		int32_t L_72 = V_8;
		if ((((int32_t)L_71) > ((int32_t)L_72)))
		{
			goto IL_01a3;
		}
	}
	{
		bool L_73 = V_2;
		return ((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
	}

IL_01a3:
	{
		goto IL_0221;
	}

IL_01a8:
	{
		UInt16U5BU5D_t1126* L_74 = (__this->___program_1);
		int32_t* L_75 = ___pc;
		int32_t* L_76 = ___pc;
		int32_t L_77 = (*((int32_t*)L_76));
		V_13 = L_77;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_77+(int32_t)1));
		int32_t L_78 = V_13;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, L_78);
		int32_t L_79 = L_78;
		V_9 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_74, L_79, sizeof(uint16_t)));
		UInt16U5BU5D_t1126* L_80 = (__this->___program_1);
		int32_t* L_81 = ___pc;
		int32_t* L_82 = ___pc;
		int32_t L_83 = (*((int32_t*)L_82));
		V_13 = L_83;
		*((int32_t*)(L_81)) = (int32_t)((int32_t)((int32_t)L_83+(int32_t)1));
		int32_t L_84 = V_13;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, L_84);
		int32_t L_85 = L_84;
		V_10 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_80, L_85, sizeof(uint16_t)));
		int32_t* L_86 = ___pc;
		V_11 = (*((int32_t*)L_86));
		int32_t* L_87 = ___pc;
		int32_t* L_88 = ___pc;
		int32_t L_89 = V_10;
		*((int32_t*)(L_87)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_88))+(int32_t)L_89));
		uint16_t L_90 = V_1;
		int32_t L_91 = V_9;
		V_12 = ((int32_t)((int32_t)L_90-(int32_t)L_91));
		int32_t L_92 = V_12;
		if ((((int32_t)L_92) < ((int32_t)0)))
		{
			goto IL_01f4;
		}
	}
	{
		int32_t L_93 = V_12;
		int32_t L_94 = V_10;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)((int32_t)L_94<<(int32_t)4)))))
		{
			goto IL_01f9;
		}
	}

IL_01f4:
	{
		goto IL_0221;
	}

IL_01f9:
	{
		UInt16U5BU5D_t1126* L_95 = (__this->___program_1);
		int32_t L_96 = V_11;
		int32_t L_97 = V_12;
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, ((int32_t)((int32_t)L_96+(int32_t)((int32_t)((int32_t)L_97>>(int32_t)4)))));
		int32_t L_98 = ((int32_t)((int32_t)L_96+(int32_t)((int32_t)((int32_t)L_97>>(int32_t)4))));
		int32_t L_99 = V_12;
		if (!((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_95, L_98, sizeof(uint16_t)))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_99&(int32_t)((int32_t)15)))&(int32_t)((int32_t)31))))))))
		{
			goto IL_021c;
		}
	}
	{
		bool L_100 = V_2;
		return ((((int32_t)L_100) == ((int32_t)0))? 1 : 0);
	}

IL_021c:
	{
		goto IL_0221;
	}

IL_0221:
	{
		bool L_101 = ___multi;
		if (L_101)
		{
			goto IL_0004;
		}
	}
	{
		bool L_102 = V_2;
		return L_102;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern "C" bool Interpreter_TryMatch_m5829 (Interpreter_t1202 * __this, int32_t* ___ref_ptr, int32_t ___pc, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Interpreter_Reset_m5826(__this, /*hidden argument*/NULL);
		int32_t* L_0 = ___ref_ptr;
		V_0 = (*((int32_t*)L_0));
		MarkU5BU5D_t1204* L_1 = (__this->___marks_13);
		Int32U5BU5D_t1037* L_2 = (__this->___groups_16);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3, sizeof(int32_t))));
		int32_t L_4 = V_0;
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_1, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3, sizeof(int32_t))), sizeof(Mark_t1198 )))->___Start_0 = L_4;
		int32_t L_5 = ___pc;
		bool L_6 = Interpreter_Eval_m5827(__this, 1, (&V_0), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		MarkU5BU5D_t1204* L_7 = (__this->___marks_13);
		Int32U5BU5D_t1037* L_8 = (__this->___groups_16);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9, sizeof(int32_t))));
		int32_t L_10 = V_0;
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_7, (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9, sizeof(int32_t))), sizeof(Mark_t1198 )))->___End_1 = L_10;
		int32_t* L_11 = ___ref_ptr;
		int32_t L_12 = V_0;
		*((int32_t*)(L_11)) = (int32_t)L_12;
		return 1;
	}

IL_004f:
	{
		return 0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
extern "C" bool Interpreter_IsPosition_m5830 (Interpreter_t1202 * __this, uint16_t ___pos, int32_t ___ptr, const MethodInfo* method)
{
	uint16_t V_0 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	{
		uint16_t L_0 = ___pos;
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_005e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_00b9;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_012c;
		}
	}
	{
		goto IL_01a2;
	}

IL_0033:
	{
		int32_t L_2 = ___ptr;
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		int32_t L_3 = ___ptr;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_4 = (__this->___text_3);
		int32_t L_5 = ___ptr;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m477(L_4, ((int32_t)((int32_t)L_5-(int32_t)1)), /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B6_0 = 1;
	}

IL_0053:
	{
		return G_B6_0;
	}

IL_0054:
	{
		int32_t L_7 = ___ptr;
		int32_t L_8 = (__this->___scan_ptr_8);
		return ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_005e:
	{
		int32_t L_9 = ___ptr;
		int32_t L_10 = (__this->___text_end_4);
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_11 = ___ptr;
		int32_t L_12 = (__this->___text_end_4);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)((int32_t)L_12-(int32_t)1))))))
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_13 = (__this->___text_3);
		int32_t L_14 = ___ptr;
		NullCheck(L_13);
		uint16_t L_15 = String_get_Chars_m477(L_13, L_14, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_15) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B12_0 = 0;
	}

IL_008b:
	{
		G_B14_0 = G_B12_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B14_0 = 1;
	}

IL_008e:
	{
		return G_B14_0;
	}

IL_008f:
	{
		int32_t L_16 = ___ptr;
		int32_t L_17 = (__this->___text_end_4);
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_18 = (__this->___text_3);
		int32_t L_19 = ___ptr;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m477(L_18, L_19, /*hidden argument*/NULL);
		G_B18_0 = ((((int32_t)L_20) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B18_0 = 1;
	}

IL_00ae:
	{
		return G_B18_0;
	}

IL_00af:
	{
		int32_t L_21 = ___ptr;
		int32_t L_22 = (__this->___text_end_4);
		return ((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
	}

IL_00b9:
	{
		int32_t L_23 = (__this->___text_end_4);
		if (L_23)
		{
			goto IL_00c6;
		}
	}
	{
		return 0;
	}

IL_00c6:
	{
		int32_t L_24 = ___ptr;
		if (L_24)
		{
			goto IL_00df;
		}
	}
	{
		String_t* L_25 = (__this->___text_3);
		int32_t L_26 = ___ptr;
		NullCheck(L_25);
		uint16_t L_27 = String_get_Chars_m477(L_25, L_26, /*hidden argument*/NULL);
		bool L_28 = Interpreter_IsWordChar_m5831(__this, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_00df:
	{
		int32_t L_29 = ___ptr;
		int32_t L_30 = (__this->___text_end_4);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_31 = (__this->___text_3);
		int32_t L_32 = ___ptr;
		NullCheck(L_31);
		uint16_t L_33 = String_get_Chars_m477(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)), /*hidden argument*/NULL);
		bool L_34 = Interpreter_IsWordChar_m5831(__this, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_0100:
	{
		String_t* L_35 = (__this->___text_3);
		int32_t L_36 = ___ptr;
		NullCheck(L_35);
		uint16_t L_37 = String_get_Chars_m477(L_35, L_36, /*hidden argument*/NULL);
		bool L_38 = Interpreter_IsWordChar_m5831(__this, L_37, /*hidden argument*/NULL);
		String_t* L_39 = (__this->___text_3);
		int32_t L_40 = ___ptr;
		NullCheck(L_39);
		uint16_t L_41 = String_get_Chars_m477(L_39, ((int32_t)((int32_t)L_40-(int32_t)1)), /*hidden argument*/NULL);
		bool L_42 = Interpreter_IsWordChar_m5831(__this, L_41, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_38) == ((int32_t)L_42))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_012c:
	{
		int32_t L_43 = (__this->___text_end_4);
		if (L_43)
		{
			goto IL_0139;
		}
	}
	{
		return 0;
	}

IL_0139:
	{
		int32_t L_44 = ___ptr;
		if (L_44)
		{
			goto IL_0155;
		}
	}
	{
		String_t* L_45 = (__this->___text_3);
		int32_t L_46 = ___ptr;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m477(L_45, L_46, /*hidden argument*/NULL);
		bool L_48 = Interpreter_IsWordChar_m5831(__this, L_47, /*hidden argument*/NULL);
		return ((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
	}

IL_0155:
	{
		int32_t L_49 = ___ptr;
		int32_t L_50 = (__this->___text_end_4);
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_51 = (__this->___text_3);
		int32_t L_52 = ___ptr;
		NullCheck(L_51);
		uint16_t L_53 = String_get_Chars_m477(L_51, ((int32_t)((int32_t)L_52-(int32_t)1)), /*hidden argument*/NULL);
		bool L_54 = Interpreter_IsWordChar_m5831(__this, L_53, /*hidden argument*/NULL);
		return ((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
	}

IL_0179:
	{
		String_t* L_55 = (__this->___text_3);
		int32_t L_56 = ___ptr;
		NullCheck(L_55);
		uint16_t L_57 = String_get_Chars_m477(L_55, L_56, /*hidden argument*/NULL);
		bool L_58 = Interpreter_IsWordChar_m5831(__this, L_57, /*hidden argument*/NULL);
		String_t* L_59 = (__this->___text_3);
		int32_t L_60 = ___ptr;
		NullCheck(L_59);
		uint16_t L_61 = String_get_Chars_m477(L_59, ((int32_t)((int32_t)L_60-(int32_t)1)), /*hidden argument*/NULL);
		bool L_62 = Interpreter_IsWordChar_m5831(__this, L_61, /*hidden argument*/NULL);
		return ((((int32_t)L_58) == ((int32_t)L_62))? 1 : 0);
	}

IL_01a2:
	{
		return 0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Interpreter_IsWordChar_m5831 (Interpreter_t1202 * __this, uint16_t ___c, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___c;
		bool L_1 = CategoryUtils_IsCategory_m5744(NULL /*static, unused*/, 3, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Interpreter_GetString_m5832 (Interpreter_t1202 * __this, int32_t ___pc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t165* V_2 = {0};
	int32_t V_3 = 0;
	{
		UInt16U5BU5D_t1126* L_0 = (__this->___program_1);
		int32_t L_1 = ___pc;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, ((int32_t)((int32_t)L_1+(int32_t)1)));
		int32_t L_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2, sizeof(uint16_t)));
		int32_t L_3 = ___pc;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)2));
		int32_t L_4 = V_0;
		V_2 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, L_4));
		V_3 = 0;
		goto IL_0030;
	}

IL_001d:
	{
		CharU5BU5D_t165* L_5 = V_2;
		int32_t L_6 = V_3;
		UInt16U5BU5D_t1126* L_7 = (__this->___program_1);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_9);
		int32_t L_10 = L_9;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_6, sizeof(uint16_t))) = (uint16_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_10, sizeof(uint16_t)));
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_12 = V_3;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001d;
		}
	}
	{
		CharU5BU5D_t165* L_14 = V_2;
		String_t* L_15 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_15 = String_CreateString_m4097(L_15, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern "C" void Interpreter_Open_m5833 (Interpreter_t1202 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (__this->___groups_16);
		int32_t L_1 = ___gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2, sizeof(int32_t)));
		int32_t L_3 = V_0;
		int32_t L_4 = (__this->___mark_start_14);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		MarkU5BU5D_t1204* L_5 = (__this->___marks_13);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		bool L_7 = Mark_get_IsDefined_m5806(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_5, L_6, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = Interpreter_CreateMark_m5840(__this, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Int32U5BU5D_t1037* L_10 = (__this->___groups_16);
		int32_t L_11 = ___gid;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11, sizeof(int32_t))) = (int32_t)L_12;
	}

IL_003c:
	{
		MarkU5BU5D_t1204* L_13 = (__this->___marks_13);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = ___ptr;
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_13, L_14, sizeof(Mark_t1198 )))->___Start_0 = L_15;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern "C" void Interpreter_Close_m5834 (Interpreter_t1202 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method)
{
	{
		MarkU5BU5D_t1204* L_0 = (__this->___marks_13);
		Int32U5BU5D_t1037* L_1 = (__this->___groups_16);
		int32_t L_2 = ___gid;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t))));
		int32_t L_4 = ___ptr;
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t))), sizeof(Mark_t1198 )))->___End_1 = L_4;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool Interpreter_Balance_m5835 (Interpreter_t1202 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (__this->___groups_16);
		int32_t L_1 = ___balance_gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2, sizeof(int32_t)));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		MarkU5BU5D_t1204* L_4 = (__this->___marks_13);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = Mark_get_Index_m5807(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_4, L_5, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		return 0;
	}

IL_0029:
	{
		int32_t L_7 = ___gid;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		bool L_8 = ___capture;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_9 = ___gid;
		MarkU5BU5D_t1204* L_10 = (__this->___marks_13);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = Mark_get_Index_m5807(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_10, L_11, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		MarkU5BU5D_t1204* L_13 = (__this->___marks_13);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = Mark_get_Length_m5808(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_13, L_14, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		Interpreter_Open_m5833(__this, L_9, ((int32_t)((int32_t)L_12+(int32_t)L_15)), /*hidden argument*/NULL);
		int32_t L_16 = ___gid;
		int32_t L_17 = ___ptr;
		Interpreter_Close_m5834(__this, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0069:
	{
		Int32U5BU5D_t1037* L_18 = (__this->___groups_16);
		int32_t L_19 = ___balance_gid;
		MarkU5BU5D_t1204* L_20 = (__this->___marks_13);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_20, L_21, sizeof(Mark_t1198 )))->___Previous_2);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19, sizeof(int32_t))) = (int32_t)L_22;
		return 1;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern "C" int32_t Interpreter_Checkpoint_m5836 (Interpreter_t1202 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mark_end_15);
		__this->___mark_start_14 = L_0;
		int32_t L_1 = (__this->___mark_start_14);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern "C" void Interpreter_Backtrack_m5837 (Interpreter_t1202 * __this, int32_t ___cp, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0007:
	{
		Int32U5BU5D_t1037* L_0 = (__this->___groups_16);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2, sizeof(int32_t)));
		goto IL_0027;
	}

IL_0015:
	{
		MarkU5BU5D_t1204* L_3 = (__this->___marks_13);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = (((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_3, L_4, sizeof(Mark_t1198 )))->___Previous_2);
		V_1 = L_5;
	}

IL_0027:
	{
		int32_t L_6 = ___cp;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0015;
		}
	}
	{
		Int32U5BU5D_t1037* L_8 = (__this->___groups_16);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9, sizeof(int32_t))) = (int32_t)L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		Int32U5BU5D_t1037* L_13 = (__this->___groups_16);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern TypeInfo* MarkU5BU5D_t1204_il2cpp_TypeInfo_var;
extern "C" void Interpreter_ResetGroups_m5838 (Interpreter_t1202 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarkU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(816);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (__this->___groups_16);
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		MarkU5BU5D_t1204* L_1 = (__this->___marks_13);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = V_0;
		__this->___marks_13 = ((MarkU5BU5D_t1204*)SZArrayNew(MarkU5BU5D_t1204_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)((int32_t)10)))));
	}

IL_0023:
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_002a:
	{
		Int32U5BU5D_t1037* L_3 = (__this->___groups_16);
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4, sizeof(int32_t))) = (int32_t)L_5;
		MarkU5BU5D_t1204* L_6 = (__this->___marks_13);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_6, L_7, sizeof(Mark_t1198 )))->___Start_0 = (-1);
		MarkU5BU5D_t1204* L_8 = (__this->___marks_13);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_8, L_9, sizeof(Mark_t1198 )))->___End_1 = (-1);
		MarkU5BU5D_t1204* L_10 = (__this->___marks_13);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_10, L_11, sizeof(Mark_t1198 )))->___Previous_2 = (-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		__this->___mark_start_14 = 0;
		int32_t L_15 = V_0;
		__this->___mark_end_15 = L_15;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern "C" int32_t Interpreter_GetLastDefined_m5839 (Interpreter_t1202 * __this, int32_t ___gid, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t1037* L_0 = (__this->___groups_16);
		int32_t L_1 = ___gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2, sizeof(int32_t)));
		goto IL_0020;
	}

IL_000e:
	{
		MarkU5BU5D_t1204* L_3 = (__this->___marks_13);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = (((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_3, L_4, sizeof(Mark_t1198 )))->___Previous_2);
		V_0 = L_5;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		MarkU5BU5D_t1204* L_7 = (__this->___marks_13);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		bool L_9 = Mark_get_IsDefined_m5806(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_7, L_8, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_000e;
		}
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern TypeInfo* MarkU5BU5D_t1204_il2cpp_TypeInfo_var;
extern "C" int32_t Interpreter_CreateMark_m5840 (Interpreter_t1202 * __this, int32_t ___previous, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarkU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(816);
		s_Il2CppMethodIntialized = true;
	}
	MarkU5BU5D_t1204* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___mark_end_15);
		MarkU5BU5D_t1204* L_1 = (__this->___marks_13);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		MarkU5BU5D_t1204* L_2 = (__this->___marks_13);
		NullCheck(L_2);
		V_0 = ((MarkU5BU5D_t1204*)SZArrayNew(MarkU5BU5D_t1204_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))*(int32_t)2))));
		MarkU5BU5D_t1204* L_3 = (__this->___marks_13);
		MarkU5BU5D_t1204* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_3, (Array_t *)(Array_t *)L_4, 0);
		MarkU5BU5D_t1204* L_5 = V_0;
		__this->___marks_13 = L_5;
	}

IL_0037:
	{
		int32_t L_6 = (__this->___mark_end_15);
		int32_t L_7 = L_6;
		V_2 = L_7;
		__this->___mark_end_15 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_2;
		V_1 = L_8;
		MarkU5BU5D_t1204* L_9 = (__this->___marks_13);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		MarkU5BU5D_t1204* L_11 = (__this->___marks_13);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (-1);
		V_2 = L_13;
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_11, L_12, sizeof(Mark_t1198 )))->___End_1 = L_13;
		int32_t L_14 = V_2;
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_9, L_10, sizeof(Mark_t1198 )))->___Start_0 = L_14;
		MarkU5BU5D_t1204* L_15 = (__this->___marks_13);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = ___previous;
		((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_15, L_16, sizeof(Mark_t1198 )))->___Previous_2 = L_17;
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void Interpreter_GetGroupInfo_m5841 (Interpreter_t1202 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___first_mark_index;
		*((int32_t*)(L_0)) = (int32_t)(-1);
		int32_t* L_1 = ___n_caps;
		*((int32_t*)(L_1)) = (int32_t)0;
		Int32U5BU5D_t1037* L_2 = (__this->___groups_16);
		int32_t L_3 = ___gid;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4, sizeof(int32_t)));
		goto IL_0052;
	}

IL_0014:
	{
		MarkU5BU5D_t1204* L_5 = (__this->___marks_13);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		bool L_7 = Mark_get_IsDefined_m5806(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_5, L_6, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0040;
	}

IL_002f:
	{
		int32_t* L_8 = ___first_mark_index;
		if ((((int32_t)(*((int32_t*)L_8))) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_9 = ___first_mark_index;
		int32_t L_10 = V_0;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_003a:
	{
		int32_t* L_11 = ___n_caps;
		int32_t* L_12 = ___n_caps;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_12))+(int32_t)1));
	}

IL_0040:
	{
		MarkU5BU5D_t1204* L_13 = (__this->___marks_13);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_13, L_14, sizeof(Mark_t1198 )))->___Previous_2);
		V_0 = L_15;
	}

IL_0052:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.CaptureCollection
#include "System_System_Text_RegularExpressions_CaptureCollectionMethodDeclarations.h"
extern TypeInfo* Capture_t1173_il2cpp_TypeInfo_var;
extern "C" void Interpreter_PopulateGroup_m5842 (Interpreter_t1202 * __this, Group_t1089 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Capture_t1173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(789);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Capture_t1173 * V_2 = {0};
	{
		V_0 = 1;
		MarkU5BU5D_t1204* L_0 = (__this->___marks_13);
		int32_t L_1 = ___first_mark_index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_0, L_1, sizeof(Mark_t1198 )))->___Previous_2);
		V_1 = L_2;
		goto IL_0089;
	}

IL_0019:
	{
		MarkU5BU5D_t1204* L_3 = (__this->___marks_13);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		bool L_5 = Mark_get_IsDefined_m5806(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_3, L_4, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0077;
	}

IL_0034:
	{
		String_t* L_6 = (__this->___text_3);
		MarkU5BU5D_t1204* L_7 = (__this->___marks_13);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = Mark_get_Index_m5807(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_7, L_8, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		MarkU5BU5D_t1204* L_10 = (__this->___marks_13);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = Mark_get_Length_m5808(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_10, L_11, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		Capture_t1173 * L_13 = (Capture_t1173 *)il2cpp_codegen_object_new (Capture_t1173_il2cpp_TypeInfo_var);
		Capture__ctor_m5660(L_13, L_6, L_9, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Group_t1089 * L_14 = ___g;
		NullCheck(L_14);
		CaptureCollection_t1174 * L_15 = Group_get_Captures_m5676(L_14, /*hidden argument*/NULL);
		Capture_t1173 * L_16 = V_2;
		int32_t L_17 = ___n_caps;
		int32_t L_18 = V_0;
		NullCheck(L_15);
		CaptureCollection_SetValue_m5668(L_15, L_16, ((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)1))-(int32_t)L_18)), /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0077:
	{
		MarkU5BU5D_t1204* L_20 = (__this->___marks_13);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_20, L_21, sizeof(Mark_t1198 )))->___Previous_2);
		V_1 = L_22;
	}

IL_0089:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
extern TypeInfo* Match_t1087_il2cpp_TypeInfo_var;
extern TypeInfo* Group_t1089_il2cpp_TypeInfo_var;
extern "C" Match_t1087 * Interpreter_GenerateMatch_m5843 (Interpreter_t1202 * __this, Regex_t877 * ___regex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Match_t1087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(793);
		Group_t1089_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(791);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Group_t1089 * V_2 = {0};
	Match_t1087 * V_3 = {0};
	int32_t V_4 = 0;
	{
		Interpreter_GetGroupInfo_m5841(__this, 0, (&V_1), (&V_0), /*hidden argument*/NULL);
		bool L_0 = (((BaseMachine_t1172 *)__this)->___needs_groups_or_captures_0);
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		Regex_t877 * L_1 = ___regex;
		String_t* L_2 = (__this->___text_3);
		int32_t L_3 = (__this->___text_end_4);
		MarkU5BU5D_t1204* L_4 = (__this->___marks_13);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = Mark_get_Index_m5807(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_4, L_5, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		MarkU5BU5D_t1204* L_7 = (__this->___marks_13);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = Mark_get_Length_m5808(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_7, L_8, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		Match_t1087 * L_10 = (Match_t1087 *)il2cpp_codegen_object_new (Match_t1087_il2cpp_TypeInfo_var);
		Match__ctor_m5685(L_10, L_1, __this, L_2, L_3, 0, L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_004d:
	{
		Regex_t877 * L_11 = ___regex;
		String_t* L_12 = (__this->___text_3);
		int32_t L_13 = (__this->___text_end_4);
		Int32U5BU5D_t1037* L_14 = (__this->___groups_16);
		NullCheck(L_14);
		MarkU5BU5D_t1204* L_15 = (__this->___marks_13);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = Mark_get_Index_m5807(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_15, L_16, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		MarkU5BU5D_t1204* L_18 = (__this->___marks_13);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = Mark_get_Length_m5808(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_18, L_19, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		Match_t1087 * L_22 = (Match_t1087 *)il2cpp_codegen_object_new (Match_t1087_il2cpp_TypeInfo_var);
		Match__ctor_m5686(L_22, L_11, __this, L_12, L_13, (((int32_t)(((Array_t *)L_14)->max_length))), L_17, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		Match_t1087 * L_23 = V_3;
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		Interpreter_PopulateGroup_m5842(__this, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_4 = 1;
		goto IL_0107;
	}

IL_009d:
	{
		int32_t L_26 = V_4;
		Interpreter_GetGroupInfo_m5841(__this, L_26, (&V_1), (&V_0), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Group_t1089_il2cpp_TypeInfo_var);
		Group_t1089 * L_28 = ((Group_t1089_StaticFields*)Group_t1089_il2cpp_TypeInfo_var->static_fields)->___Fail_3;
		V_2 = L_28;
		goto IL_00f3;
	}

IL_00bb:
	{
		String_t* L_29 = (__this->___text_3);
		MarkU5BU5D_t1204* L_30 = (__this->___marks_13);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = Mark_get_Index_m5807(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_30, L_31, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		MarkU5BU5D_t1204* L_33 = (__this->___marks_13);
		int32_t L_34 = V_1;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = Mark_get_Length_m5808(((Mark_t1198 *)(Mark_t1198 *)SZArrayLdElema(L_33, L_34, sizeof(Mark_t1198 ))), /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		Group_t1089 * L_37 = (Group_t1089 *)il2cpp_codegen_object_new (Group_t1089_il2cpp_TypeInfo_var);
		Group__ctor_m5672(L_37, L_29, L_32, L_35, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		Group_t1089 * L_38 = V_2;
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		Interpreter_PopulateGroup_m5842(__this, L_38, L_39, L_40, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		Match_t1087 * L_41 = V_3;
		NullCheck(L_41);
		GroupCollection_t1088 * L_42 = (GroupCollection_t1088 *)VirtFuncInvoker0< GroupCollection_t1088 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_41);
		Group_t1089 * L_43 = V_2;
		int32_t L_44 = V_4;
		NullCheck(L_42);
		GroupCollection_SetValue_m5680(L_42, L_43, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_4;
		V_4 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0107:
	{
		int32_t L_46 = V_4;
		Int32U5BU5D_t1037* L_47 = (__this->___groups_16);
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((Array_t *)L_47)->max_length))))))
		{
			goto IL_009d;
		}
	}
	{
		Match_t1087 * L_48 = V_3;
		return L_48;
	}
}
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Interval__ctor_m5844 (Interval_t1205 * __this, int32_t ___low, int32_t ___high, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___low;
		int32_t L_1 = ___high;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___low;
		V_0 = L_2;
		int32_t L_3 = ___high;
		___low = L_3;
		int32_t L_4 = V_0;
		___high = L_4;
	}

IL_000f:
	{
		int32_t L_5 = ___low;
		__this->___low_0 = L_5;
		int32_t L_6 = ___high;
		__this->___high_1 = L_6;
		__this->___contiguous_2 = 1;
		return;
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern "C" Interval_t1205  Interval_get_Empty_m5845 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	Interval_t1205  V_0 = {0};
	{
		(&V_0)->___low_0 = 0;
		int32_t L_0 = ((&V_0)->___low_0);
		(&V_0)->___high_1 = ((int32_t)((int32_t)L_0-(int32_t)1));
		(&V_0)->___contiguous_2 = 1;
		Interval_t1205  L_1 = V_0;
		return L_1;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern "C" bool Interval_get_IsDiscontiguous_m5846 (Interval_t1205 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___contiguous_2);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern "C" bool Interval_get_IsSingleton_m5847 (Interval_t1205 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->___contiguous_2);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (__this->___low_0);
		int32_t L_2 = (__this->___high_1);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern "C" bool Interval_get_IsEmpty_m5848 (Interval_t1205 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___low_0);
		int32_t L_1 = (__this->___high_1);
		return ((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern "C" int32_t Interval_get_Size_m5849 (Interval_t1205 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsEmpty_m5848(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = (__this->___high_1);
		int32_t L_2 = (__this->___low_0);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2))+(int32_t)1));
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
extern "C" bool Interval_IsDisjoint_m5850 (Interval_t1205 * __this, Interval_t1205  ___i, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m5848(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m5848((&___i), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 1;
	}

IL_0019:
	{
		int32_t L_2 = (__this->___low_0);
		int32_t L_3 = ((&___i)->___high_1);
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = ((&___i)->___low_0);
		int32_t L_5 = (__this->___high_1);
		G_B6_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		return ((((int32_t)G_B6_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_IsAdjacent_m5851 (Interval_t1205 * __this, Interval_t1205  ___i, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m5848(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m5848((&___i), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_2 = (__this->___low_0);
		int32_t L_3 = ((&___i)->___high_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)((int32_t)L_3+(int32_t)1)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = (__this->___high_1);
		int32_t L_5 = ((&___i)->___low_0);
		G_B6_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)((int32_t)L_5-(int32_t)1))))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 1;
	}

IL_0041:
	{
		return G_B6_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Contains_m5852 (Interval_t1205 * __this, Interval_t1205  ___i, const MethodInfo* method)
{
	int32_t G_B8_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m5848(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m5848((&___i), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		return 1;
	}

IL_0019:
	{
		bool L_2 = Interval_get_IsEmpty_m5848(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		int32_t L_3 = (__this->___low_0);
		int32_t L_4 = ((&___i)->___low_0);
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = ((&___i)->___high_1);
		int32_t L_6 = (__this->___high_1);
		G_B8_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B8_0 = 0;
	}

IL_004d:
	{
		return G_B8_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern "C" bool Interval_Contains_m5853 (Interval_t1205 * __this, int32_t ___i, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___low_0);
		int32_t L_1 = ___i;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___i;
		int32_t L_3 = (__this->___high_1);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Intersects_m5854 (Interval_t1205 * __this, Interval_t1205  ___i, const MethodInfo* method)
{
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m5848(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m5848((&___i), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_2 = ((&___i)->___low_0);
		bool L_3 = Interval_Contains_m5853(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((&___i)->___high_1);
		bool L_5 = Interval_Contains_m5853(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0064;
		}
	}

IL_003d:
	{
		int32_t L_6 = ((&___i)->___high_1);
		bool L_7 = Interval_Contains_m5853(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = ((&___i)->___low_0);
		bool L_9 = Interval_Contains_m5853(__this, L_8, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 0;
	}

IL_0062:
	{
		G_B10_0 = G_B8_0;
		goto IL_0065;
	}

IL_0064:
	{
		G_B10_0 = 1;
	}

IL_0065:
	{
		return G_B10_0;
	}
}
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern "C" void Interval_Merge_m5855 (Interval_t1205 * __this, Interval_t1205  ___i, const MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsEmpty_m5848((&___i), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_1 = Interval_get_IsEmpty_m5848(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ((&___i)->___low_0);
		__this->___low_0 = L_2;
		int32_t L_3 = ((&___i)->___high_1);
		__this->___high_1 = L_3;
	}

IL_0032:
	{
		int32_t L_4 = ((&___i)->___low_0);
		int32_t L_5 = (__this->___low_0);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ((&___i)->___low_0);
		__this->___low_0 = L_6;
	}

IL_0051:
	{
		int32_t L_7 = ((&___i)->___high_1);
		int32_t L_8 = (__this->___high_1);
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_9 = ((&___i)->___high_1);
		__this->___high_1 = L_9;
	}

IL_0070:
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern "C" int32_t Interval_CompareTo_m5856 (Interval_t1205 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		s_Il2CppMethodIntialized = true;
	}
	Interval_t1205  V_0 = {0};
	{
		int32_t L_0 = (__this->___low_0);
		Object_t * L_1 = ___o;
		V_0 = ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_1, Interval_t1205_il2cpp_TypeInfo_var))));
		int32_t L_2 = ((&V_0)->___low_0);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interval
extern "C" void Interval_t1205_marshal(const Interval_t1205& unmarshaled, Interval_t1205_marshaled& marshaled)
{
	marshaled.___low_0 = unmarshaled.___low_0;
	marshaled.___high_1 = unmarshaled.___high_1;
	marshaled.___contiguous_2 = unmarshaled.___contiguous_2;
}
extern "C" void Interval_t1205_marshal_back(const Interval_t1205_marshaled& marshaled, Interval_t1205& unmarshaled)
{
	unmarshaled.___low_0 = marshaled.___low_0;
	unmarshaled.___high_1 = marshaled.___high_1;
	unmarshaled.___contiguous_2 = marshaled.___contiguous_2;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interval
extern "C" void Interval_t1205_marshal_cleanup(Interval_t1205_marshaled& marshaled)
{
}
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_Enu.h"
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::.ctor(System.Collections.IList)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Enumerator__ctor_m5857 (Enumerator_t1206 * __this, Object_t * ___list, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___list;
		__this->___list_0 = L_0;
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset() */, __this);
		return;
	}
}
// System.Object System.Text.RegularExpressions.IntervalCollection/Enumerator::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_get_Current_m5858 (Enumerator_t1206 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___ptr_1);
		Object_t * L_1 = (__this->___list_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t1248_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
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
		Object_t * L_4 = (__this->___list_0);
		int32_t L_5 = (__this->___ptr_1);
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1207_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Boolean System.Text.RegularExpressions.IntervalCollection/Enumerator::MoveNext()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern "C" bool Enumerator_MoveNext_m5859 (Enumerator_t1206 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___ptr_1);
		Object_t * L_1 = (__this->___list_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t1248_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_0) <= ((int32_t)L_2)))
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
		int32_t L_4 = (__this->___ptr_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->___ptr_1 = L_5;
		int32_t L_6 = V_0;
		Object_t * L_7 = (__this->___list_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t1248_il2cpp_TypeInfo_var, L_7);
		return ((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset()
extern "C" void Enumerator_Reset_m5860 (Enumerator_t1206 * __this, const MethodInfo* method)
{
	{
		__this->___ptr_1 = (-1);
		return;
	}
}
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void CostDelegate__ctor_m5861 (CostDelegate_t1208 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
extern "C" double CostDelegate_Invoke_m5862 (CostDelegate_t1208 * __this, Interval_t1205  ___i, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CostDelegate_Invoke_m5862((CostDelegate_t1208 *)__this->___prev_9,___i, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef double (*FunctionPointerType) (Object_t *, Object_t * __this, Interval_t1205  ___i, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___i,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef double (*FunctionPointerType) (Object_t * __this, Interval_t1205  ___i, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___i,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern "C" double pinvoke_delegate_wrapper_CostDelegate_t1208(Il2CppObject* delegate, Interval_t1205  ___i)
{
	typedef double (STDCALL *native_function_ptr_type)(Interval_t1205_marshaled);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___i' to native representation
	Interval_t1205_marshaled ____i_marshaled = { 0 };
	Interval_t1205_marshal(___i, ____i_marshaled);

	// Native function invocation and marshaling of return value back from native representation
	double _return_value = _il2cpp_pinvoke_func(____i_marshaled);

	// Marshaling cleanup of parameter '___i' native representation
	Interval_t1205_marshal_cleanup(____i_marshaled);

	return _return_value;
}
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern "C" Object_t * CostDelegate_BeginInvoke_m5863 (CostDelegate_t1208 * __this, Interval_t1205  ___i, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Interval_t1205_il2cpp_TypeInfo_var, &___i);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
extern "C" double CostDelegate_EndInvoke_m5864 (CostDelegate_t1208 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(double*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern "C" void IntervalCollection__ctor_m5865 (IntervalCollection_t1209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		__this->___intervals_0 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern "C" Interval_t1205  IntervalCollection_get_Item_m5866 (IntervalCollection_t1209 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->___intervals_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_2, Interval_t1205_il2cpp_TypeInfo_var))));
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern "C" void IntervalCollection_Add_m5867 (IntervalCollection_t1209 * __this, Interval_t1205  ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->___intervals_0);
		Interval_t1205  L_1 = ___i;
		Interval_t1205  L_2 = L_1;
		Object_t * L_3 = Box(Interval_t1205_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_3);
		return;
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern "C" void IntervalCollection_Normalize_m5868 (IntervalCollection_t1209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Interval_t1205  V_1 = {0};
	Interval_t1205  V_2 = {0};
	{
		ArrayList_t920 * L_0 = (__this->___intervals_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(44 /* System.Void System.Collections.ArrayList::Sort() */, L_0);
		V_0 = 0;
		goto IL_0083;
	}

IL_0012:
	{
		ArrayList_t920 * L_1 = (__this->___intervals_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, L_2);
		V_1 = ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_3, Interval_t1205_il2cpp_TypeInfo_var))));
		ArrayList_t920 * L_4 = (__this->___intervals_0);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, ((int32_t)((int32_t)L_5+(int32_t)1)));
		V_2 = ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_6, Interval_t1205_il2cpp_TypeInfo_var))));
		Interval_t1205  L_7 = V_2;
		bool L_8 = Interval_IsDisjoint_m5850((&V_1), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		Interval_t1205  L_9 = V_2;
		bool L_10 = Interval_IsAdjacent_m5851((&V_1), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007f;
		}
	}

IL_0052:
	{
		Interval_t1205  L_11 = V_2;
		Interval_Merge_m5855((&V_1), L_11, /*hidden argument*/NULL);
		ArrayList_t920 * L_12 = (__this->___intervals_0);
		int32_t L_13 = V_0;
		Interval_t1205  L_14 = V_1;
		Interval_t1205  L_15 = L_14;
		Object_t * L_16 = Box(Interval_t1205_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(21 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_12, L_13, L_16);
		ArrayList_t920 * L_17 = (__this->___intervals_0);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_17, ((int32_t)((int32_t)L_18+(int32_t)1)));
		goto IL_0083;
	}

IL_007f:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_20 = V_0;
		ArrayList_t920 * L_21 = (__this->___intervals_0);
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)L_22-(int32_t)1)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
extern TypeInfo* IntervalCollection_t1209_il2cpp_TypeInfo_var;
extern "C" IntervalCollection_t1209 * IntervalCollection_GetMetaCollection_m5869 (IntervalCollection_t1209 * __this, CostDelegate_t1208 * ___cost_del, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntervalCollection_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(820);
		s_Il2CppMethodIntialized = true;
	}
	IntervalCollection_t1209 * V_0 = {0};
	{
		IntervalCollection_t1209 * L_0 = (IntervalCollection_t1209 *)il2cpp_codegen_object_new (IntervalCollection_t1209_il2cpp_TypeInfo_var);
		IntervalCollection__ctor_m5865(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IntervalCollection_Normalize_m5868(__this, /*hidden argument*/NULL);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count() */, __this);
		IntervalCollection_t1209 * L_2 = V_0;
		CostDelegate_t1208 * L_3 = ___cost_del;
		IntervalCollection_Optimize_m5870(__this, 0, ((int32_t)((int32_t)L_1-(int32_t)1)), L_2, L_3, /*hidden argument*/NULL);
		IntervalCollection_t1209 * L_4 = V_0;
		NullCheck(L_4);
		ArrayList_t920 * L_5 = (L_4->___intervals_0);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(44 /* System.Void System.Collections.ArrayList::Sort() */, L_5);
		IntervalCollection_t1209 * L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern "C" void IntervalCollection_Optimize_m5870 (IntervalCollection_t1209 * __this, int32_t ___begin, int32_t ___end, IntervalCollection_t1209 * ___meta, CostDelegate_t1208 * ___cost_del, const MethodInfo* method)
{
	Interval_t1205  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	Interval_t1205  V_9 = {0};
	Interval_t1205  V_10 = {0};
	Interval_t1205  V_11 = {0};
	Interval_t1205  V_12 = {0};
	{
		(&V_0)->___contiguous_2 = 0;
		V_1 = (-1);
		V_2 = (-1);
		V_3 = (0.0);
		int32_t L_0 = ___begin;
		V_4 = L_0;
		goto IL_00ae;
	}

IL_001e:
	{
		int32_t L_1 = V_4;
		Interval_t1205  L_2 = IntervalCollection_get_Item_m5866(__this, L_1, /*hidden argument*/NULL);
		V_9 = L_2;
		int32_t L_3 = ((&V_9)->___low_0);
		(&V_0)->___low_0 = L_3;
		V_5 = (0.0);
		int32_t L_4 = V_4;
		V_6 = L_4;
		goto IL_00a0;
	}

IL_004a:
	{
		int32_t L_5 = V_6;
		Interval_t1205  L_6 = IntervalCollection_get_Item_m5866(__this, L_5, /*hidden argument*/NULL);
		V_10 = L_6;
		int32_t L_7 = ((&V_10)->___high_1);
		(&V_0)->___high_1 = L_7;
		double L_8 = V_5;
		CostDelegate_t1208 * L_9 = ___cost_del;
		int32_t L_10 = V_6;
		Interval_t1205  L_11 = IntervalCollection_get_Item_m5866(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		double L_12 = CostDelegate_Invoke_m5862(L_9, L_11, /*hidden argument*/NULL);
		V_5 = ((double)((double)L_8+(double)L_12));
		CostDelegate_t1208 * L_13 = ___cost_del;
		Interval_t1205  L_14 = V_0;
		NullCheck(L_13);
		double L_15 = CostDelegate_Invoke_m5862(L_13, L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		double L_16 = V_7;
		double L_17 = V_5;
		if ((!(((double)L_16) < ((double)L_17))))
		{
			goto IL_009a;
		}
	}
	{
		double L_18 = V_5;
		double L_19 = V_3;
		if ((!(((double)L_18) > ((double)L_19))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_20 = V_4;
		V_1 = L_20;
		int32_t L_21 = V_6;
		V_2 = L_21;
		double L_22 = V_5;
		V_3 = L_22;
	}

IL_009a:
	{
		int32_t L_23 = V_6;
		V_6 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00a0:
	{
		int32_t L_24 = V_6;
		int32_t L_25 = ___end;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = ___end;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_30 = ___begin;
		V_8 = L_30;
		goto IL_00d9;
	}

IL_00c5:
	{
		IntervalCollection_t1209 * L_31 = ___meta;
		int32_t L_32 = V_8;
		Interval_t1205  L_33 = IntervalCollection_get_Item_m5866(__this, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		IntervalCollection_Add_m5867(L_31, L_33, /*hidden argument*/NULL);
		int32_t L_34 = V_8;
		V_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00d9:
	{
		int32_t L_35 = V_8;
		int32_t L_36 = ___end;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_0143;
	}

IL_00e6:
	{
		int32_t L_37 = V_1;
		Interval_t1205  L_38 = IntervalCollection_get_Item_m5866(__this, L_37, /*hidden argument*/NULL);
		V_11 = L_38;
		int32_t L_39 = ((&V_11)->___low_0);
		(&V_0)->___low_0 = L_39;
		int32_t L_40 = V_2;
		Interval_t1205  L_41 = IntervalCollection_get_Item_m5866(__this, L_40, /*hidden argument*/NULL);
		V_12 = L_41;
		int32_t L_42 = ((&V_12)->___high_1);
		(&V_0)->___high_1 = L_42;
		IntervalCollection_t1209 * L_43 = ___meta;
		Interval_t1205  L_44 = V_0;
		NullCheck(L_43);
		IntervalCollection_Add_m5867(L_43, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_1;
		int32_t L_46 = ___begin;
		if ((((int32_t)L_45) <= ((int32_t)L_46)))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_47 = ___begin;
		int32_t L_48 = V_1;
		IntervalCollection_t1209 * L_49 = ___meta;
		CostDelegate_t1208 * L_50 = ___cost_del;
		IntervalCollection_Optimize_m5870(__this, L_47, ((int32_t)((int32_t)L_48-(int32_t)1)), L_49, L_50, /*hidden argument*/NULL);
	}

IL_012f:
	{
		int32_t L_51 = V_2;
		int32_t L_52 = ___end;
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_53 = V_2;
		int32_t L_54 = ___end;
		IntervalCollection_t1209 * L_55 = ___meta;
		CostDelegate_t1208 * L_56 = ___cost_del;
		IntervalCollection_Optimize_m5870(__this, ((int32_t)((int32_t)L_53+(int32_t)1)), L_54, L_55, L_56, /*hidden argument*/NULL);
	}

IL_0143:
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern "C" int32_t IntervalCollection_get_Count_m5871 (IntervalCollection_t1209 * __this, const MethodInfo* method)
{
	{
		ArrayList_t920 * L_0 = (__this->___intervals_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern "C" bool IntervalCollection_get_IsSynchronized_m5872 (IntervalCollection_t1209 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern "C" Object_t * IntervalCollection_get_SyncRoot_m5873 (IntervalCollection_t1209 * __this, const MethodInfo* method)
{
	{
		ArrayList_t920 * L_0 = (__this->___intervals_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void IntervalCollection_CopyTo_m5874 (IntervalCollection_t1209 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Interval_t1205  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = (__this->___intervals_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_2);
			V_0 = ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_3, Interval_t1205_il2cpp_TypeInfo_var))));
			int32_t L_4 = ___index;
			Array_t * L_5 = ___array;
			NullCheck(L_5);
			int32_t L_6 = Array_get_Length_m6110(L_5, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)L_6)))
			{
				goto IL_002e;
			}
		}

IL_0029:
		{
			goto IL_004b;
		}

IL_002e:
		{
			Array_t * L_7 = ___array;
			Interval_t1205  L_8 = V_0;
			Interval_t1205  L_9 = L_8;
			Object_t * L_10 = Box(Interval_t1205_il2cpp_TypeInfo_var, &L_9);
			int32_t L_11 = ___index;
			int32_t L_12 = L_11;
			___index = ((int32_t)((int32_t)L_12+(int32_t)1));
			NullCheck(L_7);
			Array_SetValue_m6111(L_7, L_10, L_12, /*hidden argument*/NULL);
		}

IL_0040:
		{
			Object_t * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_1;
			V_2 = ((Object_t *)IsInst(L_15, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_2;
			if (L_16)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005b:
		{
			Object_t * L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0062:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"
extern TypeInfo* Enumerator_t1206_il2cpp_TypeInfo_var;
extern "C" Object_t * IntervalCollection_GetEnumerator_m5875 (IntervalCollection_t1209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t1206_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(821);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->___intervals_0);
		Enumerator_t1206 * L_1 = (Enumerator_t1206 *)il2cpp_codegen_object_new (Enumerator_t1206_il2cpp_TypeInfo_var);
		Enumerator__ctor_m5857(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_Parser.h"
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern "C" void Parser__ctor_m5876 (Parser_t1210 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		__this->___caps_2 = L_0;
		Hashtable_t985 * L_1 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_1, /*hidden argument*/NULL);
		__this->___refs_3 = L_1;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
// System.String
#include "mscorlib_System_String.h"
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern "C" int32_t Parser_ParseDecimal_m5877 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		int32_t L_2 = Parser_ParseNumber_m5880(NULL /*static, unused*/, L_0, L_1, ((int32_t)10), 1, ((int32_t)2147483647), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern "C" int32_t Parser_ParseOctal_m5878 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		int32_t L_2 = Parser_ParseNumber_m5880(NULL /*static, unused*/, L_0, L_1, 8, 1, 3, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Parser_ParseHex_m5879 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___digits, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		int32_t L_2 = ___digits;
		int32_t L_3 = ___digits;
		int32_t L_4 = Parser_ParseNumber_m5880(NULL /*static, unused*/, L_0, L_1, ((int32_t)16), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" int32_t Parser_ParseNumber_m5880 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___b, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___ptr;
		V_0 = (*((int32_t*)L_0));
		V_1 = 0;
		V_2 = 0;
		int32_t L_1 = ___max;
		int32_t L_2 = ___min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		___max = ((int32_t)2147483647);
	}

IL_0016:
	{
		goto IL_0048;
	}

IL_001b:
	{
		String_t* L_3 = ___str;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m477(L_3, L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___b;
		int32_t L_8 = V_2;
		int32_t L_9 = Parser_ParseDigit_m5896(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		goto IL_005c;
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___b;
		int32_t L_14 = V_3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)L_13))+(int32_t)L_14));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___max;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_18 = V_0;
		String_t* L_19 = ___str;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m478(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001b;
		}
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = ___min;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0065;
		}
	}
	{
		return (-1);
	}

IL_0065:
	{
		int32_t* L_23 = ___ptr;
		int32_t L_24 = V_0;
		*((int32_t*)(L_23)) = (int32_t)L_24;
		int32_t L_25 = V_1;
		return L_25;
	}
}
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" String_t* Parser_ParseName_m5881 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m477(L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsDigit_m940(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___str;
		int32_t* L_5 = ___ptr;
		int32_t L_6 = Parser_ParseNumber_m5880(NULL /*static, unused*/, L_4, L_5, ((int32_t)10), 1, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_8 = Int32_ToString_m514((&V_0), /*hidden argument*/NULL);
		return L_8;
	}

IL_002d:
	{
		return (String_t*)NULL;
	}

IL_002f:
	{
		int32_t* L_9 = ___ptr;
		V_1 = (*((int32_t*)L_9));
		goto IL_0054;
	}

IL_0037:
	{
		String_t* L_10 = ___str;
		int32_t* L_11 = ___ptr;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m477(L_10, (*((int32_t*)L_11)), /*hidden argument*/NULL);
		bool L_13 = Parser_IsNameChar_m5894(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_004e:
	{
		int32_t* L_14 = ___ptr;
		int32_t* L_15 = ___ptr;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_15))+(int32_t)1));
	}

IL_0054:
	{
		goto IL_0037;
	}

IL_0059:
	{
		int32_t* L_16 = ___ptr;
		int32_t L_17 = V_1;
		if ((((int32_t)((int32_t)((int32_t)(*((int32_t*)L_16))-(int32_t)L_17))) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_18 = ___str;
		int32_t L_19 = V_1;
		int32_t* L_20 = ___ptr;
		int32_t L_21 = V_1;
		NullCheck(L_18);
		String_t* L_22 = String_Substring_m2501(L_18, L_19, ((int32_t)((int32_t)(*((int32_t*)L_20))-(int32_t)L_21)), /*hidden argument*/NULL);
		return L_22;
	}

IL_006f:
	{
		return (String_t*)NULL;
	}
}
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
extern TypeInfo* RegularExpression_t1216_il2cpp_TypeInfo_var;
extern TypeInfo* IndexOutOfRangeException_t831_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1146;
extern "C" RegularExpression_t1216 * Parser_ParseRegularExpression_m5882 (Parser_t1210 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RegularExpression_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(822);
		IndexOutOfRangeException_t831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		_stringLiteral1146 = il2cpp_codegen_string_literal_from_index(1146);
		s_Il2CppMethodIntialized = true;
	}
	RegularExpression_t1216 * V_0 = {0};
	RegularExpression_t1216 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___pattern;
		__this->___pattern_0 = L_0;
		__this->___ptr_1 = 0;
		ArrayList_t920 * L_1 = (__this->___caps_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(30 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
		Hashtable_t985 * L_2 = (__this->___refs_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.Hashtable::Clear() */, L_2);
		__this->___num_groups_4 = 0;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			RegularExpression_t1216 * L_3 = (RegularExpression_t1216 *)il2cpp_codegen_object_new (RegularExpression_t1216_il2cpp_TypeInfo_var);
			RegularExpression__ctor_m5940(L_3, /*hidden argument*/NULL);
			V_0 = L_3;
			RegularExpression_t1216 * L_4 = V_0;
			int32_t L_5 = ___options;
			Parser_ParseGroup_m5884(__this, L_4, L_5, (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
			Parser_ResolveReferences_m5898(__this, /*hidden argument*/NULL);
			RegularExpression_t1216 * L_6 = V_0;
			int32_t L_7 = (__this->___num_groups_4);
			NullCheck(L_6);
			RegularExpression_set_GroupCount_m5941(L_6, L_7, /*hidden argument*/NULL);
			RegularExpression_t1216 * L_8 = V_0;
			V_1 = L_8;
			goto IL_006a;
		}

IL_0053:
		{
			; // IL_0053: leave IL_006a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t831_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0058;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.IndexOutOfRangeException)
		ArgumentException_t275 * L_9 = Parser_NewParseException_m5906(__this, _stringLiteral1146, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
		goto IL_006a;
	} // end catch (depth: 1)

IL_006a:
	{
		RegularExpression_t1216 * L_10 = V_1;
		return L_10;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* CapturingGroup_t1217_il2cpp_TypeInfo_var;
extern TypeInfo* SystemException_t1256_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral290;
extern Il2CppCodeGenString* _stringLiteral1147;
extern "C" int32_t Parser_GetMapping_m5883 (Parser_t1210 * __this, Hashtable_t985 * ___mapping, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		CapturingGroup_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(823);
		SystemException_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(787);
		_stringLiteral290 = il2cpp_codegen_string_literal_from_index(290);
		_stringLiteral1147 = il2cpp_codegen_string_literal_from_index(1147);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CapturingGroup_t1217 * V_2 = {0};
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* G_B4_0 = {0};
	{
		ArrayList_t920 * L_0 = (__this->___caps_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = L_1;
		Hashtable_t985 * L_2 = ___mapping;
		int32_t L_3 = 0;
		Object_t * L_4 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, _stringLiteral290, L_4);
		V_1 = 0;
		goto IL_00a5;
	}

IL_0024:
	{
		ArrayList_t920 * L_5 = (__this->___caps_2);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		V_2 = ((CapturingGroup_t1217 *)CastclassClass(L_7, CapturingGroup_t1217_il2cpp_TypeInfo_var));
		CapturingGroup_t1217 * L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = CapturingGroup_get_Name_m5946(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		CapturingGroup_t1217 * L_10 = V_2;
		NullCheck(L_10);
		String_t* L_11 = CapturingGroup_get_Name_m5946(L_10, /*hidden argument*/NULL);
		G_B4_0 = L_11;
		goto IL_005b;
	}

IL_004c:
	{
		CapturingGroup_t1217 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = CapturingGroup_get_Index_m5944(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		String_t* L_14 = Int32_ToString_m514((&V_4), /*hidden argument*/NULL);
		G_B4_0 = L_14;
	}

IL_005b:
	{
		V_3 = G_B4_0;
		Hashtable_t985 * L_15 = ___mapping;
		String_t* L_16 = V_3;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_008f;
		}
	}
	{
		Hashtable_t985 * L_18 = ___mapping;
		String_t* L_19 = V_3;
		NullCheck(L_18);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, L_19);
		CapturingGroup_t1217 * L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = CapturingGroup_get_Index_m5944(L_21, /*hidden argument*/NULL);
		if ((((int32_t)((*(int32_t*)((int32_t*)UnBox (L_20, Int32_t151_il2cpp_TypeInfo_var))))) == ((int32_t)L_22)))
		{
			goto IL_008a;
		}
	}
	{
		SystemException_t1256 * L_23 = (SystemException_t1256 *)il2cpp_codegen_object_new (SystemException_t1256_il2cpp_TypeInfo_var);
		SystemException__ctor_m6163(L_23, _stringLiteral1147, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_008a:
	{
		goto IL_00a1;
	}

IL_008f:
	{
		Hashtable_t985 * L_24 = ___mapping;
		String_t* L_25 = V_3;
		CapturingGroup_t1217 * L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = CapturingGroup_get_Index_m5944(L_26, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_24);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_24, L_25, L_29);
	}

IL_00a1:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_33 = (__this->___gap_5);
		return L_33;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
extern TypeInfo* RegularExpression_t1216_il2cpp_TypeInfo_var;
extern TypeInfo* Group_t1215_il2cpp_TypeInfo_var;
extern TypeInfo* PositionAssertion_t1226_il2cpp_TypeInfo_var;
extern TypeInfo* CharacterClass_t1229_il2cpp_TypeInfo_var;
extern TypeInfo* Literal_t1224_il2cpp_TypeInfo_var;
extern TypeInfo* Alternation_t1225_il2cpp_TypeInfo_var;
extern TypeInfo* Repetition_t1220_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1148;
extern Il2CppCodeGenString* _stringLiteral1149;
extern Il2CppCodeGenString* _stringLiteral1150;
extern Il2CppCodeGenString* _stringLiteral1151;
extern "C" void Parser_ParseGroup_m5884 (Parser_t1210 * __this, Group_t1215 * ___group, int32_t ___options, Assertion_t1221 * ___assertion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RegularExpression_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(822);
		Group_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(824);
		PositionAssertion_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(825);
		CharacterClass_t1229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		Literal_t1224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(827);
		Alternation_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(828);
		Repetition_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(829);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral1148 = il2cpp_codegen_string_literal_from_index(1148);
		_stringLiteral1149 = il2cpp_codegen_string_literal_from_index(1149);
		_stringLiteral1150 = il2cpp_codegen_string_literal_from_index(1150);
		_stringLiteral1151 = il2cpp_codegen_string_literal_from_index(1151);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Alternation_t1225 * V_1 = {0};
	String_t* V_2 = {0};
	Group_t1215 * V_3 = {0};
	Expression_t1213 * V_4 = {0};
	bool V_5 = false;
	uint16_t V_6 = 0x0;
	uint16_t V_7 = {0};
	uint16_t V_8 = {0};
	uint16_t V_9 = {0};
	int32_t V_10 = 0;
	bool V_11 = false;
	uint16_t V_12 = 0x0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	Repetition_t1220 * V_18 = {0};
	int32_t V_19 = 0;
	uint16_t V_20 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	{
		Group_t1215 * L_0 = ___group;
		V_0 = ((!(((Object_t*)(RegularExpression_t1216 *)((RegularExpression_t1216 *)IsInstClass(L_0, RegularExpression_t1216_il2cpp_TypeInfo_var))) <= ((Object_t*)(Object_t *)NULL)))? 1 : 0);
		V_1 = (Alternation_t1225 *)NULL;
		V_2 = (String_t*)NULL;
		Group_t1215 * L_1 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_1, /*hidden argument*/NULL);
		V_3 = L_1;
		V_4 = (Expression_t1213 *)NULL;
		V_5 = 0;
	}

IL_001a:
	{
		int32_t L_2 = ___options;
		bool L_3 = Parser_IsIgnorePatternWhitespace_m5904(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Parser_ConsumeWhitespace_m5897(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___ptr_1);
		String_t* L_5 = (__this->___pattern_0);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m478(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0484;
	}

IL_0041:
	{
		String_t* L_7 = (__this->___pattern_0);
		int32_t L_8 = (__this->___ptr_1);
		int32_t L_9 = L_8;
		V_19 = L_9;
		__this->___ptr_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_19;
		NullCheck(L_7);
		uint16_t L_11 = String_get_Chars_m477(L_7, L_10, /*hidden argument*/NULL);
		V_6 = L_11;
		uint16_t L_12 = V_6;
		V_20 = L_12;
		uint16_t L_13 = V_20;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 0)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 1)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 2)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 3)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 4)
		{
			goto IL_0190;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 5)
		{
			goto IL_01da;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 6)
		{
			goto IL_025f;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 7)
		{
			goto IL_025f;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 8)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 9)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 10)
		{
			goto IL_0110;
		}
	}

IL_009b:
	{
		uint16_t L_14 = V_20;
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_0182;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_0133;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 3)
		{
			goto IL_00cc;
		}
	}

IL_00b5:
	{
		uint16_t L_15 = V_20;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)63))))
		{
			goto IL_025f;
		}
	}
	{
		uint16_t L_16 = V_20;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)124))))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_026b;
	}

IL_00cc:
	{
		int32_t L_17 = ___options;
		bool L_18 = Parser_IsMultiline_m5901(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00dd;
		}
	}
	{
		G_B11_0 = 3;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B11_0 = 1;
	}

IL_00de:
	{
		V_7 = G_B11_0;
		uint16_t L_19 = V_7;
		PositionAssertion_t1226 * L_20 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_20, L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		goto IL_0270;
	}

IL_00ee:
	{
		int32_t L_21 = ___options;
		bool L_22 = Parser_IsMultiline_m5901(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		G_B15_0 = 7;
		goto IL_0100;
	}

IL_00ff:
	{
		G_B15_0 = 5;
	}

IL_0100:
	{
		V_8 = G_B15_0;
		uint16_t L_23 = V_8;
		PositionAssertion_t1226 * L_24 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_24, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		goto IL_0270;
	}

IL_0110:
	{
		int32_t L_25 = ___options;
		bool L_26 = Parser_IsSingleline_m5903(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0121;
		}
	}
	{
		G_B19_0 = 2;
		goto IL_0122;
	}

IL_0121:
	{
		G_B19_0 = 1;
	}

IL_0122:
	{
		V_9 = G_B19_0;
		uint16_t L_27 = V_9;
		CharacterClass_t1229 * L_28 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_28, L_27, 0, /*hidden argument*/NULL);
		V_4 = L_28;
		goto IL_0270;
	}

IL_0133:
	{
		int32_t L_29 = Parser_ParseEscape_m5892(__this, /*hidden argument*/NULL);
		V_10 = L_29;
		int32_t L_30 = V_10;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_31 = V_10;
		V_6 = (((uint16_t)L_31));
		goto IL_017d;
	}

IL_014d:
	{
		int32_t L_32 = ___options;
		Expression_t1213 * L_33 = Parser_ParseSpecial_m5891(__this, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		Expression_t1213 * L_34 = V_4;
		if (L_34)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_35 = (__this->___pattern_0);
		int32_t L_36 = (__this->___ptr_1);
		int32_t L_37 = L_36;
		V_19 = L_37;
		__this->___ptr_1 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_19;
		NullCheck(L_35);
		uint16_t L_39 = String_get_Chars_m477(L_35, L_38, /*hidden argument*/NULL);
		V_6 = L_39;
	}

IL_017d:
	{
		goto IL_0270;
	}

IL_0182:
	{
		int32_t L_40 = ___options;
		Expression_t1213 * L_41 = Parser_ParseCharacterClass_m5888(__this, L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		goto IL_0270;
	}

IL_0190:
	{
		int32_t L_42 = ___options;
		bool L_43 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_11 = L_43;
		Expression_t1213 * L_44 = Parser_ParseGroupingConstruct_m5885(__this, (&___options), /*hidden argument*/NULL);
		V_4 = L_44;
		Expression_t1213 * L_45 = V_4;
		if (L_45)
		{
			goto IL_01d5;
		}
	}
	{
		String_t* L_46 = V_2;
		if (!L_46)
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_47 = ___options;
		bool L_48 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		bool L_49 = V_11;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_01d0;
		}
	}
	{
		Group_t1215 * L_50 = V_3;
		String_t* L_51 = V_2;
		int32_t L_52 = ___options;
		bool L_53 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Literal_t1224 * L_54 = (Literal_t1224 *)il2cpp_codegen_object_new (Literal_t1224_il2cpp_TypeInfo_var);
		Literal__ctor_m5988(L_54, L_51, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		Group_AppendExpression_m5936(L_50, L_54, /*hidden argument*/NULL);
		V_2 = (String_t*)NULL;
	}

IL_01d0:
	{
		goto IL_001a;
	}

IL_01d5:
	{
		goto IL_0270;
	}

IL_01da:
	{
		V_5 = 1;
		goto IL_0484;
	}

IL_01e2:
	{
		String_t* L_55 = V_2;
		if (!L_55)
		{
			goto IL_01fc;
		}
	}
	{
		Group_t1215 * L_56 = V_3;
		String_t* L_57 = V_2;
		int32_t L_58 = ___options;
		bool L_59 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		Literal_t1224 * L_60 = (Literal_t1224 *)il2cpp_codegen_object_new (Literal_t1224_il2cpp_TypeInfo_var);
		Literal__ctor_m5988(L_60, L_57, L_59, /*hidden argument*/NULL);
		NullCheck(L_56);
		Group_AppendExpression_m5936(L_56, L_60, /*hidden argument*/NULL);
		V_2 = (String_t*)NULL;
	}

IL_01fc:
	{
		Assertion_t1221 * L_61 = ___assertion;
		if (!L_61)
		{
			goto IL_0241;
		}
	}
	{
		Assertion_t1221 * L_62 = ___assertion;
		NullCheck(L_62);
		Expression_t1213 * L_63 = Assertion_get_TrueExpression_m5966(L_62, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0219;
		}
	}
	{
		Assertion_t1221 * L_64 = ___assertion;
		Group_t1215 * L_65 = V_3;
		NullCheck(L_64);
		Assertion_set_TrueExpression_m5967(L_64, L_65, /*hidden argument*/NULL);
		goto IL_023c;
	}

IL_0219:
	{
		Assertion_t1221 * L_66 = ___assertion;
		NullCheck(L_66);
		Expression_t1213 * L_67 = Assertion_get_FalseExpression_m5968(L_66, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_0230;
		}
	}
	{
		Assertion_t1221 * L_68 = ___assertion;
		Group_t1215 * L_69 = V_3;
		NullCheck(L_68);
		Assertion_set_FalseExpression_m5969(L_68, L_69, /*hidden argument*/NULL);
		goto IL_023c;
	}

IL_0230:
	{
		ArgumentException_t275 * L_70 = Parser_NewParseException_m5906(__this, _stringLiteral1148, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_70);
	}

IL_023c:
	{
		goto IL_0254;
	}

IL_0241:
	{
		Alternation_t1225 * L_71 = V_1;
		if (L_71)
		{
			goto IL_024d;
		}
	}
	{
		Alternation_t1225 * L_72 = (Alternation_t1225 *)il2cpp_codegen_object_new (Alternation_t1225_il2cpp_TypeInfo_var);
		Alternation__ctor_m5983(L_72, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_024d:
	{
		Alternation_t1225 * L_73 = V_1;
		Group_t1215 * L_74 = V_3;
		NullCheck(L_73);
		Alternation_AddAlternative_m5985(L_73, L_74, /*hidden argument*/NULL);
	}

IL_0254:
	{
		Group_t1215 * L_75 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_75, /*hidden argument*/NULL);
		V_3 = L_75;
		goto IL_001a;
	}

IL_025f:
	{
		ArgumentException_t275 * L_76 = Parser_NewParseException_m5906(__this, _stringLiteral1149, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_76);
	}

IL_026b:
	{
		goto IL_0270;
	}

IL_0270:
	{
		int32_t L_77 = ___options;
		bool L_78 = Parser_IsIgnorePatternWhitespace_m5904(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		Parser_ConsumeWhitespace_m5897(__this, L_78, /*hidden argument*/NULL);
		int32_t L_79 = (__this->___ptr_1);
		String_t* L_80 = (__this->___pattern_0);
		NullCheck(L_80);
		int32_t L_81 = String_get_Length_m478(L_80, /*hidden argument*/NULL);
		if ((((int32_t)L_79) >= ((int32_t)L_81)))
		{
			goto IL_0413;
		}
	}
	{
		String_t* L_82 = (__this->___pattern_0);
		int32_t L_83 = (__this->___ptr_1);
		NullCheck(L_82);
		uint16_t L_84 = String_get_Chars_m477(L_82, L_83, /*hidden argument*/NULL);
		V_12 = L_84;
		V_13 = 0;
		V_14 = 0;
		V_15 = 0;
		V_16 = 0;
		uint16_t L_85 = V_12;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)63))))
		{
			goto IL_02cc;
		}
	}
	{
		uint16_t L_86 = V_12;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)42))))
		{
			goto IL_02cc;
		}
	}
	{
		uint16_t L_87 = V_12;
		if ((!(((uint32_t)L_87) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_032f;
		}
	}

IL_02cc:
	{
		int32_t L_88 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_88+(int32_t)1));
		V_16 = 1;
		uint16_t L_89 = V_12;
		V_20 = L_89;
		uint16_t L_90 = V_20;
		if ((((int32_t)L_90) == ((int32_t)((int32_t)42))))
		{
			goto IL_030c;
		}
	}
	{
		uint16_t L_91 = V_20;
		if ((((int32_t)L_91) == ((int32_t)((int32_t)43))))
		{
			goto IL_031b;
		}
	}
	{
		uint16_t L_92 = V_20;
		if ((((int32_t)L_92) == ((int32_t)((int32_t)63))))
		{
			goto IL_0301;
		}
	}
	{
		goto IL_032a;
	}

IL_0301:
	{
		V_13 = 0;
		V_14 = 1;
		goto IL_032a;
	}

IL_030c:
	{
		V_13 = 0;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_031b:
	{
		V_13 = 1;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_032a:
	{
		goto IL_0382;
	}

IL_032f:
	{
		uint16_t L_93 = V_12;
		if ((!(((uint32_t)L_93) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_94 = (__this->___ptr_1);
		String_t* L_95 = (__this->___pattern_0);
		NullCheck(L_95);
		int32_t L_96 = String_get_Length_m478(L_95, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_94+(int32_t)1))) >= ((int32_t)L_96)))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_97 = (__this->___ptr_1);
		V_17 = L_97;
		int32_t L_98 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_98+(int32_t)1));
		int32_t L_99 = ___options;
		bool L_100 = Parser_ParseRepetitionBounds_m5889(__this, (&V_13), (&V_14), L_99, /*hidden argument*/NULL);
		V_16 = L_100;
		bool L_101 = V_16;
		if (L_101)
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_102 = V_17;
		__this->___ptr_1 = L_102;
	}

IL_0382:
	{
		bool L_103 = V_16;
		if (!L_103)
		{
			goto IL_0413;
		}
	}
	{
		int32_t L_104 = ___options;
		bool L_105 = Parser_IsIgnorePatternWhitespace_m5904(NULL /*static, unused*/, L_104, /*hidden argument*/NULL);
		Parser_ConsumeWhitespace_m5897(__this, L_105, /*hidden argument*/NULL);
		int32_t L_106 = (__this->___ptr_1);
		String_t* L_107 = (__this->___pattern_0);
		NullCheck(L_107);
		int32_t L_108 = String_get_Length_m478(L_107, /*hidden argument*/NULL);
		if ((((int32_t)L_106) >= ((int32_t)L_108)))
		{
			goto IL_03d4;
		}
	}
	{
		String_t* L_109 = (__this->___pattern_0);
		int32_t L_110 = (__this->___ptr_1);
		NullCheck(L_109);
		uint16_t L_111 = String_get_Chars_m477(L_109, L_110, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_03d4;
		}
	}
	{
		int32_t L_112 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_112+(int32_t)1));
		V_15 = 1;
	}

IL_03d4:
	{
		int32_t L_113 = V_13;
		int32_t L_114 = V_14;
		bool L_115 = V_15;
		Repetition_t1220 * L_116 = (Repetition_t1220 *)il2cpp_codegen_object_new (Repetition_t1220_il2cpp_TypeInfo_var);
		Repetition__ctor_m5958(L_116, L_113, L_114, L_115, /*hidden argument*/NULL);
		V_18 = L_116;
		Expression_t1213 * L_117 = V_4;
		if (L_117)
		{
			goto IL_0406;
		}
	}
	{
		Repetition_t1220 * L_118 = V_18;
		String_t* L_119 = Char_ToString_m2522((&V_6), /*hidden argument*/NULL);
		int32_t L_120 = ___options;
		bool L_121 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_120, /*hidden argument*/NULL);
		Literal_t1224 * L_122 = (Literal_t1224 *)il2cpp_codegen_object_new (Literal_t1224_il2cpp_TypeInfo_var);
		Literal__ctor_m5988(L_122, L_119, L_121, /*hidden argument*/NULL);
		NullCheck(L_118);
		Repetition_set_Expression_m5960(L_118, L_122, /*hidden argument*/NULL);
		goto IL_040f;
	}

IL_0406:
	{
		Repetition_t1220 * L_123 = V_18;
		Expression_t1213 * L_124 = V_4;
		NullCheck(L_123);
		Repetition_set_Expression_m5960(L_123, L_124, /*hidden argument*/NULL);
	}

IL_040f:
	{
		Repetition_t1220 * L_125 = V_18;
		V_4 = L_125;
	}

IL_0413:
	{
		Expression_t1213 * L_126 = V_4;
		if (L_126)
		{
			goto IL_0439;
		}
	}
	{
		String_t* L_127 = V_2;
		if (L_127)
		{
			goto IL_0426;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_128 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_128;
	}

IL_0426:
	{
		String_t* L_129 = V_2;
		uint16_t L_130 = V_6;
		uint16_t L_131 = L_130;
		Object_t * L_132 = Box(Char_t266_il2cpp_TypeInfo_var, &L_131);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_133 = String_Concat_m606(NULL /*static, unused*/, L_129, L_132, /*hidden argument*/NULL);
		V_2 = L_133;
		goto IL_045e;
	}

IL_0439:
	{
		String_t* L_134 = V_2;
		if (!L_134)
		{
			goto IL_0453;
		}
	}
	{
		Group_t1215 * L_135 = V_3;
		String_t* L_136 = V_2;
		int32_t L_137 = ___options;
		bool L_138 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_137, /*hidden argument*/NULL);
		Literal_t1224 * L_139 = (Literal_t1224 *)il2cpp_codegen_object_new (Literal_t1224_il2cpp_TypeInfo_var);
		Literal__ctor_m5988(L_139, L_136, L_138, /*hidden argument*/NULL);
		NullCheck(L_135);
		Group_AppendExpression_m5936(L_135, L_139, /*hidden argument*/NULL);
		V_2 = (String_t*)NULL;
	}

IL_0453:
	{
		Group_t1215 * L_140 = V_3;
		Expression_t1213 * L_141 = V_4;
		NullCheck(L_140);
		Group_AppendExpression_m5936(L_140, L_141, /*hidden argument*/NULL);
		V_4 = (Expression_t1213 *)NULL;
	}

IL_045e:
	{
		bool L_142 = V_0;
		if (!L_142)
		{
			goto IL_047f;
		}
	}
	{
		int32_t L_143 = (__this->___ptr_1);
		String_t* L_144 = (__this->___pattern_0);
		NullCheck(L_144);
		int32_t L_145 = String_get_Length_m478(L_144, /*hidden argument*/NULL);
		if ((((int32_t)L_143) < ((int32_t)L_145)))
		{
			goto IL_047f;
		}
	}
	{
		goto IL_0484;
	}

IL_047f:
	{
		goto IL_001a;
	}

IL_0484:
	{
		bool L_146 = V_0;
		if (!L_146)
		{
			goto IL_049d;
		}
	}
	{
		bool L_147 = V_5;
		if (!L_147)
		{
			goto IL_049d;
		}
	}
	{
		ArgumentException_t275 * L_148 = Parser_NewParseException_m5906(__this, _stringLiteral1150, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_148);
	}

IL_049d:
	{
		bool L_149 = V_0;
		if (L_149)
		{
			goto IL_04b6;
		}
	}
	{
		bool L_150 = V_5;
		if (L_150)
		{
			goto IL_04b6;
		}
	}
	{
		ArgumentException_t275 * L_151 = Parser_NewParseException_m5906(__this, _stringLiteral1151, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_151);
	}

IL_04b6:
	{
		String_t* L_152 = V_2;
		if (!L_152)
		{
			goto IL_04ce;
		}
	}
	{
		Group_t1215 * L_153 = V_3;
		String_t* L_154 = V_2;
		int32_t L_155 = ___options;
		bool L_156 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_155, /*hidden argument*/NULL);
		Literal_t1224 * L_157 = (Literal_t1224 *)il2cpp_codegen_object_new (Literal_t1224_il2cpp_TypeInfo_var);
		Literal__ctor_m5988(L_157, L_154, L_156, /*hidden argument*/NULL);
		NullCheck(L_153);
		Group_AppendExpression_m5936(L_153, L_157, /*hidden argument*/NULL);
	}

IL_04ce:
	{
		Assertion_t1221 * L_158 = ___assertion;
		if (!L_158)
		{
			goto IL_04fe;
		}
	}
	{
		Assertion_t1221 * L_159 = ___assertion;
		NullCheck(L_159);
		Expression_t1213 * L_160 = Assertion_get_TrueExpression_m5966(L_159, /*hidden argument*/NULL);
		if (L_160)
		{
			goto IL_04eb;
		}
	}
	{
		Assertion_t1221 * L_161 = ___assertion;
		Group_t1215 * L_162 = V_3;
		NullCheck(L_161);
		Assertion_set_TrueExpression_m5967(L_161, L_162, /*hidden argument*/NULL);
		goto IL_04f2;
	}

IL_04eb:
	{
		Assertion_t1221 * L_163 = ___assertion;
		Group_t1215 * L_164 = V_3;
		NullCheck(L_163);
		Assertion_set_FalseExpression_m5969(L_163, L_164, /*hidden argument*/NULL);
	}

IL_04f2:
	{
		Group_t1215 * L_165 = ___group;
		Assertion_t1221 * L_166 = ___assertion;
		NullCheck(L_165);
		Group_AppendExpression_m5936(L_165, L_166, /*hidden argument*/NULL);
		goto IL_051e;
	}

IL_04fe:
	{
		Alternation_t1225 * L_167 = V_1;
		if (!L_167)
		{
			goto IL_0517;
		}
	}
	{
		Alternation_t1225 * L_168 = V_1;
		Group_t1215 * L_169 = V_3;
		NullCheck(L_168);
		Alternation_AddAlternative_m5985(L_168, L_169, /*hidden argument*/NULL);
		Group_t1215 * L_170 = ___group;
		Alternation_t1225 * L_171 = V_1;
		NullCheck(L_170);
		Group_AppendExpression_m5936(L_170, L_171, /*hidden argument*/NULL);
		goto IL_051e;
	}

IL_0517:
	{
		Group_t1215 * L_172 = ___group;
		Group_t1215 * L_173 = V_3;
		NullCheck(L_172);
		Group_AppendExpression_m5936(L_172, L_173, /*hidden argument*/NULL);
	}

IL_051e:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
extern TypeInfo* Group_t1215_il2cpp_TypeInfo_var;
extern TypeInfo* CapturingGroup_t1217_il2cpp_TypeInfo_var;
extern TypeInfo* NonBacktrackingGroup_t1219_il2cpp_TypeInfo_var;
extern TypeInfo* ExpressionAssertion_t1223_il2cpp_TypeInfo_var;
extern TypeInfo* BalancingGroup_t1218_il2cpp_TypeInfo_var;
extern TypeInfo* Literal_t1224_il2cpp_TypeInfo_var;
extern TypeInfo* CaptureAssertion_t1222_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1152;
extern Il2CppCodeGenString* _stringLiteral1153;
extern Il2CppCodeGenString* _stringLiteral1154;
extern Il2CppCodeGenString* _stringLiteral1155;
extern Il2CppCodeGenString* _stringLiteral1156;
extern Il2CppCodeGenString* _stringLiteral1157;
extern "C" Expression_t1213 * Parser_ParseGroupingConstruct_m5885 (Parser_t1210 * __this, int32_t* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Group_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(824);
		CapturingGroup_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(823);
		NonBacktrackingGroup_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(830);
		ExpressionAssertion_t1223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(831);
		BalancingGroup_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(832);
		Literal_t1224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(827);
		CaptureAssertion_t1222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(833);
		_stringLiteral1152 = il2cpp_codegen_string_literal_from_index(1152);
		_stringLiteral1153 = il2cpp_codegen_string_literal_from_index(1153);
		_stringLiteral1154 = il2cpp_codegen_string_literal_from_index(1154);
		_stringLiteral1155 = il2cpp_codegen_string_literal_from_index(1155);
		_stringLiteral1156 = il2cpp_codegen_string_literal_from_index(1156);
		_stringLiteral1157 = il2cpp_codegen_string_literal_from_index(1157);
		s_Il2CppMethodIntialized = true;
	}
	Group_t1215 * V_0 = {0};
	Group_t1215 * V_1 = {0};
	Group_t1215 * V_2 = {0};
	int32_t V_3 = {0};
	Group_t1215 * V_4 = {0};
	ExpressionAssertion_t1223 * V_5 = {0};
	Group_t1215 * V_6 = {0};
	uint16_t V_7 = 0x0;
	String_t* V_8 = {0};
	CapturingGroup_t1217 * V_9 = {0};
	String_t* V_10 = {0};
	BalancingGroup_t1218 * V_11 = {0};
	Assertion_t1221 * V_12 = {0};
	int32_t V_13 = 0;
	String_t* V_14 = {0};
	ExpressionAssertion_t1223 * V_15 = {0};
	Group_t1215 * V_16 = {0};
	Group_t1215 * V_17 = {0};
	uint16_t V_18 = 0x0;
	int32_t V_19 = 0;
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m477(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)63))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t* L_3 = ___options;
		bool L_4 = Parser_IsExplicitCapture_m5902(NULL /*static, unused*/, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Group_t1215 * L_5 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0042;
	}

IL_002f:
	{
		CapturingGroup_t1217 * L_6 = (CapturingGroup_t1217 *)il2cpp_codegen_object_new (CapturingGroup_t1217_il2cpp_TypeInfo_var);
		CapturingGroup__ctor_m5943(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		ArrayList_t920 * L_7 = (__this->___caps_2);
		Group_t1215 * L_8 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, L_8);
	}

IL_0042:
	{
		Group_t1215 * L_9 = V_0;
		int32_t* L_10 = ___options;
		Parser_ParseGroup_m5884(__this, L_9, (*((int32_t*)L_10)), (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		Group_t1215 * L_11 = V_0;
		return L_11;
	}

IL_004e:
	{
		int32_t L_12 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		String_t* L_13 = (__this->___pattern_0);
		int32_t L_14 = (__this->___ptr_1);
		NullCheck(L_13);
		uint16_t L_15 = String_get_Chars_m477(L_13, L_14, /*hidden argument*/NULL);
		V_18 = L_15;
		uint16_t L_16 = V_18;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 0)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 1)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 2)
		{
			goto IL_0482;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 3)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 4)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 5)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 6)
		{
			goto IL_021c;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 7)
		{
			goto IL_0376;
		}
	}

IL_0099:
	{
		uint16_t L_17 = V_18;
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 0)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 1)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 2)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 3)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 4)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 5)
		{
			goto IL_0139;
		}
	}

IL_00bb:
	{
		uint16_t L_18 = V_18;
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 0)
		{
			goto IL_00f9;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 1)
		{
			goto IL_00d9;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 2)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 3)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 4)
		{
			goto IL_0119;
		}
	}

IL_00d9:
	{
		uint16_t L_19 = V_18;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)45))))
		{
			goto IL_0139;
		}
	}
	{
		uint16_t L_20 = V_18;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)115))))
		{
			goto IL_0139;
		}
	}
	{
		uint16_t L_21 = V_18;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)120))))
		{
			goto IL_0139;
		}
	}
	{
		goto IL_04de;
	}

IL_00f9:
	{
		int32_t L_22 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		Group_t1215 * L_23 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_23, /*hidden argument*/NULL);
		V_1 = L_23;
		Group_t1215 * L_24 = V_1;
		int32_t* L_25 = ___options;
		Parser_ParseGroup_m5884(__this, L_24, (*((int32_t*)L_25)), (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		Group_t1215 * L_26 = V_1;
		return L_26;
	}

IL_0119:
	{
		int32_t L_27 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		NonBacktrackingGroup_t1219 * L_28 = (NonBacktrackingGroup_t1219 *)il2cpp_codegen_object_new (NonBacktrackingGroup_t1219_il2cpp_TypeInfo_var);
		NonBacktrackingGroup__ctor_m5955(L_28, /*hidden argument*/NULL);
		V_2 = L_28;
		Group_t1215 * L_29 = V_2;
		int32_t* L_30 = ___options;
		Parser_ParseGroup_m5884(__this, L_29, (*((int32_t*)L_30)), (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		Group_t1215 * L_31 = V_2;
		return L_31;
	}

IL_0139:
	{
		int32_t* L_32 = ___options;
		V_3 = (*((int32_t*)L_32));
		Parser_ParseOptions_m5887(__this, (&V_3), 0, /*hidden argument*/NULL);
		String_t* L_33 = (__this->___pattern_0);
		int32_t L_34 = (__this->___ptr_1);
		NullCheck(L_33);
		uint16_t L_35 = String_get_Chars_m477(L_33, L_34, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_36 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_36+(int32_t)1));
		Parser_ParseOptions_m5887(__this, (&V_3), 1, /*hidden argument*/NULL);
	}

IL_0174:
	{
		String_t* L_37 = (__this->___pattern_0);
		int32_t L_38 = (__this->___ptr_1);
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m477(L_37, L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_40 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
		Group_t1215 * L_41 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_41, /*hidden argument*/NULL);
		V_4 = L_41;
		Group_t1215 * L_42 = V_4;
		int32_t L_43 = V_3;
		Parser_ParseGroup_m5884(__this, L_42, L_43, (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		Group_t1215 * L_44 = V_4;
		return L_44;
	}

IL_01ae:
	{
		String_t* L_45 = (__this->___pattern_0);
		int32_t L_46 = (__this->___ptr_1);
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m477(L_45, L_46, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_48 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_48+(int32_t)1));
		int32_t* L_49 = ___options;
		int32_t L_50 = V_3;
		*((int32_t*)(L_49)) = (int32_t)L_50;
		return (Expression_t1213 *)NULL;
	}

IL_01d9:
	{
		ArgumentException_t275 * L_51 = Parser_NewParseException_m5906(__this, _stringLiteral1152, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_51);
	}

IL_01e5:
	{
		ExpressionAssertion_t1223 * L_52 = (ExpressionAssertion_t1223 *)il2cpp_codegen_object_new (ExpressionAssertion_t1223_il2cpp_TypeInfo_var);
		ExpressionAssertion__ctor_m5976(L_52, /*hidden argument*/NULL);
		V_5 = L_52;
		ExpressionAssertion_t1223 * L_53 = V_5;
		bool L_54 = Parser_ParseAssertionType_m5886(__this, L_53, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_021c;
	}

IL_01fe:
	{
		Group_t1215 * L_55 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_55, /*hidden argument*/NULL);
		V_6 = L_55;
		Group_t1215 * L_56 = V_6;
		int32_t* L_57 = ___options;
		Parser_ParseGroup_m5884(__this, L_56, (*((int32_t*)L_57)), (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		ExpressionAssertion_t1223 * L_58 = V_5;
		Group_t1215 * L_59 = V_6;
		NullCheck(L_58);
		ExpressionAssertion_set_TestExpression_m5980(L_58, L_59, /*hidden argument*/NULL);
		ExpressionAssertion_t1223 * L_60 = V_5;
		return L_60;
	}

IL_021c:
	{
		String_t* L_61 = (__this->___pattern_0);
		int32_t L_62 = (__this->___ptr_1);
		NullCheck(L_61);
		uint16_t L_63 = String_get_Chars_m477(L_61, L_62, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_023d;
		}
	}
	{
		V_7 = ((int32_t)62);
		goto IL_0241;
	}

IL_023d:
	{
		V_7 = ((int32_t)39);
	}

IL_0241:
	{
		int32_t L_64 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_64+(int32_t)1));
		String_t* L_65 = Parser_ParseName_m5893(__this, /*hidden argument*/NULL);
		V_8 = L_65;
		String_t* L_66 = (__this->___pattern_0);
		int32_t L_67 = (__this->___ptr_1);
		NullCheck(L_66);
		uint16_t L_68 = String_get_Chars_m477(L_66, L_67, /*hidden argument*/NULL);
		uint16_t L_69 = V_7;
		if ((!(((uint32_t)L_68) == ((uint32_t)L_69))))
		{
			goto IL_02bc;
		}
	}
	{
		String_t* L_70 = V_8;
		if (L_70)
		{
			goto IL_0282;
		}
	}
	{
		ArgumentException_t275 * L_71 = Parser_NewParseException_m5906(__this, _stringLiteral1153, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_71);
	}

IL_0282:
	{
		int32_t L_72 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_72+(int32_t)1));
		CapturingGroup_t1217 * L_73 = (CapturingGroup_t1217 *)il2cpp_codegen_object_new (CapturingGroup_t1217_il2cpp_TypeInfo_var);
		CapturingGroup__ctor_m5943(L_73, /*hidden argument*/NULL);
		V_9 = L_73;
		CapturingGroup_t1217 * L_74 = V_9;
		String_t* L_75 = V_8;
		NullCheck(L_74);
		CapturingGroup_set_Name_m5947(L_74, L_75, /*hidden argument*/NULL);
		ArrayList_t920 * L_76 = (__this->___caps_2);
		CapturingGroup_t1217 * L_77 = V_9;
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_76, L_77);
		CapturingGroup_t1217 * L_78 = V_9;
		int32_t* L_79 = ___options;
		Parser_ParseGroup_m5884(__this, L_78, (*((int32_t*)L_79)), (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		CapturingGroup_t1217 * L_80 = V_9;
		return L_80;
	}

IL_02bc:
	{
		String_t* L_81 = (__this->___pattern_0);
		int32_t L_82 = (__this->___ptr_1);
		NullCheck(L_81);
		uint16_t L_83 = String_get_Chars_m477(L_81, L_82, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_83) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_84 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_84+(int32_t)1));
		String_t* L_85 = Parser_ParseName_m5893(__this, /*hidden argument*/NULL);
		V_10 = L_85;
		String_t* L_86 = V_10;
		if (!L_86)
		{
			goto IL_0309;
		}
	}
	{
		String_t* L_87 = (__this->___pattern_0);
		int32_t L_88 = (__this->___ptr_1);
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m477(L_87, L_88, /*hidden argument*/NULL);
		uint16_t L_90 = V_7;
		if ((((int32_t)L_89) == ((int32_t)L_90)))
		{
			goto IL_0315;
		}
	}

IL_0309:
	{
		ArgumentException_t275 * L_91 = Parser_NewParseException_m5906(__this, _stringLiteral1154, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_91);
	}

IL_0315:
	{
		int32_t L_92 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_92+(int32_t)1));
		BalancingGroup_t1218 * L_93 = (BalancingGroup_t1218 *)il2cpp_codegen_object_new (BalancingGroup_t1218_il2cpp_TypeInfo_var);
		BalancingGroup__ctor_m5952(L_93, /*hidden argument*/NULL);
		V_11 = L_93;
		BalancingGroup_t1218 * L_94 = V_11;
		String_t* L_95 = V_8;
		NullCheck(L_94);
		CapturingGroup_set_Name_m5947(L_94, L_95, /*hidden argument*/NULL);
		BalancingGroup_t1218 * L_96 = V_11;
		NullCheck(L_96);
		bool L_97 = CapturingGroup_get_IsNamed_m5948(L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_034d;
		}
	}
	{
		ArrayList_t920 * L_98 = (__this->___caps_2);
		BalancingGroup_t1218 * L_99 = V_11;
		NullCheck(L_98);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_98, L_99);
	}

IL_034d:
	{
		Hashtable_t985 * L_100 = (__this->___refs_3);
		BalancingGroup_t1218 * L_101 = V_11;
		String_t* L_102 = V_10;
		NullCheck(L_100);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_100, L_101, L_102);
		BalancingGroup_t1218 * L_103 = V_11;
		int32_t* L_104 = ___options;
		Parser_ParseGroup_m5884(__this, L_103, (*((int32_t*)L_104)), (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		BalancingGroup_t1218 * L_105 = V_11;
		return L_105;
	}

IL_036a:
	{
		ArgumentException_t275 * L_106 = Parser_NewParseException_m5906(__this, _stringLiteral1153, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_106);
	}

IL_0376:
	{
		int32_t L_107 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_107+(int32_t)1));
		int32_t L_108 = (__this->___ptr_1);
		V_13 = L_108;
		String_t* L_109 = Parser_ParseName_m5893(__this, /*hidden argument*/NULL);
		V_14 = L_109;
		String_t* L_110 = V_14;
		if (!L_110)
		{
			goto IL_03b3;
		}
	}
	{
		String_t* L_111 = (__this->___pattern_0);
		int32_t L_112 = (__this->___ptr_1);
		NullCheck(L_111);
		uint16_t L_113 = String_get_Chars_m477(L_111, L_112, /*hidden argument*/NULL);
		if ((((int32_t)L_113) == ((int32_t)((int32_t)41))))
		{
			goto IL_043a;
		}
	}

IL_03b3:
	{
		int32_t L_114 = V_13;
		__this->___ptr_1 = L_114;
		ExpressionAssertion_t1223 * L_115 = (ExpressionAssertion_t1223 *)il2cpp_codegen_object_new (ExpressionAssertion_t1223_il2cpp_TypeInfo_var);
		ExpressionAssertion__ctor_m5976(L_115, /*hidden argument*/NULL);
		V_15 = L_115;
		String_t* L_116 = (__this->___pattern_0);
		int32_t L_117 = (__this->___ptr_1);
		NullCheck(L_116);
		uint16_t L_118 = String_get_Chars_m477(L_116, L_117, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_118) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0406;
		}
	}
	{
		int32_t L_119 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_119+(int32_t)1));
		ExpressionAssertion_t1223 * L_120 = V_15;
		bool L_121 = Parser_ParseAssertionType_m5886(__this, L_120, /*hidden argument*/NULL);
		if (L_121)
		{
			goto IL_0401;
		}
	}
	{
		ArgumentException_t275 * L_122 = Parser_NewParseException_m5906(__this, _stringLiteral1155, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_122);
	}

IL_0401:
	{
		goto IL_0416;
	}

IL_0406:
	{
		ExpressionAssertion_t1223 * L_123 = V_15;
		NullCheck(L_123);
		ExpressionAssertion_set_Negate_m5978(L_123, 0, /*hidden argument*/NULL);
		ExpressionAssertion_t1223 * L_124 = V_15;
		NullCheck(L_124);
		ExpressionAssertion_set_Reverse_m5977(L_124, 0, /*hidden argument*/NULL);
	}

IL_0416:
	{
		Group_t1215 * L_125 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_125, /*hidden argument*/NULL);
		V_16 = L_125;
		Group_t1215 * L_126 = V_16;
		int32_t* L_127 = ___options;
		Parser_ParseGroup_m5884(__this, L_126, (*((int32_t*)L_127)), (Assertion_t1221 *)NULL, /*hidden argument*/NULL);
		ExpressionAssertion_t1223 * L_128 = V_15;
		Group_t1215 * L_129 = V_16;
		NullCheck(L_128);
		ExpressionAssertion_set_TestExpression_m5980(L_128, L_129, /*hidden argument*/NULL);
		ExpressionAssertion_t1223 * L_130 = V_15;
		V_12 = L_130;
		goto IL_046c;
	}

IL_043a:
	{
		int32_t L_131 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_131+(int32_t)1));
		String_t* L_132 = V_14;
		int32_t* L_133 = ___options;
		bool L_134 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, (*((int32_t*)L_133)), /*hidden argument*/NULL);
		Literal_t1224 * L_135 = (Literal_t1224 *)il2cpp_codegen_object_new (Literal_t1224_il2cpp_TypeInfo_var);
		Literal__ctor_m5988(L_135, L_132, L_134, /*hidden argument*/NULL);
		CaptureAssertion_t1222 * L_136 = (CaptureAssertion_t1222 *)il2cpp_codegen_object_new (CaptureAssertion_t1222_il2cpp_TypeInfo_var);
		CaptureAssertion__ctor_m5971(L_136, L_135, /*hidden argument*/NULL);
		V_12 = L_136;
		Hashtable_t985 * L_137 = (__this->___refs_3);
		Assertion_t1221 * L_138 = V_12;
		String_t* L_139 = V_14;
		NullCheck(L_137);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_137, L_138, L_139);
	}

IL_046c:
	{
		Group_t1215 * L_140 = (Group_t1215 *)il2cpp_codegen_object_new (Group_t1215_il2cpp_TypeInfo_var);
		Group__ctor_m5935(L_140, /*hidden argument*/NULL);
		V_17 = L_140;
		Group_t1215 * L_141 = V_17;
		int32_t* L_142 = ___options;
		Assertion_t1221 * L_143 = V_12;
		Parser_ParseGroup_m5884(__this, L_141, (*((int32_t*)L_142)), L_143, /*hidden argument*/NULL);
		Group_t1215 * L_144 = V_17;
		return L_144;
	}

IL_0482:
	{
		int32_t L_145 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_145+(int32_t)1));
		goto IL_04b7;
	}

IL_0495:
	{
		int32_t L_146 = (__this->___ptr_1);
		String_t* L_147 = (__this->___pattern_0);
		NullCheck(L_147);
		int32_t L_148 = String_get_Length_m478(L_147, /*hidden argument*/NULL);
		if ((((int32_t)L_146) < ((int32_t)L_148)))
		{
			goto IL_04b7;
		}
	}
	{
		ArgumentException_t275 * L_149 = Parser_NewParseException_m5906(__this, _stringLiteral1156, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_149);
	}

IL_04b7:
	{
		String_t* L_150 = (__this->___pattern_0);
		int32_t L_151 = (__this->___ptr_1);
		int32_t L_152 = L_151;
		V_19 = L_152;
		__this->___ptr_1 = ((int32_t)((int32_t)L_152+(int32_t)1));
		int32_t L_153 = V_19;
		NullCheck(L_150);
		uint16_t L_154 = String_get_Chars_m477(L_150, L_153, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_154) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0495;
		}
	}
	{
		return (Expression_t1213 *)NULL;
	}

IL_04de:
	{
		ArgumentException_t275 * L_155 = Parser_NewParseException_m5906(__this, _stringLiteral1157, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_155);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
extern "C" bool Parser_ParseAssertionType_m5886 (Parser_t1210 * __this, ExpressionAssertion_t1223 * ___assertion, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m477(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_3 = (__this->___pattern_0);
		int32_t L_4 = (__this->___ptr_1);
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m477(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		uint16_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)33))))
		{
			goto IL_004d;
		}
	}
	{
		uint16_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)61))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0059;
	}

IL_0041:
	{
		ExpressionAssertion_t1223 * L_8 = ___assertion;
		NullCheck(L_8);
		ExpressionAssertion_set_Negate_m5978(L_8, 0, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_004d:
	{
		ExpressionAssertion_t1223 * L_9 = ___assertion;
		NullCheck(L_9);
		ExpressionAssertion_set_Negate_m5978(L_9, 1, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0059:
	{
		return 0;
	}

IL_005b:
	{
		ExpressionAssertion_t1223 * L_10 = ___assertion;
		NullCheck(L_10);
		ExpressionAssertion_set_Reverse_m5977(L_10, 1, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_11+(int32_t)2));
		goto IL_00cb;
	}

IL_0075:
	{
		String_t* L_12 = (__this->___pattern_0);
		int32_t L_13 = (__this->___ptr_1);
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m477(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		uint16_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)33))))
		{
			goto IL_00a8;
		}
	}
	{
		uint16_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)61))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00b4;
	}

IL_009c:
	{
		ExpressionAssertion_t1223 * L_17 = ___assertion;
		NullCheck(L_17);
		ExpressionAssertion_set_Negate_m5978(L_17, 0, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_00a8:
	{
		ExpressionAssertion_t1223 * L_18 = ___assertion;
		NullCheck(L_18);
		ExpressionAssertion_set_Negate_m5978(L_18, 1, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_00b4:
	{
		return 0;
	}

IL_00b6:
	{
		ExpressionAssertion_t1223 * L_19 = ___assertion;
		NullCheck(L_19);
		ExpressionAssertion_set_Reverse_m5977(L_19, 0, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00cb:
	{
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Parser_ParseOptions_m5887 (Parser_t1210 * __this, int32_t* ___options, bool ___negate, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		goto IL_00ef;
	}

IL_0005:
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m477(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 0)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 1)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 2)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 3)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 4)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 5)
		{
			goto IL_0087;
		}
	}

IL_0038:
	{
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)115))))
		{
			goto IL_00a4;
		}
	}
	{
		uint16_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)120))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00e0;
	}

IL_004d:
	{
		bool L_6 = ___negate;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		int32_t* L_7 = ___options;
		int32_t* L_8 = ___options;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))&(int32_t)((int32_t)-2)));
		goto IL_0065;
	}

IL_005f:
	{
		int32_t* L_9 = ___options;
		int32_t* L_10 = ___options;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))|(int32_t)1));
	}

IL_0065:
	{
		goto IL_00e1;
	}

IL_006a:
	{
		bool L_11 = ___negate;
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		int32_t* L_12 = ___options;
		int32_t* L_13 = ___options;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_13))&(int32_t)((int32_t)-3)));
		goto IL_0082;
	}

IL_007c:
	{
		int32_t* L_14 = ___options;
		int32_t* L_15 = ___options;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_15))|(int32_t)2));
	}

IL_0082:
	{
		goto IL_00e1;
	}

IL_0087:
	{
		bool L_16 = ___negate;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		int32_t* L_17 = ___options;
		int32_t* L_18 = ___options;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_18))&(int32_t)((int32_t)-5)));
		goto IL_009f;
	}

IL_0099:
	{
		int32_t* L_19 = ___options;
		int32_t* L_20 = ___options;
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_20))|(int32_t)4));
	}

IL_009f:
	{
		goto IL_00e1;
	}

IL_00a4:
	{
		bool L_21 = ___negate;
		if (!L_21)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t* L_22 = ___options;
		int32_t* L_23 = ___options;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_23))&(int32_t)((int32_t)-17)));
		goto IL_00bd;
	}

IL_00b6:
	{
		int32_t* L_24 = ___options;
		int32_t* L_25 = ___options;
		*((int32_t*)(L_24)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_25))|(int32_t)((int32_t)16)));
	}

IL_00bd:
	{
		goto IL_00e1;
	}

IL_00c2:
	{
		bool L_26 = ___negate;
		if (!L_26)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t* L_27 = ___options;
		int32_t* L_28 = ___options;
		*((int32_t*)(L_27)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_28))&(int32_t)((int32_t)-33)));
		goto IL_00db;
	}

IL_00d4:
	{
		int32_t* L_29 = ___options;
		int32_t* L_30 = ___options;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_30))|(int32_t)((int32_t)32)));
	}

IL_00db:
	{
		goto IL_00e1;
	}

IL_00e0:
	{
		return;
	}

IL_00e1:
	{
		int32_t L_31 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00ef:
	{
		goto IL_0005;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern TypeInfo* CharacterClass_t1229_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1158;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral304;
extern Il2CppCodeGenString* _stringLiteral1159;
extern Il2CppCodeGenString* _stringLiteral1160;
extern "C" Expression_t1213 * Parser_ParseCharacterClass_m5888 (Parser_t1210 * __this, int32_t ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t1229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		_stringLiteral1158 = il2cpp_codegen_string_literal_from_index(1158);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		_stringLiteral304 = il2cpp_codegen_string_literal_from_index(304);
		_stringLiteral1159 = il2cpp_codegen_string_literal_from_index(1159);
		_stringLiteral1160 = il2cpp_codegen_string_literal_from_index(1160);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CharacterClass_t1229 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	CharacterClass_t1229 * G_B24_0 = {0};
	CharacterClass_t1229 * G_B23_0 = {0};
	int32_t G_B25_0 = 0;
	CharacterClass_t1229 * G_B25_1 = {0};
	CharacterClass_t1229 * G_B28_0 = {0};
	CharacterClass_t1229 * G_B27_0 = {0};
	int32_t G_B29_0 = 0;
	CharacterClass_t1229 * G_B29_1 = {0};
	CharacterClass_t1229 * G_B32_0 = {0};
	CharacterClass_t1229 * G_B31_0 = {0};
	int32_t G_B33_0 = 0;
	CharacterClass_t1229 * G_B33_1 = {0};
	{
		V_0 = 0;
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m477(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)94)))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = 1;
		int32_t L_3 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_4 = ___options;
		bool L_5 = Parser_IsECMAScript_m5905(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_0;
		int32_t L_7 = ___options;
		bool L_8 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		CharacterClass_t1229 * L_9 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6009(L_9, L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = (__this->___pattern_0);
		int32_t L_11 = (__this->___ptr_1);
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m477(L_10, L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_006c;
		}
	}
	{
		CharacterClass_t1229 * L_13 = V_2;
		NullCheck(L_13);
		CharacterClass_AddCharacter_m6013(L_13, ((int32_t)93), /*hidden argument*/NULL);
		int32_t L_14 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006c:
	{
		V_3 = (-1);
		V_4 = (-1);
		V_5 = 0;
		V_6 = 0;
		goto IL_027f;
	}

IL_007c:
	{
		String_t* L_15 = (__this->___pattern_0);
		int32_t L_16 = (__this->___ptr_1);
		int32_t L_17 = L_16;
		V_7 = L_17;
		__this->___ptr_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		int32_t L_18 = V_7;
		NullCheck(L_15);
		uint16_t L_19 = String_get_Chars_m477(L_15, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		int32_t L_20 = V_3;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_00ab;
		}
	}
	{
		V_6 = 1;
		goto IL_0295;
	}

IL_00ab:
	{
		int32_t L_21 = V_3;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_00ca;
		}
	}
	{
		V_5 = 1;
		goto IL_027f;
	}

IL_00ca:
	{
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_25 = Parser_ParseEscape_m5892(__this, /*hidden argument*/NULL);
		V_3 = L_25;
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_0212;
	}

IL_00e5:
	{
		String_t* L_27 = (__this->___pattern_0);
		int32_t L_28 = (__this->___ptr_1);
		int32_t L_29 = L_28;
		V_7 = L_29;
		__this->___ptr_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_7;
		NullCheck(L_27);
		uint16_t L_31 = String_get_Chars_m477(L_27, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		int32_t L_32 = V_3;
		V_7 = L_32;
		int32_t L_33 = V_7;
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_0121:
	{
		int32_t L_34 = V_7;
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 1)
		{
			goto IL_013b;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 2)
		{
			goto IL_013b;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_013b:
	{
		int32_t L_35 = V_7;
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 0)
		{
			goto IL_0171;
		}
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 1)
		{
			goto IL_0151;
		}
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 2)
		{
			goto IL_0178;
		}
	}

IL_0151:
	{
		int32_t L_36 = V_7;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)68))))
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_37 = V_7;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)87))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_38 = V_7;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)119))))
		{
			goto IL_0196;
		}
	}
	{
		goto IL_01e7;
	}

IL_0171:
	{
		V_3 = 8;
		goto IL_0212;
	}

IL_0178:
	{
		CharacterClass_t1229 * L_39 = V_2;
		bool L_40 = V_1;
		G_B23_0 = L_39;
		if (!L_40)
		{
			G_B24_0 = L_39;
			goto IL_0186;
		}
	}
	{
		G_B25_0 = ((int32_t)9);
		G_B25_1 = G_B23_0;
		goto IL_0187;
	}

IL_0186:
	{
		G_B25_0 = 4;
		G_B25_1 = G_B24_0;
	}

IL_0187:
	{
		int32_t L_41 = V_3;
		NullCheck(G_B25_1);
		CharacterClass_AddCategory_m6012(G_B25_1, G_B25_0, ((((int32_t)L_41) == ((int32_t)((int32_t)68)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_01ec;
	}

IL_0196:
	{
		CharacterClass_t1229 * L_42 = V_2;
		bool L_43 = V_1;
		G_B27_0 = L_42;
		if (!L_43)
		{
			G_B28_0 = L_42;
			goto IL_01a3;
		}
	}
	{
		G_B29_0 = 8;
		G_B29_1 = G_B27_0;
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B29_0 = 3;
		G_B29_1 = G_B28_0;
	}

IL_01a4:
	{
		int32_t L_44 = V_3;
		NullCheck(G_B29_1);
		CharacterClass_AddCategory_m6012(G_B29_1, G_B29_0, ((((int32_t)L_44) == ((int32_t)((int32_t)87)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_01ec;
	}

IL_01b3:
	{
		CharacterClass_t1229 * L_45 = V_2;
		bool L_46 = V_1;
		G_B31_0 = L_45;
		if (!L_46)
		{
			G_B32_0 = L_45;
			goto IL_01c1;
		}
	}
	{
		G_B33_0 = ((int32_t)10);
		G_B33_1 = G_B31_0;
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B33_0 = 5;
		G_B33_1 = G_B32_0;
	}

IL_01c2:
	{
		int32_t L_47 = V_3;
		NullCheck(G_B33_1);
		CharacterClass_AddCategory_m6012(G_B33_1, G_B33_0, ((((int32_t)L_47) == ((int32_t)((int32_t)83)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_01ec;
	}

IL_01d1:
	{
		CharacterClass_t1229 * L_48 = V_2;
		uint16_t L_49 = Parser_ParseUnicodeCategory_m5890(__this, /*hidden argument*/NULL);
		int32_t L_50 = V_3;
		NullCheck(L_48);
		CharacterClass_AddCategory_m6012(L_48, L_49, ((((int32_t)L_50) == ((int32_t)((int32_t)80)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_01ec;
	}

IL_01e7:
	{
		goto IL_0212;
	}

IL_01ec:
	{
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_52 = V_3;
		int32_t L_53 = L_52;
		Object_t * L_54 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_53);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m606(NULL /*static, unused*/, _stringLiteral1158, L_54, /*hidden argument*/NULL);
		ArgumentException_t275 * L_56 = Parser_NewParseException_m5906(__this, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_56);
	}

IL_020a:
	{
		V_4 = (-1);
		goto IL_027f;
	}

IL_0212:
	{
		bool L_57 = V_5;
		if (!L_57)
		{
			goto IL_0274;
		}
	}
	{
		int32_t L_58 = V_3;
		int32_t L_59 = V_4;
		if ((((int32_t)L_58) >= ((int32_t)L_59)))
		{
			goto IL_025e;
		}
	}
	{
		ObjectU5BU5D_t148* L_60 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 5));
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 0);
		ArrayElementTypeCheck (L_60, _stringLiteral471);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral471;
		ObjectU5BU5D_t148* L_61 = L_60;
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		Object_t * L_64 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 1);
		ArrayElementTypeCheck (L_61, L_64);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_61, 1, sizeof(Object_t *))) = (Object_t *)L_64;
		ObjectU5BU5D_t148* L_65 = L_61;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 2);
		ArrayElementTypeCheck (L_65, _stringLiteral304);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_65, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral304;
		ObjectU5BU5D_t148* L_66 = L_65;
		int32_t L_67 = V_3;
		int32_t L_68 = L_67;
		Object_t * L_69 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 3);
		ArrayElementTypeCheck (L_66, L_69);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_66, 3, sizeof(Object_t *))) = (Object_t *)L_69;
		ObjectU5BU5D_t148* L_70 = L_66;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 4);
		ArrayElementTypeCheck (L_70, _stringLiteral1159);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_70, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral1159;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_71 = String_Concat_m422(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		ArgumentException_t275 * L_72 = Parser_NewParseException_m5906(__this, L_71, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_72);
	}

IL_025e:
	{
		CharacterClass_t1229 * L_73 = V_2;
		int32_t L_74 = V_4;
		int32_t L_75 = V_3;
		NullCheck(L_73);
		CharacterClass_AddRange_m6014(L_73, (((uint16_t)L_74)), (((uint16_t)L_75)), /*hidden argument*/NULL);
		V_4 = (-1);
		V_5 = 0;
		goto IL_027f;
	}

IL_0274:
	{
		CharacterClass_t1229 * L_76 = V_2;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		CharacterClass_AddCharacter_m6013(L_76, (((uint16_t)L_77)), /*hidden argument*/NULL);
		int32_t L_78 = V_3;
		V_4 = L_78;
	}

IL_027f:
	{
		int32_t L_79 = (__this->___ptr_1);
		String_t* L_80 = (__this->___pattern_0);
		NullCheck(L_80);
		int32_t L_81 = String_get_Length_m478(L_80, /*hidden argument*/NULL);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_007c;
		}
	}

IL_0295:
	{
		bool L_82 = V_6;
		if (L_82)
		{
			goto IL_02a8;
		}
	}
	{
		ArgumentException_t275 * L_83 = Parser_NewParseException_m5906(__this, _stringLiteral1160, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_83);
	}

IL_02a8:
	{
		bool L_84 = V_5;
		if (!L_84)
		{
			goto IL_02b7;
		}
	}
	{
		CharacterClass_t1229 * L_85 = V_2;
		NullCheck(L_85);
		CharacterClass_AddCharacter_m6013(L_85, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_02b7:
	{
		CharacterClass_t1229 * L_86 = V_2;
		return L_86;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern Il2CppCodeGenString* _stringLiteral1161;
extern Il2CppCodeGenString* _stringLiteral1162;
extern "C" bool Parser_ParseRepetitionBounds_m5889 (Parser_t1210 * __this, int32_t* ___min, int32_t* ___max, int32_t ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1161 = il2cpp_codegen_string_literal_from_index(1161);
		_stringLiteral1162 = il2cpp_codegen_string_literal_from_index(1162);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 0;
		V_2 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_2;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		int32_t L_4 = ___options;
		bool L_5 = Parser_IsIgnorePatternWhitespace_m5904(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Parser_ConsumeWhitespace_m5897(__this, L_5, /*hidden argument*/NULL);
		String_t* L_6 = (__this->___pattern_0);
		int32_t L_7 = (__this->___ptr_1);
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m477(L_6, L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (-1);
		goto IL_004a;
	}

IL_0033:
	{
		int32_t L_9 = Parser_ParseNumber_m5895(__this, ((int32_t)10), 1, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = ___options;
		bool L_11 = Parser_IsIgnorePatternWhitespace_m5904(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Parser_ConsumeWhitespace_m5897(__this, L_11, /*hidden argument*/NULL);
	}

IL_004a:
	{
		String_t* L_12 = (__this->___pattern_0);
		int32_t L_13 = (__this->___ptr_1);
		int32_t L_14 = L_13;
		V_2 = L_14;
		__this->___ptr_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_2;
		NullCheck(L_12);
		uint16_t L_16 = String_get_Chars_m477(L_12, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		uint16_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)44))))
		{
			goto IL_0083;
		}
	}
	{
		uint16_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)125))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_00d0;
	}

IL_007c:
	{
		int32_t L_19 = V_0;
		V_1 = L_19;
		goto IL_00d2;
	}

IL_0083:
	{
		int32_t L_20 = ___options;
		bool L_21 = Parser_IsIgnorePatternWhitespace_m5904(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		Parser_ConsumeWhitespace_m5897(__this, L_21, /*hidden argument*/NULL);
		int32_t L_22 = Parser_ParseNumber_m5895(__this, ((int32_t)10), 1, 0, /*hidden argument*/NULL);
		V_1 = L_22;
		int32_t L_23 = ___options;
		bool L_24 = Parser_IsIgnorePatternWhitespace_m5904(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		Parser_ConsumeWhitespace_m5897(__this, L_24, /*hidden argument*/NULL);
		String_t* L_25 = (__this->___pattern_0);
		int32_t L_26 = (__this->___ptr_1);
		int32_t L_27 = L_26;
		V_2 = L_27;
		__this->___ptr_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = V_2;
		NullCheck(L_25);
		uint16_t L_29 = String_get_Chars_m477(L_25, L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)125))))
		{
			goto IL_00cb;
		}
	}
	{
		return 0;
	}

IL_00cb:
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 0;
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00f4;
		}
	}

IL_00e8:
	{
		ArgumentException_t275 * L_32 = Parser_NewParseException_m5906(__this, _stringLiteral1161, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_32);
	}

IL_00f4:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)L_35)))
		{
			goto IL_010e;
		}
	}
	{
		ArgumentException_t275 * L_36 = Parser_NewParseException_m5906(__this, _stringLiteral1162, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_36);
	}

IL_010e:
	{
		int32_t* L_37 = ___min;
		int32_t L_38 = V_0;
		*((int32_t*)(L_37)) = (int32_t)L_38;
		int32_t L_39 = V_1;
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		int32_t* L_40 = ___max;
		int32_t L_41 = V_1;
		*((int32_t*)(L_40)) = (int32_t)L_41;
		goto IL_0127;
	}

IL_0120:
	{
		int32_t* L_42 = ___max;
		*((int32_t*)(L_42)) = (int32_t)((int32_t)2147483647);
	}

IL_0127:
	{
		return 1;
	}
}
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1163;
extern Il2CppCodeGenString* _stringLiteral1164;
extern Il2CppCodeGenString* _stringLiteral1165;
extern "C" uint16_t Parser_ParseUnicodeCategory_m5890 (Parser_t1210 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral1163 = il2cpp_codegen_string_literal_from_index(1163);
		_stringLiteral1164 = il2cpp_codegen_string_literal_from_index(1164);
		_stringLiteral1165 = il2cpp_codegen_string_literal_from_index(1165);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint16_t V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		int32_t L_2 = L_1;
		V_2 = L_2;
		__this->___ptr_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_2;
		NullCheck(L_0);
		uint16_t L_4 = String_get_Chars_m477(L_0, L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)123))))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_t275 * L_5 = Parser_NewParseException_m5906(__this, _stringLiteral1163, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002f:
	{
		String_t* L_6 = (__this->___pattern_0);
		int32_t* L_7 = &(__this->___ptr_1);
		String_t* L_8 = Parser_ParseName_m5881(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_t275 * L_10 = Parser_NewParseException_m5906(__this, _stringLiteral1163, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_10);
	}

IL_0053:
	{
		String_t* L_11 = V_0;
		uint16_t L_12 = CategoryUtils_CategoryFromName_m5743(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		uint16_t L_13 = V_1;
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral1164, L_14, _stringLiteral1165, /*hidden argument*/NULL);
		ArgumentException_t275 * L_16 = Parser_NewParseException_m5906(__this, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_16);
	}

IL_0077:
	{
		String_t* L_17 = (__this->___pattern_0);
		int32_t L_18 = (__this->___ptr_1);
		int32_t L_19 = L_18;
		V_2 = L_19;
		__this->___ptr_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_2;
		NullCheck(L_17);
		uint16_t L_21 = String_get_Chars_m477(L_17, L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a6;
		}
	}
	{
		ArgumentException_t275 * L_22 = Parser_NewParseException_m5906(__this, _stringLiteral1163, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_22);
	}

IL_00a6:
	{
		uint16_t L_23 = V_1;
		return L_23;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern TypeInfo* CharacterClass_t1229_il2cpp_TypeInfo_var;
extern TypeInfo* PositionAssertion_t1226_il2cpp_TypeInfo_var;
extern TypeInfo* BackslashNumber_t1228_il2cpp_TypeInfo_var;
extern TypeInfo* Reference_t1227_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1166;
extern "C" Expression_t1213 * Parser_ParseSpecial_m5891 (Parser_t1210 * __this, int32_t ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t1229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		PositionAssertion_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(825);
		BackslashNumber_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(834);
		Reference_t1227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(835);
		_stringLiteral1166 = il2cpp_codegen_string_literal_from_index(1166);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Expression_t1213 * V_2 = {0};
	int32_t V_3 = 0;
	Reference_t1227 * V_4 = {0};
	uint16_t V_5 = 0x0;
	String_t* V_6 = {0};
	Reference_t1227 * V_7 = {0};
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B32_0 = 0;
	{
		int32_t L_0 = (__this->___ptr_1);
		V_0 = L_0;
		int32_t L_1 = ___options;
		bool L_2 = Parser_IsECMAScript_m5905(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = (Expression_t1213 *)NULL;
		String_t* L_3 = (__this->___pattern_0);
		int32_t L_4 = (__this->___ptr_1);
		int32_t L_5 = L_4;
		V_8 = L_5;
		__this->___ptr_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_8;
		NullCheck(L_3);
		uint16_t L_7 = String_get_Chars_m477(L_3, L_6, /*hidden argument*/NULL);
		V_9 = L_7;
		uint16_t L_8 = V_9;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 0)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 1)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 2)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 3)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 4)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 5)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 6)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 7)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 8)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 9)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 10)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 11)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 12)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 13)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 14)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 15)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 16)
		{
			goto IL_01e0;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 17)
		{
			goto IL_021c;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 18)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 19)
		{
			goto IL_0181;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 20)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 21)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 22)
		{
			goto IL_0204;
		}
	}

IL_0096:
	{
		uint16_t L_9 = V_9;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_01ce;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_01b4;
		}
	}

IL_00b0:
	{
		uint16_t L_10 = V_9;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 0)
		{
			goto IL_019b;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 1)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 2)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 3)
		{
			goto IL_01ec;
		}
	}

IL_00ca:
	{
		uint16_t L_11 = V_9;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 0)
		{
			goto IL_016f;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 1)
		{
			goto IL_00e4;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 2)
		{
			goto IL_00e4;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 3)
		{
			goto IL_0155;
		}
	}

IL_00e4:
	{
		uint16_t L_12 = V_9;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 0)
		{
			goto IL_013c;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 1)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 2)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 3)
		{
			goto IL_01f8;
		}
	}

IL_00fe:
	{
		uint16_t L_13 = V_9;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 0)
		{
			goto IL_0210;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 1)
		{
			goto IL_0114;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 2)
		{
			goto IL_0122;
		}
	}

IL_0114:
	{
		uint16_t L_14 = V_9;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)107))))
		{
			goto IL_027c;
		}
	}
	{
		goto IL_0328;
	}

IL_0122:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_012f;
		}
	}
	{
		G_B11_0 = ((int32_t)9);
		goto IL_0130;
	}

IL_012f:
	{
		G_B11_0 = 4;
	}

IL_0130:
	{
		CharacterClass_t1229 * L_16 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_16, G_B11_0, 0, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_032f;
	}

IL_013c:
	{
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0148;
		}
	}
	{
		G_B15_0 = 8;
		goto IL_0149;
	}

IL_0148:
	{
		G_B15_0 = 3;
	}

IL_0149:
	{
		CharacterClass_t1229 * L_18 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_18, G_B15_0, 0, /*hidden argument*/NULL);
		V_2 = L_18;
		goto IL_032f;
	}

IL_0155:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0162;
		}
	}
	{
		G_B19_0 = ((int32_t)10);
		goto IL_0163;
	}

IL_0162:
	{
		G_B19_0 = 5;
	}

IL_0163:
	{
		CharacterClass_t1229 * L_20 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_20, G_B19_0, 0, /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_032f;
	}

IL_016f:
	{
		uint16_t L_21 = Parser_ParseUnicodeCategory_m5890(__this, /*hidden argument*/NULL);
		CharacterClass_t1229 * L_22 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_22, L_21, 0, /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_032f;
	}

IL_0181:
	{
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_018e;
		}
	}
	{
		G_B24_0 = ((int32_t)9);
		goto IL_018f;
	}

IL_018e:
	{
		G_B24_0 = 4;
	}

IL_018f:
	{
		CharacterClass_t1229 * L_24 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_24, G_B24_0, 1, /*hidden argument*/NULL);
		V_2 = L_24;
		goto IL_032f;
	}

IL_019b:
	{
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_01a7;
		}
	}
	{
		G_B28_0 = 8;
		goto IL_01a8;
	}

IL_01a7:
	{
		G_B28_0 = 3;
	}

IL_01a8:
	{
		CharacterClass_t1229 * L_26 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_26, G_B28_0, 1, /*hidden argument*/NULL);
		V_2 = L_26;
		goto IL_032f;
	}

IL_01b4:
	{
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_01c1;
		}
	}
	{
		G_B32_0 = ((int32_t)10);
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B32_0 = 5;
	}

IL_01c2:
	{
		CharacterClass_t1229 * L_28 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_28, G_B32_0, 1, /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_032f;
	}

IL_01ce:
	{
		uint16_t L_29 = Parser_ParseUnicodeCategory_m5890(__this, /*hidden argument*/NULL);
		CharacterClass_t1229 * L_30 = (CharacterClass_t1229 *)il2cpp_codegen_object_new (CharacterClass_t1229_il2cpp_TypeInfo_var);
		CharacterClass__ctor_m6010(L_30, L_29, 1, /*hidden argument*/NULL);
		V_2 = L_30;
		goto IL_032f;
	}

IL_01e0:
	{
		PositionAssertion_t1226 * L_31 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_31, 2, /*hidden argument*/NULL);
		V_2 = L_31;
		goto IL_032f;
	}

IL_01ec:
	{
		PositionAssertion_t1226 * L_32 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_32, 5, /*hidden argument*/NULL);
		V_2 = L_32;
		goto IL_032f;
	}

IL_01f8:
	{
		PositionAssertion_t1226 * L_33 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_33, 6, /*hidden argument*/NULL);
		V_2 = L_33;
		goto IL_032f;
	}

IL_0204:
	{
		PositionAssertion_t1226 * L_34 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_34, 4, /*hidden argument*/NULL);
		V_2 = L_34;
		goto IL_032f;
	}

IL_0210:
	{
		PositionAssertion_t1226 * L_35 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_35, 8, /*hidden argument*/NULL);
		V_2 = L_35;
		goto IL_032f;
	}

IL_021c:
	{
		PositionAssertion_t1226 * L_36 = (PositionAssertion_t1226 *)il2cpp_codegen_object_new (PositionAssertion_t1226_il2cpp_TypeInfo_var);
		PositionAssertion__ctor_m5994(L_36, ((int32_t)9), /*hidden argument*/NULL);
		V_2 = L_36;
		goto IL_032f;
	}

IL_0229:
	{
		int32_t L_37 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_37-(int32_t)1));
		int32_t L_38 = Parser_ParseNumber_m5895(__this, ((int32_t)10), 1, 0, /*hidden argument*/NULL);
		V_3 = L_38;
		int32_t L_39 = V_3;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_40 = V_0;
		__this->___ptr_1 = L_40;
		return (Expression_t1213 *)NULL;
	}

IL_0252:
	{
		int32_t L_41 = ___options;
		bool L_42 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		bool L_43 = V_1;
		BackslashNumber_t1228 * L_44 = (BackslashNumber_t1228 *)il2cpp_codegen_object_new (BackslashNumber_t1228_il2cpp_TypeInfo_var);
		BackslashNumber__ctor_m6006(L_44, L_42, L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		Hashtable_t985 * L_45 = (__this->___refs_3);
		Reference_t1227 * L_46 = V_4;
		String_t* L_47 = Int32_ToString_m514((&V_3), /*hidden argument*/NULL);
		NullCheck(L_45);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_45, L_46, L_47);
		Reference_t1227 * L_48 = V_4;
		V_2 = L_48;
		goto IL_032f;
	}

IL_027c:
	{
		String_t* L_49 = (__this->___pattern_0);
		int32_t L_50 = (__this->___ptr_1);
		int32_t L_51 = L_50;
		V_8 = L_51;
		__this->___ptr_1 = ((int32_t)((int32_t)L_51+(int32_t)1));
		int32_t L_52 = V_8;
		NullCheck(L_49);
		uint16_t L_53 = String_get_Chars_m477(L_49, L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		uint16_t L_54 = V_5;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_02ae;
		}
	}
	{
		V_5 = ((int32_t)62);
		goto IL_02c3;
	}

IL_02ae:
	{
		uint16_t L_55 = V_5;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)39))))
		{
			goto IL_02c3;
		}
	}
	{
		ArgumentException_t275 * L_56 = Parser_NewParseException_m5906(__this, _stringLiteral1166, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_56);
	}

IL_02c3:
	{
		String_t* L_57 = Parser_ParseName_m5893(__this, /*hidden argument*/NULL);
		V_6 = L_57;
		String_t* L_58 = V_6;
		if (!L_58)
		{
			goto IL_02ea;
		}
	}
	{
		String_t* L_59 = (__this->___pattern_0);
		int32_t L_60 = (__this->___ptr_1);
		NullCheck(L_59);
		uint16_t L_61 = String_get_Chars_m477(L_59, L_60, /*hidden argument*/NULL);
		uint16_t L_62 = V_5;
		if ((((int32_t)L_61) == ((int32_t)L_62)))
		{
			goto IL_02f6;
		}
	}

IL_02ea:
	{
		ArgumentException_t275 * L_63 = Parser_NewParseException_m5906(__this, _stringLiteral1166, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_63);
	}

IL_02f6:
	{
		int32_t L_64 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_64+(int32_t)1));
		int32_t L_65 = ___options;
		bool L_66 = Parser_IsIgnoreCase_m5900(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		Reference_t1227 * L_67 = (Reference_t1227 *)il2cpp_codegen_object_new (Reference_t1227_il2cpp_TypeInfo_var);
		Reference__ctor_m5999(L_67, L_66, /*hidden argument*/NULL);
		V_7 = L_67;
		Hashtable_t985 * L_68 = (__this->___refs_3);
		Reference_t1227 * L_69 = V_7;
		String_t* L_70 = V_6;
		NullCheck(L_68);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_68, L_69, L_70);
		Reference_t1227 * L_71 = V_7;
		V_2 = L_71;
		goto IL_032f;
	}

IL_0328:
	{
		V_2 = (Expression_t1213 *)NULL;
		goto IL_032f;
	}

IL_032f:
	{
		Expression_t1213 * L_72 = V_2;
		if (L_72)
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_73 = V_0;
		__this->___ptr_1 = L_73;
	}

IL_033c:
	{
		Expression_t1213 * L_74 = V_2;
		return L_74;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1167;
extern Il2CppCodeGenString* _stringLiteral1168;
extern Il2CppCodeGenString* _stringLiteral1169;
extern "C" int32_t Parser_ParseEscape_m5892 (Parser_t1210 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral1167 = il2cpp_codegen_string_literal_from_index(1167);
		_stringLiteral1168 = il2cpp_codegen_string_literal_from_index(1168);
		_stringLiteral1169 = il2cpp_codegen_string_literal_from_index(1169);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		int32_t L_0 = (__this->___ptr_1);
		V_0 = L_0;
		int32_t L_1 = V_0;
		String_t* L_2 = (__this->___pattern_0);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m478(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_4 = (__this->___pattern_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m486(NULL /*static, unused*/, _stringLiteral1167, L_4, /*hidden argument*/NULL);
		String_t* L_6 = (__this->___pattern_0);
		ArgumentException_t275 * L_7 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_7, L_5, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0034:
	{
		String_t* L_8 = (__this->___pattern_0);
		int32_t L_9 = (__this->___ptr_1);
		int32_t L_10 = L_9;
		V_4 = L_10;
		__this->___ptr_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_4;
		NullCheck(L_8);
		uint16_t L_12 = String_get_Chars_m477(L_8, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		uint16_t L_13 = V_5;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_00d1;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_00c5;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0140;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 8)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 9)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 10)
		{
			goto IL_0118;
		}
	}

IL_008a:
	{
		uint16_t L_14 = V_5;
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 0)
		{
			goto IL_00c3;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 1)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 2)
		{
			goto IL_0168;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 3)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 4)
		{
			goto IL_00d4;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 5)
		{
			goto IL_00ce;
		}
	}

IL_00ac:
	{
		uint16_t L_15 = V_5;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)48))))
		{
			goto IL_00da;
		}
	}
	{
		uint16_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_01a8;
	}

IL_00c3:
	{
		return 7;
	}

IL_00c5:
	{
		return ((int32_t)9);
	}

IL_00c8:
	{
		return ((int32_t)13);
	}

IL_00cb:
	{
		return ((int32_t)11);
	}

IL_00ce:
	{
		return ((int32_t)12);
	}

IL_00d1:
	{
		return ((int32_t)10);
	}

IL_00d4:
	{
		return ((int32_t)27);
	}

IL_00d7:
	{
		return ((int32_t)92);
	}

IL_00da:
	{
		int32_t L_17 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_17-(int32_t)1));
		int32_t L_18 = (__this->___ptr_1);
		V_2 = L_18;
		String_t* L_19 = (__this->___pattern_0);
		int32_t* L_20 = &(__this->___ptr_1);
		int32_t L_21 = Parser_ParseOctal_m5878(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_23 = V_2;
		int32_t L_24 = (__this->___ptr_1);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0116;
		}
	}
	{
		return 0;
	}

IL_0116:
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0118:
	{
		String_t* L_26 = (__this->___pattern_0);
		int32_t* L_27 = &(__this->___ptr_1);
		int32_t L_28 = Parser_ParseHex_m5879(NULL /*static, unused*/, L_26, L_27, 2, /*hidden argument*/NULL);
		V_1 = L_28;
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		ArgumentException_t275 * L_30 = Parser_NewParseException_m5906(__this, _stringLiteral1168, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_30);
	}

IL_013e:
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0140:
	{
		String_t* L_32 = (__this->___pattern_0);
		int32_t* L_33 = &(__this->___ptr_1);
		int32_t L_34 = Parser_ParseHex_m5879(NULL /*static, unused*/, L_32, L_33, 4, /*hidden argument*/NULL);
		V_1 = L_34;
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_0166;
		}
	}
	{
		ArgumentException_t275 * L_36 = Parser_NewParseException_m5906(__this, _stringLiteral1168, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_36);
	}

IL_0166:
	{
		int32_t L_37 = V_1;
		return L_37;
	}

IL_0168:
	{
		String_t* L_38 = (__this->___pattern_0);
		int32_t L_39 = (__this->___ptr_1);
		int32_t L_40 = L_39;
		V_4 = L_40;
		__this->___ptr_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
		int32_t L_41 = V_4;
		NullCheck(L_38);
		uint16_t L_42 = String_get_Chars_m477(L_38, L_41, /*hidden argument*/NULL);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)64))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)95))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_45 = V_1;
		return ((int32_t)((int32_t)L_45-(int32_t)((int32_t)64)));
	}

IL_019c:
	{
		ArgumentException_t275 * L_46 = Parser_NewParseException_m5906(__this, _stringLiteral1169, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_46);
	}

IL_01a8:
	{
		int32_t L_47 = V_0;
		__this->___ptr_1 = L_47;
		return (-1);
	}
}
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern "C" String_t* Parser_ParseName_m5893 (Parser_t1210 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t* L_1 = &(__this->___ptr_1);
		String_t* L_2 = Parser_ParseName_m5881(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" bool Parser_IsNameChar_m5894 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		int32_t L_1 = Char_GetUnicodeCategory_m6169(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		uint16_t L_4 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_5 = Char_IsLetterOrDigit_m6167(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseNumber_m5895 (Parser_t1210 * __this, int32_t ___b, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t* L_1 = &(__this->___ptr_1);
		int32_t L_2 = ___b;
		int32_t L_3 = ___min;
		int32_t L_4 = ___max;
		int32_t L_5 = Parser_ParseNumber_m5880(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseDigit_m5896 (Object_t * __this /* static, unused */, uint16_t ___c, int32_t ___b, int32_t ___n, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___b;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 0)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 1)
		{
			goto IL_0016;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 2)
		{
			goto IL_003a;
		}
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0098;
	}

IL_0023:
	{
		uint16_t L_3 = ___c;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)48))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t L_4 = ___c;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)55))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t L_5 = ___c;
		return ((int32_t)((int32_t)L_5-(int32_t)((int32_t)48)));
	}

IL_0038:
	{
		return (-1);
	}

IL_003a:
	{
		uint16_t L_6 = ___c;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_004f;
		}
	}
	{
		uint16_t L_7 = ___c;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_004f;
		}
	}
	{
		uint16_t L_8 = ___c;
		return ((int32_t)((int32_t)L_8-(int32_t)((int32_t)48)));
	}

IL_004f:
	{
		return (-1);
	}

IL_0051:
	{
		uint16_t L_9 = ___c;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)48))))
		{
			goto IL_0066;
		}
	}
	{
		uint16_t L_10 = ___c;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)57))))
		{
			goto IL_0066;
		}
	}
	{
		uint16_t L_11 = ___c;
		return ((int32_t)((int32_t)L_11-(int32_t)((int32_t)48)));
	}

IL_0066:
	{
		uint16_t L_12 = ___c;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_007e;
		}
	}
	{
		uint16_t L_13 = ___c;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_007e;
		}
	}
	{
		uint16_t L_14 = ___c;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_14))-(int32_t)((int32_t)97)));
	}

IL_007e:
	{
		uint16_t L_15 = ___c;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)65))))
		{
			goto IL_0096;
		}
	}
	{
		uint16_t L_16 = ___c;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)70))))
		{
			goto IL_0096;
		}
	}
	{
		uint16_t L_17 = ___c;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_17))-(int32_t)((int32_t)65)));
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		return (-1);
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" void Parser_ConsumeWhitespace_m5897 (Parser_t1210 * __this, bool ___ignore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_0188;
	}

IL_0005:
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m477(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_3 = (__this->___ptr_1);
		String_t* L_4 = (__this->___pattern_0);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m478(L_4, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_3+(int32_t)3))) < ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		String_t* L_6 = (__this->___pattern_0);
		int32_t L_7 = (__this->___ptr_1);
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m477(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_9 = (__this->___pattern_0);
		int32_t L_10 = (__this->___ptr_1);
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m477(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)35))))
		{
			goto IL_006b;
		}
	}

IL_006a:
	{
		return;
	}

IL_006b:
	{
		int32_t L_12 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_12+(int32_t)3));
		goto IL_007e;
	}

IL_007e:
	{
		int32_t L_13 = (__this->___ptr_1);
		String_t* L_14 = (__this->___pattern_0);
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m478(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_16 = (__this->___pattern_0);
		int32_t L_17 = (__this->___ptr_1);
		int32_t L_18 = L_17;
		V_0 = L_18;
		__this->___ptr_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_0;
		NullCheck(L_16);
		uint16_t L_20 = String_get_Chars_m477(L_16, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_007e;
		}
	}

IL_00b7:
	{
		goto IL_0188;
	}

IL_00bc:
	{
		bool L_21 = ___ignore;
		if (!L_21)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_22 = (__this->___pattern_0);
		int32_t L_23 = (__this->___ptr_1);
		NullCheck(L_22);
		uint16_t L_24 = String_get_Chars_m477(L_22, L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_011d;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		int32_t L_25 = (__this->___ptr_1);
		String_t* L_26 = (__this->___pattern_0);
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m478(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_25) >= ((int32_t)L_27)))
		{
			goto IL_0118;
		}
	}
	{
		String_t* L_28 = (__this->___pattern_0);
		int32_t L_29 = (__this->___ptr_1);
		int32_t L_30 = L_29;
		V_0 = L_30;
		__this->___ptr_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
		int32_t L_31 = V_0;
		NullCheck(L_28);
		uint16_t L_32 = String_get_Chars_m477(L_28, L_31, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00df;
		}
	}

IL_0118:
	{
		goto IL_0188;
	}

IL_011d:
	{
		bool L_33 = ___ignore;
		if (!L_33)
		{
			goto IL_0187;
		}
	}
	{
		String_t* L_34 = (__this->___pattern_0);
		int32_t L_35 = (__this->___ptr_1);
		NullCheck(L_34);
		uint16_t L_36 = String_get_Chars_m477(L_34, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_37 = Char_IsWhiteSpace_m6168(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0151;
	}

IL_0143:
	{
		int32_t L_38 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0151:
	{
		int32_t L_39 = (__this->___ptr_1);
		String_t* L_40 = (__this->___pattern_0);
		NullCheck(L_40);
		int32_t L_41 = String_get_Length_m478(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_39) >= ((int32_t)L_41)))
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_42 = (__this->___pattern_0);
		int32_t L_43 = (__this->___ptr_1);
		NullCheck(L_42);
		uint16_t L_44 = String_get_Chars_m477(L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_45 = Char_IsWhiteSpace_m6168(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0143;
		}
	}

IL_0182:
	{
		goto IL_0188;
	}

IL_0187:
	{
		return;
	}

IL_0188:
	{
		int32_t L_46 = (__this->___ptr_1);
		String_t* L_47 = (__this->___pattern_0);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m478(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* CapturingGroup_t1217_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t812_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t1213_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CaptureAssertion_t1222_il2cpp_TypeInfo_var;
extern TypeInfo* BackslashNumber_t1228_il2cpp_TypeInfo_var;
extern TypeInfo* Reference_t1227_il2cpp_TypeInfo_var;
extern TypeInfo* BalancingGroup_t1218_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1170;
extern Il2CppCodeGenString* _stringLiteral1171;
extern Il2CppCodeGenString* _stringLiteral1172;
extern "C" void Parser_ResolveReferences_m5898 (Parser_t1210 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		CapturingGroup_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(823);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		IEnumerable_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		Expression_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(836);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CaptureAssertion_t1222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(833);
		BackslashNumber_t1228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(834);
		Reference_t1227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(835);
		BalancingGroup_t1218_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(832);
		_stringLiteral1170 = il2cpp_codegen_string_literal_from_index(1170);
		_stringLiteral1171 = il2cpp_codegen_string_literal_from_index(1171);
		_stringLiteral1172 = il2cpp_codegen_string_literal_from_index(1172);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_t985 * V_1 = {0};
	ArrayList_t920 * V_2 = {0};
	CapturingGroup_t1217 * V_3 = {0};
	Object_t * V_4 = {0};
	CapturingGroup_t1217 * V_5 = {0};
	Object_t * V_6 = {0};
	CapturingGroup_t1217 * V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = {0};
	Expression_t1213 * V_11 = {0};
	Object_t * V_12 = {0};
	String_t* V_13 = {0};
	BackslashNumber_t1228 * V_14 = {0};
	CapturingGroup_t1217 * V_15 = {0};
	Object_t * V_16 = {0};
	int32_t V_17 = 0;
	Object_t * V_18 = {0};
	Object_t * V_19 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B50_0 = {0};
	Parser_t1210 * G_B50_1 = {0};
	String_t* G_B49_0 = {0};
	Parser_t1210 * G_B49_1 = {0};
	String_t* G_B51_0 = {0};
	String_t* G_B51_1 = {0};
	Parser_t1210 * G_B51_2 = {0};
	{
		V_0 = 1;
		Hashtable_t985 * L_0 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = (ArrayList_t920 *)NULL;
		ArrayList_t920 * L_1 = (__this->___caps_2);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_4 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_001c:
		{
			Object_t * L_3 = V_4;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_3);
			V_3 = ((CapturingGroup_t1217 *)CastclassClass(L_4, CapturingGroup_t1217_il2cpp_TypeInfo_var));
			CapturingGroup_t1217 * L_5 = V_3;
			NullCheck(L_5);
			String_t* L_6 = CapturingGroup_get_Name_m5946(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0039;
			}
		}

IL_0034:
		{
			goto IL_0060;
		}

IL_0039:
		{
			Hashtable_t985 * L_7 = V_1;
			String_t* L_8 = Int32_ToString_m514((&V_0), /*hidden argument*/NULL);
			CapturingGroup_t1217 * L_9 = V_3;
			NullCheck(L_7);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_7, L_8, L_9);
			CapturingGroup_t1217 * L_10 = V_3;
			int32_t L_11 = V_0;
			int32_t L_12 = L_11;
			V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
			NullCheck(L_10);
			CapturingGroup_set_Index_m5945(L_10, L_12, /*hidden argument*/NULL);
			int32_t L_13 = (__this->___num_groups_4);
			__this->___num_groups_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
		}

IL_0060:
		{
			Object_t * L_14 = V_4;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001c;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_4;
			V_16 = ((Object_t *)IsInst(L_16, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_16;
			if (L_17)
			{
				goto IL_007f;
			}
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(113)
		}

IL_007f:
		{
			Object_t * L_18 = V_16;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(113)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0087:
	{
		ArrayList_t920 * L_19 = (__this->___caps_2);
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_19);
		V_6 = L_20;
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020a;
		}

IL_0099:
		{
			Object_t * L_21 = V_6;
			NullCheck(L_21);
			Object_t * L_22 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_21);
			V_5 = ((CapturingGroup_t1217 *)CastclassClass(L_22, CapturingGroup_t1217_il2cpp_TypeInfo_var));
			CapturingGroup_t1217 * L_23 = V_5;
			NullCheck(L_23);
			String_t* L_24 = CapturingGroup_get_Name_m5946(L_23, /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_00b8;
			}
		}

IL_00b3:
		{
			goto IL_020a;
		}

IL_00b8:
		{
			Hashtable_t985 * L_25 = V_1;
			CapturingGroup_t1217 * L_26 = V_5;
			NullCheck(L_26);
			String_t* L_27 = CapturingGroup_get_Name_m5946(L_26, /*hidden argument*/NULL);
			NullCheck(L_25);
			bool L_28 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_25, L_27);
			if (!L_28)
			{
				goto IL_011d;
			}
		}

IL_00ca:
		{
			Hashtable_t985 * L_29 = V_1;
			CapturingGroup_t1217 * L_30 = V_5;
			NullCheck(L_30);
			String_t* L_31 = CapturingGroup_get_Name_m5946(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			Object_t * L_32 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, L_31);
			V_7 = ((CapturingGroup_t1217 *)CastclassClass(L_32, CapturingGroup_t1217_il2cpp_TypeInfo_var));
			CapturingGroup_t1217 * L_33 = V_5;
			CapturingGroup_t1217 * L_34 = V_7;
			NullCheck(L_34);
			int32_t L_35 = CapturingGroup_get_Index_m5944(L_34, /*hidden argument*/NULL);
			NullCheck(L_33);
			CapturingGroup_set_Index_m5945(L_33, L_35, /*hidden argument*/NULL);
			CapturingGroup_t1217 * L_36 = V_5;
			NullCheck(L_36);
			int32_t L_37 = CapturingGroup_get_Index_m5944(L_36, /*hidden argument*/NULL);
			int32_t L_38 = V_0;
			if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
			{
				goto IL_0102;
			}
		}

IL_00f9:
		{
			int32_t L_39 = V_0;
			V_0 = ((int32_t)((int32_t)L_39+(int32_t)1));
			goto IL_0118;
		}

IL_0102:
		{
			CapturingGroup_t1217 * L_40 = V_5;
			NullCheck(L_40);
			int32_t L_41 = CapturingGroup_get_Index_m5944(L_40, /*hidden argument*/NULL);
			int32_t L_42 = V_0;
			if ((((int32_t)L_41) <= ((int32_t)L_42)))
			{
				goto IL_0118;
			}
		}

IL_010f:
		{
			ArrayList_t920 * L_43 = V_2;
			CapturingGroup_t1217 * L_44 = V_5;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_0118:
		{
			goto IL_020a;
		}

IL_011d:
		{
			CapturingGroup_t1217 * L_45 = V_5;
			NullCheck(L_45);
			String_t* L_46 = CapturingGroup_get_Name_m5946(L_45, /*hidden argument*/NULL);
			NullCheck(L_46);
			uint16_t L_47 = String_get_Chars_m477(L_46, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
			bool L_48 = Char_IsDigit_m940(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
			if (!L_48)
			{
				goto IL_01ac;
			}
		}

IL_0134:
		{
			V_8 = 0;
			CapturingGroup_t1217 * L_49 = V_5;
			NullCheck(L_49);
			String_t* L_50 = CapturingGroup_get_Name_m5946(L_49, /*hidden argument*/NULL);
			int32_t L_51 = Parser_ParseDecimal_m5877(NULL /*static, unused*/, L_50, (&V_8), /*hidden argument*/NULL);
			V_9 = L_51;
			int32_t L_52 = V_8;
			CapturingGroup_t1217 * L_53 = V_5;
			NullCheck(L_53);
			String_t* L_54 = CapturingGroup_get_Name_m5946(L_53, /*hidden argument*/NULL);
			NullCheck(L_54);
			int32_t L_55 = String_get_Length_m478(L_54, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_52) == ((uint32_t)L_55))))
			{
				goto IL_01ac;
			}
		}

IL_015a:
		{
			CapturingGroup_t1217 * L_56 = V_5;
			int32_t L_57 = V_9;
			NullCheck(L_56);
			CapturingGroup_set_Index_m5945(L_56, L_57, /*hidden argument*/NULL);
			Hashtable_t985 * L_58 = V_1;
			CapturingGroup_t1217 * L_59 = V_5;
			NullCheck(L_59);
			String_t* L_60 = CapturingGroup_get_Name_m5946(L_59, /*hidden argument*/NULL);
			CapturingGroup_t1217 * L_61 = V_5;
			NullCheck(L_58);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_58, L_60, L_61);
			int32_t L_62 = (__this->___num_groups_4);
			__this->___num_groups_4 = ((int32_t)((int32_t)L_62+(int32_t)1));
			int32_t L_63 = V_9;
			int32_t L_64 = V_0;
			if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
			{
				goto IL_0191;
			}
		}

IL_0188:
		{
			int32_t L_65 = V_0;
			V_0 = ((int32_t)((int32_t)L_65+(int32_t)1));
			goto IL_01a7;
		}

IL_0191:
		{
			ArrayList_t920 * L_66 = V_2;
			if (L_66)
			{
				goto IL_019e;
			}
		}

IL_0197:
		{
			ArrayList_t920 * L_67 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
			ArrayList__ctor_m6158(L_67, 4, /*hidden argument*/NULL);
			V_2 = L_67;
		}

IL_019e:
		{
			ArrayList_t920 * L_68 = V_2;
			CapturingGroup_t1217 * L_69 = V_5;
			NullCheck(L_68);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_68, L_69);
		}

IL_01a7:
		{
			goto IL_020a;
		}

IL_01ac:
		{
			String_t* L_70 = Int32_ToString_m514((&V_0), /*hidden argument*/NULL);
			V_10 = L_70;
			goto IL_01ca;
		}

IL_01ba:
		{
			int32_t L_71 = V_0;
			int32_t L_72 = ((int32_t)((int32_t)L_71+(int32_t)1));
			V_0 = L_72;
			V_17 = L_72;
			String_t* L_73 = Int32_ToString_m514((&V_17), /*hidden argument*/NULL);
			V_10 = L_73;
		}

IL_01ca:
		{
			Hashtable_t985 * L_74 = V_1;
			String_t* L_75 = V_10;
			NullCheck(L_74);
			bool L_76 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_74, L_75);
			if (L_76)
			{
				goto IL_01ba;
			}
		}

IL_01d7:
		{
			Hashtable_t985 * L_77 = V_1;
			String_t* L_78 = V_10;
			CapturingGroup_t1217 * L_79 = V_5;
			NullCheck(L_77);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_77, L_78, L_79);
			Hashtable_t985 * L_80 = V_1;
			CapturingGroup_t1217 * L_81 = V_5;
			NullCheck(L_81);
			String_t* L_82 = CapturingGroup_get_Name_m5946(L_81, /*hidden argument*/NULL);
			CapturingGroup_t1217 * L_83 = V_5;
			NullCheck(L_80);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_80, L_82, L_83);
			CapturingGroup_t1217 * L_84 = V_5;
			int32_t L_85 = V_0;
			int32_t L_86 = L_85;
			V_0 = ((int32_t)((int32_t)L_86+(int32_t)1));
			NullCheck(L_84);
			CapturingGroup_set_Index_m5945(L_84, L_86, /*hidden argument*/NULL);
			int32_t L_87 = (__this->___num_groups_4);
			__this->___num_groups_4 = ((int32_t)((int32_t)L_87+(int32_t)1));
		}

IL_020a:
		{
			Object_t * L_88 = V_6;
			NullCheck(L_88);
			bool L_89 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_88);
			if (L_89)
			{
				goto IL_0099;
			}
		}

IL_0216:
		{
			IL2CPP_LEAVE(0x231, FINALLY_021b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_021b;
	}

FINALLY_021b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_90 = V_6;
			V_18 = ((Object_t *)IsInst(L_90, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_91 = V_18;
			if (L_91)
			{
				goto IL_0229;
			}
		}

IL_0228:
		{
			IL2CPP_END_FINALLY(539)
		}

IL_0229:
		{
			Object_t * L_92 = V_18;
			NullCheck(L_92);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_92);
			IL2CPP_END_FINALLY(539)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(539)
	{
		IL2CPP_JUMP_TBL(0x231, IL_0231)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0231:
	{
		int32_t L_93 = V_0;
		__this->___gap_5 = L_93;
		ArrayList_t920 * L_94 = V_2;
		if (!L_94)
		{
			goto IL_0245;
		}
	}
	{
		ArrayList_t920 * L_95 = V_2;
		Parser_HandleExplicitNumericGroups_m5899(__this, L_95, /*hidden argument*/NULL);
	}

IL_0245:
	{
		Hashtable_t985 * L_96 = (__this->___refs_3);
		NullCheck(L_96);
		Object_t * L_97 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(20 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_96);
		NullCheck(L_97);
		Object_t * L_98 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t812_il2cpp_TypeInfo_var, L_97);
		V_12 = L_98;
	}

IL_0257:
	try
	{ // begin try (depth: 1)
		{
			goto IL_036d;
		}

IL_025c:
		{
			Object_t * L_99 = V_12;
			NullCheck(L_99);
			Object_t * L_100 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_99);
			V_11 = ((Expression_t1213 *)CastclassClass(L_100, Expression_t1213_il2cpp_TypeInfo_var));
			Hashtable_t985 * L_101 = (__this->___refs_3);
			Expression_t1213 * L_102 = V_11;
			NullCheck(L_101);
			Object_t * L_103 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_101, L_102);
			V_13 = ((String_t*)CastclassSealed(L_103, String_t_il2cpp_TypeInfo_var));
			Hashtable_t985 * L_104 = V_1;
			String_t* L_105 = V_13;
			NullCheck(L_104);
			bool L_106 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_104, L_105);
			if (L_106)
			{
				goto IL_0306;
			}
		}

IL_028b:
		{
			Expression_t1213 * L_107 = V_11;
			if (!((CaptureAssertion_t1222 *)IsInstClass(L_107, CaptureAssertion_t1222_il2cpp_TypeInfo_var)))
			{
				goto IL_02ae;
			}
		}

IL_0297:
		{
			String_t* L_108 = V_13;
			NullCheck(L_108);
			uint16_t L_109 = String_get_Chars_m477(L_108, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
			bool L_110 = Char_IsDigit_m940(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
			if (L_110)
			{
				goto IL_02ae;
			}
		}

IL_02a9:
		{
			goto IL_036d;
		}

IL_02ae:
		{
			Expression_t1213 * L_111 = V_11;
			V_14 = ((BackslashNumber_t1228 *)IsInstClass(L_111, BackslashNumber_t1228_il2cpp_TypeInfo_var));
			BackslashNumber_t1228 * L_112 = V_14;
			if (!L_112)
			{
				goto IL_02d2;
			}
		}

IL_02be:
		{
			BackslashNumber_t1228 * L_113 = V_14;
			String_t* L_114 = V_13;
			Hashtable_t985 * L_115 = V_1;
			NullCheck(L_113);
			bool L_116 = BackslashNumber_ResolveReference_m6007(L_113, L_114, L_115, /*hidden argument*/NULL);
			if (!L_116)
			{
				goto IL_02d2;
			}
		}

IL_02cd:
		{
			goto IL_036d;
		}

IL_02d2:
		{
			String_t* L_117 = V_13;
			NullCheck(L_117);
			uint16_t L_118 = String_get_Chars_m477(L_117, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
			bool L_119 = Char_IsDigit_m940(NULL /*static, unused*/, L_118, /*hidden argument*/NULL);
			G_B49_0 = _stringLiteral1170;
			G_B49_1 = __this;
			if (!L_119)
			{
				G_B50_0 = _stringLiteral1170;
				G_B50_1 = __this;
				goto IL_02f4;
			}
		}

IL_02ea:
		{
			G_B51_0 = _stringLiteral1171;
			G_B51_1 = G_B49_0;
			G_B51_2 = G_B49_1;
			goto IL_02f9;
		}

IL_02f4:
		{
			G_B51_0 = _stringLiteral1172;
			G_B51_1 = G_B50_0;
			G_B51_2 = G_B50_1;
		}

IL_02f9:
		{
			String_t* L_120 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_121 = String_Concat_m440(NULL /*static, unused*/, G_B51_1, G_B51_0, L_120, /*hidden argument*/NULL);
			NullCheck(G_B51_2);
			ArgumentException_t275 * L_122 = Parser_NewParseException_m5906(G_B51_2, L_121, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_122);
		}

IL_0306:
		{
			Hashtable_t985 * L_123 = V_1;
			String_t* L_124 = V_13;
			NullCheck(L_123);
			Object_t * L_125 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_123, L_124);
			V_15 = ((CapturingGroup_t1217 *)CastclassClass(L_125, CapturingGroup_t1217_il2cpp_TypeInfo_var));
			Expression_t1213 * L_126 = V_11;
			if (!((Reference_t1227 *)IsInstClass(L_126, Reference_t1227_il2cpp_TypeInfo_var)))
			{
				goto IL_0334;
			}
		}

IL_0321:
		{
			Expression_t1213 * L_127 = V_11;
			CapturingGroup_t1217 * L_128 = V_15;
			NullCheck(((Reference_t1227 *)CastclassClass(L_127, Reference_t1227_il2cpp_TypeInfo_var)));
			Reference_set_CapturingGroup_m6001(((Reference_t1227 *)CastclassClass(L_127, Reference_t1227_il2cpp_TypeInfo_var)), L_128, /*hidden argument*/NULL);
			goto IL_036d;
		}

IL_0334:
		{
			Expression_t1213 * L_129 = V_11;
			if (!((CaptureAssertion_t1222 *)IsInstClass(L_129, CaptureAssertion_t1222_il2cpp_TypeInfo_var)))
			{
				goto IL_0353;
			}
		}

IL_0340:
		{
			Expression_t1213 * L_130 = V_11;
			CapturingGroup_t1217 * L_131 = V_15;
			NullCheck(((CaptureAssertion_t1222 *)CastclassClass(L_130, CaptureAssertion_t1222_il2cpp_TypeInfo_var)));
			CaptureAssertion_set_CapturingGroup_m5972(((CaptureAssertion_t1222 *)CastclassClass(L_130, CaptureAssertion_t1222_il2cpp_TypeInfo_var)), L_131, /*hidden argument*/NULL);
			goto IL_036d;
		}

IL_0353:
		{
			Expression_t1213 * L_132 = V_11;
			if (!((BalancingGroup_t1218 *)IsInstClass(L_132, BalancingGroup_t1218_il2cpp_TypeInfo_var)))
			{
				goto IL_036d;
			}
		}

IL_035f:
		{
			Expression_t1213 * L_133 = V_11;
			CapturingGroup_t1217 * L_134 = V_15;
			NullCheck(((BalancingGroup_t1218 *)CastclassClass(L_133, BalancingGroup_t1218_il2cpp_TypeInfo_var)));
			BalancingGroup_set_Balance_m5953(((BalancingGroup_t1218 *)CastclassClass(L_133, BalancingGroup_t1218_il2cpp_TypeInfo_var)), L_134, /*hidden argument*/NULL);
		}

IL_036d:
		{
			Object_t * L_135 = V_12;
			NullCheck(L_135);
			bool L_136 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_135);
			if (L_136)
			{
				goto IL_025c;
			}
		}

IL_0379:
		{
			IL2CPP_LEAVE(0x394, FINALLY_037e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_037e;
	}

FINALLY_037e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_137 = V_12;
			V_19 = ((Object_t *)IsInst(L_137, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_138 = V_19;
			if (L_138)
			{
				goto IL_038c;
			}
		}

IL_038b:
		{
			IL2CPP_END_FINALLY(894)
		}

IL_038c:
		{
			Object_t * L_139 = V_19;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_139);
			IL2CPP_END_FINALLY(894)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(894)
	{
		IL2CPP_JUMP_TBL(0x394, IL_0394)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0394:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
extern TypeInfo* CapturingGroup_t1217_il2cpp_TypeInfo_var;
extern "C" void Parser_HandleExplicitNumericGroups_m5899 (Parser_t1210 * __this, ArrayList_t920 * ___explicit_numeric_groups, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapturingGroup_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(823);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CapturingGroup_t1217 * V_3 = {0};
	int32_t V_4 = 0;
	CapturingGroup_t1217 * V_5 = {0};
	{
		int32_t L_0 = (__this->___gap_5);
		V_0 = L_0;
		V_1 = 0;
		ArrayList_t920 * L_1 = ___explicit_numeric_groups;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_2 = L_2;
		ArrayList_t920 * L_3 = ___explicit_numeric_groups;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(44 /* System.Void System.Collections.ArrayList::Sort() */, L_3);
		goto IL_004d;
	}

IL_001b:
	{
		ArrayList_t920 * L_4 = ___explicit_numeric_groups;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_3 = ((CapturingGroup_t1217 *)CastclassClass(L_6, CapturingGroup_t1217_il2cpp_TypeInfo_var));
		CapturingGroup_t1217 * L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = CapturingGroup_get_Index_m5944(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0054;
	}

IL_0039:
	{
		CapturingGroup_t1217 * L_10 = V_3;
		NullCheck(L_10);
		int32_t L_11 = CapturingGroup_get_Index_m5944(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_001b;
		}
	}

IL_0054:
	{
		int32_t L_17 = V_0;
		__this->___gap_5 = L_17;
		int32_t L_18 = V_0;
		V_4 = L_18;
		goto IL_00a7;
	}

IL_0063:
	{
		ArrayList_t920 * L_19 = ___explicit_numeric_groups;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_19, L_20);
		V_5 = ((CapturingGroup_t1217 *)CastclassClass(L_21, CapturingGroup_t1217_il2cpp_TypeInfo_var));
		CapturingGroup_t1217 * L_22 = V_5;
		NullCheck(L_22);
		int32_t L_23 = CapturingGroup_get_Index_m5944(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_008e;
		}
	}
	{
		CapturingGroup_t1217 * L_25 = V_5;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		CapturingGroup_set_Index_m5945(L_25, ((int32_t)((int32_t)L_26-(int32_t)1)), /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_008e:
	{
		CapturingGroup_t1217 * L_27 = V_5;
		NullCheck(L_27);
		int32_t L_28 = CapturingGroup_get_Index_m5944(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		CapturingGroup_t1217 * L_29 = V_5;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)((int32_t)L_31+(int32_t)1));
		NullCheck(L_29);
		CapturingGroup_set_Index_m5945(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsIgnoreCase_m5900 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsMultiline_m5901 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsExplicitCapture_m5902 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsSingleline_m5903 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsIgnorePatternWhitespace_m5904 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsECMAScript_m5905 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1173;
extern Il2CppCodeGenString* _stringLiteral1174;
extern "C" ArgumentException_t275 * Parser_NewParseException_m5906 (Parser_t1210 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral1173 = il2cpp_codegen_string_literal_from_index(1173);
		_stringLiteral1174 = il2cpp_codegen_string_literal_from_index(1174);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___pattern_0);
		String_t* L_1 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m460(NULL /*static, unused*/, _stringLiteral1173, L_0, _stringLiteral1174, L_1, /*hidden argument*/NULL);
		___msg = L_2;
		String_t* L_3 = ___msg;
		String_t* L_4 = (__this->___pattern_0);
		ArgumentException_t275 * L_5 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4218(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
extern TypeInfo* QuickSearch_t1203_il2cpp_TypeInfo_var;
extern "C" void QuickSearch__ctor_m5907 (QuickSearch_t1203 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QuickSearch_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(814);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str;
		__this->___str_0 = L_0;
		String_t* L_1 = ___str;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m478(L_1, /*hidden argument*/NULL);
		__this->___len_1 = L_2;
		bool L_3 = ___ignore;
		__this->___ignore_2 = L_3;
		bool L_4 = ___reverse;
		__this->___reverse_3 = L_4;
		bool L_5 = ___ignore;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_6 = ___str;
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m1063(L_6, /*hidden argument*/NULL);
		___str = L_7;
	}

IL_0035:
	{
		int32_t L_8 = (__this->___len_1);
		IL2CPP_RUNTIME_CLASS_INIT(QuickSearch_t1203_il2cpp_TypeInfo_var);
		int32_t L_9 = ((QuickSearch_t1203_StaticFields*)QuickSearch_t1203_il2cpp_TypeInfo_var->static_fields)->___THRESHOLD_6;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_004b;
		}
	}
	{
		QuickSearch_SetupShiftTable_m5911(__this, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
extern TypeInfo* QuickSearch_t1203_il2cpp_TypeInfo_var;
extern "C" void QuickSearch__cctor_m5908 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QuickSearch_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(814);
		s_Il2CppMethodIntialized = true;
	}
	{
		((QuickSearch_t1203_StaticFields*)QuickSearch_t1203_il2cpp_TypeInfo_var->static_fields)->___THRESHOLD_6 = 5;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
extern "C" int32_t QuickSearch_get_Length_m5909 (QuickSearch_t1203 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___len_1);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t QuickSearch_Search_m5910 (QuickSearch_t1203 * __this, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___start;
		V_0 = L_0;
		bool L_1 = (__this->___reverse_3);
		if (!L_1)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_2 = ___start;
		int32_t L_3 = ___end;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		String_t* L_5 = ___text;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m478(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_7 = ___text;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m478(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0029:
	{
		int32_t L_9 = (__this->___len_1);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_005a;
	}

IL_003a:
	{
		String_t* L_10 = (__this->___str_0);
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m477(L_10, 0, /*hidden argument*/NULL);
		String_t* L_12 = ___text;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m477(L_12, L_13, /*hidden argument*/NULL);
		uint16_t L_15 = QuickSearch_GetChar_m5913(__this, L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_15))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_005a:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ((int32_t)((int32_t)L_17-(int32_t)1));
		V_0 = L_18;
		int32_t L_19 = ___end;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_003a;
		}
	}
	{
		return (-1);
	}

IL_0067:
	{
		int32_t L_20 = ___end;
		int32_t L_21 = (__this->___len_1);
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_22 = (__this->___len_1);
		___end = ((int32_t)((int32_t)L_22-(int32_t)1));
	}

IL_007d:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
		goto IL_00fb;
	}

IL_0086:
	{
		int32_t L_24 = (__this->___len_1);
		V_1 = ((int32_t)((int32_t)L_24-(int32_t)1));
		goto IL_00aa;
	}

IL_0094:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)((int32_t)L_25-(int32_t)1));
		V_1 = L_26;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = (__this->___len_1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))+(int32_t)1));
	}

IL_00aa:
	{
		String_t* L_29 = (__this->___str_0);
		int32_t L_30 = V_1;
		NullCheck(L_29);
		uint16_t L_31 = String_get_Chars_m477(L_29, L_30, /*hidden argument*/NULL);
		String_t* L_32 = ___text;
		int32_t L_33 = V_0;
		int32_t L_34 = (__this->___len_1);
		int32_t L_35 = V_1;
		NullCheck(L_32);
		uint16_t L_36 = String_get_Chars_m477(L_32, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33-(int32_t)L_34))+(int32_t)1))+(int32_t)L_35)), /*hidden argument*/NULL);
		uint16_t L_37 = QuickSearch_GetChar_m5913(__this, L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_31) == ((int32_t)L_37)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = ___end;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_40 = V_0;
		String_t* L_41 = ___text;
		int32_t L_42 = V_0;
		int32_t L_43 = (__this->___len_1);
		NullCheck(L_41);
		uint16_t L_44 = String_get_Chars_m477(L_41, ((int32_t)((int32_t)L_42-(int32_t)L_43)), /*hidden argument*/NULL);
		int32_t L_45 = QuickSearch_GetShiftDistance_m5912(__this, L_44, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_40-(int32_t)L_45));
		goto IL_00fb;
	}

IL_00f6:
	{
		goto IL_0102;
	}

IL_00fb:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = ___end;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_0086;
		}
	}

IL_0102:
	{
		goto IL_01d6;
	}

IL_0107:
	{
		int32_t L_48 = (__this->___len_1);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0145;
		}
	}
	{
		goto IL_013c;
	}

IL_0118:
	{
		String_t* L_49 = (__this->___str_0);
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m477(L_49, 0, /*hidden argument*/NULL);
		String_t* L_51 = ___text;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		uint16_t L_53 = String_get_Chars_m477(L_51, L_52, /*hidden argument*/NULL);
		uint16_t L_54 = QuickSearch_GetChar_m5913(__this, L_53, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)L_54))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_55 = V_0;
		return L_55;
	}

IL_0138:
	{
		int32_t L_56 = V_0;
		V_0 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_013c:
	{
		int32_t L_57 = V_0;
		int32_t L_58 = ___end;
		if ((((int32_t)L_57) <= ((int32_t)L_58)))
		{
			goto IL_0118;
		}
	}
	{
		return (-1);
	}

IL_0145:
	{
		int32_t L_59 = ___end;
		String_t* L_60 = ___text;
		NullCheck(L_60);
		int32_t L_61 = String_get_Length_m478(L_60, /*hidden argument*/NULL);
		int32_t L_62 = (__this->___len_1);
		if ((((int32_t)L_59) <= ((int32_t)((int32_t)((int32_t)L_61-(int32_t)L_62)))))
		{
			goto IL_0167;
		}
	}
	{
		String_t* L_63 = ___text;
		NullCheck(L_63);
		int32_t L_64 = String_get_Length_m478(L_63, /*hidden argument*/NULL);
		int32_t L_65 = (__this->___len_1);
		___end = ((int32_t)((int32_t)L_64-(int32_t)L_65));
	}

IL_0167:
	{
		goto IL_01cf;
	}

IL_016c:
	{
		int32_t L_66 = (__this->___len_1);
		V_2 = ((int32_t)((int32_t)L_66-(int32_t)1));
		goto IL_0187;
	}

IL_017a:
	{
		int32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((int32_t)L_67-(int32_t)1));
		V_2 = L_68;
		if ((((int32_t)L_68) >= ((int32_t)0)))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_69 = V_0;
		return L_69;
	}

IL_0187:
	{
		String_t* L_70 = (__this->___str_0);
		int32_t L_71 = V_2;
		NullCheck(L_70);
		uint16_t L_72 = String_get_Chars_m477(L_70, L_71, /*hidden argument*/NULL);
		String_t* L_73 = ___text;
		int32_t L_74 = V_0;
		int32_t L_75 = V_2;
		NullCheck(L_73);
		uint16_t L_76 = String_get_Chars_m477(L_73, ((int32_t)((int32_t)L_74+(int32_t)L_75)), /*hidden argument*/NULL);
		uint16_t L_77 = QuickSearch_GetChar_m5913(__this, L_76, /*hidden argument*/NULL);
		if ((((int32_t)L_72) == ((int32_t)L_77)))
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_78 = V_0;
		int32_t L_79 = ___end;
		if ((((int32_t)L_78) >= ((int32_t)L_79)))
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_80 = V_0;
		String_t* L_81 = ___text;
		int32_t L_82 = V_0;
		int32_t L_83 = (__this->___len_1);
		NullCheck(L_81);
		uint16_t L_84 = String_get_Chars_m477(L_81, ((int32_t)((int32_t)L_82+(int32_t)L_83)), /*hidden argument*/NULL);
		int32_t L_85 = QuickSearch_GetShiftDistance_m5912(__this, L_84, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_80+(int32_t)L_85));
		goto IL_01cf;
	}

IL_01ca:
	{
		goto IL_01d6;
	}

IL_01cf:
	{
		int32_t L_86 = V_0;
		int32_t L_87 = ___end;
		if ((((int32_t)L_86) <= ((int32_t)L_87)))
		{
			goto IL_016c;
		}
	}

IL_01d6:
	{
		return (-1);
	}
}
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* ByteU5BU5D_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern "C" void QuickSearch_SetupShiftTable_m5911 (QuickSearch_t1203 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	String_t* G_B13_0 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	String_t* G_B14_1 = {0};
	{
		int32_t L_0 = (__this->___len_1);
		V_0 = ((((int32_t)L_0) > ((int32_t)((int32_t)254)))? 1 : 0);
		V_1 = 0;
		V_2 = 0;
		goto IL_0045;
	}

IL_0017:
	{
		String_t* L_1 = (__this->___str_0);
		int32_t L_2 = V_2;
		NullCheck(L_1);
		uint16_t L_3 = String_get_Chars_m477(L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)255))))
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_5 = V_3;
		uint8_t L_6 = V_1;
		if ((((int32_t)(((uint8_t)L_5))) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		uint16_t L_7 = V_3;
		V_1 = (((uint8_t)L_7));
	}

IL_003a:
	{
		goto IL_0041;
	}

IL_003f:
	{
		V_0 = 1;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = (__this->___len_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0017;
		}
	}
	{
		uint8_t L_11 = V_1;
		__this->___shift_4 = ((ByteU5BU5D_t625*)SZArrayNew(ByteU5BU5D_t625_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_11+(int32_t)1))));
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		Hashtable_t985 * L_13 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_13, /*hidden argument*/NULL);
		__this->___shiftExtended_5 = L_13;
	}

IL_0070:
	{
		V_4 = 0;
		int32_t L_14 = (__this->___len_1);
		V_5 = L_14;
		goto IL_0102;
	}

IL_0080:
	{
		String_t* L_15 = (__this->___str_0);
		bool L_16 = (__this->___reverse_3);
		G_B12_0 = L_15;
		if (L_16)
		{
			G_B13_0 = L_15;
			goto IL_0098;
		}
	}
	{
		int32_t L_17 = V_4;
		G_B14_0 = L_17;
		G_B14_1 = G_B12_0;
		goto IL_009c;
	}

IL_0098:
	{
		int32_t L_18 = V_5;
		G_B14_0 = ((int32_t)((int32_t)L_18-(int32_t)1));
		G_B14_1 = G_B13_0;
	}

IL_009c:
	{
		NullCheck(G_B14_1);
		uint16_t L_19 = String_get_Chars_m477(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		V_6 = L_19;
		uint16_t L_20 = V_6;
		ByteU5BU5D_t625* L_21 = (__this->___shift_4);
		NullCheck(L_21);
		if ((((int32_t)L_20) >= ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)255))))
		{
			goto IL_00cf;
		}
	}
	{
		ByteU5BU5D_t625* L_23 = (__this->___shift_4);
		uint16_t L_24 = V_6;
		int32_t L_25 = V_5;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_24, sizeof(uint8_t))) = (uint8_t)(((uint8_t)L_25));
		goto IL_00f6;
	}

IL_00cf:
	{
		ByteU5BU5D_t625* L_26 = (__this->___shift_4);
		uint16_t L_27 = V_6;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27, sizeof(uint8_t))) = (uint8_t)((int32_t)255);
	}

IL_00dd:
	{
		Hashtable_t985 * L_28 = (__this->___shiftExtended_5);
		uint16_t L_29 = V_6;
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(Char_t266_il2cpp_TypeInfo_var, &L_30);
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_28);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_28, L_31, L_34);
	}

IL_00f6:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)((int32_t)L_36-(int32_t)1));
	}

IL_0102:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = (__this->___len_1);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0080;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern "C" int32_t QuickSearch_GetShiftDistance_m5912 (QuickSearch_t1203 * __this, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	int32_t G_B15_0 = 0;
	{
		ByteU5BU5D_t625* L_0 = (__this->___shift_4);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		uint16_t L_1 = ___c;
		uint16_t L_2 = QuickSearch_GetChar_m5913(__this, L_1, /*hidden argument*/NULL);
		___c = L_2;
		uint16_t L_3 = ___c;
		ByteU5BU5D_t625* L_4 = (__this->___shift_4);
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_t625* L_5 = (__this->___shift_4);
		uint16_t L_6 = ___c;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		uint16_t L_7 = L_6;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7, sizeof(uint8_t)));
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = (__this->___len_1);
		return ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)255))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0049:
	{
		goto IL_0062;
	}

IL_004e:
	{
		uint16_t L_12 = ___c;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)255))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_13 = (__this->___len_1);
		return ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0062:
	{
		Hashtable_t985 * L_14 = (__this->___shiftExtended_5);
		if (L_14)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_15 = (__this->___len_1);
		return ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0076:
	{
		Hashtable_t985 * L_16 = (__this->___shiftExtended_5);
		uint16_t L_17 = ___c;
		uint16_t L_18 = L_17;
		Object_t * L_19 = Box(Char_t266_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, L_19);
		V_1 = L_20;
		Object_t * L_21 = V_1;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		Object_t * L_22 = V_1;
		G_B15_0 = ((*(int32_t*)((int32_t*)UnBox (L_22, Int32_t151_il2cpp_TypeInfo_var))));
		goto IL_00a1;
	}

IL_0099:
	{
		int32_t L_23 = (__this->___len_1);
		G_B15_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00a1:
	{
		return G_B15_0;
	}
}
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" uint16_t QuickSearch_GetChar_m5913 (QuickSearch_t1203 * __this, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t G_B3_0 = 0x0;
	{
		bool L_0 = (__this->___ignore_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint16_t L_1 = ___c;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		uint16_t L_2 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		uint16_t L_3 = Char_ToLower_m2554(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluator.h"
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluatorMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluatorMethodDeclarations.h"
extern "C" void ReplacementEvaluator__ctor_m5914 (ReplacementEvaluator_t1211 * __this, Regex_t877 * ___regex, String_t* ___replacement, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Regex_t877 * L_0 = ___regex;
		__this->___regex_0 = L_0;
		String_t* L_1 = ___replacement;
		__this->___replacement_3 = L_1;
		__this->___pieces_2 = (Int32U5BU5D_t1037*)NULL;
		__this->___n_pieces_1 = 0;
		ReplacementEvaluator_Compile_m5921(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern "C" String_t* ReplacementEvaluator_Evaluate_m5915 (ReplacementEvaluator_t1211 * __this, Match_t1087 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t166 * V_0 = {0};
	{
		int32_t L_0 = (__this->___n_pieces_1);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___replacement_3);
		return L_1;
	}

IL_0012:
	{
		StringBuilder_t166 * L_2 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2253(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		Match_t1087 * L_3 = ___match;
		StringBuilder_t166 * L_4 = V_0;
		ReplacementEvaluator_EvaluateAppend_m5916(__this, L_3, L_4, /*hidden argument*/NULL);
		StringBuilder_t166 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = StringBuilder_ToString_m481(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" void ReplacementEvaluator_EvaluateAppend_m5916 (ReplacementEvaluator_t1211 * __this, Match_t1087 * ___match, StringBuilder_t166 * ___sb, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Group_t1089 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = (__this->___n_pieces_1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t166 * L_1 = ___sb;
		String_t* L_2 = (__this->___replacement_3);
		NullCheck(L_1);
		StringBuilder_Append_m4095(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		V_0 = 0;
		goto IL_00f1;
	}

IL_0020:
	{
		Int32U5BU5D_t1037* L_3 = (__this->___pieces_2);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		int32_t L_6 = L_5;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_6, sizeof(int32_t)));
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		Int32U5BU5D_t1037* L_8 = (__this->___pieces_2);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_10);
		int32_t L_11 = L_10;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_11, sizeof(int32_t)));
		StringBuilder_t166 * L_12 = ___sb;
		String_t* L_13 = (__this->___replacement_3);
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_12);
		StringBuilder_Append_m6162(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_0055:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_008b;
		}
	}
	{
		Match_t1087 * L_17 = ___match;
		NullCheck(L_17);
		GroupCollection_t1088 * L_18 = (GroupCollection_t1088 *)VirtFuncInvoker0< GroupCollection_t1088 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_17);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Group_t1089 * L_20 = GroupCollection_get_Item_m5220(L_18, ((-((int32_t)((int32_t)L_19+(int32_t)4)))), /*hidden argument*/NULL);
		V_3 = L_20;
		StringBuilder_t166 * L_21 = ___sb;
		Group_t1089 * L_22 = V_3;
		NullCheck(L_22);
		String_t* L_23 = Capture_get_Text_m5664(L_22, /*hidden argument*/NULL);
		Group_t1089 * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = Capture_get_Index_m5661(L_24, /*hidden argument*/NULL);
		Group_t1089 * L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27 = Capture_get_Length_m5662(L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m6162(L_21, L_23, L_25, L_27, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_008b:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t166 * L_29 = ___sb;
		Match_t1087 * L_30 = ___match;
		NullCheck(L_30);
		String_t* L_31 = Capture_get_Text_m5664(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m4095(L_29, L_31, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_00a4:
	{
		int32_t L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00c5;
		}
	}
	{
		StringBuilder_t166 * L_33 = ___sb;
		Match_t1087 * L_34 = ___match;
		NullCheck(L_34);
		String_t* L_35 = Capture_get_Text_m5664(L_34, /*hidden argument*/NULL);
		Match_t1087 * L_36 = ___match;
		NullCheck(L_36);
		int32_t L_37 = Capture_get_Index_m5661(L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_Append_m6162(L_33, L_35, 0, L_37, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_00c5:
	{
		Match_t1087 * L_38 = ___match;
		NullCheck(L_38);
		int32_t L_39 = Capture_get_Index_m5661(L_38, /*hidden argument*/NULL);
		Match_t1087 * L_40 = ___match;
		NullCheck(L_40);
		int32_t L_41 = Capture_get_Length_m5662(L_40, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)L_41));
		StringBuilder_t166 * L_42 = ___sb;
		Match_t1087 * L_43 = ___match;
		NullCheck(L_43);
		String_t* L_44 = Capture_get_Text_m5664(L_43, /*hidden argument*/NULL);
		int32_t L_45 = V_4;
		Match_t1087 * L_46 = ___match;
		NullCheck(L_46);
		String_t* L_47 = Capture_get_Text_m5664(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m478(L_47, /*hidden argument*/NULL);
		int32_t L_49 = V_4;
		NullCheck(L_42);
		StringBuilder_Append_m6162(L_42, L_44, L_45, ((int32_t)((int32_t)L_48-(int32_t)L_49)), /*hidden argument*/NULL);
	}

IL_00f1:
	{
		int32_t L_50 = V_0;
		int32_t L_51 = (__this->___n_pieces_1);
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C" bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5917 (ReplacementEvaluator_t1211 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___n_pieces_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern "C" void ReplacementEvaluator_Ensure_m5918 (ReplacementEvaluator_t1211 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1037* V_1 = {0};
	{
		Int32U5BU5D_t1037* L_0 = (__this->___pieces_2);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		V_0 = 4;
		int32_t L_1 = V_0;
		int32_t L_2 = ___size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___size;
		V_0 = L_3;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		__this->___pieces_2 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_4));
		goto IL_0072;
	}

IL_0027:
	{
		int32_t L_5 = ___size;
		Int32U5BU5D_t1037* L_6 = (__this->___pieces_2);
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0072;
		}
	}
	{
		Int32U5BU5D_t1037* L_7 = (__this->___pieces_2);
		NullCheck(L_7);
		Int32U5BU5D_t1037* L_8 = (__this->___pieces_2);
		NullCheck(L_8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))+(int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))>>(int32_t)1))));
		int32_t L_9 = V_0;
		int32_t L_10 = ___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_11 = ___size;
		V_0 = L_11;
	}

IL_0052:
	{
		int32_t L_12 = V_0;
		V_1 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, L_12));
		Int32U5BU5D_t1037* L_13 = (__this->___pieces_2);
		Int32U5BU5D_t1037* L_14 = V_1;
		int32_t L_15 = (__this->___n_pieces_1);
		Array_Copy_m6172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, (Array_t *)(Array_t *)L_14, L_15, /*hidden argument*/NULL);
		Int32U5BU5D_t1037* L_16 = V_1;
		__this->___pieces_2 = L_16;
	}

IL_0072:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C" void ReplacementEvaluator_AddFromReplacement_m5919 (ReplacementEvaluator_t1211 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___start;
		int32_t L_1 = ___end;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		int32_t L_2 = (__this->___n_pieces_1);
		ReplacementEvaluator_Ensure_m5918(__this, ((int32_t)((int32_t)L_2+(int32_t)2)), /*hidden argument*/NULL);
		Int32U5BU5D_t1037* L_3 = (__this->___pieces_2);
		int32_t L_4 = (__this->___n_pieces_1);
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___n_pieces_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		int32_t L_7 = ___start;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_6, sizeof(int32_t))) = (int32_t)L_7;
		Int32U5BU5D_t1037* L_8 = (__this->___pieces_2);
		int32_t L_9 = (__this->___n_pieces_1);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->___n_pieces_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_0;
		int32_t L_12 = ___end;
		int32_t L_13 = ___start;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_11);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_11, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13));
		return;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C" void ReplacementEvaluator_AddInt_m5920 (ReplacementEvaluator_t1211 * __this, int32_t ___i, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___n_pieces_1);
		ReplacementEvaluator_Ensure_m5918(__this, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t1037* L_1 = (__this->___pieces_2);
		int32_t L_2 = (__this->___n_pieces_1);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___n_pieces_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		int32_t L_5 = ___i;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_4, sizeof(int32_t))) = (int32_t)L_5;
		return;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C" void ReplacementEvaluator_Compile_m5921 (ReplacementEvaluator_t1211 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0009:
	{
		String_t* L_0 = (__this->___replacement_3);
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		V_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		NullCheck(L_0);
		uint16_t L_3 = String_get_Chars_m477(L_0, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)36))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0090;
	}

IL_0027:
	{
		int32_t L_5 = V_1;
		String_t* L_6 = (__this->___replacement_3);
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m478(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_00a1;
	}

IL_003d:
	{
		String_t* L_8 = (__this->___replacement_3);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m477(L_8, L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		ReplacementEvaluator_AddFromReplacement_m5919(__this, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		V_0 = L_14;
		goto IL_0090;
	}

IL_0063:
	{
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_15-(int32_t)1));
		int32_t L_16 = ReplacementEvaluator_CompileTerm_m5922(__this, (&V_1), /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0090;
	}

IL_007e:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		ReplacementEvaluator_AddFromReplacement_m5919(__this, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_4;
		ReplacementEvaluator_AddInt_m5920(__this, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		V_0 = L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		String_t* L_23 = (__this->___replacement_3);
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m478(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0009;
		}
	}

IL_00a1:
	{
		int32_t L_25 = V_0;
		if (!L_25)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_1;
		ReplacementEvaluator_AddFromReplacement_m5919(__this, L_26, L_27, /*hidden argument*/NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IndexOutOfRangeException_t831_il2cpp_TypeInfo_var;
extern "C" int32_t ReplacementEvaluator_CompileTerm_m5922 (ReplacementEvaluator_t1211 * __this, int32_t* ___ptr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IndexOutOfRangeException_t831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	uint16_t V_4 = 0x0;
	int32_t V_5 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___replacement_3);
		int32_t* L_1 = ___ptr;
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m477(L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsDigit_m940(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_5 = (__this->___replacement_3);
		int32_t* L_6 = ___ptr;
		int32_t L_7 = Parser_ParseDecimal_m5877(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_9 = V_1;
		Regex_t877 * L_10 = (__this->___regex_0);
		NullCheck(L_10);
		int32_t L_11 = Regex_get_GroupCount_m5726(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		return 0;
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		return ((int32_t)((int32_t)((-L_12))-(int32_t)4));
	}

IL_0045:
	{
		int32_t* L_13 = ___ptr;
		int32_t* L_14 = ___ptr;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)1));
		uint16_t L_15 = V_0;
		V_4 = L_15;
		uint16_t L_16 = V_4;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 0)
		{
			goto IL_015e;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 1)
		{
			goto IL_0164;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 2)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 3)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 4)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 5)
		{
			goto IL_0167;
		}
	}

IL_0070:
	{
		uint16_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)95))))
		{
			goto IL_0176;
		}
	}
	{
		uint16_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)96))))
		{
			goto IL_0161;
		}
	}
	{
		uint16_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)123))))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_0178;
	}

IL_0090:
	{
		V_3 = (-1);
	}

IL_0092:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_20 = (__this->___replacement_3);
			int32_t* L_21 = ___ptr;
			NullCheck(L_20);
			uint16_t L_22 = String_get_Chars_m477(L_20, (*((int32_t*)L_21)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
			bool L_23 = Char_IsDigit_m940(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00c1;
			}
		}

IL_00a9:
		{
			String_t* L_24 = (__this->___replacement_3);
			int32_t* L_25 = ___ptr;
			int32_t L_26 = Parser_ParseDecimal_m5877(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
			V_3 = L_26;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			V_2 = L_27;
			goto IL_00ce;
		}

IL_00c1:
		{
			String_t* L_28 = (__this->___replacement_3);
			int32_t* L_29 = ___ptr;
			String_t* L_30 = Parser_ParseName_m5881(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
			V_2 = L_30;
		}

IL_00ce:
		{
			goto IL_00ee;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t831_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00d3;
		throw e;
	}

CATCH_00d3:
	{ // begin catch(System.IndexOutOfRangeException)
		{
			int32_t* L_31 = ___ptr;
			String_t* L_32 = (__this->___replacement_3);
			NullCheck(L_32);
			int32_t L_33 = String_get_Length_m478(L_32, /*hidden argument*/NULL);
			*((int32_t*)(L_31)) = (int32_t)L_33;
			V_5 = 0;
			goto IL_017a;
		}

IL_00e9:
		{
			; // IL_00e9: leave IL_00ee
		}
	} // end catch (depth: 1)

IL_00ee:
	{
		int32_t* L_34 = ___ptr;
		String_t* L_35 = (__this->___replacement_3);
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m478(L_35, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_34))) == ((int32_t)L_36)))
		{
			goto IL_011a;
		}
	}
	{
		String_t* L_37 = (__this->___replacement_3);
		int32_t* L_38 = ___ptr;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m477(L_37, (*((int32_t*)L_38)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_011a;
		}
	}
	{
		String_t* L_40 = V_2;
		if (L_40)
		{
			goto IL_011c;
		}
	}

IL_011a:
	{
		return 0;
	}

IL_011c:
	{
		int32_t* L_41 = ___ptr;
		int32_t* L_42 = ___ptr;
		*((int32_t*)(L_41)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_42))+(int32_t)1));
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_45 = String_op_Inequality_m1075(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_013f;
		}
	}
	{
		Regex_t877 * L_46 = (__this->___regex_0);
		String_t* L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = Regex_GroupNumberFromName_m5716(L_46, L_47, /*hidden argument*/NULL);
		V_3 = L_48;
	}

IL_013f:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_50 = V_3;
		Regex_t877 * L_51 = (__this->___regex_0);
		NullCheck(L_51);
		int32_t L_52 = Regex_get_GroupCount_m5726(L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_50) <= ((int32_t)L_52)))
		{
			goto IL_0159;
		}
	}

IL_0157:
	{
		return 0;
	}

IL_0159:
	{
		int32_t L_53 = V_3;
		return ((int32_t)((int32_t)((-L_53))-(int32_t)4));
	}

IL_015e:
	{
		return ((int32_t)-4);
	}

IL_0161:
	{
		return ((int32_t)-2);
	}

IL_0164:
	{
		return ((int32_t)-3);
	}

IL_0167:
	{
		Regex_t877 * L_54 = (__this->___regex_0);
		NullCheck(L_54);
		int32_t L_55 = Regex_get_GroupCount_m5726(L_54, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((-L_55))-(int32_t)4));
	}

IL_0176:
	{
		return (-1);
	}

IL_0178:
	{
		return 0;
	}

IL_017a:
	{
		int32_t L_56 = V_5;
		return L_56;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBaseMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBaseMethodDeclarations.h"
extern "C" void ExpressionCollection__ctor_m5923 (ExpressionCollection_t1212 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m5153(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" void ExpressionCollection_Add_m5924 (ExpressionCollection_t1212 * __this, Expression_t1213 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = CollectionBase_get_List_m6173(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_1 = ___e;
		NullCheck(L_0);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1207_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t1213_il2cpp_TypeInfo_var;
extern "C" Expression_t1213 * ExpressionCollection_get_Item_m5925 (ExpressionCollection_t1212 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		Expression_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(836);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = CollectionBase_get_List_m6173(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1207_il2cpp_TypeInfo_var, L_0, L_1);
		return ((Expression_t1213 *)CastclassClass(L_2, Expression_t1213_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" void ExpressionCollection_set_Item_m5926 (ExpressionCollection_t1212 * __this, int32_t ___i, Expression_t1213 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = CollectionBase_get_List_m6173(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___i;
		Expression_t1213 * L_2 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(3 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t1207_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void ExpressionCollection_OnValidate_m5927 (ExpressionCollection_t1212 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Expression__ctor_m5928 (Expression_t1213 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m5929 (Expression_t1213 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, __this, (&V_0), (&V_1));
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		return (-1);
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern TypeInfo* AnchorInfo_t1231_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t1231 * Expression_GetAnchorInfo_m5930 (Expression_t1213 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(837);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Expression_GetFixedWidth_m5929(__this, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_1 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6019(L_1, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBase.h"
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern TypeInfo* ExpressionCollection_t1212_il2cpp_TypeInfo_var;
extern "C" void CompositeExpression__ctor_m5931 (CompositeExpression_t1214 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExpressionCollection_t1212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(838);
		s_Il2CppMethodIntialized = true;
	}
	{
		Expression__ctor_m5928(__this, /*hidden argument*/NULL);
		ExpressionCollection_t1212 * L_0 = (ExpressionCollection_t1212 *)il2cpp_codegen_object_new (ExpressionCollection_t1212_il2cpp_TypeInfo_var);
		ExpressionCollection__ctor_m5923(L_0, /*hidden argument*/NULL);
		__this->___expressions_0 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C" ExpressionCollection_t1212 * CompositeExpression_get_Expressions_m5932 (CompositeExpression_t1214 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = (__this->___expressions_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern "C" void CompositeExpression_GetWidth_m5933 (CompositeExpression_t1214 * __this, int32_t* ___min, int32_t* ___max, int32_t ___count, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Expression_t1213 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)((int32_t)2147483647);
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)0;
		V_0 = 1;
		V_1 = 0;
		goto IL_0053;
	}

IL_0013:
	{
		ExpressionCollection_t1212 * L_2 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Expression_t1213 * L_4 = ExpressionCollection_get_Item_m5925(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Expression_t1213 * L_5 = V_2;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_004f;
	}

IL_002b:
	{
		V_0 = 0;
		Expression_t1213 * L_6 = V_2;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_6, (&V_3), (&V_4));
		int32_t L_7 = V_3;
		int32_t* L_8 = ___min;
		if ((((int32_t)L_7) >= ((int32_t)(*((int32_t*)L_8)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_9 = ___min;
		int32_t L_10 = V_3;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_0042:
	{
		int32_t L_11 = V_4;
		int32_t* L_12 = ___max;
		if ((((int32_t)L_11) <= ((int32_t)(*((int32_t*)L_12)))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t* L_13 = ___max;
		int32_t L_14 = V_4;
		*((int32_t*)(L_13)) = (int32_t)L_14;
	}

IL_004f:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___count;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0013;
		}
	}
	{
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		int32_t* L_19 = ___min;
		int32_t* L_20 = ___max;
		int32_t L_21 = 0;
		V_5 = L_21;
		*((int32_t*)(L_20)) = (int32_t)L_21;
		int32_t L_22 = V_5;
		*((int32_t*)(L_19)) = (int32_t)L_22;
	}

IL_006a:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t1213_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" bool CompositeExpression_IsComplex_m5934 (CompositeExpression_t1214 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Expression_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(836);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Expression_t1213 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Expression_t1213 *)CastclassClass(L_3, Expression_t1213_il2cpp_TypeInfo_var));
			Expression_t1213 * L_4 = V_0;
			NullCheck(L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_4);
			if (!L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x5E, FINALLY_003f);
		}

IL_002f:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x51, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_8 = V_1;
			V_3 = ((Object_t *)IsInst(L_8, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_3;
			if (L_9)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_004a:
		{
			Object_t * L_10 = V_3;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0051:
	{
		int32_t L_11 = Expression_GetFixedWidth_m5929(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_11) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.Console
#include "mscorlib_System_ConsoleMethodDeclarations.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern "C" void Group__ctor_m5935 (Group_t1215 * __this, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m5931(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern "C" void Group_AppendExpression_m5936 (Group_t1215 * __this, Expression_t1213 * ___e, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_1 = ___e;
		NullCheck(L_0);
		ExpressionCollection_Add_m5924(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Group_Compile_m5937 (Group_t1215 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Expression_t1213 * V_2 = {0};
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0048;
	}

IL_0013:
	{
		bool L_2 = ___reverse;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		ExpressionCollection_t1212 * L_3 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		Expression_t1213 * L_6 = ExpressionCollection_get_Item_m5925(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))-(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_003c;
	}

IL_002f:
	{
		ExpressionCollection_t1212 * L_7 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Expression_t1213 * L_9 = ExpressionCollection_get_Item_m5925(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
	}

IL_003c:
	{
		Expression_t1213 * L_10 = V_2;
		Object_t * L_11 = ___cmp;
		bool L_12 = ___reverse;
		NullCheck(L_10);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_10, L_11, L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t1213_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void Group_GetWidth_m5938 (Group_t1215 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Expression_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(836);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Expression_t1213 * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)0;
		ExpressionCollection_t1212 * L_2 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0017:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_4);
			V_0 = ((Expression_t1213 *)CastclassClass(L_5, Expression_t1213_il2cpp_TypeInfo_var));
			Expression_t1213 * L_6 = V_0;
			NullCheck(L_6);
			VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_6, (&V_2), (&V_3));
			int32_t* L_7 = ___min;
			int32_t* L_8 = ___min;
			int32_t L_9 = V_2;
			*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)L_9));
			int32_t* L_10 = ___max;
			if ((((int32_t)(*((int32_t*)L_10))) == ((int32_t)((int32_t)2147483647))))
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			int32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)2147483647)))))
			{
				goto IL_0056;
			}
		}

IL_004a:
		{
			int32_t* L_12 = ___max;
			*((int32_t*)(L_12)) = (int32_t)((int32_t)2147483647);
			goto IL_005c;
		}

IL_0056:
		{
			int32_t* L_13 = ___max;
			int32_t* L_14 = ___max;
			int32_t L_15 = V_3;
			*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)L_15));
		}

IL_005c:
		{
			Object_t * L_16 = V_1;
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_0017;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x81, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_18 = V_1;
			V_4 = ((Object_t *)IsInst(L_18, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_19 = V_4;
			if (L_19)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(108)
		}

IL_0079:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_20);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0081:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Console
#include "mscorlib_System_ConsoleMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* IntervalCollection_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* AnchorInfo_t1231_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Console_t1257_il2cpp_TypeInfo_var;
extern TypeInfo* SystemException_t1256_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1175;
extern Il2CppCodeGenString* _stringLiteral1176;
extern "C" AnchorInfo_t1231 * Group_GetAnchorInfo_m5939 (Group_t1215 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		IntervalCollection_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(820);
		AnchorInfo_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(837);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Console_t1257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(839);
		SystemException_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(787);
		_stringLiteral1175 = il2cpp_codegen_string_literal_from_index(1175);
		_stringLiteral1176 = il2cpp_codegen_string_literal_from_index(1176);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ArrayList_t920 * V_2 = {0};
	IntervalCollection_t1209 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Expression_t1213 * V_6 = {0};
	AnchorInfo_t1231 * V_7 = {0};
	Interval_t1205  V_8 = {0};
	Interval_t1205  V_9 = {0};
	Object_t * V_10 = {0};
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	AnchorInfo_t1231 * V_14 = {0};
	StringBuilder_t166 * V_15 = {0};
	int32_t V_16 = 0;
	AnchorInfo_t1231 * V_17 = {0};
	Object_t * V_18 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = Expression_GetFixedWidth_m5929(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		V_2 = L_1;
		IntervalCollection_t1209 * L_2 = (IntervalCollection_t1209 *)il2cpp_codegen_object_new (IntervalCollection_t1209_il2cpp_TypeInfo_var);
		IntervalCollection__ctor_m5865(L_2, /*hidden argument*/NULL);
		V_3 = L_2;
		V_0 = 0;
		ExpressionCollection_t1212 * L_3 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_3);
		V_4 = L_4;
		V_5 = 0;
		goto IL_00ca;
	}

IL_002a:
	{
		bool L_5 = ___reverse;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		ExpressionCollection_t1212 * L_6 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_6);
		Expression_t1213 * L_9 = ExpressionCollection_get_Item_m5925(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)L_8))-(int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_9;
		goto IL_0058;
	}

IL_0049:
	{
		ExpressionCollection_t1212 * L_10 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_5;
		NullCheck(L_10);
		Expression_t1213 * L_12 = ExpressionCollection_get_Item_m5925(L_10, L_11, /*hidden argument*/NULL);
		V_6 = L_12;
	}

IL_0058:
	{
		Expression_t1213 * L_13 = V_6;
		bool L_14 = ___reverse;
		NullCheck(L_13);
		AnchorInfo_t1231 * L_15 = (AnchorInfo_t1231 *)VirtFuncInvoker1< AnchorInfo_t1231 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean) */, L_13, L_14);
		V_7 = L_15;
		ArrayList_t920 * L_16 = V_2;
		AnchorInfo_t1231 * L_17 = V_7;
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		AnchorInfo_t1231 * L_18 = V_7;
		NullCheck(L_18);
		bool L_19 = AnchorInfo_get_IsPosition_m6031(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_20 = V_0;
		AnchorInfo_t1231 * L_21 = V_7;
		NullCheck(L_21);
		int32_t L_22 = AnchorInfo_get_Offset_m6022(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		AnchorInfo_t1231 * L_24 = V_7;
		NullCheck(L_24);
		uint16_t L_25 = AnchorInfo_get_Position_m6029(L_24, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_26 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6021(L_26, __this, ((int32_t)((int32_t)L_20+(int32_t)L_22)), L_23, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_008f:
	{
		AnchorInfo_t1231 * L_27 = V_7;
		NullCheck(L_27);
		bool L_28 = AnchorInfo_get_IsSubstring_m6030(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a9;
		}
	}
	{
		IntervalCollection_t1209 * L_29 = V_3;
		AnchorInfo_t1231 * L_30 = V_7;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		Interval_t1205  L_32 = AnchorInfo_GetInterval_m6032(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		IntervalCollection_Add_m5867(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		AnchorInfo_t1231 * L_33 = V_7;
		NullCheck(L_33);
		bool L_34 = AnchorInfo_get_IsUnknownWidth_m6025(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d3;
	}

IL_00ba:
	{
		int32_t L_35 = V_0;
		AnchorInfo_t1231 * L_36 = V_7;
		NullCheck(L_36);
		int32_t L_37 = AnchorInfo_get_Width_m6023(L_36, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_35+(int32_t)L_37));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002a;
		}
	}

IL_00d3:
	{
		IntervalCollection_t1209 * L_41 = V_3;
		NullCheck(L_41);
		IntervalCollection_Normalize_m5868(L_41, /*hidden argument*/NULL);
		Interval_t1205  L_42 = Interval_get_Empty_m5845(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = L_42;
		IntervalCollection_t1209 * L_43 = V_3;
		NullCheck(L_43);
		Object_t * L_44 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_43);
		V_10 = L_44;
	}

IL_00e8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0112;
		}

IL_00ed:
		{
			Object_t * L_45 = V_10;
			NullCheck(L_45);
			Object_t * L_46 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_45);
			V_9 = ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_46, Interval_t1205_il2cpp_TypeInfo_var))));
			int32_t L_47 = Interval_get_Size_m5849((&V_9), /*hidden argument*/NULL);
			int32_t L_48 = Interval_get_Size_m5849((&V_8), /*hidden argument*/NULL);
			if ((((int32_t)L_47) <= ((int32_t)L_48)))
			{
				goto IL_0112;
			}
		}

IL_010e:
		{
			Interval_t1205  L_49 = V_9;
			V_8 = L_49;
		}

IL_0112:
		{
			Object_t * L_50 = V_10;
			NullCheck(L_50);
			bool L_51 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_50);
			if (L_51)
			{
				goto IL_00ed;
			}
		}

IL_011e:
		{
			IL2CPP_LEAVE(0x139, FINALLY_0123);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0123;
	}

FINALLY_0123:
	{ // begin finally (depth: 1)
		{
			Object_t * L_52 = V_10;
			V_18 = ((Object_t *)IsInst(L_52, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_53 = V_18;
			if (L_53)
			{
				goto IL_0131;
			}
		}

IL_0130:
		{
			IL2CPP_END_FINALLY(291)
		}

IL_0131:
		{
			Object_t * L_54 = V_18;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_54);
			IL2CPP_END_FINALLY(291)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_JUMP_TBL(0x139, IL_0139)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0139:
	{
		bool L_55 = Interval_get_IsEmpty_m5848((&V_8), /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_56 = V_1;
		AnchorInfo_t1231 * L_57 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6019(L_57, __this, L_56, /*hidden argument*/NULL);
		return L_57;
	}

IL_014d:
	{
		V_11 = 0;
		V_12 = 0;
		V_0 = 0;
		V_13 = 0;
		goto IL_01c8;
	}

IL_015d:
	{
		ArrayList_t920 * L_58 = V_2;
		int32_t L_59 = V_13;
		NullCheck(L_58);
		Object_t * L_60 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_58, L_59);
		V_14 = ((AnchorInfo_t1231 *)CastclassClass(L_60, AnchorInfo_t1231_il2cpp_TypeInfo_var));
		AnchorInfo_t1231 * L_61 = V_14;
		NullCheck(L_61);
		bool L_62 = AnchorInfo_get_IsSubstring_m6030(L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_01a7;
		}
	}
	{
		AnchorInfo_t1231 * L_63 = V_14;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		Interval_t1205  L_65 = AnchorInfo_GetInterval_m6032(L_63, L_64, /*hidden argument*/NULL);
		bool L_66 = Interval_Contains_m5852((&V_8), L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01a7;
		}
	}
	{
		bool L_67 = V_11;
		AnchorInfo_t1231 * L_68 = V_14;
		NullCheck(L_68);
		bool L_69 = AnchorInfo_get_IgnoreCase_m6028(L_68, /*hidden argument*/NULL);
		V_11 = ((int32_t)((int32_t)L_67|(int32_t)L_69));
		ArrayList_t920 * L_70 = V_2;
		int32_t L_71 = V_12;
		int32_t L_72 = L_71;
		V_12 = ((int32_t)((int32_t)L_72+(int32_t)1));
		AnchorInfo_t1231 * L_73 = V_14;
		NullCheck(L_70);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(21 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_70, L_72, L_73);
	}

IL_01a7:
	{
		AnchorInfo_t1231 * L_74 = V_14;
		NullCheck(L_74);
		bool L_75 = AnchorInfo_get_IsUnknownWidth_m6025(L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01d5;
	}

IL_01b8:
	{
		int32_t L_76 = V_0;
		AnchorInfo_t1231 * L_77 = V_14;
		NullCheck(L_77);
		int32_t L_78 = AnchorInfo_get_Width_m6023(L_77, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_76+(int32_t)L_78));
		int32_t L_79 = V_13;
		V_13 = ((int32_t)((int32_t)L_79+(int32_t)1));
	}

IL_01c8:
	{
		int32_t L_80 = V_13;
		ArrayList_t920 * L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_81);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_015d;
		}
	}

IL_01d5:
	{
		StringBuilder_t166 * L_83 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2253(L_83, /*hidden argument*/NULL);
		V_15 = L_83;
		V_16 = 0;
		goto IL_0227;
	}

IL_01e4:
	{
		bool L_84 = ___reverse;
		if (!L_84)
		{
			goto IL_0203;
		}
	}
	{
		ArrayList_t920 * L_85 = V_2;
		int32_t L_86 = V_12;
		int32_t L_87 = V_16;
		NullCheck(L_85);
		Object_t * L_88 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)L_87))-(int32_t)1)));
		V_17 = ((AnchorInfo_t1231 *)CastclassClass(L_88, AnchorInfo_t1231_il2cpp_TypeInfo_var));
		goto IL_0212;
	}

IL_0203:
	{
		ArrayList_t920 * L_89 = V_2;
		int32_t L_90 = V_16;
		NullCheck(L_89);
		Object_t * L_91 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_89, L_90);
		V_17 = ((AnchorInfo_t1231 *)CastclassClass(L_91, AnchorInfo_t1231_il2cpp_TypeInfo_var));
	}

IL_0212:
	{
		StringBuilder_t166 * L_92 = V_15;
		AnchorInfo_t1231 * L_93 = V_17;
		NullCheck(L_93);
		String_t* L_94 = AnchorInfo_get_Substring_m6027(L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		StringBuilder_Append_m4095(L_92, L_94, /*hidden argument*/NULL);
		int32_t L_95 = V_16;
		V_16 = ((int32_t)((int32_t)L_95+(int32_t)1));
	}

IL_0227:
	{
		int32_t L_96 = V_16;
		int32_t L_97 = V_12;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_01e4;
		}
	}
	{
		StringBuilder_t166 * L_98 = V_15;
		NullCheck(L_98);
		int32_t L_99 = StringBuilder_get_Length_m5166(L_98, /*hidden argument*/NULL);
		int32_t L_100 = Interval_get_Size_m5849((&V_8), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_99) == ((uint32_t)L_100))))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_101 = ((&V_8)->___low_0);
		int32_t L_102 = V_1;
		StringBuilder_t166 * L_103 = V_15;
		NullCheck(L_103);
		String_t* L_104 = StringBuilder_ToString_m481(L_103, /*hidden argument*/NULL);
		bool L_105 = V_11;
		AnchorInfo_t1231 * L_106 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6020(L_106, __this, L_101, L_102, L_104, L_105, /*hidden argument*/NULL);
		return L_106;
	}

IL_025b:
	{
		StringBuilder_t166 * L_107 = V_15;
		NullCheck(L_107);
		int32_t L_108 = StringBuilder_get_Length_m5166(L_107, /*hidden argument*/NULL);
		int32_t L_109 = Interval_get_Size_m5849((&V_8), /*hidden argument*/NULL);
		if ((((int32_t)L_108) <= ((int32_t)L_109)))
		{
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t1257_il2cpp_TypeInfo_var);
		TextWriter_t1258 * L_110 = Console_get_Error_m6174(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_110);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_110, _stringLiteral1175);
		int32_t L_111 = V_1;
		AnchorInfo_t1231 * L_112 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6019(L_112, __this, L_111, /*hidden argument*/NULL);
		return L_112;
	}

IL_0285:
	{
		SystemException_t1256 * L_113 = (SystemException_t1256 *)il2cpp_codegen_object_new (SystemException_t1256_il2cpp_TypeInfo_var);
		SystemException__ctor_m6163(L_113, _stringLiteral1176, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_113);
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern "C" void RegularExpression__ctor_m5940 (RegularExpression_t1216 * __this, const MethodInfo* method)
{
	{
		Group__ctor_m5935(__this, /*hidden argument*/NULL);
		__this->___group_count_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void RegularExpression_set_GroupCount_m5941 (RegularExpression_t1216 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___group_count_1 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void RegularExpression_Compile_m5942 (RegularExpression_t1216 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnchorInfo_t1231 * V_2 = {0};
	LinkRef_t1192 * V_3 = {0};
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&) */, __this, (&V_0), (&V_1));
		Object_t * L_0 = ___cmp;
		int32_t L_1 = (__this->___group_count_1);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(23 /* System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		bool L_4 = ___reverse;
		AnchorInfo_t1231 * L_5 = (AnchorInfo_t1231 *)VirtFuncInvoker1< AnchorInfo_t1231 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean) */, __this, L_4);
		V_2 = L_5;
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		LinkRef_t1192 * L_7 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		Object_t * L_8 = ___cmp;
		bool L_9 = ___reverse;
		AnchorInfo_t1231 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = AnchorInfo_get_Offset_m6022(L_10, /*hidden argument*/NULL);
		LinkRef_t1192 * L_12 = V_3;
		NullCheck(L_8);
		InterfaceActionInvoker3< bool, int32_t, LinkRef_t1192 * >::Invoke(25 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_8, L_9, L_11, L_12);
		AnchorInfo_t1231 * L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = AnchorInfo_get_IsPosition_m6031(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_15 = ___cmp;
		AnchorInfo_t1231 * L_16 = V_2;
		NullCheck(L_16);
		uint16_t L_17 = AnchorInfo_get_Position_m6029(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_15, L_17);
		goto IL_006f;
	}

IL_0051:
	{
		AnchorInfo_t1231 * L_18 = V_2;
		NullCheck(L_18);
		bool L_19 = AnchorInfo_get_IsSubstring_m6030(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		Object_t * L_20 = ___cmp;
		AnchorInfo_t1231 * L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22 = AnchorInfo_get_Substring_m6027(L_21, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_23 = V_2;
		NullCheck(L_23);
		bool L_24 = AnchorInfo_get_IgnoreCase_m6028(L_23, /*hidden argument*/NULL);
		bool L_25 = ___reverse;
		NullCheck(L_20);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_20, L_22, L_24, L_25);
	}

IL_006f:
	{
		Object_t * L_26 = ___cmp;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_26);
		Object_t * L_27 = ___cmp;
		LinkRef_t1192 * L_28 = V_3;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_27, L_28);
		Object_t * L_29 = ___cmp;
		bool L_30 = ___reverse;
		Group_Compile_m5937(__this, L_29, L_30, /*hidden argument*/NULL);
		Object_t * L_31 = ___cmp;
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_31);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern "C" void CapturingGroup__ctor_m5943 (CapturingGroup_t1217 * __this, const MethodInfo* method)
{
	{
		Group__ctor_m5935(__this, /*hidden argument*/NULL);
		__this->___gid_1 = 0;
		__this->___name_2 = (String_t*)NULL;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
extern "C" int32_t CapturingGroup_get_Index_m5944 (CapturingGroup_t1217 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gid_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CapturingGroup_set_Index_m5945 (CapturingGroup_t1217 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___gid_1 = L_0;
		return;
	}
}
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
extern "C" String_t* CapturingGroup_get_Name_m5946 (CapturingGroup_t1217 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void CapturingGroup_set_Name_m5947 (CapturingGroup_t1217 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___name_2 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
extern "C" bool CapturingGroup_get_IsNamed_m5948 (CapturingGroup_t1217 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void CapturingGroup_Compile_m5949 (CapturingGroup_t1217 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		int32_t L_1 = (__this->___gid_1);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0, L_1);
		Object_t * L_2 = ___cmp;
		bool L_3 = ___reverse;
		Group_Compile_m5937(__this, L_2, L_3, /*hidden argument*/NULL);
		Object_t * L_4 = ___cmp;
		int32_t L_5 = (__this->___gid_1);
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(11 /* System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
extern "C" bool CapturingGroup_IsComplex_m5950 (CapturingGroup_t1217 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* CapturingGroup_t1217_il2cpp_TypeInfo_var;
extern "C" int32_t CapturingGroup_CompareTo_m5951 (CapturingGroup_t1217 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapturingGroup_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(823);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___gid_1);
		Object_t * L_1 = ___other;
		NullCheck(((CapturingGroup_t1217 *)CastclassClass(L_1, CapturingGroup_t1217_il2cpp_TypeInfo_var)));
		int32_t L_2 = (((CapturingGroup_t1217 *)CastclassClass(L_1, CapturingGroup_t1217_il2cpp_TypeInfo_var))->___gid_1);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern "C" void BalancingGroup__ctor_m5952 (BalancingGroup_t1218 * __this, const MethodInfo* method)
{
	{
		CapturingGroup__ctor_m5943(__this, /*hidden argument*/NULL);
		__this->___balance_3 = (CapturingGroup_t1217 *)NULL;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
extern "C" void BalancingGroup_set_Balance_m5953 (BalancingGroup_t1218 * __this, CapturingGroup_t1217 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t1217 * L_0 = ___value;
		__this->___balance_3 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void BalancingGroup_Compile_m5954 (BalancingGroup_t1218 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t1192 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Expression_t1213 * V_3 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1192 * L_1 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		int32_t L_3 = CapturingGroup_get_Index_m5944(__this, /*hidden argument*/NULL);
		CapturingGroup_t1217 * L_4 = (__this->___balance_3);
		NullCheck(L_4);
		int32_t L_5 = CapturingGroup_get_Index_m5944(L_4, /*hidden argument*/NULL);
		bool L_6 = CapturingGroup_get_IsNamed_m5948(__this, /*hidden argument*/NULL);
		LinkRef_t1192 * L_7 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t1192 * >::Invoke(12 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_2, L_3, L_5, L_6, L_7);
		ExpressionCollection_t1212 * L_8 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_8);
		V_1 = L_9;
		V_2 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		bool L_10 = ___reverse;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ExpressionCollection_t1212 * L_11 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		Expression_t1213 * L_14 = ExpressionCollection_get_Item_m5925(L_11, ((int32_t)((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13))-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_14;
		goto IL_0061;
	}

IL_0054:
	{
		ExpressionCollection_t1212 * L_15 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Expression_t1213 * L_17 = ExpressionCollection_get_Item_m5925(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
	}

IL_0061:
	{
		Expression_t1213 * L_18 = V_3;
		Object_t * L_19 = ___cmp;
		bool L_20 = ___reverse;
		NullCheck(L_18);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_18, L_19, L_20);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_24 = ___cmp;
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(13 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBalance() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t1192 * L_26 = V_0;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_25, L_26);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern "C" void NonBacktrackingGroup__ctor_m5955 (NonBacktrackingGroup_t1219 * __this, const MethodInfo* method)
{
	{
		Group__ctor_m5935(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void NonBacktrackingGroup_Compile_m5956 (NonBacktrackingGroup_t1219 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t1192 * V_0 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1192 * L_1 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		LinkRef_t1192 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(16 /* System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_2, L_3);
		Object_t * L_4 = ___cmp;
		bool L_5 = ___reverse;
		Group_Compile_m5937(__this, L_4, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_6);
		Object_t * L_7 = ___cmp;
		LinkRef_t1192 * L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_7, L_8);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
extern "C" bool NonBacktrackingGroup_IsComplex_m5957 (NonBacktrackingGroup_t1219 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern "C" void Repetition__ctor_m5958 (Repetition_t1220 * __this, int32_t ___min, int32_t ___max, bool ___lazy, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m5931(__this, /*hidden argument*/NULL);
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m5924(L_0, (Expression_t1213 *)NULL, /*hidden argument*/NULL);
		int32_t L_1 = ___min;
		__this->___min_1 = L_1;
		int32_t L_2 = ___max;
		__this->___max_2 = L_2;
		bool L_3 = ___lazy;
		__this->___lazy_3 = L_3;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" Expression_t1213 * Repetition_get_Expression_m5959 (Repetition_t1220 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t1213 * L_1 = ExpressionCollection_get_Item_m5925(L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
extern "C" void Repetition_set_Expression_m5960 (Repetition_t1220 * __this, Expression_t1213 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m5926(L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" int32_t Repetition_get_Minimum_m5961 (Repetition_t1220 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___min_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void Repetition_Compile_m5962 (Repetition_t1220 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t1192 * V_0 = {0};
	LinkRef_t1192 * V_1 = {0};
	{
		Expression_t1213 * L_0 = Repetition_get_Expression_m5959(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_2 = ___cmp;
		NullCheck(L_2);
		LinkRef_t1192 * L_3 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = ___cmp;
		int32_t L_5 = (__this->___min_1);
		int32_t L_6 = (__this->___max_2);
		bool L_7 = (__this->___lazy_3);
		LinkRef_t1192 * L_8 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t1192 * >::Invoke(20 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7, L_8);
		Expression_t1213 * L_9 = Repetition_get_Expression_m5959(__this, /*hidden argument*/NULL);
		Object_t * L_10 = ___cmp;
		bool L_11 = ___reverse;
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_9, L_10, L_11);
		Object_t * L_12 = ___cmp;
		LinkRef_t1192 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(21 /* System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_12, L_13);
		goto IL_0083;
	}

IL_0049:
	{
		Object_t * L_14 = ___cmp;
		NullCheck(L_14);
		LinkRef_t1192 * L_15 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_14);
		V_1 = L_15;
		Object_t * L_16 = ___cmp;
		int32_t L_17 = (__this->___min_1);
		int32_t L_18 = (__this->___max_2);
		bool L_19 = (__this->___lazy_3);
		LinkRef_t1192 * L_20 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t1192 * >::Invoke(24 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19, L_20);
		Expression_t1213 * L_21 = Repetition_get_Expression_m5959(__this, /*hidden argument*/NULL);
		Object_t * L_22 = ___cmp;
		bool L_23 = ___reverse;
		NullCheck(L_21);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_21, L_22, L_23);
		Object_t * L_24 = ___cmp;
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t1192 * L_26 = V_1;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_25, L_26);
	}

IL_0083:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C" void Repetition_GetWidth_m5963 (Repetition_t1220 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		Expression_t1213 * L_0 = Repetition_get_Expression_m5959(__this, /*hidden argument*/NULL);
		int32_t* L_1 = ___min;
		int32_t* L_2 = ___max;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_0, L_1, L_2);
		int32_t* L_3 = ___min;
		int32_t* L_4 = ___min;
		int32_t L_5 = (__this->___min_1);
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_4))*(int32_t)L_5));
		int32_t* L_6 = ___max;
		if ((((int32_t)(*((int32_t*)L_6))) == ((int32_t)((int32_t)2147483647))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = (__this->___max_2);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0040;
		}
	}

IL_0034:
	{
		int32_t* L_8 = ___max;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)2147483647);
		goto IL_004b;
	}

IL_0040:
	{
		int32_t* L_9 = ___max;
		int32_t* L_10 = ___max;
		int32_t L_11 = (__this->___max_2);
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))*(int32_t)L_11));
	}

IL_004b:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* AnchorInfo_t1231_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t1231 * Repetition_GetAnchorInfo_m5964 (Repetition_t1220 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(837);
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AnchorInfo_t1231 * V_1 = {0};
	String_t* V_2 = {0};
	StringBuilder_t166 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = Expression_GetFixedWidth_m5929(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Repetition_get_Minimum_m5961(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_0;
		AnchorInfo_t1231 * L_3 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6019(L_3, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		Expression_t1213 * L_4 = Repetition_get_Expression_m5959(__this, /*hidden argument*/NULL);
		bool L_5 = ___reverse;
		NullCheck(L_4);
		AnchorInfo_t1231 * L_6 = (AnchorInfo_t1231 *)VirtFuncInvoker1< AnchorInfo_t1231 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean) */, L_4, L_5);
		V_1 = L_6;
		AnchorInfo_t1231 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = AnchorInfo_get_IsPosition_m6031(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		AnchorInfo_t1231 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = AnchorInfo_get_Offset_m6022(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		AnchorInfo_t1231 * L_12 = V_1;
		NullCheck(L_12);
		uint16_t L_13 = AnchorInfo_get_Position_m6029(L_12, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_14 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6021(L_14, __this, L_10, L_11, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0046:
	{
		AnchorInfo_t1231 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = AnchorInfo_get_IsSubstring_m6030(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		AnchorInfo_t1231 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = AnchorInfo_get_IsComplete_m6026(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a2;
		}
	}
	{
		AnchorInfo_t1231 * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = AnchorInfo_get_Substring_m6027(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		String_t* L_21 = V_2;
		StringBuilder_t166 * L_22 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2306(L_22, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		V_4 = 1;
		goto IL_0080;
	}

IL_0072:
	{
		StringBuilder_t166 * L_23 = V_3;
		String_t* L_24 = V_2;
		NullCheck(L_23);
		StringBuilder_Append_m4095(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = Repetition_get_Minimum_m5961(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_28 = V_0;
		StringBuilder_t166 * L_29 = V_3;
		NullCheck(L_29);
		String_t* L_30 = StringBuilder_ToString_m481(L_29, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = AnchorInfo_get_IgnoreCase_m6028(L_31, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_33 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6020(L_33, __this, 0, L_28, L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00a2:
	{
		AnchorInfo_t1231 * L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = AnchorInfo_get_Offset_m6022(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		AnchorInfo_t1231 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = AnchorInfo_get_Substring_m6027(L_37, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_39 = V_1;
		NullCheck(L_39);
		bool L_40 = AnchorInfo_get_IgnoreCase_m6028(L_39, /*hidden argument*/NULL);
		AnchorInfo_t1231 * L_41 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6020(L_41, __this, L_35, L_36, L_38, L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_00bc:
	{
		int32_t L_42 = V_0;
		AnchorInfo_t1231 * L_43 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6019(L_43, __this, L_42, /*hidden argument*/NULL);
		return L_43;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern "C" void Assertion__ctor_m5965 (Assertion_t1221 * __this, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m5931(__this, /*hidden argument*/NULL);
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m5924(L_0, (Expression_t1213 *)NULL, /*hidden argument*/NULL);
		ExpressionCollection_t1212 * L_1 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ExpressionCollection_Add_m5924(L_1, (Expression_t1213 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C" Expression_t1213 * Assertion_get_TrueExpression_m5966 (Assertion_t1221 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t1213 * L_1 = ExpressionCollection_get_Item_m5925(L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
extern "C" void Assertion_set_TrueExpression_m5967 (Assertion_t1221 * __this, Expression_t1213 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m5926(L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C" Expression_t1213 * Assertion_get_FalseExpression_m5968 (Assertion_t1221 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t1213 * L_1 = ExpressionCollection_get_Item_m5925(L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_FalseExpression_m5969 (Assertion_t1221 * __this, Expression_t1213 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m5926(L_0, 1, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern "C" void Assertion_GetWidth_m5970 (Assertion_t1221 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		CompositeExpression_GetWidth_m5933(__this, L_0, L_1, 2, /*hidden argument*/NULL);
		Expression_t1213 * L_2 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Expression_t1213 * L_3 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_001f:
	{
		int32_t* L_4 = ___min;
		*((int32_t*)(L_4)) = (int32_t)0;
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern "C" void CaptureAssertion__ctor_m5971 (CaptureAssertion_t1222 * __this, Literal_t1224 * ___l, const MethodInfo* method)
{
	{
		Assertion__ctor_m5965(__this, /*hidden argument*/NULL);
		Literal_t1224 * L_0 = ___l;
		__this->___literal_3 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
extern "C" void CaptureAssertion_set_CapturingGroup_m5972 (CaptureAssertion_t1222 * __this, CapturingGroup_t1217 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t1217 * L_0 = ___value;
		__this->___group_2 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void CaptureAssertion_Compile_m5973 (CaptureAssertion_t1222 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	LinkRef_t1192 * V_1 = {0};
	LinkRef_t1192 * V_2 = {0};
	{
		CapturingGroup_t1217 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ExpressionAssertion_t1223 * L_1 = CaptureAssertion_get_Alternate_m5975(__this, /*hidden argument*/NULL);
		Object_t * L_2 = ___cmp;
		bool L_3 = ___reverse;
		NullCheck(L_1);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_1, L_2, L_3);
		return;
	}

IL_0019:
	{
		CapturingGroup_t1217 * L_4 = (__this->___group_2);
		NullCheck(L_4);
		int32_t L_5 = CapturingGroup_get_Index_m5944(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		LinkRef_t1192 * L_7 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		Expression_t1213 * L_8 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_9 = ___cmp;
		int32_t L_10 = V_0;
		LinkRef_t1192 * L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, LinkRef_t1192 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		Expression_t1213 * L_12 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		Object_t * L_13 = ___cmp;
		bool L_14 = ___reverse;
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_12, L_13, L_14);
		goto IL_0088;
	}

IL_0051:
	{
		Object_t * L_15 = ___cmp;
		NullCheck(L_15);
		LinkRef_t1192 * L_16 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
		Object_t * L_17 = ___cmp;
		int32_t L_18 = V_0;
		LinkRef_t1192 * L_19 = V_2;
		NullCheck(L_17);
		InterfaceActionInvoker2< int32_t, LinkRef_t1192 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		Expression_t1213 * L_20 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		Object_t * L_21 = ___cmp;
		bool L_22 = ___reverse;
		NullCheck(L_20);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_20, L_21, L_22);
		Object_t * L_23 = ___cmp;
		LinkRef_t1192 * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_23, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t1192 * L_26 = V_2;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_25, L_26);
		Expression_t1213 * L_27 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		Object_t * L_28 = ___cmp;
		bool L_29 = ___reverse;
		NullCheck(L_27);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_27, L_28, L_29);
	}

IL_0088:
	{
		Object_t * L_30 = ___cmp;
		LinkRef_t1192 * L_31 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_30, L_31);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" bool CaptureAssertion_IsComplex_m5974 (CaptureAssertion_t1222 * __this, const MethodInfo* method)
{
	{
		CapturingGroup_t1217 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ExpressionAssertion_t1223 * L_1 = CaptureAssertion_get_Alternate_m5975(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex() */, L_1);
		return L_2;
	}

IL_0017:
	{
		Expression_t1213 * L_3 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Expression_t1213 * L_4 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Expression_t1213 * L_6 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Expression_t1213 * L_7 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		int32_t L_9 = Expression_GetFixedWidth_m5929(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern TypeInfo* ExpressionAssertion_t1223_il2cpp_TypeInfo_var;
extern "C" ExpressionAssertion_t1223 * CaptureAssertion_get_Alternate_m5975 (CaptureAssertion_t1222 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExpressionAssertion_t1223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(831);
		s_Il2CppMethodIntialized = true;
	}
	{
		ExpressionAssertion_t1223 * L_0 = (__this->___alternate_1);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		ExpressionAssertion_t1223 * L_1 = (ExpressionAssertion_t1223 *)il2cpp_codegen_object_new (ExpressionAssertion_t1223_il2cpp_TypeInfo_var);
		ExpressionAssertion__ctor_m5976(L_1, /*hidden argument*/NULL);
		__this->___alternate_1 = L_1;
		ExpressionAssertion_t1223 * L_2 = (__this->___alternate_1);
		Expression_t1213 * L_3 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Assertion_set_TrueExpression_m5967(L_2, L_3, /*hidden argument*/NULL);
		ExpressionAssertion_t1223 * L_4 = (__this->___alternate_1);
		Expression_t1213 * L_5 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assertion_set_FalseExpression_m5969(L_4, L_5, /*hidden argument*/NULL);
		ExpressionAssertion_t1223 * L_6 = (__this->___alternate_1);
		Literal_t1224 * L_7 = (__this->___literal_3);
		NullCheck(L_6);
		ExpressionAssertion_set_TestExpression_m5980(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		ExpressionAssertion_t1223 * L_8 = (__this->___alternate_1);
		return L_8;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern "C" void ExpressionAssertion__ctor_m5976 (ExpressionAssertion_t1223 * __this, const MethodInfo* method)
{
	{
		Assertion__ctor_m5965(__this, /*hidden argument*/NULL);
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m5924(L_0, (Expression_t1213 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ExpressionAssertion_set_Reverse_m5977 (ExpressionAssertion_t1223 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___reverse_1 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C" void ExpressionAssertion_set_Negate_m5978 (ExpressionAssertion_t1223 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___negate_2 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C" Expression_t1213 * ExpressionAssertion_get_TestExpression_m5979 (ExpressionAssertion_t1223 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t1213 * L_1 = ExpressionCollection_get_Item_m5925(L_0, 2, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
extern "C" void ExpressionAssertion_set_TestExpression_m5980 (ExpressionAssertion_t1223 * __this, Expression_t1213 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m5926(L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void ExpressionAssertion_Compile_m5981 (ExpressionAssertion_t1223 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t1192 * V_0 = {0};
	LinkRef_t1192 * V_1 = {0};
	LinkRef_t1192 * V_2 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1192 * L_1 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		NullCheck(L_2);
		LinkRef_t1192 * L_3 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		bool L_4 = (__this->___negate_2);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_5 = ___cmp;
		LinkRef_t1192 * L_6 = V_0;
		LinkRef_t1192 * L_7 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker2< LinkRef_t1192 *, LinkRef_t1192 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		goto IL_002e;
	}

IL_0026:
	{
		Object_t * L_8 = ___cmp;
		LinkRef_t1192 * L_9 = V_1;
		LinkRef_t1192 * L_10 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker2< LinkRef_t1192 *, LinkRef_t1192 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_8, L_9, L_10);
	}

IL_002e:
	{
		Expression_t1213 * L_11 = ExpressionAssertion_get_TestExpression_m5979(__this, /*hidden argument*/NULL);
		Object_t * L_12 = ___cmp;
		bool L_13 = (__this->___reverse_1);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_11, L_12, L_13);
		Object_t * L_14 = ___cmp;
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_14);
		Expression_t1213 * L_15 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_16 = ___cmp;
		LinkRef_t1192 * L_17 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_16, L_17);
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_18);
		Object_t * L_19 = ___cmp;
		LinkRef_t1192 * L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_19, L_20);
		goto IL_00be;
	}

IL_006a:
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t1192 * L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_21, L_22);
		Expression_t1213 * L_23 = Assertion_get_TrueExpression_m5966(__this, /*hidden argument*/NULL);
		Object_t * L_24 = ___cmp;
		bool L_25 = ___reverse;
		NullCheck(L_23);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_23, L_24, L_25);
		Expression_t1213 * L_26 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_27 = ___cmp;
		LinkRef_t1192 * L_28 = V_1;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_27, L_28);
		goto IL_00be;
	}

IL_0095:
	{
		Object_t * L_29 = ___cmp;
		NullCheck(L_29);
		LinkRef_t1192 * L_30 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_29);
		V_2 = L_30;
		Object_t * L_31 = ___cmp;
		LinkRef_t1192 * L_32 = V_2;
		NullCheck(L_31);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_31, L_32);
		Object_t * L_33 = ___cmp;
		LinkRef_t1192 * L_34 = V_1;
		NullCheck(L_33);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_33, L_34);
		Expression_t1213 * L_35 = Assertion_get_FalseExpression_m5968(__this, /*hidden argument*/NULL);
		Object_t * L_36 = ___cmp;
		bool L_37 = ___reverse;
		NullCheck(L_35);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_35, L_36, L_37);
		Object_t * L_38 = ___cmp;
		LinkRef_t1192 * L_39 = V_2;
		NullCheck(L_38);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_38, L_39);
	}

IL_00be:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C" bool ExpressionAssertion_IsComplex_m5982 (ExpressionAssertion_t1223 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern "C" void Alternation__ctor_m5983 (Alternation_t1225 * __this, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m5931(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C" ExpressionCollection_t1212 * Alternation_get_Alternatives_m5984 (Alternation_t1225 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = CompositeExpression_get_Expressions_m5932(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern "C" void Alternation_AddAlternative_m5985 (Alternation_t1225 * __this, Expression_t1213 * ___e, const MethodInfo* method)
{
	{
		ExpressionCollection_t1212 * L_0 = Alternation_get_Alternatives_m5984(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_1 = ___e;
		NullCheck(L_0);
		ExpressionCollection_Add_m5924(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t1213_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void Alternation_Compile_m5986 (Alternation_t1225 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Expression_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(836);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t1192 * V_0 = {0};
	Expression_t1213 * V_1 = {0};
	Object_t * V_2 = {0};
	LinkRef_t1192 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1192 * L_1 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		ExpressionCollection_t1212 * L_2 = Alternation_get_Alternatives_m5984(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0018:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Expression_t1213 *)CastclassClass(L_5, Expression_t1213_il2cpp_TypeInfo_var));
			Object_t * L_6 = ___cmp;
			NullCheck(L_6);
			LinkRef_t1192 * L_7 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			Object_t * L_8 = ___cmp;
			LinkRef_t1192 * L_9 = V_3;
			NullCheck(L_8);
			InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(18 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_8, L_9);
			Expression_t1213 * L_10 = V_1;
			Object_t * L_11 = ___cmp;
			bool L_12 = ___reverse;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_10, L_11, L_12);
			Object_t * L_13 = ___cmp;
			LinkRef_t1192 * L_14 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_13, L_14);
			Object_t * L_15 = ___cmp;
			LinkRef_t1192 * L_16 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_15, L_16);
			Object_t * L_17 = ___cmp;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(26 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_17);
		}

IL_004e:
		{
			Object_t * L_18 = V_2;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0018;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x73, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_2;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_006b;
			}
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(94)
		}

IL_006b:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0073:
	{
		Object_t * L_23 = ___cmp;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_23);
		Object_t * L_24 = ___cmp;
		LinkRef_t1192 * L_25 = V_0;
		NullCheck(L_24);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_24, L_25);
		Object_t * L_26 = ___cmp;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(27 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_26);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern "C" void Alternation_GetWidth_m5987 (Alternation_t1225 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		ExpressionCollection_t1212 * L_2 = Alternation_get_Alternatives_m5984(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_2);
		CompositeExpression_GetWidth_m5933(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" void Literal__ctor_m5988 (Literal_t1224 * __this, String_t* ___str, bool ___ignore, const MethodInfo* method)
{
	{
		Expression__ctor_m5928(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str;
		__this->___str_0 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_1 = L_1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void Literal_CompileLiteral_m5989 (Object_t * __this /* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m478(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_2 = ___str;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m478(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_4 = ___cmp;
		String_t* L_5 = ___str;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m477(L_5, 0, /*hidden argument*/NULL);
		bool L_7 = ___ignore;
		bool L_8 = ___reverse;
		NullCheck(L_4);
		InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_4, L_6, 0, L_7, L_8);
		goto IL_0036;
	}

IL_002d:
	{
		Object_t * L_9 = ___cmp;
		String_t* L_10 = ___str;
		bool L_11 = ___ignore;
		bool L_12 = ___reverse;
		NullCheck(L_9);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern "C" void Literal_Compile_m5990 (Literal_t1224 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_0);
		Object_t * L_1 = ___cmp;
		bool L_2 = (__this->___ignore_1);
		bool L_3 = ___reverse;
		Literal_CompileLiteral_m5989(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C" void Literal_GetWidth_m5991 (Literal_t1224 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		String_t* L_2 = (__this->___str_0);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m478(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		V_0 = L_4;
		*((int32_t*)(L_1)) = (int32_t)L_4;
		int32_t L_5 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_5;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern TypeInfo* AnchorInfo_t1231_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t1231 * Literal_GetAnchorInfo_m5992 (Literal_t1224 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(837);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___str_0);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m478(L_0, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___str_0);
		bool L_3 = (__this->___ignore_1);
		AnchorInfo_t1231 * L_4 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6020(L_4, __this, 0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C" bool Literal_IsComplex_m5993 (Literal_t1224 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" void PositionAssertion__ctor_m5994 (PositionAssertion_t1226 * __this, uint16_t ___pos, const MethodInfo* method)
{
	{
		Expression__ctor_m5928(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___pos;
		__this->___pos_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void PositionAssertion_Compile_m5995 (PositionAssertion_t1226 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		uint16_t L_1 = (__this->___pos_0);
		NullCheck(L_0);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void PositionAssertion_GetWidth_m5996 (PositionAssertion_t1226 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 0;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C" bool PositionAssertion_IsComplex_m5997 (PositionAssertion_t1226 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern TypeInfo* AnchorInfo_t1231_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t1231 * PositionAssertion_GetAnchorInfo_m5998 (PositionAssertion_t1226 * __this, bool ___revers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(837);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = (__this->___pos_0);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002f;
	}

IL_0020:
	{
		uint16_t L_2 = (__this->___pos_0);
		AnchorInfo_t1231 * L_3 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6021(L_3, __this, 0, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002f:
	{
		AnchorInfo_t1231 * L_4 = (AnchorInfo_t1231 *)il2cpp_codegen_object_new (AnchorInfo_t1231_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6019(L_4, __this, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" void Reference__ctor_m5999 (Reference_t1227 * __this, bool ___ignore, const MethodInfo* method)
{
	{
		Expression__ctor_m5928(__this, /*hidden argument*/NULL);
		bool L_0 = ___ignore;
		__this->___ignore_1 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C" CapturingGroup_t1217 * Reference_get_CapturingGroup_m6000 (Reference_t1227 * __this, const MethodInfo* method)
{
	{
		CapturingGroup_t1217 * L_0 = (__this->___group_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
extern "C" void Reference_set_CapturingGroup_m6001 (Reference_t1227 * __this, CapturingGroup_t1217 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t1217 * L_0 = ___value;
		__this->___group_0 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C" bool Reference_get_IgnoreCase_m6002 (Reference_t1227 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern "C" void Reference_Compile_m6003 (Reference_t1227 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		CapturingGroup_t1217 * L_1 = (__this->___group_0);
		NullCheck(L_1);
		int32_t L_2 = CapturingGroup_get_Index_m5944(L_1, /*hidden argument*/NULL);
		bool L_3 = (__this->___ignore_1);
		bool L_4 = ___reverse;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, bool, bool >::Invoke(14 /* System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern "C" void Reference_GetWidth_m6004 (Reference_t1227 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)2147483647);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C" bool Reference_IsComplex_m6005 (Reference_t1227 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern "C" void BackslashNumber__ctor_m6006 (BackslashNumber_t1228 * __this, bool ___ignore, bool ___ecma, const MethodInfo* method)
{
	{
		bool L_0 = ___ignore;
		Reference__ctor_m5999(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___ecma;
		__this->___ecma_3 = L_1;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern TypeInfo* CapturingGroup_t1217_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool BackslashNumber_ResolveReference_m6007 (BackslashNumber_t1228 * __this, String_t* ___num_str, Hashtable_t985 * ___groups, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapturingGroup_t1217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(823);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->___ecma_3);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0014:
	{
		Hashtable_t985 * L_1 = ___groups;
		String_t* L_2 = ___num_str;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = String_Substring_m2501(L_2, 0, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_4);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = ___num_str;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m478(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		Hashtable_t985 * L_12 = ___groups;
		String_t* L_13 = ___num_str;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m2501(L_13, 0, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, L_15);
		Reference_set_CapturingGroup_m6001(__this, ((CapturingGroup_t1217 *)CastclassClass(L_16, CapturingGroup_t1217_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_17 = ___num_str;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m2525(L_17, L_18, /*hidden argument*/NULL);
		__this->___literal_2 = L_19;
		return 1;
	}

IL_0067:
	{
		goto IL_007a;
	}

IL_006c:
	{
		String_t* L_20 = ___num_str;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m478(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		V_2 = 0;
		String_t* L_22 = ___num_str;
		int32_t L_23 = Parser_ParseOctal_m5878(NULL /*static, unused*/, L_22, (&V_2), /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_008e;
		}
	}
	{
		return 0;
	}

IL_008e:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)255))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_26 = (__this->___ecma_3);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27/(int32_t)8));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28-(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)255)));
		int32_t L_30 = V_3;
		uint16_t L_31 = (((uint16_t)L_30));
		Object_t * L_32 = Box(Char_t266_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33 = ___num_str;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		String_t* L_35 = String_Substring_m2525(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m606(NULL /*static, unused*/, L_32, L_35, /*hidden argument*/NULL);
		__this->___literal_2 = L_36;
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern "C" void BackslashNumber_Compile_m6008 (BackslashNumber_t1228 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	{
		CapturingGroup_t1217 * L_0 = Reference_get_CapturingGroup_m6000(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___cmp;
		bool L_2 = ___reverse;
		Reference_Compile_m6003(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		String_t* L_3 = (__this->___literal_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = (__this->___literal_2);
		Object_t * L_5 = ___cmp;
		bool L_6 = Reference_get_IgnoreCase_m6002(__this, /*hidden argument*/NULL);
		bool L_7 = ___reverse;
		Literal_CompileLiteral_m5989(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArrayMethodDeclarations.h"
extern TypeInfo* IntervalCollection_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* BitArray_t1230_il2cpp_TypeInfo_var;
extern "C" void CharacterClass__ctor_m6009 (CharacterClass_t1229 * __this, bool ___negate, bool ___ignore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntervalCollection_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(820);
		BitArray_t1230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(840);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Expression__ctor_m5928(__this, /*hidden argument*/NULL);
		bool L_0 = ___negate;
		__this->___negate_1 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_2 = L_1;
		IntervalCollection_t1209 * L_2 = (IntervalCollection_t1209 *)il2cpp_codegen_object_new (IntervalCollection_t1209_il2cpp_TypeInfo_var);
		IntervalCollection__ctor_m5865(L_2, /*hidden argument*/NULL);
		__this->___intervals_5 = L_2;
		V_0 = ((int32_t)144);
		int32_t L_3 = V_0;
		BitArray_t1230 * L_4 = (BitArray_t1230 *)il2cpp_codegen_object_new (BitArray_t1230_il2cpp_TypeInfo_var);
		BitArray__ctor_m6175(L_4, L_3, /*hidden argument*/NULL);
		__this->___pos_cats_3 = L_4;
		int32_t L_5 = V_0;
		BitArray_t1230 * L_6 = (BitArray_t1230 *)il2cpp_codegen_object_new (BitArray_t1230_il2cpp_TypeInfo_var);
		BitArray__ctor_m6175(L_6, L_5, /*hidden argument*/NULL);
		__this->___neg_cats_4 = L_6;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
extern "C" void CharacterClass__ctor_m6010 (CharacterClass_t1229 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method)
{
	{
		CharacterClass__ctor_m6009(__this, 0, 0, /*hidden argument*/NULL);
		uint16_t L_0 = ___cat;
		bool L_1 = ___negate;
		CharacterClass_AddCategory_m6012(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern TypeInfo* CharacterClass_t1229_il2cpp_TypeInfo_var;
extern "C" void CharacterClass__cctor_m6011 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t1229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		s_Il2CppMethodIntialized = true;
	}
	{
		Interval_t1205  L_0 = {0};
		Interval__ctor_m5844(&L_0, ((int32_t)65), ((int32_t)90), /*hidden argument*/NULL);
		((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass_AddCategory_m6012 (CharacterClass_t1229 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint16_t L_0 = ___cat;
		V_0 = L_0;
		bool L_1 = ___negate;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		BitArray_t1230 * L_2 = (__this->___neg_cats_4);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BitArray_set_Item_m6176(L_2, L_3, 1, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001a:
	{
		BitArray_t1230 * L_4 = (__this->___pos_cats_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BitArray_set_Item_m6176(L_4, L_5, 1, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" void CharacterClass_AddCharacter_m6013 (CharacterClass_t1229 * __this, uint16_t ___c, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___c;
		uint16_t L_1 = ___c;
		CharacterClass_AddRange_m6014(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern TypeInfo* CharacterClass_t1229_il2cpp_TypeInfo_var;
extern "C" void CharacterClass_AddRange_m6014 (CharacterClass_t1229 * __this, uint16_t ___lo, uint16_t ___hi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t1229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		s_Il2CppMethodIntialized = true;
	}
	Interval_t1205  V_0 = {0};
	Interval_t1205  V_1 = {0};
	{
		uint16_t L_0 = ___lo;
		uint16_t L_1 = ___hi;
		Interval__ctor_m5844((&V_0), L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___ignore_2);
		if (!L_2)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1229_il2cpp_TypeInfo_var);
		Interval_t1205  L_3 = V_0;
		bool L_4 = Interval_Intersects_m5854((&((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_5 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1229_il2cpp_TypeInfo_var);
		int32_t L_6 = ((&((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1229_il2cpp_TypeInfo_var);
		int32_t L_7 = ((&((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		int32_t L_8 = ((&V_0)->___high_1);
		Interval__ctor_m5844((&V_1), ((int32_t)((int32_t)L_7+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_8+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		int32_t L_9 = ((&((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		(&V_0)->___high_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_00a1;
	}

IL_0070:
	{
		int32_t L_10 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1229_il2cpp_TypeInfo_var);
		int32_t L_11 = ((&((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___high_1);
		Interval__ctor_m5844((&V_1), ((int32_t)((int32_t)L_10+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_11+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		int32_t L_12 = ((&((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___high_1);
		(&V_0)->___low_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_00a1:
	{
		IntervalCollection_t1209 * L_13 = (__this->___intervals_5);
		Interval_t1205  L_14 = V_1;
		NullCheck(L_13);
		IntervalCollection_Add_m5867(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00e2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1229_il2cpp_TypeInfo_var);
		Interval_t1205  L_15 = V_0;
		bool L_16 = Interval_Contains_m5852((&((CharacterClass_t1229_StaticFields*)CharacterClass_t1229_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e2;
		}
	}
	{
		Interval_t1205 * L_17 = (&V_0);
		int32_t L_18 = (L_17->___high_1);
		L_17->___high_1 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)32)));
		Interval_t1205 * L_19 = (&V_0);
		int32_t L_20 = (L_19->___low_0);
		L_19->___low_0 = ((int32_t)((int32_t)L_20+(int32_t)((int32_t)32)));
	}

IL_00e2:
	{
		IntervalCollection_t1209 * L_21 = (__this->___intervals_5);
		Interval_t1205  L_22 = V_0;
		NullCheck(L_21);
		IntervalCollection_Add_m5867(L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern TypeInfo* CostDelegate_t1208_il2cpp_TypeInfo_var;
extern TypeInfo* ICompiler_t1249_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Interval_t1205_il2cpp_TypeInfo_var;
extern TypeInfo* BitArray_t1230_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern const MethodInfo* CharacterClass_GetIntervalCost_m6018_MethodInfo_var;
extern "C" void CharacterClass_Compile_m6015 (CharacterClass_t1229 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CostDelegate_t1208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(841);
		ICompiler_t1249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(802);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Interval_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(818);
		BitArray_t1230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(840);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		CharacterClass_GetIntervalCost_m6018_MethodInfo_var = il2cpp_codegen_method_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	IntervalCollection_t1209 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	LinkRef_t1192 * V_3 = {0};
	Interval_t1205  V_4 = {0};
	Object_t * V_5 = {0};
	BitArray_t1230 * V_6 = {0};
	Interval_t1205  V_7 = {0};
	Object_t * V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IntervalCollection_t1209 * L_0 = (__this->___intervals_5);
		IntPtr_t L_1 = { (void*)CharacterClass_GetIntervalCost_m6018_MethodInfo_var };
		CostDelegate_t1208 * L_2 = (CostDelegate_t1208 *)il2cpp_codegen_object_new (CostDelegate_t1208_il2cpp_TypeInfo_var);
		CostDelegate__ctor_m5861(L_2, NULL, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IntervalCollection_t1209 * L_3 = IntervalCollection_GetMetaCollection_m5869(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IntervalCollection_t1209 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count() */, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0050;
	}

IL_0026:
	{
		BitArray_t1230 * L_6 = (__this->___pos_cats_3);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		bool L_8 = BitArray_get_Item_m6171(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		BitArray_t1230 * L_9 = (__this->___neg_cats_4);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = BitArray_get_Item_m6171(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_2;
		BitArray_t1230 * L_15 = (__this->___pos_cats_3);
		NullCheck(L_15);
		int32_t L_16 = BitArray_get_Length_m6170(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		LinkRef_t1192 * L_19 = (LinkRef_t1192 *)InterfaceFuncInvoker0< LinkRef_t1192 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t1192 * L_22 = V_3;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(22 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_007d:
	{
		IntervalCollection_t1209 * L_23 = V_0;
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ac;
		}

IL_008a:
		{
			Object_t * L_25 = V_5;
			NullCheck(L_25);
			Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_25);
			V_4 = ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_26, Interval_t1205_il2cpp_TypeInfo_var))));
			bool L_27 = Interval_get_IsDiscontiguous_m5846((&V_4), /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_015d;
			}
		}

IL_00a4:
		{
			int32_t L_28 = Interval_get_Size_m5849((&V_4), /*hidden argument*/NULL);
			BitArray_t1230 * L_29 = (BitArray_t1230 *)il2cpp_codegen_object_new (BitArray_t1230_il2cpp_TypeInfo_var);
			BitArray__ctor_m6175(L_29, L_28, /*hidden argument*/NULL);
			V_6 = L_29;
			IntervalCollection_t1209 * L_30 = (__this->___intervals_5);
			NullCheck(L_30);
			Object_t * L_31 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_30);
			V_8 = L_31;
		}

IL_00bf:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0114;
			}

IL_00c4:
			{
				Object_t * L_32 = V_8;
				NullCheck(L_32);
				Object_t * L_33 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_32);
				V_7 = ((*(Interval_t1205 *)((Interval_t1205 *)UnBox (L_33, Interval_t1205_il2cpp_TypeInfo_var))));
				Interval_t1205  L_34 = V_7;
				bool L_35 = Interval_Contains_m5852((&V_4), L_34, /*hidden argument*/NULL);
				if (!L_35)
				{
					goto IL_0114;
				}
			}

IL_00e0:
			{
				int32_t L_36 = ((&V_7)->___low_0);
				V_9 = L_36;
				goto IL_0106;
			}

IL_00ee:
			{
				BitArray_t1230 * L_37 = V_6;
				int32_t L_38 = V_9;
				int32_t L_39 = ((&V_4)->___low_0);
				NullCheck(L_37);
				BitArray_set_Item_m6176(L_37, ((int32_t)((int32_t)L_38-(int32_t)L_39)), 1, /*hidden argument*/NULL);
				int32_t L_40 = V_9;
				V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
			}

IL_0106:
			{
				int32_t L_41 = V_9;
				int32_t L_42 = ((&V_7)->___high_1);
				if ((((int32_t)L_41) <= ((int32_t)L_42)))
				{
					goto IL_00ee;
				}
			}

IL_0114:
			{
				Object_t * L_43 = V_8;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00c4;
				}
			}

IL_0120:
			{
				IL2CPP_LEAVE(0x13B, FINALLY_0125);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_0125;
		}

FINALLY_0125:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_8;
				V_11 = ((Object_t *)IsInst(L_45, IDisposable_t157_il2cpp_TypeInfo_var));
				Object_t * L_46 = V_11;
				if (L_46)
				{
					goto IL_0133;
				}
			}

IL_0132:
			{
				IL2CPP_END_FINALLY(293)
			}

IL_0133:
			{
				Object_t * L_47 = V_11;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_47);
				IL2CPP_END_FINALLY(293)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(293)
		{
			IL2CPP_JUMP_TBL(0x13B, IL_013b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_013b:
		{
			Object_t * L_48 = ___cmp;
			int32_t L_49 = ((&V_4)->___low_0);
			BitArray_t1230 * L_50 = V_6;
			bool L_51 = (__this->___negate_1);
			bool L_52 = (__this->___ignore_2);
			bool L_53 = ___reverse;
			NullCheck(L_48);
			InterfaceActionInvoker5< uint16_t, BitArray_t1230 *, bool, bool, bool >::Invoke(7 /* System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_48, (((uint16_t)L_49)), L_50, L_51, L_52, L_53);
			goto IL_01ac;
		}

IL_015d:
		{
			bool L_54 = Interval_get_IsSingleton_m5847((&V_4), /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_0189;
			}
		}

IL_0169:
		{
			Object_t * L_55 = ___cmp;
			int32_t L_56 = ((&V_4)->___low_0);
			bool L_57 = (__this->___negate_1);
			bool L_58 = (__this->___ignore_2);
			bool L_59 = ___reverse;
			NullCheck(L_55);
			InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_55, (((uint16_t)L_56)), L_57, L_58, L_59);
			goto IL_01ac;
		}

IL_0189:
		{
			Object_t * L_60 = ___cmp;
			int32_t L_61 = ((&V_4)->___low_0);
			int32_t L_62 = ((&V_4)->___high_1);
			bool L_63 = (__this->___negate_1);
			bool L_64 = (__this->___ignore_2);
			bool L_65 = ___reverse;
			NullCheck(L_60);
			InterfaceActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(6 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_60, (((uint16_t)L_61)), (((uint16_t)L_62)), L_63, L_64, L_65);
		}

IL_01ac:
		{
			Object_t * L_66 = V_5;
			NullCheck(L_66);
			bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_66);
			if (L_67)
			{
				goto IL_008a;
			}
		}

IL_01b8:
		{
			IL2CPP_LEAVE(0x1D3, FINALLY_01bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_01bd;
	}

FINALLY_01bd:
	{ // begin finally (depth: 1)
		{
			Object_t * L_68 = V_5;
			V_12 = ((Object_t *)IsInst(L_68, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_69 = V_12;
			if (L_69)
			{
				goto IL_01cb;
			}
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(445)
		}

IL_01cb:
		{
			Object_t * L_70 = V_12;
			NullCheck(L_70);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_70);
			IL2CPP_END_FINALLY(445)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(445)
	{
		IL2CPP_JUMP_TBL(0x1D3, IL_01d3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_01d3:
	{
		V_10 = 0;
		goto IL_024f;
	}

IL_01db:
	{
		BitArray_t1230 * L_71 = (__this->___pos_cats_3);
		int32_t L_72 = V_10;
		NullCheck(L_71);
		bool L_73 = BitArray_get_Item_m6171(L_71, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0227;
		}
	}
	{
		BitArray_t1230 * L_74 = (__this->___neg_cats_4);
		int32_t L_75 = V_10;
		NullCheck(L_74);
		bool L_76 = BitArray_get_Item_m6171(L_74, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0212;
		}
	}
	{
		Object_t * L_77 = ___cmp;
		bool L_78 = (__this->___negate_1);
		bool L_79 = ___reverse;
		NullCheck(L_77);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_77, 2, L_78, L_79);
		goto IL_0222;
	}

IL_0212:
	{
		Object_t * L_80 = ___cmp;
		int32_t L_81 = V_10;
		bool L_82 = (__this->___negate_1);
		bool L_83 = ___reverse;
		NullCheck(L_80);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_80, (((uint16_t)L_81)), L_82, L_83);
	}

IL_0222:
	{
		goto IL_0249;
	}

IL_0227:
	{
		BitArray_t1230 * L_84 = (__this->___neg_cats_4);
		int32_t L_85 = V_10;
		NullCheck(L_84);
		bool L_86 = BitArray_get_Item_m6171(L_84, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0249;
		}
	}
	{
		Object_t * L_87 = ___cmp;
		int32_t L_88 = V_10;
		bool L_89 = (__this->___negate_1);
		bool L_90 = ___reverse;
		NullCheck(L_87);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(5 /* System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_87, (((uint16_t)L_88)), L_89, L_90);
	}

IL_0249:
	{
		int32_t L_91 = V_10;
		V_10 = ((int32_t)((int32_t)L_91+(int32_t)1));
	}

IL_024f:
	{
		int32_t L_92 = V_10;
		BitArray_t1230 * L_93 = (__this->___pos_cats_3);
		NullCheck(L_93);
		int32_t L_94 = BitArray_get_Length_m6170(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_95 = V_1;
		if ((((int32_t)L_95) <= ((int32_t)1)))
		{
			goto IL_028b;
		}
	}
	{
		bool L_96 = (__this->___negate_1);
		if (!L_96)
		{
			goto IL_027e;
		}
	}
	{
		Object_t * L_97 = ___cmp;
		NullCheck(L_97);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_97);
		goto IL_0284;
	}

IL_027e:
	{
		Object_t * L_98 = ___cmp;
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t1249_il2cpp_TypeInfo_var, L_98);
	}

IL_0284:
	{
		Object_t * L_99 = ___cmp;
		LinkRef_t1192 * L_100 = V_3;
		NullCheck(L_99);
		InterfaceActionInvoker1< LinkRef_t1192 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1249_il2cpp_TypeInfo_var, L_99, L_100);
	}

IL_028b:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C" void CharacterClass_GetWidth_m6016 (CharacterClass_t1229 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 1;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C" bool CharacterClass_IsComplex_m6017 (CharacterClass_t1229 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
extern "C" double CharacterClass_GetIntervalCost_m6018 (Object_t * __this /* static, unused */, Interval_t1205  ___i, const MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsDiscontiguous_m5846((&___i), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = Interval_get_Size_m5849((&___i), /*hidden argument*/NULL);
		return (((double)((int32_t)((int32_t)3+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)((int32_t)15)))>>(int32_t)4))))));
	}

IL_001c:
	{
		bool L_2 = Interval_get_IsSingleton_m5847((&___i), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		return (2.0);
	}

IL_0032:
	{
		return (3.0);
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AnchorInfo__ctor_m6019 (AnchorInfo_t1231 * __this, Expression_t1213 * ___expr, int32_t ___width, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		__this->___offset_2 = 0;
		int32_t L_1 = ___width;
		__this->___width_4 = L_1;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" void AnchorInfo__ctor_m6020 (AnchorInfo_t1231 * __this, Expression_t1213 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, const MethodInfo* method)
{
	AnchorInfo_t1231 * G_B2_0 = {0};
	AnchorInfo_t1231 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	AnchorInfo_t1231 * G_B3_1 = {0};
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		bool L_3 = ___ignore;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___str;
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m1063(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002f:
	{
		String_t* L_6 = ___str;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___str_3 = G_B3_0;
		bool L_7 = ___ignore;
		__this->___ignore_5 = L_7;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
extern "C" void AnchorInfo__ctor_m6021 (AnchorInfo_t1231 * __this, Expression_t1213 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Expression_t1213 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		uint16_t L_3 = ___pos;
		__this->___pos_1 = L_3;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C" int32_t AnchorInfo_get_Offset_m6022 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___offset_2);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C" int32_t AnchorInfo_get_Width_m6023 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C" int32_t AnchorInfo_get_Length_m6024 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___str_3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = (__this->___str_3);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m478(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C" bool AnchorInfo_get_IsUnknownWidth_m6025 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return ((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern "C" bool AnchorInfo_get_IsComplete_m6026 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = AnchorInfo_get_Length_m6024(__this, /*hidden argument*/NULL);
		int32_t L_1 = AnchorInfo_get_Width_m6023(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C" String_t* AnchorInfo_get_Substring_m6027 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C" bool AnchorInfo_get_IgnoreCase_m6028 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_5);
		return L_0;
	}
}
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C" uint16_t AnchorInfo_get_Position_m6029 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C" bool AnchorInfo_get_IsSubstring_m6030 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C" bool AnchorInfo_get_IsPosition_m6031 (AnchorInfo_t1231 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern "C" Interval_t1205  AnchorInfo_GetInterval_m6032 (AnchorInfo_t1231 * __this, int32_t ___start, const MethodInfo* method)
{
	{
		bool L_0 = AnchorInfo_get_IsSubstring_m6030(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Interval_t1205  L_1 = Interval_get_Empty_m5845(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = ___start;
		int32_t L_3 = AnchorInfo_get_Offset_m6022(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___start;
		int32_t L_5 = AnchorInfo_get_Offset_m6022(__this, /*hidden argument*/NULL);
		int32_t L_6 = AnchorInfo_get_Length_m6024(__this, /*hidden argument*/NULL);
		Interval_t1205  L_7 = {0};
		Interval__ctor_m5844(&L_7, ((int32_t)((int32_t)L_2+(int32_t)L_3)), ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)L_6))-(int32_t)1)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
// System.UriParser
#include "System_System_UriParser.h"
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
// System.Void System.DefaultUriParser::.ctor()
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern TypeInfo* UriParser_t1233_il2cpp_TypeInfo_var;
extern "C" void DefaultUriParser__ctor_m6033 (DefaultUriParser_t1232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
		UriParser__ctor_m6087(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.DefaultUriParser::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* UriParser_t1233_il2cpp_TypeInfo_var;
extern "C" void DefaultUriParser__ctor_m6034 (DefaultUriParser_t1232 * __this, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
		UriParser__ctor_m6087(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___scheme;
		((UriParser_t1233 *)__this)->___scheme_name_2 = L_0;
		return;
	}
}
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UriScheme__ctor_m6035 (UriScheme_t1235 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		__this->___scheme_0 = L_0;
		String_t* L_1 = ___d;
		__this->___delimiter_1 = L_1;
		int32_t L_2 = ___p;
		__this->___defaultPort_2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t1235_marshal(const UriScheme_t1235& unmarshaled, UriScheme_t1235_marshaled& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.___scheme_0);
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.___delimiter_1);
	marshaled.___defaultPort_2 = unmarshaled.___defaultPort_2;
}
extern "C" void UriScheme_t1235_marshal_back(const UriScheme_t1235_marshaled& marshaled, UriScheme_t1235& unmarshaled)
{
	unmarshaled.___scheme_0 = il2cpp_codegen_marshal_string_result(marshaled.___scheme_0);
	unmarshaled.___delimiter_1 = il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1);
	unmarshaled.___defaultPort_2 = marshaled.___defaultPort_2;
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t1235_marshal_cleanup(UriScheme_t1235_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// System.Uri
#include "System_System_Uri.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriKind
#include "System_System_UriKind.h"
// System.UriFormatException
#include "System_System_UriFormatException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.UriPartial
#include "System_System_UriPartial.h"
// System.Net.IPAddress
#include "System_System_Net_IPAddress.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6Address.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Net.IPAddress
#include "System_System_Net_IPAddressMethodDeclarations.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6AddressMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Void System.Uri::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern "C" void Uri__ctor_m4076 (Uri_t701 * __this, String_t* ___uriString, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uriString;
		Uri__ctor_m6037(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral1177;
extern "C" void Uri__ctor_m6036 (Uri_t701 * __this, SerializationInfo_t818 * ___serializationInfo, StreamingContext_t819  ___streamingContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1177 = il2cpp_codegen_string_literal_from_index(1177);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t818 * L_0 = ___serializationInfo;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m6123(L_0, _stringLiteral1177, /*hidden argument*/NULL);
		Uri__ctor_m6037(__this, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1237_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1178;
extern "C" void Uri__ctor_m6037 (Uri_t701 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		UriFormatException_t1237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(843);
		_stringLiteral1178 = il2cpp_codegen_string_literal_from_index(1178);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		bool L_6 = ___dontEscape;
		__this->___userEscaped_14 = L_6;
		String_t* L_7 = ___uriString;
		__this->___source_2 = L_7;
		Uri_ParseUri_m6065(__this, 1, /*hidden argument*/NULL);
		bool L_8 = (__this->___isAbsoluteUri_12);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral1178, L_9, /*hidden argument*/NULL);
		UriFormatException_t1237 * L_11 = (UriFormatException_t1237 *)il2cpp_codegen_object_new (UriFormatException_t1237_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6084(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0087:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.String)
// System.Uri
#include "System_System_Uri.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri__ctor_m4078 (Uri_t701 * __this, Uri_t701 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Uri_t701 * L_6 = ___baseUri;
		String_t* L_7 = ___relativeUri;
		Uri_Merge_m6040(__this, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.cctor()
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* UriSchemeU5BU5D_t1236_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral386;
extern Il2CppCodeGenString* _stringLiteral975;
extern Il2CppCodeGenString* _stringLiteral1030;
extern Il2CppCodeGenString* _stringLiteral1032;
extern Il2CppCodeGenString* _stringLiteral1179;
extern Il2CppCodeGenString* _stringLiteral973;
extern Il2CppCodeGenString* _stringLiteral972;
extern Il2CppCodeGenString* _stringLiteral1180;
extern Il2CppCodeGenString* _stringLiteral1181;
extern Il2CppCodeGenString* _stringLiteral1182;
extern Il2CppCodeGenString* _stringLiteral1183;
extern Il2CppCodeGenString* _stringLiteral1184;
extern Il2CppCodeGenString* _stringLiteral470;
extern "C" void Uri__cctor_m6038 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		UriSchemeU5BU5D_t1236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(844);
		_stringLiteral386 = il2cpp_codegen_string_literal_from_index(386);
		_stringLiteral975 = il2cpp_codegen_string_literal_from_index(975);
		_stringLiteral1030 = il2cpp_codegen_string_literal_from_index(1030);
		_stringLiteral1032 = il2cpp_codegen_string_literal_from_index(1032);
		_stringLiteral1179 = il2cpp_codegen_string_literal_from_index(1179);
		_stringLiteral973 = il2cpp_codegen_string_literal_from_index(973);
		_stringLiteral972 = il2cpp_codegen_string_literal_from_index(972);
		_stringLiteral1180 = il2cpp_codegen_string_literal_from_index(1180);
		_stringLiteral1181 = il2cpp_codegen_string_literal_from_index(1181);
		_stringLiteral1182 = il2cpp_codegen_string_literal_from_index(1182);
		_stringLiteral1183 = il2cpp_codegen_string_literal_from_index(1183);
		_stringLiteral1184 = il2cpp_codegen_string_literal_from_index(1184);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19 = _stringLiteral386;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20 = _stringLiteral975;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21 = _stringLiteral1030;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22 = _stringLiteral1032;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23 = _stringLiteral1179;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24 = _stringLiteral973;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25 = _stringLiteral972;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26 = _stringLiteral1180;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27 = _stringLiteral1181;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28 = _stringLiteral1182;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_29 = _stringLiteral1183;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_30 = _stringLiteral1184;
		UriSchemeU5BU5D_t1236* L_0 = ((UriSchemeU5BU5D_t1236*)SZArrayNew(UriSchemeU5BU5D_t1236_il2cpp_TypeInfo_var, 8));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		String_t* L_1 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		String_t* L_2 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1235  L_3 = {0};
		UriScheme__ctor_m6035(&L_3, L_1, L_2, ((int32_t)80), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_0, 0, sizeof(UriScheme_t1235 ))) = L_3;
		UriSchemeU5BU5D_t1236* L_4 = L_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		String_t* L_5 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		String_t* L_6 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1235  L_7 = {0};
		UriScheme__ctor_m6035(&L_7, L_5, L_6, ((int32_t)443), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_4, 1, sizeof(UriScheme_t1235 ))) = L_7;
		UriSchemeU5BU5D_t1236* L_8 = L_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		String_t* L_9 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		String_t* L_10 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1235  L_11 = {0};
		UriScheme__ctor_m6035(&L_11, L_9, L_10, ((int32_t)21), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_8, 2, sizeof(UriScheme_t1235 ))) = L_11;
		UriSchemeU5BU5D_t1236* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		String_t* L_13 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_14 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1235  L_15 = {0};
		UriScheme__ctor_m6035(&L_15, L_13, L_14, (-1), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_12, 3, sizeof(UriScheme_t1235 ))) = L_15;
		UriSchemeU5BU5D_t1236* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		String_t* L_17 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		UriScheme_t1235  L_18 = {0};
		UriScheme__ctor_m6035(&L_18, L_17, _stringLiteral470, ((int32_t)25), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_16, 4, sizeof(UriScheme_t1235 ))) = L_18;
		UriSchemeU5BU5D_t1236* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		String_t* L_20 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		UriScheme_t1235  L_21 = {0};
		UriScheme__ctor_m6035(&L_21, L_20, _stringLiteral470, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_19, 5, sizeof(UriScheme_t1235 ))) = L_21;
		UriSchemeU5BU5D_t1236* L_22 = L_19;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 6);
		String_t* L_23 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		String_t* L_24 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1235  L_25 = {0};
		UriScheme__ctor_m6035(&L_25, L_23, L_24, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_22, 6, sizeof(UriScheme_t1235 ))) = L_25;
		UriSchemeU5BU5D_t1236* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 7);
		String_t* L_27 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		String_t* L_28 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1235  L_29 = {0};
		UriScheme__ctor_m6035(&L_29, L_27, L_28, ((int32_t)70), /*hidden argument*/NULL);
		*((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_26, 7, sizeof(UriScheme_t1235 ))) = L_29;
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___schemes_31 = L_26;
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppCodeGenString* _stringLiteral1177;
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m6039 (Uri_t701 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1177 = il2cpp_codegen_string_literal_from_index(1177);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t818 * L_0 = ___info;
		String_t* L_1 = Uri_get_AbsoluteUri_m6041(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5151(L_0, _stringLiteral1177, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::Merge(System.Uri,System.String)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1185;
extern Il2CppCodeGenString* _stringLiteral1186;
extern Il2CppCodeGenString* _stringLiteral1187;
extern Il2CppCodeGenString* _stringLiteral1188;
extern Il2CppCodeGenString* _stringLiteral1189;
extern Il2CppCodeGenString* _stringLiteral1190;
extern "C" void Uri_Merge_m6040 (Uri_t701 * __this, Uri_t701 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral1185 = il2cpp_codegen_string_literal_from_index(1185);
		_stringLiteral1186 = il2cpp_codegen_string_literal_from_index(1186);
		_stringLiteral1187 = il2cpp_codegen_string_literal_from_index(1187);
		_stringLiteral1188 = il2cpp_codegen_string_literal_from_index(1188);
		_stringLiteral1189 = il2cpp_codegen_string_literal_from_index(1189);
		_stringLiteral1190 = il2cpp_codegen_string_literal_from_index(1190);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Uri_t701 * L_0 = ___baseUri;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m6082(NULL /*static, unused*/, L_0, (Uri_t701 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_2 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_2, _stringLiteral1185, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Uri_t701 * L_3 = ___baseUri;
		NullCheck(L_3);
		bool L_4 = Uri_get_IsAbsoluteUri_m6047(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_5 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_5, _stringLiteral1185, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002d:
	{
		String_t* L_6 = ___relativeUri;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___relativeUri = L_7;
	}

IL_003a:
	{
		String_t* L_8 = ___relativeUri;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m478(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_10 = ___relativeUri;
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m477(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12 = ___relativeUri;
		NullCheck(L_12);
		uint16_t L_13 = String_get_Chars_m477(L_12, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = ___relativeUri;
		__this->___source_2 = L_14;
		Uri_ParseUri_m6065(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_0071:
	{
		String_t* L_15 = ___relativeUri;
		NullCheck(L_15);
		int32_t L_16 = String_IndexOf_m2555(L_15, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_18 = ___relativeUri;
		CharU5BU5D_t165* L_19 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 3));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_19, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)47);
		CharU5BU5D_t165* L_20 = L_19;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_20, 1, sizeof(uint16_t))) = (uint16_t)((int32_t)92);
		CharU5BU5D_t165* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_21, 2, sizeof(uint16_t))) = (uint16_t)((int32_t)63);
		NullCheck(L_18);
		int32_t L_22 = String_IndexOfAny_m6177(L_18, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}

IL_00ab:
	{
		Uri_t701 * L_26 = ___baseUri;
		NullCheck(L_26);
		String_t* L_27 = Uri_get_Scheme_m6046(L_26, /*hidden argument*/NULL);
		String_t* L_28 = ___relativeUri;
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_30 = String_CompareOrdinal_m6178(NULL /*static, unused*/, L_27, 0, L_28, 0, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ed;
		}
	}
	{
		Uri_t701 * L_31 = ___baseUri;
		NullCheck(L_31);
		String_t* L_32 = Uri_get_Scheme_m6046(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_33 = Uri_IsPredefinedScheme_m6079(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_34 = ___relativeUri;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m478(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)((int32_t)L_36+(int32_t)1)))))
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_37 = ___relativeUri;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m477(L_37, ((int32_t)((int32_t)L_38+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00fc;
		}
	}

IL_00ed:
	{
		String_t* L_40 = ___relativeUri;
		__this->___source_2 = L_40;
		Uri_ParseUri_m6065(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_00fc:
	{
		String_t* L_41 = ___relativeUri;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2525(L_41, ((int32_t)((int32_t)L_42+(int32_t)1)), /*hidden argument*/NULL);
		___relativeUri = L_43;
	}

IL_0107:
	{
		Uri_t701 * L_44 = ___baseUri;
		NullCheck(L_44);
		String_t* L_45 = (L_44->___scheme_3);
		__this->___scheme_3 = L_45;
		Uri_t701 * L_46 = ___baseUri;
		NullCheck(L_46);
		String_t* L_47 = (L_46->___host_4);
		__this->___host_4 = L_47;
		Uri_t701 * L_48 = ___baseUri;
		NullCheck(L_48);
		int32_t L_49 = (L_48->___port_5);
		__this->___port_5 = L_49;
		Uri_t701 * L_50 = ___baseUri;
		NullCheck(L_50);
		String_t* L_51 = (L_50->___userinfo_9);
		__this->___userinfo_9 = L_51;
		Uri_t701 * L_52 = ___baseUri;
		NullCheck(L_52);
		bool L_53 = (L_52->___isUnc_10);
		__this->___isUnc_10 = L_53;
		Uri_t701 * L_54 = ___baseUri;
		NullCheck(L_54);
		bool L_55 = (L_54->___isUnixFilePath_1);
		__this->___isUnixFilePath_1 = L_55;
		Uri_t701 * L_56 = ___baseUri;
		NullCheck(L_56);
		bool L_57 = (L_56->___isOpaquePart_11);
		__this->___isOpaquePart_11 = L_57;
		String_t* L_58 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_60 = String_op_Equality_m421(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0190;
		}
	}
	{
		Uri_t701 * L_61 = ___baseUri;
		NullCheck(L_61);
		String_t* L_62 = (L_61->___path_6);
		__this->___path_6 = L_62;
		Uri_t701 * L_63 = ___baseUri;
		NullCheck(L_63);
		String_t* L_64 = (L_63->___query_7);
		__this->___query_7 = L_64;
		Uri_t701 * L_65 = ___baseUri;
		NullCheck(L_65);
		String_t* L_66 = (L_65->___fragment_8);
		__this->___fragment_8 = L_66;
		return;
	}

IL_0190:
	{
		String_t* L_67 = ___relativeUri;
		NullCheck(L_67);
		int32_t L_68 = String_IndexOf_m2555(L_67, ((int32_t)35), /*hidden argument*/NULL);
		V_0 = L_68;
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		bool L_70 = (__this->___userEscaped_14);
		if (!L_70)
		{
			goto IL_01bd;
		}
	}
	{
		String_t* L_71 = ___relativeUri;
		int32_t L_72 = V_0;
		NullCheck(L_71);
		String_t* L_73 = String_Substring_m2525(L_71, L_72, /*hidden argument*/NULL);
		__this->___fragment_8 = L_73;
		goto IL_01db;
	}

IL_01bd:
	{
		String_t* L_74 = ___relativeUri;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		String_t* L_76 = String_Substring_m2525(L_74, ((int32_t)((int32_t)L_75+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_77 = Uri_EscapeString_m6063(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral1186, L_77, /*hidden argument*/NULL);
		__this->___fragment_8 = L_78;
	}

IL_01db:
	{
		String_t* L_79 = ___relativeUri;
		int32_t L_80 = V_0;
		NullCheck(L_79);
		String_t* L_81 = String_Substring_m2501(L_79, 0, L_80, /*hidden argument*/NULL);
		___relativeUri = L_81;
	}

IL_01e5:
	{
		String_t* L_82 = ___relativeUri;
		NullCheck(L_82);
		int32_t L_83 = String_IndexOf_m2555(L_82, ((int32_t)63), /*hidden argument*/NULL);
		V_0 = L_83;
		int32_t L_84 = V_0;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_0228;
		}
	}
	{
		String_t* L_85 = ___relativeUri;
		int32_t L_86 = V_0;
		NullCheck(L_85);
		String_t* L_87 = String_Substring_m2525(L_85, L_86, /*hidden argument*/NULL);
		__this->___query_7 = L_87;
		bool L_88 = (__this->___userEscaped_14);
		if (L_88)
		{
			goto IL_021e;
		}
	}
	{
		String_t* L_89 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_90 = Uri_EscapeString_m6063(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		__this->___query_7 = L_90;
	}

IL_021e:
	{
		String_t* L_91 = ___relativeUri;
		int32_t L_92 = V_0;
		NullCheck(L_91);
		String_t* L_93 = String_Substring_m2501(L_91, 0, L_92, /*hidden argument*/NULL);
		___relativeUri = L_93;
	}

IL_0228:
	{
		String_t* L_94 = ___relativeUri;
		NullCheck(L_94);
		int32_t L_95 = String_get_Length_m478(L_94, /*hidden argument*/NULL);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_96 = ___relativeUri;
		NullCheck(L_96);
		uint16_t L_97 = String_get_Chars_m477(L_96, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_98 = ___relativeUri;
		NullCheck(L_98);
		int32_t L_99 = String_get_Length_m478(L_98, /*hidden argument*/NULL);
		if ((((int32_t)L_99) <= ((int32_t)1)))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_100 = ___relativeUri;
		NullCheck(L_100);
		uint16_t L_101 = String_get_Chars_m477(L_100, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_102 = (__this->___scheme_3);
		uint16_t L_103 = ((int32_t)58);
		Object_t * L_104 = Box(Char_t266_il2cpp_TypeInfo_var, &L_103);
		String_t* L_105 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_106 = String_Concat_m426(NULL /*static, unused*/, L_102, L_104, L_105, /*hidden argument*/NULL);
		__this->___source_2 = L_106;
		Uri_ParseUri_m6065(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_027d:
	{
		String_t* L_107 = ___relativeUri;
		__this->___path_6 = L_107;
		bool L_108 = (__this->___userEscaped_14);
		if (L_108)
		{
			goto IL_02a0;
		}
	}
	{
		String_t* L_109 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_110 = Uri_EscapeString_m6063(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
		__this->___path_6 = L_110;
	}

IL_02a0:
	{
		return;
	}

IL_02a1:
	{
		Uri_t701 * L_111 = ___baseUri;
		NullCheck(L_111);
		String_t* L_112 = (L_111->___path_6);
		__this->___path_6 = L_112;
		String_t* L_113 = ___relativeUri;
		NullCheck(L_113);
		int32_t L_114 = String_get_Length_m478(L_113, /*hidden argument*/NULL);
		if ((((int32_t)L_114) > ((int32_t)0)))
		{
			goto IL_02ca;
		}
	}
	{
		String_t* L_115 = (__this->___query_7);
		NullCheck(L_115);
		int32_t L_116 = String_get_Length_m478(L_115, /*hidden argument*/NULL);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}

IL_02ca:
	{
		String_t* L_117 = (__this->___path_6);
		NullCheck(L_117);
		int32_t L_118 = String_LastIndexOf_m6130(L_117, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_118;
		int32_t L_119 = V_0;
		if ((((int32_t)L_119) < ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		String_t* L_120 = (__this->___path_6);
		int32_t L_121 = V_0;
		NullCheck(L_120);
		String_t* L_122 = String_Substring_m2501(L_120, 0, ((int32_t)((int32_t)L_121+(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_6 = L_122;
	}

IL_02f4:
	{
		String_t* L_123 = ___relativeUri;
		NullCheck(L_123);
		int32_t L_124 = String_get_Length_m478(L_123, /*hidden argument*/NULL);
		if (L_124)
		{
			goto IL_0300;
		}
	}
	{
		return;
	}

IL_0300:
	{
		String_t* L_125 = (__this->___path_6);
		String_t* L_126 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_127 = String_Concat_m423(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
		__this->___path_6 = L_127;
		V_2 = 0;
	}

IL_0314:
	{
		String_t* L_128 = (__this->___path_6);
		int32_t L_129 = V_2;
		NullCheck(L_128);
		int32_t L_130 = String_IndexOf_m4135(L_128, _stringLiteral1187, L_129, /*hidden argument*/NULL);
		V_0 = L_130;
		int32_t L_131 = V_0;
		if ((!(((uint32_t)L_131) == ((uint32_t)(-1)))))
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0386;
	}

IL_0332:
	{
		int32_t L_132 = V_0;
		if (L_132)
		{
			goto IL_0350;
		}
	}
	{
		String_t* L_133 = (__this->___path_6);
		NullCheck(L_133);
		String_t* L_134 = String_Remove_m2521(L_133, 0, 2, /*hidden argument*/NULL);
		__this->___path_6 = L_134;
		goto IL_0381;
	}

IL_0350:
	{
		String_t* L_135 = (__this->___path_6);
		int32_t L_136 = V_0;
		NullCheck(L_135);
		uint16_t L_137 = String_get_Chars_m477(L_135, ((int32_t)((int32_t)L_136-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_137) == ((int32_t)((int32_t)46))))
		{
			goto IL_037d;
		}
	}
	{
		String_t* L_138 = (__this->___path_6);
		int32_t L_139 = V_0;
		NullCheck(L_138);
		String_t* L_140 = String_Remove_m2521(L_138, L_139, 2, /*hidden argument*/NULL);
		__this->___path_6 = L_140;
		goto IL_0381;
	}

IL_037d:
	{
		int32_t L_141 = V_0;
		V_2 = ((int32_t)((int32_t)L_141+(int32_t)1));
	}

IL_0381:
	{
		goto IL_0314;
	}

IL_0386:
	{
		String_t* L_142 = (__this->___path_6);
		NullCheck(L_142);
		int32_t L_143 = String_get_Length_m478(L_142, /*hidden argument*/NULL);
		if ((((int32_t)L_143) <= ((int32_t)1)))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_144 = (__this->___path_6);
		String_t* L_145 = (__this->___path_6);
		NullCheck(L_145);
		int32_t L_146 = String_get_Length_m478(L_145, /*hidden argument*/NULL);
		NullCheck(L_144);
		uint16_t L_147 = String_get_Chars_m477(L_144, ((int32_t)((int32_t)L_146-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_148 = (__this->___path_6);
		String_t* L_149 = (__this->___path_6);
		NullCheck(L_149);
		int32_t L_150 = String_get_Length_m478(L_149, /*hidden argument*/NULL);
		NullCheck(L_148);
		uint16_t L_151 = String_get_Chars_m477(L_148, ((int32_t)((int32_t)L_150-(int32_t)2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_152 = (__this->___path_6);
		String_t* L_153 = (__this->___path_6);
		NullCheck(L_153);
		int32_t L_154 = String_get_Length_m478(L_153, /*hidden argument*/NULL);
		NullCheck(L_152);
		String_t* L_155 = String_Remove_m2521(L_152, ((int32_t)((int32_t)L_154-(int32_t)1)), 1, /*hidden argument*/NULL);
		__this->___path_6 = L_155;
	}

IL_03f4:
	{
		V_2 = 0;
	}

IL_03f6:
	{
		String_t* L_156 = (__this->___path_6);
		int32_t L_157 = V_2;
		NullCheck(L_156);
		int32_t L_158 = String_IndexOf_m4135(L_156, _stringLiteral1188, L_157, /*hidden argument*/NULL);
		V_0 = L_158;
		int32_t L_159 = V_0;
		if ((!(((uint32_t)L_159) == ((uint32_t)(-1)))))
		{
			goto IL_0414;
		}
	}
	{
		goto IL_048b;
	}

IL_0414:
	{
		int32_t L_160 = V_0;
		if (L_160)
		{
			goto IL_0421;
		}
	}
	{
		V_2 = 3;
		goto IL_03f6;
	}

IL_0421:
	{
		String_t* L_161 = (__this->___path_6);
		int32_t L_162 = V_0;
		NullCheck(L_161);
		int32_t L_163 = String_LastIndexOf_m6179(L_161, ((int32_t)47), ((int32_t)((int32_t)L_162-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_163;
		int32_t L_164 = V_3;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_0442;
		}
	}
	{
		int32_t L_165 = V_0;
		V_2 = ((int32_t)((int32_t)L_165+(int32_t)1));
		goto IL_0486;
	}

IL_0442:
	{
		String_t* L_166 = (__this->___path_6);
		int32_t L_167 = V_3;
		int32_t L_168 = V_0;
		int32_t L_169 = V_3;
		NullCheck(L_166);
		String_t* L_170 = String_Substring_m2501(L_166, ((int32_t)((int32_t)L_167+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_168-(int32_t)L_169))-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_171 = String_op_Inequality_m1075(NULL /*static, unused*/, L_170, _stringLiteral1189, /*hidden argument*/NULL);
		if (!L_171)
		{
			goto IL_0482;
		}
	}
	{
		String_t* L_172 = (__this->___path_6);
		int32_t L_173 = V_3;
		int32_t L_174 = V_0;
		int32_t L_175 = V_3;
		NullCheck(L_172);
		String_t* L_176 = String_Remove_m2521(L_172, ((int32_t)((int32_t)L_173+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_174-(int32_t)L_175))+(int32_t)3)), /*hidden argument*/NULL);
		__this->___path_6 = L_176;
		goto IL_0486;
	}

IL_0482:
	{
		int32_t L_177 = V_0;
		V_2 = ((int32_t)((int32_t)L_177+(int32_t)1));
	}

IL_0486:
	{
		goto IL_03f6;
	}

IL_048b:
	{
		String_t* L_178 = (__this->___path_6);
		NullCheck(L_178);
		int32_t L_179 = String_get_Length_m478(L_178, /*hidden argument*/NULL);
		if ((((int32_t)L_179) <= ((int32_t)3)))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_180 = (__this->___path_6);
		NullCheck(L_180);
		bool L_181 = String_EndsWith_m4134(L_180, _stringLiteral1190, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_182 = (__this->___path_6);
		String_t* L_183 = (__this->___path_6);
		NullCheck(L_183);
		int32_t L_184 = String_get_Length_m478(L_183, /*hidden argument*/NULL);
		NullCheck(L_182);
		int32_t L_185 = String_LastIndexOf_m6179(L_182, ((int32_t)47), ((int32_t)((int32_t)L_184-(int32_t)4)), /*hidden argument*/NULL);
		V_0 = L_185;
		int32_t L_186 = V_0;
		if ((((int32_t)L_186) == ((int32_t)(-1))))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_187 = (__this->___path_6);
		int32_t L_188 = V_0;
		String_t* L_189 = (__this->___path_6);
		NullCheck(L_189);
		int32_t L_190 = String_get_Length_m478(L_189, /*hidden argument*/NULL);
		int32_t L_191 = V_0;
		NullCheck(L_187);
		String_t* L_192 = String_Substring_m2501(L_187, ((int32_t)((int32_t)L_188+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_190-(int32_t)L_191))-(int32_t)4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_193 = String_op_Inequality_m1075(NULL /*static, unused*/, L_192, _stringLiteral1189, /*hidden argument*/NULL);
		if (!L_193)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_194 = (__this->___path_6);
		int32_t L_195 = V_0;
		String_t* L_196 = (__this->___path_6);
		NullCheck(L_196);
		int32_t L_197 = String_get_Length_m478(L_196, /*hidden argument*/NULL);
		int32_t L_198 = V_0;
		NullCheck(L_194);
		String_t* L_199 = String_Remove_m2521(L_194, ((int32_t)((int32_t)L_195+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_197-(int32_t)L_198))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_6 = L_199;
	}

IL_0522:
	{
		bool L_200 = (__this->___userEscaped_14);
		if (L_200)
		{
			goto IL_053e;
		}
	}
	{
		String_t* L_201 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_202 = Uri_EscapeString_m6063(NULL /*static, unused*/, L_201, /*hidden argument*/NULL);
		__this->___path_6 = L_202;
	}

IL_053e:
	{
		return;
	}
}
// System.String System.Uri::get_AbsoluteUri()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_AbsoluteUri_m6041 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___cachedAbsoluteUri_15);
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_1 = Uri_GetLeftPart_m6056(__this, 2, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_1;
		String_t* L_2 = (__this->___query_7);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m478(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = (__this->___cachedAbsoluteUri_15);
		String_t* L_5 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m423(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_6;
	}

IL_0046:
	{
		String_t* L_7 = (__this->___fragment_8);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m478(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_9 = (__this->___cachedAbsoluteUri_15);
		String_t* L_10 = (__this->___fragment_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m423(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_11;
	}

IL_006e:
	{
		String_t* L_12 = (__this->___cachedAbsoluteUri_15);
		return L_12;
	}
}
// System.String System.Uri::get_Authority()
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral470;
extern "C" String_t* Uri_get_Authority_m6042 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m6046(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m6077(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___port_5);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___host_4);
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		String_t* L_4 = (__this->___host_4);
		int32_t L_5 = (__this->___port_5);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m426(NULL /*static, unused*/, L_4, _stringLiteral470, L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m5185 (Uri_t701 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___host_4);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsFile()
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_get_IsFile_m6043 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m6046(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m421(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::get_IsLoopback()
// System.Net.IPAddress
#include "System_System_Net_IPAddressMethodDeclarations.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6AddressMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IPAddress_t1125_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1028;
extern Il2CppCodeGenString* _stringLiteral1027;
extern "C" bool Uri_get_IsLoopback_m6044 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IPAddress_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(744);
		IPv6Address_t1127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		_stringLiteral1028 = il2cpp_codegen_string_literal_from_index(1028);
		_stringLiteral1027 = il2cpp_codegen_string_literal_from_index(1027);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1125 * V_0 = {0};
	IPv6Address_t1127 * V_1 = {0};
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m5185(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m478(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = Uri_get_IsFile_m6043(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		String_t* L_3 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m421(NULL /*static, unused*/, L_3, _stringLiteral1028, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m421(NULL /*static, unused*/, L_5, _stringLiteral1027, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		String_t* L_7 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1125_il2cpp_TypeInfo_var);
		bool L_8 = IPAddress_TryParse_m5350(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1125_il2cpp_TypeInfo_var);
		IPAddress_t1125 * L_9 = ((IPAddress_t1125_StaticFields*)IPAddress_t1125_il2cpp_TypeInfo_var->static_fields)->___Loopback_6;
		IPAddress_t1125 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Net.IPAddress::Equals(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		String_t* L_12 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1127_il2cpp_TypeInfo_var);
		bool L_13 = IPv6Address_TryParse_m5369(NULL /*static, unused*/, L_12, (&V_1), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IPv6Address_t1127 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1127_il2cpp_TypeInfo_var);
		bool L_15 = IPv6Address_IsLoopback_m5373(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return 1;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m6045 (Uri_t701 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___isUnc_10);
		return L_0;
	}
}
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m6046 (Uri_t701 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___scheme_3);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m6047 (Uri_t701 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isAbsoluteUri_12);
		return L_0;
	}
}
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1127_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_CheckHostName_m6048 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		IPv6Address_t1127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	IPv6Address_t1127 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m478(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_4 = Uri_IsIPv4Address_m6049(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_6 = Uri_IsDomainAddress_m6050(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1127_il2cpp_TypeInfo_var);
		bool L_8 = IPv6Address_TryParse_m5369(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Uri::IsIPv4Address(System.String)
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsIPv4Address_m6049 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t35* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		CharU5BU5D_t165* L_1 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)46);
		NullCheck(L_0);
		StringU5BU5D_t35* L_2 = String_Split_m475(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t35* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		StringU5BU5D_t35* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6, sizeof(String_t*))));
		int32_t L_7 = String_get_Length_m478((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6, sizeof(String_t*))), /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		StringU5BU5D_t35* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = UInt32_TryParse_m6180(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11, sizeof(String_t*))), (&V_3), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsDomainAddress(System.String)
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsDomainAddress_m6050 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		String_t* L_0 = ___name;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m478(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m477(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsLetterOrDigit_m6167(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsLetterOrDigit_m6167(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return 0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" bool Uri_CheckSchemeName_m6051 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		String_t* L_0 = ___schemeName;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___schemeName;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m478(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		String_t* L_3 = ___schemeName;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m477(L_3, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_5 = Uri_IsAlpha_m6052(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		String_t* L_6 = ___schemeName;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m478(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		String_t* L_8 = ___schemeName;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m477(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsDigit_m940(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_14 = Uri_IsAlpha_m6052(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return 0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsAlpha(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Uri_IsAlpha_m6052 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		uint16_t L_0 = ___c;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return G_B7_0;
	}
}
// System.Boolean System.Uri::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_Equals_m6053 (Uri_t701 * __this, Object_t * ___comparant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t701 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___comparant;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___comparant;
		V_0 = ((Uri_t701 *)IsInstClass(L_1, Uri_t701_il2cpp_TypeInfo_var));
		Uri_t701 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_3 = ___comparant;
		V_1 = ((String_t*)IsInstSealed(L_3, String_t_il2cpp_TypeInfo_var));
		String_t* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		Uri_t701 * L_6 = (Uri_t701 *)il2cpp_codegen_object_new (Uri_t701_il2cpp_TypeInfo_var);
		Uri__ctor_m4076(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		Uri_t701 * L_7 = V_0;
		bool L_8 = Uri_InternalEquals_m6054(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Uri::InternalEquals(System.Uri)
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t844_il2cpp_TypeInfo_var;
extern "C" bool Uri_InternalEquals_m6054 (Uri_t701 * __this, Uri_t701 * ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CultureInfo_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t844 * V_0 = {0};
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->___isAbsoluteUri_12);
		Uri_t701 * L_1 = ___uri;
		NullCheck(L_1);
		bool L_2 = (L_1->___isAbsoluteUri_12);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		bool L_3 = (__this->___isAbsoluteUri_12);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = (__this->___source_2);
		Uri_t701 * L_5 = ___uri;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___source_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m421(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t844_il2cpp_TypeInfo_var);
		CultureInfo_t844 * L_8 = CultureInfo_get_InvariantCulture_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = (__this->___scheme_3);
		CultureInfo_t844 * L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_ToLower_m6181(L_9, L_10, /*hidden argument*/NULL);
		Uri_t701 * L_12 = ___uri;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___scheme_3);
		CultureInfo_t844 * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m6181(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m421(NULL /*static, unused*/, L_11, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_17 = (__this->___host_4);
		CultureInfo_t844 * L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_ToLower_m6181(L_17, L_18, /*hidden argument*/NULL);
		Uri_t701 * L_20 = ___uri;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___host_4);
		CultureInfo_t844 * L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = String_ToLower_m6181(L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m421(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = (__this->___port_5);
		Uri_t701 * L_26 = ___uri;
		NullCheck(L_26);
		int32_t L_27 = (L_26->___port_5);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_28 = (__this->___query_7);
		Uri_t701 * L_29 = ___uri;
		NullCheck(L_29);
		String_t* L_30 = (L_29->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m421(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_32 = (__this->___path_6);
		Uri_t701 * L_33 = ___uri;
		NullCheck(L_33);
		String_t* L_34 = (L_33->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Equality_m421(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return G_B10_0;
	}
}
// System.Int32 System.Uri::GetHashCode()
extern TypeInfo* CultureInfo_t844_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetHashCode_m6055 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t844 * V_0 = {0};
	{
		int32_t L_0 = (__this->___cachedHashCode_18);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t844_il2cpp_TypeInfo_var);
		CultureInfo_t844 * L_1 = CultureInfo_get_InvariantCulture_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___isAbsoluteUri_12);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_3 = (__this->___scheme_3);
		CultureInfo_t844 * L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m6181(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_GetHashCode_m4019(L_5, /*hidden argument*/NULL);
		String_t* L_7 = (__this->___host_4);
		CultureInfo_t844 * L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_ToLower_m6181(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_GetHashCode_m4019(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___port_5);
		String_t* L_12 = (__this->___query_7);
		NullCheck(L_12);
		int32_t L_13 = String_GetHashCode_m4019(L_12, /*hidden argument*/NULL);
		String_t* L_14 = (__this->___path_6);
		NullCheck(L_14);
		int32_t L_15 = String_GetHashCode_m4019(L_14, /*hidden argument*/NULL);
		__this->___cachedHashCode_18 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15));
		goto IL_007a;
	}

IL_0069:
	{
		String_t* L_16 = (__this->___source_2);
		NullCheck(L_16);
		int32_t L_17 = String_GetHashCode_m4019(L_16, /*hidden argument*/NULL);
		__this->___cachedHashCode_18 = L_17;
	}

IL_007a:
	{
		int32_t L_18 = (__this->___cachedHashCode_18);
		return L_18;
	}
}
// System.String System.Uri::GetLeftPart(System.UriPartial)
// System.UriPartial
#include "System_System_UriPartial.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1180;
extern Il2CppCodeGenString* _stringLiteral1181;
extern "C" String_t* Uri_GetLeftPart_m6056 (Uri_t701 * __this, int32_t ___part, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral1180 = il2cpp_codegen_string_literal_from_index(1180);
		_stringLiteral1181 = il2cpp_codegen_string_literal_from_index(1181);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t166 * V_1 = {0};
	StringBuilder_t166 * V_2 = {0};
	int32_t V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t606 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Uri_EnsureAbsoluteUri_m6081(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___part;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		String_t* L_2 = (__this->___scheme_3);
		String_t* L_3 = Uri_GetOpaqueWiseSchemeDelimiter_m6078(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m423(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m421(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_9 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m421(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_11;
	}

IL_0061:
	{
		StringBuilder_t166 * L_12 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2253(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		StringBuilder_t166 * L_13 = V_1;
		String_t* L_14 = (__this->___scheme_3);
		NullCheck(L_13);
		StringBuilder_Append_m4095(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t166 * L_15 = V_1;
		String_t* L_16 = Uri_GetOpaqueWiseSchemeDelimiter_m6078(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m4095(L_15, L_16, /*hidden argument*/NULL);
		String_t* L_17 = (__this->___path_6);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m478(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_19 = (__this->___path_6);
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m477(L_19, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_22 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m421(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		StringBuilder_t166 * L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_Append_m482(L_24, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_00c3:
	{
		String_t* L_25 = (__this->___userinfo_9);
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m478(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t166 * L_27 = V_1;
		String_t* L_28 = (__this->___userinfo_9);
		NullCheck(L_27);
		StringBuilder_t166 * L_29 = StringBuilder_Append_m4095(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m482(L_29, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_00e8:
	{
		StringBuilder_t166 * L_30 = V_1;
		String_t* L_31 = (__this->___host_4);
		NullCheck(L_30);
		StringBuilder_Append_m4095(L_30, L_31, /*hidden argument*/NULL);
		String_t* L_32 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetDefaultPort_m6077(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = (__this->___port_5);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = (__this->___port_5);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t166 * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t166 * L_38 = StringBuilder_Append_m482(L_37, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_39 = (__this->___port_5);
		NullCheck(L_38);
		StringBuilder_Append_m6146(L_38, L_39, /*hidden argument*/NULL);
	}

IL_012d:
	{
		StringBuilder_t166 * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = StringBuilder_ToString_m481(L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_0134:
	{
		StringBuilder_t166 * L_42 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2253(L_42, /*hidden argument*/NULL);
		V_2 = L_42;
		StringBuilder_t166 * L_43 = V_2;
		String_t* L_44 = (__this->___scheme_3);
		NullCheck(L_43);
		StringBuilder_Append_m4095(L_43, L_44, /*hidden argument*/NULL);
		StringBuilder_t166 * L_45 = V_2;
		String_t* L_46 = Uri_GetOpaqueWiseSchemeDelimiter_m6078(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m4095(L_45, L_46, /*hidden argument*/NULL);
		String_t* L_47 = (__this->___path_6);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m478(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_49 = (__this->___path_6);
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m477(L_49, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_51 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_52 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m421(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		StringBuilder_t166 * L_54 = V_2;
		NullCheck(L_54);
		StringBuilder_Append_m482(L_54, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0196:
	{
		String_t* L_55 = (__this->___userinfo_9);
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m478(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		StringBuilder_t166 * L_57 = V_2;
		String_t* L_58 = (__this->___userinfo_9);
		NullCheck(L_57);
		StringBuilder_t166 * L_59 = StringBuilder_Append_m4095(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		StringBuilder_Append_m482(L_59, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_01bb:
	{
		StringBuilder_t166 * L_60 = V_2;
		String_t* L_61 = (__this->___host_4);
		NullCheck(L_60);
		StringBuilder_Append_m4095(L_60, L_61, /*hidden argument*/NULL);
		String_t* L_62 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_63 = Uri_GetDefaultPort_m6077(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		int32_t L_64 = (__this->___port_5);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = (__this->___port_5);
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		StringBuilder_t166 * L_67 = V_2;
		NullCheck(L_67);
		StringBuilder_t166 * L_68 = StringBuilder_Append_m482(L_67, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_69 = (__this->___port_5);
		NullCheck(L_68);
		StringBuilder_Append_m6146(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0200:
	{
		String_t* L_70 = (__this->___path_6);
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m478(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		String_t* L_72 = Uri_get_Scheme_m6046(__this, /*hidden argument*/NULL);
		V_4 = L_72;
		String_t* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_74 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_35;
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		Dictionary_2_t606 * L_75 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_75, 2, /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_5 = L_75;
		Dictionary_2_t606 * L_76 = V_5;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, _stringLiteral1180, 0);
		Dictionary_2_t606 * L_77 = V_5;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, _stringLiteral1181, 0);
		Dictionary_2_t606 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_35 = L_78;
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_79 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_35;
		String_t* L_80 = V_4;
		NullCheck(L_79);
		bool L_81 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_79, L_80, (&V_6));
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		StringBuilder_t166 * L_83 = V_2;
		String_t* L_84 = (__this->___path_6);
		NullCheck(L_83);
		StringBuilder_Append_m4095(L_83, L_84, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_0284:
	{
		StringBuilder_t166 * L_85 = V_2;
		String_t* L_86 = (__this->___path_6);
		String_t* L_87 = Uri_get_Scheme_m6046(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_88 = Uri_CompactEscaped_m6073(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		String_t* L_89 = Uri_Reduce_m6074(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_m4095(L_85, L_89, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_02a6:
	{
		StringBuilder_t166 * L_90 = V_2;
		NullCheck(L_90);
		String_t* L_91 = StringBuilder_ToString_m481(L_90, /*hidden argument*/NULL);
		return L_91;
	}

IL_02ad:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1191;
extern "C" int32_t Uri_FromHex_m6057 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral1191 = il2cpp_codegen_string_literal_from_index(1191);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = ___digit;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}

IL_0015:
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_5 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_002d:
	{
		uint16_t L_6 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_7 = ___digit;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_8 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0045:
	{
		ArgumentException_t275 * L_9 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_9, _stringLiteral1191, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}
}
// System.String System.Uri::HexEscape(System.Char)
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1192;
extern Il2CppCodeGenString* _stringLiteral1193;
extern "C" String_t* Uri_HexEscape_m6058 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral1192 = il2cpp_codegen_string_literal_from_index(1192);
		_stringLiteral1193 = il2cpp_codegen_string_literal_from_index(1193);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___character;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t845 * L_1 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_1, _stringLiteral1192, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19;
		uint16_t L_3 = ___character;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m477(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), /*hidden argument*/NULL);
		uint16_t L_5 = L_4;
		Object_t * L_6 = Box(Char_t266_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19;
		uint16_t L_8 = ___character;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m477(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		uint16_t L_10 = L_9;
		Object_t * L_11 = Box(Char_t266_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m426(NULL /*static, unused*/, _stringLiteral1193, L_6, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m6059 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_5 = ___digit;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return G_B9_0;
	}
}
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsHexEncoding_m6060 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___index;
		String_t* L_1 = ___pattern;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m478(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		String_t* L_3 = ___pattern;
		int32_t L_4 = ___index;
		int32_t L_5 = L_4;
		___index = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m477(L_3, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_7 = ___pattern;
		int32_t L_8 = ___index;
		int32_t L_9 = L_8;
		___index = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		uint16_t L_10 = String_get_Chars_m477(L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_11 = Uri_IsHexDigit_m6059(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___pattern;
		int32_t L_13 = ___index;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m477(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_15 = Uri_IsHexDigit_m6059(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return G_B6_0;
	}
}
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri_AppendQueryAndFragment_m6061 (Uri_t701 * __this, String_t** ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = (__this->___query_7);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m478(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_2 = (__this->___query_7);
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m477(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((int32_t)63);
		Object_t * L_5 = Box(Char_t266_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = (__this->___query_7);
		NullCheck(L_6);
		String_t* L_7 = String_Substring_m2525(L_6, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_8 = Uri_Unescape_m6067(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m606(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		String_t* L_10 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_11 = Uri_Unescape_m6067(NULL /*static, unused*/, L_10, 0, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		String_t** L_12 = ___result;
		String_t** L_13 = ___result;
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m423(NULL /*static, unused*/, (*((String_t**)L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_12)) = (Object_t *)L_15;
	}

IL_005e:
	{
		String_t* L_16 = (__this->___fragment_8);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m478(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t** L_18 = ___result;
		String_t** L_19 = ___result;
		String_t* L_20 = (__this->___fragment_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m423(NULL /*static, unused*/, (*((String_t**)L_19)), L_20, /*hidden argument*/NULL);
		*((Object_t **)(L_18)) = (Object_t *)L_21;
	}

IL_007e:
	{
		return;
	}
}
// System.String System.Uri::ToString()
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_ToString_m6062 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___cachedToString_16);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___cachedToString_16);
		return L_1;
	}

IL_0012:
	{
		bool L_2 = (__this->___isAbsoluteUri_12);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = Uri_GetLeftPart_m6056(__this, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_Unescape_m6067(NULL /*static, unused*/, L_3, 1, /*hidden argument*/NULL);
		__this->___cachedToString_16 = L_4;
		goto IL_0047;
	}

IL_0035:
	{
		String_t* L_5 = (__this->___path_6);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_5);
		__this->___cachedToString_16 = L_6;
	}

IL_0047:
	{
		String_t** L_7 = &(__this->___cachedToString_16);
		Uri_AppendQueryAndFragment_m6061(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = (__this->___cachedToString_16);
		return L_8;
	}
}
// System.String System.Uri::EscapeString(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeString_m6063 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_EscapeString_m6064(NULL /*static, unused*/, L_0, 0, 1, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t20_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1194;
extern Il2CppCodeGenString* _stringLiteral1195;
extern "C" String_t* Uri_EscapeString_m6064 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Encoding_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		_stringLiteral1194 = il2cpp_codegen_string_literal_from_index(1194);
		_stringLiteral1195 = il2cpp_codegen_string_literal_from_index(1195);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t166 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t625* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t166 * L_2 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2253(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m478(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_7 = Uri_IsHexEncoding_m6060(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t166 * L_8 = V_0;
		String_t* L_9 = ___str;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m2501(L_9, L_10, 3, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m4095(L_8, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t20_il2cpp_TypeInfo_var);
		Encoding_t20 * L_13 = Encoding_get_UTF8_m4043(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t165* L_14 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 1));
		String_t* L_15 = ___str;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m477(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0, sizeof(uint16_t))) = (uint16_t)L_17;
		NullCheck(L_13);
		ByteU5BU5D_t625* L_18 = (ByteU5BU5D_t625*)VirtFuncInvoker1< ByteU5BU5D_t625*, CharU5BU5D_t165* >::Invoke(11 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_13, L_14);
		V_3 = L_18;
		ByteU5BU5D_t625* L_19 = V_3;
		NullCheck(L_19);
		V_4 = (((int32_t)(((Array_t *)L_19)->max_length)));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		ByteU5BU5D_t625* L_20 = V_3;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_6 = (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22, sizeof(uint8_t)))));
		uint16_t L_23 = V_6;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		NullCheck(_stringLiteral1194);
		int32_t L_26 = String_IndexOf_m2555(_stringLiteral1194, L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_27 = ___escapeHex;
		if (!L_27)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_29 = ___escapeBrackets;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_32 = ___escapeReserved;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_33 = V_6;
		NullCheck(_stringLiteral1195);
		int32_t L_34 = String_IndexOf_m2555(_stringLiteral1195, L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		StringBuilder_t166 * L_35 = V_0;
		uint16_t L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_37 = Uri_HexEscape_m6058(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		StringBuilder_Append_m4095(L_35, L_37, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00e9:
	{
		StringBuilder_t166 * L_38 = V_0;
		uint16_t L_39 = V_6;
		NullCheck(L_38);
		StringBuilder_Append_m482(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00f8:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0105:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t166 * L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = StringBuilder_ToString_m481(L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void System.Uri::ParseUri(System.UriKind)
// System.UriKind
#include "System_System_UriKind.h"
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t844_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseUri_m6065 (Uri_t701 * __this, int32_t ___kind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		CultureInfo_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___kind;
		String_t* L_1 = (__this->___source_2);
		Uri_Parse_m6071(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___userEscaped_14);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		String_t* L_3 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_EscapeString_m6064(NULL /*static, unused*/, L_3, 0, 1, 0, /*hidden argument*/NULL);
		__this->___host_4 = L_4;
		String_t* L_5 = (__this->___host_4);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m478(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_7 = (__this->___host_4);
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m477(L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_9 = (__this->___host_4);
		String_t* L_10 = (__this->___host_4);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m478(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint16_t L_12 = String_get_Chars_m477(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_13 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t844_il2cpp_TypeInfo_var);
		CultureInfo_t844 * L_14 = CultureInfo_get_InvariantCulture_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m6181(L_13, L_14, /*hidden argument*/NULL);
		__this->___host_4 = L_15;
	}

IL_0086:
	{
		String_t* L_16 = (__this->___path_6);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m478(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_18 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_19 = Uri_EscapeString_m6063(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		__this->___path_6 = L_19;
	}

IL_00a8:
	{
		return;
	}
}
// System.String System.Uri::Unescape(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_Unescape_m6066 (Uri_t701 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_Unescape_m6067(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1196;
extern Il2CppCodeGenString* _stringLiteral1197;
extern Il2CppCodeGenString* _stringLiteral1198;
extern "C" String_t* Uri_Unescape_m6067 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		_stringLiteral1196 = il2cpp_codegen_string_literal_from_index(1196);
		_stringLiteral1197 = il2cpp_codegen_string_literal_from_index(1197);
		_stringLiteral1198 = il2cpp_codegen_string_literal_from_index(1198);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t166 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t166 * L_2 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2253(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m478(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m477(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_9 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		uint16_t L_10 = Uri_HexUnescapeMultiByte_m6075(NULL /*static, unused*/, L_9, (&V_2), (&V_4), /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = ___excludeSpecial;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t166 * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m4095(L_13, _stringLiteral1196, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = ___excludeSpecial;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		uint16_t L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t166 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m4095(L_16, _stringLiteral1197, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = ___excludeSpecial;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t166 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m4095(L_19, _stringLiteral1198, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_009c:
	{
		StringBuilder_t166 * L_20 = V_0;
		uint16_t L_21 = V_5;
		NullCheck(L_20);
		StringBuilder_Append_m482(L_20, L_21, /*hidden argument*/NULL);
		uint16_t L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t166 * L_23 = V_0;
		uint16_t L_24 = V_4;
		NullCheck(L_23);
		StringBuilder_Append_m482(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25-(int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t166 * L_26 = V_0;
		uint16_t L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m482(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t166 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = StringBuilder_ToString_m481(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1199;
extern Il2CppCodeGenString* _stringLiteral1200;
extern "C" void Uri_ParseAsWindowsUNC_m6068 (Uri_t701 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		_stringLiteral1199 = il2cpp_codegen_string_literal_from_index(1199);
		_stringLiteral1200 = il2cpp_codegen_string_literal_from_index(1200);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_0;
		__this->___port_5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_2;
		__this->___isUnc_10 = 1;
		String_t* L_3 = ___uriString;
		CharU5BU5D_t165* L_4 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)92);
		NullCheck(L_3);
		String_t* L_5 = String_TrimStart_m516(L_3, L_4, /*hidden argument*/NULL);
		___uriString = L_5;
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m2555(L_6, ((int32_t)92), /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_9 = ___uriString;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m2525(L_9, L_10, /*hidden argument*/NULL);
		__this->___path_6 = L_11;
		String_t* L_12 = ___uriString;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m2501(L_12, 0, L_13, /*hidden argument*/NULL);
		__this->___host_4 = L_14;
		goto IL_0084;
	}

IL_0072:
	{
		String_t* L_15 = ___uriString;
		__this->___host_4 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_16;
	}

IL_0084:
	{
		String_t* L_17 = (__this->___path_6);
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m485(L_17, _stringLiteral1199, _stringLiteral1200, /*hidden argument*/NULL);
		__this->___path_6 = L_18;
		return;
	}
}
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1201;
extern Il2CppCodeGenString* _stringLiteral1199;
extern Il2CppCodeGenString* _stringLiteral1200;
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m6069 (Uri_t701 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral1201 = il2cpp_codegen_string_literal_from_index(1201);
		_stringLiteral1199 = il2cpp_codegen_string_literal_from_index(1199);
		_stringLiteral1200 = il2cpp_codegen_string_literal_from_index(1200);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m478(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m477(L_2, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m477(L_4, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return _stringLiteral1201;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_7;
		__this->___port_5 = (-1);
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m485(L_8, _stringLiteral1199, _stringLiteral1200, /*hidden argument*/NULL);
		__this->___path_6 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_10;
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_11;
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m6070 (Uri_t701 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isUnixFilePath_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_0;
		__this->___port_5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_3;
		__this->___path_6 = (String_t*)NULL;
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m478(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m477(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m477(L_8, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = ___uriString;
		CharU5BU5D_t165* L_11 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)47);
		NullCheck(L_10);
		String_t* L_12 = String_TrimStart_m516(L_10, L_11, /*hidden argument*/NULL);
		___uriString = L_12;
		uint16_t L_13 = ((int32_t)47);
		Object_t * L_14 = Box(Char_t266_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m606(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		__this->___path_6 = L_16;
	}

IL_008f:
	{
		String_t* L_17 = (__this->___path_6);
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_18 = ___uriString;
		__this->___path_6 = L_18;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1237_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1202;
extern "C" void Uri_Parse_m6071 (Uri_t701 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		UriFormatException_t1237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(843);
		_stringLiteral1202 = il2cpp_codegen_string_literal_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___uriString;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, _stringLiteral1202, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___kind;
		String_t* L_3 = ___uriString;
		String_t* L_4 = Uri_ParseNoExceptions_m6072(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		UriFormatException_t1237 * L_7 = (UriFormatException_t1237 *)il2cpp_codegen_object_new (UriFormatException_t1237_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6084(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0027:
	{
		return;
	}
}
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* Path_t1067_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t844_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1127_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1232_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1203;
extern Il2CppCodeGenString* _stringLiteral1204;
extern Il2CppCodeGenString* _stringLiteral1205;
extern Il2CppCodeGenString* _stringLiteral1206;
extern Il2CppCodeGenString* _stringLiteral1186;
extern Il2CppCodeGenString* _stringLiteral1207;
extern Il2CppCodeGenString* _stringLiteral1208;
extern Il2CppCodeGenString* _stringLiteral1200;
extern Il2CppCodeGenString* _stringLiteral1209;
extern Il2CppCodeGenString* _stringLiteral1210;
extern Il2CppCodeGenString* _stringLiteral1211;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral472;
extern Il2CppCodeGenString* _stringLiteral1212;
extern Il2CppCodeGenString* _stringLiteral30;
extern "C" String_t* Uri_ParseNoExceptions_m6072 (Uri_t701 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t1067_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(636);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		CultureInfo_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IPv6Address_t1127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		DefaultUriParser_t1232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		_stringLiteral1203 = il2cpp_codegen_string_literal_from_index(1203);
		_stringLiteral1204 = il2cpp_codegen_string_literal_from_index(1204);
		_stringLiteral1205 = il2cpp_codegen_string_literal_from_index(1205);
		_stringLiteral1206 = il2cpp_codegen_string_literal_from_index(1206);
		_stringLiteral1186 = il2cpp_codegen_string_literal_from_index(1186);
		_stringLiteral1207 = il2cpp_codegen_string_literal_from_index(1207);
		_stringLiteral1208 = il2cpp_codegen_string_literal_from_index(1208);
		_stringLiteral1200 = il2cpp_codegen_string_literal_from_index(1200);
		_stringLiteral1209 = il2cpp_codegen_string_literal_from_index(1209);
		_stringLiteral1210 = il2cpp_codegen_string_literal_from_index(1210);
		_stringLiteral1211 = il2cpp_codegen_string_literal_from_index(1211);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		_stringLiteral1212 = il2cpp_codegen_string_literal_from_index(1212);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = {0};
	bool V_11 = false;
	IPv6Address_t1127 * V_12 = {0};
	UriFormatException_t1237 * V_13 = {0};
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m472(L_0, /*hidden argument*/NULL);
		___uriString = L_1;
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m478(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___kind;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___kind;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->___isAbsoluteUri_12 = 0;
		return (String_t*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = ___kind;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return _stringLiteral1203;
	}

IL_003f:
	{
		V_1 = 0;
		String_t* L_9 = ___uriString;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m2555(L_9, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return _stringLiteral1204;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_13 = ___uriString;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m477(L_13, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1067_il2cpp_TypeInfo_var);
		uint16_t L_15 = ((Path_t1067_StaticFields*)Path_t1067_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = ___uriString;
		Uri_ParseAsUnixAbsoluteFilePath_m6070(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___kind;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->___isAbsoluteUri_12 = 0;
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		String_t* L_18 = ___uriString;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m478(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_20 = ___uriString;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m477(L_20, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_22 = ___uriString;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m477(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_24 = ___uriString;
		Uri_ParseAsWindowsUNC_m6068(__this, L_24, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->___isAbsoluteUri_12 = 0;
		String_t* L_25 = ___uriString;
		__this->___path_6 = L_25;
	}

IL_00d3:
	{
		return (String_t*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_27 = ___uriString;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m477(L_27, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_29 = Uri_IsAlpha_m6052(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return _stringLiteral1205;
	}

IL_00f3:
	{
		String_t* L_30 = ___uriString;
		String_t* L_31 = Uri_ParseAsWindowsAbsoluteFilePath_m6069(__this, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (String_t*)NULL;
	}

IL_0105:
	{
		String_t* L_34 = ___uriString;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		String_t* L_36 = String_Substring_m2501(L_34, 0, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t844_il2cpp_TypeInfo_var);
		CultureInfo_t844 * L_37 = CultureInfo_get_InvariantCulture_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_38 = String_ToLower_m6181(L_36, L_37, /*hidden argument*/NULL);
		__this->___scheme_3 = L_38;
		String_t* L_39 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_40 = Uri_CheckSchemeName_m6051(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_41 = Locale_GetText_m5224(NULL /*static, unused*/, _stringLiteral1206, /*hidden argument*/NULL);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
		String_t* L_43 = ___uriString;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m478(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		String_t* L_45 = ___uriString;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = String_IndexOf_m4040(L_45, ((int32_t)35), L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		bool L_48 = Uri_get_IsUnc_m6045(__this, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = (__this->___userEscaped_14);
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_51 = ___uriString;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m2525(L_51, L_52, /*hidden argument*/NULL);
		__this->___fragment_8 = L_53;
		goto IL_019b;
	}

IL_017d:
	{
		String_t* L_54 = ___uriString;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		String_t* L_56 = String_Substring_m2525(L_54, ((int32_t)((int32_t)L_55+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_57 = Uri_EscapeString_m6063(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral1186, L_57, /*hidden argument*/NULL);
		__this->___fragment_8 = L_58;
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		String_t* L_60 = ___uriString;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_60);
		int32_t L_64 = String_IndexOf_m6182(L_60, ((int32_t)63), L_61, ((int32_t)((int32_t)L_62-(int32_t)L_63)), /*hidden argument*/NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_66 = ___uriString;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		NullCheck(L_66);
		String_t* L_70 = String_Substring_m2501(L_66, L_67, ((int32_t)((int32_t)L_68-(int32_t)L_69)), /*hidden argument*/NULL);
		__this->___query_7 = L_70;
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = (__this->___userEscaped_14);
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_73 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_74 = Uri_EscapeString_m6063(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		__this->___query_7 = L_74;
	}

IL_01e3:
	{
		String_t* L_75 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_76 = Uri_IsPredefinedScheme_m6079(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_77 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_78 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_79 = String_op_Inequality_m1075(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_80 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_81 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Inequality_m1075(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_83-(int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_85-(int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_87 = ___uriString;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m477(L_87, L_88, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_90 = ___uriString;
		int32_t L_91 = V_3;
		NullCheck(L_90);
		uint16_t L_92 = String_get_Chars_m477(L_90, ((int32_t)((int32_t)L_91+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return _stringLiteral1207;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_93-(int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_95 = ___uriString;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		uint16_t L_97 = String_get_Chars_m477(L_95, L_96, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_98 = ___uriString;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		uint16_t L_100 = String_get_Chars_m477(L_98, ((int32_t)((int32_t)L_99+(int32_t)1)), /*hidden argument*/NULL);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = G_B50_0;
		String_t* L_101 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_102 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_103 = String_op_Equality_m421(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_105-(int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		String_t* L_107 = ___uriString;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		uint16_t L_109 = String_get_Chars_m477(L_107, ((int32_t)((int32_t)L_108+(int32_t)2)), /*hidden argument*/NULL);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = G_B57_0;
		V_7 = 0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = ___kind;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return _stringLiteral1208;
	}

IL_02d1:
	{
		String_t* L_112 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_113 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_114 = String_op_Inequality_m1075(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_115 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_116 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_117 = String_op_Inequality_m1075(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)((int32_t)L_118+(int32_t)2));
	}

IL_02ff:
	{
		String_t* L_119 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_120 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_121 = String_op_Equality_m421(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		String_t* L_123 = ___uriString;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		uint16_t L_125 = String_get_Chars_m477(L_123, L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)((int32_t)L_126+(int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = 0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		String_t* L_134 = ___uriString;
		int32_t L_135 = V_3;
		NullCheck(L_134);
		uint16_t L_136 = String_get_Chars_m477(L_134, L_135, /*hidden argument*/NULL);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_139-(int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		String_t* L_141 = ___uriString;
		int32_t L_142 = V_3;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m477(L_141, ((int32_t)((int32_t)L_142+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = 0;
		V_7 = 1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		String_t* L_144 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_145 = Uri_IsPredefinedScheme_m6079(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		String_t* L_146 = ___uriString;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		NullCheck(L_146);
		String_t* L_150 = String_Substring_m2501(L_146, L_147, ((int32_t)((int32_t)L_148-(int32_t)L_149)), /*hidden argument*/NULL);
		__this->___path_6 = L_150;
		__this->___isOpaquePart_11 = 1;
		return (String_t*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		String_t* L_152 = ___uriString;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		NullCheck(L_152);
		int32_t L_156 = String_IndexOf_m6182(L_152, ((int32_t)47), L_153, ((int32_t)((int32_t)L_154-(int32_t)L_155)), /*hidden argument*/NULL);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		String_t* L_159 = ___uriString;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		NullCheck(L_159);
		int32_t L_163 = String_IndexOf_m6182(L_159, ((int32_t)92), L_160, ((int32_t)((int32_t)L_161-(int32_t)L_162)), /*hidden argument*/NULL);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		String_t* L_165 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_166 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_167 = String_op_Inequality_m1075(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_168 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_169 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_170 = String_op_Inequality_m1075(NULL /*static, unused*/, L_168, L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->___path_6 = _stringLiteral1200;
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		String_t* L_171 = ___uriString;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		NullCheck(L_171);
		String_t* L_175 = String_Substring_m2501(L_171, L_172, ((int32_t)((int32_t)L_173-(int32_t)L_174)), /*hidden argument*/NULL);
		__this->___path_6 = L_175;
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		String_t* L_178 = ___uriString;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		NullCheck(L_178);
		int32_t L_182 = String_IndexOf_m6182(L_178, ((int32_t)64), L_179, ((int32_t)((int32_t)L_180-(int32_t)L_181)), /*hidden argument*/NULL);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		String_t* L_184 = ___uriString;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		NullCheck(L_184);
		String_t* L_188 = String_Substring_m2501(L_184, L_185, ((int32_t)((int32_t)L_186-(int32_t)L_187)), /*hidden argument*/NULL);
		__this->___userinfo_9 = L_188;
		int32_t L_189 = V_1;
		V_3 = ((int32_t)((int32_t)L_189+(int32_t)1));
	}

IL_0496:
	{
		__this->___port_5 = (-1);
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		String_t* L_191 = ___uriString;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		NullCheck(L_191);
		int32_t L_195 = String_LastIndexOf_m6183(L_191, ((int32_t)58), ((int32_t)((int32_t)L_192-(int32_t)1)), ((int32_t)((int32_t)L_193-(int32_t)L_194)), /*hidden argument*/NULL);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		String_t* L_199 = ___uriString;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		NullCheck(L_199);
		String_t* L_203 = String_Substring_m2501(L_199, ((int32_t)((int32_t)L_200+(int32_t)1)), ((int32_t)((int32_t)L_201-(int32_t)((int32_t)((int32_t)L_202+(int32_t)1)))), /*hidden argument*/NULL);
		V_10 = L_203;
		String_t* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = String_get_Length_m478(L_204, /*hidden argument*/NULL);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_206 = V_10;
		String_t* L_207 = V_10;
		NullCheck(L_207);
		int32_t L_208 = String_get_Length_m478(L_207, /*hidden argument*/NULL);
		NullCheck(L_206);
		uint16_t L_209 = String_get_Chars_m477(L_206, ((int32_t)((int32_t)L_208-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t844_il2cpp_TypeInfo_var);
		CultureInfo_t844 * L_211 = CultureInfo_get_InvariantCulture_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t* L_212 = &(__this->___port_5);
		bool L_213 = Int32_TryParse_m6129(NULL /*static, unused*/, L_210, 7, L_211, L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = (__this->___port_5);
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = (__this->___port_5);
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return _stringLiteral1209;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = (__this->___port_5);
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		String_t* L_218 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_219 = Uri_GetDefaultPort_m6077(NULL /*static, unused*/, L_218, /*hidden argument*/NULL);
		__this->___port_5 = L_219;
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = (__this->___port_5);
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		String_t* L_221 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_222 = Uri_GetDefaultPort_m6077(NULL /*static, unused*/, L_221, /*hidden argument*/NULL);
		__this->___port_5 = L_222;
	}

IL_0583:
	{
		String_t* L_223 = ___uriString;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		NullCheck(L_223);
		String_t* L_227 = String_Substring_m2501(L_223, L_224, ((int32_t)((int32_t)L_225-(int32_t)L_226)), /*hidden argument*/NULL);
		___uriString = L_227;
		String_t* L_228 = ___uriString;
		__this->___host_4 = L_228;
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_230 = ((int32_t)47);
		Object_t * L_231 = Box(Char_t266_il2cpp_TypeInfo_var, &L_230);
		String_t* L_232 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_233 = String_Concat_m606(NULL /*static, unused*/, L_231, L_232, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_234 = Uri_Reduce_m6074(NULL /*static, unused*/, L_233, 1, /*hidden argument*/NULL);
		__this->___path_6 = L_234;
		String_t* L_235 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_235;
		goto IL_071c;
	}

IL_05c7:
	{
		String_t* L_236 = (__this->___host_4);
		NullCheck(L_236);
		int32_t L_237 = String_get_Length_m478(L_236, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_238 = (__this->___host_4);
		NullCheck(L_238);
		uint16_t L_239 = String_get_Chars_m477(L_238, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_240 = (__this->___host_4);
		String_t* L_241 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_242 = String_Concat_m423(NULL /*static, unused*/, L_240, L_241, /*hidden argument*/NULL);
		__this->___path_6 = L_242;
		String_t* L_243 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_243;
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = (__this->___isUnixFilePath_1);
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		String_t* L_245 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_246 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral1210, L_245, /*hidden argument*/NULL);
		___uriString = L_246;
		String_t* L_247 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_247;
		goto IL_071c;
	}

IL_063a:
	{
		String_t* L_248 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_249 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_250 = String_op_Equality_m421(NULL /*static, unused*/, L_248, L_249, /*hidden argument*/NULL);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->___isUnc_10 = 1;
		goto IL_071c;
	}

IL_065b:
	{
		String_t* L_251 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_252 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_253 = String_op_Equality_m421(NULL /*static, unused*/, L_251, L_252, /*hidden argument*/NULL);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		String_t* L_254 = (__this->___host_4);
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m478(L_254, /*hidden argument*/NULL);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		String_t* L_256 = (__this->___host_4);
		__this->___path_6 = L_256;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_257 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_257;
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		String_t* L_258 = (__this->___host_4);
		NullCheck(L_258);
		int32_t L_259 = String_get_Length_m478(L_258, /*hidden argument*/NULL);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		String_t* L_260 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_261 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_262 = String_op_Equality_m421(NULL /*static, unused*/, L_260, L_261, /*hidden argument*/NULL);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_263 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_264 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_265 = String_op_Equality_m421(NULL /*static, unused*/, L_263, L_264, /*hidden argument*/NULL);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_266 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_267 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_268 = String_op_Equality_m421(NULL /*static, unused*/, L_266, L_267, /*hidden argument*/NULL);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_269 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_270 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_271 = String_op_Equality_m421(NULL /*static, unused*/, L_269, L_270, /*hidden argument*/NULL);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_272 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_273 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_274 = String_op_Equality_m421(NULL /*static, unused*/, L_272, L_273, /*hidden argument*/NULL);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return _stringLiteral1211;
	}

IL_071c:
	{
		String_t* L_275 = (__this->___host_4);
		NullCheck(L_275);
		int32_t L_276 = String_get_Length_m478(L_275, /*hidden argument*/NULL);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		String_t* L_277 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_278 = Uri_CheckHostName_m6048(NULL /*static, unused*/, L_277, /*hidden argument*/NULL);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_280 = (__this->___host_4);
		NullCheck(L_280);
		int32_t L_281 = String_get_Length_m478(L_280, /*hidden argument*/NULL);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_282 = (__this->___host_4);
		NullCheck(L_282);
		uint16_t L_283 = String_get_Chars_m477(L_282, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_284 = (__this->___host_4);
		String_t* L_285 = (__this->___host_4);
		NullCheck(L_285);
		int32_t L_286 = String_get_Length_m478(L_285, /*hidden argument*/NULL);
		NullCheck(L_284);
		uint16_t L_287 = String_get_Chars_m477(L_284, ((int32_t)((int32_t)L_286-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_288 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1127_il2cpp_TypeInfo_var);
		bool L_289 = IPv6Address_TryParse_m5369(NULL /*static, unused*/, L_288, (&V_12), /*hidden argument*/NULL);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		IPv6Address_t1127 * L_290 = V_12;
		NullCheck(L_290);
		String_t* L_291 = IPv6Address_ToString_m5379(L_290, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_292 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral471, L_291, _stringLiteral472, /*hidden argument*/NULL);
		__this->___host_4 = L_292;
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = 1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		UriParser_t1233 * L_294 = Uri_get_Parser_m6080(__this, /*hidden argument*/NULL);
		if (((DefaultUriParser_t1232 *)IsInstClass(L_294, DefaultUriParser_t1232_il2cpp_TypeInfo_var)))
		{
			goto IL_07e3;
		}
	}
	{
		UriParser_t1233 * L_295 = Uri_get_Parser_m6080(__this, /*hidden argument*/NULL);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		String_t* L_296 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_297 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral1212, L_296, _stringLiteral30, /*hidden argument*/NULL);
		String_t* L_298 = Locale_GetText_m5224(NULL /*static, unused*/, L_297, /*hidden argument*/NULL);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (UriFormatException_t1237 *)NULL;
		UriParser_t1233 * L_299 = Uri_get_Parser_m6080(__this, /*hidden argument*/NULL);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		UriParser_t1233 * L_300 = Uri_get_Parser_m6080(__this, /*hidden argument*/NULL);
		NullCheck(L_300);
		VirtActionInvoker2< Uri_t701 *, UriFormatException_t1237 ** >::Invoke(4 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, L_300, __this, (&V_13));
	}

IL_081a:
	{
		UriFormatException_t1237 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		UriFormatException_t1237 * L_302 = V_13;
		NullCheck(L_302);
		String_t* L_303 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_302);
		return L_303;
	}

IL_0829:
	{
		String_t* L_304 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_305 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_306 = String_op_Inequality_m1075(NULL /*static, unused*/, L_304, L_305, /*hidden argument*/NULL);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_307 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_308 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_309 = String_op_Inequality_m1075(NULL /*static, unused*/, L_307, L_308, /*hidden argument*/NULL);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_310 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_311 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_312 = String_op_Inequality_m1075(NULL /*static, unused*/, L_310, L_311, /*hidden argument*/NULL);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_313 = (__this->___path_6);
		String_t* L_314 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_315 = Uri_CompactEscaped_m6073(NULL /*static, unused*/, L_314, /*hidden argument*/NULL);
		String_t* L_316 = Uri_Reduce_m6074(NULL /*static, unused*/, L_313, L_315, /*hidden argument*/NULL);
		__this->___path_6 = L_316;
	}

IL_0884:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Uri::CompactEscaped(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1030;
extern Il2CppCodeGenString* _stringLiteral973;
extern Il2CppCodeGenString* _stringLiteral972;
extern Il2CppCodeGenString* _stringLiteral1183;
extern Il2CppCodeGenString* _stringLiteral1184;
extern "C" bool Uri_CompactEscaped_m6073 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral1030 = il2cpp_codegen_string_literal_from_index(1030);
		_stringLiteral973 = il2cpp_codegen_string_literal_from_index(973);
		_stringLiteral972 = il2cpp_codegen_string_literal_from_index(972);
		_stringLiteral1183 = il2cpp_codegen_string_literal_from_index(1183);
		_stringLiteral1184 = il2cpp_codegen_string_literal_from_index(1184);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_2 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_36;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t606 * L_3 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t606 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral1030, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral973, 0);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral972, 0);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral1183, 0);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1184, 0);
		Dictionary_2_t606 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_36 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_10 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_36;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}
}
// System.String System.Uri::Reduce(System.String,System.Boolean)
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t266_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1200;
extern Il2CppCodeGenString* _stringLiteral269;
extern Il2CppCodeGenString* _stringLiteral1189;
extern "C" String_t* Uri_Reduce_m6074 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		StringBuilder_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		Char_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral1200 = il2cpp_codegen_string_literal_from_index(1200);
		_stringLiteral269 = il2cpp_codegen_string_literal_from_index(269);
		_stringLiteral1189 = il2cpp_codegen_string_literal_from_index(1189);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t166 * V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	ArrayList_t920 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = {0};
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = {0};
	Object_t * V_12 = {0};
	uint16_t V_13 = 0x0;
	Object_t * V_14 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m421(NULL /*static, unused*/, L_0, _stringLiteral1200, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_0012:
	{
		StringBuilder_t166 * L_3 = (StringBuilder_t166 *)il2cpp_codegen_object_new (StringBuilder_t166_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2253(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = ___compact_escaped;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		String_t* L_5 = ___path;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m477(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		uint16_t L_8 = V_2;
		V_13 = L_8;
		uint16_t L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		uint16_t L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		StringBuilder_t166 * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m482(L_11, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___path;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m478(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_15 = ___path;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m477(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_17;
		String_t* L_18 = ___path;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m477(L_18, ((int32_t)((int32_t)L_19+(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t266_il2cpp_TypeInfo_var);
		uint16_t L_21 = Char_ToUpper_m2552(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		uint16_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		uint16_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		uint16_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		StringBuilder_t166 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m482(L_26, ((int32_t)47), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		StringBuilder_t166 * L_28 = V_0;
		uint16_t L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m482(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t166 * L_30 = V_0;
		uint16_t L_31 = V_2;
		NullCheck(L_30);
		StringBuilder_Append_m482(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		StringBuilder_t166 * L_32 = V_0;
		uint16_t L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_Append_m482(L_32, L_33, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		String_t* L_36 = ___path;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m478(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t166 * L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = StringBuilder_ToString_m481(L_38, /*hidden argument*/NULL);
		___path = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		String_t* L_40 = ___path;
		NullCheck(L_40);
		String_t* L_41 = String_Replace_m4136(L_40, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		___path = L_41;
	}

IL_0101:
	{
		ArrayList_t920 * L_42 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_42, /*hidden argument*/NULL);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		String_t* L_43 = ___path;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = String_IndexOf_m4040(L_43, ((int32_t)47), L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_47 = ___path;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m478(L_47, /*hidden argument*/NULL);
		V_7 = L_48;
	}

IL_012c:
	{
		String_t* L_49 = ___path;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m2501(L_49, L_50, ((int32_t)((int32_t)L_51-(int32_t)L_52)), /*hidden argument*/NULL);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)1));
		String_t* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m478(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		String_t* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m421(NULL /*static, unused*/, L_57, _stringLiteral269, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		String_t* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_60 = String_op_Equality_m421(NULL /*static, unused*/, L_59, _stringLiteral1189, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		ArrayList_t920 * L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		ArrayList_t920 * L_64 = V_5;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_64, ((int32_t)((int32_t)L_65-(int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		ArrayList_t920 * L_66 = V_5;
		String_t* L_67 = V_8;
		NullCheck(L_66);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		String_t* L_69 = ___path;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_m478(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t920 * L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return _stringLiteral1200;
	}

IL_01c2:
	{
		StringBuilder_t166 * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_set_Length_m480(L_73, 0, /*hidden argument*/NULL);
		String_t* L_74 = ___path;
		NullCheck(L_74);
		uint16_t L_75 = String_get_Chars_m477(L_74, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		StringBuilder_t166 * L_76 = V_0;
		NullCheck(L_76);
		StringBuilder_Append_m482(L_76, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_01e0:
	{
		V_10 = 1;
		ArrayList_t920 * L_77 = V_5;
		NullCheck(L_77);
		Object_t * L_78 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			Object_t * L_79 = V_12;
			NullCheck(L_79);
			Object_t * L_80 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_79);
			V_11 = ((String_t*)CastclassSealed(L_80, String_t_il2cpp_TypeInfo_var));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = 0;
			goto IL_0217;
		}

IL_020e:
		{
			StringBuilder_t166 * L_82 = V_0;
			NullCheck(L_82);
			StringBuilder_Append_m482(L_82, ((int32_t)47), /*hidden argument*/NULL);
		}

IL_0217:
		{
			StringBuilder_t166 * L_83 = V_0;
			String_t* L_84 = V_11;
			NullCheck(L_83);
			StringBuilder_Append_m4095(L_83, L_84, /*hidden argument*/NULL);
		}

IL_0220:
		{
			Object_t * L_85 = V_12;
			NullCheck(L_85);
			bool L_86 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			Object_t * L_87 = V_12;
			V_14 = ((Object_t *)IsInst(L_87, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			Object_t * L_89 = V_14;
			NullCheck(L_89);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0247:
	{
		String_t* L_90 = ___path;
		NullCheck(L_90);
		bool L_91 = String_EndsWith_m4134(L_90, _stringLiteral1200, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		StringBuilder_t166 * L_92 = V_0;
		NullCheck(L_92);
		StringBuilder_Append_m482(L_92, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0260:
	{
		StringBuilder_t166 * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = StringBuilder_ToString_m481(L_93, /*hidden argument*/NULL);
		return L_94;
	}
}
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t625_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1136;
extern Il2CppCodeGenString* _stringLiteral897;
extern "C" uint16_t Uri_HexUnescapeMultiByte_m6075 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		ByteU5BU5D_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		_stringLiteral1136 = il2cpp_codegen_string_literal_from_index(1136);
		_stringLiteral897 = il2cpp_codegen_string_literal_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t625* V_5 = {0};
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		uint16_t* L_0 = ___surrogate;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___pattern;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t275 * L_2 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_2, _stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0014:
	{
		int32_t* L_3 = ___index;
		if ((((int32_t)(*((int32_t*)L_3))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = ___index;
		String_t* L_5 = ___pattern;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m478(L_5, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_4))) < ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_t845 * L_7 = (ArgumentOutOfRangeException_t845 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t845_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5101(L_7, _stringLiteral897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0034:
	{
		String_t* L_8 = ___pattern;
		int32_t* L_9 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_10 = Uri_IsHexEncoding_m6060(NULL /*static, unused*/, L_8, (*((int32_t*)L_9)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_11 = ___pattern;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m477(L_11, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0053:
	{
		int32_t* L_17 = ___index;
		int32_t* L_18 = ___index;
		int32_t L_19 = (*((int32_t*)L_18));
		V_13 = L_19;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_13;
		V_0 = L_20;
		String_t* L_21 = ___pattern;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_13 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_13;
		NullCheck(L_21);
		uint16_t L_26 = String_get_Chars_m477(L_21, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_27 = Uri_FromHex_m6057(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		String_t* L_28 = ___pattern;
		int32_t* L_29 = ___index;
		int32_t* L_30 = ___index;
		int32_t L_31 = (*((int32_t*)L_30));
		V_13 = L_31;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_13;
		NullCheck(L_28);
		uint16_t L_33 = String_get_Chars_m477(L_28, L_32, /*hidden argument*/NULL);
		int32_t L_34 = Uri_FromHex_m6057(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = V_1;
		V_3 = L_35;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)4))|(int32_t)L_41))));
	}

IL_00b9:
	{
		int32_t L_42 = V_4;
		V_5 = ((ByteU5BU5D_t625*)SZArrayNew(ByteU5BU5D_t625_il2cpp_TypeInfo_var, L_42));
		V_6 = 0;
		ByteU5BU5D_t625* L_43 = V_5;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 0, sizeof(uint8_t))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44<<(int32_t)4))|(int32_t)L_45))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		String_t* L_46 = ___pattern;
		int32_t* L_47 = ___index;
		int32_t* L_48 = ___index;
		int32_t L_49 = (*((int32_t*)L_48));
		V_13 = L_49;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		bool L_51 = Uri_IsHexEncoding_m6060(NULL /*static, unused*/, L_46, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_00f5:
	{
		String_t* L_52 = ___pattern;
		int32_t* L_53 = ___index;
		int32_t* L_54 = ___index;
		int32_t L_55 = (*((int32_t*)L_54));
		V_13 = L_55;
		*((int32_t*)(L_53)) = (int32_t)((int32_t)((int32_t)L_55+(int32_t)1));
		int32_t L_56 = V_13;
		NullCheck(L_52);
		uint16_t L_57 = String_get_Chars_m477(L_52, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_58 = Uri_FromHex_m6057(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		int32_t L_59 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_0120:
	{
		String_t* L_60 = ___pattern;
		int32_t* L_61 = ___index;
		int32_t* L_62 = ___index;
		int32_t L_63 = (*((int32_t*)L_62));
		V_13 = L_63;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = V_13;
		NullCheck(L_60);
		uint16_t L_65 = String_get_Chars_m477(L_60, L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		int32_t L_66 = Uri_FromHex_m6057(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		V_9 = L_66;
		ByteU5BU5D_t625* L_67 = V_5;
		int32_t L_68 = V_7;
		int32_t L_69 = V_8;
		int32_t L_70 = V_9;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_68, sizeof(uint8_t))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)4))|(int32_t)L_70))));
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = V_4;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_75 = ___index;
		int32_t L_76 = V_0;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_76+(int32_t)3));
		ByteU5BU5D_t625* L_77 = V_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 0);
		int32_t L_78 = 0;
		return (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_78, sizeof(uint8_t)))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		uint8_t L_79 = V_10;
		int32_t L_80 = V_4;
		V_10 = (((uint8_t)((int32_t)((int32_t)L_79>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80+(int32_t)1))&(int32_t)((int32_t)31)))))));
		ByteU5BU5D_t625* L_81 = V_5;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 0);
		int32_t L_82 = 0;
		uint8_t L_83 = V_10;
		V_11 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_82, sizeof(uint8_t)))&(int32_t)L_83));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_84 = V_11;
		V_11 = ((int32_t)((int32_t)L_84<<(int32_t)6));
		int32_t L_85 = V_11;
		ByteU5BU5D_t625* L_86 = V_5;
		int32_t L_87 = V_12;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		int32_t L_88 = L_87;
		V_11 = ((int32_t)((int32_t)L_85|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_86, L_88, sizeof(uint8_t)))&(int32_t)((int32_t)63)))));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_01a4:
	{
		int32_t L_90 = V_12;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_92 = V_11;
		if ((((int32_t)L_92) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_93 = V_11;
		return (((uint16_t)L_93));
	}

IL_01bd:
	{
		int32_t L_94 = V_11;
		V_11 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = ___surrogate;
		int32_t L_96 = V_11;
		*((int16_t*)(L_95)) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_96&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320)))));
		int32_t L_97 = V_11;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_97>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296)))));
	}
}
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_GetSchemeDelimiter_m6076 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1236* L_0 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		String_t* L_2 = (((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_0, L_1, sizeof(UriScheme_t1235 )))->___scheme_0);
		String_t* L_3 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m421(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1236* L_5 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		String_t* L_7 = (((UriScheme_t1235 *)(UriScheme_t1235 *)SZArrayLdElema(L_5, L_6, sizeof(UriScheme_t1235 )))->___delimiter_1);
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1236* L_10 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		return L_11;
	}
}
// System.Int32 System.Uri::GetDefaultPort(System.String)
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern TypeInfo* UriParser_t1233_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetDefaultPort_m6077 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		s_Il2CppMethodIntialized = true;
	}
	UriParser_t1233 * V_0 = {0};
	{
		String_t* L_0 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
		UriParser_t1233 * L_1 = UriParser_GetParser_m6096(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UriParser_t1233 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		UriParser_t1233 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = UriParser_get_DefaultPort_m6092(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral470;
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m6078 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isOpaquePart_11);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteral470;
	}

IL_0011:
	{
		String_t* L_1 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_2 = Uri_GetSchemeDelimiter_m6076(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral973;
extern Il2CppCodeGenString* _stringLiteral972;
extern Il2CppCodeGenString* _stringLiteral1030;
extern Il2CppCodeGenString* _stringLiteral1032;
extern Il2CppCodeGenString* _stringLiteral1182;
extern Il2CppCodeGenString* _stringLiteral1179;
extern Il2CppCodeGenString* _stringLiteral1180;
extern Il2CppCodeGenString* _stringLiteral1181;
extern Il2CppCodeGenString* _stringLiteral1183;
extern Il2CppCodeGenString* _stringLiteral1184;
extern "C" bool Uri_IsPredefinedScheme_m6079 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral973 = il2cpp_codegen_string_literal_from_index(973);
		_stringLiteral972 = il2cpp_codegen_string_literal_from_index(972);
		_stringLiteral1030 = il2cpp_codegen_string_literal_from_index(1030);
		_stringLiteral1032 = il2cpp_codegen_string_literal_from_index(1032);
		_stringLiteral1182 = il2cpp_codegen_string_literal_from_index(1182);
		_stringLiteral1179 = il2cpp_codegen_string_literal_from_index(1179);
		_stringLiteral1180 = il2cpp_codegen_string_literal_from_index(1180);
		_stringLiteral1181 = il2cpp_codegen_string_literal_from_index(1181);
		_stringLiteral1183 = il2cpp_codegen_string_literal_from_index(1183);
		_stringLiteral1184 = il2cpp_codegen_string_literal_from_index(1184);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_2 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_37;
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_t606 * L_3 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t606 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral973, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral972, 0);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral1030, 0);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral1032, 0);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1182, 0);
		Dictionary_2_t606 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral1179, 0);
		Dictionary_2_t606 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral1180, 0);
		Dictionary_2_t606 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, _stringLiteral1181, 0);
		Dictionary_2_t606 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, _stringLiteral1183, 0);
		Dictionary_2_t606 * L_13 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, _stringLiteral1184, 0);
		Dictionary_2_t606 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_37 = L_14;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_15 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_37;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return 1;
	}

IL_00b7:
	{
		return 0;
	}
}
// System.UriParser System.Uri::get_Parser()
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
extern TypeInfo* UriParser_t1233_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1232_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1213;
extern "C" UriParser_t1233 * Uri_get_Parser_m6080 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		DefaultUriParser_t1232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		_stringLiteral1213 = il2cpp_codegen_string_literal_from_index(1213);
		s_Il2CppMethodIntialized = true;
	}
	{
		UriParser_t1233 * L_0 = (__this->___parser_32);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = Uri_get_Scheme_m6046(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
		UriParser_t1233 * L_2 = UriParser_GetParser_m6096(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___parser_32 = L_2;
		UriParser_t1233 * L_3 = (__this->___parser_32);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		DefaultUriParser_t1232 * L_4 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6034(L_4, _stringLiteral1213, /*hidden argument*/NULL);
		__this->___parser_32 = L_4;
	}

IL_0037:
	{
		UriParser_t1233 * L_5 = (__this->___parser_32);
		return L_5;
	}
}
// System.Void System.Uri::EnsureAbsoluteUri()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1214;
extern "C" void Uri_EnsureAbsoluteUri_m6081 (Uri_t701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral1214 = il2cpp_codegen_string_literal_from_index(1214);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Uri_get_IsAbsoluteUri_m6047(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t1075 * L_1 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_1, _stringLiteral1214, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m6082 (Object_t * __this /* static, unused */, Uri_t701 * ___u1, Uri_t701 * ___u2, const MethodInfo* method)
{
	{
		Uri_t701 * L_0 = ___u1;
		Uri_t701 * L_1 = ___u2;
		bool L_2 = Object_Equals_m6184(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Void System.UriFormatException::.ctor()
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral1215;
extern "C" void UriFormatException__ctor_m6083 (UriFormatException_t1237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1215 = il2cpp_codegen_string_literal_from_index(1215);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m5224(NULL /*static, unused*/, _stringLiteral1215, /*hidden argument*/NULL);
		FormatException__ctor_m4064(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void UriFormatException__ctor_m6084 (UriFormatException_t1237 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		FormatException__ctor_m4064(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void UriFormatException__ctor_m6085 (UriFormatException_t1237 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t818 * L_0 = ___info;
		StreamingContext_t819  L_1 = ___context;
		FormatException__ctor_m6185(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern "C" void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m6086 (UriFormatException_t1237 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t818 * L_0 = ___info;
		StreamingContext_t819  L_1 = ___context;
		Exception_GetObjectData_m6186(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Void System.UriParser::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UriParser__ctor_m6087 (UriParser_t1233 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriParser_t1233_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t877_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1216;
extern Il2CppCodeGenString* _stringLiteral1217;
extern "C" void UriParser__cctor_m6088 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		UriParser_t1233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		Regex_t877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		_stringLiteral1216 = il2cpp_codegen_string_literal_from_index(1216);
		_stringLiteral1217 = il2cpp_codegen_string_literal_from_index(1217);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m417(L_0, /*hidden argument*/NULL);
		((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___lock_object_0 = L_0;
		Regex_t877 * L_1 = (Regex_t877 *)il2cpp_codegen_object_new (Regex_t877_il2cpp_TypeInfo_var);
		Regex__ctor_m5217(L_1, _stringLiteral1216, /*hidden argument*/NULL);
		((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___uri_regex_4 = L_1;
		Regex_t877 * L_2 = (Regex_t877 *)il2cpp_codegen_object_new (Regex_t877_il2cpp_TypeInfo_var);
		Regex__ctor_m5217(L_2, _stringLiteral1217, /*hidden argument*/NULL);
		((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___auth_regex_5 = L_2;
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
// System.Uri
#include "System_System_Uri.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1237_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1213;
extern Il2CppCodeGenString* _stringLiteral1218;
extern "C" void UriParser_InitializeAndValidate_m6089 (UriParser_t1233 * __this, Uri_t701 * ___uri, UriFormatException_t1237 ** ___parsingError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		UriFormatException_t1237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(843);
		_stringLiteral1213 = il2cpp_codegen_string_literal_from_index(1213);
		_stringLiteral1218 = il2cpp_codegen_string_literal_from_index(1218);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t701 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m6046(L_0, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m1075(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m1075(NULL /*static, unused*/, L_4, _stringLiteral1213, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t1237 ** L_6 = ___parsingError;
		UriFormatException_t1237 * L_7 = (UriFormatException_t1237 *)il2cpp_codegen_object_new (UriFormatException_t1237_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6084(L_7, _stringLiteral1218, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_7;
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t1237 ** L_8 = ___parsingError;
		*((Object_t **)(L_8)) = (Object_t *)NULL;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UriParser_OnRegister_m6090 (UriParser_t1233 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m6091 (UriParser_t1233 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___scheme_name_2 = L_0;
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m6092 (UriParser_t1233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___default_port_3);
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m6093 (UriParser_t1233 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___default_port_3 = L_0;
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern TypeInfo* UriParser_t1233_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1232_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t701_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1219;
extern "C" void UriParser_CreateDefaults_m6094 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		DefaultUriParser_t1232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		Uri_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		_stringLiteral1219 = il2cpp_codegen_string_literal_from_index(1219);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t985 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___table_1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t985 * L_1 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t985 * L_2 = V_0;
		DefaultUriParser_t1232 * L_3 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t701_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t985 * L_5 = V_0;
		DefaultUriParser_t1232 * L_6 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t985 * L_8 = V_0;
		DefaultUriParser_t1232 * L_9 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t985 * L_11 = V_0;
		DefaultUriParser_t1232 * L_12 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t985 * L_14 = V_0;
		DefaultUriParser_t1232 * L_15 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t985 * L_17 = V_0;
		DefaultUriParser_t1232 * L_18 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t985 * L_20 = V_0;
		DefaultUriParser_t1232 * L_21 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_29;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t985 * L_23 = V_0;
		DefaultUriParser_t1232 * L_24 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_30;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t985 * L_26 = V_0;
		DefaultUriParser_t1232 * L_27 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t985 * L_29 = V_0;
		DefaultUriParser_t1232 * L_30 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t701_StaticFields*)Uri_t701_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t985 * L_32 = V_0;
		DefaultUriParser_t1232 * L_33 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m6095(NULL /*static, unused*/, L_32, L_33, _stringLiteral1219, ((int32_t)389), /*hidden argument*/NULL);
		Object_t * L_34 = ((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___lock_object_0;
		V_1 = L_34;
		Object_t * L_35 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_36 = ((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___table_1;
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t985 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
			((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___table_1 = L_37;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t985 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Object_t * L_38 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.UriParser
#include "System_System_UriParser.h"
extern TypeInfo* GenericUriParser_t1234_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1232_il2cpp_TypeInfo_var;
extern "C" void UriParser_InternalRegister_m6095 (Object_t * __this /* static, unused */, Hashtable_t985 * ___table, UriParser_t1233 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericUriParser_t1234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(847);
		DefaultUriParser_t1232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		s_Il2CppMethodIntialized = true;
	}
	DefaultUriParser_t1232 * V_0 = {0};
	{
		UriParser_t1233 * L_0 = ___uriParser;
		String_t* L_1 = ___schemeName;
		NullCheck(L_0);
		UriParser_set_SchemeName_m6091(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t1233 * L_2 = ___uriParser;
		int32_t L_3 = ___defaultPort;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m6093(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t1233 * L_4 = ___uriParser;
		if (!((GenericUriParser_t1234 *)IsInstClass(L_4, GenericUriParser_t1234_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t985 * L_5 = ___table;
		String_t* L_6 = ___schemeName;
		UriParser_t1233 * L_7 = ___uriParser;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t1232 * L_8 = (DefaultUriParser_t1232 *)il2cpp_codegen_object_new (DefaultUriParser_t1232_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6033(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t1232 * L_9 = V_0;
		String_t* L_10 = ___schemeName;
		NullCheck(L_9);
		UriParser_set_SchemeName_m6091(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t1232 * L_11 = V_0;
		int32_t L_12 = ___defaultPort;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m6093(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t985 * L_13 = ___table;
		String_t* L_14 = ___schemeName;
		DefaultUriParser_t1232 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t1233 * L_16 = ___uriParser;
		String_t* L_17 = ___schemeName;
		int32_t L_18 = ___defaultPort;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* UriParser_t1233_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t844_il2cpp_TypeInfo_var;
extern "C" UriParser_t1233 * UriParser_GetParser_m6096 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		CultureInfo_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___schemeName;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t1233 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1233_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m6094(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t844_il2cpp_TypeInfo_var);
		CultureInfo_t844 * L_2 = CultureInfo_get_InvariantCulture_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m6181(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t985 * L_4 = ((UriParser_t1233_StaticFields*)UriParser_t1233_il2cpp_TypeInfo_var->static_fields)->___table_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t1233 *)CastclassClass(L_6, UriParser_t1233_il2cpp_TypeInfo_var));
	}
}
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// System.Security.Cryptography.X509Certificates.X509Chain
#include "System_System_Security_Cryptography_X509Certificates_X509Cha.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void RemoteCertificateValidationCallback__ctor_m6097 (RemoteCertificateValidationCallback_t1077 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// System.Security.Cryptography.X509Certificates.X509Chain
#include "System_System_Security_Cryptography_X509Certificates_X509Cha.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"
extern "C" bool RemoteCertificateValidationCallback_Invoke_m5193 (RemoteCertificateValidationCallback_t1077 * __this, Object_t * ___sender, X509Certificate_t1019 * ___certificate, X509Chain_t1079 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RemoteCertificateValidationCallback_Invoke_m5193((RemoteCertificateValidationCallback_t1077 *)__this->___prev_9,___sender, ___certificate, ___chain, ___sslPolicyErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, X509Certificate_t1019 * ___certificate, X509Chain_t1079 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, X509Certificate_t1019 * ___certificate, X509Chain_t1079 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1019 * ___certificate, X509Chain_t1079 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1077(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t1019 * ___certificate, X509Chain_t1079 * ___chain, int32_t ___sslPolicyErrors)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* SslPolicyErrors_t1112_il2cpp_TypeInfo_var;
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m6098 (RemoteCertificateValidationCallback_t1077 * __this, Object_t * ___sender, X509Certificate_t1019 * ___certificate, X509Chain_t1079 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslPolicyErrors_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(740);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___certificate;
	__d_args[2] = ___chain;
	__d_args[3] = Box(SslPolicyErrors_t1112_il2cpp_TypeInfo_var, &___sslPolicyErrors);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m6099 (RemoteCertificateValidationCallback_t1077 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void MatchEvaluator__ctor_m6100 (MatchEvaluator_t1242 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
extern "C" String_t* MatchEvaluator_Invoke_m6101 (MatchEvaluator_t1242 * __this, Match_t1087 * ___match, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MatchEvaluator_Invoke_m6101((MatchEvaluator_t1242 *)__this->___prev_9,___match, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t *, Object_t * __this, Match_t1087 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, Match_t1087 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.String
#include "mscorlib_System_String.h"
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t1242(Il2CppObject* delegate, Match_t1087 * ___match)
{
	// Marshaling of parameter '___match' to native representation
	Match_t1087 * ____match_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Text.RegularExpressions.Match'."));
}
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * MatchEvaluator_BeginInvoke_m6102 (MatchEvaluator_t1242 * __this, Match_t1087 * ___match, AsyncCallback_t391 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___match;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C" String_t* MatchEvaluator_EndInvoke_m6103 (MatchEvaluator_t1242 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (String_t*)__result;
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128.h"
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1243_marshal(const U24ArrayTypeU24128_t1243& unmarshaled, U24ArrayTypeU24128_t1243_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24128_t1243_marshal_back(const U24ArrayTypeU24128_t1243_marshaled& marshaled, U24ArrayTypeU24128_t1243& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1243_marshal_cleanup(U24ArrayTypeU24128_t1243_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412.h"
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1244_marshal(const U24ArrayTypeU2412_t1244& unmarshaled, U24ArrayTypeU2412_t1244_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2412_t1244_marshal_back(const U24ArrayTypeU2412_t1244_marshaled& marshaled, U24ArrayTypeU2412_t1244& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1244_marshal_cleanup(U24ArrayTypeU2412_t1244_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
#ifdef __clang__
#pragma clang diagnostic pop
#endif