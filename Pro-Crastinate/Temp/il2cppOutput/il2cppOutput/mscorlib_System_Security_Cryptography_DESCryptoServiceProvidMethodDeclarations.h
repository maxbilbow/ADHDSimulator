#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1701;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t902;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m9575 (DESCryptoServiceProvider_t1701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m9576 (DESCryptoServiceProvider_t1701 * __this, ByteU5BU5D_t625* ___rgbKey, ByteU5BU5D_t625* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m9577 (DESCryptoServiceProvider_t1701 * __this, ByteU5BU5D_t625* ___rgbKey, ByteU5BU5D_t625* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m9578 (DESCryptoServiceProvider_t1701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m9579 (DESCryptoServiceProvider_t1701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
