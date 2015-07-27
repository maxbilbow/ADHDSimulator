#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.PauseCanvas
struct PauseCanvas_t240;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t262;
// System.Enum
struct Enum_t6;
// System.Object
struct Object_t;
// Procrastinate.Event
#include "AssemblyU2DCSharp_Procrastinate_Event.h"

// System.Void Procrastinate.PauseCanvas::.ctor()
extern "C" void PauseCanvas__ctor_m855 (PauseCanvas_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::UnPauseGame(UnityEngine.EventSystems.BaseEventData)
extern "C" void PauseCanvas_UnPauseGame_m856 (Object_t * __this /* static, unused */, BaseEventData_t262 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::Start()
extern "C" void PauseCanvas_Start_m857 (PauseCanvas_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::toggleInfo()
extern "C" void PauseCanvas_toggleInfo_m858 (PauseCanvas_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::ShowInfo()
extern "C" void PauseCanvas_ShowInfo_m859 (PauseCanvas_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::Update()
extern "C" void PauseCanvas_Update_m860 (PauseCanvas_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::OnGUI()
extern "C" void PauseCanvas_OnGUI_m861 (PauseCanvas_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::BuildWychd(Procrastinate.Event)
extern "C" void PauseCanvas_BuildWychd_m862 (PauseCanvas_t240 * __this, int32_t ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::OnEventDidStart(System.Enum,System.Object)
extern "C" void PauseCanvas_OnEventDidStart_m863 (PauseCanvas_t240 * __this, Enum_t6 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
