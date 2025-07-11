#pragma once

#include <cstddef>

namespace xlstm {

class MemoryManager {
public:
    static void* allocate(size_t size, int device_id = -1);
    static void deallocate(void* ptr);
    
    static void copy_h2d(void* dst, const void* src, size_t size);
    static void copy_d2h(void* dst, const void* src, size_t size);
    static void copy_d2d(void* dst, const void* src, size_t size);
    
    static size_t get_memory_usage(int device_id = -1);
};

} // namespace xlstm
