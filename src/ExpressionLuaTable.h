/* 
 * Puppeteer - A Motion Capture Mapping Tool
 * Copyright (c) 2013-2016 Martin Felis <martin.felis@iwr.uni-heidelberg.de>.
 * All rights reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE* 
 */

#ifndef MARKER_MODEL_LUA_EXPRESSIONS
#define MARKER_MODEL_LUA_EXPRESSIONS

#include <rbdl/rbdl_math.h>
#include <rbdl/addons/luamodel/luatables.h>

using namespace std;

struct LuaParameterExpression {
	string operation;
	vector<LuaParameterExpression> parameters;
	string name;
	double value;

	string serialize(int level);
	string serialize();
	double evaluate();
};

LuaTable luaTableFromFileWithExpressions (const char* _filename);
std::string serializeLuaTableWithExpressions(LuaTable table);
std::string serializeOrderedLuaTableWithExpressions(LuaTable table);

/* MARKER_MODEL_LUA_EXPRESSIONS */
#endif
