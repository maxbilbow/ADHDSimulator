#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<RMX.EventListener>
struct List_1_t29;
// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>
struct Dictionary_2_t30;
// System.Object
#include "mscorlib_System_Object.h"
// RMX.NotificationCenter
struct  NotificationCenter_t28  : public Object_t
{
};
struct NotificationCenter_t28_StaticFields{
	// System.Collections.Generic.List`1<RMX.EventListener> RMX.NotificationCenter::Listeners
	List_1_t29 * ___Listeners_0;
	// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus> RMX.NotificationCenter::Events
	Dictionary_2_t30 * ___Events_1;
};
