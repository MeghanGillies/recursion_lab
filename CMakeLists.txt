cmake_minimum_required(VERSION 3.24)

project(you_need_power_wisdom_and_courage_when_using_recursion)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(triangle_number_calculator_test tests/triangle_number_calculator_test.cpp src/triangle_number_calculator.cpp)
add_executable(main main.cpp src/triangle_number_calculator.cpp)

target_link_libraries(triangle_number_calculator_test PRIVATE Catch2::Catch2WithMain)
