#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1691;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t890;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m9673 (RijndaelManaged_t1691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m9674 (RijndaelManaged_t1691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m9675 (RijndaelManaged_t1691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m9676 (RijndaelManaged_t1691 * __this, ByteU5BU5D_t616* ___rgbKey, ByteU5BU5D_t616* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m9677 (RijndaelManaged_t1691 * __this, ByteU5BU5D_t616* ___rgbKey, ByteU5BU5D_t616* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
