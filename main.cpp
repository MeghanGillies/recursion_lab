#include <iostream>

#include "src/triangle_number_calculator.hpp"

int main() {
    TriangleNumberCalculator tri_calc;

    std::cout << "T1 = " << tri_calc.value(1) << std::endl; // This should print out 1
    std::cout << "T2 = " << tri_calc.value(2) << std::endl; // This should print out 3
    std::cout << "T4 = " << tri_calc.value(4) << std::endl; // This should print out 10

    std::cout << "T1 + T1 = " << tri_calc.add(1, 1) << std::endl; // This should print out 2
    std::cout << "T2 + T3 = " << tri_calc.add(2, 3) << std::endl; // This should print out 9
    std::cout << "T4 + T2 = " << tri_calc.add(4, 2) << std::endl; // This should print out 13

    std::cout << "T1 - T1 = " << tri_calc.subtract(1, 1) << std::endl; // This should print out 0
    std::cout << "T2 - T3 = " <<  tri_calc.subtract(2, 3) << std::endl; // This should print out -3
    std::cout << "T4 - T2 = " <<  tri_calc.subtract(4, 2) << std::endl; // This should print out 7

    return 0;
}
