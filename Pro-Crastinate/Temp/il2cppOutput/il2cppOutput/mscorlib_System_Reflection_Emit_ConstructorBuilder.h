#pragma once
#include <stdint.h>
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1452;
// System.Type[]
struct TypeU5BU5D_t707;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1453;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t1454;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1455;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.ConstructorBuilder
struct  ConstructorBuilder_t1451  : public ConstructorInfo_t715
{
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::ilgen
	ILGenerator_t1452 * ___ilgen_2;
	// System.Type[] System.Reflection.Emit.ConstructorBuilder::parameters
	TypeU5BU5D_t707* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::attrs
	int32_t ___attrs_4;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.ConstructorBuilder::iattrs
	int32_t ___iattrs_5;
	// System.Int32 System.Reflection.Emit.ConstructorBuilder::table_idx
	int32_t ___table_idx_6;
	// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::call_conv
	int32_t ___call_conv_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::type
	TypeBuilder_t1453 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.ConstructorBuilder::pinfo
	ParameterBuilderU5BU5D_t1454* ___pinfo_9;
	// System.Boolean System.Reflection.Emit.ConstructorBuilder::init_locals
	bool ___init_locals_10;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModReq
	TypeU5BU5DU5BU5D_t1455* ___paramModReq_11;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t1455* ___paramModOpt_12;
};
