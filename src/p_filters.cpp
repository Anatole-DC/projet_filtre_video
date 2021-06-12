#include "../include/p_filters.hpp"

Mat default_filter(Mat image) {
    return image;
}

Mat grayscale_filter(Mat image) {
    Mat new_image;

    cvtColor(image, new_image, COLOR_BGR2GRAY);

    return new_image;
}

Mat blur_filter(Mat image) {
    Mat new_image;

    GaussianBlur(image, new_image, Size(13,13), 5, 0);

    return new_image;
}

Mat edge_filter(Mat image) {
    Mat new_image;

    Canny(image, new_image, 25, 75);

    return new_image;
}

Mat hsv_filter(Mat image) {
    Mat new_image;

    cvtColor(image, new_image, COLOR_BGR2HSV);

    return new_image;
}