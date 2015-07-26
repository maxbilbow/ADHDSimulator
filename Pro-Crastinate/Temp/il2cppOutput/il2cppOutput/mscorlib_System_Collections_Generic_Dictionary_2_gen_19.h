#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1025;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1974;
// System.Object[]
struct ObjectU5BU5D_t146;
// RMX.EventStatus[]
struct EventStatusU5BU5D_t1976;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1979;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,RMX.EventStatus,System.Collections.DictionaryEntry>
struct Transform_1_t1980;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>
struct  Dictionary_2_t1981  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::table
	Int32U5BU5D_t1025* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::linkSlots
	LinkU5BU5D_t1974* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::keySlots
	ObjectU5BU5D_t146* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::valueSlots
	EventStatusU5BU5D_t1976* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::serialization_info
	SerializationInfo_t809 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1981_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,RMX.EventStatus>::<>f__am$cacheB
	Transform_1_t1980 * ___U3CU3Ef__amU24cacheB_15;
};
