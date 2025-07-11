#pragma once

#include "../config/mlstm_config.hpp"
#include "../core/tensor.hpp"

namespace xlstm {

struct XLSTMModelConfig {
    int vocab_size = -1;
    int embedding_dim = 512;
    int num_blocks = 6;
    int num_heads = 8;
    bool tie_weights = false;
    double dropout = 0.1;
};

class XLSTMModel {
public:
    explicit XLSTMModel(const XLSTMModelConfig& config);
    ~XLSTMModel();
    
    Tensor forward(const Tensor& input);
    void train();
    void eval();
    
private:
    class Impl;
    std::unique_ptr<Impl> impl_;
};

} // namespace xlstm
