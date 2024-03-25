#pragma once

#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <unordered_map>
#include <utility>
#include <vector>

#include "IR/KernelGen.h"
#include "TensorMemory.h"

namespace TensorFrost {


class KernelExecutor
{
	int global_kernel_id = 0;
 public:

	KernelExecutor() = default;

	int GenerateKernelID() { 
		return global_kernel_id++; 
	}
};

}  // namespace TensorFrost