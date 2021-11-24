cmake_minimum_required(VERSION 3.20)
project(HuffmanTest)

set(CMAKE_CXX_STANDARD 14)

find_package( OpenCV REQUIRED )

add_executable(HuffmanTest main.cpp HuffEncoder.cpp HuffEncoder.h img2stringTraductor.cpp img2stringTraductor.h HuffDecoder.cpp HuffDecoder.h Huffman.cpp Huffman.h)

target_link_libraries(HuffmanTest ${OpenCV_LIBS} )
