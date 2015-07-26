#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1619;
// System.Collections.ArrayList
struct ArrayList_t907;
// System.Collections.Hashtable
struct Hashtable_t972;

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m9249 (ChannelData_t1619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t907 * ChannelData_get_ServerProviders_m9250 (ChannelData_t1619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t907 * ChannelData_get_ClientProviders_m9251 (ChannelData_t1619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t972 * ChannelData_get_CustomProperties_m9252 (ChannelData_t1619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m9253 (ChannelData_t1619 * __this, ChannelData_t1619 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
