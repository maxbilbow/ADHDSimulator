#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t1721;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
extern "C" void SHA1Managed__ctor_m9785 (SHA1Managed_t1721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Managed_HashCore_m9786 (SHA1Managed_t1721 * __this, ByteU5BU5D_t625* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Managed::HashFinal()
extern "C" ByteU5BU5D_t625* SHA1Managed_HashFinal_m9787 (SHA1Managed_t1721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::Initialize()
extern "C" void SHA1Managed_Initialize_m9788 (SHA1Managed_t1721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
