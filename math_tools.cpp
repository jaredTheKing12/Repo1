#include "math_tools.h"

double integrate_1(double x, double x_dot, double dt)
{
    return x + x_dot*dt;
}

void integrate_2(double *x, double x_dot, double dt)
{
    *x = *x + x_dot*dt;
}

void integrate_3(double &x, double x_dot, double dt)
{
    x = x + x_dot*dt;
}

void integrate_4(double &x, double (*dyn)(double), double dt)
{
    // this is give a flexibility or a control over the function call
    // or the input arguments to the function
    double x_dot = dyn(x);  
    x = x + x_dot*dt;
}