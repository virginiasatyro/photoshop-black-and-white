#include <iostream> 
#include <string>

#include "image.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Image color_image;
    Image black_image;

    color_image.read_image();

    cout << "\nmain()" << endl;
    cout << "Image type: " << color_image.get_type_ascii() << endl;
    cout << "Image width: " << color_image.get_width() << endl;
    cout << "Image height: " << color_image.get_height() << endl;
    cout << endl;

    return 0;
}