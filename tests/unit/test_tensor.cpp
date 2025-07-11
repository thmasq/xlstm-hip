#include <gtest/gtest.h>
#include <xlstm/core/tensor.hpp>

TEST(TensorTest, Creation) {
    auto tensor = xlstm::Tensor::zeros({2, 3}, xlstm::DType::Float32);
    EXPECT_EQ(tensor.shape().size(), 2);
    EXPECT_EQ(tensor.shape()[0], 2);
    EXPECT_EQ(tensor.shape()[1], 3);
}
