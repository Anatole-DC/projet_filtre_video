#include "../include/p_utils.hpp"
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int display_image(string path, string window_name) {
    Mat image = imread(path);

    if (!image.empty()) {
        imshow(window_name, image);
        waitKey(0);
        return 1;
    }

    cerr << "Un erreur est survenur lors de l'ouverture de l'image : " << path << endl;
    return -1;
}

int display_video(string path, int delay, string window_name) {
    VideoCapture capture(path);
    Mat image;

    if (capture.isOpened()) {
        cout << "'Esc' pour fermer la vidéo" << endl;

        while (true) {
            if (!capture.read(image)) {
                cerr << "Une erreur est survenue pendant la lecture de la video" << endl;
                return -1;
            }
            imshow(window_name, image);

            if (waitKey(delay) == 27) break;
        }

        return 1;
    }

    cerr << "Un erreur est survenue lors de l'ouverture de la video : " << path << endl;
    return -1;
}