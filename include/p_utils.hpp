#if !defined(P_UTILS_HPP_INCLUDED)
#define P_UTILS_HPP_INCLUDED

#include <iostream>

int display_image(std::string path, std::string window_name="Output");

int display_video(std::string path, int delay=25, std::string window_name="Output");

#endif // P_UTILS_HPP_INCLUDED
