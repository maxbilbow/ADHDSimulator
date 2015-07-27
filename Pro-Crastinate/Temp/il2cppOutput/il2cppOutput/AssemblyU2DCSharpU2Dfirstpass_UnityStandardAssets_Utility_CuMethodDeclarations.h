#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t86;
// UnityEngine.Camera
struct Camera_t85;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C" void CurveControlledBob__ctor_m282 (CurveControlledBob_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C" void CurveControlledBob_Setup_m283 (CurveControlledBob_t86 * __this, Camera_t85 * ___camera, float ___bobBaseInterval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C" Vector3_t42  CurveControlledBob_DoHeadBob_m284 (CurveControlledBob_t86 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
