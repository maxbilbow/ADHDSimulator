#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.TypeInitializationException
struct  TypeInitializationException_t1871  : public SystemException_t1256
{
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;
};
