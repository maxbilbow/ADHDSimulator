#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t14;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t137;
// UnityEngine.TextAsset
struct TextAsset_t138;
// System.IO.StreamReader
struct StreamReader_t139;
// System.Text.Encoding
struct Encoding_t20;

// System.Void RMX.CsvReader::.cctor()
extern "C" void CsvReader__cctor_m33 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.CsvReader::ToString(System.Collections.Generic.List`1<System.String>)
extern "C" String_t* CsvReader_ToString_m34 (Object_t * __this /* static, unused */, List_1_t14 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Parse(System.String)
extern "C" List_1_t137 * CsvReader_Parse_m35 (Object_t * __this /* static, unused */, String_t* ___csvString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(UnityEngine.TextAsset)
extern "C" List_1_t137 * CsvReader_Read_m36 (Object_t * __this /* static, unused */, TextAsset_t138 * ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(System.String)
extern "C" List_1_t137 * CsvReader_Read_m37 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> RMX.CsvReader::ReadLine(System.IO.StreamReader)
extern "C" List_1_t14 * CsvReader_ReadLine_m38 (Object_t * __this /* static, unused */, StreamReader_t139 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> RMX.CsvReader::Read(System.String,System.Text.Encoding)
extern "C" List_1_t137 * CsvReader_Read_m39 (Object_t * __this /* static, unused */, String_t* ___path, Encoding_t20 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> RMX.CsvReader::ParseLine(System.String)
extern "C" List_1_t14 * CsvReader_ParseLine_m40 (Object_t * __this /* static, unused */, String_t* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RMX.CsvReader::<ToString>m__1(System.String)
extern "C" String_t* CsvReader_U3CToStringU3Em__1_m41 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
