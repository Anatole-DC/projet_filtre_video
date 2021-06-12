#include <iostream>
#include "../include/p_utils.hpp"
#include "../include/p_filters.hpp"
#include "../include/p_conf_loader.hpp"

using namespace std;

int main(int argc, char** argv) {
    cout << "Hello World !" << endl;
    
    // display_image("assets/images/img.jpeg");
    // display_video("assets/videos/vid.avi", hsv_filter);

    vector<string> conf = load_conf_file(argv[1]);

    if (conf[0] == "") {
        cerr << "Impossible de lancer le programme sans lien vers une video" << endl;
        return 0;
    }

    if (conf[1] == "GRAY_FILTER") {
        display_video("assets/videos/vid.avi", grayscale_filter);

    } else if (conf[1] == "BLUR_FILTER") {
        display_video("assets/videos/vid.avi", blur_filter);

    } else if (conf[1] == "EDGE_FILTER") {
        display_video("assets/videos/vid.avi", edge_filter);
        
    } else if (conf[1] == "HSV_FILTER") {
        display_video("assets/videos/vid.avi", hsv_filter);
        
    } else {
        display_video("assets/videos/vid.avi");
    }

    return 0;
}