#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t977;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t964;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C" void SecurityParameters__ctor_m4804 (SecurityParameters_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C" CipherSuite_t964 * SecurityParameters_get_Cipher_m4805 (SecurityParameters_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C" void SecurityParameters_set_Cipher_m4806 (SecurityParameters_t977 * __this, CipherSuite_t964 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C" ByteU5BU5D_t616* SecurityParameters_get_ClientWriteMAC_m4807 (SecurityParameters_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ClientWriteMAC_m4808 (SecurityParameters_t977 * __this, ByteU5BU5D_t616* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C" ByteU5BU5D_t616* SecurityParameters_get_ServerWriteMAC_m4809 (SecurityParameters_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ServerWriteMAC_m4810 (SecurityParameters_t977 * __this, ByteU5BU5D_t616* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C" void SecurityParameters_Clear_m4811 (SecurityParameters_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
