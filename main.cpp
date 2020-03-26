#include <iostream> 
#include <string>

#include "image.h"

using namespace std;

// g++ -std=c++11 *.cpp -o main

int main()
{
    cout << "Hello World!" << endl;

    Image color_image;

    color_image.read_image();

    Image black_image(color_image.get_width(), color_image.get_height());

    cout << "\nmain()" << endl;
    cout << "Image type color_image: " << color_image.get_type_ascii() << endl;
    cout << "Image width color_image: " << color_image.get_width() << endl;
    cout << "Image height color_image: " << color_image.get_height() << endl;
    cout << "Image color scale color_image: " << color_image.get_color_scale() << endl;
    cout << endl;

    cout << "Image type black_image: " << black_image.get_type_ascii() << endl;
    cout << "Image width black_image: " << black_image.get_width() << endl;
    cout << "Image height black_image: " << black_image.get_height() << endl;
    cout << "Image color scale black_image: " << black_image.get_color_scale() << endl;
    cout << endl;

    black_image.write_image();

    return 0;
}