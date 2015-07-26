#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Light
struct Light_t90;

// System.Single UnityEngine.Light::get_shadowStrength()
extern "C" float Light_get_shadowStrength_m646 (Light_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
extern "C" void Light_set_shadowStrength_m654 (Light_t90 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
extern "C" void Light_set_shadowBias_m653 (Light_t90 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
