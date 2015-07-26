#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t573;
struct Gradient_t573_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2811 (Gradient_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2812 (Gradient_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2813 (Gradient_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2814 (Gradient_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t573_marshal(const Gradient_t573& unmarshaled, Gradient_t573_marshaled& marshaled);
void Gradient_t573_marshal_back(const Gradient_t573_marshaled& marshaled, Gradient_t573& unmarshaled);
void Gradient_t573_marshal_cleanup(Gradient_t573_marshaled& marshaled);
