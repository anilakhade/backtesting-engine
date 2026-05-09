cmake_minimum_required(VERSION 3.16)
project(BacktestEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(BacktestEngine
    src/main.cpp
    src/dataloader.cpp
    src/backtester.cpp
    src/execution.cpp
)
target_include_directories(BacktestEngine PRIVATE include)


