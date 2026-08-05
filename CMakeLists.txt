cmake_minimum_required(VERSION 3.31)
project(BancoBrigantino)

set(CMAKE_CXX_STANDARD 26)

add_executable(BancoBrigantino main.cpp
        Client.cpp
        Client.h
        Account.cpp
        Account.h
        Current.cpp
        Current.h
        Saving.cpp
        Saving.h)
