#include "scientific.h"
#include <cmath>
#include <iostream>

double power(double base, double exponent) {
    return std::pow(base, exponent);
}

double squareRoot(double value) {
    if (value < 0) {
        std::cerr << "Error: Negative value!" << std::endl;
        return 0;
    }
    return std::sqrt(value);
}

double sine(double angle) {
    return std::sin(angle);
}

double cosine(double angle) {
    return std::cos(angle);
}

double tangent(double angle) {
    return std::tan(angle);
}

