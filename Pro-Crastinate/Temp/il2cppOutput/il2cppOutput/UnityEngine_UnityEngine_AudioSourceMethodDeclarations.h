#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t291;

// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m1067 (AudioSource_t291 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m1064 (AudioSource_t291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
extern "C" void AudioSource_Pause_m1065 (AudioSource_t291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_Pause_m3441 (Object_t * __this /* static, unused */, AudioSource_t291 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::UnPause()
extern "C" void AudioSource_UnPause_m1068 (AudioSource_t291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_UnPause_m3442 (Object_t * __this /* static, unused */, AudioSource_t291 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m1066 (AudioSource_t291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
