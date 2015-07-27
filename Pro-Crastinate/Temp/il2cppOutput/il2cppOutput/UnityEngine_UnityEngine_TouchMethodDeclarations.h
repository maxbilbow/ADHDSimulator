#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m2295 (Touch_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t44  Touch_get_position_m592 (Touch_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2296 (Touch_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Touch_t188_marshal(const Touch_t188& unmarshaled, Touch_t188_marshaled& marshaled);
extern "C" void Touch_t188_marshal_back(const Touch_t188_marshaled& marshaled, Touch_t188& unmarshaled);
extern "C" void Touch_t188_marshal_cleanup(Touch_t188_marshaled& marshaled);
