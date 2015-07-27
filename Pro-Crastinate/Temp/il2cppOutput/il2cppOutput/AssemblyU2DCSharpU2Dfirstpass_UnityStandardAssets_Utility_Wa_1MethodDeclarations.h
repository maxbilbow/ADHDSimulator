#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t130;
// UnityEngine.Transform[]
struct TransformU5BU5D_t104;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C" void WaypointCircuit__ctor_m394 (WaypointCircuit_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" float WaypointCircuit_get_Length_m395 (WaypointCircuit_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C" void WaypointCircuit_set_Length_m396 (WaypointCircuit_t130 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" TransformU5BU5D_t104* WaypointCircuit_get_Waypoints_m397 (WaypointCircuit_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C" void WaypointCircuit_Awake_m398 (WaypointCircuit_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C" RoutePoint_t131  WaypointCircuit_GetRoutePoint_m399 (WaypointCircuit_t130 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C" Vector3_t42  WaypointCircuit_GetRoutePosition_m400 (WaypointCircuit_t130 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t42  WaypointCircuit_CatmullRom_m401 (WaypointCircuit_t130 * __this, Vector3_t42  ___p0, Vector3_t42  ___p1, Vector3_t42  ___p2, Vector3_t42  ___p3, float ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C" void WaypointCircuit_CachePositionsAndDistances_m402 (WaypointCircuit_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C" void WaypointCircuit_OnDrawGizmos_m403 (WaypointCircuit_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C" void WaypointCircuit_OnDrawGizmosSelected_m404 (WaypointCircuit_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C" void WaypointCircuit_DrawGizmos_m405 (WaypointCircuit_t130 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
