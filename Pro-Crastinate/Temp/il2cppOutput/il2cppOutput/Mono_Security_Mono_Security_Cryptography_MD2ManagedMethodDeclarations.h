#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t932;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
extern "C" void MD2Managed__ctor_m4363 (MD2Managed_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
extern "C" void MD2Managed__cctor_m4364 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
extern "C" ByteU5BU5D_t625* MD2Managed_Padding_m4365 (MD2Managed_t932 * __this, int32_t ___nLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
extern "C" void MD2Managed_Initialize_m4366 (MD2Managed_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD2Managed_HashCore_m4367 (MD2Managed_t932 * __this, ByteU5BU5D_t625* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
extern "C" ByteU5BU5D_t625* MD2Managed_HashFinal_m4368 (MD2Managed_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
extern "C" void MD2Managed_MD2Transform_m4369 (MD2Managed_t932 * __this, ByteU5BU5D_t625* ___state, ByteU5BU5D_t625* ___checksum, ByteU5BU5D_t625* ___block, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
