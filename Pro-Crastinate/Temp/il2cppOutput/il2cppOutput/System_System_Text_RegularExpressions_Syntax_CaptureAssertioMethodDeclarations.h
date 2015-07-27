#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t1222;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1224;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1217;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1249;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1223;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m5971 (CaptureAssertion_t1222 * __this, Literal_t1224 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m5972 (CaptureAssertion_t1222 * __this, CapturingGroup_t1217 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m5973 (CaptureAssertion_t1222 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m5974 (CaptureAssertion_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t1223 * CaptureAssertion_get_Alternate_m5975 (CaptureAssertion_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
