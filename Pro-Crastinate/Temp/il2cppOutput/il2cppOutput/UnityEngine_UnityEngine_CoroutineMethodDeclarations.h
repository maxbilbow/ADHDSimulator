#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t398;
struct Coroutine_t398_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2708 (Coroutine_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2709 (Coroutine_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2710 (Coroutine_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t398_marshal(const Coroutine_t398& unmarshaled, Coroutine_t398_marshaled& marshaled);
extern "C" void Coroutine_t398_marshal_back(const Coroutine_t398_marshaled& marshaled, Coroutine_t398& unmarshaled);
extern "C" void Coroutine_t398_marshal_cleanup(Coroutine_t398_marshaled& marshaled);
