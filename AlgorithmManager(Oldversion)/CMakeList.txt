cmake_minimum_required(VERSION 3.17)

project(AlgorithmManager)

message("CMAKE_SOURCE_DIR= ${CMAKE_SOURCE_DIR}")
message("CMAKE_BINARY_DIR= ${CMAKE_SOURCE_DIR}")

#Test
add_executable(AlgorithmManager Algorithm_Manager.cc Algorithm_Manager.test.cc)