cmake_minimum_required(VERSION 3.1)

project(MelcoCodeExcercise)
set (CMAKE_CXX_STANDARD 11)

include_directories(3rdParty include)

add_library(SpellCheck STATIC src/Distance.cpp src/IsKnownWord.cpp src/Replacements.cpp src/Dictionary.cpp src/Dictionary.h)

add_executable(SpellCheckTest tests/main.cc)

target_link_libraries(SpellCheckTest SpellCheck)

add_custom_command(
        TARGET SpellCheckTest POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_SOURCE_DIR}/words.txt
        ${CMAKE_CURRENT_BINARY_DIR}/words.txt)