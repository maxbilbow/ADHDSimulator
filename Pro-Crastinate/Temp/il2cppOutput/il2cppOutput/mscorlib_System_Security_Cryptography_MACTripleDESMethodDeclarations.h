#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t1708;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
extern "C" void MACTripleDES__ctor_m9650 (MACTripleDES_t1708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
extern "C" void MACTripleDES_Setup_m9651 (MACTripleDES_t1708 * __this, String_t* ___strTripleDES, ByteU5BU5D_t625* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
extern "C" void MACTripleDES_Finalize_m9652 (MACTripleDES_t1708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
extern "C" void MACTripleDES_Dispose_m9653 (MACTripleDES_t1708 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
extern "C" void MACTripleDES_Initialize_m9654 (MACTripleDES_t1708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MACTripleDES_HashCore_m9655 (MACTripleDES_t1708 * __this, ByteU5BU5D_t625* ___rgbData, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
extern "C" ByteU5BU5D_t625* MACTripleDES_HashFinal_m9656 (MACTripleDES_t1708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
