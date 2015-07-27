#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.TypeLoadException
struct  TypeLoadException_t1825  : public SystemException_t1256
{
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;
};
