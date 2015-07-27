#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation/Enumerator
struct Enumerator_t662;
// UnityEngine.Animation
struct Animation_t190;
// System.Object
struct Object_t;

// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" void Enumerator__ctor_m3473 (Enumerator_t662 * __this, Animation_t190 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m3474 (Enumerator_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m3475 (Enumerator_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
