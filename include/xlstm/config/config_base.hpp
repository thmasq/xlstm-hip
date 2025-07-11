#pragma once

#include <string>
#include <stdexcept>

namespace xlstm {

enum class DType {
    Float16,
    BFloat16, 
    Float32,
    Float64
};

enum class Device {
    CPU,
    GPU
};

class ConfigBase {
public:
    virtual ~ConfigBase() = default;
    virtual void validate() const = 0;
    virtual void post_init() {}
    
protected:
    void check_positive(int value, const std::string& name) const {
        if (value <= 0) {
            throw std::invalid_argument(name + " must be positive, got " + std::to_string(value));
        }
    }
    
    void check_range(double value, double min, double max, const std::string& name) const {
        if (value < min || value > max) {
            throw std::invalid_argument(name + " must be in range [" + std::to_string(min) + 
                                      ", " + std::to_string(max) + "], got " + std::to_string(value));
        }
    }
};

} // namespace xlstm
