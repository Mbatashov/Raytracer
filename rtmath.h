#ifndef RTMATH_H
#define RTMATH_H
// file with constants and also the file dpeendencies
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <memory>

using std::make_shared;
using std::shared_ptr;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0; 
}

inline double random_double() {
    // returns double [0,1)
    return std::rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    //returns random in [min, max)
    return min + (max - min)*random_double(); 
}
//common headers
#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif