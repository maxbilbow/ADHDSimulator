#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.SafeBag
struct SafeBag_t929;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t908;

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" void SafeBag__ctor_m4394 (SafeBag_t929 * __this, String_t* ___bagOID, ASN1_t908 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" String_t* SafeBag_get_BagOID_m4395 (SafeBag_t929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" ASN1_t908 * SafeBag_get_ASN1_m4396 (SafeBag_t929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
