#pragma once
#include <string> // Include the <string> header for using the string type
#include "adder.h"
// Declaration of the EulerCromerStep function
extern const double g;  // Declaration of g as an external constant variable
extern const double L;  // Declaration of L as an external constant variable
extern const double m;  // Declaration of m as an external constant variable
extern const double k;  // Declaration of k as an external constant variable



void EulerCromerStep(myMath::Point &p, double dt);