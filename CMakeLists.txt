cmake_minimum_required(VERSION 3.14)
project(GEN_LAB05)

set(CMAKE_CXX_STANDARD 14)

add_executable(GEN_LAB05 src/main.cpp
        src/Customer.cpp src/Customer.h
        src/Movie.cpp src/Movie.h
        src/Rental.h)