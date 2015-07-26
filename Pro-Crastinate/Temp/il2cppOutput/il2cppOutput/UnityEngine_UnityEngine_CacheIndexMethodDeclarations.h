#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t619;
struct CacheIndex_t619_marshaled;

void CacheIndex_t619_marshal(const CacheIndex_t619& unmarshaled, CacheIndex_t619_marshaled& marshaled);
void CacheIndex_t619_marshal_back(const CacheIndex_t619_marshaled& marshaled, CacheIndex_t619& unmarshaled);
void CacheIndex_t619_marshal_cleanup(CacheIndex_t619_marshaled& marshaled);
