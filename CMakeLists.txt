cmake_minimum_required(VERSION 2.8)
project( filtre_video.exe )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( filtre_video.exe    src/main.cpp
                                    src/p_utils.cpp
                                    src/p_filters.cpp
                                    src/p_conf_loader.cpp
                                    
                                    include/p_utils.hpp
                                    include/p_filters.hpp
                                    include/p_conf_loader.hpp )
target_link_libraries( filtre_video.exe ${OpenCV_LIBS} )