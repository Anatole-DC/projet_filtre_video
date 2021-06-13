#include <iostream>
#include "../include/p_utils.hpp"
#include "../include/p_filters.hpp"
#include "../include/p_conf_loader.hpp"

using namespace std;

int main(int argc, char** argv) {
    cout << "PROJET FILTRE VIDEO" << endl;

    if (argc == 1) {
        cerr << "Aucun fichier de configuration renseigné." << endl;
        return 0;
    }

    cout << "Chargement des paramètres..." << endl;

    vector<string> conf = load_conf_file(argv[1]);  // On charge les paramètres de configuration

    if (conf.size() == 0 || conf[0] == "") {        // On vérifie que tout s'est bien passé
        cerr << "Impossible de lancer le programme sans lien vers une video" << endl;
        return 0;
    }

    cout << "Paramètres chargés avec succès !" << endl;

    // En fonction des paramètres on applique les filtres
    if (conf[1] == "GRAY_FILTER") {
        display_video(conf[0], grayscale_filter);

    } else if (conf[1] == "BLUR_FILTER") {
        display_video(conf[0], blur_filter);

    } else if (conf[1] == "EDGE_FILTER") {
        display_video(conf[0], edge_filter);
        
    } else if (conf[1] == "HSV_FILTER") {
        display_video(conf[0], hsv_filter);
        
    } else if (conf[1] == "FACE_FILTER") {
        display_video(conf[0], face_detection_filter, 1);
        
    } else if (conf[1] == "BLUR_FACE_FILTER") {
        display_video(conf[0], blur_face_filter, 1);
        
    }  else if (conf[1] == "CAR_FILTER") {
        display_video(conf[0], car_filter, 10);
        
    } else {                                                    // Le filtre par défaut
        display_video(conf[0]);
    }

    return 0;
}