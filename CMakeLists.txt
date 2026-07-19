cmake_minimum_required(VERSION 3.20)

project(PokemonLudo C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_package(raylib REQUIRED)

add_executable(PokemonLudo
    src/main.c
    src/game.c
    src/menu.c
)

target_include_directories(PokemonLudo PRIVATE include)

target_link_libraries(PokemonLudo PRIVATE raylib)