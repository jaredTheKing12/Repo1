// .h file contains a class
// inside that class, there are members
// for function members, we usually put only function prototype

class Car
{
    double pos, vel;
public:
    // put only function prototype in the header file.
    // the function implementation will be in .cpp file.
    void accelerate(); // do not forget a semi-colon
};