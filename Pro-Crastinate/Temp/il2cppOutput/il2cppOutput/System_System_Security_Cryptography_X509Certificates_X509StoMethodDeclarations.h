#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1152;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1146;
// Mono.Security.X509.X509Stores
struct X509Stores_t958;
// Mono.Security.X509.X509Store
struct X509Store_t956;
// System.Security.Cryptography.X509Certificates.StoreName
#include "System_System_Security_Cryptography_X509Certificates_StoreNa.h"
// System.Security.Cryptography.X509Certificates.StoreLocation
#include "System_System_Security_Cryptography_X509Certificates_StoreLo.h"
// System.Security.Cryptography.X509Certificates.OpenFlags
#include "System_System_Security_Cryptography_X509Certificates_OpenFla.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C" void X509Store__ctor_m5596 (X509Store_t1152 * __this, int32_t ___storeName, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C" X509Certificate2Collection_t1146 * X509Store_get_Certificates_m5597 (X509Store_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
extern "C" X509Stores_t958 * X509Store_get_Factory_m5598 (X509Store_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
extern "C" X509Store_t956 * X509Store_get_Store_m5599 (X509Store_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C" void X509Store_Close_m5600 (X509Store_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C" void X509Store_Open_m5601 (X509Store_t1152 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
