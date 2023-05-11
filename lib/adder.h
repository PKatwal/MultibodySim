#pragma once

#include <string> // Include the <string> header for using the string type
// Declaration of the EulerCromerStep function

namespace myMath {
    struct Point
    {
        double t;
        double theta;
        double omega;
        double pos;
        double vel;
    };
    typedef double (*linearAcceleration)(Point&);
    typedef double (*angularAcceleration)(Point&);
    
    void simulate(double tMax, double dt, const std::string& fileName); // Update the simulate function declaration

    double linearAccFunc(Point& p);
    double angularAccFunc(Point& p);
}