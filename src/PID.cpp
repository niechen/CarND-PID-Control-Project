#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Kd = Kd;
  this->Ki = Ki;
  initialized = false;

  cout << Kp << ", " << Kd << ", " << Ki << endl;
}

void PID::UpdateError(double cte) {
  if (!initialized) {
    initialized = true;
    prev_cte = cte;
  }

  p_error = cte;
  d_error = cte-prev_cte;
  i_error += cte;

  cout << p_error << ", " << d_error << ", " << i_error << endl;
}

double PID::TotalError() {
  return -Kp*p_error-Kd*d_error-Ki*i_error;
}

