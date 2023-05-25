#ifndef _MATH_H_
#define _MATH_H_

#include "../PCH/std.h"
#include <cmath>

namespace Math {
    template<typename T> T floor(T num) {
        return std::floor(num);
    }

    template<typename T> T ceil(T num) {
        return std::ceil(num);
    }
}

#endif