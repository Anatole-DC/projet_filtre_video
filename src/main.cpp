#include <iostream>
#include "../include/p_utils.hpp"
#include "../include/p_filters.hpp"

using namespace std;

int main(int argc, char** argv) {
    cout << "Hello World !" << endl;
    
    // display_image("assets/images/img.jpeg");
    display_video("assets/videos/vid.avi", hsv_filter);

    return 0;
}