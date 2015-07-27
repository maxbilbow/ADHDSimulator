#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RC4
struct RC4_t927;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void Mono.Security.Cryptography.RC4::.ctor()
extern "C" void RC4__ctor_m4395 (RC4_t927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::.cctor()
extern "C" void RC4__cctor_m4396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RC4::get_IV()
extern "C" ByteU5BU5D_t625* RC4_get_IV_m4397 (RC4_t927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::set_IV(System.Byte[])
extern "C" void RC4_set_IV_m4398 (RC4_t927 * __this, ByteU5BU5D_t625* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
