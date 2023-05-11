#include <catch2/catch_test_macros.hpp>
#include "../lib/eulercromer.h"
#include"../lib/adder.h"
#include "../include/constants.h"
#include "tests.h"

TEST_CASE( "EulerCromer Test 0 = 0 (pass)", "[single-file]" ) {
    myMath::Point p; // Use the fully qualified name myMath::Point
    p.t = 0;
    p.theta = 2.3562;
    p.omega = 0;
    p.pos = 0;
    p.vel = 0; 
  
    REQUIRE( p.pos == 0);
    EulerCromerStep(p, 0.1, myMath::linearAccFunc, myMath::angularAccFunc);
    REQUIRE( p.pos != 0);
}