﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t944;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t931;
// System.Collections.ArrayList
struct ArrayList_t907;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t616;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t936;
// Mono.Security.X509.X509Crl
struct X509Crl_t942;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m4522 (X509Store_t944 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t931 * X509Store_get_Certificates_m4523 (X509Store_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t907 * X509Store_get_Crls_m4524 (X509Store_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t616* X509Store_Load_m4525 (X509Store_t944 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t936 * X509Store_LoadCertificate_m4526 (X509Store_t944 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t942 * X509Store_LoadCrl_m4527 (X509Store_t944 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m4528 (X509Store_t944 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t931 * X509Store_BuildCertificatesCollection_m4529 (X509Store_t944 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t907 * X509Store_BuildCrlsCollection_m4530 (X509Store_t944 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
