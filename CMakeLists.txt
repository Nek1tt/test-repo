cmake_minimum_required(VERSION 3.14)
project(testproj CXX)

enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

set(SOURCES candle.cpp main.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

add_executable(
  hello_test
  main.cpp
)
target_link_libraries(
  hello_test
  GTest::gtest_main
  GTest::gtest
)

include(GoogleTest)
gtest_discover_tests(hello_test)

