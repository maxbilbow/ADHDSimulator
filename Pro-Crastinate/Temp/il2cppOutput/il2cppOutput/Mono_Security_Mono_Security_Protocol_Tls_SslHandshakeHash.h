﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t919;
// System.Byte[]
struct ByteU5BU5D_t616;
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
struct  SslHandshakeHash_t1003  : public HashAlgorithm_t919
{
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.SslHandshakeHash::md5
	HashAlgorithm_t919 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.SslHandshakeHash::sha
	HashAlgorithm_t919 * ___sha_5;
	// System.Boolean Mono.Security.Protocol.Tls.SslHandshakeHash::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::secret
	ByteU5BU5D_t616* ___secret_7;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::innerPadMD5
	ByteU5BU5D_t616* ___innerPadMD5_8;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::outerPadMD5
	ByteU5BU5D_t616* ___outerPadMD5_9;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::innerPadSHA
	ByteU5BU5D_t616* ___innerPadSHA_10;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::outerPadSHA
	ByteU5BU5D_t616* ___outerPadSHA_11;
};
