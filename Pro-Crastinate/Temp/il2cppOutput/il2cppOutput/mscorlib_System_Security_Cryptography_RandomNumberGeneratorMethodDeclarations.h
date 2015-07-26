#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t877;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void System.Security.Cryptography.RandomNumberGenerator::.ctor()
extern "C" void RandomNumberGenerator__ctor_m9667 (RandomNumberGenerator_t877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C" RandomNumberGenerator_t877 * RandomNumberGenerator_Create_m4186 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create(System.String)
extern "C" RandomNumberGenerator_t877 * RandomNumberGenerator_Create_m9668 (Object_t * __this /* static, unused */, String_t* ___rngName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
