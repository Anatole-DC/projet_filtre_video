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

Mat blur_face_filter(Mat image) {
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
        Rect zone_to_blur = Rect(faces[i].tl(), faces[i].br());
        GaussianBlur(new_image(zone_to_blur), new_image(zone_to_blur), Size(51, 51), 0);
    }

    return new_image;
}

Mat car_filter(Mat image) {
    Mat new_image = image;

    CascadeClassifier car_cascade;
    car_cascade.load("assets/resources/haarcascade_cars.xml");

    if (car_cascade.empty()) {
        cerr << "Une erreur est survenue lors de l'ouverture du fichier XML" << endl;
        return image;
    }

    vector<Rect> cars;
    car_cascade.detectMultiScale(new_image, cars, 1.1, 10);

    for (int i=0; i<cars.size(); i++) {
        rectangle(new_image, cars[i].tl(), cars[i].br(), Scalar(0, 128, 0), 3);
    }

    return new_image;
}

// Mat mask_detection_filter(Mat image) {
//     Mat new_image = image;

//     CascadeClassifier eye_cascade;
//     eye_cascade.load("assets/resources/haarcascade_eye.xml");

//     CascadeClassifier mouth_cascade;
//     mouth_cascade.load("assets/resources/haarcascade_mouth.xml");

//     if (eye_cascade.empty() || mouth_cascade.empty()) {
//         cerr << "Une erreur est survenue lors de l'ouverture des fichiers XML" << endl;
//         return image;
//     }

//     vector<Rect> eyes;
//     eye_cascade.detectMultiScale(new_image, eyes, 1.1, 10);

//     vector<Rect> mouths;

//     if (eyes.size() == 0) {
//         return new_image;
//     } else {
//         rectangle(new_image, eyes[0].tl(), eyes.back().br(), Scalar(255, 255, 255), 3);

//         mouth_cascade.detectMultiScale(new_image, mouths, 1.1, 10);

//         if (mouths.size() == 0) {
//             for (int i=0; i<eyes.size(); i++) {
//                 rectangle(new_image, eyes[0].tl(), eyes.back().br(), Scalar(0, 255, 0), 3);
//             }
//         } else {
//             for (int i=0; i<eyes.size(); i++) {
//                 rectangle(new_image, eyes[0].tl(), eyes.back().br(), Scalar(0, 0, 255), 3);
//             }
//         }
//     }

//     return new_image;
// }