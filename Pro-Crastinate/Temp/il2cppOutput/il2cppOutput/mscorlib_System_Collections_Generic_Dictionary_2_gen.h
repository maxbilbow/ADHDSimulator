﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1037;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2017;
// System.Enum[]
struct EnumU5BU5D_t2018;
// RMX.EventStatus[]
struct EventStatusU5BU5D_t2019;
// System.Collections.Generic.IEqualityComparer`1<System.Enum>
struct IEqualityComparer_1_t2021;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Enum,RMX.EventStatus,System.Collections.DictionaryEntry>
struct Transform_1_t2020;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>
struct  Dictionary_2_t30  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::table
	Int32U5BU5D_t1037* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::linkSlots
	LinkU5BU5D_t2017* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::keySlots
	EnumU5BU5D_t2018* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::valueSlots
	EventStatusU5BU5D_t2019* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::serialization_info
	SerializationInfo_t818 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t30_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Enum,RMX.EventStatus>::<>f__am$cacheB
	Transform_1_t2020 * ___U3CU3Ef__amU24cacheB_15;
};