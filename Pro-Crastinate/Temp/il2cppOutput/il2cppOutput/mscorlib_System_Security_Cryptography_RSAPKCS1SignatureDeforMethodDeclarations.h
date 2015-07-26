﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1052;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1026;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m9661 (RSAPKCS1SignatureDeformatter_t1052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m5127 (RSAPKCS1SignatureDeformatter_t1052 * __this, AsymmetricAlgorithm_t1026 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m9662 (RSAPKCS1SignatureDeformatter_t1052 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m9663 (RSAPKCS1SignatureDeformatter_t1052 * __this, AsymmetricAlgorithm_t1026 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m9664 (RSAPKCS1SignatureDeformatter_t1052 * __this, ByteU5BU5D_t616* ___rgbHash, ByteU5BU5D_t616* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
