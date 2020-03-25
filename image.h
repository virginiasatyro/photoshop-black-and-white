#ifndef _IMAGE_H
#define _IMAGE_H

#include <string>

using namespace std;

class Image
{
private:
    string type_ascii;

public:
    Image();
    ~Image();
    void read_image();
    void set_type_ascii(string type_ascii);
    string get_type_ascii(); 
};

#endif // _IMAGE_H
