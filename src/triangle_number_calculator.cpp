#include "triangle_number_calculator.hpp"

int TriangleNumberCalculator::value(int n) {
    if (n == 1) {
        return 1;
    }

    return value(n-1) + n;
}

int TriangleNumberCalculator::add(int n, int m) {
    return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) {
    return value(n) - value(m);
}