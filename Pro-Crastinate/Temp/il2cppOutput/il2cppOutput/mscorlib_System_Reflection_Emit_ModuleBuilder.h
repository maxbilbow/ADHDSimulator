#pragma once
#include <stdint.h>
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1472;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1448;
// System.Int32[]
struct Int32U5BU5D_t1037;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t1473;
// System.Char[]
struct CharU5BU5D_t165;
// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t1471  : public Module_t1467
{
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t1472* ___types_11;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t1448 * ___assemblyb_12;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t1037* ___table_indexes_13;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t1473 * ___token_gen_14;
};
struct ModuleBuilder_t1471_StaticFields{
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t165* ___type_modifiers_15;
};
