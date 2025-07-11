#pragma once

#include "../config/config_base.hpp"

namespace xlstm {

class DeviceManager {
public:
    static DeviceManager& instance();
    
    void set_device(int device_id);
    int get_device() const;
    int get_device_count() const;
    
    void synchronize();
    void synchronize(int device_id);
    
private:
    DeviceManager() = default;
    int current_device_ = 0;
};

} // namespace xlstm
