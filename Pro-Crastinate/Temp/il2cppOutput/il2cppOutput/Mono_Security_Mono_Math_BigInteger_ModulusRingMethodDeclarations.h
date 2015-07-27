#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t912;
// Mono.Math.BigInteger
struct BigInteger_t913;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4231 (ModulusRing_t912 * __this, BigInteger_t913 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4232 (ModulusRing_t912 * __this, BigInteger_t913 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t913 * ModulusRing_Multiply_m4233 (ModulusRing_t912 * __this, BigInteger_t913 * ___a, BigInteger_t913 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t913 * ModulusRing_Difference_m4234 (ModulusRing_t912 * __this, BigInteger_t913 * ___a, BigInteger_t913 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t913 * ModulusRing_Pow_m4235 (ModulusRing_t912 * __this, BigInteger_t913 * ___a, BigInteger_t913 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t913 * ModulusRing_Pow_m4236 (ModulusRing_t912 * __this, uint32_t ___b, BigInteger_t913 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
