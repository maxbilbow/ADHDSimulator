#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t1221;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1213;

// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern "C" void Assertion__ctor_m5965 (Assertion_t1221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C" Expression_t1213 * Assertion_get_TrueExpression_m5966 (Assertion_t1221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_TrueExpression_m5967 (Assertion_t1221 * __this, Expression_t1213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C" Expression_t1213 * Assertion_get_FalseExpression_m5968 (Assertion_t1221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_FalseExpression_m5969 (Assertion_t1221 * __this, Expression_t1213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void Assertion_GetWidth_m5970 (Assertion_t1221 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
