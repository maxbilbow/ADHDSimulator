#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t107;
// UnityEngine.Rigidbody
struct Rigidbody_t108;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityStandardAssets.Utility.ObjectResetter
struct  ObjectResetter_t105  : public MonoBehaviour_t32
{
	// UnityEngine.Vector3 UnityStandardAssets.Utility.ObjectResetter::originalPosition
	Vector3_t42  ___originalPosition_2;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.ObjectResetter::originalRotation
	Quaternion_t106  ___originalRotation_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.Utility.ObjectResetter::originalStructure
	List_1_t107 * ___originalStructure_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Utility.ObjectResetter::Rigidbody
	Rigidbody_t108 * ___Rigidbody_5;
};
