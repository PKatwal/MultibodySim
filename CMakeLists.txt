cmake_minimum_required(VERSION 3.13)
set(ProjectName "MBS-Sim")

project("${ProjectName}")

set(CMAKE_CXX_STANDARD 11)
include_directories(include)

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
    include/constants.h
)

target_link_libraries("${ProjectName}-main" "${ProjectName}-lib")

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.3.2 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests 
    # Source files
    tests/test.cpp
    
    # Header files

   
)
target_include_directories(tests PRIVATE include)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain "${ProjectName}-lib" )

