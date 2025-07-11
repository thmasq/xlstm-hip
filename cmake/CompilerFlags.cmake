# Compiler-specific flags
function(apply_compiler_flags target)
    target_compile_options(${target} PRIVATE
        $<$<COMPILE_LANGUAGE:CXX>:-Wall -Wextra -O3>
        $<$<COMPILE_LANGUAGE:HIP>:-O3>
    )
endfunction()
