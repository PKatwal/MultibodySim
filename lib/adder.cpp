#include "adder.h"
#include"eulercromer.h"
#include <fstream>
#include <string>

void myMath::simulate(double tMax, double dt, std::string fileName)
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
        EulerCromerStep(p, dt);
        file << p.t << '\t' << p.theta << '\t' << p.omega << '\t' << p.pos << '\t' << p.vel << '\n';
    }

    //  cout << "End of Simulation" << fileName << endl;
    file.close();
}