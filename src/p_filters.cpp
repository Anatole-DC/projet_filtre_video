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

Mat face_detection_filter(Mat image) {
    Mat new_image = image;

    CascadeClassifier face_cascade;
    face_cascade.load("assets/resources/haarcascade_frontalface_default.xml");

    if (face_cascade.empty()) {
        cerr << "Une erreur est survenue lors de l'ouverture du fichier XML" << endl;
        return image;
    }

    vector<Rect> faces;
    face_cascade.detectMultiScale(new_image, faces, 1.1, 10);

    for (int i=0; i<faces.size(); i++) {
        rectangle(new_image, faces[i].tl(), faces[i].br(), Scalar(0, 128, 0), 3);
    }

    return new_image;
}