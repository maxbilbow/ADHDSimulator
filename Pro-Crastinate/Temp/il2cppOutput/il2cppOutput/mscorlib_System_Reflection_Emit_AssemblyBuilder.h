#pragma once
#include <stdint.h>
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t1449;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1450;
// System.Type
struct Type_t;
// Mono.Security.StrongName
struct StrongName_t1358;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t1448  : public Assembly_t1255
{
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t1449* ___modules_10;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t1450* ___loaded_modules_11;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_12;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_13;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_14;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t1358 * ___sn_15;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_16;
};
