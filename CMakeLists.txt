cmake_minimum_required(VERSION 2.8)
project( filtre_video.exe )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package( OpenCV 4.5.1 REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

file(GLOB src_files "src/*.cpp" "include/*.hpp")

add_executable( filtre_video.exe ${src_files})

target_link_libraries( filtre_video.exe ${OpenCV_LIBS} )