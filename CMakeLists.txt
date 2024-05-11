cmake_minimum_required(VERSION 3.17)
project(ElzasMathLib)

set(CMAKE_CXX_STANDARD 14)

add_executable(ElzasMathLib main.cpp Vector/Vector3.cpp GCD/GCD.cpp)