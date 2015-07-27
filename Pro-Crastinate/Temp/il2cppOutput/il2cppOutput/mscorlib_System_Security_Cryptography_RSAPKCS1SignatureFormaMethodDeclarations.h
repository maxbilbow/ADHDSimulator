#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t1715;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1038;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
extern "C" void RSAPKCS1SignatureFormatter__ctor_m9739 (RSAPKCS1SignatureFormatter_t1715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t625* RSAPKCS1SignatureFormatter_CreateSignature_m9740 (RSAPKCS1SignatureFormatter_t1715 * __this, ByteU5BU5D_t625* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m9741 (RSAPKCS1SignatureFormatter_t1715 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureFormatter_SetKey_m9742 (RSAPKCS1SignatureFormatter_t1715 * __this, AsymmetricAlgorithm_t1038 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
