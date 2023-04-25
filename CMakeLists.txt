cmake_minimum_required(VERSION 3.13.4)
set(ProjectName "MBS-Sim")

project("${ProjectName}")

set(CMAKE_CXX_STANDARD 11)

add_library("${ProjectName}-lib" STATIC
    # Source files
    lib/adder.cpp
    lib/eulercromer.cpp

    # Header files
    lib/adder.h
    lib/eulercromer.h
)

add_executable("${ProjectName}-main"
    # Source files
    src/main.cpp

    # Header files
)

target_link_libraries("${ProjectName}-main" "${ProjectName}-lib")

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests tests/test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

