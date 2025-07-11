cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(xlstm-hip
    VERSION 2.0.3
    DESCRIPTION "xLSTM (Extended Long Short-Term Memory) Library for AMD GPUs using HIP"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# Build options
option(XLSTM_BUILD_PYTHON_BINDINGS "Build Python bindings" ON)
option(XLSTM_BUILD_TESTS "Build unit tests" ON)
option(XLSTM_BUILD_BENCHMARKS "Build benchmarks" ON)
option(XLSTM_BUILD_EXAMPLES "Build examples" ON)
option(XLSTM_BUILD_SHARED "Build shared library" ON)

# TODO: Add full CMake configuration as shown in previous artifact
