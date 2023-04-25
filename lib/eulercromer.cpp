#include "eulercromer.h"
#include <cmath>
#include "adder.h"


void EulerCromerStep(myMath::Point &p, double dt)
{
    double t = p.t, theta = p.theta, omega = p.omega, pos = p.pos, vel = p.vel;

    omega -= ((g * sin(theta) + 2 * vel * omega) / (L + pos)) * dt;
    vel += ((L + pos) * pow(omega, 2) + g * cos(theta) - (k / m) * pos) * dt;
    theta += omega * dt;
    pos += vel * dt;
    t += dt;

    p.t = t, p.theta = theta, p.omega = omega, p.pos = pos, p.vel = vel;
}