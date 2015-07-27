#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform/Enumerator
struct Enumerator_t639;
// UnityEngine.Transform
struct Transform_t41;
// System.Object
struct Object_t;

// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m3352 (Enumerator_t639 * __this, Transform_t41 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m3353 (Enumerator_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m3354 (Enumerator_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
