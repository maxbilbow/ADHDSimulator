#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Object
struct Object_t;

// System.String RMX.SavedData::String(System.String)
extern "C" String_t* SavedData_String_m99 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 RMX.SavedData::Long(System.String)
extern "C" int64_t SavedData_Long_m100 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double RMX.SavedData::Double(System.String)
extern "C" double SavedData_Double_m101 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object RMX.SavedData::Bool(System.String)
extern "C" Object_t * SavedData_Bool_m102 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.SavedData::Set(System.Object,System.Boolean)
extern "C" void SavedData_Set_m103 (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RMX.SavedData::Int(System.String)
extern "C" int32_t SavedData_Int_m104 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.SavedData::Set(System.Object,System.Int32)
extern "C" void SavedData_Set_m105 (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RMX.SavedData::Float(System.String)
extern "C" float SavedData_Float_m106 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RMX.SavedData::Set(System.Object,System.Single)
extern "C" void SavedData_Set_m107 (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
