#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.InterpreterFactory
struct InterpreterFactory_t1193;
// System.UInt16[]
struct UInt16U5BU5D_t1126;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1177;
// System.Collections.IDictionary
struct IDictionary_t1182;
// System.String[]
struct StringU5BU5D_t35;

// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern "C" void InterpreterFactory__ctor_m5747 (InterpreterFactory_t1193 * __this, UInt16U5BU5D_t1126* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern "C" Object_t * InterpreterFactory_NewInstance_m5748 (InterpreterFactory_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern "C" int32_t InterpreterFactory_get_GroupCount_m5749 (InterpreterFactory_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern "C" int32_t InterpreterFactory_get_Gap_m5750 (InterpreterFactory_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern "C" void InterpreterFactory_set_Gap_m5751 (InterpreterFactory_t1193 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern "C" Object_t * InterpreterFactory_get_Mapping_m5752 (InterpreterFactory_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C" void InterpreterFactory_set_Mapping_m5753 (InterpreterFactory_t1193 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern "C" StringU5BU5D_t35* InterpreterFactory_get_NamesMapping_m5754 (InterpreterFactory_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern "C" void InterpreterFactory_set_NamesMapping_m5755 (InterpreterFactory_t1193 * __this, StringU5BU5D_t35* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
