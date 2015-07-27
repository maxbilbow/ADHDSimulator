#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Type[]
struct TypeU5BU5D_t707;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t1660  : public Object_t
{
};
struct BinaryCommon_t1660_StaticFields{
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t625* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t707* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t625* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;
};
