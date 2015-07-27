#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t920;
// System.Collections.Hashtable
struct Hashtable_t985;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t1690  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t920 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t920 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t920 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t920 * ___onDeserializedList_3;
};
struct SerializationCallbacks_t1690_StaticFields{
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t985 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	Object_t * ___cache_lock_5;
};
