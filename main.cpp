#include <iostream>
#include <vector>
#include <array>
#include "vehicle.h"
#include "math_tools.h"

// Function Overloading
// In C++, we can have multiple functions with the same name
// but have different input arguments
// Note: this feature doesn't exist in C.

int add_one(int x)
{
    return x + 1;
}

double add_one(double x)
{
    return x + 1;
}

int summation(int x, int y)
{
    return x+y;
}

int summation(int x, int y, double z, unsigned w)
{
    return x+y+w+z;
}

// We can also implement a operator overloading function outside a class
// Matrix / char
// When the operator overloading function is outside a class/struct
// One of the input arguments must me a class so that we can
// perform some operations on that class

// syntax probably wrong
void operator/(Matrix& M, char c)
{
    std::cout << "Matrix / char" << std::endl;
}

int main()
{
    // Matrix m0;
    // std::cout << (m0 + (char)'a') << std::endl;
    // Matrix m = {{1,2,3}, {4,5,6}}; // right now, I have an error.
    // Matrix m1;
    // Matrix m2 = 2;
    // Matrix m3(3);
    Matrix m4 = std::vector<std::vector<double>>{{1,2,3}, {4,5,6}};
    Matrix m5(std::vector<std::vector<double>>{{1,2,3}, {4,5,6}});

    m5.print();
    m5 + 10;
    m5.print();
    m5 * 100;
    m5.print();
    m5*m5;
    m5*m4;
    std::cout << m5-0.3 << std::endl;
    m5/'a';
    // Matrix m6 = m5 + 1;
    // m6.print();
    // Here we have m5 = {{1,2,3}, {4,5,6}}
    // What if I want to add one to m5
    // m5 + 1 should be {{2,3,4}, {5,6,7}}
    // m5 * 2 should be {{2,4,5}, {8,10,12}}

    // Overloading
    // There are two types of overloading
    // 1) Function Overloading
    // 2) Operator Overloading
    // Each of them can be used either in a class 
    // or outside of a class 

    // Function Overloading
    // In C++, we can have multiple functions with the same name
    // but have different input arguments
    // Note: this feature doesn't exist in C.

    std::array<char,4> ar;    
}   
    