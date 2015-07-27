#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t989;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t975;
// System.Byte[]
struct ByteU5BU5D_t625;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C" void SecurityParameters__ctor_m4829 (SecurityParameters_t989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C" CipherSuite_t975 * SecurityParameters_get_Cipher_m4830 (SecurityParameters_t989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C" void SecurityParameters_set_Cipher_m4831 (SecurityParameters_t989 * __this, CipherSuite_t975 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C" ByteU5BU5D_t625* SecurityParameters_get_ClientWriteMAC_m4832 (SecurityParameters_t989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ClientWriteMAC_m4833 (SecurityParameters_t989 * __this, ByteU5BU5D_t625* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C" ByteU5BU5D_t625* SecurityParameters_get_ServerWriteMAC_m4834 (SecurityParameters_t989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ServerWriteMAC_m4835 (SecurityParameters_t989 * __this, ByteU5BU5D_t625* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C" void SecurityParameters_Clear_m4836 (SecurityParameters_t989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
