#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Text
struct Text_t233;
// UnityEngine.Font
struct Font_t283;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C" void FontUpdateTracker__cctor_m1439 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_TrackText_m1440 (Object_t * __this /* static, unused */, Text_t233 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C" void FontUpdateTracker_RebuildForFont_m1441 (Object_t * __this /* static, unused */, Font_t283 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_UntrackText_m1442 (Object_t * __this /* static, unused */, Text_t233 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
