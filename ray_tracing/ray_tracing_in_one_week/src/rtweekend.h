//
// Created by 李昕阳 on 2025/11/2.
//

#ifndef RAY_TRACING_RTWEEKEND_H
#define RAY_TRACING_RTWEEKEND_H

#include<memory>
#include<iostream>
#include<limits>
#include<cmath>

using std::make_shared;
using std::shared_ptr;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

#include "color.h"
#include "ray.h"
#include "interval.h"
#include "vec3.h"

#endif //RAY_TRACING_RTWEEKEND_H