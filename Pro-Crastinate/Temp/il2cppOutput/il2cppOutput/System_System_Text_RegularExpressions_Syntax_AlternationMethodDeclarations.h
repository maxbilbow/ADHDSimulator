#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Alternation
struct Alternation_t1225;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t1212;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1213;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1249;

// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern "C" void Alternation__ctor_m5983 (Alternation_t1225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C" ExpressionCollection_t1212 * Alternation_get_Alternatives_m5984 (Alternation_t1225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Alternation_AddAlternative_m5985 (Alternation_t1225 * __this, Expression_t1213 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Alternation_Compile_m5986 (Alternation_t1225 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern "C" void Alternation_GetWidth_m5987 (Alternation_t1225 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
