// let's write a function that does an integration
double integrate_1(double x, double x_dot, double dt);
void integrate_2(double *x, double x_dot, double dt);
void integrate_3(double &x, double x_dot, double dt);

// *dyn is a function pointer to another function, which will be
// an input to this integrate_4 function
void integrate_4(double &x, double (*dyn)(double), double dt);