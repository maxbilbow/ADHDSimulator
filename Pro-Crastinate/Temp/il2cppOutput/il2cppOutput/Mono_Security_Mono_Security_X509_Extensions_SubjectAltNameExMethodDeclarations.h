#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t955;
// System.String[]
struct StringU5BU5D_t31;
// Mono.Security.X509.X509Extension
struct X509Extension_t943;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void SubjectAltNameExtension__ctor_m4562 (SubjectAltNameExtension_t955 * __this, X509Extension_t943 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern "C" void SubjectAltNameExtension_Decode_m4563 (SubjectAltNameExtension_t955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C" StringU5BU5D_t31* SubjectAltNameExtension_get_DNSNames_m4564 (SubjectAltNameExtension_t955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C" StringU5BU5D_t31* SubjectAltNameExtension_get_IPAddresses_m4565 (SubjectAltNameExtension_t955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C" String_t* SubjectAltNameExtension_ToString_m4566 (SubjectAltNameExtension_t955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
