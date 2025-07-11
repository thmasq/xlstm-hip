# xLSTM-HIP: Extended LSTM for AMD GPUs

A high-performance C++ implementation of xLSTM models optimized for AMD GPUs using HIP.

## Quick Start

```bash
# Install dependencies (Ubuntu/Debian)
sudo apt install rocm-dev rocblas-dev rocthrust-dev cmake

# Build
chmod +x scripts/build.sh
./scripts/build.sh

# Run tests
cd build && ctest
```

See docs/ for detailed documentation.
