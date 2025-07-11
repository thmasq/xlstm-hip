#pragma once

#include "../../config/mlstm_config.hpp"
#include "../../core/tensor.hpp"

namespace xlstm {

class MLSTMCell {
public:
    explicit MLSTMCell(const MLSTMCellConfig& config);
    ~MLSTMCell();
    
    Tensor forward(const Tensor& q, const Tensor& k, const Tensor& v);
    void reset_parameters();
    
private:
    class Impl;
    std::unique_ptr<Impl> impl_;
};

} // namespace xlstm
