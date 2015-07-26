#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1025;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1974;
// Procrastinate.UserData[]
struct UserDataU5BU5D_t2064;
// System.String[]
struct StringU5BU5D_t31;
// System.Collections.Generic.IEqualityComparer`1<Procrastinate.UserData>
struct IEqualityComparer_1_t2065;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Collections.Generic.Dictionary`2/Transform`1<Procrastinate.UserData,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t2079;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>
struct  Dictionary_2_t223  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::table
	Int32U5BU5D_t1025* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::linkSlots
	LinkU5BU5D_t1974* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::keySlots
	UserDataU5BU5D_t2064* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::valueSlots
	StringU5BU5D_t31* ___valueSlots_7;
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
	SerializationInfo_t809 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t223_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Procrastinate.UserData,System.String>::<>f__am$cacheB
	Transform_1_t2079 * ___U3CU3Ef__amU24cacheB_15;
};
