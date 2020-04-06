#ifndef _IMAGE_H
#define _IMAGE_H

#include <string>
#include <vector>

#define SCALE 49
#define BLACK_IMG_TYPE "P2"
#define INPUT_FILE "exemple.ppm"
#define OUTPUT_FILE "mineirao.pgm"

using namespace std;

struct RGB
{
    unsigned char _red, _green, _blue;
    // constructor set r, g, b to 0 automatically
    RGB(): _red(0), _green(0), _blue(0) {};
};

class Image
{
private:
    string type_ascii;
    unsigned int width; // linha 
    unsigned int height; // coluna 
    unsigned int color_scale; // 255
   // int **data_map;
    vector<RGB> pixels;

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
    void alocate_data_map();
    void print_data_map(unsigned int, unsigned int);

    RGB& get(unsigned int, unsigned int);
};

#endif // _IMAGE_H
