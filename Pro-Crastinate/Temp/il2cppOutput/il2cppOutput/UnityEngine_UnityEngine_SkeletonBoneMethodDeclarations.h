﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t657;
struct SkeletonBone_t657_marshaled;

void SkeletonBone_t657_marshal(const SkeletonBone_t657& unmarshaled, SkeletonBone_t657_marshaled& marshaled);
void SkeletonBone_t657_marshal_back(const SkeletonBone_t657_marshaled& marshaled, SkeletonBone_t657& unmarshaled);
void SkeletonBone_t657_marshal_cleanup(SkeletonBone_t657_marshaled& marshaled);
