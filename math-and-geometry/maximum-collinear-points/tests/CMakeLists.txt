include(FetchContent)


FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/release-1.12.1.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()


add_executable(max_collinear_points_test max_collinear_points_test.cpp)


target_link_libraries(max_collinear_points_test
        GTest::gtest_main
        max_collinear_points
)

include(GoogleTest)
gtest_discover_tests(max_collinear_points_test)
