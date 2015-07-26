#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t1475;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m9845 (PermissionSet_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m9846 (PermissionSet_t1475 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m9847 (PermissionSet_t1475 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t1475 * PermissionSet_CreateFromBinaryFormat_m9848 (Object_t * __this /* static, unused */, ByteU5BU5D_t616* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
