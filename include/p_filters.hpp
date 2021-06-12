#if !defined(P_FILTER_HPP_INCLUDED)
#define P_FILTER_HPP_INCLUDED

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;

/**
 * Filtre qui retourne l'image de base sans la modifier
 * \param Mat l'image de base
 * \return Mat l'image de base
 * \author Anatole de Chauveron
*/
Mat default_filter(Mat image);

/**
 * Filtre qui retourne une image grisée
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat grayscale_filter(Mat image);

/**
 * Filtre qui retourne une image floutée
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat blur_filter(Mat image);

/**
 * Filtre qui retourne les contours des objets présents sur l'image
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat edge_filter(Mat image);

/**
 * Filtre qui retourne la luminosité de l'image
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat hsv_filter(Mat image);

#endif // P_FILTER_HPP_INCLUDED
