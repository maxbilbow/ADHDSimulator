#pragma once
#include <stdint.h>
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t631;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Camera
struct  Camera_t85  : public Behaviour_t189
{
};
struct Camera_t85_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t631 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t631 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t631 * ___onPostRender_4;
};
