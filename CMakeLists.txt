cmake_minimum_required(VERSION 4.0)
project(Lab15aInheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab15aInheritance main.cpp
        Employee.h
        Employee.cpp
        ProductionWorker.h
        ProductionWorker.cpp
        PrintHelpAndBanner.cpp
        PrintHelpAndBanner.h)
