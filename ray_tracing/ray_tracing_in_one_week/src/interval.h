//
// Created by 李昕阳 on 2025/11/2.
//

#ifndef RAY_TRACING_INTERVAL_H
#define RAY_TRACING_INTERVAL_H
#include <limits>

class interval {
    public:
    double min;
    double max;
    interval(): min(-infinity), max(+infinity) {}
    interval(double _min, double _max) : min(_min), max(_max) {}

    double size() const { return max - min; }

    bool contains(double x) const {
        return min <= x && x <= max;
    }

    bool surrounds(double x) const {
        return min < x && x < max;
    }

    static const interval empty, universe;
};

const interval interval::empty = interval(infinity, -infinity);
const interval interval::universe = interval(-infinity, infinity);

#endif //RAY_TRACING_INTERVAL_H