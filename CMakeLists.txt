cmake_minimum_required(VERSION 3.1)
project(AERSP424)
set(CMAKE_CXX_STANDARD 20)
add_executable(${CMAKE_PROJECT_NAME} 
                    main.cpp 
                    print.cpp 
                    print.h
                    math_tools.cpp
                    math_tools.h
                    dynamics.h
                    dynamics.cpp
                )