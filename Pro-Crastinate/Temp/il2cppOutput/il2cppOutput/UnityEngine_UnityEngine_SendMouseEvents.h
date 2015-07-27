#pragma once
#include <stdint.h>
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t754;
// UnityEngine.Camera[]
struct CameraU5BU5D_t755;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t753  : public Object_t
{
};
struct SendMouseEvents_t753_StaticFields{
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t754* ___m_LastHit_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t754* ___m_MouseDownHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t754* ___m_CurrentHit_5;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t755* ___m_Cameras_6;
};
