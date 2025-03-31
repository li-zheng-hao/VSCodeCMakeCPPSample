cmake_minimum_required(VERSION 3.10.0)
project(Demo)

# 创建动态库 (DLL)
add_library(DemoLib SHARED 
    DemoLib.cpp
    DemoLib.h
)

# 创建可执行文件
add_executable(Demo main.cpp)

# 链接库
target_link_libraries(Demo PRIVATE DemoLib)

