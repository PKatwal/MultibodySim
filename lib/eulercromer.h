#pragma once
#include <string> // Include the <string> header for using the string type
#include "adder.h"

void EulerCromerStep(myMath::Point &p, double dt, myMath::linearAcceleration linAcc, myMath::angularAcceleration angAcc);

