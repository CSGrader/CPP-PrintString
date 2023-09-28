cmake_minimum_required(VERSION 3.21)
cmake_policy(SET CMP0135 NEW)
project(Cpp-PrintString)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_C_FLAGS --coverage)
set(CMAKE_CXX_FLAGS --coverage)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(CTest)

add_subdirectory (src)

add_subdirectory (test)

enable_testing()
