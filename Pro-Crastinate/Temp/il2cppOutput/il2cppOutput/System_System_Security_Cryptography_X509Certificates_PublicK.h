#pragma once
#include <stdint.h>
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1038;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1137;
// System.Security.Cryptography.Oid
struct Oid_t1138;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t606;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t1136  : public Object_t
{
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t1038 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t1137 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t1137 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t1138 * ____oid_3;
};
struct PublicKey_t1136_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t606 * ___U3CU3Ef__switchU24map9_4;
};
