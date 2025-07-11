#!/bin/bash
set -e

BUILD_TYPE="Release"
BUILD_DIR="build"
NUM_JOBS=$(nproc)

while [[ $# -gt 0 ]]; do
    case $1 in
        --build-type)
            BUILD_TYPE="$2"
            shift 2
            ;;
        --build-dir)
            BUILD_DIR="$2"
            shift 2
            ;;
        --jobs|-j)
            NUM_JOBS="$2"
            shift 2
            ;;
        *)
            echo "Unknown option: $1"
            exit 1
            ;;
    esac
done

echo "Building xLSTM-HIP..."
echo "Build Type: $BUILD_TYPE"
echo "Build Directory: $BUILD_DIR"
echo "Jobs: $NUM_JOBS"

mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

cmake -DCMAKE_BUILD_TYPE="$BUILD_TYPE" ..
cmake --build . --parallel "$NUM_JOBS"

echo "Build completed!"
