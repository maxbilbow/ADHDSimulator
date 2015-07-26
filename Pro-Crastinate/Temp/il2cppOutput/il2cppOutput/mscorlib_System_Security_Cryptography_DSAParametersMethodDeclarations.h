#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1038;
struct DSAParameters_t1038_marshaled;

void DSAParameters_t1038_marshal(const DSAParameters_t1038& unmarshaled, DSAParameters_t1038_marshaled& marshaled);
void DSAParameters_t1038_marshal_back(const DSAParameters_t1038_marshaled& marshaled, DSAParameters_t1038& unmarshaled);
void DSAParameters_t1038_marshal_cleanup(DSAParameters_t1038_marshaled& marshaled);
