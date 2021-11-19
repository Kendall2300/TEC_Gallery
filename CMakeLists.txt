cmake_minimum_required(VERSION 3.20)
project(TEC_Gallery)

set(CMAKE_CXX_STANDARD 14)

find_package(libmongocxx REQUIRED)
find_package(libbsoncxx REQUIRED)
include_directories(${LIBMONGOCXX_INCLUDE_DIR})
include_directories(${LIBBSONCXX_INCLUDE_DIR})
include_directories("/usr/local/include/mongocxx/v_noabi")
include_directories("/usr/local/include/bsoncxx/v_noabi")
include_directories("/usr/local/include/libmongoc-1.0")
include_directories("/usr/local/include/libbson-1.0")
include_directories("/usr/local/lib")

add_executable(TEC_Gallery main.cpp)

target_link_libraries(TEC_Gallery ${LIBMONGOCXX_LIBRARIES})
target_link_libraries(TEC_Gallery ${LIBBSONCXX_LIBRARIES})