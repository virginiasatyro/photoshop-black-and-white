#ifndef _IMAGE_H
#define _IMAGE_H

#include <string>

#define SCALE 49
#define BLACK_IMG_TYPE "P2"
#define OUTPUT_FILE "mineirao.pgm"

using namespace std;

class Image
{
private:
    string type_ascii;
    unsigned int width; // linha 
    unsigned int height; // coluna 
    unsigned int color_scale; // 255

public:
    // constructor
    Image();
    Image(unsigned int width, unsigned int height);

    // destructor
    ~Image();

    // sets
    void set_type_ascii(string type_ascii);
    void set_width(unsigned int width);
    void set_height(unsigned int height);
    void set_color_scale(unsigned int color_scale);
    void set_image_info(int aux, string line);

    // gets
    string get_type_ascii(); 
    unsigned int get_height();
    unsigned int get_width();
    unsigned int get_color_scale();

    void read_image();
    void write_image();
};

#endif // _IMAGE_H
