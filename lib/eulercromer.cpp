#include "eulercromer.h"
#include <cmath>
#include "adder.h"

void EulerCromerStep(myMath::Point &p, double dt, myMath::linearAcceleration linAcc, myMath::angularAcceleration angAcc)
{
    double t = p.t, theta = p.theta, omega = p.omega, pos = p.pos, vel = p.vel;

	double linearAcc = linAcc(p);
	double angularAcc = angAcc(p);

	omega -= angularAcc * dt;
	vel += linearAcc * dt;
	theta += omega * dt;
	pos += vel * dt;
	t += dt;

	p.t = t, p.theta = theta, p.omega = omega, p.pos = pos, p.vel = vel;
}