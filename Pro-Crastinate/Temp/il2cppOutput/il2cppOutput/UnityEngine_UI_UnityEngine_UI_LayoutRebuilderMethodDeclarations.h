#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransform
struct RectTransform_t361;
// UnityEngine.Transform
struct Transform_t41;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t498;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t456;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t178;
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder__ctor_m2160 (LayoutRebuilder_t455 * __this, RectTransform_t361 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m2161 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m2162 (LayoutRebuilder_t455 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m2163 (Object_t * __this /* static, unused */, RectTransform_t361 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t41 * LayoutRebuilder_get_transform_m2164 (LayoutRebuilder_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m2165 (LayoutRebuilder_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m2166 (Object_t * __this /* static, unused */, List_1_t498 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m2167 (LayoutRebuilder_t455 * __this, RectTransform_t361 * ___rect, UnityAction_1_t456 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m2168 (LayoutRebuilder_t455 * __this, RectTransform_t361 * ___rect, UnityAction_1_t456 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m2169 (Object_t * __this /* static, unused */, RectTransform_t361 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m2170 (Object_t * __this /* static, unused */, RectTransform_t361 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidController_m2171 (Object_t * __this /* static, unused */, RectTransform_t361 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m2172 (Object_t * __this /* static, unused */, RectTransform_t361 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
extern "C" bool LayoutRebuilder_Equals_m2173 (LayoutRebuilder_t455 * __this, LayoutRebuilder_t455  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m2174 (LayoutRebuilder_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m2175 (LayoutRebuilder_t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m2176 (Object_t * __this /* static, unused */, Component_t178 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m2177 (Object_t * __this /* static, unused */, Component_t178 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m2178 (Object_t * __this /* static, unused */, Component_t178 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__C_m2179 (Object_t * __this /* static, unused */, Component_t178 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m2180 (Object_t * __this /* static, unused */, Component_t178 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
