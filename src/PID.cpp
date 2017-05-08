#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
}

void PID::UpdateError(double cte) {
    double e = -cte;
    i_error += e;
    d_error = e - p_error;
    p_error = e;
}

double PID::GetOutput() {
    return Kp * p_error + Ki * i_error + Kd * d_error;
}

double PID::TotalError() {
    return i_error;
}

