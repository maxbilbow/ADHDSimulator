#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t889;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" RandomNumberGenerator_t889 * KeyBuilder_get_Rng_m4165 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" ByteU5BU5D_t625* KeyBuilder_Key_m4166 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" ByteU5BU5D_t625* KeyBuilder_IV_m4167 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
