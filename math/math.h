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

        template<typename T> double tax(T numToTax) {
        int b1n1 = 250000;
        int b1n2 = 500000;
        int b2n2 = 750000;
        int b3n2 = 1000000;
        int b4n2 = 1250000;
        int b5n2 = 1500000;

        if (numToTax > b1n1) {
            return numToTax;
        } else if (numToTax > b1n1 and numToTax <= b1n2) {
            return numToTax - (numToTax * (5 / 100));
        } else if (numToTax > b1n2 and numToTax <= b2n2) {
            return numToTax - (numToTax * (10 / 100));
        } else if (numToTax > b2n2 and numToTax <= b3n2) {
            return numToTax - (numToTax * (15 / 100));
        } else if (numToTax > b3n2 and numToTax <= b4n2) {
            return numToTax - (numToTax * (20 / 100));
        } else if (numToTax > b1n2 and numToTax <= b5n2) {
            return numToTax - (numToTax * (25 / 100));
        } else {
            return numToTax - (numToTax * (30 / 100));
        }
    }

    template<typename T> T square(T num) {
        return num * num;
    }

    template<typename T> T cube(T num) {
        return num * num * num;
    }

    template<typename T> double percent(T mainNumder, T percent) {
        return mainNumder * (percent / 100);
    }

    template<typename T> double factorial(T numTofactorial) {
        if (numTofactorial == 1) {
            return 1;
        }

        return numTofactorial * factorial(numTofactorial - 1);
    }
}

#endif