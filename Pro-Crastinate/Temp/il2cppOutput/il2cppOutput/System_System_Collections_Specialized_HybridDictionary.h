#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t985;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1095;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t1094  : public Object_t
{
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t985 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1095 * ___list_2;
};
