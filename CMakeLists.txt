cmake_minimum_required(VERSION 3.31)
project(Practica1EstructuraDatos1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Practica1EstructuraDatos1
        Nodo.cpp
        Nodo.h
        Lista.h
        Lista.cpp
        Main.cpp)
