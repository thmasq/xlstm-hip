#pragma once

#include "../../config/mlstm_config.hpp"
#include "../../core/tensor.hpp"

namespace xlstm {

class MLSTMLayer {
public:
    explicit MLSTMLayer(const MLSTMLayerConfig& config);
    ~MLSTMLayer();
    
    Tensor forward(const Tensor& x);
    void reset_parameters();
    
private:
    class Impl;
    std::unique_ptr<Impl> impl_;
};

} // namespace xlstm
