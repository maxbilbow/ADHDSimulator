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

// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2136;
extern "C" void TargetInvocationException__ctor_m8908 (TargetInvocationException_t1529 * __this, Exception_t154 * ___inner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2136 = il2cpp_codegen_string_literal_from_index(2136);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t154 * L_0 = ___inner;
		Exception__ctor_m4139(__this, _stringLiteral2136, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void TargetInvocationException__ctor_m8909 (TargetInvocationException_t1529 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___sc, const MethodInfo* method)
{
	{
		SerializationInfo_t818 * L_0 = ___info;
		StreamingContext_t819  L_1 = ___sc;
		Exception__ctor_m4140(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Void System.Reflection.TargetParameterCountException::.ctor()
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2137;
extern "C" void TargetParameterCountException__ctor_m8910 (TargetParameterCountException_t1530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m7038(NULL /*static, unused*/, _stringLiteral2137, /*hidden argument*/NULL);
		Exception__ctor_m457(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void TargetParameterCountException__ctor_m8911 (TargetParameterCountException_t1530 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m457(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void TargetParameterCountException__ctor_m8912 (TargetParameterCountException_t1530 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t818 * L_0 = ___info;
		StreamingContext_t819  L_1 = ___context;
		Exception__ctor_m4140(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2138;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m8913 (NeutralResourcesLanguageAttribute_t1532 * __this, String_t* ___cultureName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, _stringLiteral2138, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
extern TypeInfo* Version_t1124_il2cpp_TypeInfo_var;
extern "C" void SatelliteContractVersionAttribute__ctor_m8914 (SatelliteContractVersionAttribute_t1533 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t1124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		Version_t1124 * L_1 = (Version_t1124 *)il2cpp_codegen_object_new (Version_t1124_il2cpp_TypeInfo_var);
		Version__ctor_m11103(L_1, L_0, /*hidden argument*/NULL);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void CompilationRelaxationsAttribute__ctor_m8915 (CompilationRelaxationsAttribute_t1535 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"
// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DefaultDependencyAttribute__ctor_m8916 (DefaultDependencyAttribute_t1536 * __this, int32_t ___loadHintArgument, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"
// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void StringFreezingAttribute__ctor_m8917 (StringFreezingAttribute_t1539 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CriticalFinalizerObject__ctor_m8918 (CriticalFinalizerObject_t1542 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern "C" void CriticalFinalizerObject_Finalize_m8919 (CriticalFinalizerObject_t1542 * __this, const MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m4002(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"
// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ReliabilityContractAttribute__ctor_m8920 (ReliabilityContractAttribute_t1543 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___consistencyGuarantee;
		__this->___consistency_0 = L_0;
		int32_t L_1 = ___cer;
		__this->___cer_1 = L_1;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"
// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ClassInterfaceAttribute__ctor_m8921 (ClassInterfaceAttribute_t1547 * __this, int32_t ___classInterfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___classInterfaceType;
		__this->___ciType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ComDefaultInterfaceAttribute__ctor_m8922 (ComDefaultInterfaceAttribute_t1549 * __this, Type_t * ___defaultInterface, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___defaultInterface;
		__this->____type_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DispIdAttribute__ctor_m8923 (DispIdAttribute_t1551 * __this, int32_t ___dispId, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___dispId;
		__this->___id_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"
extern "C" void GCHandle__ctor_m8924 (GCHandle_t1552 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		int32_t L_0 = ___type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___type;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0011;
		}
	}

IL_000e:
	{
		___type = 2;
	}

IL_0011:
	{
		Object_t * L_2 = ___value;
		int32_t L_3 = ___type;
		int32_t L_4 = GCHandle_GetTargetHandle_m8930(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m8925 (GCHandle_t1552 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2139;
extern "C" Object_t * GCHandle_get_Target_m8926 (GCHandle_t1552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GCHandle_get_IsAllocated_m8925(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7038(NULL /*static, unused*/, _stringLiteral2139, /*hidden argument*/NULL);
		InvalidOperationException_t1075 * L_2 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001b:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m8929(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" GCHandle_t1552  GCHandle_Alloc_m8927 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t1552  L_2 = {0};
		GCHandle__ctor_m8924(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" void GCHandle_Free_m8928 (GCHandle_t1552 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m8931(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Object_t * GCHandle_GetTarget_m8929 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*GCHandle_GetTarget_m8929_ftn) (int32_t);
	return  ((GCHandle_GetTarget_m8929_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTarget) (___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m8930 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef int32_t (*GCHandle_GetTargetHandle_m8930_ftn) (Object_t *, int32_t, int32_t);
	return  ((GCHandle_GetTargetHandle_m8930_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTargetHandle) (___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m8931 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*GCHandle_FreeHandle_m8931_ftn) (int32_t);
	 ((GCHandle_FreeHandle_m8931_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::FreeHandle) (___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern TypeInfo* GCHandle_t1552_il2cpp_TypeInfo_var;
extern "C" bool GCHandle_Equals_m8932 (GCHandle_t1552 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GCHandle_t1552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1060);
		s_Il2CppMethodIntialized = true;
	}
	GCHandle_t1552  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInstSealed(L_1, GCHandle_t1552_il2cpp_TypeInfo_var)))
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
		int32_t L_2 = (__this->___handle_0);
		Object_t * L_3 = ___o;
		V_0 = ((*(GCHandle_t1552 *)((GCHandle_t1552 *)UnBox (L_3, GCHandle_t1552_il2cpp_TypeInfo_var))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern "C" int32_t GCHandle_GetHashCode_m8933 (GCHandle_t1552 * __this, const MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m4016(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void InterfaceTypeAttribute__ctor_m8934 (InterfaceTypeAttribute_t1554 * __this, int32_t ___interfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___interfaceType;
		__this->___intType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.Marshal::.cctor()
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
extern TypeInfo* Marshal_t1555_il2cpp_TypeInfo_var;
extern "C" void Marshal__cctor_m8935 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(911);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		((Marshal_t1555_StaticFields*)Marshal_t1555_il2cpp_TypeInfo_var->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t1834 * L_0 = Environment_get_OSVersion_m10730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m10990(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		((Marshal_t1555_StaticFields*)Marshal_t1555_il2cpp_TypeInfo_var->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void Marshal_copy_from_unmanaged_m8936 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*Marshal_copy_from_unmanaged_m8936_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	 ((Marshal_copy_from_unmanaged_m8936_ftn)mscorlib::System::Runtime::InteropServices::Marshal::copy_from_unmanaged) (___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
extern TypeInfo* Marshal_t1555_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m8937 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t625* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(911);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		ByteU5BU5D_t625* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1555_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m8936(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t1555_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m8938 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t165* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(911);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t165* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1555_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m8936(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2140;
extern "C" void MarshalDirectiveException__ctor_m8939 (MarshalDirectiveException_t1556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m7038(NULL /*static, unused*/, _stringLiteral2140, /*hidden argument*/NULL);
		SystemException__ctor_m6163(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m4138(__this, ((int32_t)-2146233035), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void MarshalDirectiveException__ctor_m8940 (MarshalDirectiveException_t1556 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t818 * L_0 = ___info;
		StreamingContext_t819  L_1 = ___context;
		SystemException__ctor_m11023(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void PreserveSigAttribute__ctor_m8941 (PreserveSigAttribute_t1557 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"
extern "C" void SafeHandle__ctor_m8942 (SafeHandle_t1298 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m8918(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_Close_m8943 (SafeHandle_t1298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m495(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t905 * L_3 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m10237(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_0070;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
		__this->___refcount_2 = (-1);
	}

IL_0070:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousAddRef_m8944 (SafeHandle_t1298 * __this, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m495(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t905 * L_3 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_7 = Object_GetType_m495(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		ObjectDisposedException_t905 * L_9 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0040:
	{
		int32_t* L_10 = &(__this->___refcount_2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = Interlocked_CompareExchange_m10237(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001d;
		}
	}
	{
		bool* L_15 = ___success;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m8945 (SafeHandle_t1298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m495(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t905 * L_3 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001d:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern TypeInfo* ObjectDisposedException_t905_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousRelease_m8946 (SafeHandle_t1298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t905_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m495(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t905 * L_3 = (ObjectDisposedException_t905 *)il2cpp_codegen_object_new (ObjectDisposedException_t905_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m4219(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m10237(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
	}

IL_006a:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern "C" void SafeHandle_Dispose_m8947 (SafeHandle_t1298 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m4215(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"
extern "C" void SafeHandle_Dispose_m8948 (SafeHandle_t1298 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		SafeHandle_Close_m8943(__this, /*hidden argument*/NULL);
		goto IL_0011;
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m8949 (SafeHandle_t1298 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m8950 (SafeHandle_t1298 * __this, const MethodInfo* method)
{
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
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0029;
			}
		}

IL_000b:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
			if (L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
			IntPtr_t L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m8919(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void TypeLibImportClassAttribute__ctor_m8951 (TypeLibImportClassAttribute_t1558 * __this, Type_t * ___importClass, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___importClass;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		__this->____importClass_0 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"
// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void TypeLibVersionAttribute__ctor_m8952 (TypeLibVersionAttribute_t1559 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
extern TypeInfo* ActivationServices_t1561_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionLevelActivator_t1564_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m8953 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivationServices_t1561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		ConstructionLevelActivator_t1564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivationServices_t1561_StaticFields*)ActivationServices_t1561_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ConstructionLevelActivator_t1564 * L_1 = (ConstructionLevelActivator_t1564 *)il2cpp_codegen_object_new (ConstructionLevelActivator_t1564_il2cpp_TypeInfo_var);
		ConstructionLevelActivator__ctor_m8959(L_1, /*hidden argument*/NULL);
		((ActivationServices_t1561_StaticFields*)ActivationServices_t1561_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = ((ActivationServices_t1561_StaticFields*)ActivationServices_t1561_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* IContextAttribute_t1929_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* UrlAttribute_t1567_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2141;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m8954 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t148* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextAttribute_t1929_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		UrlAttribute_t1567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		_stringLiteral2141 = il2cpp_codegen_string_literal_from_index(2141);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t148* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t1632 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t148* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0040;
	}

IL_000b:
	{
		ObjectU5BU5D_t148* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3, sizeof(Object_t *)));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, IContextAttribute_t1929_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RemotingException_t1648 * L_5 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_5, _stringLiteral2141, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t1567 *)IsInstSealed(L_6, UrlAttribute_t1567_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t1567 *)CastclassSealed(L_7, UrlAttribute_t1567_il2cpp_TypeInfo_var)));
		String_t* L_8 = UrlAttribute_get_UrlValue_m8961(((UrlAttribute_t1567 *)CastclassSealed(L_7, UrlAttribute_t1567_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003c:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t148* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t148* L_15 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		Object_t * L_16 = RemotingServices_CreateClientProxy_m9345(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0058:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry_t1632 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m9287(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ActivatedClientTypeEntry_t1632 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_0070;
		}
	}
	{
		ActivatedClientTypeEntry_t1632 * L_20 = V_4;
		ObjectU5BU5D_t148* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		Object_t * L_22 = RemotingServices_CreateClientProxy_m9344(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0070:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_23);
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t148* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m9346(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0083:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern TypeInfo* ConstructionCall_t1601_il2cpp_TypeInfo_var;
extern TypeInfo* AppDomainLevelActivator_t1563_il2cpp_TypeInfo_var;
extern TypeInfo* ContextLevelActivator_t1565_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IContextAttribute_t1929_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" ConstructionCall_t1601 * ActivationServices_CreateConstructionCall_m8955 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t148* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1068);
		AppDomainLevelActivator_t1563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		ContextLevelActivator_t1565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1070);
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IContextAttribute_t1929_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCall_t1601 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t920 * V_2 = {0};
	bool V_3 = false;
	Context_t1576 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t148* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t148* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t1601 * L_1 = (ConstructionCall_t1601 *)il2cpp_codegen_object_new (ConstructionCall_t1601_il2cpp_TypeInfo_var);
		ConstructionCall__ctor_m9085(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ConstructionCall_t1601 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m8953(NULL /*static, unused*/, /*hidden argument*/NULL);
		AppDomainLevelActivator_t1563 * L_7 = (AppDomainLevelActivator_t1563 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1563_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m8958(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_4, L_7);
		ConstructionCall_t1601 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m9088(L_8, 0, /*hidden argument*/NULL);
		ConstructionCall_t1601 * L_9 = V_0;
		return L_9;
	}

IL_002c:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m8953(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t1565 * L_12 = (ContextLevelActivator_t1565 *)il2cpp_codegen_object_new (ContextLevelActivator_t1565_il2cpp_TypeInfo_var);
		ContextLevelActivator__ctor_m8960(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		ArrayList_t920 * L_13 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		ObjectU5BU5D_t148* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_004c;
		}
	}
	{
		ArrayList_t920 * L_15 = V_2;
		ObjectU5BU5D_t148* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_004c:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m421(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		Context_t1576 * L_20 = Thread_get_CurrentContext_m10256(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		ArrayList_t920 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
		V_6 = L_23;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_0072:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_24);
			V_5 = ((Object_t *)Castclass(L_25, IContextAttribute_t1929_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_5;
			Context_t1576 * L_27 = V_4;
			ConstructionCall_t1601 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t1576 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1929_il2cpp_TypeInfo_var, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			V_3 = 0;
			goto IL_00a2;
		}

IL_0096:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_0072;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_00b5;
			}
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00b5:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(167)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00bd:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t148* L_36 = (ObjectU5BU5D_t148*)VirtFuncInvoker1< ObjectU5BU5D_t148*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t148* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_010d;
	}

IL_00d2:
	{
		ObjectU5BU5D_t148* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40, sizeof(Object_t *)));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, IContextAttribute_t1929_il2cpp_TypeInfo_var)))
		{
			goto IL_0107;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t1576 * L_44 = V_4;
		ConstructionCall_t1601 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, IContextAttribute_t1929_il2cpp_TypeInfo_var)));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t1576 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1929_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IContextAttribute_t1929_il2cpp_TypeInfo_var)), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B19_0 = 0;
	}

IL_00fd:
	{
		V_3 = G_B19_0;
		ArrayList_t920 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_48);
	}

IL_0107:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_010d:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t148* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0174;
		}
	}
	{
		ConstructionCall_t1601 * L_53 = V_0;
		ArrayList_t920 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t148* L_55 = (ObjectU5BU5D_t148*)VirtFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m9094(L_53, L_55, /*hidden argument*/NULL);
		ArrayList_t920 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_56);
		V_12 = L_57;
	}

IL_0132:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014d;
		}

IL_0137:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_58);
			V_11 = ((Object_t *)Castclass(L_59, IContextAttribute_t1929_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_11;
			ConstructionCall_t1601 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1929_il2cpp_TypeInfo_var, L_60, L_61);
		}

IL_014d:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_0137;
			}
		}

IL_0159:
		{
			IL2CPP_LEAVE(0x174, FINALLY_015e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_015e;
	}

FINALLY_015e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_016c;
			}
		}

IL_016b:
		{
			IL2CPP_END_FINALLY(350)
		}

IL_016c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(350)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(350)
	{
		IL2CPP_JUMP_TBL(0x174, IL_0174)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0174:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		String_t* L_68 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Inequality_m1075(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_018c;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t1563 * L_72 = (AppDomainLevelActivator_t1563 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1563_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m8958(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_018c:
	{
		ConstructionCall_t1601 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_73, L_74);
		ConstructionCall_t1601 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m9088(L_75, L_76, /*hidden argument*/NULL);
		ConstructionCall_t1601 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m8956 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m8956_ftn) (Type_t *);
	return  ((ActivationServices_AllocateUninitializedClassInstance_m8956_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance) (___type);
}
// System.Void System.Runtime.Remoting.Activation.ActivationServices::EnableProxyActivation(System.Type,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ActivationServices_EnableProxyActivation_m8957 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___enable, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*ActivationServices_EnableProxyActivation_m8957_ftn) (Type_t *, bool);
	 ((ActivationServices_EnableProxyActivation_m8957_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation) (___type, ___enable);
}
// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AppDomainLevelActivator__ctor_m8958 (AppDomainLevelActivator_t1563 * __this, String_t* ___activationUrl, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ConstructionLevelActivator__ctor_m8959 (ConstructionLevelActivator_t1564 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ContextLevelActivator__ctor_m8960 (ContextLevelActivator_t1565 * __this, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"
// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m8961 (UrlAttribute_t1567 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* UrlAttribute_t1567_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UrlAttribute_Equals_m8962 (UrlAttribute_t1567 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UrlAttribute_t1567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t1567 *)IsInstSealed(L_0, UrlAttribute_t1567_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t1567 *)CastclassSealed(L_1, UrlAttribute_t1567_il2cpp_TypeInfo_var)));
		String_t* L_2 = UrlAttribute_get_UrlValue_m8961(((UrlAttribute_t1567 *)CastclassSealed(L_1, UrlAttribute_t1567_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m421(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C" int32_t UrlAttribute_GetHashCode_m8963 (UrlAttribute_t1567 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m4019(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void UrlAttribute_GetPropertiesForNewContext_m8964 (UrlAttribute_t1567 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
extern "C" bool UrlAttribute_IsContextOK_m8965 (UrlAttribute_t1567 * __this, Context_t1576 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern "C" void ChannelInfo__ctor_m8966 (ChannelInfo_t1569 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t148* L_0 = ChannelServices_GetCurrentChannelInfo_m8975(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern "C" ObjectU5BU5D_t148* ChannelInfo_get_ChannelData_m8967 (ChannelInfo_t1569 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern TypeInfo* CrossContextChannel_t1571_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2142;
extern Il2CppCodeGenString* _stringLiteral2143;
extern Il2CppCodeGenString* _stringLiteral2144;
extern "C" void ChannelServices__cctor_m8968 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		CrossContextChannel_t1571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1072);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		_stringLiteral2143 = il2cpp_codegen_string_literal_from_index(2143);
		_stringLiteral2144 = il2cpp_codegen_string_literal_from_index(2144);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t1571 * L_2 = (CrossContextChannel_t1571 *)il2cpp_codegen_object_new (CrossContextChannel_t1571_il2cpp_TypeInfo_var);
		CrossContextChannel__ctor_m9044(L_2, /*hidden argument*/NULL);
		((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3 = _stringLiteral2142;
		StringU5BU5D_t35* L_3 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, _stringLiteral2143);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2143;
		StringU5BU5D_t35* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, _stringLiteral2144);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2144;
		((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1913_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelSender_t1912_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m8969 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___remoteChannelData, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IChannel_t1913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		IChannelSender_t1912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t148* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___remoteChannelData;
		V_0 = ((ObjectU5BU5D_t148*)Castclass(L_0, ObjectU5BU5D_t148_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		ArrayList_t920 * L_1 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_4 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_0028:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_6);
				V_2 = ((Object_t *)Castclass(L_7, IChannel_t1913_il2cpp_TypeInfo_var));
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelSender_t1912_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (L_9)
				{
					goto IL_0048;
				}
			}

IL_0043:
			{
				goto IL_0064;
			}

IL_0048:
			{
				Object_t * L_10 = V_4;
				String_t* L_11 = ___url;
				ObjectU5BU5D_t148* L_12 = V_0;
				String_t** L_13 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
				Object_t * L_14 = ChannelServices_CreateClientChannelSinkChain_m8970(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
				V_5 = L_14;
				Object_t * L_15 = V_5;
				if (!L_15)
				{
					goto IL_0064;
				}
			}

IL_005b:
			{
				Object_t * L_16 = V_5;
				V_9 = L_16;
				IL2CPP_LEAVE(0x114, FINALLY_0074);
			}

IL_0064:
			{
				Object_t * L_17 = V_3;
				NullCheck(L_17);
				bool L_18 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0028;
				}
			}

IL_006f:
			{
				IL2CPP_LEAVE(0x89, FINALLY_0074);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_0074;
		}

FINALLY_0074:
		{ // begin finally (depth: 2)
			{
				Object_t * L_19 = V_3;
				V_10 = ((Object_t *)IsInst(L_19, IDisposable_t157_il2cpp_TypeInfo_var));
				Object_t * L_20 = V_10;
				if (L_20)
				{
					goto IL_0081;
				}
			}

IL_0080:
			{
				IL2CPP_END_FINALLY(116)
			}

IL_0081:
			{
				Object_t * L_21 = V_10;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_21);
				IL2CPP_END_FINALLY(116)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(116)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x89, IL_0089)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_0089:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			RemotingConfiguration_LoadDefaultDelayedChannels_m9286(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_22 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			NullCheck(L_22);
			Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
			V_7 = L_23;
		}

IL_009a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00dc;
			}

IL_009f:
			{
				Object_t * L_24 = V_7;
				NullCheck(L_24);
				Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_24);
				V_6 = ((Object_t *)Castclass(L_25, IChannelSender_t1912_il2cpp_TypeInfo_var));
				Object_t * L_26 = V_6;
				String_t* L_27 = ___url;
				ObjectU5BU5D_t148* L_28 = V_0;
				String_t** L_29 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
				Object_t * L_30 = ChannelServices_CreateClientChannelSinkChain_m8970(NULL /*static, unused*/, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
				V_8 = L_30;
				Object_t * L_31 = V_8;
				if (!L_31)
				{
					goto IL_00dc;
				}
			}

IL_00c0:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
				ArrayList_t920 * L_32 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
				Object_t * L_33 = V_6;
				NullCheck(L_32);
				VirtActionInvoker1< Object_t * >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_32, L_33);
				Object_t * L_34 = V_6;
				ChannelServices_RegisterChannel_m8971(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
				Object_t * L_35 = V_8;
				V_9 = L_35;
				IL2CPP_LEAVE(0x114, FINALLY_00ed);
			}

IL_00dc:
			{
				Object_t * L_36 = V_7;
				NullCheck(L_36);
				bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_009f;
				}
			}

IL_00e8:
			{
				IL2CPP_LEAVE(0x103, FINALLY_00ed);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_00ed;
		}

FINALLY_00ed:
		{ // begin finally (depth: 2)
			{
				Object_t * L_38 = V_7;
				V_11 = ((Object_t *)IsInst(L_38, IDisposable_t157_il2cpp_TypeInfo_var));
				Object_t * L_39 = V_11;
				if (L_39)
				{
					goto IL_00fb;
				}
			}

IL_00fa:
			{
				IL2CPP_END_FINALLY(237)
			}

IL_00fb:
			{
				Object_t * L_40 = V_11;
				NullCheck(L_40);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_40);
				IL2CPP_END_FINALLY(237)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(237)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x103, IL_0103)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_0103:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		Object_t * L_41 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(264)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_JUMP_TBL(0x114, IL_0114)
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_010f:
	{
		String_t** L_42 = ___objectUri;
		*((Object_t **)(L_42)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}

IL_0114:
	{
		Object_t * L_43 = V_9;
		return L_43;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* IChannelSender_t1912_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelDataStore_t1930_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m8970 (Object_t * __this /* static, unused */, Object_t * ___sender, String_t* ___url, ObjectU5BU5D_t148* ___channelDataArray, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		IChannelDataStore_t1930_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t148* V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		String_t** L_0 = ___objectUri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		ObjectU5BU5D_t148* L_1 = ___channelDataArray;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_2 = ___sender;
		String_t* L_3 = ___url;
		String_t** L_4 = ___objectUri;
		NullCheck(L_2);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1912_il2cpp_TypeInfo_var, L_2, L_3, NULL, L_4);
		return L_5;
	}

IL_0013:
	{
		ObjectU5BU5D_t148* L_6 = ___channelDataArray;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0050;
	}

IL_001c:
	{
		ObjectU5BU5D_t148* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9, sizeof(Object_t *)));
		Object_t * L_10 = V_0;
		if (!((Object_t *)IsInst(L_10, IChannelDataStore_t1930_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_11 = ___sender;
		Object_t * L_12 = V_0;
		String_t** L_13 = ___objectUri;
		NullCheck(L_11);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1912_il2cpp_TypeInfo_var, L_11, (String_t*)NULL, L_12, L_13);
		V_3 = L_14;
		goto IL_0044;
	}

IL_003a:
	{
		Object_t * L_15 = ___sender;
		String_t* L_16 = ___url;
		Object_t * L_17 = V_0;
		String_t** L_18 = ___objectUri;
		NullCheck(L_15);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1912_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		V_3 = L_19;
	}

IL_0044:
	{
		Object_t * L_20 = V_3;
		if (!L_20)
		{
			goto IL_004c;
		}
	}
	{
		Object_t * L_21 = V_3;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_2;
		ObjectU5BU5D_t148* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		return (Object_t *)NULL;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m8971 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m8972(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* ISecurableChannel_t1931_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1913_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1932_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2145;
extern Il2CppCodeGenString* _stringLiteral2146;
extern Il2CppCodeGenString* _stringLiteral2147;
extern Il2CppCodeGenString* _stringLiteral2148;
extern "C" void ChannelServices_RegisterChannel_m8972 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ISecurableChannel_t1931_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1076);
		IChannel_t1913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		IChannelReceiver_t1932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1077);
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		_stringLiteral2145 = il2cpp_codegen_string_literal_from_index(2145);
		_stringLiteral2146 = il2cpp_codegen_string_literal_from_index(2146);
		_stringLiteral2147 = il2cpp_codegen_string_literal_from_index(2147);
		_stringLiteral2148 = il2cpp_codegen_string_literal_from_index(2148);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, _stringLiteral2145, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, ISecurableChannel_t1931_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1913_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m486(NULL /*static, unused*/, _stringLiteral2146, L_6, /*hidden argument*/NULL);
		RemotingException_t1648 * L_8 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_003a:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean) */, ISecurableChannel_t1931_il2cpp_TypeInfo_var, L_9, 1);
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		ArrayList_t920 * L_10 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00d4;
		}

IL_005b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_13 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, IChannel_t1913_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1913_il2cpp_TypeInfo_var, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1913_il2cpp_TypeInfo_var, L_18);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m421(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b5;
			}
		}

IL_0084:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1913_il2cpp_TypeInfo_var, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m1075(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00b5;
			}
		}

IL_0099:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1913_il2cpp_TypeInfo_var, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2147, L_26, _stringLiteral2148, /*hidden argument*/NULL);
			RemotingException_t1648 * L_28 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
			RemotingException__ctor_m9331(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_28);
		}

IL_00b5:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1913_il2cpp_TypeInfo_var, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1913_il2cpp_TypeInfo_var, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00d0;
			}
		}

IL_00c7:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00d0;
			}
		}

IL_00ce:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00d0:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00d4:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_37 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_005b;
			}
		}

IL_00e4:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00fc;
			}
		}

IL_00eb:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_40 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(35 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
			goto IL_0108;
		}

IL_00fc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_43 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_0108:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, IChannelReceiver_t1932_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0139;
			}
		}

IL_0117:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			Object_t * L_47 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m495(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1207_il2cpp_TypeInfo_var, L_47, L_50);
			if (!L_51)
			{
				goto IL_0139;
			}
		}

IL_0131:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object) */, IChannelReceiver_t1932_il2cpp_TypeInfo_var, L_52, NULL);
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x145, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x145, IL_0145)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0145:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern const Il2CppType* IChannelSender_t1912_0_0_0_var;
extern const Il2CppType* IChannelReceiver_t1932_0_0_0_var;
extern const Il2CppType* IDictionary_t1182_0_0_0_var;
extern const Il2CppType* IClientChannelSinkProvider_t1934_0_0_0_var;
extern const Il2CppType* IServerChannelSinkProvider_t1933_0_0_0_var;
extern TypeInfo* ProviderData_t1646_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern TypeInfo* IServerChannelSinkProvider_t1933_il2cpp_TypeInfo_var;
extern TypeInfo* IClientChannelSinkProvider_t1934_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1913_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1529_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1932_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2149;
extern Il2CppCodeGenString* _stringLiteral2150;
extern Il2CppCodeGenString* _stringLiteral2151;
extern Il2CppCodeGenString* _stringLiteral2152;
extern Il2CppCodeGenString* _stringLiteral466;
extern "C" void ChannelServices_RegisterChannelConfig_m8973 (Object_t * __this /* static, unused */, ChannelData_t1645 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1912_0_0_0_var = il2cpp_codegen_type_from_index(1074);
		IChannelReceiver_t1932_0_0_0_var = il2cpp_codegen_type_from_index(1077);
		IDictionary_t1182_0_0_0_var = il2cpp_codegen_type_from_index(718);
		IClientChannelSinkProvider_t1934_0_0_0_var = il2cpp_codegen_type_from_index(1078);
		IServerChannelSinkProvider_t1933_0_0_0_var = il2cpp_codegen_type_from_index(1079);
		ProviderData_t1646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1080);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		IServerChannelSinkProvider_t1933_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		IClientChannelSinkProvider_t1934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1078);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		IChannel_t1913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		TargetInvocationException_t1529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1050);
		IChannelReceiver_t1932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1077);
		_stringLiteral2149 = il2cpp_codegen_string_literal_from_index(2149);
		_stringLiteral2150 = il2cpp_codegen_string_literal_from_index(2150);
		_stringLiteral2151 = il2cpp_codegen_string_literal_from_index(2151);
		_stringLiteral2152 = il2cpp_codegen_string_literal_from_index(2152);
		_stringLiteral466 = il2cpp_codegen_string_literal_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	ProviderData_t1646 * V_3 = {0};
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	ProviderData_t1646 * V_6 = {0};
	Object_t * V_7 = {0};
	Type_t * V_8 = {0};
	ObjectU5BU5D_t148* V_9 = {0};
	TypeU5BU5D_t707* V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	ConstructorInfo_t715 * V_13 = {0};
	Object_t * V_14 = {0};
	Object_t * V_15 = {0};
	TargetInvocationException_t1529 * V_16 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Object_t *)NULL;
		V_1 = (Object_t *)NULL;
		ChannelData_t1645 * L_0 = ___channel;
		NullCheck(L_0);
		ArrayList_t920 * L_1 = ChannelData_get_ServerProviders_m9323(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_0045;
	}

IL_0017:
	{
		ChannelData_t1645 * L_3 = ___channel;
		NullCheck(L_3);
		ArrayList_t920 * L_4 = ChannelData_get_ServerProviders_m9323(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_3 = ((ProviderData_t1646 *)IsInstClass(L_6, ProviderData_t1646_il2cpp_TypeInfo_var));
		ProviderData_t1646 * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		Object_t * L_8 = ChannelServices_CreateProvider_m8974(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_4 = ((Object_t *)Castclass(L_8, IServerChannelSinkProvider_t1933_il2cpp_TypeInfo_var));
		Object_t * L_9 = V_4;
		Object_t * L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IServerChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IServerChannelSinkProvider) */, IServerChannelSinkProvider_t1933_il2cpp_TypeInfo_var, L_9, L_10);
		Object_t * L_11 = V_4;
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0045:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1645 * L_14 = ___channel;
		NullCheck(L_14);
		ArrayList_t920 * L_15 = ChannelData_get_ClientProviders_m9324(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_15);
		V_5 = ((int32_t)((int32_t)L_16-(int32_t)1));
		goto IL_0093;
	}

IL_0060:
	{
		ChannelData_t1645 * L_17 = ___channel;
		NullCheck(L_17);
		ArrayList_t920 * L_18 = ChannelData_get_ClientProviders_m9324(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_18, L_19);
		V_6 = ((ProviderData_t1646 *)IsInstClass(L_20, ProviderData_t1646_il2cpp_TypeInfo_var));
		ProviderData_t1646 * L_21 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		Object_t * L_22 = ChannelServices_CreateProvider_m8974(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_7 = ((Object_t *)Castclass(L_22, IClientChannelSinkProvider_t1934_il2cpp_TypeInfo_var));
		Object_t * L_23 = V_7;
		Object_t * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IClientChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IClientChannelSinkProvider) */, IClientChannelSinkProvider_t1934_il2cpp_TypeInfo_var, L_23, L_24);
		Object_t * L_25 = V_7;
		V_1 = L_25;
		int32_t L_26 = V_5;
		V_5 = ((int32_t)((int32_t)L_26-(int32_t)1));
	}

IL_0093:
	{
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		ChannelData_t1645 * L_28 = ___channel;
		NullCheck(L_28);
		String_t* L_29 = (L_28->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m6948, L_29, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		V_8 = L_30;
		Type_t * L_31 = V_8;
		if (L_31)
		{
			goto IL_00ca;
		}
	}
	{
		ChannelData_t1645 * L_32 = ___channel;
		NullCheck(L_32);
		String_t* L_33 = (L_32->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2149, L_33, _stringLiteral2150, /*hidden argument*/NULL);
		RemotingException_t1648 * L_35 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_35, L_34, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_35);
	}

IL_00ca:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IChannelSender_t1912_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_37 = V_8;
		NullCheck(L_36);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_36, L_37);
		V_11 = L_38;
		Type_t * L_39 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IChannelReceiver_t1932_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_40 = V_8;
		NullCheck(L_39);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_39, L_40);
		V_12 = L_41;
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_014b;
		}
	}
	{
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_014b;
		}
	}
	{
		TypeU5BU5D_t707* L_44 = ((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IDictionary_t1182_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 0);
		ArrayElementTypeCheck (L_44, L_45);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_44, 0, sizeof(Type_t *))) = (Type_t *)L_45;
		TypeU5BU5D_t707* L_46 = L_44;
		Type_t * L_47 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t1934_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 1);
		ArrayElementTypeCheck (L_46, L_47);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_46, 1, sizeof(Type_t *))) = (Type_t *)L_47;
		TypeU5BU5D_t707* L_48 = L_46;
		Type_t * L_49 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t1933_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_48, 2, sizeof(Type_t *))) = (Type_t *)L_49;
		V_10 = L_48;
		ObjectU5BU5D_t148* L_50 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 3));
		ChannelData_t1645 * L_51 = ___channel;
		NullCheck(L_51);
		Hashtable_t985 * L_52 = ChannelData_get_CustomProperties_m9325(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		ArrayElementTypeCheck (L_50, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 0, sizeof(Object_t *))) = (Object_t *)L_52;
		ObjectU5BU5D_t148* L_53 = L_50;
		Object_t * L_54 = V_1;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 1);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 1, sizeof(Object_t *))) = (Object_t *)L_54;
		ObjectU5BU5D_t148* L_55 = L_53;
		Object_t * L_56 = V_0;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 2);
		ArrayElementTypeCheck (L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, 2, sizeof(Object_t *))) = (Object_t *)L_56;
		V_9 = L_55;
		goto IL_01e3;
	}

IL_014b:
	{
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_018e;
		}
	}
	{
		TypeU5BU5D_t707* L_58 = ((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IDictionary_t1182_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
		ArrayElementTypeCheck (L_58, L_59);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_58, 0, sizeof(Type_t *))) = (Type_t *)L_59;
		TypeU5BU5D_t707* L_60 = L_58;
		Type_t * L_61 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t1934_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 1);
		ArrayElementTypeCheck (L_60, L_61);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_60, 1, sizeof(Type_t *))) = (Type_t *)L_61;
		V_10 = L_60;
		ObjectU5BU5D_t148* L_62 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 2));
		ChannelData_t1645 * L_63 = ___channel;
		NullCheck(L_63);
		Hashtable_t985 * L_64 = ChannelData_get_CustomProperties_m9325(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 0);
		ArrayElementTypeCheck (L_62, L_64);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_62, 0, sizeof(Object_t *))) = (Object_t *)L_64;
		ObjectU5BU5D_t148* L_65 = L_62;
		Object_t * L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 1);
		ArrayElementTypeCheck (L_65, L_66);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_65, 1, sizeof(Object_t *))) = (Object_t *)L_66;
		V_9 = L_65;
		goto IL_01e3;
	}

IL_018e:
	{
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t707* L_68 = ((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_69 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IDictionary_t1182_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 0);
		ArrayElementTypeCheck (L_68, L_69);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_68, 0, sizeof(Type_t *))) = (Type_t *)L_69;
		TypeU5BU5D_t707* L_70 = L_68;
		Type_t * L_71 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t1933_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 1);
		ArrayElementTypeCheck (L_70, L_71);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_70, 1, sizeof(Type_t *))) = (Type_t *)L_71;
		V_10 = L_70;
		ObjectU5BU5D_t148* L_72 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 2));
		ChannelData_t1645 * L_73 = ___channel;
		NullCheck(L_73);
		Hashtable_t985 * L_74 = ChannelData_get_CustomProperties_m9325(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, 0);
		ArrayElementTypeCheck (L_72, L_74);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_72, 0, sizeof(Object_t *))) = (Object_t *)L_74;
		ObjectU5BU5D_t148* L_75 = L_72;
		Object_t * L_76 = V_0;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 1);
		ArrayElementTypeCheck (L_75, L_76);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_75, 1, sizeof(Object_t *))) = (Object_t *)L_76;
		V_9 = L_75;
		goto IL_01e3;
	}

IL_01d1:
	{
		Type_t * L_77 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m606(NULL /*static, unused*/, L_77, _stringLiteral2151, /*hidden argument*/NULL);
		RemotingException_t1648 * L_79 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_79, L_78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_79);
	}

IL_01e3:
	{
		Type_t * L_80 = V_8;
		TypeU5BU5D_t707* L_81 = V_10;
		NullCheck(L_80);
		ConstructorInfo_t715 * L_82 = (ConstructorInfo_t715 *)VirtFuncInvoker1< ConstructorInfo_t715 *, TypeU5BU5D_t707* >::Invoke(68 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_80, L_81);
		V_13 = L_82;
		ConstructorInfo_t715 * L_83 = V_13;
		if (L_83)
		{
			goto IL_0207;
		}
	}
	{
		Type_t * L_84 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_85 = String_Concat_m606(NULL /*static, unused*/, L_84, _stringLiteral2152, /*hidden argument*/NULL);
		RemotingException_t1648 * L_86 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_86, L_85, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_86);
	}

IL_0207:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t715 * L_87 = V_13;
		ObjectU5BU5D_t148* L_88 = V_9;
		NullCheck(L_87);
		Object_t * L_89 = ConstructorInfo_Invoke_m4124(L_87, L_88, /*hidden argument*/NULL);
		V_14 = ((Object_t *)Castclass(L_89, IChannel_t1913_il2cpp_TypeInfo_var));
		goto IL_022b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t1529_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_021c;
		throw e;
	}

CATCH_021c:
	{ // begin catch(System.Reflection.TargetInvocationException)
		V_16 = ((TargetInvocationException_t1529 *)__exception_local);
		TargetInvocationException_t1529 * L_90 = V_16;
		NullCheck(L_90);
		Exception_t154 * L_91 = (Exception_t154 *)VirtFuncInvoker0< Exception_t154 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_90);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_91);
		goto IL_022b;
	} // end catch (depth: 1)

IL_022b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		ArrayList_t920 * L_92 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_92);
		Object_t * L_93 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_92);
		V_15 = L_93;
		Object_t * L_94 = V_15;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
	}

IL_023e:
	try
	{ // begin try (depth: 1)
		{
			ChannelData_t1645 * L_95 = ___channel;
			NullCheck(L_95);
			String_t* L_96 = (L_95->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_97 = String_op_Equality_m421(NULL /*static, unused*/, L_96, _stringLiteral466, /*hidden argument*/NULL);
			if (!L_97)
			{
				goto IL_0271;
			}
		}

IL_0253:
		{
			Object_t * L_98 = V_14;
			if (((Object_t *)IsInst(L_98, IChannelReceiver_t1932_il2cpp_TypeInfo_var)))
			{
				goto IL_0271;
			}
		}

IL_025f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_99 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			Object_t * L_100 = V_14;
			NullCheck(L_99);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_99, L_100);
			goto IL_0278;
		}

IL_0271:
		{
			Object_t * L_101 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannel_m8971(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
		}

IL_0278:
		{
			IL2CPP_LEAVE(0x285, FINALLY_027d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_027d;
	}

FINALLY_027d:
	{ // begin finally (depth: 1)
		Object_t * L_102 = V_15;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(637)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(637)
	{
		IL2CPP_JUMP_TBL(0x285, IL_0285)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0285:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1529_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2149;
extern Il2CppCodeGenString* _stringLiteral2150;
extern Il2CppCodeGenString* _stringLiteral2153;
extern Il2CppCodeGenString* _stringLiteral2154;
extern "C" Object_t * ChannelServices_CreateProvider_m8974 (Object_t * __this /* static, unused */, ProviderData_t1646 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		TargetInvocationException_t1529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1050);
		_stringLiteral2149 = il2cpp_codegen_string_literal_from_index(2149);
		_stringLiteral2150 = il2cpp_codegen_string_literal_from_index(2150);
		_stringLiteral2153 = il2cpp_codegen_string_literal_from_index(2153);
		_stringLiteral2154 = il2cpp_codegen_string_literal_from_index(2154);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	ObjectU5BU5D_t148* V_1 = {0};
	Exception_t154 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProviderData_t1646 * L_0 = ___prov;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m6948, L_1, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		ProviderData_t1646 * L_4 = ___prov;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2149, L_5, _stringLiteral2150, /*hidden argument*/NULL);
		RemotingException_t1648 * L_7 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_002d:
	{
		ObjectU5BU5D_t148* L_8 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 2));
		ProviderData_t1646 * L_9 = ___prov;
		NullCheck(L_9);
		Hashtable_t985 * L_10 = (L_9->___CustomProperties_3);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t148* L_11 = L_8;
		ProviderData_t1646 * L_12 = ___prov;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___CustomData_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1, sizeof(Object_t *))) = (Object_t *)L_13;
		V_1 = L_11;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_14 = V_0;
			ObjectU5BU5D_t148* L_15 = V_1;
			Object_t * L_16 = Activator_CreateInstance_m10325(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			goto IL_00a3;
		}

IL_0053:
		{
			; // IL_0053: leave IL_00a3
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0058;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t154 *)__exception_local);
			Exception_t154 * L_17 = V_2;
			if (!((TargetInvocationException_t1529 *)IsInstSealed(L_17, TargetInvocationException_t1529_il2cpp_TypeInfo_var)))
			{
				goto IL_0070;
			}
		}

IL_0064:
		{
			Exception_t154 * L_18 = V_2;
			NullCheck(((TargetInvocationException_t1529 *)CastclassSealed(L_18, TargetInvocationException_t1529_il2cpp_TypeInfo_var)));
			Exception_t154 * L_19 = (Exception_t154 *)VirtFuncInvoker0< Exception_t154 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, ((TargetInvocationException_t1529 *)CastclassSealed(L_18, TargetInvocationException_t1529_il2cpp_TypeInfo_var)));
			V_2 = L_19;
		}

IL_0070:
		{
			ObjectU5BU5D_t148* L_20 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
			ArrayElementTypeCheck (L_20, _stringLiteral2153);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral2153;
			ObjectU5BU5D_t148* L_21 = L_20;
			Type_t * L_22 = V_0;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
			ArrayElementTypeCheck (L_21, L_22);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1, sizeof(Object_t *))) = (Object_t *)L_22;
			ObjectU5BU5D_t148* L_23 = L_21;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
			ArrayElementTypeCheck (L_23, _stringLiteral2154);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral2154;
			ObjectU5BU5D_t148* L_24 = L_23;
			Exception_t154 * L_25 = V_2;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_25);
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
			ArrayElementTypeCheck (L_24, L_26);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 3, sizeof(Object_t *))) = (Object_t *)L_26;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m422(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			RemotingException_t1648 * L_28 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
			RemotingException__ctor_m9331(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_28);
			goto IL_00a3;
		}
	} // end catch (depth: 1)

IL_00a3:
	{
		Object_t * L_29 = V_3;
		return L_29;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1932_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* ChannelServices_GetCurrentChannelInfo_m8975 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IChannelReceiver_t1932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1077);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t920 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		ArrayList_t920 * L_1 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_4 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0056;
			}

IL_0027:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelReceiver_t1932_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_0056;
				}
			}

IL_003d:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData() */, IChannelReceiver_t1932_il2cpp_TypeInfo_var, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_0056;
				}
			}

IL_004d:
			{
				ArrayList_t920 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
			}

IL_0056:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0027;
				}
			}

IL_0061:
			{
				IL2CPP_LEAVE(0x7B, FINALLY_0066);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_0066;
		}

FINALLY_0066:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, IDisposable_t157_il2cpp_TypeInfo_var));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0073;
				}
			}

IL_0072:
			{
				IL2CPP_END_FINALLY(102)
			}

IL_0073:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(102)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(102)
		{
			IL2CPP_JUMP_TBL(0x7B, IL_007b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0087:
	{
		ArrayList_t920 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t148* L_22 = (ObjectU5BU5D_t148*)VirtFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainData__ctor_m8976 (CrossAppDomainData_t1572 * __this, int32_t ___domainId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m9285(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::get_DomainID()
extern "C" int32_t CrossAppDomainData_get_DomainID_m8977 (CrossAppDomainData_t1572 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____DomainID_1);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::get_ProcessID()
extern "C" String_t* CrossAppDomainData_get_ProcessID_m8978 (CrossAppDomainData_t1572 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____processGuid_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CrossAppDomainChannel__ctor_m8979 (CrossAppDomainChannel_t1573 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel__cctor_m8980 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1081);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m417(L_0, /*hidden argument*/NULL);
		((CrossAppDomainChannel_t1573_StaticFields*)CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
extern TypeInfo* CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m8981 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1081);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t1573 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CrossAppDomainChannel_t1573_StaticFields*)CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		CrossAppDomainChannel_t1573 * L_2 = (CrossAppDomainChannel_t1573 *)il2cpp_codegen_object_new (CrossAppDomainChannel_t1573_il2cpp_TypeInfo_var);
		CrossAppDomainChannel__ctor_m8979(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CrossAppDomainChannel_t1573 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m8971(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0024:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern Il2CppCodeGenString* _stringLiteral2155;
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m8982 (CrossAppDomainChannel_t1573 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2155 = il2cpp_codegen_string_literal_from_index(2155);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral2155;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m8983 (CrossAppDomainChannel_t1573 * __this, const MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainData_t1572_il2cpp_TypeInfo_var;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m8984 (CrossAppDomainChannel_t1573 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		CrossAppDomainData_t1572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1082);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m10260(NULL /*static, unused*/, /*hidden argument*/NULL);
		CrossAppDomainData_t1572 * L_1 = (CrossAppDomainData_t1572 *)il2cpp_codegen_object_new (CrossAppDomainData_t1572_il2cpp_TypeInfo_var);
		CrossAppDomainData__ctor_m8976(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void CrossAppDomainChannel_StartListening_m8985 (CrossAppDomainChannel_t1573 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.CrossAppDomainChannel::CreateMessageSink(System.String,System.Object,System.String&)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* CrossAppDomainData_t1572_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1574_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2155;
extern Il2CppCodeGenString* _stringLiteral2156;
extern "C" Object_t * CrossAppDomainChannel_CreateMessageSink_m8986 (CrossAppDomainChannel_t1573 * __this, String_t* ___url, Object_t * ___data, String_t** ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainData_t1572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1082);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CrossAppDomainSink_t1574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1083);
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2155 = il2cpp_codegen_string_literal_from_index(2155);
		_stringLiteral2156 = il2cpp_codegen_string_literal_from_index(2156);
		s_Il2CppMethodIntialized = true;
	}
	CrossAppDomainData_t1572 * V_0 = {0};
	{
		String_t** L_0 = ___uri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		Object_t * L_1 = ___data;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Object_t * L_2 = ___data;
		V_0 = ((CrossAppDomainData_t1572 *)IsInstClass(L_2, CrossAppDomainData_t1572_il2cpp_TypeInfo_var));
		CrossAppDomainData_t1572 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1572 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = CrossAppDomainData_get_ProcessID_m8978(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		String_t* L_6 = RemotingConfiguration_get_ProcessId_m9285(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m421(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1572 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = CrossAppDomainData_get_DomainID_m8977(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1574_il2cpp_TypeInfo_var);
		CrossAppDomainSink_t1574 * L_10 = CrossAppDomainSink_GetSink_m8989(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		String_t* L_11 = ___url;
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_12 = ___url;
		NullCheck(L_12);
		bool L_13 = String_StartsWith_m948(L_12, _stringLiteral2155, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t199 * L_14 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_14, _stringLiteral2156, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_0058:
	{
		return (Object_t *)NULL;
	}
}
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CrossAppDomainSink__ctor_m8987 (CrossAppDomainSink_t1574 * __this, int32_t ___domainID, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___domainID;
		__this->____domainID_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* CrossAppDomainSink_t1574_0_0_0_var;
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1574_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2157;
extern "C" void CrossAppDomainSink__cctor_m8988 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1574_0_0_0_var = il2cpp_codegen_type_from_index(1083);
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		CrossAppDomainSink_t1574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1083);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		_stringLiteral2157 = il2cpp_codegen_string_literal_from_index(2157);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t985 * L_0 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_0, /*hidden argument*/NULL);
		((CrossAppDomainSink_t1574_StaticFields*)CrossAppDomainSink_t1574_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(CrossAppDomainSink_t1574_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral2157, ((int32_t)40));
		((CrossAppDomainSink_t1574_StaticFields*)CrossAppDomainSink_t1574_il2cpp_TypeInfo_var->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink System.Runtime.Remoting.Channels.CrossAppDomainSink::GetSink(System.Int32)
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
extern TypeInfo* CrossAppDomainSink_t1574_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern "C" CrossAppDomainSink_t1574 * CrossAppDomainSink_GetSink_m8989 (Object_t * __this /* static, unused */, int32_t ___domainID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1083);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainSink_t1574 * V_1 = {0};
	CrossAppDomainSink_t1574 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1574_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((CrossAppDomainSink_t1574_StaticFields*)CrossAppDomainSink_t1574_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1574_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_3 = ((CrossAppDomainSink_t1574_StaticFields*)CrossAppDomainSink_t1574_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_4 = ___domainID;
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_5);
			NullCheck(L_3);
			bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_3, L_6);
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1574_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_8 = ((CrossAppDomainSink_t1574_StaticFields*)CrossAppDomainSink_t1574_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_9 = ___domainID;
			int32_t L_10 = L_9;
			Object_t * L_11 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_10);
			NullCheck(L_8);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_11);
			V_2 = ((CrossAppDomainSink_t1574 *)CastclassClass(L_12, CrossAppDomainSink_t1574_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0041:
		{
			int32_t L_13 = ___domainID;
			CrossAppDomainSink_t1574 * L_14 = (CrossAppDomainSink_t1574 *)il2cpp_codegen_object_new (CrossAppDomainSink_t1574_il2cpp_TypeInfo_var);
			CrossAppDomainSink__ctor_m8987(L_14, L_13, /*hidden argument*/NULL);
			V_1 = L_14;
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1574_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_15 = ((CrossAppDomainSink_t1574_StaticFields*)CrossAppDomainSink_t1574_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_16 = ___domainID;
			int32_t L_17 = L_16;
			Object_t * L_18 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_17);
			CrossAppDomainSink_t1574 * L_19 = V_1;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_18, L_19);
			CrossAppDomainSink_t1574 * L_20 = V_1;
			V_2 = L_20;
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0060:
		{
			; // IL_0060: leave IL_006c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Object_t * L_21 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_006c:
	{
		CrossAppDomainSink_t1574 * L_22 = V_2;
		return L_22;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m8990 (CrossAppDomainSink_t1574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderData.h"
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Channels.SinkProviderData::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern "C" void SinkProviderData__ctor_m8991 (SinkProviderData_t1575 * __this, String_t* ___name, const MethodInfo* method)
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
		String_t* L_0 = ___name;
		__this->___sinkName_0 = L_0;
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		__this->___children_1 = L_1;
		Hashtable_t985 * L_2 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_2, /*hidden argument*/NULL);
		__this->___properties_2 = L_2;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Channels.SinkProviderData::get_Children()
extern "C" Object_t * SinkProviderData_get_Children_m8992 (SinkProviderData_t1575 * __this, const MethodInfo* method)
{
	{
		ArrayList_t920 * L_0 = (__this->___children_1);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Channels.SinkProviderData::get_Properties()
extern "C" Object_t * SinkProviderData_get_Properties_m8993 (SinkProviderData_t1575 * __this, const MethodInfo* method)
{
	{
		Hashtable_t985 * L_0 = (__this->___properties_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0.h"
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObject.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ClientContextTerm.h"
// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerContextTerm.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Messaging.StackBuilderSink
#include "mscorlib_System_Runtime_Remoting_Messaging_StackBuilderSink.h"
// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerObjectTermi.h"
// System.Runtime.Remoting.Lifetime.LeaseSink
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSink.h"
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
// System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextDelega.h"
// System.Runtime.Remoting.Contexts.ContextCallbackObject
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextCallbackObj.h"
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlot.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerContextTermMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ClientContextTermMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.StackBuilderSink
#include "mscorlib_System_Runtime_Remoting_Messaging_StackBuilderSinkMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerObjectTermiMethodDeclarations.h"
// System.Runtime.Remoting.Lifetime.LeaseSink
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSinkMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.ContextCallbackObject
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextCallbackObjMethodDeclarations.h"
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlotMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.Context::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" void Context__ctor_m8994 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m10260(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___domain_id_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_count_9;
		int32_t L_2 = L_1;
		((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_count_9 = ((int32_t)((int32_t)L_2+(int32_t)1));
		__this->___context_id_1 = ((int32_t)((int32_t)1+(int32_t)L_2));
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" void Context__cctor_m8995 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t985 * L_0 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_0, /*hidden argument*/NULL);
		((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m8996 (Context_t1576 * __this, const MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m4002(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern "C" Context_t1576 * Context_get_DefaultContext_m8997 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t1576 * L_0 = AppDomain_InternalGetDefaultContext_m10339(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.Context::get_ContextID()
extern "C" int32_t Context_get_ContextID_m8998 (Context_t1576 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty[] System.Runtime.Remoting.Contexts.Context::get_ContextProperties()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* IContextPropertyU5BU5D_t1914_0_0_0_var;
extern TypeInfo* IContextPropertyU5BU5D_t1914_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" IContextPropertyU5BU5D_t1914* Context_get_ContextProperties_m8999 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextPropertyU5BU5D_t1914_0_0_0_var = il2cpp_codegen_type_from_index(1085);
		IContextPropertyU5BU5D_t1914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1085);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->___context_properties_7);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		return ((IContextPropertyU5BU5D_t1914*)SZArrayNew(IContextPropertyU5BU5D_t1914_il2cpp_TypeInfo_var, 0));
	}

IL_0012:
	{
		ArrayList_t920 * L_1 = (__this->___context_properties_7);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IContextPropertyU5BU5D_t1914_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Array_t * L_3 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(47 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_1, L_2);
		return ((IContextPropertyU5BU5D_t1914*)Castclass(L_3, IContextPropertyU5BU5D_t1914_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m9000 (Context_t1576 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_1);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_NeedsContextSink()
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" bool Context_get_NeedsContextSink_m9001 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = (__this->___context_id_1);
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_1 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_2 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		NullCheck(L_2);
		bool L_3 = DynamicPropertyCollection_get_HasProperties_m9029(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}

IL_0024:
	{
		DynamicPropertyCollection_t1577 * L_4 = (__this->___context_dynamic_properties_12);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		DynamicPropertyCollection_t1577 * L_5 = (__this->___context_dynamic_properties_12);
		NullCheck(L_5);
		bool L_6 = DynamicPropertyCollection_get_HasProperties_m9029(L_5, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_6));
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 0;
	}

IL_003d:
	{
		G_B8_0 = G_B6_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B8_0 = 1;
	}

IL_0040:
	{
		return G_B8_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObject.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" bool Context_RegisterDynamicProperty_m9002 (Object_t * __this /* static, unused */, Object_t * ___prop, ContextBoundObject_t1583 * ___obj, Context_t1576 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1577 * V_0 = {0};
	{
		ContextBoundObject_t1583 * L_0 = ___obj;
		Context_t1576 * L_1 = ___ctx;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_2 = Context_GetDynamicPropertyCollection_m9004(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DynamicPropertyCollection_t1577 * L_3 = V_0;
		Object_t * L_4 = ___prop;
		NullCheck(L_3);
		bool L_5 = DynamicPropertyCollection_RegisterDynamicProperty_m9030(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::UnregisterDynamicProperty(System.String,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" bool Context_UnregisterDynamicProperty_m9003 (Object_t * __this /* static, unused */, String_t* ___name, ContextBoundObject_t1583 * ___obj, Context_t1576 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1577 * V_0 = {0};
	{
		ContextBoundObject_t1583 * L_0 = ___obj;
		Context_t1576 * L_1 = ___ctx;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_2 = Context_GetDynamicPropertyCollection_m9004(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DynamicPropertyCollection_t1577 * L_3 = V_0;
		String_t* L_4 = ___name;
		NullCheck(L_3);
		bool L_5 = DynamicPropertyCollection_UnregisterDynamicProperty_m9031(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::GetDynamicPropertyCollection(System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2158;
extern "C" DynamicPropertyCollection_t1577 * Context_GetDynamicPropertyCollection_m9004 (Object_t * __this /* static, unused */, ContextBoundObject_t1583 * ___obj, Context_t1576 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1087);
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2158 = il2cpp_codegen_string_literal_from_index(2158);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t1621 * V_0 = {0};
	{
		Context_t1576 * L_0 = ___ctx;
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		ContextBoundObject_t1583 * L_1 = ___obj;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		ContextBoundObject_t1583 * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		bool L_3 = RemotingServices_IsTransparentProxy_m9336(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ContextBoundObject_t1583 * L_4 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		RealProxy_t1621 * L_5 = RemotingServices_GetRealProxy_m9340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RealProxy_t1621 * L_6 = V_0;
		NullCheck(L_6);
		Identity_t1629 * L_7 = RealProxy_get_ObjectIdentity_m9231(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		DynamicPropertyCollection_t1577 * L_8 = Identity_get_ClientDynamicProperties_m9258(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002a:
	{
		ContextBoundObject_t1583 * L_9 = ___obj;
		NullCheck(L_9);
		ServerIdentity_t1292 * L_10 = MarshalByRefObject_get_ObjectIdentity_m7035(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		DynamicPropertyCollection_t1577 * L_11 = Identity_get_ServerDynamicProperties_m9259(L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0036:
	{
		Context_t1576 * L_12 = ___ctx;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		ContextBoundObject_t1583 * L_13 = ___obj;
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		Context_t1576 * L_14 = ___ctx;
		NullCheck(L_14);
		DynamicPropertyCollection_t1577 * L_15 = (L_14->___context_dynamic_properties_12);
		if (L_15)
		{
			goto IL_0058;
		}
	}
	{
		Context_t1576 * L_16 = ___ctx;
		DynamicPropertyCollection_t1577 * L_17 = (DynamicPropertyCollection_t1577 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m9028(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->___context_dynamic_properties_12 = L_17;
	}

IL_0058:
	{
		Context_t1576 * L_18 = ___ctx;
		NullCheck(L_18);
		DynamicPropertyCollection_t1577 * L_19 = (L_18->___context_dynamic_properties_12);
		return L_19;
	}

IL_005f:
	{
		Context_t1576 * L_20 = ___ctx;
		if (L_20)
		{
			goto IL_0085;
		}
	}
	{
		ContextBoundObject_t1583 * L_21 = ___obj;
		if (L_21)
		{
			goto IL_0085;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_22 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (L_22)
		{
			goto IL_007f;
		}
	}
	{
		DynamicPropertyCollection_t1577 * L_23 = (DynamicPropertyCollection_t1577 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m9028(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11 = L_23;
	}

IL_007f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_24 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		return L_24;
	}

IL_0085:
	{
		ArgumentException_t275 * L_25 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_25, _stringLiteral2158, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_25);
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyGlobalDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" void Context_NotifyGlobalDynamicSinks_m9005 (Object_t * __this /* static, unused */, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_0 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_1 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m9029(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_3 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		bool L_4 = ___start;
		Object_t * L_5 = ___req_msg;
		bool L_6 = ___client_site;
		bool L_7 = ___async;
		NullCheck(L_3);
		DynamicPropertyCollection_NotifyMessage_m9032(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasGlobalDynamicSinks()
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" bool Context_get_HasGlobalDynamicSinks_m9006 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_0 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		DynamicPropertyCollection_t1577 * L_1 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___global_dynamic_properties_11;
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m9029(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C" void Context_NotifyDynamicSinks_m9007 (Context_t1576 * __this, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method)
{
	{
		DynamicPropertyCollection_t1577 * L_0 = (__this->___context_dynamic_properties_12);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		DynamicPropertyCollection_t1577 * L_1 = (__this->___context_dynamic_properties_12);
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m9029(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		DynamicPropertyCollection_t1577 * L_3 = (__this->___context_dynamic_properties_12);
		bool L_4 = ___start;
		Object_t * L_5 = ___req_msg;
		bool L_6 = ___client_site;
		bool L_7 = ___async;
		NullCheck(L_3);
		DynamicPropertyCollection_NotifyMessage_m9032(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasDynamicSinks()
extern "C" bool Context_get_HasDynamicSinks_m9008 (Context_t1576 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		DynamicPropertyCollection_t1577 * L_0 = (__this->___context_dynamic_properties_12);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		DynamicPropertyCollection_t1577 * L_1 = (__this->___context_dynamic_properties_12);
		NullCheck(L_1);
		bool L_2 = DynamicPropertyCollection_get_HasProperties_m9029(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
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
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasExitSinks()
extern TypeInfo* ClientContextTerminatorSink_t1600_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" bool Context_get_HasExitSinks_m9009 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContextTerminatorSink_t1600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1088);
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = Context_GetClientContextSinkChain_m9015(__this, /*hidden argument*/NULL);
		if (!((ClientContextTerminatorSink_t1600 *)IsInstClass(L_0, ClientContextTerminatorSink_t1600_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = Context_get_HasDynamicSinks_m9008(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		bool L_2 = Context_get_HasGlobalDynamicSinks_m9006(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
	}

IL_0023:
	{
		return G_B4_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1915_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetProperty_m9010 (Context_t1576 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IContextProperty_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = (__this->___context_properties_7);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000d:
	{
		ArrayList_t920 * L_1 = (__this->___context_properties_7);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001e:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t1915_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t1915_il2cpp_TypeInfo_var, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m421(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x66, FINALLY_0052);
		}

IL_0042:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001e;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}

IL_005d:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0064:
	{
		return (Object_t *)NULL;
	}

IL_0066:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2159;
extern Il2CppCodeGenString* _stringLiteral2160;
extern Il2CppCodeGenString* _stringLiteral2161;
extern "C" void Context_SetProperty_m9011 (Context_t1576 * __this, Object_t * ___prop, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		_stringLiteral2159 = il2cpp_codegen_string_literal_from_index(2159);
		_stringLiteral2160 = il2cpp_codegen_string_literal_from_index(2160);
		_stringLiteral2161 = il2cpp_codegen_string_literal_from_index(2161);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___prop;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, _stringLiteral2159, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		Context_t1576 * L_2 = Context_get_DefaultContext_m8997(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(Context_t1576 *)__this) == ((Object_t*)(Context_t1576 *)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		InvalidOperationException_t1075 * L_3 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_3, _stringLiteral2160, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0027:
	{
		bool L_4 = (__this->___frozen_8);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t1075 * L_5 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_5, _stringLiteral2161, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_003d:
	{
		ArrayList_t920 * L_6 = (__this->___context_properties_7);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		ArrayList_t920 * L_7 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_7, /*hidden argument*/NULL);
		__this->___context_properties_7 = L_7;
	}

IL_0053:
	{
		ArrayList_t920 * L_8 = (__this->___context_properties_7);
		Object_t * L_9 = ___prop;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Freeze()
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1915_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void Context_Freeze_m9012 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IContextProperty_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = (__this->___context_properties_7);
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		ArrayList_t920 * L_1 = (__this->___context_properties_7);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_001c:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t1915_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker1< Context_t1576 * >::Invoke(1 /* System.Void System.Runtime.Remoting.Contexts.IContextProperty::Freeze(System.Runtime.Remoting.Contexts.Context) */, IContextProperty_t1915_il2cpp_TypeInfo_var, L_5, __this);
		}

IL_002f:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_001c;
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
			V_2 = ((Object_t *)IsInst(L_8, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
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
			Object_t * L_10 = V_2;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0051:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2162;
extern "C" String_t* Context_ToString_m9013 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral2162 = il2cpp_codegen_string_literal_from_index(2162);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___context_id_1);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t151_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m606(NULL /*static, unused*/, _stringLiteral2162, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetServerContextSinkChain()
// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerContextTermMethodDeclarations.h"
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern TypeInfo* ServerContextTerminatorSink_t1618_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeServerContextSink_t1935_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetServerContextSinkChain_m9014 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		ServerContextTerminatorSink_t1618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1089);
		IContributeServerContextSink_t1935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1090);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->___server_context_sink_chain_4);
		if (L_0)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___default_server_context_sink_3;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ServerContextTerminatorSink_t1618 * L_2 = (ServerContextTerminatorSink_t1618 *)il2cpp_codegen_object_new (ServerContextTerminatorSink_t1618_il2cpp_TypeInfo_var);
		ServerContextTerminatorSink__ctor_m9197(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___default_server_context_sink_3 = L_2;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		Object_t * L_3 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___default_server_context_sink_3;
		__this->___server_context_sink_chain_4 = L_3;
		ArrayList_t920 * L_4 = (__this->___context_properties_7);
		if (!L_4)
		{
			goto IL_007d;
		}
	}
	{
		ArrayList_t920 * L_5 = (__this->___context_properties_7);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_5);
		V_0 = ((int32_t)((int32_t)L_6-(int32_t)1));
		goto IL_0076;
	}

IL_0048:
	{
		ArrayList_t920 * L_7 = (__this->___context_properties_7);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_7, L_8);
		V_1 = ((Object_t *)IsInst(L_9, IContributeServerContextSink_t1935_il2cpp_TypeInfo_var));
		Object_t * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		Object_t * L_11 = V_1;
		Object_t * L_12 = (__this->___server_context_sink_chain_4);
		NullCheck(L_11);
		Object_t * L_13 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeServerContextSink::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeServerContextSink_t1935_il2cpp_TypeInfo_var, L_11, L_12);
		__this->___server_context_sink_chain_4 = L_13;
	}

IL_0072:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14-(int32_t)1));
	}

IL_0076:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}

IL_007d:
	{
		Object_t * L_16 = (__this->___server_context_sink_chain_4);
		return L_16;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetClientContextSinkChain()
// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ClientContextTermMethodDeclarations.h"
extern TypeInfo* ClientContextTerminatorSink_t1600_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1915_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeClientContextSink_t1936_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetClientContextSinkChain_m9015 (Context_t1576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContextTerminatorSink_t1600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1088);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IContextProperty_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		IContributeClientContextSink_t1936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___client_context_sink_chain_5);
		if (L_0)
		{
			goto IL_0080;
		}
	}
	{
		ClientContextTerminatorSink_t1600 * L_1 = (ClientContextTerminatorSink_t1600 *)il2cpp_codegen_object_new (ClientContextTerminatorSink_t1600_il2cpp_TypeInfo_var);
		ClientContextTerminatorSink__ctor_m9084(L_1, __this, /*hidden argument*/NULL);
		__this->___client_context_sink_chain_5 = L_1;
		ArrayList_t920 * L_2 = (__this->___context_properties_7);
		if (!L_2)
		{
			goto IL_0080;
		}
	}
	{
		ArrayList_t920 * L_3 = (__this->___context_properties_7);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0033:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_5);
			V_0 = ((Object_t *)Castclass(L_6, IContextProperty_t1915_il2cpp_TypeInfo_var));
			Object_t * L_7 = V_0;
			V_2 = ((Object_t *)IsInst(L_7, IContributeClientContextSink_t1936_il2cpp_TypeInfo_var));
			Object_t * L_8 = V_2;
			if (!L_8)
			{
				goto IL_005e;
			}
		}

IL_004c:
		{
			Object_t * L_9 = V_2;
			Object_t * L_10 = (__this->___client_context_sink_chain_5);
			NullCheck(L_9);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeClientContextSink::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeClientContextSink_t1936_il2cpp_TypeInfo_var, L_9, L_10);
			__this->___client_context_sink_chain_5 = L_11;
		}

IL_005e:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0033;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x80, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_3 = ((Object_t *)IsInst(L_14, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_3;
			if (L_15)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(110)
		}

IL_0079:
		{
			Object_t * L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(110)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0080:
	{
		Object_t * L_17 = (__this->___client_context_sink_chain_5);
		return L_17;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateServerObjectSinkChain(System.MarshalByRefObject,System.Boolean)
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Messaging.StackBuilderSink
#include "mscorlib_System_Runtime_Remoting_Messaging_StackBuilderSinkMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_ServerObjectTermiMethodDeclarations.h"
// System.Runtime.Remoting.Lifetime.LeaseSink
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSinkMethodDeclarations.h"
extern TypeInfo* StackBuilderSink_t1620_il2cpp_TypeInfo_var;
extern TypeInfo* ServerObjectTerminatorSink_t1619_il2cpp_TypeInfo_var;
extern TypeInfo* LeaseSink_t1591_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1915_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeObjectSink_t1937_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_CreateServerObjectSinkChain_m9016 (Context_t1576 * __this, MarshalByRefObject_t1134 * ___obj, bool ___forceInternalExecute, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackBuilderSink_t1620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		ServerObjectTerminatorSink_t1619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		LeaseSink_t1591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		IContextProperty_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		IContributeObjectSink_t1937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	{
		MarshalByRefObject_t1134 * L_0 = ___obj;
		bool L_1 = ___forceInternalExecute;
		StackBuilderSink_t1620 * L_2 = (StackBuilderSink_t1620 *)il2cpp_codegen_object_new (StackBuilderSink_t1620_il2cpp_TypeInfo_var);
		StackBuilderSink__ctor_m9199(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		ServerObjectTerminatorSink_t1619 * L_4 = (ServerObjectTerminatorSink_t1619 *)il2cpp_codegen_object_new (ServerObjectTerminatorSink_t1619_il2cpp_TypeInfo_var);
		ServerObjectTerminatorSink__ctor_m9198(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Object_t * L_5 = V_0;
		LeaseSink_t1591 * L_6 = (LeaseSink_t1591 *)il2cpp_codegen_object_new (LeaseSink_t1591_il2cpp_TypeInfo_var);
		LeaseSink__ctor_m9059(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		ArrayList_t920 * L_7 = (__this->___context_properties_7);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		ArrayList_t920 * L_8 = (__this->___context_properties_7);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_8);
		V_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_0060;
	}

IL_0034:
	{
		ArrayList_t920 * L_10 = (__this->___context_properties_7);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		V_2 = ((Object_t *)Castclass(L_12, IContextProperty_t1915_il2cpp_TypeInfo_var));
		Object_t * L_13 = V_2;
		V_3 = ((Object_t *)IsInst(L_13, IContributeObjectSink_t1937_il2cpp_TypeInfo_var));
		Object_t * L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_15 = V_3;
		MarshalByRefObject_t1134 * L_16 = ___obj;
		Object_t * L_17 = V_0;
		NullCheck(L_15);
		Object_t * L_18 = (Object_t *)InterfaceFuncInvoker2< Object_t *, MarshalByRefObject_t1134 *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeObjectSink::GetObjectSink(System.MarshalByRefObject,System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeObjectSink_t1937_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		V_0 = L_18;
	}

IL_005c:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_0060:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_0067:
	{
		Object_t * L_21 = V_0;
		return L_21;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern TypeInfo* EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1915_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeEnvoySink_t1938_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_CreateEnvoySink_m9017 (Context_t1576 * __this, MarshalByRefObject_t1134 * ___serverObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1096);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IContextProperty_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		IContributeEnvoySink_t1938_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1097);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink_t1605 * L_0 = ((EnvoyTerminatorSink_t1605_StaticFields*)EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var->static_fields)->___Instance_0;
		V_0 = L_0;
		ArrayList_t920 * L_1 = (__this->___context_properties_7);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		ArrayList_t920 * L_2 = (__this->___context_properties_7);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0022:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Object_t *)Castclass(L_5, IContextProperty_t1915_il2cpp_TypeInfo_var));
			Object_t * L_6 = V_1;
			V_3 = ((Object_t *)IsInst(L_6, IContributeEnvoySink_t1938_il2cpp_TypeInfo_var));
			Object_t * L_7 = V_3;
			if (!L_7)
			{
				goto IL_0044;
			}
		}

IL_003b:
		{
			Object_t * L_8 = V_3;
			MarshalByRefObject_t1134 * L_9 = ___serverObject;
			Object_t * L_10 = V_0;
			NullCheck(L_8);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker2< Object_t *, MarshalByRefObject_t1134 *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeEnvoySink::GetEnvoySink(System.MarshalByRefObject,System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeEnvoySink_t1938_il2cpp_TypeInfo_var, L_8, L_9, L_10);
			V_0 = L_11;
		}

IL_0044:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0022;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_2;
			V_4 = ((Object_t *)IsInst(L_14, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_4;
			if (L_15)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(84)
		}

IL_0061:
		{
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0069:
	{
		Object_t * L_17 = V_0;
		return L_17;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::SwitchToContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1576 * Context_SwitchToContext_m9018 (Object_t * __this /* static, unused */, Context_t1576 * ___newContext, const MethodInfo* method)
{
	{
		Context_t1576 * L_0 = ___newContext;
		Context_t1576 * L_1 = AppDomain_InternalSetContext_m10337(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1911_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t812_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1915_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2163;
extern "C" Context_t1576 * Context_CreateNewContext_m9019 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		IConstructionCallMessage_t1911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IEnumerable_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		IContextProperty_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2163 = il2cpp_codegen_string_literal_from_index(2163);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1576 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t1576 * L_0 = (Context_t1576 *)il2cpp_codegen_object_new (Context_t1576_il2cpp_TypeInfo_var);
		Context__ctor_m8994(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___msg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t812_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0017:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Object_t *)Castclass(L_5, IContextProperty_t1915_il2cpp_TypeInfo_var));
			Context_t1576 * L_6 = V_0;
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t1915_il2cpp_TypeInfo_var, L_7);
			NullCheck(L_6);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_6, L_8);
			if (L_9)
			{
				goto IL_003b;
			}
		}

IL_0034:
		{
			Context_t1576 * L_10 = V_0;
			Object_t * L_11 = V_1;
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(7 /* System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty) */, L_10, L_11);
		}

IL_003b:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0017;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_2;
			V_5 = ((Object_t *)IsInst(L_14, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_5;
			if (L_15)
			{
				goto IL_0058;
			}
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(75)
		}

IL_0058:
		{
			Object_t * L_16 = V_5;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0060:
	{
		Context_t1576 * L_17 = V_0;
		NullCheck(L_17);
		VirtActionInvoker0::Invoke(8 /* System.Void System.Runtime.Remoting.Contexts.Context::Freeze() */, L_17);
		Object_t * L_18 = ___msg;
		NullCheck(L_18);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t812_il2cpp_TypeInfo_var, L_19);
		V_4 = L_20;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009c;
		}

IL_0078:
		{
			Object_t * L_21 = V_4;
			NullCheck(L_21);
			Object_t * L_22 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_21);
			V_3 = ((Object_t *)Castclass(L_22, IContextProperty_t1915_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_3;
			Context_t1576 * L_24 = V_0;
			NullCheck(L_23);
			bool L_25 = (bool)InterfaceFuncInvoker1< bool, Context_t1576 * >::Invoke(2 /* System.Boolean System.Runtime.Remoting.Contexts.IContextProperty::IsNewContextOK(System.Runtime.Remoting.Contexts.Context) */, IContextProperty_t1915_il2cpp_TypeInfo_var, L_23, L_24);
			if (L_25)
			{
				goto IL_009c;
			}
		}

IL_0091:
		{
			RemotingException_t1648 * L_26 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
			RemotingException__ctor_m9331(L_26, _stringLiteral2163, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
		}

IL_009c:
		{
			Object_t * L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0078;
			}
		}

IL_00a8:
		{
			IL2CPP_LEAVE(0xC3, FINALLY_00ad);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00ad;
	}

FINALLY_00ad:
	{ // begin finally (depth: 1)
		{
			Object_t * L_29 = V_4;
			V_6 = ((Object_t *)IsInst(L_29, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_30 = V_6;
			if (L_30)
			{
				goto IL_00bb;
			}
		}

IL_00ba:
		{
			IL2CPP_END_FINALLY(173)
		}

IL_00bb:
		{
			Object_t * L_31 = V_6;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_31);
			IL2CPP_END_FINALLY(173)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00c3:
	{
		Context_t1576 * L_32 = V_0;
		return L_32;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
// System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextDelega.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.ContextCallbackObject
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextCallbackObjMethodDeclarations.h"
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern TypeInfo* ContextCallbackObject_t1578_il2cpp_TypeInfo_var;
extern "C" void Context_DoCallBack_m9020 (Context_t1576 * __this, CrossContextDelegate_t1876 * ___deleg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		ContextCallbackObject_t1578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1099);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1576 * V_0 = {0};
	Context_t1576 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		Context_t1576 * L_0 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ContextCallbackObject_t1578 * L_1 = (__this->___callback_object_13);
			if (L_1)
			{
				goto IL_002c;
			}
		}

IL_0013:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
			Context_t1576 * L_2 = Context_SwitchToContext_m9018(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			V_1 = L_2;
			ContextCallbackObject_t1578 * L_3 = (ContextCallbackObject_t1578 *)il2cpp_codegen_object_new (ContextCallbackObject_t1578_il2cpp_TypeInfo_var);
			ContextCallbackObject__ctor_m9034(L_3, /*hidden argument*/NULL);
			__this->___callback_object_13 = L_3;
			Context_t1576 * L_4 = V_1;
			Context_SwitchToContext_m9018(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Context_t1576 * L_5 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0038:
	{
		ContextCallbackObject_t1578 * L_6 = (__this->___callback_object_13);
		CrossContextDelegate_t1876 * L_7 = ___deleg;
		NullCheck(L_6);
		ContextCallbackObject_DoCallBack_m9035(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateDataSlot()
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlotMethodDeclarations.h"
extern TypeInfo* LocalDataStoreSlot_t1842_il2cpp_TypeInfo_var;
extern "C" LocalDataStoreSlot_t1842 * Context_AllocateDataSlot_m9021 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LocalDataStoreSlot_t1842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1100);
		s_Il2CppMethodIntialized = true;
	}
	{
		LocalDataStoreSlot_t1842 * L_0 = (LocalDataStoreSlot_t1842 *)il2cpp_codegen_object_new (LocalDataStoreSlot_t1842_il2cpp_TypeInfo_var);
		LocalDataStoreSlot__ctor_m10774(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateNamedDataSlot(System.String)
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" LocalDataStoreSlot_t1842 * Context_AllocateNamedDataSlot_m9022 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	LocalDataStoreSlot_t1842 * V_1 = {0};
	LocalDataStoreSlot_t1842 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
			LocalDataStoreSlot_t1842 * L_3 = Context_AllocateDataSlot_m9021(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_1 = L_3;
			Hashtable_t985 * L_4 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
			String_t* L_5 = ___name;
			LocalDataStoreSlot_t1842 * L_6 = V_1;
			NullCheck(L_4);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_4, L_5, L_6);
			LocalDataStoreSlot_t1842 * L_7 = V_1;
			V_2 = L_7;
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}

IL_002a:
		{
			; // IL_002a: leave IL_0036
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0036:
	{
		LocalDataStoreSlot_t1842 * L_9 = V_2;
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::FreeNamedDataSlot(System.String)
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern "C" void Context_FreeNamedDataSlot_m9023 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_3 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_3, L_4);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0028:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Contexts.Context::GetData(System.LocalDataStoreSlot)
// System.LocalDataStoreSlot
#include "mscorlib_System_LocalDataStoreSlot.h"
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetData_m9024 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t1842 * ___slot, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1576 * V_0 = {0};
	Context_t1576 * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		Context_t1576 * L_0 = Thread_get_CurrentContext_m10256(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Context_t1576 * L_1 = V_0;
		V_1 = L_1;
		Context_t1576 * L_2 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Context_t1576 * L_3 = V_0;
			NullCheck(L_3);
			ObjectU5BU5D_t148* L_4 = (L_3->___datastore_6);
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_0019:
		{
			LocalDataStoreSlot_t1842 * L_5 = ___slot;
			NullCheck(L_5);
			int32_t L_6 = (L_5->___slot_0);
			Context_t1576 * L_7 = V_0;
			NullCheck(L_7);
			ObjectU5BU5D_t148* L_8 = (L_7->___datastore_6);
			NullCheck(L_8);
			if ((((int32_t)L_6) >= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
			{
				goto IL_003f;
			}
		}

IL_002c:
		{
			Context_t1576 * L_9 = V_0;
			NullCheck(L_9);
			ObjectU5BU5D_t148* L_10 = (L_9->___datastore_6);
			LocalDataStoreSlot_t1842 * L_11 = ___slot;
			NullCheck(L_11);
			int32_t L_12 = (L_11->___slot_0);
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_12);
			int32_t L_13 = L_12;
			V_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_13, sizeof(Object_t *)));
			IL2CPP_LEAVE(0x52, FINALLY_004b);
		}

IL_003f:
		{
			V_2 = NULL;
			IL2CPP_LEAVE(0x52, FINALLY_004b);
		}

IL_0046:
		{
			; // IL_0046: leave IL_0052
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Context_t1576 * L_14 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0052:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::GetNamedDataSlot(System.String)
extern TypeInfo* Context_t1576_il2cpp_TypeInfo_var;
extern TypeInfo* LocalDataStoreSlot_t1842_il2cpp_TypeInfo_var;
extern "C" LocalDataStoreSlot_t1842 * Context_GetNamedDataSlot_m9025 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		LocalDataStoreSlot_t1842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1100);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	LocalDataStoreSlot_t1842 * V_1 = {0};
	LocalDataStoreSlot_t1842 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_3 = ((Context_t1576_StaticFields*)Context_t1576_il2cpp_TypeInfo_var->static_fields)->___namedSlots_10;
			String_t* L_4 = ___name;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
			V_1 = ((LocalDataStoreSlot_t1842 *)IsInstSealed(L_5, LocalDataStoreSlot_t1842_il2cpp_TypeInfo_var));
			LocalDataStoreSlot_t1842 * L_6 = V_1;
			if (L_6)
			{
				goto IL_0034;
			}
		}

IL_0028:
		{
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(Context_t1576_il2cpp_TypeInfo_var);
			LocalDataStoreSlot_t1842 * L_8 = Context_AllocateNamedDataSlot_m9022(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}

IL_0034:
		{
			LocalDataStoreSlot_t1842 * L_9 = V_1;
			V_2 = L_9;
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}

IL_003b:
		{
			; // IL_003b: leave IL_0047
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Object_t * L_10 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0047:
	{
		LocalDataStoreSlot_t1842 * L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::SetData(System.LocalDataStoreSlot,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void Context_SetData_m9026 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t1842 * ___slot, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	Context_t1576 * V_0 = {0};
	Context_t1576 * V_1 = {0};
	ObjectU5BU5D_t148* V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		Context_t1576 * L_0 = Thread_get_CurrentContext_m10256(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Context_t1576 * L_1 = V_0;
		V_1 = L_1;
		Context_t1576 * L_2 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Context_t1576 * L_3 = V_0;
			NullCheck(L_3);
			ObjectU5BU5D_t148* L_4 = (L_3->___datastore_6);
			if (L_4)
			{
				goto IL_0031;
			}
		}

IL_0019:
		{
			Context_t1576 * L_5 = V_0;
			LocalDataStoreSlot_t1842 * L_6 = ___slot;
			NullCheck(L_6);
			int32_t L_7 = (L_6->___slot_0);
			NullCheck(L_5);
			L_5->___datastore_6 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_7+(int32_t)2))));
			goto IL_0066;
		}

IL_0031:
		{
			LocalDataStoreSlot_t1842 * L_8 = ___slot;
			NullCheck(L_8);
			int32_t L_9 = (L_8->___slot_0);
			Context_t1576 * L_10 = V_0;
			NullCheck(L_10);
			ObjectU5BU5D_t148* L_11 = (L_10->___datastore_6);
			NullCheck(L_11);
			if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
			{
				goto IL_0066;
			}
		}

IL_0044:
		{
			LocalDataStoreSlot_t1842 * L_12 = ___slot;
			NullCheck(L_12);
			int32_t L_13 = (L_12->___slot_0);
			V_2 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_13+(int32_t)2))));
			Context_t1576 * L_14 = V_0;
			NullCheck(L_14);
			ObjectU5BU5D_t148* L_15 = (L_14->___datastore_6);
			ObjectU5BU5D_t148* L_16 = V_2;
			NullCheck(L_15);
			VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_15, (Array_t *)(Array_t *)L_16, 0);
			Context_t1576 * L_17 = V_0;
			ObjectU5BU5D_t148* L_18 = V_2;
			NullCheck(L_17);
			L_17->___datastore_6 = L_18;
		}

IL_0066:
		{
			Context_t1576 * L_19 = V_0;
			NullCheck(L_19);
			ObjectU5BU5D_t148* L_20 = (L_19->___datastore_6);
			LocalDataStoreSlot_t1842 * L_21 = ___slot;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___slot_0);
			Object_t * L_23 = ___data;
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_23);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22, sizeof(Object_t *))) = (Object_t *)L_23;
			IL2CPP_LEAVE(0x80, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Context_t1576 * L_24 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0080:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyColMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void DynamicPropertyReg__ctor_m9027 (DynamicPropertyReg_t1580 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::.ctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern "C" void DynamicPropertyCollection__ctor_m9028 (DynamicPropertyCollection_t1577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		__this->____properties_0 = L_0;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::get_HasProperties()
extern "C" bool DynamicPropertyCollection_get_HasProperties_m9029 (DynamicPropertyCollection_t1577 * __this, const MethodInfo* method)
{
	{
		ArrayList_t920 * L_0 = (__this->____properties_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty)
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyColMethodDeclarations.h"
extern TypeInfo* IDynamicProperty_t1581_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicPropertyReg_t1580_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeDynamicSink_t1939_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2164;
extern "C" bool DynamicPropertyCollection_RegisterDynamicProperty_m9030 (DynamicPropertyCollection_t1577 * __this, Object_t * ___prop, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDynamicProperty_t1581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1101);
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		DynamicPropertyReg_t1580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1102);
		IContributeDynamicSink_t1939_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1103);
		_stringLiteral2164 = il2cpp_codegen_string_literal_from_index(2164);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1577 * V_0 = {0};
	ArrayList_t920 * V_1 = {0};
	DynamicPropertyReg_t1580 * V_2 = {0};
	Object_t * V_3 = {0};
	bool V_4 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		DynamicPropertyCollection_t1577 * L_0 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_1 = ___prop;
			NullCheck(L_1);
			String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IDynamicProperty::get_Name() */, IDynamicProperty_t1581_il2cpp_TypeInfo_var, L_1);
			int32_t L_3 = DynamicPropertyCollection_FindProperty_m9033(__this, L_2, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)(-1))))
			{
				goto IL_0025;
			}
		}

IL_001a:
		{
			InvalidOperationException_t1075 * L_4 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m5175(L_4, _stringLiteral2164, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
		}

IL_0025:
		{
			ArrayList_t920 * L_5 = (__this->____properties_0);
			ArrayList_t920 * L_6 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
			ArrayList__ctor_m6138(L_6, L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			DynamicPropertyReg_t1580 * L_7 = (DynamicPropertyReg_t1580 *)il2cpp_codegen_object_new (DynamicPropertyReg_t1580_il2cpp_TypeInfo_var);
			DynamicPropertyReg__ctor_m9027(L_7, /*hidden argument*/NULL);
			V_2 = L_7;
			DynamicPropertyReg_t1580 * L_8 = V_2;
			Object_t * L_9 = ___prop;
			NullCheck(L_8);
			L_8->___Property_0 = L_9;
			Object_t * L_10 = ___prop;
			V_3 = ((Object_t *)IsInst(L_10, IContributeDynamicSink_t1939_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_3;
			if (!L_11)
			{
				goto IL_0057;
			}
		}

IL_004b:
		{
			DynamicPropertyReg_t1580 * L_12 = V_2;
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			Object_t * L_14 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.IContributeDynamicSink::GetDynamicSink() */, IContributeDynamicSink_t1939_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_12);
			L_12->___Sink_1 = L_14;
		}

IL_0057:
		{
			ArrayList_t920 * L_15 = V_1;
			DynamicPropertyReg_t1580 * L_16 = V_2;
			NullCheck(L_15);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_15, L_16);
			ArrayList_t920 * L_17 = V_1;
			__this->____properties_0 = L_17;
			V_4 = 1;
			IL2CPP_LEAVE(0x7A, FINALLY_0073);
		}

IL_006e:
		{
			; // IL_006e: leave IL_007a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		DynamicPropertyCollection_t1577 * L_18 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_007a:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::UnregisterDynamicProperty(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2165;
extern Il2CppCodeGenString* _stringLiteral2166;
extern "C" bool DynamicPropertyCollection_UnregisterDynamicProperty_m9031 (DynamicPropertyCollection_t1577 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2165 = il2cpp_codegen_string_literal_from_index(2165);
		_stringLiteral2166 = il2cpp_codegen_string_literal_from_index(2166);
		s_Il2CppMethodIntialized = true;
	}
	DynamicPropertyCollection_t1577 * V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		DynamicPropertyCollection_t1577 * L_0 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_1 = ___name;
			int32_t L_2 = DynamicPropertyCollection_FindProperty_m9033(__this, L_1, /*hidden argument*/NULL);
			V_1 = L_2;
			int32_t L_3 = V_1;
			if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
			{
				goto IL_002d;
			}
		}

IL_0017:
		{
			String_t* L_4 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_5 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2165, L_4, _stringLiteral2166, /*hidden argument*/NULL);
			RemotingException_t1648 * L_6 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
			RemotingException__ctor_m9331(L_6, L_5, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
		}

IL_002d:
		{
			ArrayList_t920 * L_7 = (__this->____properties_0);
			int32_t L_8 = V_1;
			NullCheck(L_7);
			VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_7, L_8);
			V_2 = 1;
			IL2CPP_LEAVE(0x4C, FINALLY_0045);
		}

IL_0040:
		{
			; // IL_0040: leave IL_004c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		DynamicPropertyCollection_t1577 * L_9 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_004c:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::NotifyMessage(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicPropertyReg_t1580_il2cpp_TypeInfo_var;
extern TypeInfo* IDynamicMessageSink_t1582_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void DynamicPropertyCollection_NotifyMessage_m9032 (DynamicPropertyCollection_t1577 * __this, bool ___start, Object_t * ___msg, bool ___client_site, bool ___async, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		DynamicPropertyReg_t1580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1102);
		IDynamicMessageSink_t1582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t920 * V_0 = {0};
	DynamicPropertyReg_t1580 * V_1 = {0};
	Object_t * V_2 = {0};
	DynamicPropertyReg_t1580 * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = (__this->____properties_0);
		V_0 = L_0;
		bool L_1 = ___start;
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		ArrayList_t920 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0019:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_4);
			V_1 = ((DynamicPropertyReg_t1580 *)CastclassClass(L_5, DynamicPropertyReg_t1580_il2cpp_TypeInfo_var));
			DynamicPropertyReg_t1580 * L_6 = V_1;
			NullCheck(L_6);
			Object_t * L_7 = (L_6->___Sink_1);
			if (!L_7)
			{
				goto IL_003f;
			}
		}

IL_0030:
		{
			DynamicPropertyReg_t1580 * L_8 = V_1;
			NullCheck(L_8);
			Object_t * L_9 = (L_8->___Sink_1);
			Object_t * L_10 = ___msg;
			bool L_11 = ___client_site;
			bool L_12 = ___async;
			NullCheck(L_9);
			InterfaceActionInvoker3< Object_t *, bool, bool >::Invoke(1 /* System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageStart(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean) */, IDynamicMessageSink_t1582_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
		}

IL_003f:
		{
			Object_t * L_13 = V_2;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0019;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x64, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_2;
			V_5 = ((Object_t *)IsInst(L_15, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_5;
			if (L_16)
			{
				goto IL_005c;
			}
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(79)
		}

IL_005c:
		{
			Object_t * L_17 = V_5;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0064:
	{
		goto IL_00c4;
	}

IL_0069:
	{
		ArrayList_t920 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_18);
		V_4 = L_19;
	}

IL_0071:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009d;
		}

IL_0076:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_20);
			V_3 = ((DynamicPropertyReg_t1580 *)CastclassClass(L_21, DynamicPropertyReg_t1580_il2cpp_TypeInfo_var));
			DynamicPropertyReg_t1580 * L_22 = V_3;
			NullCheck(L_22);
			Object_t * L_23 = (L_22->___Sink_1);
			if (!L_23)
			{
				goto IL_009d;
			}
		}

IL_008e:
		{
			DynamicPropertyReg_t1580 * L_24 = V_3;
			NullCheck(L_24);
			Object_t * L_25 = (L_24->___Sink_1);
			Object_t * L_26 = ___msg;
			bool L_27 = ___client_site;
			bool L_28 = ___async;
			NullCheck(L_25);
			InterfaceActionInvoker3< Object_t *, bool, bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean) */, IDynamicMessageSink_t1582_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
		}

IL_009d:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_0076;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00ae);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00ae;
	}

FINALLY_00ae:
	{ // begin finally (depth: 1)
		{
			Object_t * L_31 = V_4;
			V_6 = ((Object_t *)IsInst(L_31, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_32 = V_6;
			if (L_32)
			{
				goto IL_00bc;
			}
		}

IL_00bb:
		{
			IL2CPP_END_FINALLY(174)
		}

IL_00bc:
		{
			Object_t * L_33 = V_6;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_33);
			IL2CPP_END_FINALLY(174)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(174)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00c4:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.DynamicPropertyCollection::FindProperty(System.String)
extern TypeInfo* DynamicPropertyReg_t1580_il2cpp_TypeInfo_var;
extern TypeInfo* IDynamicProperty_t1581_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t DynamicPropertyCollection_FindProperty_m9033 (DynamicPropertyCollection_t1577 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DynamicPropertyReg_t1580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1102);
		IDynamicProperty_t1581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1101);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0007:
	{
		ArrayList_t920 * L_0 = (__this->____properties_0);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((DynamicPropertyReg_t1580 *)CastclassClass(L_2, DynamicPropertyReg_t1580_il2cpp_TypeInfo_var)));
		Object_t * L_3 = (((DynamicPropertyReg_t1580 *)CastclassClass(L_2, DynamicPropertyReg_t1580_il2cpp_TypeInfo_var))->___Property_0);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IDynamicProperty::get_Name() */, IDynamicProperty_t1581_il2cpp_TypeInfo_var, L_3);
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m421(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		ArrayList_t920 * L_10 = (__this->____properties_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObjectMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.ContextCallbackObject::.ctor()
// System.ContextBoundObject
#include "mscorlib_System_ContextBoundObjectMethodDeclarations.h"
extern "C" void ContextCallbackObject__ctor_m9034 (ContextCallbackObject_t1578 * __this, const MethodInfo* method)
{
	{
		ContextBoundObject__ctor_m10390(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextCallbackObject::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
// System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextDelega.h"
extern "C" void ContextCallbackObject_DoCallBack_m9035 (ContextCallbackObject_t1578 * __this, CrossContextDelegate_t1876 * ___deleg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ContextAttribute__ctor_m9036 (ContextAttribute_t1568 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m9037 (ContextAttribute_t1568 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ContextAttribute_t1568_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_Equals_m9038 (ContextAttribute_t1568 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextAttribute_t1568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1105);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	ContextAttribute_t1568 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
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
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t1568 *)IsInstClass(L_1, ContextAttribute_t1568_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t1568 *)CastclassClass(L_2, ContextAttribute_t1568_il2cpp_TypeInfo_var));
		ContextAttribute_t1568 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m1075(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::Freeze(System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
extern "C" void ContextAttribute_Freeze_m9039 (ContextAttribute_t1568 * __this, Context_t1576 * ___newContext, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C" int32_t ContextAttribute_GetHashCode_m9040 (ContextAttribute_t1568 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
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
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = String_GetHashCode_m4019(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1911_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2167;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m9041 (ContextAttribute_t1568 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		IConstructionCallMessage_t1911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		_stringLiteral2167 = il2cpp_codegen_string_literal_from_index(2167);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, _stringLiteral2167, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1207_il2cpp_TypeInfo_var, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t183_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1911_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2167;
extern Il2CppCodeGenString* _stringLiteral2168;
extern "C" bool ContextAttribute_IsContextOK_m9042 (ContextAttribute_t1568 * __this, Context_t1576 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		IConstructionCallMessage_t1911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		_stringLiteral2167 = il2cpp_codegen_string_literal_from_index(2167);
		_stringLiteral2168 = il2cpp_codegen_string_literal_from_index(2168);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t183 * L_1 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_1, _stringLiteral2167, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Context_t1576 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t183 * L_3 = (ArgumentNullException_t183 *)il2cpp_codegen_object_new (ArgumentNullException_t183_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m566(L_3, _stringLiteral2168, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_5);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Context_t1576 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		return 0;
	}

IL_0049:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t1568 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0052;
		}
	}
	{
		return 0;
	}

IL_0052:
	{
		return 1;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsNewContextOK(System.Runtime.Remoting.Contexts.Context)
extern "C" bool ContextAttribute_IsNewContextOK_m9043 (ContextAttribute_t1568 * __this, Context_t1576 * ___newCtx, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CrossContextChannel__ctor_m9044 (CrossContextChannel_t1571 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedClient.h"
// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedServer.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedClientMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedServerMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"
extern "C" void SynchronizationAttribute__ctor_m9045 (SynchronizationAttribute_t1584 * __this, const MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m9046(__this, 8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* Mutex_t1585_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2169;
extern Il2CppCodeGenString* _stringLiteral1047;
extern "C" void SynchronizationAttribute__ctor_m9046 (SynchronizationAttribute_t1584 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mutex_t1585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1106);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		_stringLiteral2169 = il2cpp_codegen_string_literal_from_index(2169);
		_stringLiteral1047 = il2cpp_codegen_string_literal_from_index(1047);
		s_Il2CppMethodIntialized = true;
	}
	{
		Mutex_t1585 * L_0 = (Mutex_t1585 *)il2cpp_codegen_object_new (Mutex_t1585_il2cpp_TypeInfo_var);
		Mutex__ctor_m10243(L_0, 0, /*hidden argument*/NULL);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m9036(__this, _stringLiteral2169, /*hidden argument*/NULL);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t275 * L_5 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_5, _stringLiteral1047, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_003e:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_set_Locked_m9047 (SynchronizationAttribute_t1584 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1584 * V_0 = {0};
	SynchronizationAttribute_t1584 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		Mutex_t1585 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		V_0 = __this;
		SynchronizationAttribute_t1584 * L_2 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			SynchronizationAttribute_ReleaseLock_m9048(__this, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
			Thread_t1586 * L_5 = Thread_get_CurrentThread_m10258(NULL /*static, unused*/, /*hidden argument*/NULL);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x51, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1584 * L_6 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0051:
	{
		goto IL_00ab;
	}

IL_0056:
	{
		V_1 = __this;
		SynchronizationAttribute_t1584 * L_7 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_005e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_0063:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t1585 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m10246(L_9, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1586 *)NULL;
		}

IL_0083:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_009f;
			}
		}

IL_008f:
		{
			Thread_t1586 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
			Thread_t1586 * L_12 = Thread_get_CurrentThread_m10258(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(Thread_t1586 *)L_11) == ((Object_t*)(Thread_t1586 *)L_12)))
			{
				goto IL_0063;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1584 * L_13 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00ab:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ReleaseLock_m9048 (SynchronizationAttribute_t1584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1584 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t1584 * L_0 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_0044;
			}
		}

IL_0014:
		{
			Thread_t1586 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
			Thread_t1586 * L_3 = Thread_get_CurrentThread_m10258(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((Object_t*)(Thread_t1586 *)L_2) == ((Object_t*)(Thread_t1586 *)L_3))))
			{
				goto IL_0044;
			}
		}

IL_0024:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t1585 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m10246(L_5, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1586 *)NULL;
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1584 * L_6 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* IConstructionCallMessage_t1911_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m9049 (SynchronizationAttribute_t1584 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConstructionCallMessage_t1911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1207_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0019:
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedClientMethodDeclarations.h"
extern TypeInfo* SynchronizedClientContextSink_t1587_il2cpp_TypeInfo_var;
extern "C" Object_t * SynchronizationAttribute_GetClientContextSink_m9050 (SynchronizationAttribute_t1584 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizedClientContextSink_t1587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1107);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___nextSink;
		SynchronizedClientContextSink_t1587 * L_1 = (SynchronizedClientContextSink_t1587 *)il2cpp_codegen_object_new (SynchronizedClientContextSink_t1587_il2cpp_TypeInfo_var);
		SynchronizedClientContextSink__ctor_m9055(L_1, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizedServerMethodDeclarations.h"
extern TypeInfo* SynchronizedServerContextSink_t1588_il2cpp_TypeInfo_var;
extern "C" Object_t * SynchronizationAttribute_GetServerContextSink_m9051 (SynchronizationAttribute_t1584 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizedServerContextSink_t1588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1108);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___nextSink;
		SynchronizedServerContextSink_t1588 * L_1 = (SynchronizedServerContextSink_t1588 *)il2cpp_codegen_object_new (SynchronizedServerContextSink_t1588_il2cpp_TypeInfo_var);
		SynchronizedServerContextSink__ctor_m9056(L_1, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
extern TypeInfo* SynchronizationAttribute_t1584_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2169;
extern "C" bool SynchronizationAttribute_IsContextOK_m9052 (SynchronizationAttribute_t1584 * __this, Context_t1576 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationAttribute_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		_stringLiteral2169 = il2cpp_codegen_string_literal_from_index(2169);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1584 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t1576 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_0, _stringLiteral2169);
		V_0 = ((SynchronizationAttribute_t1584 *)IsInstClass(L_1, SynchronizationAttribute_t1584_il2cpp_TypeInfo_var));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_004a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0056;
	}

IL_0045:
	{
		SynchronizationAttribute_t1584 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t1584 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_004a:
	{
		SynchronizationAttribute_t1584 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t1584 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0052:
	{
		return 0;
	}

IL_0054:
	{
		return 1;
	}

IL_0056:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1584_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2169;
extern "C" void SynchronizationAttribute_ExitContext_m9053 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		SynchronizationAttribute_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		_stringLiteral2169 = il2cpp_codegen_string_literal_from_index(2169);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1584 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		Context_t1576 * L_0 = Thread_get_CurrentContext_m10256(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m9000(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		Context_t1576 * L_2 = Thread_get_CurrentContext_m10256(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral2169);
		V_0 = ((SynchronizationAttribute_t1584 *)IsInstClass(L_3, SynchronizationAttribute_t1584_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1584 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1584 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern TypeInfo* Thread_t1586_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1584_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2169;
extern "C" void SynchronizationAttribute_EnterContext_m9054 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(853);
		SynchronizationAttribute_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		_stringLiteral2169 = il2cpp_codegen_string_literal_from_index(2169);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1584 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		Context_t1576 * L_0 = Thread_get_CurrentContext_m10256(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m9000(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1586_il2cpp_TypeInfo_var);
		Context_t1576 * L_2 = Thread_get_CurrentContext_m10256(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(6 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral2169);
		V_0 = ((SynchronizationAttribute_t1584 *)IsInstClass(L_3, SynchronizationAttribute_t1584_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1584 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1584 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 1);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink,System.Runtime.Remoting.Contexts.SynchronizationAttribute)
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SynchronizedClientContextSink__ctor_m9055 (SynchronizedClientContextSink_t1587 * __this, Object_t * ___next, SynchronizationAttribute_t1584 * ___att, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		SynchronizationAttribute_t1584 * L_0 = ___att;
		__this->____att_1 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_0 = L_1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink,System.Runtime.Remoting.Contexts.SynchronizationAttribute)
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SynchronizedServerContextSink__ctor_m9056 (SynchronizedServerContextSink_t1588 * __this, Object_t * ___next, SynchronizationAttribute_t1584 * ___att, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		SynchronizationAttribute_t1584 * L_0 = ___att;
		__this->____att_1 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_0 = L_1;
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern "C" void LeaseManager__ctor_m9057 (LeaseManager_t1589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		__this->____objects_0 = L_0;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"
extern "C" void LeaseManager_SetPollTime_m9058 (LeaseManager_t1589 * __this, TimeSpan_t1156  ___timeSpan, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			Timer_t1590 * L_3 = (__this->____timer_1);
			if (!L_3)
			{
				goto IL_002b;
			}
		}

IL_001d:
		{
			Timer_t1590 * L_4 = (__this->____timer_1);
			TimeSpan_t1156  L_5 = ___timeSpan;
			TimeSpan_t1156  L_6 = ___timeSpan;
			NullCheck(L_4);
			Timer_Change_m10304(L_4, L_5, L_6, /*hidden argument*/NULL);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Object_t * L_7 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void LeaseSink__ctor_m9059 (LeaseSink_t1591 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___nextSink;
		__this->____nextSink_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern TypeInfo* LeaseManager_t1589_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1592_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1156_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices__cctor_m9060 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseManager_t1589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1110);
		LifetimeServices_t1592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		TimeSpan_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(778);
		s_Il2CppMethodIntialized = true;
	}
	{
		LeaseManager_t1589 * L_0 = (LeaseManager_t1589 *)il2cpp_codegen_object_new (LeaseManager_t1589_il2cpp_TypeInfo_var);
		LeaseManager__ctor_m9057(L_0, /*hidden argument*/NULL);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1156_il2cpp_TypeInfo_var);
		TimeSpan_t1156  L_1 = TimeSpan_FromSeconds_m11052(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_1;
		TimeSpan_t1156  L_2 = TimeSpan_FromMinutes_m11051(NULL /*static, unused*/, (5.0), /*hidden argument*/NULL);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_2;
		TimeSpan_t1156  L_3 = TimeSpan_FromMinutes_m11051(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_3;
		TimeSpan_t1156  L_4 = TimeSpan_FromMinutes_m11051(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
extern TypeInfo* LifetimeServices_t1592_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseManagerPollTime_m9061 (Object_t * __this /* static, unused */, TimeSpan_t1156  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1156  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_0;
		LeaseManager_t1589 * L_1 = ((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4;
		TimeSpan_t1156  L_2 = ___value;
		NullCheck(L_1);
		LeaseManager_SetPollTime_m9058(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1592_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseTime_m9062 (Object_t * __this /* static, unused */, TimeSpan_t1156  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1156  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1592_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_RenewOnCallTime_m9063 (Object_t * __this /* static, unused */, TimeSpan_t1156  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1156  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1592_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_SponsorshipTimeout_m9064 (Object_t * __this /* static, unused */, TimeSpan_t1156  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1156  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		((LifetimeServices_t1592_StaticFields*)LifetimeServices_t1592_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern TypeInfo* Int32U5BU5D_t1037_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m9065 (ArgInfo_t1594 * __this, MethodBase_t163 * ___method, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(709);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t868* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		MethodBase_t163 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t163 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t868* L_2 = (ParameterInfoU5BU5D_t868*)VirtFuncInvoker0< ParameterInfoU5BU5D_t868* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t868* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t1037*)SZArrayNew(Int32U5BU5D_t1037_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0078;
		}
	}
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_003b:
	{
		ParameterInfoU5BU5D_t868* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_5, L_7, sizeof(ParameterInfo_t869 *))));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_5, L_7, sizeof(ParameterInfo_t869 *))));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_8);
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t1037* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13, sizeof(int32_t))) = (int32_t)L_14;
	}

IL_0066:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t868* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c4;
	}

IL_0078:
	{
		V_2 = 0;
		goto IL_00bb;
	}

IL_007f:
	{
		ParameterInfoU5BU5D_t868* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_18, L_20, sizeof(ParameterInfo_t869 *))));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_18, L_20, sizeof(ParameterInfo_t869 *))));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_21);
		if (L_22)
		{
			goto IL_009e;
		}
	}
	{
		ParameterInfoU5BU5D_t868* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_23, L_25, sizeof(ParameterInfo_t869 *))));
		bool L_26 = ParameterInfo_get_IsOut_m8886((*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_23, L_25, sizeof(ParameterInfo_t869 *))), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b7;
		}
	}

IL_009e:
	{
		Int32U5BU5D_t1037* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30, sizeof(int32_t))) = (int32_t)L_31;
	}

IL_00b7:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00bb:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t868* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_00c4:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* ArgInfo_GetInOutArgs_m9066 (ArgInfo_t1594 * __this, ObjectU5BU5D_t148* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t148* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0024;
	}

IL_0013:
	{
		ObjectU5BU5D_t148* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t148* L_3 = ___args;
		Int32U5BU5D_t1037* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t))));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7, sizeof(Object_t *))));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2, sizeof(Object_t *))) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7, sizeof(Object_t *)));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t148* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AsyncResult__ctor_m9067 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m9068 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
extern TypeInfo* ManualResetEvent_t999_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t1051 * AsyncResult_get_AsyncWaitHandle_m9069 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(684);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1595 * V_0 = {0};
	WaitHandle_t1051 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1595 * L_0 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t1051 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0024;
			}
		}

IL_0013:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t999 * L_3 = (ManualResetEvent_t999 *)il2cpp_codegen_object_new (ManualResetEvent_t999_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m5196(L_3, L_2, /*hidden argument*/NULL);
			__this->___handle_1 = L_3;
		}

IL_0024:
		{
			WaitHandle_t1051 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}

IL_0030:
		{
			; // IL_0030: leave IL_003c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AsyncResult_t1595 * L_5 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_003c:
	{
		WaitHandle_t1051 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m9070 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m9071 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m9072 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void AsyncResult_set_EndInvokeCalled_m9073 (AsyncResult_t1595 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m9074 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m9075 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m9076 (AsyncResult_t1595 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method)
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
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C" Object_t * AsyncResult_GetReplyMessage_m9077 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m9078 (AsyncResult_t1595 * __this, Object_t * ___mc, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m9079 (AsyncResult_t1595 * __this, bool ___completed, const MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m9080 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	AsyncResult_t1595 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1595 * L_0 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_001f;
			}
		}

IL_0013:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x3E, FINALLY_0024);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2B, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		AsyncResult_t1595 * L_3 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_002b:
	{
		WaitHandle_t1051 * L_4 = (WaitHandle_t1051 *)VirtFuncInvoker0< WaitHandle_t1051 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_003e:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
extern TypeInfo* ManualResetEvent_t999_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t391_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m9081 (AsyncResult_t1595 * __this, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(684);
		AsyncCallback_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(686);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1595 * V_0 = {0};
	AsyncCallback_t391 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t1595 * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t1051 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0021:
		{
			WaitHandle_t1051 * L_3 = (WaitHandle_t1051 *)VirtFuncInvoker0< WaitHandle_t1051 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
			NullCheck(((ManualResetEvent_t999 *)CastclassSealed(L_3, ManualResetEvent_t999_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m5197(((ManualResetEvent_t999 *)CastclassSealed(L_3, ManualResetEvent_t999_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		AsyncResult_t1595 * L_4 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_003e:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t391 *)CastclassSealed(L_6, AsyncCallback_t391_il2cpp_TypeInfo_var));
		AsyncCallback_t391 * L_7 = V_1;
		NullCheck(L_7);
		AsyncCallback_Invoke_m7029(L_7, __this, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t1597 * AsyncResult_get_CallMessage_m9082 (AsyncResult_t1595 * __this, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1597 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
extern "C" void AsyncResult_set_CallMessage_m9083 (AsyncResult_t1595 * __this, MonoMethodMessage_t1597 * ___value, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1597 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::.ctor(System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ClientContextTerminatorSink__ctor_m9084 (ClientContextTerminatorSink_t1600 * __this, Context_t1576 * ___ctx, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Context_t1576 * L_0 = ___ctx;
		__this->____context_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
extern "C" void ConstructionCall__ctor_m9085 (ConstructionCall_t1601 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		MethodCall__ctor_m9115(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void ConstructionCall__ctor_m9086 (ConstructionCall_t1601 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t818 * L_0 = ___info;
		StreamingContext_t819  L_1 = ___context;
		MethodCall__ctor_m9114(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_InitDictionary_m9087 (ConstructionCall_t1601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCallDictionary_t1603 * V_0 = {0};
	{
		ConstructionCallDictionary_t1603 * L_0 = (ConstructionCallDictionary_t1603 *)il2cpp_codegen_object_new (ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		ConstructionCallDictionary__ctor_m9099(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConstructionCallDictionary_t1603 * L_1 = V_0;
		((MethodCall_t1602 *)__this)->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t1603 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m9146(L_2, /*hidden argument*/NULL);
		((MethodCall_t1602 *)__this)->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ConstructionCall_set_IsContextOk_m9088 (ConstructionCall_t1601 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ConstructionCall_get_ActivationType_m9089 (ConstructionCall_t1601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m6948, L_1, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		__this->____activationType_14 = L_2;
	}

IL_001c:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m9090 (ConstructionCall_t1601 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m9091 (ConstructionCall_t1601 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m9092 (ConstructionCall_t1601 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t148* ConstructionCall_get_CallSiteActivationAttributes_m9093 (ConstructionCall_t1601 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void ConstructionCall_SetActivationAttributes_m9094 (ConstructionCall_t1601 * __this, ObjectU5BU5D_t148* ___attributes, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m9095 (ConstructionCall_t1601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		__this->____contextProperties_13 = L_1;
	}

IL_0016:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
extern TypeInfo* ConstructionCall_t1601_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1562_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2170;
extern Il2CppCodeGenString* _stringLiteral2171;
extern Il2CppCodeGenString* _stringLiteral2172;
extern Il2CppCodeGenString* _stringLiteral2173;
extern Il2CppCodeGenString* _stringLiteral2174;
extern "C" void ConstructionCall_InitMethodProperty_m9096 (ConstructionCall_t1601 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1068);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		IActivator_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2170 = il2cpp_codegen_string_literal_from_index(2170);
		_stringLiteral2171 = il2cpp_codegen_string_literal_from_index(2171);
		_stringLiteral2172 = il2cpp_codegen_string_literal_from_index(2172);
		_stringLiteral2173 = il2cpp_codegen_string_literal_from_index(2173);
		_stringLiteral2174 = il2cpp_codegen_string_literal_from_index(2174);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t606 * L_2 = ((ConstructionCall_t1601_StaticFields*)ConstructionCall_t1601_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
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
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2170, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2171, 1);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2172, 2);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2173, 3);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2174, 4);
		Dictionary_2_t606 * L_9 = V_1;
		((ConstructionCall_t1601_StaticFields*)ConstructionCall_t1601_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17 = L_9;
	}

IL_005b:
	{
		Dictionary_2_t606 * L_10 = ((ConstructionCall_t1601_StaticFields*)ConstructionCall_t1601_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_0099;
		}
		if (L_13 == 2)
		{
			goto IL_00a6;
		}
		if (L_13 == 3)
		{
			goto IL_00b3;
		}
		if (L_13 == 4)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_00cd;
	}

IL_008c:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, IActivator_t1562_il2cpp_TypeInfo_var));
		return;
	}

IL_0099:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t148*)Castclass(L_15, ObjectU5BU5D_t148_il2cpp_TypeInfo_var));
		return;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)CastclassClass(L_16, Type_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, IList_t1207_il2cpp_TypeInfo_var));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)CastclassSealed(L_18, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m9117(__this, L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2170;
extern Il2CppCodeGenString* _stringLiteral2171;
extern Il2CppCodeGenString* _stringLiteral2172;
extern Il2CppCodeGenString* _stringLiteral2173;
extern Il2CppCodeGenString* _stringLiteral2174;
extern "C" void ConstructionCall_GetObjectData_m9097 (ConstructionCall_t1601 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		_stringLiteral2170 = il2cpp_codegen_string_literal_from_index(2170);
		_stringLiteral2171 = il2cpp_codegen_string_literal_from_index(2171);
		_stringLiteral2172 = il2cpp_codegen_string_literal_from_index(2172);
		_stringLiteral2173 = il2cpp_codegen_string_literal_from_index(2173);
		_stringLiteral2174 = il2cpp_codegen_string_literal_from_index(2174);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		SerializationInfo_t818 * L_0 = ___info;
		StreamingContext_t819  L_1 = ___context;
		MethodCall_GetObjectData_m9118(__this, L_0, L_1, /*hidden argument*/NULL);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t1248_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_0022:
	{
		SerializationInfo_t818 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m5151(L_6, _stringLiteral2170, L_7, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_8 = ___info;
		ObjectU5BU5D_t148* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m5151(L_8, _stringLiteral2171, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m5151(L_10, _stringLiteral2172, NULL, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m5151(L_11, _stringLiteral2173, L_12, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m5151(L_13, _stringLiteral2174, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m9098 (ConstructionCall_t1601 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m9124(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__ctor_m9099 (ConstructionCallDictionary_t1603 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9142(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		StringU5BU5D_t35* L_1 = ((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m9144(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2178;
extern Il2CppCodeGenString* _stringLiteral2179;
extern Il2CppCodeGenString* _stringLiteral2180;
extern Il2CppCodeGenString* _stringLiteral2171;
extern Il2CppCodeGenString* _stringLiteral2172;
extern Il2CppCodeGenString* _stringLiteral2173;
extern Il2CppCodeGenString* _stringLiteral2170;
extern Il2CppCodeGenString* _stringLiteral2174;
extern "C" void ConstructionCallDictionary__cctor_m9100 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		_stringLiteral2179 = il2cpp_codegen_string_literal_from_index(2179);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		_stringLiteral2171 = il2cpp_codegen_string_literal_from_index(2171);
		_stringLiteral2172 = il2cpp_codegen_string_literal_from_index(2172);
		_stringLiteral2173 = il2cpp_codegen_string_literal_from_index(2173);
		_stringLiteral2170 = il2cpp_codegen_string_literal_from_index(2170);
		_stringLiteral2174 = il2cpp_codegen_string_literal_from_index(2174);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t35* L_0 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral2175);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2175;
		StringU5BU5D_t35* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral2176);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2176;
		StringU5BU5D_t35* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral2177);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2, sizeof(String_t*))) = (String_t*)_stringLiteral2177;
		StringU5BU5D_t35* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral2178);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3, sizeof(String_t*))) = (String_t*)_stringLiteral2178;
		StringU5BU5D_t35* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral2179);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4, sizeof(String_t*))) = (String_t*)_stringLiteral2179;
		StringU5BU5D_t35* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral2180);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5, sizeof(String_t*))) = (String_t*)_stringLiteral2180;
		StringU5BU5D_t35* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral2171);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6, sizeof(String_t*))) = (String_t*)_stringLiteral2171;
		StringU5BU5D_t35* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, _stringLiteral2172);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7, sizeof(String_t*))) = (String_t*)_stringLiteral2172;
		StringU5BU5D_t35* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, _stringLiteral2173);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8, sizeof(String_t*))) = (String_t*)_stringLiteral2173;
		StringU5BU5D_t35* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, _stringLiteral2170);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9), sizeof(String_t*))) = (String_t*)_stringLiteral2170;
		StringU5BU5D_t35* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, _stringLiteral2174);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10), sizeof(String_t*))) = (String_t*)_stringLiteral2174;
		((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1911_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2170;
extern Il2CppCodeGenString* _stringLiteral2171;
extern Il2CppCodeGenString* _stringLiteral2172;
extern Il2CppCodeGenString* _stringLiteral2173;
extern Il2CppCodeGenString* _stringLiteral2174;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m9101 (ConstructionCallDictionary_t1603 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		IConstructionCallMessage_t1911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2170 = il2cpp_codegen_string_literal_from_index(2170);
		_stringLiteral2171 = il2cpp_codegen_string_literal_from_index(2171);
		_stringLiteral2172 = il2cpp_codegen_string_literal_from_index(2172);
		_stringLiteral2173 = il2cpp_codegen_string_literal_from_index(2173);
		_stringLiteral2174 = il2cpp_codegen_string_literal_from_index(2174);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_2 = ((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
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
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2170, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2171, 1);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2172, 2);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2173, 3);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2174, 4);
		Dictionary_2_t606 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_10 = ((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_009d;
		}
		if (L_13 == 2)
		{
			goto IL_00ae;
		}
		if (L_13 == 3)
		{
			goto IL_00bf;
		}
		if (L_13 == 4)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00e1;
	}

IL_008c:
	{
		Object_t * L_14 = (((MethodDictionary_t1604 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_14, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_009d:
	{
		Object_t * L_16 = (((MethodDictionary_t1604 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t148* L_17 = (ObjectU5BU5D_t148*)InterfaceFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(4 /* System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_16, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		return (Object_t *)L_17;
	}

IL_00ae:
	{
		Object_t * L_18 = (((MethodDictionary_t1604 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00bf:
	{
		Object_t * L_20 = (((MethodDictionary_t1604 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_20, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		return L_21;
	}

IL_00d0:
	{
		Object_t * L_22 = (((MethodDictionary_t1604 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName() */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_22, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		return L_23;
	}

IL_00e1:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m9150(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1911_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1562_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2170;
extern Il2CppCodeGenString* _stringLiteral2171;
extern Il2CppCodeGenString* _stringLiteral2172;
extern Il2CppCodeGenString* _stringLiteral2173;
extern Il2CppCodeGenString* _stringLiteral2174;
extern Il2CppCodeGenString* _stringLiteral2181;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m9102 (ConstructionCallDictionary_t1603 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		IConstructionCallMessage_t1911_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IActivator_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2170 = il2cpp_codegen_string_literal_from_index(2170);
		_stringLiteral2171 = il2cpp_codegen_string_literal_from_index(2171);
		_stringLiteral2172 = il2cpp_codegen_string_literal_from_index(2172);
		_stringLiteral2173 = il2cpp_codegen_string_literal_from_index(2173);
		_stringLiteral2174 = il2cpp_codegen_string_literal_from_index(2174);
		_stringLiteral2181 = il2cpp_codegen_string_literal_from_index(2181);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_2 = ((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
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
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2170, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2171, 1);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2172, 1);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2173, 1);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2174, 1);
		Dictionary_2_t606 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_10 = ((ConstructionCallDictionary_t1603_StaticFields*)ConstructionCallDictionary_t1603_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00a5;
	}

IL_007f:
	{
		Object_t * L_15 = (((MethodDictionary_t1604 *)__this)->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< Object_t * >::Invoke(3 /* System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_15, IConstructionCallMessage_t1911_il2cpp_TypeInfo_var)), ((Object_t *)Castclass(L_16, IActivator_t1562_il2cpp_TypeInfo_var)));
		goto IL_00b2;
	}

IL_009a:
	{
		ArgumentException_t275 * L_17 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_17, _stringLiteral2181, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_00a5:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m9151(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_00b2:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EnvoyTerminatorSink__ctor_m9103 (EnvoyTerminatorSink_t1605 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"
extern TypeInfo* EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var;
extern "C" void EnvoyTerminatorSink__cctor_m9104 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1096);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnvoyTerminatorSink_t1605 * L_0 = (EnvoyTerminatorSink_t1605 *)il2cpp_codegen_object_new (EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink__ctor_m9103(L_0, /*hidden argument*/NULL);
		((EnvoyTerminatorSink_t1605_StaticFields*)EnvoyTerminatorSink_t1605_il2cpp_TypeInfo_var->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"
extern "C" void Header__ctor_m9105 (Header_t1606 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m9106(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Header__ctor_m9106 (Header_t1606 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m9107(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Header__ctor_m9107 (Header_t1606 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* CallContextRemotingData_t1608_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m9108 (LogicalCallContext_t1607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	{
		CallContextRemotingData_t1608 * L_0 = (CallContextRemotingData_t1608 *)il2cpp_codegen_object_new (CallContextRemotingData_t1608_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m9112(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
extern TypeInfo* CallContextRemotingData_t1608_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2182;
extern "C" void LogicalCallContext__ctor_m9109 (LogicalCallContext_t1607 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral2182 = il2cpp_codegen_string_literal_from_index(2182);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t1691  V_0 = {0};
	SerializationInfoEnumerator_t1693 * V_1 = {0};
	{
		CallContextRemotingData_t1608 * L_0 = (CallContextRemotingData_t1608 *)il2cpp_codegen_object_new (CallContextRemotingData_t1608_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m9112(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t1693 * L_2 = SerializationInfo_GetEnumerator_m9510(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0065;
	}

IL_001d:
	{
		SerializationInfoEnumerator_t1693 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t1691  L_4 = SerializationInfoEnumerator_get_Current_m9518(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m9504((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m421(NULL /*static, unused*/, L_5, _stringLiteral2182, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m9505((&V_0), /*hidden argument*/NULL);
		__this->____remotingData_1 = ((CallContextRemotingData_t1608 *)CastclassClass(L_7, CallContextRemotingData_t1608_il2cpp_TypeInfo_var));
		goto IL_0065;
	}

IL_0051:
	{
		String_t* L_8 = SerializationEntry_get_Name_m9504((&V_0), /*hidden argument*/NULL);
		Object_t * L_9 = SerializationEntry_get_Value_m9505((&V_0), /*hidden argument*/NULL);
		LogicalCallContext_SetData_m9111(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0065:
	{
		SerializationInfoEnumerator_t1693 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = SerializationInfoEnumerator_MoveNext_m9521(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2182;
extern "C" void LogicalCallContext_GetObjectData_m9110 (LogicalCallContext_t1607 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral2182 = il2cpp_codegen_string_literal_from_index(2182);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t1247  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t818 * L_0 = ___info;
		CallContextRemotingData_t1608 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5151(L_0, _stringLiteral2182, L_1, /*hidden argument*/NULL);
		Hashtable_t985 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		Hashtable_t985 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_002d:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_5);
			V_0 = ((*(DictionaryEntry_t1247 *)((DictionaryEntry_t1247 *)UnBox (L_6, DictionaryEntry_t1247_il2cpp_TypeInfo_var))));
			SerializationInfo_t818 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m7704((&V_0), /*hidden argument*/NULL);
			Object_t * L_9 = DictionaryEntry_get_Value_m7705((&V_0), /*hidden argument*/NULL);
			NullCheck(L_7);
			SerializationInfo_AddValue_m5151(L_7, ((String_t*)CastclassSealed(L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		}

IL_0052:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_002d;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_006d;
			}
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(98)
		}

IL_006d:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_SetData_m9111 (LogicalCallContext_t1607 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t985 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t985 * L_1 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_1, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
	}

IL_0016:
	{
		Hashtable_t985 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CallContextRemotingData__ctor_m9112 (CallContextRemotingData_t1608 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
extern "C" void MethodCall__ctor_m9113 (MethodCall_t1602 * __this, HeaderU5BU5D_t1878* ___h1, const MethodInfo* method)
{
	Header_t1606 * V_0 = {0};
	HeaderU5BU5D_t1878* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		HeaderU5BU5D_t1878* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		HeaderU5BU5D_t1878* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		HeaderU5BU5D_t1878* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_003e;
	}

IL_0024:
	{
		HeaderU5BU5D_t1878* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t1606 **)(Header_t1606 **)SZArrayLdElema(L_3, L_5, sizeof(Header_t1606 *)));
		Header_t1606 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t1606 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t1878* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		MethodCall_ResolveMethod_m9130(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
extern "C" void MethodCall__ctor_m9114 (MethodCall_t1602 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	SerializationEntry_t1691  V_0 = {0};
	SerializationInfoEnumerator_t1693 * V_1 = {0};
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		SerializationInfo_t818 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1693 * L_1 = SerializationInfo_GetEnumerator_m9510(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0033;
	}

IL_0018:
	{
		SerializationInfoEnumerator_t1693 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t1691  L_3 = SerializationInfoEnumerator_get_Current_m9518(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m9504((&V_0), /*hidden argument*/NULL);
		Object_t * L_5 = SerializationEntry_get_Value_m9505((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_4, L_5);
	}

IL_0033:
	{
		SerializationInfoEnumerator_t1693 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = SerializationInfoEnumerator_MoveNext_m9521(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m9115 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9116 (MethodCall_t1602 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
extern TypeInfo* MethodCall_t1602_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t1607_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2178;
extern Il2CppCodeGenString* _stringLiteral2179;
extern Il2CppCodeGenString* _stringLiteral2180;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2183;
extern "C" void MethodCall_InitMethodProperty_m9117 (MethodCall_t1602 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCall_t1602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		LogicalCallContext_t1607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		_stringLiteral2179 = il2cpp_codegen_string_literal_from_index(2179);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2183 = il2cpp_codegen_string_literal_from_index(2183);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0107;
		}
	}
	{
		Dictionary_2_t606 * L_2 = ((MethodCall_t1602_StaticFields*)MethodCall_t1602_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		if (L_2)
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_t606 * L_3 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t606 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2177, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2176, 1);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2178, 2);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2179, 3);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2180, 4);
		Dictionary_2_t606 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2175, 5);
		Dictionary_2_t606 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2183, 6);
		Dictionary_2_t606 * L_11 = V_1;
		((MethodCall_t1602_StaticFields*)MethodCall_t1602_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10 = L_11;
	}

IL_0073:
	{
		Dictionary_2_t606 * L_12 = ((MethodCall_t1602_StaticFields*)MethodCall_t1602_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00ac;
		}
		if (L_15 == 1)
		{
			goto IL_00b9;
		}
		if (L_15 == 2)
		{
			goto IL_00c6;
		}
		if (L_15 == 3)
		{
			goto IL_00d3;
		}
		if (L_15 == 4)
		{
			goto IL_00e0;
		}
		if (L_15 == 5)
		{
			goto IL_00ed;
		}
		if (L_15 == 6)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0107;
	}

IL_00ac:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)CastclassSealed(L_16, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b9:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)CastclassSealed(L_17, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c6:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t707*)Castclass(L_18, TypeU5BU5D_t707_il2cpp_TypeInfo_var));
		return;
	}

IL_00d3:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t148*)Castclass(L_19, ObjectU5BU5D_t148_il2cpp_TypeInfo_var));
		return;
	}

IL_00e0:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t1607 *)CastclassSealed(L_20, LogicalCallContext_t1607_il2cpp_TypeInfo_var));
		return;
	}

IL_00ed:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)CastclassSealed(L_21, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00fa:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t707*)Castclass(L_22, TypeU5BU5D_t707_il2cpp_TypeInfo_var));
		return;
	}

IL_0107:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1182_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2178;
extern Il2CppCodeGenString* _stringLiteral2179;
extern Il2CppCodeGenString* _stringLiteral2180;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2183;
extern "C" void MethodCall_GetObjectData_m9118 (MethodCall_t1602 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		_stringLiteral2179 = il2cpp_codegen_string_literal_from_index(2179);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2183 = il2cpp_codegen_string_literal_from_index(2183);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t1247  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t818 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5151(L_0, _stringLiteral2177, L_1, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5151(L_2, _stringLiteral2176, L_3, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_4 = ___info;
		TypeU5BU5D_t707* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5151(L_4, _stringLiteral2178, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_6 = ___info;
		ObjectU5BU5D_t148* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m5151(L_6, _stringLiteral2179, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_8 = ___info;
		LogicalCallContext_t1607 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m5151(L_8, _stringLiteral2180, L_9, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m5151(L_10, _stringLiteral2175, L_11, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_12 = ___info;
		TypeU5BU5D_t707* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m5151(L_12, _stringLiteral2183, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00da;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1182_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_008e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b8;
		}

IL_0093:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t1247 *)((DictionaryEntry_t1247 *)UnBox (L_18, DictionaryEntry_t1247_il2cpp_TypeInfo_var))));
			SerializationInfo_t818 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m7704((&V_0), /*hidden argument*/NULL);
			Object_t * L_21 = DictionaryEntry_get_Value_m7705((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			SerializationInfo_AddValue_m5151(L_19, ((String_t*)CastclassSealed(L_20, String_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		}

IL_00b8:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0093;
			}
		}

IL_00c3:
		{
			IL2CPP_LEAVE(0xDA, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00d3;
			}
		}

IL_00d2:
		{
			IL2CPP_END_FINALLY(200)
		}

IL_00d3:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(200)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00da:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t148* MethodCall_get_Args_m9119 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
extern TypeInfo* LogicalCallContext_t1607_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1607 * MethodCall_get_LogicalCallContext_m9120 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1607 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1607 * L_1 = (LogicalCallContext_t1607 *)il2cpp_codegen_object_new (LogicalCallContext_t1607_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m9108(L_1, /*hidden argument*/NULL);
		__this->____callContext_6 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1607 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t163 * MethodCall_get_MethodBase_m9121 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		MethodBase_t163 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		MethodCall_ResolveMethod_m9130(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		MethodBase_t163 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m9122 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		MethodBase_t163 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		__this->____methodName_2 = L_2;
	}

IL_001c:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m9123 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t868* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t707* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t163 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t163 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t868* L_3 = (ParameterInfoU5BU5D_t868*)VirtFuncInvoker0< ParameterInfoU5BU5D_t868* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t868* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t707* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t868* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t869 *))));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t869 *))));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6, sizeof(Type_t *))) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t868* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t707* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m9124 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary() */, __this);
	}

IL_0011:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* MethodCallDictionary_t1609_il2cpp_TypeInfo_var;
extern "C" void MethodCall_InitDictionary_m9125 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1117);
		s_Il2CppMethodIntialized = true;
	}
	MethodCallDictionary_t1609 * V_0 = {0};
	{
		MethodCallDictionary_t1609 * L_0 = (MethodCallDictionary_t1609 *)il2cpp_codegen_object_new (MethodCallDictionary_t1609_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m9134(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodCallDictionary_t1609 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t1609 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m9146(L_2, /*hidden argument*/NULL);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m9126 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t163 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->____typeName_1 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C" String_t* MethodCall_get_Uri_m9127 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m9128 (MethodCall_t1602 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m9129 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral89;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral2184;
extern Il2CppCodeGenString* _stringLiteral2185;
extern Il2CppCodeGenString* _stringLiteral2186;
extern Il2CppCodeGenString* _stringLiteral2187;
extern Il2CppCodeGenString* _stringLiteral270;
extern Il2CppCodeGenString* _stringLiteral2188;
extern Il2CppCodeGenString* _stringLiteral2189;
extern Il2CppCodeGenString* _stringLiteral2190;
extern "C" void MethodCall_ResolveMethod_m9130 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral2184 = il2cpp_codegen_string_literal_from_index(2184);
		_stringLiteral2185 = il2cpp_codegen_string_literal_from_index(2185);
		_stringLiteral2186 = il2cpp_codegen_string_literal_from_index(2186);
		_stringLiteral2187 = il2cpp_codegen_string_literal_from_index(2187);
		_stringLiteral270 = il2cpp_codegen_string_literal_from_index(270);
		_stringLiteral2188 = il2cpp_codegen_string_literal_from_index(2188);
		_stringLiteral2189 = il2cpp_codegen_string_literal_from_index(2189);
		_stringLiteral2190 = il2cpp_codegen_string_literal_from_index(2190);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0171;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m9337(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral89, L_5, _stringLiteral30, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_0047;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_0047:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m460(NULL /*static, unused*/, _stringLiteral2184, L_8, _stringLiteral2185, L_9, /*hidden argument*/NULL);
		RemotingException_t1648 * L_11 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0064:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m9131(__this, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00b3;
		}
	}
	{
		StringU5BU5D_t35* L_16 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, _stringLiteral2186);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2186;
		StringU5BU5D_t35* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1, sizeof(String_t*))) = (String_t*)L_18;
		StringU5BU5D_t35* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, _stringLiteral2187);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2, sizeof(String_t*))) = (String_t*)_stringLiteral2187;
		StringU5BU5D_t35* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3, sizeof(String_t*))) = (String_t*)L_22;
		StringU5BU5D_t35* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, _stringLiteral270);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4, sizeof(String_t*))) = (String_t*)_stringLiteral270;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m517(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		RemotingException_t1648 * L_25 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_25);
	}

IL_00b3:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t707* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		MethodBase_t163 * L_29 = RemotingServices_GetMethodBaseFromName_m9342(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_29;
		MethodBase_t163 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_0104;
		}
	}
	{
		ObjectU5BU5D_t148* L_31 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, _stringLiteral2188);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral2188;
		ObjectU5BU5D_t148* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1, sizeof(Object_t *))) = (Object_t *)L_33;
		ObjectU5BU5D_t148* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, _stringLiteral2189);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral2189;
		ObjectU5BU5D_t148* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3, sizeof(Object_t *))) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m422(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RemotingException_t1648 * L_38 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_38);
	}

IL_0104:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_41);
		if (!L_42)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_43);
		if (L_44)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t163 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		MethodBase_t163 * L_47 = RemotingServices_GetVirtualMethod_m9335(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_47;
		MethodBase_t163 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_016c;
		}
	}
	{
		ObjectU5BU5D_t148* L_49 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, _stringLiteral2188);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral2188;
		ObjectU5BU5D_t148* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1, sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t148* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, _stringLiteral2189);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral2189;
		ObjectU5BU5D_t148* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3, sizeof(Object_t *))) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m422(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		RemotingException_t1648 * L_56 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_56, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_56);
	}

IL_016c:
	{
		goto IL_01a9;
	}

IL_0171:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		MethodBase_t163 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m9341(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_57;
		MethodBase_t163 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_01a9;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m460(NULL /*static, unused*/, _stringLiteral2188, L_59, _stringLiteral2189, L_60, /*hidden argument*/NULL);
		RemotingException_t1648 * L_62 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_62, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_62);
	}

IL_01a9:
	{
		MethodBase_t163 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_63);
		if (!L_64)
		{
			goto IL_01fb;
		}
	}
	{
		MethodBase_t163 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_65);
		if (!L_66)
		{
			goto IL_01fb;
		}
	}
	{
		TypeU5BU5D_t707* L_67 = MethodCall_get_GenericArguments_m9133(__this, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_01df;
		}
	}
	{
		RemotingException_t1648 * L_68 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_68, _stringLiteral2190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_68);
	}

IL_01df:
	{
		MethodBase_t163 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t707* L_70 = MethodCall_get_GenericArguments_m9133(__this, /*hidden argument*/NULL);
		NullCheck(((MethodInfo_t *)CastclassClass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t707* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, ((MethodInfo_t *)CastclassClass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01fb:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Type_t * MethodCall_CastTo_m9131 (MethodCall_t1602 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t707* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t707* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m9132(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m421(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001b:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		V_0 = L_8;
		goto IL_0041;
	}

IL_0027:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m421(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_003a:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_14);
		V_0 = L_15;
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t707* L_18 = (TypeU5BU5D_t707*)VirtFuncInvoker0< TypeU5BU5D_t707* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t707* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0076;
	}

IL_0058:
	{
		TypeU5BU5D_t707* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22, sizeof(Type_t *)));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Equality_m421(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0070:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t707* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_0058;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern Il2CppCodeGenString* _stringLiteral2191;
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m9132 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2191 = il2cpp_codegen_string_literal_from_index(2191);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m4052(L_0, _stringLiteral2191, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m4040(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m2501(L_7, 0, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m472(L_9, /*hidden argument*/NULL);
		___aqname = L_10;
	}

IL_003b:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t707* MethodCall_get_GenericArguments_m9133 (MethodCall_t1602 * __this, const MethodInfo* method)
{
	TypeU5BU5D_t707* V_0 = {0};
	{
		TypeU5BU5D_t707* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeU5BU5D_t707* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_0012:
	{
		MethodBase_t163 * L_2 = (MethodBase_t163 *)VirtFuncInvoker0< MethodBase_t163 * >::Invoke(8 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase() */, __this);
		NullCheck(L_2);
		TypeU5BU5D_t707* L_3 = (TypeU5BU5D_t707*)VirtFuncInvoker0< TypeU5BU5D_t707* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		TypeU5BU5D_t707* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t707* L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* MethodCallDictionary_t1609_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__ctor_m9134 (MethodCallDictionary_t1609 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1117);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9142(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MethodCallDictionary_t1609_il2cpp_TypeInfo_var);
		StringU5BU5D_t35* L_1 = ((MethodCallDictionary_t1609_StaticFields*)MethodCallDictionary_t1609_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m9144(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCallDictionary_t1609_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2178;
extern Il2CppCodeGenString* _stringLiteral2179;
extern Il2CppCodeGenString* _stringLiteral2180;
extern "C" void MethodCallDictionary__cctor_m9135 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		MethodCallDictionary_t1609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1117);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		_stringLiteral2179 = il2cpp_codegen_string_literal_from_index(2179);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t35* L_0 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral2175);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2175;
		StringU5BU5D_t35* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral2176);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2176;
		StringU5BU5D_t35* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral2177);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2, sizeof(String_t*))) = (String_t*)_stringLiteral2177;
		StringU5BU5D_t35* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral2178);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3, sizeof(String_t*))) = (String_t*)_stringLiteral2178;
		StringU5BU5D_t35* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral2179);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4, sizeof(String_t*))) = (String_t*)_stringLiteral2179;
		StringU5BU5D_t35* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral2180);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5, sizeof(String_t*))) = (String_t*)_stringLiteral2180;
		((MethodCallDictionary_t1609_StaticFields*)MethodCallDictionary_t1609_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator__ctor_m9136 (DictionaryEnumerator_t1610 * __this, MethodDictionary_t1604 * ___methodDictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	DictionaryEnumerator_t1610 * G_B2_0 = {0};
	DictionaryEnumerator_t1610 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t1610 * G_B3_1 = {0};
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		MethodDictionary_t1604 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t1604 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		MethodDictionary_t1604 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1182_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0036:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" Object_t * DictionaryEnumerator_get_Current_m9137 (DictionaryEnumerator_t1610 * __this, const MethodInfo* method)
{
	DictionaryEntry_t1247  V_0 = {0};
	{
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7705((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern "C" bool DictionaryEnumerator_MoveNext_m9138 (DictionaryEnumerator_t1610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t1604 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t35* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_003d:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		goto IL_0071;
	}

IL_004f:
	{
		MethodDictionary_t1604 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m9147(L_6, ((String_t*)CastclassSealed(L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		return 1;
	}

IL_0071:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		return 0;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t1075_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2192;
extern "C" DictionaryEntry_t1247  DictionaryEnumerator_get_Entry_m9139 (DictionaryEnumerator_t1610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(664);
		IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(751);
		_stringLiteral2192 = il2cpp_codegen_string_literal_from_index(2192);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		MethodDictionary_t1604 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t35* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t1604 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t1604 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t35* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9, sizeof(String_t*))));
		DictionaryEntry_t1247  L_11 = {0};
		DictionaryEntry__ctor_m6108(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*))), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0041:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_0063;
		}
	}

IL_0058:
	{
		InvalidOperationException_t1075 * L_14 = (InvalidOperationException_t1075 *)il2cpp_codegen_object_new (InvalidOperationException_t1075_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5175(L_14, _stringLiteral2192, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_0063:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t1247  L_16 = (DictionaryEntry_t1247 )InterfaceFuncInvoker0< DictionaryEntry_t1247  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1246_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m9140 (DictionaryEnumerator_t1610 * __this, const MethodInfo* method)
{
	DictionaryEntry_t1247  V_0 = {0};
	{
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m7704((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m9141 (DictionaryEnumerator_t1610 * __this, const MethodInfo* method)
{
	DictionaryEntry_t1247  V_0 = {0};
	{
		DictionaryEntry_t1247  L_0 = (DictionaryEntry_t1247 )VirtFuncInvoker0< DictionaryEntry_t1247  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7705((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void MethodDictionary__ctor_m9142 (MethodDictionary_t1604 * __this, Object_t * ___message, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"
extern TypeInfo* DictionaryEnumerator_t1610_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m9143 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1610 * L_0 = (DictionaryEnumerator_t1610 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1610_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m9136(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void MethodDictionary_set_MethodKeys_m9144 (MethodDictionary_t1604 * __this, StringU5BU5D_t35* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t35* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m9145 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ownProperties_3 = 1;
		Hashtable_t985 * L_0 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m9146 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0017:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_IsOverridenKey_m9147 (MethodDictionary_t1604 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t35* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
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
		StringU5BU5D_t35* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0031;
	}

IL_001b:
	{
		StringU5BU5D_t35* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*)));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m421(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t35* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Item_m9148 (MethodDictionary_t1604 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002d;
	}

IL_000e:
	{
		StringU5BU5D_t35* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m421(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t35* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1182_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}

IL_0053:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m9149 (MethodDictionary_t1604 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(11 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
extern TypeInfo* MethodDictionary_t1604_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodMessage_t1611_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t1916_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2178;
extern Il2CppCodeGenString* _stringLiteral2180;
extern Il2CppCodeGenString* _stringLiteral2179;
extern Il2CppCodeGenString* _stringLiteral2193;
extern Il2CppCodeGenString* _stringLiteral2194;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m9150 (MethodDictionary_t1604 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		IMethodMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		IMethodReturnMessage_t1916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		_stringLiteral2179 = il2cpp_codegen_string_literal_from_index(2179);
		_stringLiteral2193 = il2cpp_codegen_string_literal_from_index(2193);
		_stringLiteral2194 = il2cpp_codegen_string_literal_from_index(2194);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0126;
		}
	}
	{
		Dictionary_2_t606 * L_2 = ((MethodDictionary_t1604_StaticFields*)MethodDictionary_t1604_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t606 * L_3 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t606 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2175, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2176, 1);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2177, 2);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2178, 3);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2180, 4);
		Dictionary_2_t606 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2179, 5);
		Dictionary_2_t606 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2193, 6);
		Dictionary_2_t606 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2194, 7);
		Dictionary_2_t606 * L_12 = V_1;
		((MethodDictionary_t1604_StaticFields*)MethodDictionary_t1604_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t606 * L_13 = ((MethodDictionary_t1604_StaticFields*)MethodDictionary_t1604_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00bc;
		}
		if (L_16 == 1)
		{
			goto IL_00c8;
		}
		if (L_16 == 2)
		{
			goto IL_00d4;
		}
		if (L_16 == 3)
		{
			goto IL_00e0;
		}
		if (L_16 == 4)
		{
			goto IL_00ec;
		}
		if (L_16 == 5)
		{
			goto IL_00f8;
		}
		if (L_16 == 6)
		{
			goto IL_0104;
		}
		if (L_16 == 7)
		{
			goto IL_0115;
		}
	}
	{
		goto IL_0126;
	}

IL_00bc:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_17);
		return L_18;
	}

IL_00c8:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_19);
		return L_20;
	}

IL_00d4:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_21);
		return L_22;
	}

IL_00e0:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_23);
		return L_24;
	}

IL_00ec:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t1607 * L_26 = (LogicalCallContext_t1607 *)InterfaceFuncInvoker0< LogicalCallContext_t1607 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}

IL_00f8:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t148* L_28 = (ObjectU5BU5D_t148*)InterfaceFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_27);
		return (Object_t *)L_28;
	}

IL_0104:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, IMethodReturnMessage_t1916_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t148* L_30 = (ObjectU5BU5D_t148*)InterfaceFuncInvoker0< ObjectU5BU5D_t148* >::Invoke(1 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs() */, IMethodReturnMessage_t1916_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IMethodReturnMessage_t1916_il2cpp_TypeInfo_var)));
		return (Object_t *)L_30;
	}

IL_0115:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, IMethodReturnMessage_t1916_il2cpp_TypeInfo_var)));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue() */, IMethodReturnMessage_t1916_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_31, IMethodReturnMessage_t1916_il2cpp_TypeInfo_var)));
		return L_32;
	}

IL_0126:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* MethodDictionary_t1604_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalMessage_t1940_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2180;
extern Il2CppCodeGenString* _stringLiteral2193;
extern Il2CppCodeGenString* _stringLiteral2194;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2178;
extern Il2CppCodeGenString* _stringLiteral2179;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2181;
extern "C" void MethodDictionary_SetMethodProperty_m9151 (MethodDictionary_t1604 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		IInternalMessage_t1940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		_stringLiteral2193 = il2cpp_codegen_string_literal_from_index(2193);
		_stringLiteral2194 = il2cpp_codegen_string_literal_from_index(2194);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		_stringLiteral2179 = il2cpp_codegen_string_literal_from_index(2179);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2181 = il2cpp_codegen_string_literal_from_index(2181);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t606 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cb;
		}
	}
	{
		Dictionary_2_t606 * L_2 = ((MethodDictionary_t1604_StaticFields*)MethodDictionary_t1604_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t606 * L_3 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t606 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2180, 0);
		Dictionary_2_t606 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2193, 0);
		Dictionary_2_t606 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2194, 0);
		Dictionary_2_t606 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2176, 1);
		Dictionary_2_t606 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2177, 1);
		Dictionary_2_t606 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2178, 1);
		Dictionary_2_t606 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2179, 1);
		Dictionary_2_t606 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2175, 2);
		Dictionary_2_t606 * L_12 = V_1;
		((MethodDictionary_t1604_StaticFields*)MethodDictionary_t1604_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t606 * L_13 = ((MethodDictionary_t1604_StaticFields*)MethodDictionary_t1604_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00a8;
		}
		if (L_16 == 1)
		{
			goto IL_00a9;
		}
		if (L_16 == 2)
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_00cb;
	}

IL_00a8:
	{
		return;
	}

IL_00a9:
	{
		ArgumentException_t275 * L_17 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_17, _stringLiteral2181, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_00b4:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, IInternalMessage_t1940_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String) */, IInternalMessage_t1940_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IInternalMessage_t1940_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed(L_19, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00cb:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Values_m9152 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t920 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t1247  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000d:
	{
		ArrayList_t920 * L_1 = V_0;
		StringU5BU5D_t35* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*))));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t35* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1182_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0050:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_12);
			V_2 = ((*(DictionaryEntry_t1247 *)((DictionaryEntry_t1247 *)UnBox (L_13, DictionaryEntry_t1247_il2cpp_TypeInfo_var))));
			Object_t * L_14 = DictionaryEntry_get_Key_m7704((&V_2), /*hidden argument*/NULL);
			bool L_15 = MethodDictionary_IsOverridenKey_m9147(__this, ((String_t*)CastclassSealed(L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0081;
			}
		}

IL_0073:
		{
			ArrayList_t920 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m7705((&V_2), /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0081:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0050;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_009e;
			}
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(145)
		}

IL_009e:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00a6:
	{
		ArrayList_t920 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Add_m9153 (MethodDictionary_t1604 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002e;
	}

IL_000e:
	{
		StringU5BU5D_t35* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m421(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object) */, __this, L_6, L_7);
		return;
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t35* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0053:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1182_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_Contains_m9154 (MethodDictionary_t1604 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		StringU5BU5D_t35* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m421(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t35* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		Object_t * L_11 = ___key;
		NullCheck(L_10);
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(3 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t1182_il2cpp_TypeInfo_var, L_10, L_11);
		return L_12;
	}

IL_004d:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2181;
extern "C" void MethodDictionary_Remove_m9155 (MethodDictionary_t1604 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		_stringLiteral2181 = il2cpp_codegen_string_literal_from_index(2181);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		StringU5BU5D_t35* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m421(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*))), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t275 * L_6 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_6, _stringLiteral2181, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_002c:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t35* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t1182_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0055:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" int32_t MethodDictionary_get_Count_m9156 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t1248_il2cpp_TypeInfo_var, L_1);
		StringU5BU5D_t35* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_0020:
	{
		StringU5BU5D_t35* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C" bool MethodDictionary_get_IsSynchronized_m9157 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m9158 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t1248_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_CopyTo_m9159 (MethodDictionary_t1604 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(717);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(18 /* System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1248_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t1610_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_GetEnumerator_m9160 (MethodDictionary_t1604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1610 * L_0 = (DictionaryEnumerator_t1610 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1610_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m9136(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern TypeInfo* IMethodReturnMessage_t1916_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1612_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__ctor_m9161 (MethodReturnDictionary_t1612 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodReturnMessage_t1916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		MethodReturnDictionary_t1612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9142(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t154 * L_2 = (Exception_t154 *)InterfaceFuncInvoker0< Exception_t154 * >::Invoke(0 /* System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception() */, IMethodReturnMessage_t1916_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1612_il2cpp_TypeInfo_var);
		StringU5BU5D_t35* L_3 = ((MethodReturnDictionary_t1612_StaticFields*)MethodReturnDictionary_t1612_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m9144(__this, L_3, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1612_il2cpp_TypeInfo_var);
		StringU5BU5D_t35* L_4 = ((MethodReturnDictionary_t1612_StaticFields*)MethodReturnDictionary_t1612_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m9144(__this, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1612_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2178;
extern Il2CppCodeGenString* _stringLiteral2193;
extern Il2CppCodeGenString* _stringLiteral2194;
extern Il2CppCodeGenString* _stringLiteral2180;
extern "C" void MethodReturnDictionary__cctor_m9162 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		MethodReturnDictionary_t1612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		_stringLiteral2193 = il2cpp_codegen_string_literal_from_index(2193);
		_stringLiteral2194 = il2cpp_codegen_string_literal_from_index(2194);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t35* L_0 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral2175);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2175;
		StringU5BU5D_t35* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral2176);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2176;
		StringU5BU5D_t35* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral2177);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2, sizeof(String_t*))) = (String_t*)_stringLiteral2177;
		StringU5BU5D_t35* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral2178);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3, sizeof(String_t*))) = (String_t*)_stringLiteral2178;
		StringU5BU5D_t35* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral2193);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4, sizeof(String_t*))) = (String_t*)_stringLiteral2193;
		StringU5BU5D_t35* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral2194);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5, sizeof(String_t*))) = (String_t*)_stringLiteral2194;
		StringU5BU5D_t35* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral2180);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6, sizeof(String_t*))) = (String_t*)_stringLiteral2180;
		((MethodReturnDictionary_t1612_StaticFields*)MethodReturnDictionary_t1612_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t35* L_7 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, _stringLiteral2180);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2180;
		((MethodReturnDictionary_t1612_StaticFields*)MethodReturnDictionary_t1612_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_Args_m9163 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1607 * MonoMethodMessage_get_LogicalCallContext_m9164 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	{
		LogicalCallContext_t1607 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t163 * MonoMethodMessage_get_MethodBase_m9165 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_MethodName_m9166 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m9167 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t868* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t707* L_0 = (__this->___methodSignature_7);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t868* L_2 = (ParameterInfoU5BU5D_t868*)VirtFuncInvoker0< ParameterInfoU5BU5D_t868* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t868* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_7 = ((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		TypeU5BU5D_t707* L_4 = (__this->___methodSignature_7);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t868* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_6, L_8, sizeof(ParameterInfo_t869 *))));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_6, L_8, sizeof(ParameterInfo_t869 *))));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5, sizeof(Type_t *))) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t868* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0049:
	{
		TypeU5BU5D_t707* L_13 = (__this->___methodSignature_7);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_TypeName_m9168 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m9169 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void MonoMethodMessage_set_Uri_m9170 (MonoMethodMessage_t1597 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_6 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t154 * MonoMethodMessage_get_Exception_m9171 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m9172 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t625* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t148* L_0 = (__this->___args_1);
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
		V_0 = 0;
		ByteU5BU5D_t625* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0031;
	}

IL_001d:
	{
		ByteU5BU5D_t625* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4, sizeof(uint8_t)));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t625* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_OutArgs_m9173 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t148* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t625* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t148* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ObjectU5BU5D_t148*)NULL;
	}

IL_000d:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount() */, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t625* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_0058;
	}

IL_002f:
	{
		ByteU5BU5D_t625* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7, sizeof(uint8_t)));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		ObjectU5BU5D_t148* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t148* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14, sizeof(Object_t *))));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14, sizeof(Object_t *)));
	}

IL_004e:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t625* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t148* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m9174 (MonoMethodMessage_t1597 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void RemotingSurrogate__ctor_m9175 (RemotingSurrogate_t1613 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m9176 (RemotingSurrogate_t1613 * __this, Object_t * ___obj, SerializationInfo_t818 * ___si, StreamingContext_t819  ___sc, Object_t * ___selector, const MethodInfo* method)
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
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ObjRefSurrogate__ctor_m9177 (ObjRefSurrogate_t1614 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2195;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m9178 (ObjRefSurrogate_t1614 * __this, Object_t * ___obj, SerializationInfo_t818 * ___si, StreamingContext_t819  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2195 = il2cpp_codegen_string_literal_from_index(2195);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t199 * L_0 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_0, _stringLiteral2195, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void RemotingSurrogateSelector__ctor_m9179 (RemotingSurrogateSelector_t1615 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"
extern const Il2CppType* ObjRef_t1636_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRefSurrogate_t1614_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogate_t1613_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogateSelector__cctor_m9180 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1636_0_0_0_var = il2cpp_codegen_type_from_index(1124);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		ObjRefSurrogate_t1614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		RemotingSurrogate_t1613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(ObjRef_t1636_0_0_0_var), /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1615_StaticFields*)RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t1614 * L_1 = (ObjRefSurrogate_t1614 *)il2cpp_codegen_object_new (ObjRefSurrogate_t1614_il2cpp_TypeInfo_var);
		ObjRefSurrogate__ctor_m9177(L_1, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1615_StaticFields*)RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t1613 * L_2 = (RemotingSurrogate_t1613 *)il2cpp_codegen_object_new (RemotingSurrogate_t1613_il2cpp_TypeInfo_var);
		RemotingSurrogate__ctor_m9175(L_2, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1615_StaticFields*)RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern TypeInfo* RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t1616_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m9181 (RemotingSurrogateSelector_t1615 * __this, Type_t * ___type, StreamingContext_t819  ___context, Object_t ** ___ssout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		ISurrogateSelector_t1616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var);
		RemotingSurrogate_t1613 * L_3 = ((RemotingSurrogateSelector_t1615_StaticFields*)RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((RemotingSurrogateSelector_t1615_StaticFields*)RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var);
		ObjRefSurrogate_t1614 * L_8 = ((RemotingSurrogateSelector_t1615_StaticFields*)RemotingSurrogateSelector_t1615_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_002d:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t819  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t819 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t1616_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
// System.Object
#include "mscorlib_System_Object.h"
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* IMethodMessage_t1611_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m9182 (ReturnMessage_t1617 * __this, Object_t * ___ret, ObjectU5BU5D_t148* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1607 * ___callCtx, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t148* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t1607 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t163 * L_8 = (MethodBase_t163 *)InterfaceFuncInvoker0< MethodBase_t163 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0044:
	{
		ObjectU5BU5D_t148* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, L_10));
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo* IMethodMessage_t1611_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m9183 (ReturnMessage_t1617 * __this, Exception_t154 * ___e, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Exception_t154 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t163 * L_3 = (MethodBase_t163 *)InterfaceFuncInvoker0< MethodBase_t163 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t1607 * L_5 = (LogicalCallContext_t1607 *)InterfaceFuncInvoker0< LogicalCallContext_t1607 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1611_il2cpp_TypeInfo_var, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_002b:
	{
		__this->____args_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9184 (ReturnMessage_t1617 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t148* ReturnMessage_get_Args_m9185 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t148* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
extern TypeInfo* LogicalCallContext_t1607_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1607 * ReturnMessage_get_LogicalCallContext_m9186 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1607 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1607 * L_1 = (LogicalCallContext_t1607 *)il2cpp_codegen_object_new (LogicalCallContext_t1607_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m9108(L_1, /*hidden argument*/NULL);
		__this->____callCtx_3 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1607 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t163 * ReturnMessage_get_MethodBase_m9187 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	{
		MethodBase_t163 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m9188 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	{
		MethodBase_t163 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		MethodBase_t163 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0027:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m9189 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t868* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t163 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		TypeU5BU5D_t707* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t163 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t868* L_3 = (ParameterInfoU5BU5D_t868*)VirtFuncInvoker0< ParameterInfoU5BU5D_t868* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t868* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t707*)SZArrayNew(TypeU5BU5D_t707_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t707* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t868* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t869 *))));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t869 **)(ParameterInfo_t869 **)SZArrayLdElema(L_7, L_9, sizeof(ParameterInfo_t869 *))));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6, sizeof(Type_t *))) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t868* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t707* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"
extern TypeInfo* MethodReturnDictionary_t1612_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_Properties_m9190 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodReturnDictionary_t1612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodReturnDictionary_t1612 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		MethodReturnDictionary_t1612 * L_1 = (MethodReturnDictionary_t1612 *)il2cpp_codegen_object_new (MethodReturnDictionary_t1612_il2cpp_TypeInfo_var);
		MethodReturnDictionary__ctor_m9161(L_1, __this, /*hidden argument*/NULL);
		__this->____properties_11 = L_1;
	}

IL_0017:
	{
		MethodReturnDictionary_t1612 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m9191 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	{
		MethodBase_t163 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		MethodBase_t163 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->____typeName_10 = L_4;
	}

IL_002c:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m9192 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m9193 (ReturnMessage_t1617 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t154 * ReturnMessage_get_Exception_m9194 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"
extern TypeInfo* ArgInfo_t1594_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t148* ReturnMessage_get_OutArgs_m9195 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t1594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		ObjectU5BU5D_t148* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		ArgInfo_t1594 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		MethodBase_t163 * L_3 = (MethodBase_t163 *)VirtFuncInvoker0< MethodBase_t163 * >::Invoke(7 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t1594 * L_4 = (ArgInfo_t1594 *)il2cpp_codegen_object_new (ArgInfo_t1594_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m9065(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_0033:
	{
		ArgInfo_t1594 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t148* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t148* L_7 = ArgInfo_GetInOutArgs_m9066(L_5, L_6, /*hidden argument*/NULL);
		__this->____outArgs_0 = L_7;
	}

IL_004a:
	{
		ObjectU5BU5D_t148* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m9196 (ReturnMessage_t1617 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ServerContextTerminatorSink::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ServerContextTerminatorSink__ctor_m9197 (ServerContextTerminatorSink_t1618 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ServerObjectTerminatorSink__ctor_m9198 (ServerObjectTerminatorSink_t1619 * __this, Object_t * ___nextSink, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___nextSink;
		__this->____nextSink_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.StackBuilderSink::.ctor(System.MarshalByRefObject,System.Boolean)
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern "C" void StackBuilderSink__ctor_m9199 (StackBuilderSink_t1620 * __this, MarshalByRefObject_t1134 * ___obj, bool ___forceInternalExecute, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		MarshalByRefObject_t1134 * L_0 = ___obj;
		__this->____target_0 = L_0;
		bool L_1 = ___forceInternalExecute;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		MarshalByRefObject_t1134 * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		bool L_3 = RemotingServices_IsTransparentProxy_m9336(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		MarshalByRefObject_t1134 * L_4 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		RealProxy_t1621 * L_5 = RemotingServices_GetRealProxy_m9340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->____rp_1 = L_5;
	}

IL_002a:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h"
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SoapAttribute__ctor_m9200 (SoapAttribute_t1622 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4037(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::get_UseAttribute()
extern "C" bool SoapAttribute_get_UseAttribute_m9201 (SoapAttribute_t1622 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapAttribute::get_XmlNamespace()
extern "C" String_t* SoapAttribute_get_XmlNamespace_m9202 (SoapAttribute_t1622 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___ProtXmlNamespace_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void SoapAttribute_SetReflectionObject_m9203 (SoapAttribute_t1622 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___reflectionObject;
		__this->___ReflectInfo_2 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttribute.h"
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttributeMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapFieldAttribute__ctor_m9204 (SoapFieldAttribute_t1623 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m9200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::get_XmlElementName()
extern "C" String_t* SoapFieldAttribute_get_XmlElementName_m9205 (SoapFieldAttribute_t1623 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____elementName_3);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::IsInteropXmlElement()
extern "C" bool SoapFieldAttribute_IsInteropXmlElement_m9206 (SoapFieldAttribute_t1623 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern "C" void SoapFieldAttribute_SetReflectionObject_m9207 (SoapFieldAttribute_t1623 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	FieldInfo_t * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((FieldInfo_t *)CastclassClass(L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____elementName_3);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		FieldInfo_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____elementName_3 = L_3;
	}

IL_001e:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttribut.h"
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttributMethodDeclarations.h"
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapMethodAttribute__ctor_m9208 (SoapMethodAttribute_t1624 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m9200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_UseAttribute()
extern "C" bool SoapMethodAttribute_get_UseAttribute_m9209 (SoapMethodAttribute_t1624 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_XmlNamespace()
extern "C" String_t* SoapMethodAttribute_get_XmlNamespace_m9210 (SoapMethodAttribute_t1624 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____namespace_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
extern TypeInfo* MethodBase_t163_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1655_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2196;
extern Il2CppCodeGenString* _stringLiteral2197;
extern Il2CppCodeGenString* _stringLiteral1186;
extern "C" void SoapMethodAttribute_SetReflectionObject_m9211 (SoapMethodAttribute_t1624 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBase_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1020);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		SoapServices_t1655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1130);
		_stringLiteral2196 = il2cpp_codegen_string_literal_from_index(2196);
		_stringLiteral2197 = il2cpp_codegen_string_literal_from_index(2197);
		_stringLiteral1186 = il2cpp_codegen_string_literal_from_index(1186);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t163 * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((MethodBase_t163 *)CastclassClass(L_0, MethodBase_t163_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____responseElement_3);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		MethodBase_t163 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m423(NULL /*static, unused*/, L_3, _stringLiteral2196, /*hidden argument*/NULL);
		__this->____responseElement_3 = L_4;
	}

IL_0028:
	{
		String_t* L_5 = (__this->____responseNamespace_4);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		MethodBase_t163 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		String_t* L_7 = SoapServices_GetXmlNamespaceForMethodResponse_m9374(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____responseNamespace_4 = L_7;
	}

IL_003f:
	{
		String_t* L_8 = (__this->____returnElement_5);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		__this->____returnElement_5 = _stringLiteral2197;
	}

IL_0055:
	{
		String_t* L_9 = (__this->____soapAction_6);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		MethodBase_t163 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		String_t* L_11 = SoapServices_GetXmlNamespaceForMethodCall_m9373(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		MethodBase_t163 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m440(NULL /*static, unused*/, L_11, _stringLiteral1186, L_13, /*hidden argument*/NULL);
		__this->____soapAction_6 = L_14;
	}

IL_007c:
	{
		String_t* L_15 = (__this->____namespace_8);
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		MethodBase_t163 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		String_t* L_17 = SoapServices_GetXmlNamespaceForMethodCall_m9373(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		__this->____namespace_8 = L_17;
	}

IL_0093:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttri.h"
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttriMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapParameterAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapParameterAttribute__ctor_m9212 (SoapParameterAttribute_t1625 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m9200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttribute.h"
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttributeMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::.ctor()
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"
extern "C" void SoapTypeAttribute__ctor_m9213 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m9200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_UseAttribute()
extern "C" bool SoapTypeAttribute_get_UseAttribute_m9214 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlElementName()
extern "C" String_t* SoapTypeAttribute_get_XmlElementName_m9215 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlElementName_4);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlNamespace_m9216 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlNamespace_5);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeName()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeName_m9217 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeName_6);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeNamespace_m9218 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeNamespace_7);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlElement()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlElement_m9219 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_9);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlType()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlType_m9220 (SoapTypeAttribute_t1626 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isType_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::SetReflectionObject(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1655_il2cpp_TypeInfo_var;
extern "C" void SoapTypeAttribute_SetReflectionObject_m9221 (SoapTypeAttribute_t1626 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		SoapServices_t1655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1130);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((Type_t *)CastclassClass(L_0, Type_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____xmlElementName_4);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____xmlElementName_4 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____xmlTypeName_6);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		__this->____xmlTypeName_6 = L_6;
	}

IL_0035:
	{
		String_t* L_7 = (__this->____xmlTypeNamespace_7);
		if (L_7)
		{
			goto IL_0088;
		}
	}
	{
		Type_t * L_8 = V_0;
		NullCheck(L_8);
		Assembly_t1255 * L_9 = (Assembly_t1255 *)VirtFuncInvoker0< Assembly_t1255 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Assembly_t1255 * L_11 = (Assembly_t1255 *)VirtFuncInvoker0< Assembly_t1255 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_10);
		if ((!(((Object_t*)(Assembly_t1255 *)L_9) == ((Object_t*)(Assembly_t1255 *)L_11))))
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_12;
		goto IL_0076;
	}

IL_0065:
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		Assembly_t1255 * L_14 = (Assembly_t1255 *)VirtFuncInvoker0< Assembly_t1255 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_13);
		NullCheck(L_14);
		AssemblyName_t1497 * L_15 = (AssemblyName_t1497 *)VirtFuncInvoker0< AssemblyName_t1497 * >::Invoke(16 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_14);
		NullCheck(L_15);
		String_t* L_16 = AssemblyName_get_Name_m8653(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0076:
	{
		Type_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_17);
		String_t* L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		String_t* L_20 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m9369(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->____xmlTypeNamespace_7 = L_20;
	}

IL_0088:
	{
		String_t* L_21 = (__this->____xmlNamespace_5);
		if (L_21)
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_22 = (__this->____xmlTypeNamespace_7);
		__this->____xmlNamespace_5 = L_22;
	}

IL_009f:
	{
		return;
	}
}
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1630_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t1134_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t1134 * ProxyAttribute_CreateInstance_m9222 (ProxyAttribute_t1627 * __this, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		RemotingProxy_t1630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1131);
		MarshalByRefObject_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(896);
		s_Il2CppMethodIntialized = true;
	}
	RemotingProxy_t1630 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ChannelServices_t1570_StaticFields*)ChannelServices_t1570_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		RemotingProxy_t1630 * L_2 = (RemotingProxy_t1630 *)il2cpp_codegen_object_new (RemotingProxy_t1630_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m9236(L_2, L_0, L_1, (ObjectU5BU5D_t148*)(ObjectU5BU5D_t148*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		RemotingProxy_t1630 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_3);
		return ((MarshalByRefObject_t1134 *)CastclassClass(L_4, MarshalByRefObject_t1134_il2cpp_TypeInfo_var));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern "C" RealProxy_t1621 * ProxyAttribute_CreateProxy_m9223 (ProxyAttribute_t1627 * __this, ObjRef_t1636 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1576 * ___serverContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1636 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m9353(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RealProxy_t1621 * L_3 = RemotingServices_GetRealProxy_m9340(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m9224 (ProxyAttribute_t1627 * __this, Object_t * ___msg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m9225 (ProxyAttribute_t1627 * __this, Context_t1576 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m9226 (RealProxy_t1621 * __this, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m9228(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m9227 (RealProxy_t1621 * __this, Type_t * ___classToProxy, ClientIdentity_t1637 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m9228(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		ClientIdentity_t1637 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t275_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2198;
extern Il2CppCodeGenString* _stringLiteral2199;
extern "C" void RealProxy__ctor_m9228 (RealProxy_t1621 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		_stringLiteral2198 = il2cpp_codegen_string_literal_from_index(2198);
		_stringLiteral2199 = il2cpp_codegen_string_literal_from_index(2199);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t275 * L_4 = (ArgumentException_t275 *)il2cpp_codegen_object_new (ArgumentException_t275_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m976(L_4, _stringLiteral2198, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002e:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m4056(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		NotSupportedException_t199 * L_9 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m5102(L_9, _stringLiteral2199, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0050:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m9229 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Type_t * (*RealProxy_InternalGetProxyType_m9229_ftn) (Object_t *);
	return  ((RealProxy_InternalGetProxyType_m9229_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType) (___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* MarshalByRefObject_t1134_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * RealProxy_GetProxiedType_m9230 (RealProxy_t1621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t1134_0_0_0_var = il2cpp_codegen_type_from_index(896);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t1134_0_0_0_var), /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_002d:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m9229(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C" Identity_t1629 * RealProxy_get_ObjectIdentity_m9231 (RealProxy_t1621 * __this, const MethodInfo* method)
{
	{
		Identity_t1629 * L_0 = (__this->____objectIdentity_3);
		return L_0;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m9232 (RealProxy_t1621 * __this, String_t* ___className, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m9232_ftn) (RealProxy_t1621 *, String_t*);
	return  ((RealProxy_InternalGetTransparentProxy_m9232_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy) (__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern const Il2CppType* MarshalByRefObject_t1134_0_0_0_var;
extern TypeInfo* IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RealProxy_GetTransparentProxy_m9233 (RealProxy_t1621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t1134_0_0_0_var = il2cpp_codegen_type_from_index(896);
		IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t1134_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m421(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}

IL_003f:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_9);
		V_0 = L_10;
	}

IL_004b:
	{
		goto IL_005c;
	}

IL_0050:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_11);
		V_0 = L_12;
	}

IL_005c:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String) */, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_0069:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void RealProxy_SetTargetDomain_m9234 (RealProxy_t1621 * __this, int32_t ___domainId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"
extern "C" void RemotingProxy__ctor_m9235 (RemotingProxy_t1630 * __this, Type_t * ___type, ClientIdentity_t1637 * ___identity, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t1637 * L_1 = ___identity;
		RealProxy__ctor_m9227(__this, L_0, L_1, /*hidden argument*/NULL);
		ClientIdentity_t1637 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m9253(L_2, /*hidden argument*/NULL);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t1637 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m9264(L_4, /*hidden argument*/NULL);
		((RealProxy_t1621 *)__this)->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
extern "C" void RemotingProxy__ctor_m9236 (RemotingProxy_t1630 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t148* ___activationAttributes, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m9226(__this, L_0, /*hidden argument*/NULL);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t148* L_3 = ___activationAttributes;
		ConstructionCall_t1601 * L_4 = ActivationServices_CreateConstructionCall_m8955(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1630_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2200;
extern Il2CppCodeGenString* _stringLiteral2201;
extern "C" void RemotingProxy__cctor_m9237 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		RemotingProxy_t1630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1131);
		_stringLiteral2200 = il2cpp_codegen_string_literal_from_index(2200);
		_stringLiteral2201 = il2cpp_codegen_string_literal_from_index(2201);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, _stringLiteral2200);
		((RemotingProxy_t1630_StaticFields*)RemotingProxy_t1630_il2cpp_TypeInfo_var->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, _stringLiteral2201);
		((RemotingProxy_t1630_StaticFields*)RemotingProxy_t1630_il2cpp_TypeInfo_var->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern TypeInfo* ClientIdentity_t1637_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingProxy_get_TypeName_m9238 (RemotingProxy_t1630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientIdentity_t1637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1133);
		IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t1636 * V_0 = {0};
	{
		Identity_t1629 * L_0 = (((RealProxy_t1621 *)__this)->____objectIdentity_3);
		if (!((ClientIdentity_t1637 *)IsInstClass(L_0, ClientIdentity_t1637_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		Identity_t1629 * L_1 = (((RealProxy_t1621 *)__this)->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t1636 * L_2 = (ObjRef_t1636 *)VirtFuncInvoker1< ObjRef_t1636 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t1636 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_3);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ObjRef_t1636 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0034:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m9230(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ClientActivatedIdentity_t1651_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy_Finalize_m9239 (RemotingProxy_t1630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t1651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1134);
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
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
			Identity_t1629 * L_0 = (((RealProxy_t1621 *)__this)->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0026;
			}
		}

IL_000b:
		{
			Identity_t1629 * L_1 = (((RealProxy_t1621 *)__this)->____objectIdentity_3);
			if (((ClientActivatedIdentity_t1651 *)IsInstClass(L_1, ClientActivatedIdentity_t1651_il2cpp_TypeInfo_var)))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Identity_t1629 * L_2 = (((RealProxy_t1621 *)__this)->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m9356(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		}

IL_0026:
		{
			IL2CPP_LEAVE(0x32, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4002(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0032:
	{
		return;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"
// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t1631_il2cpp_TypeInfo_var;
extern "C" void TrackingServices__cctor_m9240 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		TrackingServices_t1631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		((TrackingServices_t1631_StaticFields*)TrackingServices_t1631_il2cpp_TypeInfo_var->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* ITrackingHandler_t1942_0_0_0_var;
extern TypeInfo* TrackingServices_t1631_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t1941_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t1942_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m9241 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1636 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t1942_0_0_0_var = il2cpp_codegen_type_from_index(1136);
		TrackingServices_t1631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		ITrackingHandlerU5BU5D_t1941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1137);
		ITrackingHandler_t1942_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1136);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t1941* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1631_il2cpp_TypeInfo_var);
		ArrayList_t920 * L_0 = ((TrackingServices_t1631_StaticFields*)TrackingServices_t1631_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1631_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_3 = ((TrackingServices_t1631_StaticFields*)TrackingServices_t1631_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0044);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1631_il2cpp_TypeInfo_var);
			ArrayList_t920 * L_5 = ((TrackingServices_t1631_StaticFields*)TrackingServices_t1631_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t1942_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(47 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t1941*)Castclass(L_7, ITrackingHandlerU5BU5D_t1941_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x4B, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_004b:
	{
		V_2 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		ITrackingHandlerU5BU5D_t1941* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t1636 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))));
		InterfaceActionInvoker2< Object_t *, ObjRef_t1636 * >::Invoke(0 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t1942_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t1941* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0052;
		}
	}

IL_0069:
	{
		return;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ActivatedClientTypeEntry::.ctor(System.String,System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2202;
extern Il2CppCodeGenString* _stringLiteral534;
extern "C" void ActivatedClientTypeEntry__ctor_m9242 (ActivatedClientTypeEntry_t1632 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___appUrl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2202 = il2cpp_codegen_string_literal_from_index(2202);
		_stringLiteral534 = il2cpp_codegen_string_literal_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t1255 * V_0 = {0};
	{
		TypeEntry__ctor_m9381(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m9383(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m9385(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___appUrl;
		__this->___applicationUrl_2 = L_2;
		String_t* L_3 = ___assemblyName;
		Assembly_t1255 * L_4 = Assembly_Load_m8637(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Assembly_t1255 * L_5 = V_0;
		String_t* L_6 = ___typeName;
		NullCheck(L_5);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_5, L_6);
		__this->___obj_type_3 = L_7;
		Type_t * L_8 = (__this->___obj_type_3);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_9 = ___typeName;
		String_t* L_10 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m460(NULL /*static, unused*/, _stringLiteral2202, L_9, _stringLiteral534, L_10, /*hidden argument*/NULL);
		RemotingException_t1648 * L_12 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0051:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m9243 (ActivatedClientTypeEntry_t1632 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t1918* ActivatedClientTypeEntry_get_ContextAttributes_m9244 (ActivatedClientTypeEntry_t1632 * __this, const MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t1918*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m9245 (ActivatedClientTypeEntry_t1632 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m9246 (ActivatedClientTypeEntry_t1632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_TypeName_m9384(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_AssemblyName_m9382(__this, /*hidden argument*/NULL);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m9243(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m440(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntry.h"
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ActivatedServiceTypeEntry::.ctor(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2202;
extern Il2CppCodeGenString* _stringLiteral534;
extern "C" void ActivatedServiceTypeEntry__ctor_m9247 (ActivatedServiceTypeEntry_t1634 * __this, String_t* ___typeName, String_t* ___assemblyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2202 = il2cpp_codegen_string_literal_from_index(2202);
		_stringLiteral534 = il2cpp_codegen_string_literal_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t1255 * V_0 = {0};
	{
		TypeEntry__ctor_m9381(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m9383(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m9385(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___assemblyName;
		Assembly_t1255 * L_3 = Assembly_Load_m8637(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t1255 * L_4 = V_0;
		String_t* L_5 = ___typeName;
		NullCheck(L_4);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		__this->___obj_type_2 = L_6;
		Type_t * L_7 = (__this->___obj_type_2);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = ___typeName;
		String_t* L_9 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m460(NULL /*static, unused*/, _stringLiteral2202, L_8, _stringLiteral534, L_9, /*hidden argument*/NULL);
		RemotingException_t1648 * L_11 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_004a:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedServiceTypeEntry_get_ObjectType_m9248 (ActivatedServiceTypeEntry_t1634 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_2);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedServiceTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedServiceTypeEntry_ToString_m9249 (ActivatedServiceTypeEntry_t1634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_AssemblyName_m9382(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_TypeName_m9384(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m423(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfo.h"
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfoMethodDeclarations.h"
// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EnvoyInfo__ctor_m9250 (EnvoyInfo_t1635 * __this, Object_t * ___sinks, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m9251 (EnvoyInfo_t1635 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Identity__ctor_m9252 (Identity_t1629 * __this, String_t* ___objectUri, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___objectUri;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m9253 (Identity_t1629 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m9254 (Identity_t1629 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m9255 (Identity_t1629 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m9256 (Identity_t1629 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Identity_set_Disposed_m9257 (Identity_t1629 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_6 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ClientDynamicProperties()
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "mscorlib_System_Runtime_Remoting_Contexts_DynamicPropertyCol_0MethodDeclarations.h"
extern TypeInfo* DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var;
extern "C" DynamicPropertyCollection_t1577 * Identity_get_ClientDynamicProperties_m9258 (Identity_t1629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1087);
		s_Il2CppMethodIntialized = true;
	}
	{
		DynamicPropertyCollection_t1577 * L_0 = (__this->____clientDynamicProperties_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		DynamicPropertyCollection_t1577 * L_1 = (DynamicPropertyCollection_t1577 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m9028(L_1, /*hidden argument*/NULL);
		__this->____clientDynamicProperties_3 = L_1;
	}

IL_0016:
	{
		DynamicPropertyCollection_t1577 * L_2 = (__this->____clientDynamicProperties_3);
		return L_2;
	}
}
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ServerDynamicProperties()
extern TypeInfo* DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var;
extern "C" DynamicPropertyCollection_t1577 * Identity_get_ServerDynamicProperties_m9259 (Identity_t1629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1087);
		s_Il2CppMethodIntialized = true;
	}
	{
		DynamicPropertyCollection_t1577 * L_0 = (__this->____serverDynamicProperties_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		DynamicPropertyCollection_t1577 * L_1 = (DynamicPropertyCollection_t1577 *)il2cpp_codegen_object_new (DynamicPropertyCollection_t1577_il2cpp_TypeInfo_var);
		DynamicPropertyCollection__ctor_m9028(L_1, /*hidden argument*/NULL);
		__this->____serverDynamicProperties_4 = L_1;
	}

IL_0016:
	{
		DynamicPropertyCollection_t1577 * L_2 = (__this->____serverDynamicProperties_4);
		return L_2;
	}
}
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
extern TypeInfo* IEnvoyInfo_t1642_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity__ctor_m9260 (ClientIdentity_t1637 * __this, String_t* ___objectUri, ObjRef_t1636 * ___objRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnvoyInfo_t1642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ClientIdentity_t1637 * G_B2_0 = {0};
	ClientIdentity_t1637 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t1637 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m9252(__this, L_0, /*hidden argument*/NULL);
		ObjRef_t1636 * L_1 = ___objRef;
		((Identity_t1629 *)__this)->____objRef_5 = L_1;
		ObjRef_t1636 * L_2 = (((Identity_t1629 *)__this)->____objRef_5);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0036;
		}
	}
	{
		ObjRef_t1636 * L_4 = (((Identity_t1629 *)__this)->____objRef_5);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.IEnvoyInfo::get_EnvoySinks() */, IEnvoyInfo_t1642_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		((Identity_t1629 *)G_B3_1)->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern TypeInfo* MarshalByRefObject_t1134_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t1134 * ClientIdentity_get_ClientProxy_m9261 (ClientIdentity_t1637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(896);
		s_Il2CppMethodIntialized = true;
	}
	{
		WeakReference_t1638 * L_0 = (__this->____proxyReference_7);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((MarshalByRefObject_t1134 *)CastclassClass(L_1, MarshalByRefObject_t1134_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
extern TypeInfo* WeakReference_t1638_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity_set_ClientProxy_m9262 (ClientIdentity_t1637 * __this, MarshalByRefObject_t1134 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t1638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1139);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t1134 * L_0 = ___value;
		WeakReference_t1638 * L_1 = (WeakReference_t1638 *)il2cpp_codegen_object_new (WeakReference_t1638_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11120(L_1, L_0, /*hidden argument*/NULL);
		__this->____proxyReference_7 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" ObjRef_t1636 * ClientIdentity_CreateObjRef_m9263 (ClientIdentity_t1637 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	{
		ObjRef_t1636 * L_0 = (((Identity_t1629 *)__this)->____objRef_5);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m9264 (ClientIdentity_t1637 * __this, const MethodInfo* method)
{
	{
		ObjRef_t1636 * L_0 = (((Identity_t1629 *)__this)->____objRef_5);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		return L_1;
	}
}
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServices.h"
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServicesMethodDeclarations.h"
// System.Void System.Runtime.Remoting.InternalRemotingServices::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern TypeInfo* InternalRemotingServices_t1639_il2cpp_TypeInfo_var;
extern "C" void InternalRemotingServices__cctor_m9265 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		InternalRemotingServices_t1639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1140);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t985 * L_0 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_0, /*hidden argument*/NULL);
		((InternalRemotingServices_t1639_StaticFields*)InternalRemotingServices_t1639_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute System.Runtime.Remoting.InternalRemotingServices::GetCachedSoapAttribute(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttributMethodDeclarations.h"
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttriMethodDeclarations.h"
extern const Il2CppType* SoapAttribute_t1622_0_0_0_var;
extern TypeInfo* InternalRemotingServices_t1639_il2cpp_TypeInfo_var;
extern TypeInfo* SoapAttribute_t1622_il2cpp_TypeInfo_var;
extern TypeInfo* ICustomAttributeProvider_t1920_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1626_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapFieldAttribute_t1623_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBase_t163_il2cpp_TypeInfo_var;
extern TypeInfo* SoapMethodAttribute_t1624_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t869_il2cpp_TypeInfo_var;
extern TypeInfo* SoapParameterAttribute_t1625_il2cpp_TypeInfo_var;
extern "C" SoapAttribute_t1622 * InternalRemotingServices_GetCachedSoapAttribute_m9266 (Object_t * __this /* static, unused */, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapAttribute_t1622_0_0_0_var = il2cpp_codegen_type_from_index(1141);
		InternalRemotingServices_t1639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1140);
		SoapAttribute_t1622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1141);
		ICustomAttributeProvider_t1920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1142);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		SoapTypeAttribute_t1626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1143);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		SoapFieldAttribute_t1623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1144);
		MethodBase_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1020);
		SoapMethodAttribute_t1624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1145);
		ParameterInfo_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1007);
		SoapParameterAttribute_t1625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1146);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	SoapAttribute_t1622 * V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t148* V_3 = {0};
	SoapAttribute_t1622 * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1639_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((InternalRemotingServices_t1639_StaticFields*)InternalRemotingServices_t1639_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1639_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_3 = ((InternalRemotingServices_t1639_StaticFields*)InternalRemotingServices_t1639_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_4 = ___reflectionObject;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
			V_1 = ((SoapAttribute_t1622 *)IsInstClass(L_5, SoapAttribute_t1622_il2cpp_TypeInfo_var));
			SoapAttribute_t1622 * L_6 = V_1;
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_0028:
		{
			SoapAttribute_t1622 * L_7 = V_1;
			V_4 = L_7;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_0030:
		{
			Object_t * L_8 = ___reflectionObject;
			V_2 = ((Object_t *)Castclass(L_8, ICustomAttributeProvider_t1920_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_10 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(SoapAttribute_t1622_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			ObjectU5BU5D_t148* L_11 = (ObjectU5BU5D_t148*)InterfaceFuncInvoker2< ObjectU5BU5D_t148*, Type_t *, bool >::Invoke(0 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, ICustomAttributeProvider_t1920_il2cpp_TypeInfo_var, L_9, L_10, 1);
			V_3 = L_11;
			ObjectU5BU5D_t148* L_12 = V_3;
			NullCheck(L_12);
			if ((((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))) <= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_0052:
		{
			ObjectU5BU5D_t148* L_13 = V_3;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
			int32_t L_14 = 0;
			V_1 = ((SoapAttribute_t1622 *)CastclassClass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14, sizeof(Object_t *))), SoapAttribute_t1622_il2cpp_TypeInfo_var));
			goto IL_00b3;
		}

IL_0060:
		{
			Object_t * L_15 = ___reflectionObject;
			if (!((Type_t *)IsInstClass(L_15, Type_t_il2cpp_TypeInfo_var)))
			{
				goto IL_0076;
			}
		}

IL_006b:
		{
			SoapTypeAttribute_t1626 * L_16 = (SoapTypeAttribute_t1626 *)il2cpp_codegen_object_new (SoapTypeAttribute_t1626_il2cpp_TypeInfo_var);
			SoapTypeAttribute__ctor_m9213(L_16, /*hidden argument*/NULL);
			V_1 = L_16;
			goto IL_00b3;
		}

IL_0076:
		{
			Object_t * L_17 = ___reflectionObject;
			if (!((FieldInfo_t *)IsInstClass(L_17, FieldInfo_t_il2cpp_TypeInfo_var)))
			{
				goto IL_008c;
			}
		}

IL_0081:
		{
			SoapFieldAttribute_t1623 * L_18 = (SoapFieldAttribute_t1623 *)il2cpp_codegen_object_new (SoapFieldAttribute_t1623_il2cpp_TypeInfo_var);
			SoapFieldAttribute__ctor_m9204(L_18, /*hidden argument*/NULL);
			V_1 = L_18;
			goto IL_00b3;
		}

IL_008c:
		{
			Object_t * L_19 = ___reflectionObject;
			if (!((MethodBase_t163 *)IsInstClass(L_19, MethodBase_t163_il2cpp_TypeInfo_var)))
			{
				goto IL_00a2;
			}
		}

IL_0097:
		{
			SoapMethodAttribute_t1624 * L_20 = (SoapMethodAttribute_t1624 *)il2cpp_codegen_object_new (SoapMethodAttribute_t1624_il2cpp_TypeInfo_var);
			SoapMethodAttribute__ctor_m9208(L_20, /*hidden argument*/NULL);
			V_1 = L_20;
			goto IL_00b3;
		}

IL_00a2:
		{
			Object_t * L_21 = ___reflectionObject;
			if (!((ParameterInfo_t869 *)IsInstClass(L_21, ParameterInfo_t869_il2cpp_TypeInfo_var)))
			{
				goto IL_00b3;
			}
		}

IL_00ad:
		{
			SoapParameterAttribute_t1625 * L_22 = (SoapParameterAttribute_t1625 *)il2cpp_codegen_object_new (SoapParameterAttribute_t1625_il2cpp_TypeInfo_var);
			SoapParameterAttribute__ctor_m9212(L_22, /*hidden argument*/NULL);
			V_1 = L_22;
		}

IL_00b3:
		{
			SoapAttribute_t1622 * L_23 = V_1;
			Object_t * L_24 = ___reflectionObject;
			NullCheck(L_23);
			VirtActionInvoker1< Object_t * >::Invoke(6 /* System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object) */, L_23, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1639_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_25 = ((InternalRemotingServices_t1639_StaticFields*)InternalRemotingServices_t1639_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_26 = ___reflectionObject;
			SoapAttribute_t1622 * L_27 = V_1;
			NullCheck(L_25);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_25, L_26, L_27);
			SoapAttribute_t1622 * L_28 = V_1;
			V_4 = L_28;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_00ce:
		{
			; // IL_00ce: leave IL_00da
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		Object_t * L_29 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00da:
	{
		SoapAttribute_t1622 * L_30 = V_4;
		return L_30;
	}
}
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ObjRef::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
extern "C" void ObjRef__ctor_m9267 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		ObjRef_UpdateChannelInfo_m9280(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* ObjRef_t1636_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelInfo_t1640_il2cpp_TypeInfo_var;
extern TypeInfo* IEnvoyInfo_t1642_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t1925_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t151_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t830_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t199_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral922;
extern Il2CppCodeGenString* _stringLiteral2203;
extern Il2CppCodeGenString* _stringLiteral2204;
extern Il2CppCodeGenString* _stringLiteral2205;
extern Il2CppCodeGenString* _stringLiteral2206;
extern Il2CppCodeGenString* _stringLiteral2207;
extern "C" void ObjRef__ctor_m9268 (ObjRef_t1636 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		IChannelInfo_t1640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1147);
		IEnvoyInfo_t1642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		IConvertible_t1925_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(889);
		Int32_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Convert_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		NotSupportedException_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral922 = il2cpp_codegen_string_literal_from_index(922);
		_stringLiteral2203 = il2cpp_codegen_string_literal_from_index(2203);
		_stringLiteral2204 = il2cpp_codegen_string_literal_from_index(2204);
		_stringLiteral2205 = il2cpp_codegen_string_literal_from_index(2205);
		_stringLiteral2206 = il2cpp_codegen_string_literal_from_index(2206);
		_stringLiteral2207 = il2cpp_codegen_string_literal_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfoEnumerator_t1693 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t606 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1693 * L_1 = SerializationInfo_GetEnumerator_m9510(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		goto IL_016d;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t1693 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m9519(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_0167;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1636_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_5 = ((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		Dictionary_2_t606 * L_6 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t606 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral922, 0);
		Dictionary_2_t606 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2203, 1);
		Dictionary_2_t606 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2204, 2);
		Dictionary_2_t606 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2205, 3);
		Dictionary_2_t606 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2206, 4);
		Dictionary_2_t606 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral2207, 5);
		Dictionary_2_t606 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1636_il2cpp_TypeInfo_var);
		((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8 = L_13;
	}

IL_008a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1636_il2cpp_TypeInfo_var);
		Dictionary_2_t606 * L_14 = ((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00c1;
		}
		if (L_17 == 1)
		{
			goto IL_00d7;
		}
		if (L_17 == 2)
		{
			goto IL_00ed;
		}
		if (L_17 == 3)
		{
			goto IL_0103;
		}
		if (L_17 == 4)
		{
			goto IL_0119;
		}
		if (L_17 == 5)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0167;
	}

IL_00c1:
	{
		SerializationInfoEnumerator_t1693 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m9520(L_18, /*hidden argument*/NULL);
		__this->___uri_1 = ((String_t*)CastclassSealed(L_19, String_t_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00d7:
	{
		SerializationInfoEnumerator_t1693 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m9520(L_20, /*hidden argument*/NULL);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00ed:
	{
		SerializationInfoEnumerator_t1693 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m9520(L_22, /*hidden argument*/NULL);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, IChannelInfo_t1640_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0103:
	{
		SerializationInfoEnumerator_t1693 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m9520(L_24, /*hidden argument*/NULL);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, IEnvoyInfo_t1642_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0119:
	{
		SerializationInfoEnumerator_t1693 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m9520(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Object_t * L_28 = V_3;
		if (!((String_t*)IsInstSealed(L_28, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_013d;
		}
	}
	{
		Object_t * L_29 = V_3;
		NullCheck(((Object_t *)Castclass(L_29, IConvertible_t1925_il2cpp_TypeInfo_var)));
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t1925_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IConvertible_t1925_il2cpp_TypeInfo_var)), (Object_t *)NULL);
		V_2 = L_30;
		goto IL_0144;
	}

IL_013d:
	{
		Object_t * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, Int32_t151_il2cpp_TypeInfo_var))));
	}

IL_0144:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_014c;
		}
	}
	{
		V_1 = 0;
	}

IL_014c:
	{
		goto IL_016d;
	}

IL_0151:
	{
		SerializationInfoEnumerator_t1693 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m9520(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t830_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m4065(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		__this->___flags_4 = L_35;
		goto IL_016d;
	}

IL_0167:
	{
		NotSupportedException_t199 * L_36 = (NotSupportedException_t199 *)il2cpp_codegen_object_new (NotSupportedException_t199_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m639(L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_36);
	}

IL_016d:
	{
		SerializationInfoEnumerator_t1693 * L_37 = V_0;
		NullCheck(L_37);
		bool L_38 = SerializationInfoEnumerator_MoveNext_m9521(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_40 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1636_il2cpp_TypeInfo_var);
		int32_t L_41 = ((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0190:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern TypeInfo* ObjRef_t1636_il2cpp_TypeInfo_var;
extern "C" void ObjRef__cctor_m9269 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern TypeInfo* ObjRef_t1636_il2cpp_TypeInfo_var;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m9270 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1636_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m9271 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m9272 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m9273 (ObjRef_t1636 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m9274 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m9275 (ObjRef_t1636 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m9276 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void ObjRef_set_URI_m9277 (ObjRef_t1636 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* IRemotingTypeInfo_t1641_0_0_0_var;
extern const Il2CppType* IEnvoyInfo_t1642_0_0_0_var;
extern const Il2CppType* IChannelInfo_t1640_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral922;
extern Il2CppCodeGenString* _stringLiteral2203;
extern Il2CppCodeGenString* _stringLiteral2205;
extern Il2CppCodeGenString* _stringLiteral2204;
extern Il2CppCodeGenString* _stringLiteral2207;
extern "C" void ObjRef_GetObjectData_m9278 (ObjRef_t1636 * __this, SerializationInfo_t818 * ___info, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1641_0_0_0_var = il2cpp_codegen_type_from_index(1132);
		IEnvoyInfo_t1642_0_0_0_var = il2cpp_codegen_type_from_index(1138);
		IChannelInfo_t1640_0_0_0_var = il2cpp_codegen_type_from_index(1147);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		_stringLiteral922 = il2cpp_codegen_string_literal_from_index(922);
		_stringLiteral2203 = il2cpp_codegen_string_literal_from_index(2203);
		_stringLiteral2205 = il2cpp_codegen_string_literal_from_index(2205);
		_stringLiteral2204 = il2cpp_codegen_string_literal_from_index(2204);
		_stringLiteral2207 = il2cpp_codegen_string_literal_from_index(2207);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t818 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m495(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m9509(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5151(L_2, _stringLiteral922, L_3, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IRemotingTypeInfo_t1641_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m6115(L_4, _stringLiteral2203, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IEnvoyInfo_t1642_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m6115(L_7, _stringLiteral2205, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m502(NULL /*static, unused*/, LoadTypeToken(IChannelInfo_t1640_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m6115(L_10, _stringLiteral2204, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t818 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m6117(L_13, _stringLiteral2207, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* ObjRef_t1636_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRef_GetRealObject_m9279 (ObjRef_t1636 * __this, StreamingContext_t819  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1636_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1636_StaticFields*)ObjRef_t1636_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_Unmarshal_m9338(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0019:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"
extern TypeInfo* ChannelInfo_t1569_il2cpp_TypeInfo_var;
extern "C" void ObjRef_UpdateChannelInfo_m9280 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelInfo_t1569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1148);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChannelInfo_t1569 * L_0 = (ChannelInfo_t1569 *)il2cpp_codegen_object_new (ChannelInfo_t1569_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_m8966(L_0, /*hidden argument*/NULL);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern TypeInfo* IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjRef_get_ServerType_m9281 (ObjRef_t1636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____serverType_5);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		Object_t * L_1 = (__this->___typeInfo_2);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1641_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m6948, L_2, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		__this->____serverType_5 = L_3;
	}

IL_0021:
	{
		Type_t * L_4 = (__this->____serverType_5);
		return L_4;
	}
}
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfiguration.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandler.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParserMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration__cctor_m9282 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 0;
		Hashtable_t985 * L_0 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_0, /*hidden argument*/NULL);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6 = L_0;
		Hashtable_t985 * L_1 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_1, /*hidden argument*/NULL);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7 = L_1;
		Hashtable_t985 * L_2 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_2, /*hidden argument*/NULL);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8 = L_2;
		Hashtable_t985 * L_3 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_3, /*hidden argument*/NULL);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9 = L_3;
		Hashtable_t985 * L_4 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_4, /*hidden argument*/NULL);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10 = L_4;
		Hashtable_t985 * L_5 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_5, /*hidden argument*/NULL);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11 = L_5;
		Hashtable_t985 * L_6 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_6, /*hidden argument*/NULL);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m9283 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_set_ApplicationName_m9284 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ProcessId_m9285 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m10341(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		String_t* L_2 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParserMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* SmallXmlParser_t1360_il2cpp_TypeInfo_var;
extern TypeInfo* StreamReader_t139_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1644_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_LoadDefaultDelayedChannels_m9286 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		SmallXmlParser_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		StreamReader_t139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ConfigHandler_t1644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1149);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t985 * V_0 = {0};
	SmallXmlParser_t1360 * V_1 = {0};
	TextReader_t1363 * V_2 = {0};
	ConfigHandler_t1644 * V_3 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t985 * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			bool L_2 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (L_2)
			{
				goto IL_0020;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			bool L_3 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3;
			if (!L_3)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}

IL_0025:
		{
			SmallXmlParser_t1360 * L_4 = (SmallXmlParser_t1360 *)il2cpp_codegen_object_new (SmallXmlParser_t1360_il2cpp_TypeInfo_var);
			SmallXmlParser__ctor_m7507(L_4, /*hidden argument*/NULL);
			V_1 = L_4;
			String_t* L_5 = Environment_GetMachineConfigPath_m10736(NULL /*static, unused*/, /*hidden argument*/NULL);
			StreamReader_t139 * L_6 = (StreamReader_t139 *)il2cpp_codegen_object_new (StreamReader_t139_il2cpp_TypeInfo_var);
			StreamReader__ctor_m8242(L_6, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			ConfigHandler_t1644 * L_7 = (ConfigHandler_t1644 *)il2cpp_codegen_object_new (ConfigHandler_t1644_il2cpp_TypeInfo_var);
			ConfigHandler__ctor_m9298(L_7, 1, /*hidden argument*/NULL);
			V_3 = L_7;
			SmallXmlParser_t1360 * L_8 = V_1;
			TextReader_t1363 * L_9 = V_2;
			ConfigHandler_t1644 * L_10 = V_3;
			NullCheck(L_8);
			SmallXmlParser_Parse_m7520(L_8, L_9, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x57, FINALLY_004a);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_004a;
		}

FINALLY_004a:
		{ // begin finally (depth: 2)
			{
				TextReader_t1363 * L_11 = V_2;
				if (!L_11)
				{
					goto IL_0056;
				}
			}

IL_0050:
			{
				TextReader_t1363 * L_12 = V_2;
				NullCheck(L_12);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_12);
			}

IL_0056:
			{
				IL2CPP_END_FINALLY(74)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(74)
		{
			IL2CPP_JUMP_TBL(0x57, IL_0057)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 1;
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Hashtable_t985 * L_13 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0069:
	{
		return;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var;
extern "C" ActivatedClientTypeEntry_t1632 * RemotingConfiguration_IsRemotelyActivatedClientType_m9287 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1150);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t985 * V_0 = {0};
	ActivatedClientTypeEntry_t1632 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t985 * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_2 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t1632 *)IsInstClass(L_4, ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x2E, FINALLY_0027);
		}

IL_0022:
		{
			; // IL_0022: leave IL_002e
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		Hashtable_t985 * L_5 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_002e:
	{
		ActivatedClientTypeEntry_t1632 * L_6 = V_1;
		return L_6;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2208;
extern Il2CppCodeGenString* _stringLiteral2209;
extern "C" void RemotingConfiguration_RegisterActivatedClientType_m9288 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1632 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2208 = il2cpp_codegen_string_literal_from_index(2208);
		_stringLiteral2209 = il2cpp_codegen_string_literal_from_index(2209);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t985 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t985 * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_2 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			ActivatedClientTypeEntry_t1632 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = ActivatedClientTypeEntry_get_ObjectType_m9245(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_6 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1632 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = ActivatedClientTypeEntry_get_ObjectType_m9245(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			ActivatedClientTypeEntry_t1632 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = ActivatedClientTypeEntry_get_ObjectType_m9245(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2208, L_12, _stringLiteral2209, /*hidden argument*/NULL);
			RemotingException_t1648 * L_14 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
			RemotingException__ctor_m9331(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_15 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1632 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = ActivatedClientTypeEntry_get_ObjectType_m9245(L_16, /*hidden argument*/NULL);
			ActivatedClientTypeEntry_t1632 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			ActivatedClientTypeEntry_t1632 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m9245(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m8957(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t985 * L_21 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntry.h"
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterActivatedServiceType_m9289 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t1634 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t985 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t985 * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_2 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9;
		ActivatedServiceTypeEntry_t1634 * L_3 = ___entry;
		NullCheck(L_3);
		Type_t * L_4 = ActivatedServiceTypeEntry_get_ObjectType_m9248(L_3, /*hidden argument*/NULL);
		ActivatedServiceTypeEntry_t1634 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_4, L_5);
		IL2CPP_LEAVE(0x29, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Hashtable_t985 * L_6 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2208;
extern Il2CppCodeGenString* _stringLiteral2209;
extern "C" void RemotingConfiguration_RegisterWellKnownClientType_m9290 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t1657 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2208 = il2cpp_codegen_string_literal_from_index(2208);
		_stringLiteral2209 = il2cpp_codegen_string_literal_from_index(2209);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t985 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t985 * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_2 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1657 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = WellKnownClientTypeEntry_get_ObjectType_m9390(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_6 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			WellKnownClientTypeEntry_t1657 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = WellKnownClientTypeEntry_get_ObjectType_m9390(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			WellKnownClientTypeEntry_t1657 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = WellKnownClientTypeEntry_get_ObjectType_m9390(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2208, L_12, _stringLiteral2209, /*hidden argument*/NULL);
			RemotingException_t1648 * L_14 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
			RemotingException__ctor_m9331(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_15 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1657 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = WellKnownClientTypeEntry_get_ObjectType_m9390(L_16, /*hidden argument*/NULL);
			WellKnownClientTypeEntry_t1657 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			WellKnownClientTypeEntry_t1657 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = WellKnownClientTypeEntry_get_ObjectType_m9390(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m8957(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t985 * L_21 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1649_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterWellKnownServiceType_m9291 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t1659 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		RemotingServices_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t985 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t985 * L_1 = V_0;
		Monitor_Enter_m5180(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_2 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8;
		WellKnownServiceTypeEntry_t1659 * L_3 = ___entry;
		NullCheck(L_3);
		String_t* L_4 = WellKnownServiceTypeEntry_get_ObjectUri_m9396(L_3, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1659 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_4, L_5);
		WellKnownServiceTypeEntry_t1659 * L_6 = ___entry;
		NullCheck(L_6);
		Type_t * L_7 = WellKnownServiceTypeEntry_get_ObjectType_m9395(L_6, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1659 * L_8 = ___entry;
		NullCheck(L_8);
		String_t* L_9 = WellKnownServiceTypeEntry_get_ObjectUri_m9396(L_8, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1659 * L_10 = ___entry;
		NullCheck(L_10);
		int32_t L_11 = WellKnownServiceTypeEntry_get_Mode_m9394(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1649_il2cpp_TypeInfo_var);
		RemotingServices_CreateWellKnownServerIdentity_m9351(NULL /*static, unused*/, L_7, L_9, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x41, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Hashtable_t985 * L_12 = V_0;
		Monitor_Exit_m5182(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterChannelTemplate_m9292 (Object_t * __this /* static, unused */, ChannelData_t1645 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		ChannelData_t1645 * L_1 = ___channel;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ChannelData_t1645 * L_3 = ___channel;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterClientProviderTemplate_m9293 (Object_t * __this /* static, unused */, ProviderData_t1646 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
		ProviderData_t1646 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1646 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterServerProviderTemplate_m9294 (Object_t * __this /* static, unused */, ProviderData_t1646 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		Hashtable_t985 * L_0 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
		ProviderData_t1646 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1646 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelData_t1645_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1646_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1570_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral466;
extern Il2CppCodeGenString* _stringLiteral2210;
extern Il2CppCodeGenString* _stringLiteral2150;
extern Il2CppCodeGenString* _stringLiteral2211;
extern "C" void RemotingConfiguration_RegisterChannels_m9295 (Object_t * __this /* static, unused */, ArrayList_t920 * ___channels, bool ___onlyDelayed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ChannelData_t1645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		ProviderData_t1646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1080);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ChannelServices_t1570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		_stringLiteral466 = il2cpp_codegen_string_literal_from_index(466);
		_stringLiteral2210 = il2cpp_codegen_string_literal_from_index(2210);
		_stringLiteral2150 = il2cpp_codegen_string_literal_from_index(2150);
		_stringLiteral2211 = il2cpp_codegen_string_literal_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1645 * V_0 = {0};
	Object_t * V_1 = {0};
	ChannelData_t1645 * V_2 = {0};
	ProviderData_t1646 * V_3 = {0};
	Object_t * V_4 = {0};
	ProviderData_t1646 * V_5 = {0};
	ProviderData_t1646 * V_6 = {0};
	Object_t * V_7 = {0};
	ProviderData_t1646 * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = ___channels;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d4;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ChannelData_t1645 *)CastclassClass(L_3, ChannelData_t1645_il2cpp_TypeInfo_var));
			bool L_4 = ___onlyDelayed;
			if (!L_4)
			{
				goto IL_0038;
			}
		}

IL_001e:
		{
			ChannelData_t1645 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (L_5->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_op_Inequality_m1075(NULL /*static, unused*/, L_6, _stringLiteral466, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0038;
			}
		}

IL_0033:
		{
			goto IL_01d4;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			bool L_8 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (!L_8)
			{
				goto IL_005c;
			}
		}

IL_0042:
		{
			ChannelData_t1645 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = (L_9->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_11 = String_op_Equality_m421(NULL /*static, unused*/, L_10, _stringLiteral466, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005c;
			}
		}

IL_0057:
		{
			goto IL_01d4;
		}

IL_005c:
		{
			ChannelData_t1645 * L_12 = V_0;
			NullCheck(L_12);
			String_t* L_13 = (L_12->___Ref_0);
			if (!L_13)
			{
				goto IL_00a5;
			}
		}

IL_0067:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			Hashtable_t985 * L_14 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
			ChannelData_t1645 * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = (L_15->___Ref_0);
			NullCheck(L_14);
			Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_16);
			V_2 = ((ChannelData_t1645 *)CastclassClass(L_17, ChannelData_t1645_il2cpp_TypeInfo_var));
			ChannelData_t1645 * L_18 = V_2;
			if (L_18)
			{
				goto IL_009e;
			}
		}

IL_0083:
		{
			ChannelData_t1645 * L_19 = V_0;
			NullCheck(L_19);
			String_t* L_20 = (L_19->___Ref_0);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2210, L_20, _stringLiteral2150, /*hidden argument*/NULL);
			RemotingException_t1648 * L_22 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
			RemotingException__ctor_m9331(L_22, L_21, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_22);
		}

IL_009e:
		{
			ChannelData_t1645 * L_23 = V_0;
			ChannelData_t1645 * L_24 = V_2;
			NullCheck(L_23);
			ChannelData_CopyFrom_m9326(L_23, L_24, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			ChannelData_t1645 * L_25 = V_0;
			NullCheck(L_25);
			ArrayList_t920 * L_26 = ChannelData_get_ServerProviders_m9323(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			Object_t * L_27 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_26);
			V_4 = L_27;
		}

IL_00b2:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0110;
			}

IL_00b7:
			{
				Object_t * L_28 = V_4;
				NullCheck(L_28);
				Object_t * L_29 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_28);
				V_3 = ((ProviderData_t1646 *)CastclassClass(L_29, ProviderData_t1646_il2cpp_TypeInfo_var));
				ProviderData_t1646 * L_30 = V_3;
				NullCheck(L_30);
				String_t* L_31 = (L_30->___Ref_0);
				if (!L_31)
				{
					goto IL_0110;
				}
			}

IL_00cf:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
				Hashtable_t985 * L_32 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
				ProviderData_t1646 * L_33 = V_3;
				NullCheck(L_33);
				String_t* L_34 = (L_33->___Ref_0);
				NullCheck(L_32);
				Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, L_34);
				V_5 = ((ProviderData_t1646 *)CastclassClass(L_35, ProviderData_t1646_il2cpp_TypeInfo_var));
				ProviderData_t1646 * L_36 = V_5;
				if (L_36)
				{
					goto IL_0108;
				}
			}

IL_00ed:
			{
				ProviderData_t1646 * L_37 = V_3;
				NullCheck(L_37);
				String_t* L_38 = (L_37->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_39 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2211, L_38, _stringLiteral2150, /*hidden argument*/NULL);
				RemotingException_t1648 * L_40 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
				RemotingException__ctor_m9331(L_40, L_39, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_40);
			}

IL_0108:
			{
				ProviderData_t1646 * L_41 = V_3;
				ProviderData_t1646 * L_42 = V_5;
				NullCheck(L_41);
				ProviderData_CopyFrom_m9328(L_41, L_42, /*hidden argument*/NULL);
			}

IL_0110:
			{
				Object_t * L_43 = V_4;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00b7;
				}
			}

IL_011c:
			{
				IL2CPP_LEAVE(0x137, FINALLY_0121);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_0121;
		}

FINALLY_0121:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_4;
				V_9 = ((Object_t *)IsInst(L_45, IDisposable_t157_il2cpp_TypeInfo_var));
				Object_t * L_46 = V_9;
				if (L_46)
				{
					goto IL_012f;
				}
			}

IL_012e:
			{
				IL2CPP_END_FINALLY(289)
			}

IL_012f:
			{
				Object_t * L_47 = V_9;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_47);
				IL2CPP_END_FINALLY(289)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(289)
		{
			IL2CPP_JUMP_TBL(0x137, IL_0137)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_0137:
		{
			ChannelData_t1645 * L_48 = V_0;
			NullCheck(L_48);
			ArrayList_t920 * L_49 = ChannelData_get_ClientProviders_m9324(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			Object_t * L_50 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_49);
			V_7 = L_50;
		}

IL_0144:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01a7;
			}

IL_0149:
			{
				Object_t * L_51 = V_7;
				NullCheck(L_51);
				Object_t * L_52 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_51);
				V_6 = ((ProviderData_t1646 *)CastclassClass(L_52, ProviderData_t1646_il2cpp_TypeInfo_var));
				ProviderData_t1646 * L_53 = V_6;
				NullCheck(L_53);
				String_t* L_54 = (L_53->___Ref_0);
				if (!L_54)
				{
					goto IL_01a7;
				}
			}

IL_0163:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
				Hashtable_t985 * L_55 = ((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
				ProviderData_t1646 * L_56 = V_6;
				NullCheck(L_56);
				String_t* L_57 = (L_56->___Ref_0);
				NullCheck(L_55);
				Object_t * L_58 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_55, L_57);
				V_8 = ((ProviderData_t1646 *)CastclassClass(L_58, ProviderData_t1646_il2cpp_TypeInfo_var));
				ProviderData_t1646 * L_59 = V_8;
				if (L_59)
				{
					goto IL_019e;
				}
			}

IL_0182:
			{
				ProviderData_t1646 * L_60 = V_6;
				NullCheck(L_60);
				String_t* L_61 = (L_60->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_62 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2211, L_61, _stringLiteral2150, /*hidden argument*/NULL);
				RemotingException_t1648 * L_63 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
				RemotingException__ctor_m9331(L_63, L_62, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_63);
			}

IL_019e:
			{
				ProviderData_t1646 * L_64 = V_6;
				ProviderData_t1646 * L_65 = V_8;
				NullCheck(L_64);
				ProviderData_CopyFrom_m9328(L_64, L_65, /*hidden argument*/NULL);
			}

IL_01a7:
			{
				Object_t * L_66 = V_7;
				NullCheck(L_66);
				bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_66);
				if (L_67)
				{
					goto IL_0149;
				}
			}

IL_01b3:
			{
				IL2CPP_LEAVE(0x1CE, FINALLY_01b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t154 *)e.ex;
			goto FINALLY_01b8;
		}

FINALLY_01b8:
		{ // begin finally (depth: 2)
			{
				Object_t * L_68 = V_7;
				V_10 = ((Object_t *)IsInst(L_68, IDisposable_t157_il2cpp_TypeInfo_var));
				Object_t * L_69 = V_10;
				if (L_69)
				{
					goto IL_01c6;
				}
			}

IL_01c5:
			{
				IL2CPP_END_FINALLY(440)
			}

IL_01c6:
			{
				Object_t * L_70 = V_10;
				NullCheck(L_70);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_70);
				IL2CPP_END_FINALLY(440)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(440)
		{
			IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
		}

IL_01ce:
		{
			ChannelData_t1645 * L_71 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1570_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannelConfig_m8973(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		}

IL_01d4:
		{
			Object_t * L_72 = V_1;
			NullCheck(L_72);
			bool L_73 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_72);
			if (L_73)
			{
				goto IL_000c;
			}
		}

IL_01df:
		{
			IL2CPP_LEAVE(0x1F9, FINALLY_01e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_01e4;
	}

FINALLY_01e4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_74 = V_1;
			V_11 = ((Object_t *)IsInst(L_74, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_75 = V_11;
			if (L_75)
			{
				goto IL_01f1;
			}
		}

IL_01f0:
		{
			IL2CPP_END_FINALLY(484)
		}

IL_01f1:
		{
			Object_t * L_76 = V_11;
			NullCheck(L_76);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_76);
			IL2CPP_END_FINALLY(484)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(484)
	{
		IL2CPP_JUMP_TBL(0x1F9, IL_01f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_01f9:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* TypeEntry_t1633_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedServiceTypeEntry_t1634_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownClientTypeEntry_t1657_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1659_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterTypes_m9296 (Object_t * __this /* static, unused */, ArrayList_t920 * ___types, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		TypeEntry_t1633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1152);
		ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1150);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		ActivatedServiceTypeEntry_t1634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1153);
		WellKnownClientTypeEntry_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1154);
		WellKnownServiceTypeEntry_t1659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1155);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	TypeEntry_t1633 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t920 * L_0 = ___types;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_2);
			V_0 = ((TypeEntry_t1633 *)CastclassClass(L_3, TypeEntry_t1633_il2cpp_TypeInfo_var));
			TypeEntry_t1633 * L_4 = V_0;
			if (!((ActivatedClientTypeEntry_t1632 *)IsInstClass(L_4, ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var)))
			{
				goto IL_0033;
			}
		}

IL_0023:
		{
			TypeEntry_t1633 * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedClientType_m9288(NULL /*static, unused*/, ((ActivatedClientTypeEntry_t1632 *)CastclassClass(L_5, ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0033:
		{
			TypeEntry_t1633 * L_6 = V_0;
			if (!((ActivatedServiceTypeEntry_t1634 *)IsInstClass(L_6, ActivatedServiceTypeEntry_t1634_il2cpp_TypeInfo_var)))
			{
				goto IL_004e;
			}
		}

IL_003e:
		{
			TypeEntry_t1633 * L_7 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedServiceType_m9289(NULL /*static, unused*/, ((ActivatedServiceTypeEntry_t1634 *)CastclassClass(L_7, ActivatedServiceTypeEntry_t1634_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_004e:
		{
			TypeEntry_t1633 * L_8 = V_0;
			if (!((WellKnownClientTypeEntry_t1657 *)IsInstClass(L_8, WellKnownClientTypeEntry_t1657_il2cpp_TypeInfo_var)))
			{
				goto IL_0069;
			}
		}

IL_0059:
		{
			TypeEntry_t1633 * L_9 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownClientType_m9290(NULL /*static, unused*/, ((WellKnownClientTypeEntry_t1657 *)CastclassClass(L_9, WellKnownClientTypeEntry_t1657_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0069:
		{
			TypeEntry_t1633 * L_10 = V_0;
			if (!((WellKnownServiceTypeEntry_t1659 *)IsInstClass(L_10, WellKnownServiceTypeEntry_t1659_il2cpp_TypeInfo_var)))
			{
				goto IL_007f;
			}
		}

IL_0074:
		{
			TypeEntry_t1633 * L_11 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownServiceType_m9291(NULL /*static, unused*/, ((WellKnownServiceTypeEntry_t1659 *)CastclassClass(L_11, WellKnownServiceTypeEntry_t1659_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_007f:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_000c;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_009a;
			}
		}

IL_0099:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009a:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2212;
extern Il2CppCodeGenString* _stringLiteral2213;
extern Il2CppCodeGenString* _stringLiteral2214;
extern Il2CppCodeGenString* _stringLiteral2215;
extern Il2CppCodeGenString* _stringLiteral2216;
extern "C" void RemotingConfiguration_SetCustomErrorsMode_m9297 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		_stringLiteral2212 = il2cpp_codegen_string_literal_from_index(2212);
		_stringLiteral2213 = il2cpp_codegen_string_literal_from_index(2213);
		_stringLiteral2214 = il2cpp_codegen_string_literal_from_index(2214);
		_stringLiteral2215 = il2cpp_codegen_string_literal_from_index(2215);
		_stringLiteral2216 = il2cpp_codegen_string_literal_from_index(2216);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___mode;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RemotingException_t1648 * L_1 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_1, _stringLiteral2212, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___mode;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m1063(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m1075(NULL /*static, unused*/, L_4, _stringLiteral2213, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m1075(NULL /*static, unused*/, L_6, _stringLiteral2214, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m1075(NULL /*static, unused*/, L_8, _stringLiteral2215, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_10 = ___mode;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral2216, L_10, /*hidden argument*/NULL);
		RemotingException_t1648 * L_12 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0059:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1643_StaticFields*)RemotingConfiguration_t1643_il2cpp_TypeInfo_var->static_fields)->____errorMode_5 = L_13;
		return;
	}
}
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterData.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterDataMethodDeclarations.h"
// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler__ctor_m9298 (ConfigHandler_t1644 * __this, bool ___onlyDelayedChannels, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		__this->___typeEntries_0 = L_0;
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		__this->___channelInstances_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___currentXmlPath_6 = L_2;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		bool L_3 = ___onlyDelayedChannels;
		__this->___onlyDelayedChannels_7 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2217;
extern Il2CppCodeGenString* _stringLiteral2218;
extern "C" void ConfigHandler_ValidatePath_m9299 (ConfigHandler_t1644 * __this, String_t* ___element, StringU5BU5D_t35* ___paths, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2217 = il2cpp_codegen_string_literal_from_index(2217);
		_stringLiteral2218 = il2cpp_codegen_string_literal_from_index(2218);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t35* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringU5BU5D_t35* L_0 = ___paths;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t35* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*)));
		String_t* L_4 = V_0;
		bool L_5 = ConfigHandler_CheckPath_m9300(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_2;
		StringU5BU5D_t35* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_9 = ___element;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2217, L_9, _stringLiteral2218, /*hidden argument*/NULL);
		RemotingException_t1648 * L_11 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}
}
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* CultureInfo_t844_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1200;
extern "C" bool ConfigHandler_CheckPath_m9300 (ConfigHandler_t1644 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral1200 = il2cpp_codegen_string_literal_from_index(1200);
		s_Il2CppMethodIntialized = true;
	}
	CompareInfo_t1074 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t844_il2cpp_TypeInfo_var);
		CultureInfo_t844 * L_0 = CultureInfo_get_InvariantCulture_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CompareInfo_t1074 * L_1 = (CompareInfo_t1074 *)VirtFuncInvoker0< CompareInfo_t1074 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_0);
		V_0 = L_1;
		CompareInfo_t1074 * L_2 = V_0;
		String_t* L_3 = ___path;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(11 /* System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions) */, L_2, L_3, _stringLiteral1200, ((int32_t)1073741824));
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___path;
		String_t* L_6 = (__this->___currentXmlPath_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m421(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002e:
	{
		CompareInfo_t1074 * L_8 = V_0;
		String_t* L_9 = (__this->___currentXmlPath_6);
		String_t* L_10 = ___path;
		NullCheck(L_8);
		bool L_11 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(12 /* System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions) */, L_8, L_9, L_10, ((int32_t)1073741824));
		return L_11;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
extern "C" void ConfigHandler_OnStartParsing_m9301 (ConfigHandler_t1644 * __this, SmallXmlParser_t1360 * ___parser, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void ConfigHandler_OnProcessingInstruction_m9302 (ConfigHandler_t1644 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C" void ConfigHandler_OnIgnorableWhitespace_m9303 (ConfigHandler_t1644 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t154_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2219;
extern Il2CppCodeGenString* _stringLiteral1200;
extern Il2CppCodeGenString* _stringLiteral2220;
extern Il2CppCodeGenString* _stringLiteral118;
extern "C" void ConfigHandler_OnStartElement_m9304 (ConfigHandler_t1644 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Exception_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2219 = il2cpp_codegen_string_literal_from_index(2219);
		_stringLiteral1200 = il2cpp_codegen_string_literal_from_index(1200);
		_stringLiteral2220 = il2cpp_codegen_string_literal_from_index(2220);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t154 * V_0 = {0};
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
			String_t* L_0 = (__this->___currentXmlPath_6);
			NullCheck(L_0);
			bool L_1 = String_StartsWith_m948(L_0, _stringLiteral2219, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001d;
			}
		}

IL_0015:
		{
			String_t* L_2 = ___name;
			Object_t * L_3 = ___attrs;
			ConfigHandler_ParseElement_m9305(__this, L_2, L_3, /*hidden argument*/NULL);
		}

IL_001d:
		{
			String_t* L_4 = (__this->___currentXmlPath_6);
			String_t* L_5 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m440(NULL /*static, unused*/, L_4, _stringLiteral1200, L_5, /*hidden argument*/NULL);
			__this->___currentXmlPath_6 = L_6;
			goto IL_005c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t154_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t154 *)__exception_local);
		String_t* L_7 = ___name;
		Exception_t154 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m460(NULL /*static, unused*/, _stringLiteral2220, L_7, _stringLiteral118, L_9, /*hidden argument*/NULL);
		Exception_t154 * L_11 = V_0;
		RemotingException_t1648 * L_12 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9333(L_12, L_10, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
		goto IL_005c;
	} // end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
extern TypeInfo* ConfigHandler_t1644_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2221;
extern Il2CppCodeGenString* _stringLiteral2222;
extern Il2CppCodeGenString* _stringLiteral2223;
extern Il2CppCodeGenString* _stringLiteral2224;
extern Il2CppCodeGenString* _stringLiteral2225;
extern Il2CppCodeGenString* _stringLiteral2226;
extern Il2CppCodeGenString* _stringLiteral2227;
extern Il2CppCodeGenString* _stringLiteral2228;
extern Il2CppCodeGenString* _stringLiteral2229;
extern Il2CppCodeGenString* _stringLiteral2230;
extern Il2CppCodeGenString* _stringLiteral2231;
extern Il2CppCodeGenString* _stringLiteral2232;
extern Il2CppCodeGenString* _stringLiteral2233;
extern Il2CppCodeGenString* _stringLiteral2234;
extern Il2CppCodeGenString* _stringLiteral2235;
extern Il2CppCodeGenString* _stringLiteral2236;
extern Il2CppCodeGenString* _stringLiteral2237;
extern Il2CppCodeGenString* _stringLiteral2238;
extern Il2CppCodeGenString* _stringLiteral2239;
extern Il2CppCodeGenString* _stringLiteral2240;
extern Il2CppCodeGenString* _stringLiteral2241;
extern Il2CppCodeGenString* _stringLiteral2242;
extern Il2CppCodeGenString* _stringLiteral2243;
extern Il2CppCodeGenString* _stringLiteral2244;
extern Il2CppCodeGenString* _stringLiteral2245;
extern Il2CppCodeGenString* _stringLiteral2246;
extern Il2CppCodeGenString* _stringLiteral2247;
extern Il2CppCodeGenString* _stringLiteral1721;
extern Il2CppCodeGenString* _stringLiteral2248;
extern Il2CppCodeGenString* _stringLiteral2249;
extern "C" void ConfigHandler_ParseElement_m9305 (ConfigHandler_t1644 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigHandler_t1644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1149);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		StringU5BU5D_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		IAttrList_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2221 = il2cpp_codegen_string_literal_from_index(2221);
		_stringLiteral2222 = il2cpp_codegen_string_literal_from_index(2222);
		_stringLiteral2223 = il2cpp_codegen_string_literal_from_index(2223);
		_stringLiteral2224 = il2cpp_codegen_string_literal_from_index(2224);
		_stringLiteral2225 = il2cpp_codegen_string_literal_from_index(2225);
		_stringLiteral2226 = il2cpp_codegen_string_literal_from_index(2226);
		_stringLiteral2227 = il2cpp_codegen_string_literal_from_index(2227);
		_stringLiteral2228 = il2cpp_codegen_string_literal_from_index(2228);
		_stringLiteral2229 = il2cpp_codegen_string_literal_from_index(2229);
		_stringLiteral2230 = il2cpp_codegen_string_literal_from_index(2230);
		_stringLiteral2231 = il2cpp_codegen_string_literal_from_index(2231);
		_stringLiteral2232 = il2cpp_codegen_string_literal_from_index(2232);
		_stringLiteral2233 = il2cpp_codegen_string_literal_from_index(2233);
		_stringLiteral2234 = il2cpp_codegen_string_literal_from_index(2234);
		_stringLiteral2235 = il2cpp_codegen_string_literal_from_index(2235);
		_stringLiteral2236 = il2cpp_codegen_string_literal_from_index(2236);
		_stringLiteral2237 = il2cpp_codegen_string_literal_from_index(2237);
		_stringLiteral2238 = il2cpp_codegen_string_literal_from_index(2238);
		_stringLiteral2239 = il2cpp_codegen_string_literal_from_index(2239);
		_stringLiteral2240 = il2cpp_codegen_string_literal_from_index(2240);
		_stringLiteral2241 = il2cpp_codegen_string_literal_from_index(2241);
		_stringLiteral2242 = il2cpp_codegen_string_literal_from_index(2242);
		_stringLiteral2243 = il2cpp_codegen_string_literal_from_index(2243);
		_stringLiteral2244 = il2cpp_codegen_string_literal_from_index(2244);
		_stringLiteral2245 = il2cpp_codegen_string_literal_from_index(2245);
		_stringLiteral2246 = il2cpp_codegen_string_literal_from_index(2246);
		_stringLiteral2247 = il2cpp_codegen_string_literal_from_index(2247);
		_stringLiteral1721 = il2cpp_codegen_string_literal_from_index(1721);
		_stringLiteral2248 = il2cpp_codegen_string_literal_from_index(2248);
		_stringLiteral2249 = il2cpp_codegen_string_literal_from_index(2249);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1646 * V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t606 * V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_t792 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___name;
		Object_t * L_2 = ___attrs;
		ConfigHandler_ReadCustomProviderData_m9307(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		String_t* L_3 = ___name;
		V_1 = L_3;
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0512;
		}
	}
	{
		Dictionary_2_t606 * L_5 = ((ConfigHandler_t1644_StaticFields*)ConfigHandler_t1644_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		if (L_5)
		{
			goto IL_0121;
		}
	}
	{
		Dictionary_2_t606 * L_6 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_6, ((int32_t)19), /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t606 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2221, 0);
		Dictionary_2_t606 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2222, 1);
		Dictionary_2_t606 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2223, 2);
		Dictionary_2_t606 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2224, 3);
		Dictionary_2_t606 * L_11 = V_2;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2225, 4);
		Dictionary_2_t606 * L_12 = V_2;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral2226, 5);
		Dictionary_2_t606 * L_13 = V_2;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_13, _stringLiteral2227, 6);
		Dictionary_2_t606 * L_14 = V_2;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_14, _stringLiteral2228, 6);
		Dictionary_2_t606 * L_15 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_15, _stringLiteral2229, 7);
		Dictionary_2_t606 * L_16 = V_2;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_16, _stringLiteral2230, 8);
		Dictionary_2_t606 * L_17 = V_2;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_17, _stringLiteral2231, ((int32_t)9));
		Dictionary_2_t606 * L_18 = V_2;
		NullCheck(L_18);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_18, _stringLiteral2232, ((int32_t)10));
		Dictionary_2_t606 * L_19 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_19, _stringLiteral2233, ((int32_t)11));
		Dictionary_2_t606 * L_20 = V_2;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_20, _stringLiteral2234, ((int32_t)12));
		Dictionary_2_t606 * L_21 = V_2;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_21, _stringLiteral2235, ((int32_t)13));
		Dictionary_2_t606 * L_22 = V_2;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_22, _stringLiteral2236, ((int32_t)14));
		Dictionary_2_t606 * L_23 = V_2;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_23, _stringLiteral2237, ((int32_t)15));
		Dictionary_2_t606 * L_24 = V_2;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_24, _stringLiteral2238, ((int32_t)16));
		Dictionary_2_t606 * L_25 = V_2;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_25, _stringLiteral2239, ((int32_t)17));
		Dictionary_2_t606 * L_26 = V_2;
		((ConfigHandler_t1644_StaticFields*)ConfigHandler_t1644_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8 = L_26;
	}

IL_0121:
	{
		Dictionary_2_t606 * L_27 = ((ConfigHandler_t1644_StaticFields*)ConfigHandler_t1644_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		String_t* L_28 = V_1;
		NullCheck(L_27);
		bool L_29 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_27, L_28, (&V_3));
		if (!L_29)
		{
			goto IL_0512;
		}
	}
	{
		int32_t L_30 = V_3;
		if (L_30 == 0)
		{
			goto IL_0186;
		}
		if (L_30 == 1)
		{
			goto IL_01bc;
		}
		if (L_30 == 2)
		{
			goto IL_01dd;
		}
		if (L_30 == 3)
		{
			goto IL_01ff;
		}
		if (L_30 == 4)
		{
			goto IL_0244;
		}
		if (L_30 == 5)
		{
			goto IL_0266;
		}
		if (L_30 == 6)
		{
			goto IL_0288;
		}
		if (L_30 == 7)
		{
			goto IL_0366;
		}
		if (L_30 == 8)
		{
			goto IL_0391;
		}
		if (L_30 == 9)
		{
			goto IL_03ab;
		}
		if (L_30 == 10)
		{
			goto IL_03f0;
		}
		if (L_30 == 11)
		{
			goto IL_0435;
		}
		if (L_30 == 12)
		{
			goto IL_044f;
		}
		if (L_30 == 13)
		{
			goto IL_0471;
		}
		if (L_30 == 14)
		{
			goto IL_0493;
		}
		if (L_30 == 15)
		{
			goto IL_04b4;
		}
		if (L_30 == 16)
		{
			goto IL_04ce;
		}
		if (L_30 == 17)
		{
			goto IL_04e8;
		}
	}
	{
		goto IL_0512;
	}

IL_0186:
	{
		String_t* L_31 = ___name;
		StringU5BU5D_t35* L_32 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		ArrayElementTypeCheck (L_32, _stringLiteral2240);
		*((String_t**)(String_t**)SZArrayLdElema(L_32, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2240;
		ConfigHandler_ValidatePath_m9299(__this, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t35* L_34 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_01b7;
		}
	}
	{
		Object_t * L_35 = ___attrs;
		NullCheck(L_35);
		StringU5BU5D_t35* L_36 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		int32_t L_37 = 0;
		__this->___appName_5 = (*(String_t**)(String_t**)SZArrayLdElema(L_36, L_37, sizeof(String_t*)));
	}

IL_01b7:
	{
		goto IL_0528;
	}

IL_01bc:
	{
		String_t* L_38 = ___name;
		StringU5BU5D_t35* L_39 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, _stringLiteral2221);
		*((String_t**)(String_t**)SZArrayLdElema(L_39, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2221;
		ConfigHandler_ValidatePath_m9299(__this, L_38, L_39, /*hidden argument*/NULL);
		Object_t * L_40 = ___attrs;
		ConfigHandler_ReadLifetine_m9308(__this, L_40, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01dd:
	{
		String_t* L_41 = ___name;
		StringU5BU5D_t35* L_42 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 2));
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		ArrayElementTypeCheck (L_42, _stringLiteral2240);
		*((String_t**)(String_t**)SZArrayLdElema(L_42, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2240;
		StringU5BU5D_t35* L_43 = L_42;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		ArrayElementTypeCheck (L_43, _stringLiteral2221);
		*((String_t**)(String_t**)SZArrayLdElema(L_43, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2221;
		ConfigHandler_ValidatePath_m9299(__this, L_41, L_43, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01ff:
	{
		String_t* L_44 = ___name;
		StringU5BU5D_t35* L_45 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 0);
		ArrayElementTypeCheck (L_45, _stringLiteral2223);
		*((String_t**)(String_t**)SZArrayLdElema(L_45, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2223;
		ConfigHandler_ValidatePath_m9299(__this, L_44, L_45, /*hidden argument*/NULL);
		String_t* L_46 = (__this->___currentXmlPath_6);
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m4052(L_46, _stringLiteral2221, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0237;
		}
	}
	{
		Object_t * L_48 = ___attrs;
		ConfigHandler_ReadChannel_m9310(__this, L_48, 0, /*hidden argument*/NULL);
		goto IL_023f;
	}

IL_0237:
	{
		Object_t * L_49 = ___attrs;
		ConfigHandler_ReadChannel_m9310(__this, L_49, 1, /*hidden argument*/NULL);
	}

IL_023f:
	{
		goto IL_0528;
	}

IL_0244:
	{
		String_t* L_50 = ___name;
		StringU5BU5D_t35* L_51 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 2));
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 0);
		ArrayElementTypeCheck (L_51, _stringLiteral2238);
		*((String_t**)(String_t**)SZArrayLdElema(L_51, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2238;
		StringU5BU5D_t35* L_52 = L_51;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, _stringLiteral2224);
		*((String_t**)(String_t**)SZArrayLdElema(L_52, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2224;
		ConfigHandler_ValidatePath_m9299(__this, L_50, L_52, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0266:
	{
		String_t* L_53 = ___name;
		StringU5BU5D_t35* L_54 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 2));
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 0);
		ArrayElementTypeCheck (L_54, _stringLiteral2238);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2238;
		StringU5BU5D_t35* L_55 = L_54;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 1);
		ArrayElementTypeCheck (L_55, _stringLiteral2224);
		*((String_t**)(String_t**)SZArrayLdElema(L_55, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2224;
		ConfigHandler_ValidatePath_m9299(__this, L_53, L_55, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0288:
	{
		bool L_56 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2241, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_57 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2242, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_02c9;
		}
	}

IL_02a8:
	{
		String_t* L_58 = ___name;
		Object_t * L_59 = ___attrs;
		ProviderData_t1646 * L_60 = ConfigHandler_ReadProvider_m9311(__this, L_58, L_59, 0, /*hidden argument*/NULL);
		V_0 = L_60;
		ChannelData_t1645 * L_61 = (__this->___currentChannel_2);
		NullCheck(L_61);
		ArrayList_t920 * L_62 = ChannelData_get_ServerProviders_m9323(L_61, /*hidden argument*/NULL);
		ProviderData_t1646 * L_63 = V_0;
		NullCheck(L_62);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, L_63);
		goto IL_0361;
	}

IL_02c9:
	{
		bool L_64 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2243, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_02e9;
		}
	}
	{
		bool L_65 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2244, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_030a;
		}
	}

IL_02e9:
	{
		String_t* L_66 = ___name;
		Object_t * L_67 = ___attrs;
		ProviderData_t1646 * L_68 = ConfigHandler_ReadProvider_m9311(__this, L_66, L_67, 0, /*hidden argument*/NULL);
		V_0 = L_68;
		ChannelData_t1645 * L_69 = (__this->___currentChannel_2);
		NullCheck(L_69);
		ArrayList_t920 * L_70 = ChannelData_get_ClientProviders_m9324(L_69, /*hidden argument*/NULL);
		ProviderData_t1646 * L_71 = V_0;
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_71);
		goto IL_0361;
	}

IL_030a:
	{
		bool L_72 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2245, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_032f;
		}
	}
	{
		String_t* L_73 = ___name;
		Object_t * L_74 = ___attrs;
		ProviderData_t1646 * L_75 = ConfigHandler_ReadProvider_m9311(__this, L_73, L_74, 1, /*hidden argument*/NULL);
		V_0 = L_75;
		ProviderData_t1646 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterServerProviderTemplate_m9294(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_032f:
	{
		bool L_77 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2246, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0354;
		}
	}
	{
		String_t* L_78 = ___name;
		Object_t * L_79 = ___attrs;
		ProviderData_t1646 * L_80 = ConfigHandler_ReadProvider_m9311(__this, L_78, L_79, 1, /*hidden argument*/NULL);
		V_0 = L_80;
		ProviderData_t1646 * L_81 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterClientProviderTemplate_m9293(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_0354:
	{
		String_t* L_82 = ___name;
		ConfigHandler_ValidatePath_m9299(__this, L_82, ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0361:
	{
		goto IL_0528;
	}

IL_0366:
	{
		String_t* L_83 = ___name;
		StringU5BU5D_t35* L_84 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 0);
		ArrayElementTypeCheck (L_84, _stringLiteral2221);
		*((String_t**)(String_t**)SZArrayLdElema(L_84, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2221;
		ConfigHandler_ValidatePath_m9299(__this, L_83, L_84, /*hidden argument*/NULL);
		Object_t * L_85 = ___attrs;
		NullCheck(L_85);
		String_t* L_86 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_85, _stringLiteral2247);
		__this->___currentClientUrl_4 = L_86;
		goto IL_0528;
	}

IL_0391:
	{
		String_t* L_87 = ___name;
		StringU5BU5D_t35* L_88 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, 0);
		ArrayElementTypeCheck (L_88, _stringLiteral2221);
		*((String_t**)(String_t**)SZArrayLdElema(L_88, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2221;
		ConfigHandler_ValidatePath_m9299(__this, L_87, L_88, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_03ab:
	{
		String_t* L_89 = ___name;
		StringU5BU5D_t35* L_90 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 2));
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, 0);
		ArrayElementTypeCheck (L_90, _stringLiteral2229);
		*((String_t**)(String_t**)SZArrayLdElema(L_90, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2229;
		StringU5BU5D_t35* L_91 = L_90;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 1);
		ArrayElementTypeCheck (L_91, _stringLiteral2230);
		*((String_t**)(String_t**)SZArrayLdElema(L_91, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2230;
		ConfigHandler_ValidatePath_m9299(__this, L_89, L_91, /*hidden argument*/NULL);
		bool L_92 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2229, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_03e4;
		}
	}
	{
		Object_t * L_93 = ___attrs;
		ConfigHandler_ReadClientWellKnown_m9314(__this, L_93, /*hidden argument*/NULL);
		goto IL_03eb;
	}

IL_03e4:
	{
		Object_t * L_94 = ___attrs;
		ConfigHandler_ReadServiceWellKnown_m9315(__this, L_94, /*hidden argument*/NULL);
	}

IL_03eb:
	{
		goto IL_0528;
	}

IL_03f0:
	{
		String_t* L_95 = ___name;
		StringU5BU5D_t35* L_96 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 2));
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 0);
		ArrayElementTypeCheck (L_96, _stringLiteral2229);
		*((String_t**)(String_t**)SZArrayLdElema(L_96, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2229;
		StringU5BU5D_t35* L_97 = L_96;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 1);
		ArrayElementTypeCheck (L_97, _stringLiteral2230);
		*((String_t**)(String_t**)SZArrayLdElema(L_97, 1, sizeof(String_t*))) = (String_t*)_stringLiteral2230;
		ConfigHandler_ValidatePath_m9299(__this, L_95, L_97, /*hidden argument*/NULL);
		bool L_98 = ConfigHandler_CheckPath_m9300(__this, _stringLiteral2229, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_0429;
		}
	}
	{
		Object_t * L_99 = ___attrs;
		ConfigHandler_ReadClientActivated_m9312(__this, L_99, /*hidden argument*/NULL);
		goto IL_0430;
	}

IL_0429:
	{
		Object_t * L_100 = ___attrs;
		ConfigHandler_ReadServiceActivated_m9313(__this, L_100, /*hidden argument*/NULL);
	}

IL_0430:
	{
		goto IL_0528;
	}

IL_0435:
	{
		String_t* L_101 = ___name;
		StringU5BU5D_t35* L_102 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 0);
		ArrayElementTypeCheck (L_102, _stringLiteral2221);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2221;
		ConfigHandler_ValidatePath_m9299(__this, L_101, L_102, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_044f:
	{
		String_t* L_103 = ___name;
		StringU5BU5D_t35* L_104 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, 0);
		ArrayElementTypeCheck (L_104, _stringLiteral2233);
		*((String_t**)(String_t**)SZArrayLdElema(L_104, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2233;
		ConfigHandler_ValidatePath_m9299(__this, L_103, L_104, /*hidden argument*/NULL);
		Object_t * L_105 = ___attrs;
		ConfigHandler_ReadInteropXml_m9316(__this, L_105, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0471:
	{
		String_t* L_106 = ___name;
		StringU5BU5D_t35* L_107 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 0);
		ArrayElementTypeCheck (L_107, _stringLiteral2233);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2233;
		ConfigHandler_ValidatePath_m9299(__this, L_106, L_107, /*hidden argument*/NULL);
		Object_t * L_108 = ___attrs;
		ConfigHandler_ReadInteropXml_m9316(__this, L_108, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0493:
	{
		String_t* L_109 = ___name;
		StringU5BU5D_t35* L_110 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, 0);
		ArrayElementTypeCheck (L_110, _stringLiteral2233);
		*((String_t**)(String_t**)SZArrayLdElema(L_110, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2233;
		ConfigHandler_ValidatePath_m9299(__this, L_109, L_110, /*hidden argument*/NULL);
		Object_t * L_111 = ___attrs;
		ConfigHandler_ReadPreload_m9317(__this, L_111, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04b4:
	{
		String_t* L_112 = ___name;
		StringU5BU5D_t35* L_113 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, 0);
		ArrayElementTypeCheck (L_113, _stringLiteral2240);
		*((String_t**)(String_t**)SZArrayLdElema(L_113, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2240;
		ConfigHandler_ValidatePath_m9299(__this, L_112, L_113, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04ce:
	{
		String_t* L_114 = ___name;
		StringU5BU5D_t35* L_115 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, 0);
		ArrayElementTypeCheck (L_115, _stringLiteral2240);
		*((String_t**)(String_t**)SZArrayLdElema(L_115, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2240;
		ConfigHandler_ValidatePath_m9299(__this, L_114, L_115, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04e8:
	{
		String_t* L_116 = ___name;
		StringU5BU5D_t35* L_117 = ((StringU5BU5D_t35*)SZArrayNew(StringU5BU5D_t35_il2cpp_TypeInfo_var, 1));
		NullCheck(L_117);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_117, 0);
		ArrayElementTypeCheck (L_117, _stringLiteral2240);
		*((String_t**)(String_t**)SZArrayLdElema(L_117, 0, sizeof(String_t*))) = (String_t*)_stringLiteral2240;
		ConfigHandler_ValidatePath_m9299(__this, L_116, L_117, /*hidden argument*/NULL);
		Object_t * L_118 = ___attrs;
		NullCheck(L_118);
		String_t* L_119 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_118, _stringLiteral1721);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		RemotingConfiguration_SetCustomErrorsMode_m9297(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0512:
	{
		String_t* L_120 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_121 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2248, L_120, _stringLiteral2249, /*hidden argument*/NULL);
		RemotingException_t1648 * L_122 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_122, L_121, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_122);
	}

IL_0528:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C" void ConfigHandler_OnEndElement_m9306 (ConfigHandler_t1644 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Stack_t792 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Stack_t792 * L_1 = (__this->___currentProviderData_3);
		NullCheck(L_1);
		VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_1);
		Stack_t792 * L_2 = (__this->___currentProviderData_3);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		__this->___currentProviderData_3 = (Stack_t792 *)NULL;
	}

IL_002e:
	{
		String_t* L_4 = (__this->___currentXmlPath_6);
		String_t* L_5 = (__this->___currentXmlPath_6);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m478(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___name;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m478(L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_9 = String_Substring_m2501(L_4, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)L_8))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___currentXmlPath_6 = L_9;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderDataMethodDeclarations.h"
extern TypeInfo* SinkProviderData_t1575_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1182_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1207_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_ReadCustomProviderData_m9307 (ConfigHandler_t1644 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SinkProviderData_t1575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1156);
		IAttrList_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		IDictionary_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(718);
		IList_t1207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(819);
		s_Il2CppMethodIntialized = true;
	}
	SinkProviderData_t1575 * V_0 = {0};
	SinkProviderData_t1575 * V_1 = {0};
	int32_t V_2 = 0;
	{
		Stack_t792 * L_0 = (__this->___currentProviderData_3);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Object System.Collections.Stack::Peek() */, L_0);
		V_0 = ((SinkProviderData_t1575 *)CastclassClass(L_1, SinkProviderData_t1575_il2cpp_TypeInfo_var));
		String_t* L_2 = ___name;
		SinkProviderData_t1575 * L_3 = (SinkProviderData_t1575 *)il2cpp_codegen_object_new (SinkProviderData_t1575_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m8991(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_003d;
	}

IL_001f:
	{
		SinkProviderData_t1575 * L_4 = V_1;
		NullCheck(L_4);
		Object_t * L_5 = SinkProviderData_get_Properties_m8993(L_4, /*hidden argument*/NULL);
		Object_t * L_6 = ___attrs;
		NullCheck(L_6);
		StringU5BU5D_t35* L_7 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Object_t * L_10 = ___attrs;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_10, L_11);
		NullCheck(L_5);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1182_il2cpp_TypeInfo_var, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9, sizeof(String_t*))), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_2;
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t35* L_16 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		SinkProviderData_t1575 * L_17 = V_0;
		NullCheck(L_17);
		Object_t * L_18 = SinkProviderData_get_Children_m8992(L_17, /*hidden argument*/NULL);
		SinkProviderData_t1575 * L_19 = V_1;
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1207_il2cpp_TypeInfo_var, L_18, L_19);
		Stack_t792 * L_20 = (__this->___currentProviderData_3);
		SinkProviderData_t1575 * L_21 = V_1;
		NullCheck(L_20);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_20, L_21);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
extern TypeInfo* IAttrList_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1644_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t606_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1592_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5130_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2250;
extern Il2CppCodeGenString* _stringLiteral2251;
extern Il2CppCodeGenString* _stringLiteral2252;
extern Il2CppCodeGenString* _stringLiteral2253;
extern Il2CppCodeGenString* _stringLiteral2254;
extern "C" void ConfigHandler_ReadLifetine_m9308 (ConfigHandler_t1644 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		ConfigHandler_t1644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1149);
		Dictionary_2_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(614);
		LifetimeServices_t1592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		Dictionary_2__ctor_m5130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		_stringLiteral2250 = il2cpp_codegen_string_literal_from_index(2250);
		_stringLiteral2251 = il2cpp_codegen_string_literal_from_index(2251);
		_stringLiteral2252 = il2cpp_codegen_string_literal_from_index(2252);
		_stringLiteral2253 = il2cpp_codegen_string_literal_from_index(2253);
		_stringLiteral2254 = il2cpp_codegen_string_literal_from_index(2254);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	Dictionary_2_t606 * V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0102;
	}

IL_0007:
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		StringU5BU5D_t35* L_1 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*)));
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_00e6;
		}
	}
	{
		Dictionary_2_t606 * L_5 = ((ConfigHandler_t1644_StaticFields*)ConfigHandler_t1644_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t606 * L_6 = (Dictionary_2_t606 *)il2cpp_codegen_object_new (Dictionary_2_t606_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5130(L_6, 4, /*hidden argument*/Dictionary_2__ctor_m5130_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t606 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2250, 0);
		Dictionary_2_t606 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2251, 1);
		Dictionary_2_t606 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2252, 2);
		Dictionary_2_t606 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2253, 3);
		Dictionary_2_t606 * L_11 = V_2;
		((ConfigHandler_t1644_StaticFields*)ConfigHandler_t1644_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9 = L_11;
	}

IL_005d:
	{
		Dictionary_2_t606 * L_12 = ((ConfigHandler_t1644_StaticFields*)ConfigHandler_t1644_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_3));
		if (!L_14)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_15 = V_3;
		if (L_15 == 0)
		{
			goto IL_008a;
		}
		if (L_15 == 1)
		{
			goto IL_00a1;
		}
		if (L_15 == 2)
		{
			goto IL_00b8;
		}
		if (L_15 == 3)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00e6;
	}

IL_008a:
	{
		Object_t * L_16 = ___attrs;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_16, L_17);
		TimeSpan_t1156  L_19 = ConfigHandler_ParseTime_m9309(__this, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseTime_m9062(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00a1:
	{
		Object_t * L_20 = ___attrs;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_20, L_21);
		TimeSpan_t1156  L_23 = ConfigHandler_ParseTime_m9309(__this, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		LifetimeServices_set_SponsorshipTimeout_m9064(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00b8:
	{
		Object_t * L_24 = ___attrs;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		String_t* L_26 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_24, L_25);
		TimeSpan_t1156  L_27 = ConfigHandler_ParseTime_m9309(__this, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		LifetimeServices_set_RenewOnCallTime_m9063(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00cf:
	{
		Object_t * L_28 = ___attrs;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_28, L_29);
		TimeSpan_t1156  L_31 = ConfigHandler_ParseTime_m9309(__this, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1592_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseManagerPollTime_m9061(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00e6:
	{
		Object_t * L_32 = ___attrs;
		NullCheck(L_32);
		StringU5BU5D_t35* L_33 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = V_0;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral2254, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_35, sizeof(String_t*))), /*hidden argument*/NULL);
		RemotingException_t1648 * L_37 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_37);
	}

IL_00fe:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_39 = V_0;
		Object_t * L_40 = ___attrs;
		NullCheck(L_40);
		StringU5BU5D_t35* L_41 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1156_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t1902____U24U24fieldU2D31_21_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral2255;
extern Il2CppCodeGenString* _stringLiteral2256;
extern Il2CppCodeGenString* _stringLiteral2257;
extern Il2CppCodeGenString* _stringLiteral484;
extern Il2CppCodeGenString* _stringLiteral2258;
extern Il2CppCodeGenString* _stringLiteral2259;
extern Il2CppCodeGenString* _stringLiteral2260;
extern Il2CppCodeGenString* _stringLiteral2261;
extern "C" TimeSpan_t1156  ConfigHandler_ParseTime_m9309 (ConfigHandler_t1644 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		TimeSpan_t1156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(778);
		U3CPrivateImplementationDetailsU3E_t1902____U24U24fieldU2D31_21_FieldInfo_var = il2cpp_codegen_field_info_from_index(856, 21);
		_stringLiteral2255 = il2cpp_codegen_string_literal_from_index(2255);
		_stringLiteral2256 = il2cpp_codegen_string_literal_from_index(2256);
		_stringLiteral2257 = il2cpp_codegen_string_literal_from_index(2257);
		_stringLiteral484 = il2cpp_codegen_string_literal_from_index(484);
		_stringLiteral2258 = il2cpp_codegen_string_literal_from_index(2258);
		_stringLiteral2259 = il2cpp_codegen_string_literal_from_index(2259);
		_stringLiteral2260 = il2cpp_codegen_string_literal_from_index(2260);
		_stringLiteral2261 = il2cpp_codegen_string_literal_from_index(2261);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	double V_2 = 0.0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m421(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___s;
		if (L_3)
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		RemotingException_t1648 * L_4 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_4, _stringLiteral2255, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0021:
	{
		String_t* L_5 = ___s;
		CharU5BU5D_t165* L_6 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m1001(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t1902____U24U24fieldU2D31_21_FieldInfo_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_7 = String_IndexOfAny_m6177(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		V_1 = _stringLiteral2256;
		goto IL_005d;
	}

IL_004b:
	{
		String_t* L_9 = ___s;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m2525(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = ___s;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m2501(L_12, 0, L_13, /*hidden argument*/NULL);
		___s = L_14;
	}

IL_005d:
	try
	{ // begin try (depth: 1)
		String_t* L_15 = ___s;
		double L_16 = Double_Parse_m6594(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0069;
		throw e;
	}

CATCH_0069:
	{ // begin catch(System.Object)
		String_t* L_17 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral2257, L_17, /*hidden argument*/NULL);
		RemotingException_t1648 * L_19 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_19, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_19);
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m421(NULL /*static, unused*/, L_20, _stringLiteral484, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		double L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1156_il2cpp_TypeInfo_var);
		TimeSpan_t1156  L_23 = TimeSpan_FromDays_m11049(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_0097:
	{
		String_t* L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m421(NULL /*static, unused*/, L_24, _stringLiteral2258, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		double L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1156_il2cpp_TypeInfo_var);
		TimeSpan_t1156  L_27 = TimeSpan_FromHours_m11050(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ae:
	{
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m421(NULL /*static, unused*/, L_28, _stringLiteral2259, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		double L_30 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1156_il2cpp_TypeInfo_var);
		TimeSpan_t1156  L_31 = TimeSpan_FromMinutes_m11051(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00c5:
	{
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_33 = String_op_Equality_m421(NULL /*static, unused*/, L_32, _stringLiteral2256, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		double L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1156_il2cpp_TypeInfo_var);
		TimeSpan_t1156  L_35 = TimeSpan_FromSeconds_m11052(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00dc:
	{
		String_t* L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m421(NULL /*static, unused*/, L_36, _stringLiteral2260, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00f3;
		}
	}
	{
		double L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1156_il2cpp_TypeInfo_var);
		TimeSpan_t1156  L_39 = TimeSpan_FromMilliseconds_m11053(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00f3:
	{
		String_t* L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m423(NULL /*static, unused*/, _stringLiteral2261, L_40, /*hidden argument*/NULL);
		RemotingException_t1648 * L_42 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_42, L_41, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_42);
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* ChannelData_t1645_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2262;
extern Il2CppCodeGenString* _stringLiteral2263;
extern Il2CppCodeGenString* _stringLiteral2264;
extern Il2CppCodeGenString* _stringLiteral1254;
extern Il2CppCodeGenString* _stringLiteral2265;
extern "C" void ConfigHandler_ReadChannel_m9310 (ConfigHandler_t1644 * __this, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelData_t1645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		IAttrList_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		_stringLiteral2262 = il2cpp_codegen_string_literal_from_index(2262);
		_stringLiteral2263 = il2cpp_codegen_string_literal_from_index(2263);
		_stringLiteral2264 = il2cpp_codegen_string_literal_from_index(2264);
		_stringLiteral1254 = il2cpp_codegen_string_literal_from_index(1254);
		_stringLiteral2265 = il2cpp_codegen_string_literal_from_index(2265);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1645 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	{
		ChannelData_t1645 * L_0 = (ChannelData_t1645 *)il2cpp_codegen_object_new (ChannelData_t1645_il2cpp_TypeInfo_var);
		ChannelData__ctor_m9322(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ac;
	}

IL_000d:
	{
		Object_t * L_1 = ___attrs;
		NullCheck(L_1);
		StringU5BU5D_t35* L_2 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4, sizeof(String_t*)));
		Object_t * L_5 = ___attrs;
		NullCheck(L_5);
		StringU5BU5D_t35* L_6 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8, sizeof(String_t*)));
		String_t* L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m421(NULL /*static, unused*/, L_9, _stringLiteral2262, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		bool L_11 = ___isTemplate;
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		ChannelData_t1645 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		L_12->___Ref_0 = L_13;
		goto IL_00a8;
	}

IL_0041:
	{
		String_t* L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m421(NULL /*static, unused*/, L_14, _stringLiteral2263, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		ChannelData_t1645 * L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		L_16->___DelayLoadAsClientChannel_3 = L_17;
		goto IL_00a8;
	}

IL_005d:
	{
		String_t* L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m421(NULL /*static, unused*/, L_18, _stringLiteral2264, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007f;
		}
	}
	{
		bool L_20 = ___isTemplate;
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		ChannelData_t1645 * L_21 = V_0;
		String_t* L_22 = V_3;
		NullCheck(L_21);
		L_21->___Id_2 = L_22;
		goto IL_00a8;
	}

IL_007f:
	{
		String_t* L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m421(NULL /*static, unused*/, L_23, _stringLiteral1254, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009b;
		}
	}
	{
		ChannelData_t1645 * L_25 = V_0;
		String_t* L_26 = V_3;
		NullCheck(L_25);
		L_25->___Type_1 = L_26;
		goto IL_00a8;
	}

IL_009b:
	{
		ChannelData_t1645 * L_27 = V_0;
		NullCheck(L_27);
		Hashtable_t985 * L_28 = ChannelData_get_CustomProperties_m9325(L_27, /*hidden argument*/NULL);
		String_t* L_29 = V_2;
		String_t* L_30 = V_3;
		NullCheck(L_28);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_28, L_29, L_30);
	}

IL_00a8:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_32 = V_1;
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t35* L_34 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		bool L_35 = ___isTemplate;
		if (!L_35)
		{
			goto IL_00f7;
		}
	}
	{
		ChannelData_t1645 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = (L_36->___Id_2);
		if (L_37)
		{
			goto IL_00d6;
		}
	}
	{
		RemotingException_t1648 * L_38 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_38, _stringLiteral2265, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_38);
	}

IL_00d6:
	{
		ChannelData_t1645 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = (L_39->___Type_1);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		RemotingException_t1648 * L_41 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_41, _stringLiteral2265, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_41);
	}

IL_00ec:
	{
		ChannelData_t1645 * L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannelTemplate_m9292(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_00f7:
	{
		ArrayList_t920 * L_43 = (__this->___channelInstances_1);
		ChannelData_t1645 * L_44 = V_0;
		NullCheck(L_43);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
	}

IL_0104:
	{
		ChannelData_t1645 * L_45 = V_0;
		__this->___currentChannel_2 = L_45;
		return;
	}
}
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterDataMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1646_il2cpp_TypeInfo_var;
extern TypeInfo* FormatterData_t1647_il2cpp_TypeInfo_var;
extern TypeInfo* SinkProviderData_t1575_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_t792_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2227;
extern Il2CppCodeGenString* _stringLiteral2266;
extern Il2CppCodeGenString* _stringLiteral2264;
extern Il2CppCodeGenString* _stringLiteral1254;
extern Il2CppCodeGenString* _stringLiteral2262;
extern Il2CppCodeGenString* _stringLiteral2265;
extern "C" ProviderData_t1646 * ConfigHandler_ReadProvider_m9311 (ConfigHandler_t1644 * __this, String_t* ___name, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ProviderData_t1646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1080);
		FormatterData_t1647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1157);
		SinkProviderData_t1575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1156);
		Stack_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(812);
		IAttrList_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2227 = il2cpp_codegen_string_literal_from_index(2227);
		_stringLiteral2266 = il2cpp_codegen_string_literal_from_index(2266);
		_stringLiteral2264 = il2cpp_codegen_string_literal_from_index(2264);
		_stringLiteral1254 = il2cpp_codegen_string_literal_from_index(1254);
		_stringLiteral2262 = il2cpp_codegen_string_literal_from_index(2262);
		_stringLiteral2265 = il2cpp_codegen_string_literal_from_index(2265);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1646 * V_0 = {0};
	SinkProviderData_t1575 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	ProviderData_t1646 * G_B3_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m421(NULL /*static, unused*/, L_0, _stringLiteral2227, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ProviderData_t1646 * L_2 = (ProviderData_t1646 *)il2cpp_codegen_object_new (ProviderData_t1646_il2cpp_TypeInfo_var);
		ProviderData__ctor_m9327(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001a:
	{
		FormatterData_t1647 * L_3 = (FormatterData_t1647 *)il2cpp_codegen_object_new (FormatterData_t1647_il2cpp_TypeInfo_var);
		FormatterData__ctor_m9329(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((ProviderData_t1646 *)(L_3));
	}

IL_001f:
	{
		V_0 = G_B3_0;
		SinkProviderData_t1575 * L_4 = (SinkProviderData_t1575 *)il2cpp_codegen_object_new (SinkProviderData_t1575_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m8991(L_4, _stringLiteral2266, /*hidden argument*/NULL);
		V_1 = L_4;
		ProviderData_t1646 * L_5 = V_0;
		SinkProviderData_t1575 * L_6 = V_1;
		NullCheck(L_6);
		Object_t * L_7 = SinkProviderData_get_Children_m8992(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___CustomData_4 = L_7;
		Stack_t792 * L_8 = (Stack_t792 *)il2cpp_codegen_object_new (Stack_t792_il2cpp_TypeInfo_var);
		Stack__ctor_m4161(L_8, /*hidden argument*/NULL);
		__this->___currentProviderData_3 = L_8;
		Stack_t792 * L_9 = (__this->___currentProviderData_3);
		SinkProviderData_t1575 * L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_9, L_10);
		V_2 = 0;
		goto IL_00dd;
	}

IL_0055:
	{
		Object_t * L_11 = ___attrs;
		NullCheck(L_11);
		StringU5BU5D_t35* L_12 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_11);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14, sizeof(String_t*)));
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t35* L_16 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_15);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_16, L_18, sizeof(String_t*)));
		String_t* L_19 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m421(NULL /*static, unused*/, L_19, _stringLiteral2264, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		bool L_21 = ___isTemplate;
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		ProviderData_t1646 * L_22 = V_0;
		String_t* L_23 = V_4;
		NullCheck(L_22);
		L_22->___Id_2 = L_23;
		goto IL_00d9;
	}

IL_008b:
	{
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m421(NULL /*static, unused*/, L_24, _stringLiteral1254, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		ProviderData_t1646 * L_26 = V_0;
		String_t* L_27 = V_4;
		NullCheck(L_26);
		L_26->___Type_1 = L_27;
		goto IL_00d9;
	}

IL_00a8:
	{
		String_t* L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m421(NULL /*static, unused*/, L_28, _stringLiteral2262, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		bool L_30 = ___isTemplate;
		if (L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ProviderData_t1646 * L_31 = V_0;
		String_t* L_32 = V_4;
		NullCheck(L_31);
		L_31->___Ref_0 = L_32;
		goto IL_00d9;
	}

IL_00cb:
	{
		ProviderData_t1646 * L_33 = V_0;
		NullCheck(L_33);
		Hashtable_t985 * L_34 = (L_33->___CustomProperties_3);
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		NullCheck(L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_34, L_35, L_36);
	}

IL_00d9:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00dd:
	{
		int32_t L_38 = V_2;
		Object_t * L_39 = ___attrs;
		NullCheck(L_39);
		StringU5BU5D_t35* L_40 = (StringU5BU5D_t35*)InterfaceFuncInvoker0< StringU5BU5D_t35* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1909_il2cpp_TypeInfo_var, L_39);
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		ProviderData_t1646 * L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42 = (L_41->___Id_2);
		if (L_42)
		{
			goto IL_0107;
		}
	}
	{
		bool L_43 = ___isTemplate;
		if (!L_43)
		{
			goto IL_0107;
		}
	}
	{
		RemotingException_t1648 * L_44 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_44, _stringLiteral2265, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_44);
	}

IL_0107:
	{
		ProviderData_t1646 * L_45 = V_0;
		return L_45;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1254;
extern Il2CppCodeGenString* _stringLiteral2267;
extern "C" void ConfigHandler_ReadClientActivated_m9312 (ConfigHandler_t1644 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1150);
		_stringLiteral1254 = il2cpp_codegen_string_literal_from_index(1254);
		_stringLiteral2267 = il2cpp_codegen_string_literal_from_index(2267);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m9318(__this, L_0, _stringLiteral1254, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m9319(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = (__this->___currentClientUrl_4);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_4 = (__this->___currentClientUrl_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m421(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		RemotingException_t1648 * L_7 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_7, _stringLiteral2267, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0041:
	{
		ArrayList_t920 * L_8 = (__this->___typeEntries_0);
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = (__this->___currentClientUrl_4);
		ActivatedClientTypeEntry_t1632 * L_12 = (ActivatedClientTypeEntry_t1632 *)il2cpp_codegen_object_new (ActivatedClientTypeEntry_t1632_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry__ctor_m9242(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_12);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"
extern TypeInfo* ActivatedServiceTypeEntry_t1634_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1254;
extern "C" void ConfigHandler_ReadServiceActivated_m9313 (ConfigHandler_t1644 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivatedServiceTypeEntry_t1634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1153);
		_stringLiteral1254 = il2cpp_codegen_string_literal_from_index(1254);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m9318(__this, L_0, _stringLiteral1254, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m9319(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		ArrayList_t920 * L_3 = (__this->___typeEntries_0);
		String_t* L_4 = V_0;
		String_t* L_5 = V_1;
		ActivatedServiceTypeEntry_t1634 * L_6 = (ActivatedServiceTypeEntry_t1634 *)il2cpp_codegen_object_new (ActivatedServiceTypeEntry_t1634_il2cpp_TypeInfo_var);
		ActivatedServiceTypeEntry__ctor_m9247(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_6);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
extern TypeInfo* WellKnownClientTypeEntry_t1657_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2247;
extern Il2CppCodeGenString* _stringLiteral1254;
extern "C" void ConfigHandler_ReadClientWellKnown_m9314 (ConfigHandler_t1644 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WellKnownClientTypeEntry_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1154);
		_stringLiteral2247 = il2cpp_codegen_string_literal_from_index(2247);
		_stringLiteral1254 = il2cpp_codegen_string_literal_from_index(1254);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m9318(__this, L_0, _stringLiteral2247, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m9318(__this, L_2, _stringLiteral1254, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = ConfigHandler_ExtractAssembly_m9319(__this, (&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		ArrayList_t920 * L_5 = (__this->___typeEntries_0);
		String_t* L_6 = V_1;
		String_t* L_7 = V_2;
		String_t* L_8 = V_0;
		WellKnownClientTypeEntry_t1657 * L_9 = (WellKnownClientTypeEntry_t1657 *)il2cpp_codegen_object_new (WellKnownClientTypeEntry_t1657_il2cpp_TypeInfo_var);
		WellKnownClientTypeEntry__ctor_m9388(L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_9);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2268;
extern Il2CppCodeGenString* _stringLiteral1721;
extern Il2CppCodeGenString* _stringLiteral1254;
extern Il2CppCodeGenString* _stringLiteral2269;
extern Il2CppCodeGenString* _stringLiteral2270;
extern Il2CppCodeGenString* _stringLiteral2271;
extern Il2CppCodeGenString* _stringLiteral2272;
extern "C" void ConfigHandler_ReadServiceWellKnown_m9315 (ConfigHandler_t1644 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		WellKnownServiceTypeEntry_t1659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1155);
		_stringLiteral2268 = il2cpp_codegen_string_literal_from_index(2268);
		_stringLiteral1721 = il2cpp_codegen_string_literal_from_index(1721);
		_stringLiteral1254 = il2cpp_codegen_string_literal_from_index(1254);
		_stringLiteral2269 = il2cpp_codegen_string_literal_from_index(2269);
		_stringLiteral2270 = il2cpp_codegen_string_literal_from_index(2270);
		_stringLiteral2271 = il2cpp_codegen_string_literal_from_index(2271);
		_stringLiteral2272 = il2cpp_codegen_string_literal_from_index(2272);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	int32_t V_4 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m9318(__this, L_0, _stringLiteral2268, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m9318(__this, L_2, _stringLiteral1721, /*hidden argument*/NULL);
		V_1 = L_3;
		Object_t * L_4 = ___attrs;
		String_t* L_5 = ConfigHandler_GetNotNull_m9318(__this, L_4, _stringLiteral1254, /*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6 = ConfigHandler_ExtractAssembly_m9319(__this, (&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m421(NULL /*static, unused*/, L_7, _stringLiteral2269, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 2;
		goto IL_0076;
	}

IL_0048:
	{
		String_t* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m421(NULL /*static, unused*/, L_9, _stringLiteral2270, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		V_4 = 1;
		goto IL_0076;
	}

IL_0060:
	{
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m440(NULL /*static, unused*/, _stringLiteral2271, L_11, _stringLiteral2272, /*hidden argument*/NULL);
		RemotingException_t1648 * L_13 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_0076:
	{
		ArrayList_t920 * L_14 = (__this->___typeEntries_0);
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		String_t* L_17 = V_0;
		int32_t L_18 = V_4;
		WellKnownServiceTypeEntry_t1659 * L_19 = (WellKnownServiceTypeEntry_t1659 *)il2cpp_codegen_object_new (WellKnownServiceTypeEntry_t1659_il2cpp_TypeInfo_var);
		WellKnownServiceTypeEntry__ctor_m9393(L_19, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_19);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t165_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1655_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2273;
extern Il2CppCodeGenString* _stringLiteral2274;
extern "C" void ConfigHandler_ReadInteropXml_m9316 (ConfigHandler_t1644 * __this, Object_t * ___attrs, bool ___isElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		CharU5BU5D_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		SoapServices_t1655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1130);
		_stringLiteral2273 = il2cpp_codegen_string_literal_from_index(2273);
		_stringLiteral2274 = il2cpp_codegen_string_literal_from_index(2274);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	StringU5BU5D_t35* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* G_B3_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m9318(__this, L_0, _stringLiteral2273, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m6948, L_1, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		V_0 = L_2;
		Object_t * L_3 = ___attrs;
		String_t* L_4 = ConfigHandler_GetNotNull_m9318(__this, L_3, _stringLiteral2274, /*hidden argument*/NULL);
		CharU5BU5D_t165* L_5 = ((CharU5BU5D_t165*)SZArrayNew(CharU5BU5D_t165_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)44);
		NullCheck(L_4);
		StringU5BU5D_t35* L_6 = String_Split_m475(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t35* L_7 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8, sizeof(String_t*))));
		String_t* L_9 = String_Trim_m472((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8, sizeof(String_t*))), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t35* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		StringU5BU5D_t35* L_11 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m472((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		goto IL_004f;
	}

IL_004e:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_004f:
	{
		V_3 = G_B3_0;
		bool L_14 = ___isElement;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		Type_t * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlElement_m9378(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0063:
	{
		String_t* L_18 = V_2;
		String_t* L_19 = V_3;
		Type_t * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlType_m9379(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
extern TypeInfo* IAttrList_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1655_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1254;
extern Il2CppCodeGenString* _stringLiteral2275;
extern Il2CppCodeGenString* _stringLiteral2276;
extern Il2CppCodeGenString* _stringLiteral2277;
extern "C" void ConfigHandler_ReadPreload_m9317 (ConfigHandler_t1644 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		SoapServices_t1655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1130);
		_stringLiteral1254 = il2cpp_codegen_string_literal_from_index(1254);
		_stringLiteral2275 = il2cpp_codegen_string_literal_from_index(2275);
		_stringLiteral2276 = il2cpp_codegen_string_literal_from_index(2276);
		_stringLiteral2277 = il2cpp_codegen_string_literal_from_index(2277);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_0, _stringLiteral1254);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_2, _stringLiteral2275);
		V_1 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RemotingException_t1648 * L_6 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_6, _stringLiteral2276, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_002f:
	{
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m6948, L_8, "mscorlib, Version=2.0.5.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e");
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m9377(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0045:
	{
		String_t* L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_11 = V_1;
		Assembly_t1255 * L_12 = Assembly_Load_m8637(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1655_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m9376(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_005b:
	{
		RemotingException_t1648 * L_13 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_13, _stringLiteral2277, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_0066:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern TypeInfo* IAttrList_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1648_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2278;
extern "C" String_t* ConfigHandler_GetNotNull_m9318 (ConfigHandler_t1644 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RemotingException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		_stringLiteral2278 = il2cpp_codegen_string_literal_from_index(2278);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1909_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m421(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_001e:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m423(NULL /*static, unused*/, L_7, _stringLiteral2278, /*hidden argument*/NULL);
		RemotingException_t1648 * L_9 = (RemotingException_t1648 *)il2cpp_codegen_object_new (RemotingException_t1648_il2cpp_TypeInfo_var);
		RemotingException__ctor_m9331(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigHandler_ExtractAssembly_m9319 (ConfigHandler_t1644 * __this, String_t** ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	{
		String_t** L_0 = ___type;
		NullCheck((*((String_t**)L_0)));
		int32_t L_1 = String_IndexOf_m2555((*((String_t**)L_0)), ((int32_t)44), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}

IL_0017:
	{
		String_t** L_4 = ___type;
		int32_t L_5 = V_0;
		NullCheck((*((String_t**)L_4)));
		String_t* L_6 = String_Substring_m2525((*((String_t**)L_4)), ((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_Trim_m472(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t** L_8 = ___type;
		String_t** L_9 = ___type;
		int32_t L_10 = V_0;
		NullCheck((*((String_t**)L_9)));
		String_t* L_11 = String_Substring_m2501((*((String_t**)L_9)), 0, L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m472(L_11, /*hidden argument*/NULL);
		*((Object_t **)(L_8)) = (Object_t *)L_12;
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C" void ConfigHandler_OnChars_m9320 (ConfigHandler_t1644 * __this, String_t* ___ch, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern TypeInfo* RemotingConfiguration_t1643_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_OnEndParsing_m9321 (ConfigHandler_t1644 * __this, SmallXmlParser_t1360 * ___parser, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->___channelInstances_1);
		bool L_1 = (__this->___onlyDelayedChannels_7);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannels_m9295(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___appName_5);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___appName_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		RemotingConfiguration_set_ApplicationName_m9284(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		bool L_4 = (__this->___onlyDelayedChannels_7);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		ArrayList_t920 * L_5 = (__this->___typeEntries_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1643_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterTypes_m9296(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ChannelData::.ctor()
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern "C" void ChannelData__ctor_m9322 (ChannelData_t1645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_0, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_0;
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
		Hashtable_t985 * L_2 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_2, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_2;
		Object__ctor_m417(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern "C" ArrayList_t920 * ChannelData_get_ServerProviders_m9323 (ChannelData_t1645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->____serverProviders_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_1;
	}

IL_0016:
	{
		ArrayList_t920 * L_2 = (__this->____serverProviders_4);
		return L_2;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern TypeInfo* ArrayList_t920_il2cpp_TypeInfo_var;
extern "C" ArrayList_t920 * ChannelData_get_ClientProviders_m9324 (ChannelData_t1645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t920 * L_0 = (__this->____clientProviders_5);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t920 * L_1 = (ArrayList_t920 *)il2cpp_codegen_object_new (ArrayList_t920_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5103(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
	}

IL_0016:
	{
		ArrayList_t920 * L_2 = (__this->____clientProviders_5);
		return L_2;
	}
}
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern TypeInfo* Hashtable_t985_il2cpp_TypeInfo_var;
extern "C" Hashtable_t985 * ChannelData_get_CustomProperties_m9325 (ChannelData_t1645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(673);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t985 * L_0 = (__this->____customProperties_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t985 * L_1 = (Hashtable_t985 *)il2cpp_codegen_object_new (Hashtable_t985_il2cpp_TypeInfo_var);
		Hashtable__ctor_m5179(L_1, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_1;
	}

IL_0016:
	{
		Hashtable_t985 * L_2 = (__this->____customProperties_6);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"
extern TypeInfo* IEnumerator_t145_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1247_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t157_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1646_il2cpp_TypeInfo_var;
extern "C" void ChannelData_CopyFrom_m9326 (ChannelData_t1645 * __this, ChannelData_t1645 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		DictionaryEntry_t1247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(719);
		IDisposable_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ProviderData_t1646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1080);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t1247  V_0 = {0};
	Object_t * V_1 = {0};
	ProviderData_t1646 * V_2 = {0};
	Object_t * V_3 = {0};
	ProviderData_t1646 * V_4 = {0};
	ProviderData_t1646 * V_5 = {0};
	Object_t * V_6 = {0};
	ProviderData_t1646 * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___Ref_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1645 * L_1 = ___other;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Ref_0);
		__this->___Ref_0 = L_2;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___Id_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ChannelData_t1645 * L_4 = ___other;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Id_2);
		__this->___Id_2 = L_5;
	}

IL_002e:
	{
		String_t* L_6 = (__this->___Type_1);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ChannelData_t1645 * L_7 = ___other;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___Type_1);
		__this->___Type_1 = L_8;
	}

IL_0045:
	{
		String_t* L_9 = (__this->___DelayLoadAsClientChannel_3);
		if (L_9)
		{
			goto IL_005c;
		}
	}
	{
		ChannelData_t1645 * L_10 = ___other;
		NullCheck(L_10);
		String_t* L_11 = (L_10->___DelayLoadAsClientChannel_3);
		__this->___DelayLoadAsClientChannel_3 = L_11;
	}

IL_005c:
	{
		ChannelData_t1645 * L_12 = ___other;
		NullCheck(L_12);
		Hashtable_t985 * L_13 = (L_12->____customProperties_6);
		if (!L_13)
		{
			goto IL_00d9;
		}
	}
	{
		ChannelData_t1645 * L_14 = ___other;
		NullCheck(L_14);
		Hashtable_t985 * L_15 = (L_14->____customProperties_6);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_15);
		V_1 = L_16;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b4;
		}

IL_0078:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t1247 *)((DictionaryEntry_t1247 *)UnBox (L_18, DictionaryEntry_t1247_il2cpp_TypeInfo_var))));
			Hashtable_t985 * L_19 = ChannelData_get_CustomProperties_m9325(__this, /*hidden argument*/NULL);
			Object_t * L_20 = DictionaryEntry_get_Key_m7704((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_19, L_20);
			if (L_21)
			{
				goto IL_00b4;
			}
		}

IL_009b:
		{
			Hashtable_t985 * L_22 = ChannelData_get_CustomProperties_m9325(__this, /*hidden argument*/NULL);
			Object_t * L_23 = DictionaryEntry_get_Key_m7704((&V_0), /*hidden argument*/NULL);
			Object_t * L_24 = DictionaryEntry_get_Value_m7705((&V_0), /*hidden argument*/NULL);
			NullCheck(L_22);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_22, L_23, L_24);
		}

IL_00b4:
		{
			Object_t * L_25 = V_1;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0078;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_00c4;
	}

FINALLY_00c4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_27 = V_1;
			V_8 = ((Object_t *)IsInst(L_27, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_28 = V_8;
			if (L_28)
			{
				goto IL_00d1;
			}
		}

IL_00d0:
		{
			IL2CPP_END_FINALLY(196)
		}

IL_00d1:
		{
			Object_t * L_29 = V_8;
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_29);
			IL2CPP_END_FINALLY(196)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_00d9:
	{
		ArrayList_t920 * L_30 = (__this->____serverProviders_4);
		if (L_30)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1645 * L_31 = ___other;
		NullCheck(L_31);
		ArrayList_t920 * L_32 = (L_31->____serverProviders_4);
		if (!L_32)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1645 * L_33 = ___other;
		NullCheck(L_33);
		ArrayList_t920 * L_34 = (L_33->____serverProviders_4);
		NullCheck(L_34);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_34);
		V_3 = L_35;
	}

IL_00fb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_0100:
		{
			Object_t * L_36 = V_3;
			NullCheck(L_36);
			Object_t * L_37 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_36);
			V_2 = ((ProviderData_t1646 *)CastclassClass(L_37, ProviderData_t1646_il2cpp_TypeInfo_var));
			ProviderData_t1646 * L_38 = (ProviderData_t1646 *)il2cpp_codegen_object_new (ProviderData_t1646_il2cpp_TypeInfo_var);
			ProviderData__ctor_m9327(L_38, /*hidden argument*/NULL);
			V_4 = L_38;
			ProviderData_t1646 * L_39 = V_4;
			ProviderData_t1646 * L_40 = V_2;
			NullCheck(L_39);
			ProviderData_CopyFrom_m9328(L_39, L_40, /*hidden argument*/NULL);
			ArrayList_t920 * L_41 = ChannelData_get_ServerProviders_m9323(__this, /*hidden argument*/NULL);
			ProviderData_t1646 * L_42 = V_4;
			NullCheck(L_41);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_41, L_42);
		}

IL_0129:
		{
			Object_t * L_43 = V_3;
			NullCheck(L_43);
			bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_0100;
			}
		}

IL_0134:
		{
			IL2CPP_LEAVE(0x14E, FINALLY_0139);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0139;
	}

FINALLY_0139:
	{ // begin finally (depth: 1)
		{
			Object_t * L_45 = V_3;
			V_9 = ((Object_t *)IsInst(L_45, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_9;
			if (L_46)
			{
				goto IL_0146;
			}
		}

IL_0145:
		{
			IL2CPP_END_FINALLY(313)
		}

IL_0146:
		{
			Object_t * L_47 = V_9;
			NullCheck(L_47);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_47);
			IL2CPP_END_FINALLY(313)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(313)
	{
		IL2CPP_JUMP_TBL(0x14E, IL_014e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_014e:
	{
		ArrayList_t920 * L_48 = (__this->____clientProviders_5);
		if (L_48)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1645 * L_49 = ___other;
		NullCheck(L_49);
		ArrayList_t920 * L_50 = (L_49->____clientProviders_5);
		if (!L_50)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1645 * L_51 = ___other;
		NullCheck(L_51);
		ArrayList_t920 * L_52 = (L_51->____clientProviders_5);
		NullCheck(L_52);
		Object_t * L_53 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_52);
		V_6 = L_53;
	}

IL_0171:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a2;
		}

IL_0176:
		{
			Object_t * L_54 = V_6;
			NullCheck(L_54);
			Object_t * L_55 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_54);
			V_5 = ((ProviderData_t1646 *)CastclassClass(L_55, ProviderData_t1646_il2cpp_TypeInfo_var));
			ProviderData_t1646 * L_56 = (ProviderData_t1646 *)il2cpp_codegen_object_new (ProviderData_t1646_il2cpp_TypeInfo_var);
			ProviderData__ctor_m9327(L_56, /*hidden argument*/NULL);
			V_7 = L_56;
			ProviderData_t1646 * L_57 = V_7;
			ProviderData_t1646 * L_58 = V_5;
			NullCheck(L_57);
			ProviderData_CopyFrom_m9328(L_57, L_58, /*hidden argument*/NULL);
			ArrayList_t920 * L_59 = ChannelData_get_ClientProviders_m9324(__this, /*hidden argument*/NULL);
			ProviderData_t1646 * L_60 = V_7;
			NullCheck(L_59);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_59, L_60);
		}

IL_01a2:
		{
			Object_t * L_61 = V_6;
			NullCheck(L_61);
			bool L_62 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t145_il2cpp_TypeInfo_var, L_61);
			if (L_62)
			{
				goto IL_0176;
			}
		}

IL_01ae:
		{
			IL2CPP_LEAVE(0x1C9, FINALLY_01b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_01b3;
	}

FINALLY_01b3:
	{ // begin finally (depth: 1)
		{
			Object_t * L_63 = V_6;
			V_10 = ((Object_t *)IsInst(L_63, IDisposable_t157_il2cpp_TypeInfo_var));
			Object_t * L_64 = V_10;
			if (L_64)
			{
				goto IL_01c1;
			}
		}

IL_01c0:
		{
			IL2CPP_END_FINALLY(435)
		}

IL_01c1:
		{
			Object_t * L_65 = V_10;
			NullCheck(L_65);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t157_il2cpp_TypeInfo_var, L_65);
			IL2CPP_END_FINALLY(435)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(435)
	{
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_01c9:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
