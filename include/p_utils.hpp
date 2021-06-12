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

/**
 * Affiche une image
 * \param string le chemin vers l'image
 * \param string le titre de la fenêtre
 * \return 1 si l'opération est effectuée, -1 en cas d'erreur
 * \author Anatole de Chauveron
*/
int display_image(string path, string window_name="Output");

/**
 * Affiche une video
 * \param string le chemin vers l'image
 * \param Mat(*filter)(Mat) le filtre à appliquer sur la video
 * \param int la vitesse de visualisation de la video
 * \param string le titre de la fenêtre
 * \return 1 si l'opération est effectuée, -1 en cas d'erreur
 * \author Anatole de Chauveron
*/
int display_video(string path, Mat (*filter)(Mat)=default_filter, int delay=25, string window_name="Output");

#endif // P_UTILS_HPP_INCLUDED
