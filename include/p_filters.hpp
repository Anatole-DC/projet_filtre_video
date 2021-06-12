#if !defined(P_FILTER_HPP_INCLUDED)
#define P_FILTER_HPP_INCLUDED

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;

Mat default_filter(Mat image);

Mat grayscale_filter(Mat image);

Mat blur_filter(Mat image);

Mat edge_filter(Mat image);

Mat hsv_filter(Mat image);

#endif // P_FILTER_HPP_INCLUDED
