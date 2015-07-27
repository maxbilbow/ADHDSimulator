#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t33;
// System.Collections.Generic.List`1<RMX.KeyValueObserver>
struct List_1_t34;
// System.String[]
struct StringU5BU5D_t35;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RMX.RMXObject
struct  RMXObject_t31  : public MonoBehaviour_t32
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> RMX.RMXObject::values
	Dictionary_2_t33 * ___values_2;
	// System.Collections.Generic.List`1<RMX.KeyValueObserver> RMX.RMXObject::observers
	List_1_t34 * ___observers_3;
	// System.Boolean RMX.RMXObject::_isListening
	bool ____isListening_4;
};
struct RMXObject_t31_StaticFields{
	// System.String[] RMX.RMXObject::ListenerMethods
	StringU5BU5D_t35* ___ListenerMethods_5;
};
