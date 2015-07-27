#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t889;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.RandomNumberGenerator::.ctor()
extern "C" void RandomNumberGenerator__ctor_m9743 (RandomNumberGenerator_t889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C" RandomNumberGenerator_t889 * RandomNumberGenerator_Create_m4211 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create(System.String)
extern "C" RandomNumberGenerator_t889 * RandomNumberGenerator_Create_m9744 (Object_t * __this /* static, unused */, String_t* ___rngName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
