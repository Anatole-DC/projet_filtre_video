#include "../include/p_utils.hpp"

int display_image(string path, string window_name) {
    
    Mat image = imread(path);       // On ouvre l'image

    if (!image.empty()) {           // Si l'image est chargée on l'affiche
        imshow(window_name, image);
        waitKey(0);
        return 1;
    }

    cerr << "Un erreur est survenur lors de l'ouverture de l'image : " << path << endl;
    return -1;
}

int display_video(string path, Mat (*filter)(Mat), int delay, string window_name) {

    VideoCapture capture(path);         // On charge la video
    Mat image;                          // Initialisation du buffer pour les frames

    if (capture.isOpened()) {           // Si la video est chargee
        cout << "'Esc' pour fermer la vidéo" << endl;

        while (true) {
            if (!capture.read(image)) {
                cerr << "Une erreur est survenue pendant la lecture de la video" << endl;
                return -1;
            }
            imshow(window_name, filter(image));     // Affichage de l'image filtree

            if (waitKey(delay) == 27) break;        // Si la touche 'Esc' est appuyée, on ferme la fenêtre
        }

        return 1;
    }

    cerr << "Un erreur est survenue lors de l'ouverture de la video : " << path << endl;
    return -1;
}