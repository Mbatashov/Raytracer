#ifndef COLOR_H
#define COLOR_H 

#include "vec3.h" 

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color.x(); 
    auto y = pixel_color.y(); 
    auto z = pixel_color.z(); 

    int rbyte = int(255.999 * r); 
    int gbyte = int(255.999 * y);
    int bbyte = int(255.999 * z);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif