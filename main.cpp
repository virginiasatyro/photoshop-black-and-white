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

    cout << "Image type: " << color_image.get_type_ascii() << endl;

    return 0;
}