﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1037;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2017;
// System.String[]
struct StringU5BU5D_t35;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t292;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2046;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AudioSource,System.Collections.DictionaryEntry>
struct Transform_1_t2144;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
struct  Dictionary_2_t249  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::table
	Int32U5BU5D_t1037* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::linkSlots
	LinkU5BU5D_t2017* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::keySlots
	StringU5BU5D_t35* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::valueSlots
	AudioSourceU5BU5D_t292* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::serialization_info
	SerializationInfo_t818 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t249_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::<>f__am$cacheB
	Transform_1_t2144 * ___U3CU3Ef__amU24cacheB_15;
};