cmake_minimum_required(VERSION 3.26)
project(Matematicas_discretas)

set(CMAKE_CXX_STANDARD 17)

# Crear dos ejecutables separados
add_executable(OperacionesLogicas OperacionesLogicas.cpp)
add_executable(OperacionLogicasCadenasBits OperacionLogicasCadenasBIts.cpp)
