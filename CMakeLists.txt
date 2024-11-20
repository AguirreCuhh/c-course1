cmake_minimum_required(VERSION 3.29)
project(clase5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(clase5
    airline.cpp
    airline.h
    airport.cpp
    airport.h
    flight.cpp
    flight.h
    main.cpp
    passenger.cpp
    passenger.h)
