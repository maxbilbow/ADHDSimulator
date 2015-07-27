#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t624;
// System.Collections.Generic.List`1<System.String>
struct List_1_t14;
// System.Byte[]
struct ByteU5BU5D_t625;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.WWWForm
struct  WWWForm_t623  : public Object_t
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t624 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t14 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t14 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t14 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t625* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};
