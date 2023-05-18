#include "adder.h"
#include"eulercromer.h"
#include <fstream>
#include <string>
#include <cmath>
#include "../include/constants.h"

void myMath::simulate(double tMax, double dt, const std::string& fileName)
{
    myMath::Point p; // Use the fully qualified name myMath::Point
    p.t = 0;
    p.theta = 2.3562;
    p.omega = 0;
    p.pos = 0;
    p.vel = 0;
    std::ofstream file(fileName.c_str());

    while (p.t <= tMax)
    {
        EulerCromerStep(p, dt, myMath::linearAccFunc, myMath::angularAccFunc);
        file << p.t << '\t' << p.theta << '\t' << p.omega << '\t' << p.pos << '\t' << p.vel << '\n';
    }

    //  cout << "End of Simulation" << fileName << endl;
    file.close();
}

double myMath::linearAccFunc(myMath::Point& p)
{
	return (L + p.pos) * pow(p.omega, 2) + g * cos(p.theta) - (k / m) * p.pos;
}

double myMath::angularAccFunc(myMath::Point& p)
{
	return (g * sin(p.theta) + 2 * p.vel * p.omega) / (L + p.pos);
}
