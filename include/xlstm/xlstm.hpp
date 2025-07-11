#pragma once

// Main public interface for xLSTM-HIP library

#include "config/mlstm_config.hpp"
#include "config/slstm_config.hpp"
#include "core/tensor.hpp"
#include "core/device.hpp"
#include "models/xlstm_model.hpp"
#include "models/xlstm_block_stack.hpp"
#include "models/xlstm_large.hpp"

namespace xlstm {

// Version information
constexpr int VERSION_MAJOR = 2;
constexpr int VERSION_MINOR = 0;
constexpr int VERSION_PATCH = 3;

// Initialize library (call once at startup)
void initialize(int device_id = 0);

// Cleanup library resources
void finalize();

} // namespace xlstm
