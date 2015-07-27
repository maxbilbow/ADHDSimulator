#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t52;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t55;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern "C" void CrossPlatformInputManager__cctor_m171 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
extern "C" void CrossPlatformInputManager_SwitchActiveInputMethod_m172 (Object_t * __this /* static, unused */, int32_t ___activeInputMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern "C" bool CrossPlatformInputManager_AxisExists_m173 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
extern "C" bool CrossPlatformInputManager_ButtonExists_m174 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" void CrossPlatformInputManager_RegisterVirtualAxis_m175 (Object_t * __this /* static, unused */, VirtualAxis_t52 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C" void CrossPlatformInputManager_RegisterVirtualButton_m176 (Object_t * __this /* static, unused */, VirtualButton_t55 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C" void CrossPlatformInputManager_UnRegisterVirtualAxis_m177 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C" void CrossPlatformInputManager_UnRegisterVirtualButton_m178 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C" VirtualAxis_t52 * CrossPlatformInputManager_VirtualAxisReference_m179 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C" float CrossPlatformInputManager_GetAxis_m180 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C" float CrossPlatformInputManager_GetAxisRaw_m181 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C" float CrossPlatformInputManager_GetAxis_m182 (Object_t * __this /* static, unused */, String_t* ___name, bool ___raw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C" bool CrossPlatformInputManager_GetButton_m183 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C" bool CrossPlatformInputManager_GetButtonDown_m184 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern "C" bool CrossPlatformInputManager_GetButtonUp_m185 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C" void CrossPlatformInputManager_SetButtonDown_m186 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C" void CrossPlatformInputManager_SetButtonUp_m187 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C" void CrossPlatformInputManager_SetAxisPositive_m188 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C" void CrossPlatformInputManager_SetAxisNegative_m189 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C" void CrossPlatformInputManager_SetAxisZero_m190 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C" void CrossPlatformInputManager_SetAxis_m191 (Object_t * __this /* static, unused */, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern "C" Vector3_t42  CrossPlatformInputManager_get_mousePosition_m192 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionX_m193 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionY_m194 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionZ_m195 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
