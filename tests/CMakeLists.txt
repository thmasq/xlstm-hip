find_package(GTest REQUIRED)

add_executable(test_tensor unit/test_tensor.cpp)
target_link_libraries(test_tensor xlstm GTest::GTest GTest::Main)

enable_testing()
add_test(NAME TensorTests COMMAND test_tensor)
