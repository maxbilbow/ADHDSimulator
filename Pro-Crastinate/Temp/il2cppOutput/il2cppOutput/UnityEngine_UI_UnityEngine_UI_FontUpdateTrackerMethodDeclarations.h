#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t352;
// UnityEngine.UI.Text
struct Text_t229;
// UnityEngine.Font
struct Font_t277;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C" void FontUpdateTracker__cctor_m1424 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_TrackText_m1425 (Object_t * __this /* static, unused */, Text_t229 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C" void FontUpdateTracker_RebuildForFont_m1426 (Object_t * __this /* static, unused */, Font_t277 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_UntrackText_m1427 (Object_t * __this /* static, unused */, Text_t229 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
