#include <iostream>
#include <vector>
#include "vehicle.h"

// to name your own datatype without using struct/class
using matrix = std::vector<std::vector<double>>;
typedef std::vector<std::vector<double>> MATRIX;

// But usually we need a proper object (struct/class) that contains
// variables and functions (members) within the object
class Car{
    // There is a concept of an encapsulation where some of the
    // class members cannot be accessed from outside the class
private: // class is private by default
    double pos, vel; // variable members
public:
    // any members below this public: will be public members
    char ccc = 'c';
    void accelerate() // a function member
    {
        this->vel += 1;
    }
protected: // later when we talk about inheritance
};

int main()
{
    Car c;
    c.accelerate();


    // matrix A = {{1,2,3}, {4,5,6}};
    // matrix B = {{1,2,3}, {4,5,6}};
    // MATRIX C = {{1,2,3}, {1,2,4}};
    
}   
    