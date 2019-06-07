cmake_minimum_required(VERSION 3.13)
project(GEN_LAB05)

set(CMAKE_CXX_STANDARD 14)

add_executable(GEN_LAB05 main.cpp Movie.cpp Movie.h Rental.h Customer.cpp Customer.h test/MovieTest.cpp test/MovieTest.h)

include_directories(googletest/include/gtest)

add_executable(tests
        test/MovieTest.cpp test/MovieTest.h)


