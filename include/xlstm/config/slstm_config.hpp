#pragma once

#include "config_base.hpp"

namespace xlstm {

struct SLSTMCellConfig : public ConfigBase {
    int hidden_size = -1;
    int num_heads = 4;
    int num_states = 4;
    std::string backend = "hip";
    
    void validate() const override;
};

struct SLSTMLayerConfig : public ConfigBase {
    int embedding_dim = -1;
    int num_heads = 4;
    int conv1d_kernel_size = 4;
    bool group_norm_weight = true;
    double dropout = 0.0;
    
    void validate() const override;
};

} // namespace xlstm
