#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t967;
// Mono.Security.X509.X509Extension
struct X509Extension_t955;
// System.String[]
struct StringU5BU5D_t35;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void SubjectAltNameExtension__ctor_m4587 (SubjectAltNameExtension_t967 * __this, X509Extension_t955 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern "C" void SubjectAltNameExtension_Decode_m4588 (SubjectAltNameExtension_t967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C" StringU5BU5D_t35* SubjectAltNameExtension_get_DNSNames_m4589 (SubjectAltNameExtension_t967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C" StringU5BU5D_t35* SubjectAltNameExtension_get_IPAddresses_m4590 (SubjectAltNameExtension_t967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C" String_t* SubjectAltNameExtension_ToString_m4591 (SubjectAltNameExtension_t967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
