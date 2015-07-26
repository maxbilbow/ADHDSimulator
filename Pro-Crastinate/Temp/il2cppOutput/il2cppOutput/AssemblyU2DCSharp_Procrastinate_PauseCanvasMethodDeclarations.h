#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.PauseCanvas
struct PauseCanvas_t241;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t259;
// System.Enum
struct Enum_t5;
// System.Object
struct Object_t;
// Procrastinate.Event
#include "AssemblyU2DCSharp_Procrastinate_Event.h"

// System.Void Procrastinate.PauseCanvas::.ctor()
extern "C" void PauseCanvas__ctor_m840 (PauseCanvas_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::UnPauseGame(UnityEngine.EventSystems.BaseEventData)
extern "C" void PauseCanvas_UnPauseGame_m841 (Object_t * __this /* static, unused */, BaseEventData_t259 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::Start()
extern "C" void PauseCanvas_Start_m842 (PauseCanvas_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::toggleInfo()
extern "C" void PauseCanvas_toggleInfo_m843 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::ShowInfo()
extern "C" void PauseCanvas_ShowInfo_m844 (PauseCanvas_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::Update()
extern "C" void PauseCanvas_Update_m845 (PauseCanvas_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::OnGUI()
extern "C" void PauseCanvas_OnGUI_m846 (PauseCanvas_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::BuildWychd(Procrastinate.Event)
extern "C" void PauseCanvas_BuildWychd_m847 (PauseCanvas_t241 * __this, int32_t ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.PauseCanvas::OnEventDidStart(System.Enum,System.Object)
extern "C" void PauseCanvas_OnEventDidStart_m848 (PauseCanvas_t241 * __this, Enum_t5 * ___theEvent, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
