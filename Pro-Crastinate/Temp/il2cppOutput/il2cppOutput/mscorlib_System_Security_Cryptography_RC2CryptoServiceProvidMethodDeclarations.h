#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t1685;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t890;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
extern "C" void RC2CryptoServiceProvider__ctor_m9598 (RC2CryptoServiceProvider_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
extern "C" int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m9599 (RC2CryptoServiceProvider_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RC2CryptoServiceProvider_CreateDecryptor_m9600 (RC2CryptoServiceProvider_t1685 * __this, ByteU5BU5D_t616* ___rgbKey, ByteU5BU5D_t616* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RC2CryptoServiceProvider_CreateEncryptor_m9601 (RC2CryptoServiceProvider_t1685 * __this, ByteU5BU5D_t616* ___rgbKey, ByteU5BU5D_t616* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
extern "C" void RC2CryptoServiceProvider_GenerateIV_m9602 (RC2CryptoServiceProvider_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
extern "C" void RC2CryptoServiceProvider_GenerateKey_m9603 (RC2CryptoServiceProvider_t1685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
