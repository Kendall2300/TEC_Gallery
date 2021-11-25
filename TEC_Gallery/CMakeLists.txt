cmake_minimum_required(VERSION 3.20)
project(TEC_Gallery)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/home/gabriel/Qt/6.2.0/gcc_64/lib/cmake")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


find_package(libmongocxx REQUIRED)
find_package(libbsoncxx REQUIRED)
find_package(Qt6Widgets REQUIRED)
find_package( OpenCV REQUIRED )

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


include_directories(${LIBMONGOCXX_INCLUDE_DIR})
include_directories(${LIBBSONCXX_INCLUDE_DIR})
include_directories("/usr/local/include/mongocxx/v_noabi")
include_directories("/usr/local/include/bsoncxx/v_noabi")
include_directories("/usr/local/include/libmongoc-1.0")
include_directories("/usr/local/include/libbson-1.0")
include_directories("/usr/local/lib")

add_executable(TEC_Gallery main.cpp mainwindow.cpp mainwindow.h mainwindow.ui
    secondwin.h secondwin.cpp secondwin.ui metadata.h metadata.cpp metadata.ui
    signup.h signup.cpp signup.ui mongodb_handler.h mongodb_handler2.h HuffEncoder.cpp
    HuffEncoder.h img2stringTraductor.cpp img2stringTraductor.h string2imgTraductor.cpp string2imgTraductor.h)

target_link_libraries(TEC_Gallery ${LIBMONGOCXX_LIBRARIES})
target_link_libraries(TEC_Gallery ${LIBBSONCXX_LIBRARIES})
target_link_libraries(TEC_Gallery Qt6::Widgets)
target_link_libraries(TEC_Gallery ${OpenCV_LIBS} )
