#pragma once
#include <stdint.h>
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_t82;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Utility.AutoMoveAndRotate
struct  AutoMoveAndRotate_t83  : public MonoBehaviour_t32
{
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::moveUnitsPerSecond
	Vector3andSpace_t82 * ___moveUnitsPerSecond_2;
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::rotateDegreesPerSecond
	Vector3andSpace_t82 * ___rotateDegreesPerSecond_3;
	// System.Boolean UnityStandardAssets.Utility.AutoMoveAndRotate::ignoreTimescale
	bool ___ignoreTimescale_4;
	// System.Single UnityStandardAssets.Utility.AutoMoveAndRotate::m_LastRealTime
	float ___m_LastRealTime_5;
};
