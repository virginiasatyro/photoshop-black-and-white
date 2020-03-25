#include <iostream> 
#include <string>
#include <fstream> // read/write file

#include "image.h"

using namespace std;

// constructor 
Image::Image()
{
    cout << "New image created!" << endl;
}

// destructor
Image::~Image()
{
    cout << "Image destructed!" << endl;
}

// reads image file .ppm
void Image::read_image()
{
    string line;
    ifstream my_image("mineirao.ppm");

    if(my_image.is_open())
    {
        int i = 0;
        while(getline(my_image, line))
        {
            cout << line << endl;
            i++;
            switch(i)
            {
                case 1: 
                    set_type_ascii(line);
            }
            if(i >= 3)
                break;
        }
        my_image.close();
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

}

// set the type ascii (P2 or P3)
void Image::set_type_ascii(string type_ascii)
{
    this->type_ascii = type_ascii;
}

// get the type ascii (P2 or P3)
string Image::get_type_ascii()
{
    return type_ascii;
}
