#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t928;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t877;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t1073  : public AsymmetricKeyExchangeFormatter_t1671
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t928 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t877 * ___random_1;
};
