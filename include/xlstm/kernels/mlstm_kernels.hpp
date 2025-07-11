#pragma once

#include "../core/tensor.hpp"

namespace xlstm {
namespace kernels {

void mlstm_forward(
    const Tensor& q, const Tensor& k, const Tensor& v,
    const Tensor& i_gate, const Tensor& f_gate,
    Tensor& output
);

void mlstm_backward(
    const Tensor& grad_output,
    const Tensor& q, const Tensor& k, const Tensor& v,
    Tensor& grad_q, Tensor& grad_k, Tensor& grad_v
);

} // namespace kernels
} // namespace xlstm
