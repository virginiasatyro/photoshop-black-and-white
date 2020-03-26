#include <iostream> 
#include <string>
#include <fstream> // read/write file
#include <vector>
#include <algorithm>
#include <iterator> 
#include <sstream> 

#include "image.h"
#include "aux_function.h"

using namespace std;

// constructor 
Image::Image()
{
    cout << "New image created!" << endl;
}

Image:: Image(unsigned int width, unsigned int height)
{
    cout << "New image created!" << endl;

    this->width = width;
    this->height = height;
    this->type_ascii = BLACK_IMG_TYPE;
    this->color_scale = SCALE;
}

// destructor
Image::~Image()
{
    cout << "Image destructed!" << endl;
}

// set the type ascii (P2 or P3)
void Image::set_type_ascii(string type_ascii)
{
    this->type_ascii = type_ascii;
}

// set image width
void Image::set_width(unsigned int width)
{
    this->width = width;
}

// set image height
void Image::set_height(unsigned int height)
{
    this->height = height;
}

// set image color scale
void Image::set_color_scale(unsigned int color_scale)
{
    this->color_scale = color_scale;
}

// get the type ascii (P2 or P3)
string Image::get_type_ascii()
{
    return type_ascii;
}

// get image height
unsigned int Image::get_height()
{
    return height;
}

// get image width
unsigned int Image::get_width()
{
    return width;
}

// get image color scale
unsigned int Image::get_color_scale()
{
    return color_scale;
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
            set_image_info(i, line);
            if(i >= 3)
                break;
        }
        my_image.close();
    }
    else
        cout << "Unable to open file!" << endl;
}

void Image::set_image_info(int aux, string line)
{
    switch(aux)
    {
        case 1: 
        {
            set_type_ascii(line);
            break;
        }
        case 2:
        {
            stringstream ss(line);
            string token;
            int i = 0;
            while(getline(ss, token, ' '))
            {
                if(i == 0) set_width(atoi(token.c_str()));
                if(i == 1) set_height(atoi(token.c_str()));
                i++;
            }
            break;
        }
        case 3:
        {
            set_color_scale(atoi(line.c_str()));
            break;
        }
    }
}

void Image::write_image(string type_ascii, unsigned int width, unsigned int height, unsigned int color_scale)
{
    ofstream my_image(OUTPUT_FILE);
    if(my_image.is_open())
    {
        my_image << type_ascii << endl;
        my_image << to_string(width) << " " << to_string(height) << endl;
        my_image << to_string(color_scale) << endl; 
        my_image.close();
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }
}