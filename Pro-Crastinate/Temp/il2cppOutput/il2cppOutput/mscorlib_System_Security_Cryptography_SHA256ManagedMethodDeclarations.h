#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t1722;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C" void SHA256Managed__ctor_m9791 (SHA256Managed_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA256Managed_HashCore_m9792 (SHA256Managed_t1722 * __this, ByteU5BU5D_t625* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA256Managed::HashFinal()
extern "C" ByteU5BU5D_t625* SHA256Managed_HashFinal_m9793 (SHA256Managed_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::Initialize()
extern "C" void SHA256Managed_Initialize_m9794 (SHA256Managed_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C" void SHA256Managed_ProcessBlock_m9795 (SHA256Managed_t1722 * __this, ByteU5BU5D_t625* ___inputBuffer, int32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA256Managed_ProcessFinalBlock_m9796 (SHA256Managed_t1722 * __this, ByteU5BU5D_t625* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA256Managed_AddLength_m9797 (SHA256Managed_t1722 * __this, uint64_t ___length, ByteU5BU5D_t625* ___buffer, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
