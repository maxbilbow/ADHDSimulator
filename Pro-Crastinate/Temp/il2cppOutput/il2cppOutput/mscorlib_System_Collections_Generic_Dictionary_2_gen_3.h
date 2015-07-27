#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1037;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2017;
// Procrastinate.UserData[]
struct UserDataU5BU5D_t2107;
// System.String[]
struct StringU5BU5D_t35;
// System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>
struct IEqualityComparer_1_t2109;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t818;
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t2108;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>
struct  Dictionary_2_t227  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::table
	Int32U5BU5D_t1037* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::linkSlots
	LinkU5BU5D_t2017* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::keySlots
	UserDataU5BU5D_t2107* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::valueSlots
	StringU5BU5D_t35* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::serialization_info
	SerializationInfo_t818 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t227_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::<>f__am$cacheB
	Transform_1_t2108 * ___U3CU3Ef__amU24cacheB_15;
};
