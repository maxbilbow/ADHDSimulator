#pragma once
#include <stdint.h>
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t645;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t646;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.AudioClip
struct  AudioClip_t245  : public Object_t73
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t645 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t646 * ___m_PCMSetPositionCallback_3;
};
