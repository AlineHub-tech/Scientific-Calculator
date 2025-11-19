#include "operations.h"
#include <iostream>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) return a / b;
    std::cerr << "Error: Division by zero!" << std::endl;
    return 0;
}
