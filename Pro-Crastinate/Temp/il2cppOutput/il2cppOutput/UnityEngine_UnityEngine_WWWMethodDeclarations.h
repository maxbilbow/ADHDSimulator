#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t614;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t789;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t17;
// System.Byte[]
struct ByteU5BU5D_t616;
// UnityEngine.WWWForm
struct WWWForm_t617;
// System.String[]
struct StringU5BU5D_t31;

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m3186 (WWW_t614 * __this, String_t* ___url, WWWForm_t617 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m3187 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m3188 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m3189 (WWW_t614 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m3190 (WWW_t614 * __this, String_t* ___url, ByteU5BU5D_t616* ___postData, StringU5BU5D_t31* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t789 * WWW_get_responseHeaders_m3191 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m3192 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m3193 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t17 * WWW_get_DefaultEncoding_m3194 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t17 * WWW_GetTextEncoder_m3195 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t616* WWW_get_bytes_m3196 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m3197 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m3198 (WWW_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t31* WWW_FlattenedHeadersFrom_m3199 (Object_t * __this /* static, unused */, Dictionary_2_t789 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t789 * WWW_ParseHTTPHeaderString_m3200 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
