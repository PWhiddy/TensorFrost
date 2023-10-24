#pragma once

#include "Tensor/Tensor.h"

namespace TensorFrost {
    using TensorNames = std::unordered_map<const Tensor*, string>;

    string GetNodeName(const Tensor* tensor, TensorNames& names, bool compact = false);
    string GetOperationListing(const IR&, bool compact = false);
    string GenerateHLSL(const IR&);
}   // namespace TensorFrost