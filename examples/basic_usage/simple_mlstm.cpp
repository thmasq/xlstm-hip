#include <xlstm/xlstm.hpp>
#include <iostream>

int main() {
    // Initialize library
    xlstm::initialize();
    
    // Create simple mLSTM model
    xlstm::XLSTMModelConfig config;
    config.embedding_dim = 512;
    config.num_heads = 8;
    config.vocab_size = 10000;
    
    auto model = std::make_unique<xlstm::XLSTMModel>(config);
    
    // Create input tensor
    auto input = xlstm::Tensor::zeros({32, 128}, xlstm::DType::Float32);
    
    // Forward pass
    auto output = model->forward(input);
    
    std::cout << "Output shape: ";
    for (auto dim : output.shape()) {
        std::cout << dim << " ";
    }
    std::cout << std::endl;
    
    xlstm::finalize();
    return 0;
}
