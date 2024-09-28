add_executable(g_benchmark benchmark.cpp)
target_link_libraries(g_benchmark sum benchmark::benchmark)

set_target_properties(g_benchmark 
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# target_compile_options(g_benchmark PRIVATE -Wno-error)
# target_compile_options(g_benchmark PRIVATE -Wno-unused-parameter)

# set_target_properties(g_benchmark PROPERTIES
#    COMPILE_OPTIONS "-Wno-error"  # Или "-Wno-unused-parameter"
#)

