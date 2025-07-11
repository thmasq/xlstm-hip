#pragma once

#include "config_base.hpp"
#include <optional>

namespace xlstm {

struct MLSTMCellConfig : public ConfigBase {
    int context_length = -1;
    int embedding_dim = -1;
    int num_heads = -1;
    
    void validate() const override;
};

struct MLSTMLayerConfig : public ConfigBase {
    int conv1d_kernel_size = 4;
    int qkv_proj_blocksize = 4;
    int num_heads = 4;
    double proj_factor = 2.0;
    
    int embedding_dim = -1;
    bool bias = false;
    double dropout = 0.0;
    int context_length = -1;
    
    int _num_blocks = 1;
    int _inner_embedding_dim = -1;
    
    void validate() const override;
    void post_init() override;
};

struct MLSTMBlockConfig : public ConfigBase {
    MLSTMLayerConfig mlstm;
    std::optional<int> _num_blocks;
    std::optional<int> _block_idx;
    
    void validate() const override;
    void post_init() override;
};

} // namespace xlstm
