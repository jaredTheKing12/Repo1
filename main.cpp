#include <iostream>
#include <vector>
#include <array>
#include "vehicle.h"
#include "math_tools.h"

// Today: Finish up the operator overloading + quiz
// - HW1 solution
// - HW2

// To use an operator overloading function outside a class, one of the input argurments must be a class
void operator/(Matrix M, char c)
{
    std::cout << "Matrix / char" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Matrix m)
{
    for(int i = 0; i < m.get_rows(); i++)
    {
        for(int j = 0; j < m.get_column(); j++)
        {
            os << m.get_element(i,j) << " ";
        }
        os << std::endl;
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, std::vector<double> v)
{
    for(auto e : v)
        os << e  << " ";
    return os;
}

int main()
{
    Matrix A(std::vector<std::vector<double>>{{1,2,3}, {4,5,6}});
    std::vector<double> x = {7,8,9};
    A/'a';

    auto y = A*x; // y is a vector
    std::cout << "A: " << A << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}   
    