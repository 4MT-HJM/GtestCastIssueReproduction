PROJECT(PokerGame)

cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_FLAGS "-std=c++14")
include_directories("googletest/googletest/include")
include_directories("googletest/googlemock/include")
include_directories("googletest/googletest")
include_directories("googletest/googlemock")
add_library(gtestgmock googletest/googletest/src/gtest-all.cc googletest/googlemock/src/gmock-all.cc)


add_executable(SimpleTest main.cpp test.cpp)
target_link_libraries(SimpleTest gtestgmock pthread)
