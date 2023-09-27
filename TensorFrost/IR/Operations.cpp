#include "Operations.h"

namespace TensorFrost {
#define dtype(x) DataType::x

vector<pair<string, vector<Operation>>> operations = {
    {"operators",
     {Operation("add", {{Types({dtype(Float), dtype(Float)}), dtype(Float)},
                        {Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("sub", {{Types({dtype(Float), dtype(Float)}), dtype(Float)},
                        {Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("mul", {{Types({dtype(Float), dtype(Float)}), dtype(Float)},
                        {Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("div", {{Types({dtype(Float), dtype(Float)}), dtype(Float)},
                        {Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("mod", {{Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("lshift", {{Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                           {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("rshift", {{Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                           {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("and", {{Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("or", {{Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                       {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("xor", {{Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
      Operation("eq", {{Types({dtype(Float), dtype(Float)}), dtype(Bool)},
                       {Types({dtype(Uint), dtype(Uint)}), dtype(Bool)},
                       {Types({dtype(Int), dtype(Int)}), dtype(Bool)}}),
      Operation("neq", {{Types({dtype(Float), dtype(Float)}), dtype(Bool)},
                        {Types({dtype(Uint), dtype(Uint)}), dtype(Bool)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Bool)}}),
      Operation("lt", {{Types({dtype(Float), dtype(Float)}), dtype(Bool)},
                       {Types({dtype(Uint), dtype(Uint)}), dtype(Bool)},
                       {Types({dtype(Int), dtype(Int)}), dtype(Bool)}}),
      Operation("lte", {{Types({dtype(Float), dtype(Float)}), dtype(Bool)},
                        {Types({dtype(Uint), dtype(Uint)}), dtype(Bool)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Bool)}}),
      Operation("gt", {{Types({dtype(Float), dtype(Float)}), dtype(Bool)},
                       {Types({dtype(Uint), dtype(Uint)}), dtype(Bool)},
                       {Types({dtype(Int), dtype(Int)}), dtype(Bool)}}),
      Operation("gte", {{Types({dtype(Float), dtype(Float)}), dtype(Bool)},
                        {Types({dtype(Uint), dtype(Uint)}), dtype(Bool)},
                        {Types({dtype(Int), dtype(Int)}), dtype(Bool)}})}},
    {"unary",
     {
         Operation("uint", {{Types({dtype(Float)}), dtype(Uint)},
                            {Types({dtype(Uint)}), dtype(Uint)},
                            {Types({dtype(Int)}), dtype(Uint)}}),
         Operation("int", {{Types({dtype(Float)}), dtype(Int)},
                           {Types({dtype(Uint)}), dtype(Int)},
                           {Types({dtype(Int)}), dtype(Int)}}),
         Operation("float", {{Types({dtype(Float)}), dtype(Float)},
                             {Types({dtype(Uint)}), dtype(Float)},
                             {Types({dtype(Int)}), dtype(Float)}}),
         Operation("min", {{Types({dtype(Float), dtype(Float)}), dtype(Float)},
                           {Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                           {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
         Operation("max", {{Types({dtype(Float), dtype(Float)}), dtype(Float)},
                           {Types({dtype(Uint), dtype(Uint)}), dtype(Uint)},
                           {Types({dtype(Int), dtype(Int)}), dtype(Int)}}),
         Operation("abs", {{Types({dtype(Float)}), dtype(Float)},
                           {Types({dtype(Uint)}), dtype(Uint)},
                           {Types({dtype(Int)}), dtype(Int)}}),
         Operation("sign", {{Types({dtype(Float)}), dtype(Float)},
                            {Types({dtype(Uint)}), dtype(Uint)},
                            {Types({dtype(Int)}), dtype(Int)}}),
         Operation("ceil", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("floor", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("round", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("frac", {{Types({dtype(Float)}), dtype(Float)}}),
     }},
    {"unary math",
     {
         Operation("exp", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("exp2", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("log", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("log2", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("sqrt", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("rsqrt", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("rcp", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("sin", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("cos", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("tan", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("asin", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("acos", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("atan", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("sinh", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("cosh", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("tanh", {{Types({dtype(Float)}), dtype(Float)}}),
         Operation("pcg", {{Types({dtype(Uint)}), dtype(Uint)}}),
         Operation("pcgf", {{Types({dtype(Uint)}), dtype(Float)}}),
     }},
    {"binary",
     {
         Operation("pow",
                   {{Types({dtype(Float), dtype(Float)}), dtype(Float)}}),
         Operation("atan2",
                   {{Types({dtype(Float), dtype(Float)}), dtype(Float)}}),
         Operation("mod",
                   {{Types({dtype(Float), dtype(Float)}), dtype(Float)}}),
         Operation("step",
                   {{Types({dtype(Float), dtype(Float)}), dtype(Float)}}),
     }},
    {"ternary",
     {
         Operation("clamp", {{Types({dtype(Float), dtype(Float), dtype(Float)}),
                              dtype(Float)}}),
         Operation("lerp", {{Types({dtype(Float), dtype(Float), dtype(Float)}),
                             dtype(Float)}}),
         Operation("fma", {{Types({dtype(Float), dtype(Float), dtype(Float)}),
                            dtype(Float)}}),
         Operation(
             "ternary",
             {{Types({dtype(Bool), dtype(Float), dtype(Float)}), dtype(Float)},
              {Types({dtype(Bool), dtype(Uint), dtype(Uint)}), dtype(Uint)},
              {Types({dtype(Bool), dtype(Int), dtype(Int)}), dtype(Int)}}),
     }},
    {"memory",
     {Operation("load", {{Types({dtype(MemoryRef)}), dtype(Float)},
                         {Types({dtype(MemoryRef)}), dtype(Uint)},
                         {Types({dtype(MemoryRef)}), dtype(Int)}}),
      Operation("store",
                {{Types({dtype(MemoryRef), dtype(Float)}), dtype(None)},
                 {Types({dtype(MemoryRef), dtype(Uint)}), dtype(None)},
                 {Types({dtype(MemoryRef), dtype(Int)}), dtype(None)}}),
      Operation("const_memory", {{Types({}), dtype(MemoryRef)}}),
      Operation("input_memory", {{Types({}), dtype(MemoryRef)}})}},
    {"atomic",
     {Operation(
          "InterlockedAdd",
          {{Types({dtype(MemoryRef), dtype(Uint), dtype(Uint)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(Int), dtype(Uint)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(Float), dtype(Uint)}),
            dtype(None)}}),
      Operation(
          "InterlockedMin",
          {{Types({dtype(MemoryRef), dtype(Uint), dtype(Uint)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(Int), dtype(Uint)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(Float), dtype(Uint)}),
            dtype(None)}}),
      Operation(
          "InterlockedMax",
          {{Types({dtype(MemoryRef), dtype(Uint), dtype(Uint)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(Int), dtype(Uint)}), dtype(None)},
           {Types({dtype(MemoryRef), dtype(Float), dtype(Uint)}),
            dtype(None)}}),
      Operation(
          "InterlockedAnd",
          {{Types({dtype(MemoryRef), dtype(Uint), dtype(Uint)}), dtype(None)}}),
      Operation(
          "InterlockedOr",
          {{Types({dtype(MemoryRef), dtype(Uint), dtype(Uint)}), dtype(None)}}),
      Operation("InterlockedXor",
                {{Types({dtype(MemoryRef), dtype(Uint), dtype(Uint)}),
                  dtype(None)}})}},
    {"variables",
     {Operation("variable", {{Types({}), dtype(Uint)},
                             {Types({}), dtype(Int)},
                             {Types({}), dtype(Float)}}),
      Operation("const", {{Types({}), dtype(Uint)},
                          {Types({}), dtype(Int)},
                          {Types({}), dtype(Float)}}),
      Operation("dim_id", {{Types({}), dtype(Uint)}}),
      Operation("thread_id", {{Types({}), dtype(Uint)}}),
      Operation("group_thread_id", {{Types({}), dtype(Uint)}}),
      Operation("group_id", {{Types({}), dtype(Uint)}}),
      Operation("group_count", {{Types({}), dtype(Uint)}}),
      Operation("thread_count", {{Types({}), dtype(Uint)}})}},
    {"control flow",
     {Operation("loop", {{Types({dtype(Uint), dtype(Uint), dtype(Uint)}),
                          dtype(None)}}),
      Operation("if", {{Types({dtype(Bool)}), dtype(None)}}),
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