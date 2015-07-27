#pragma once
#include <stdint.h>
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t931;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// Mono.Security.Cryptography.HMAC
struct  HMAC_t968  : public KeyedHashAlgorithm_t969
{
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t931 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t625* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t625* ___outerPad_8;
};
