//
// Created by 李昕阳 on 2025/11/4.
//

#ifndef RAY_TRACING_MATERIAL_H
#define RAY_TRACING_MATERIAL_H

#include "color.h"
#include "hittable.h"

class material {
    public:
    virtual ~material() = default;
    virtual bool scatter(const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered) const {
        return false;
    }
};

#endif //RAY_TRACING_MATERIAL_H