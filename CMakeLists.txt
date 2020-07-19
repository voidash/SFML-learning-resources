cmake_minimum_required(VERSION 2.10)

#name of our project
set(ProjectName SFMLLoopShooter)


project(${ProjectName})

add_library(Architecture 
            Game.h
            Game.cpp)

find_package(SFML COMPONENTS system window graphics network audio REQUIRED)

add_executable(${ProjectName} main.cpp)

target_link_libraries(${ProjectName} sfml-system sfml-window sfml-graphics sfml-network sfml-audio Architecture)