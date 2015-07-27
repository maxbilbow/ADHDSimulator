#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t622;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t623;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.String[]
struct StringU5BU5D_t35;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t798;
// System.Text.Encoding
struct Encoding_t20;

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m3209 (WWW_t622 * __this, String_t* ___url, WWWForm_t623 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m3210 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m3211 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m3212 (WWW_t622 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m3213 (WWW_t622 * __this, String_t* ___url, ByteU5BU5D_t625* ___postData, StringU5BU5D_t35* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t798 * WWW_get_responseHeaders_m3214 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m3215 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m3216 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t20 * WWW_get_DefaultEncoding_m3217 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t20 * WWW_GetTextEncoder_m3218 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t625* WWW_get_bytes_m3219 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m3220 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m3221 (WWW_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t35* WWW_FlattenedHeadersFrom_m3222 (Object_t * __this /* static, unused */, Dictionary_2_t798 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t798 * WWW_ParseHTTPHeaderString_m3223 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
