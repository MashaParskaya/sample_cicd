add_executable(summator main.cpp)
target_link_libraries(summator PUBLIC sum)
set_target_properties(summator
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
