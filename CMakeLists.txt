cmake_minimum_required(VERSION 3.10)
project(BullsAndCows VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(BullsAndCows
    main/main.cpp
    utils/bullsandcows.cpp
    utils/utils.cpp
)