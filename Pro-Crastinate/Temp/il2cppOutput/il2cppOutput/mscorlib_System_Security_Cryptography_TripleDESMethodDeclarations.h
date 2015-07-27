#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDES
struct TripleDES_t1072;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.TripleDES::.ctor()
extern "C" void TripleDES__ctor_m9858 (TripleDES_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDES::get_Key()
extern "C" ByteU5BU5D_t625* TripleDES_get_Key_m9859 (TripleDES_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDES::set_Key(System.Byte[])
extern "C" void TripleDES_set_Key_m9860 (TripleDES_t1072 * __this, ByteU5BU5D_t625* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.TripleDES::IsWeakKey(System.Byte[])
extern "C" bool TripleDES_IsWeakKey_m9861 (Object_t * __this /* static, unused */, ByteU5BU5D_t625* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create()
extern "C" TripleDES_t1072 * TripleDES_Create_m5172 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create(System.String)
extern "C" TripleDES_t1072 * TripleDES_Create_m9862 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
