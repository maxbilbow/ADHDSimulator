#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t907;
// System.Collections.Hashtable
struct Hashtable_t972;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t1563  : public Object_t
{
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t907 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t972 * ___properties_2;
};
