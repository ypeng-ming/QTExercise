cmake_minimum_required(VERSION 3.14)

project(ConsoleTest LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(ConsoleTest
  ride.cpp
  gift1.cpp
  friday.cpp
  frog.cpp
  bfs.cpp
  beads.cpp
  milk2.cpp
  lengthOfLIS.cpp
  findLongestChain.cpp
  palsquare.cpp
  dualpal.cpp
  milk.cpp
)
#file(GLOB EMBED_FILES
#     "${CMAKE_CURRENT_BINARY_DIR}/* .in")
target_link_libraries(ConsoleTest Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS ConsoleTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
