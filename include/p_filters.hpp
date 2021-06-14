#if !defined(P_FILTER_HPP_INCLUDED)
#define P_FILTER_HPP_INCLUDED

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace std;
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

/*********************** ADVANCED FILTERS ***********************/

/**
 * Filtre qui détecte les visages sur une vidéo.
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat face_detection_filter(Mat image);

/**
 * Filtre qui floute les visages sur une vidéo.
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat blur_face_filter(Mat image);

/**
 * Filtre qui détecte les voitures
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat car_filter(Mat image);

/**
 * Filtre qui détecte si une personne porte un masque ou si elle n'en porte pas
 * \param Mat l'image de base
 * \return Mat l'image modifiée
 * \author Anatole de Chauveron
*/
Mat mask_detection_filter(Mat image);



#endif // P_FILTER_HPP_INCLUDED
