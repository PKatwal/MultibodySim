#pragma once

#include <string> // Include the <string> header for using the string type

namespace myMath {
    struct Point
    {
        double t;
        double theta;
        double omega;
        double pos;
        double vel;
    };
    
    void simulate(double tMax, double dt, const std::string& fileName); // Update the simulate function declaration
}