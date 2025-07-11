#pragma once

#include <hip/hip_runtime.h>
#include <stdexcept>
#include <string>

#define XLSTM_HIP_CHECK(call) \
    do { \
        hipError_t error = call; \
        if (error != hipSuccess) { \
            throw std::runtime_error("HIP error: " + std::string(hipGetErrorString(error))); \
        } \
    } while(0)

namespace xlstm {
namespace hip {

constexpr int MAX_THREADS_PER_BLOCK = 1024;
constexpr int WARP_SIZE = 64;

#define CEIL_DIV(a, b) (((a) + (b) - 1) / (b))

} // namespace hip
} // namespace xlstm
