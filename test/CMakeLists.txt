enable_testing()
add_executable(tests test.cpp)
target_link_libraries(tests sum gtest_main)
include(GoogleTest)
gtest_discover_tests(tests)

set_target_properties(tests
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
