#pragma once

#include "../core/tensor.hpp"

namespace xlstm {

class Linear {
public:
    Linear(int in_features, int out_features, bool bias = true);
    ~Linear();
    
    Tensor forward(const Tensor& input);
    void reset_parameters();
    
private:
    class Impl;
    std::unique_ptr<Impl> impl_;
};

} // namespace xlstm
