cmake_minimum_required(VERSION 3.13)

message("________ SETUP ________")

set(CXX_STANDARD 17)

project(licznik VERSION 1.0.0)
include_directories(
  src/
  inc/
  lib/debug_cpp
  /usr/include # to jest na wszelki wypadek gdyby TAK
)

enable_testing()

set(CMAKE_CXX_FLAGS "-Wpedantic -g -Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 arch=native")

# add_library(
# ##  morse STATIC
# ##  lib/morse/morse.cpp
# )


# link_libraries(
#   morse_code,
#   morse
# )

add_compile_definitions(DEBUG)

add_executable(
  morse_factory
  src/main.cpp
  src/BeepMorse.cpp
  src/ConsoleMorse.cpp
  src/MorseCode.cpp
  src/IMorse.cpp
 # src/MorseFactory.cpp
)


set(CMAKE_CXX_STANDARD 17)

add_test(NAME licznik COMMAND licznik)
