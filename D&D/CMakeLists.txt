cmake_minimum_required(VERSION 3.29)
project(D_D)

set(CMAKE_CXX_STANDARD 20)

add_executable(D_D main.cpp
        Monster.cpp
        Monster.h
        Node.cpp
        Node.h
        LinkedList.cpp
        LinkedList.h
        Powers.cpp
        Powers.h
        Player.cpp
        Player.h)
