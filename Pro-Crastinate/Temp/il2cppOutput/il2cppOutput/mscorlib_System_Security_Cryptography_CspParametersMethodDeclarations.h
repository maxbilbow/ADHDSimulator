﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CspParameters
struct CspParameters_t1055;
// System.String
struct String_t;
// System.Security.Cryptography.CspProviderFlags
#include "mscorlib_System_Security_Cryptography_CspProviderFlags.h"

// System.Void System.Security.Cryptography.CspParameters::.ctor()
extern "C" void CspParameters__ctor_m5121 (CspParameters_t1055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32)
extern "C" void CspParameters__ctor_m9555 (CspParameters_t1055 * __this, int32_t ___dwTypeIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String)
extern "C" void CspParameters__ctor_m9556 (CspParameters_t1055 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String)
extern "C" void CspParameters__ctor_m9557 (CspParameters_t1055 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, String_t* ___strContainerNameIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::get_Flags()
extern "C" int32_t CspParameters_get_Flags_m9558 (CspParameters_t1055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
extern "C" void CspParameters_set_Flags_m5122 (CspParameters_t1055 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;