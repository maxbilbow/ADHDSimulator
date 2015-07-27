#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.HMAC
struct HMAC_t968;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
extern "C" void HMAC__ctor_m4592 (HMAC_t968 * __this, String_t* ___hashName, ByteU5BU5D_t625* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t625* HMAC_get_Key_m4593 (HMAC_t968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m4594 (HMAC_t968 * __this, ByteU5BU5D_t625* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m4595 (HMAC_t968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t625* HMAC_HashFinal_m4596 (HMAC_t968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m4597 (HMAC_t968 * __this, ByteU5BU5D_t625* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
extern "C" void HMAC_initializePad_m4598 (HMAC_t968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
