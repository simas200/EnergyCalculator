cmake_minimum_required(VERSION 3.28)

set(CMAKE_C_COMPILER "C:/msys64/ucrt64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/msys64/ucrt64/bin/g++.exe")

project(energyClaculator VERSION 0.1)

add_executable(energy_calculator src/energy_calculator.cpp)
