#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/triangle_number_calculator.hpp"

TEST_CASE( "value() returns the Triangular number of 1" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.value(1) == 1 );
}

TEST_CASE( "value() returns the Triangular number of 2" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.value(2) == 3 );
}

TEST_CASE( "value() returns the Triangular number of 3" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.value(3) == 6 );
}

TEST_CASE( "value() returns the Triangular number of 4" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.value(4) == 10 );
}

TEST_CASE( "value() returns the Triangular number of 5" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.value(5) == 15 );
}

TEST_CASE( "value() returns the Triangular number of 12" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.value(12) == 78 );
}

TEST_CASE( "Adding T1 and T1 = 2" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.add(1, 1) == 2 );
}

TEST_CASE( "Adding T1 and T2 = 2" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.add(1, 2) == 4 );
}

TEST_CASE( "Adding T2 and T2 = 6" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.add(2, 2) == 6 );
}

TEST_CASE( "Adding T1 and T3 = 7" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.add(1, 3) == 7 );
}

TEST_CASE( "Adding T3 and T4 = 2" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.add(3, 4) == 16 );
}

TEST_CASE( "Subtracting T1 and T1 = 0" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.subtract(1, 1) == 0 );
}

TEST_CASE( "Subtracting T2 and T1 = 2" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.subtract(2, 1) == 2 );
}

TEST_CASE( "Subtracting T3 and T1 = 5" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.subtract(3, 1) == 5 );
}

TEST_CASE( "Subtracting T3 and T2 = 3" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.subtract(3, 2) == 3 );
}

TEST_CASE( "Subtracting T2 and T4 = 0" ) {
    TriangleNumberCalculator tri_calc;
    REQUIRE( tri_calc.subtract(2, 4) == -7 );
}