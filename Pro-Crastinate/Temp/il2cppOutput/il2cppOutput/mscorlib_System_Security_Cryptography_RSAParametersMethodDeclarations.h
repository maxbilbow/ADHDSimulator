#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1010;
struct RSAParameters_t1010_marshaled;

void RSAParameters_t1010_marshal(const RSAParameters_t1010& unmarshaled, RSAParameters_t1010_marshaled& marshaled);
void RSAParameters_t1010_marshal_back(const RSAParameters_t1010_marshaled& marshaled, RSAParameters_t1010& unmarshaled);
void RSAParameters_t1010_marshal_cleanup(RSAParameters_t1010_marshaled& marshaled);
