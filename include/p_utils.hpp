#if !defined(P_UTILS_HPP_INCLUDED)
#define P_UTILS_HPP_INCLUDED

#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

#include "../include/p_filters.hpp"

using namespace cv;
using namespace std;


int display_image(string path, string window_name="Output");

int display_video(string path, Mat (*filter)(Mat)=default_filter, int delay=25, string window_name="Output");

#endif // P_UTILS_HPP_INCLUDED
