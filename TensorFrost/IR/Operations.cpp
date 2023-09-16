#include "Operations.h"

namespace TensorFrost {
vector<pair<string, vector<Operation>>> operations = {
    {"operators",
     {Operation("add", {{Types({dtype(F32), dtype(F32)}), dtype(F32)},
                        {Types({dtype(U32), dtype(U32)}), dtype(U32)},
                        {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("sub", {{Types({dtype(F32), dtype(F32)}), dtype(F32)},
                        {Types({dtype(U32), dtype(U32)}), dtype(U32)},
                        {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("mul", {{Types({dtype(F32), dtype(F32)}), dtype(F32)},
                        {Types({dtype(U32), dtype(U32)}), dtype(U32)},
                        {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("div", {{Types({dtype(F32), dtype(F32)}), dtype(F32)},
                        {Types({dtype(U32), dtype(U32)}), dtype(U32)},
                        {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("mod", {{Types({dtype(U32), dtype(U32)}), dtype(U32)},
                        {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("lshift", {{Types({dtype(U32), dtype(U32)}), dtype(U32)},
                           {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("rshift", {{Types({dtype(U32), dtype(U32)}), dtype(U32)},
                           {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("and", {{Types({dtype(U32), dtype(U32)}), dtype(U32)},
                        {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("or", {{Types({dtype(U32), dtype(U32)}), dtype(U32)},
                       {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("xor", {{Types({dtype(U32), dtype(U32)}), dtype(U32)},
                        {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
      Operation("eq", {{Types({dtype(F32), dtype(F32)}), dtype(B1)},
                       {Types({dtype(U32), dtype(U32)}), dtype(B1)},
                       {Types({dtype(I32), dtype(I32)}), dtype(B1)}}),
      Operation("neq", {{Types({dtype(F32), dtype(F32)}), dtype(B1)},
                        {Types({dtype(U32), dtype(U32)}), dtype(B1)},
                        {Types({dtype(I32), dtype(I32)}), dtype(B1)}}),
      Operation("lt", {{Types({dtype(F32), dtype(F32)}), dtype(B1)},
                       {Types({dtype(U32), dtype(U32)}), dtype(B1)},
                       {Types({dtype(I32), dtype(I32)}), dtype(B1)}}),
      Operation("lte", {{Types({dtype(F32), dtype(F32)}), dtype(B1)},
                        {Types({dtype(U32), dtype(U32)}), dtype(B1)},
                        {Types({dtype(I32), dtype(I32)}), dtype(B1)}}),
      Operation("gt", {{Types({dtype(F32), dtype(F32)}), dtype(B1)},
                       {Types({dtype(U32), dtype(U32)}), dtype(B1)},
                       {Types({dtype(I32), dtype(I32)}), dtype(B1)}}),
      Operation("gte", {{Types({dtype(F32), dtype(F32)}), dtype(B1)},
                        {Types({dtype(U32), dtype(U32)}), dtype(B1)},
                        {Types({dtype(I32), dtype(I32)}), dtype(B1)}})}},
    {"unary",
     {
         Operation("uint", {{Types({dtype(F32)}), dtype(U32)},
                            {Types({dtype(U32)}), dtype(U32)},
                            {Types({dtype(I32)}), dtype(U32)}}),
         Operation("int", {{Types({dtype(F32)}), dtype(I32)},
                           {Types({dtype(U32)}), dtype(I32)},
                           {Types({dtype(I32)}), dtype(I32)}}),
         Operation("float", {{Types({dtype(F32)}), dtype(F32)},
                             {Types({dtype(U32)}), dtype(F32)},
                             {Types({dtype(I32)}), dtype(F32)}}),
         Operation("min", {{Types({dtype(F32), dtype(F32)}), dtype(F32)},
                           {Types({dtype(U32), dtype(U32)}), dtype(U32)},
                           {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
         Operation("max", {{Types({dtype(F32), dtype(F32)}), dtype(F32)},
                           {Types({dtype(U32), dtype(U32)}), dtype(U32)},
                           {Types({dtype(I32), dtype(I32)}), dtype(I32)}}),
         Operation("abs", {{Types({dtype(F32)}), dtype(F32)},
                           {Types({dtype(U32)}), dtype(U32)},
                           {Types({dtype(I32)}), dtype(I32)}}),
         Operation("sign", {{Types({dtype(F32)}), dtype(F32)},
                            {Types({dtype(U32)}), dtype(U32)},
                            {Types({dtype(I32)}), dtype(I32)}}),
         Operation("ceil", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("floor", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("round", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("frac", {{Types({dtype(F32)}), dtype(F32)}}),
     }},
    {"unary math",
     {
         Operation("exp", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("exp2", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("log", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("log2", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("sqrt", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("rsqrt", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("rcp", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("sin", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("cos", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("tan", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("asin", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("acos", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("atan", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("sinh", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("cosh", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("tanh", {{Types({dtype(F32)}), dtype(F32)}}),
         Operation("pcg", {{Types({dtype(U32)}), dtype(U32)}}),
         Operation("pcgf", {{Types({dtype(U32)}), dtype(F32)}}),
     }},
    {"binary",
     {
         Operation("pow", {{Types({dtype(F32), dtype(F32)}), dtype(F32)}}),
         Operation("atan2", {{Types({dtype(F32), dtype(F32)}), dtype(F32)}}),
         Operation("mod", {{Types({dtype(F32), dtype(F32)}), dtype(F32)}}),
         Operation("step", {{Types({dtype(F32), dtype(F32)}), dtype(F32)}}),
     }},
    {"ternary",
     {
         Operation("clamp",
                   {{Types({dtype(F32), dtype(F32), dtype(F32)}), dtype(F32)}}),
         Operation("lerp",
                   {{Types({dtype(F32), dtype(F32), dtype(F32)}), dtype(F32)}}),
         Operation("fma",
                   {{Types({dtype(F32), dtype(F32), dtype(F32)}), dtype(F32)}}),
         Operation("ternary",
                   {{Types({dtype(B1), dtype(F32), dtype(F32)}), dtype(F32)},
                    {Types({dtype(B1), dtype(U32), dtype(U32)}), dtype(U32)},
                    {Types({dtype(B1), dtype(I32), dtype(I32)}), dtype(I32)}}),
     }},
    {"memory",
     {Operation("load", {{Types({dtype(MemoryRef), dtype(U32)}), dtype(F32)},
                         {Types({dtype(MemoryRef), dtype(U32)}), dtype(U32)},
                         {Types({dtype(MemoryRef), dtype(U32)}), dtype(I32)}}),
      Operation(
          "store",
          {{Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)}}),
      Operation("const_memory", {{Types({}), dtype(MemoryRef)}})}},
    {"atomic",
     {Operation(
          "InterlockedAdd",
          {{Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(I32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(F32), dtype(U32)}), dtype(None)}}),
      Operation(
          "InterlockedMin",
          {{Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(I32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(F32), dtype(U32)}), dtype(None)}}),
      Operation(
          "InterlockedMax",
          {{Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(I32), dtype(U32)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(F32), dtype(U32)}), dtype(None)}}),
      Operation(
          "InterlockedAnd",
          {{Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)}}),
      Operation(
          "InterlockedOr",
          {{Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)}}),
      Operation(
          "InterlockedXor",
          {{Types({dtype(MemoryRef), dtype(U32), dtype(U32)}), dtype(None)}})}},
    {"variables",
     {Operation("variable", {{Types({}), dtype(U32)},
                             {Types({}), dtype(I32)},
                             {Types({}), dtype(F32)}}),
      Operation("const", {{Types({}), dtype(U32)},
                          {Types({}), dtype(I32)},
                          {Types({}), dtype(F32)}}),
      Operation("dim_id", {{Types({}), dtype(U32)}}),
      Operation("thread_id", {{Types({}), dtype(U32)}}),
      Operation("group_thread_id", {{Types({}), dtype(U32)}}),
      Operation("group_id", {{Types({}), dtype(U32)}}),
      Operation("group_count", {{Types({}), dtype(U32)}}),
      Operation("thread_count", {{Types({}), dtype(U32)}})}},
    {"control flow",
     {Operation("loop",
                {{Types({dtype(U32), dtype(U32), dtype(U32)}), dtype(None)}}),
      Operation("if", {{Types({dtype(B1)}), dtype(None)}}),
      Operation("break", {{Types({}), dtype(None)}}),
      Operation("continue", {{Types({}), dtype(None)}}),
      Operation("return", {{Types({}), dtype(None)}}),
      Operation("GroupMemoryBarrierWithGroupSync",
                {{Types({}), dtype(None)}})}}};

DataTypeList Types(initializer_list<DataType> elements) {
	return DataTypeList(elements);
}

Operation FindOperation(const string& name) {
	for (auto& category : operations) {
		for (auto& op : category.second) {
			if (op.GetName() == name) {
				return op;
			}
		}
	}
	return Operation("dtype(none)", {});
}
}  // namespace TensorFrost
