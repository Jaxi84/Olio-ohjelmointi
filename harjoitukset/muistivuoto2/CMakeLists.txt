cmake_minimum_required(VERSION 3.16)

project(muistivuoto2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(muistivuoto2 main.cpp
    dog.h
    dog.cpp)

include(GNUInstallDirs)
install(TARGETS muistivuoto2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
