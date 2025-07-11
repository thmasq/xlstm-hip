#pragma once

#include <vector>
#include <memory>
#include "../config/config_base.hpp"

namespace xlstm {

class TensorImpl;

class Tensor {
public:
    Tensor();
    Tensor(const std::vector<int64_t>& shape, DType dtype, Device device = Device::GPU);
    ~Tensor();
    
    // Copy/move semantics
    Tensor(const Tensor& other);
    Tensor(Tensor&& other) noexcept;
    Tensor& operator=(const Tensor& other);
    Tensor& operator=(Tensor&& other) noexcept;
    
    // Shape and metadata
    const std::vector<int64_t>& shape() const;
    int64_t numel() const;
    int ndim() const;
    DType dtype() const;
    Device device() const;
    
    // Data access
    void* data_ptr();
    const void* data_ptr() const;
    
    // Operations
    Tensor to(Device device) const;
    Tensor clone() const;
    void copy_(const Tensor& src);
    
    // Static factory methods
    static Tensor zeros(const std::vector<int64_t>& shape, DType dtype = DType::Float32, Device device = Device::GPU);
    static Tensor ones(const std::vector<int64_t>& shape, DType dtype = DType::Float32, Device device = Device::GPU);
    
private:
    std::shared_ptr<TensorImpl> impl_;
};

} // namespace xlstm
