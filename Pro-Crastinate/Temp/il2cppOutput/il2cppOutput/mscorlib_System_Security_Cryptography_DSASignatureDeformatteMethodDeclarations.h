#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1063;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1038;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m9596 (DSASignatureDeformatter_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m5149 (DSASignatureDeformatter_t1063 * __this, AsymmetricAlgorithm_t1038 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m9597 (DSASignatureDeformatter_t1063 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m9598 (DSASignatureDeformatter_t1063 * __this, AsymmetricAlgorithm_t1038 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m9599 (DSASignatureDeformatter_t1063 * __this, ByteU5BU5D_t625* ___rgbHash, ByteU5BU5D_t625* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
