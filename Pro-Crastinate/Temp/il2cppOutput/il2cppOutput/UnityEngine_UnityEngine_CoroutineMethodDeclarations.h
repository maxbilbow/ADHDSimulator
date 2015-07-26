#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t393;
struct Coroutine_t393_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2692 (Coroutine_t393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2693 (Coroutine_t393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2694 (Coroutine_t393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t393_marshal(const Coroutine_t393& unmarshaled, Coroutine_t393_marshaled& marshaled);
void Coroutine_t393_marshal_back(const Coroutine_t393_marshaled& marshaled, Coroutine_t393& unmarshaled);
void Coroutine_t393_marshal_cleanup(Coroutine_t393_marshaled& marshaled);
