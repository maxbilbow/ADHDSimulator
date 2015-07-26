#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1246;
// System.IO.TextReader
struct TextReader_t1352;
// System.Text.Encoding
struct Encoding_t17;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1245  : public Object_t
{
};
struct Console_t1245_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1246 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1246 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1352 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t17 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t17 * ___outputEncoding_4;
};
