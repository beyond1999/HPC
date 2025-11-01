//
// Created by 李昕阳 on 2025/11/1.
//

#ifndef RAY_TRACING_HITTABLE_H
#define RAY_TRACING_HITTABLE_H

#include "ray.h"
class hit_record {
    public:
    point3 p;
    vec3 normal;
    double t;
};

class hittable {
    public:
    virtual ~hittable() = default;
    virtual bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const = 0;
};

#endif //RAY_TRACING_HITTABLE_H