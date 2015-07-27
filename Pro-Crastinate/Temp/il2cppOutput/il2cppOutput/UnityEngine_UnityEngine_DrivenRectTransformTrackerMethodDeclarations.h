#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t76;
struct Object_t76_marshaled;
// UnityEngine.RectTransform
struct RectTransform_t361;
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"

// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern "C" void DrivenRectTransformTracker_Add_m2570 (DrivenRectTransformTracker_t413 * __this, Object_t76 * ___driver, RectTransform_t361 * ___rectTransform, int32_t ___drivenProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m2568 (DrivenRectTransformTracker_t413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
