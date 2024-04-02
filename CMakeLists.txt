cmake_minimum_required(VERSION 2.8)

# 添加 project() 命令来指定项目名称
project(MyProject)

# 设置版本号
set(MyProject_VERSION_MAJOR 1)
set(MyProject_VERSION_MINOR 0)
set(MyProject_VERSION_PATCH 0)
set(MyProject_VERSION "${MyProject_VERSION_MAJOR}.${MyProject_VERSION_MINOR}.${MyProject_VERSION_PATCH}")
message(STATUS "The version of this project is: ${MyProject_VERSION}")

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

set(CMAKE_BUILD_TYPE debug)

include_directories(${PROJECT_SOURCE_DIR}/panda_stl)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(SOURCES 
    ${PROJECT_SOURCE_DIR}/test/test_main.cpp
        my_stl/allocator.h
        my_stl/constructor.h
        my_stl/util.h
        my_stl/test/allocator_test.cpp
        my_stl/vector.h)
add_executable(test ${SOURCES} test/test_main2.cpp)


