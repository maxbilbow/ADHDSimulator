#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t85;
// UnityEngine.Camera
struct Camera_t82;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C" void CurveControlledBob__ctor_m277 (CurveControlledBob_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C" void CurveControlledBob_Setup_m278 (CurveControlledBob_t85 * __this, Camera_t82 * ___camera, float ___bobBaseInterval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C" Vector3_t40  CurveControlledBob_DoHeadBob_m279 (CurveControlledBob_t85 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
