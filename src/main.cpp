#include "../lib/adder.h"
#include "../lib/eulercromer.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

const double g = 9.81; // acceleration of gravity
const double L = 1;    // length in meters
const double m = 1;    // m = 2
const double k = 40;   // k = 100



int main()
{
    std::cout << "Simulation of Spring Pendulum using Euler-Cromer Library\n"
         << "--------------------------------------------------------\n";
    double tMax, dt;
    std::cout << "Enter time step dt (s): ";
    std::cin >> dt;
    std::cout << "Enter integration time t_max: ";
    std::cin >> tMax;
    std::cout << "Running simulation using Euler-Cromer method" << std::endl;
    myMath::simulate(tMax, dt, "SpringSingleSim.data");
}
