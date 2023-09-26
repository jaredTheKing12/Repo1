#include "print.h"
#include "math_tools.h"
#include "dynamics.h"

#include <iostream>

// the function is stored somewhere in the memory
// which means there is an address that corresponds to where
// the function is
// The function pointer can be used to point to a memory address
// where the function is
int foo()
{
    return 5;
}

double summation(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

#include <array> // to use C++ style array
#include <string>
#include <vector>
#include <stack>
#include <map>
int main()
{
    // today: another fancy data type "container"
    // A container is another type of variable that contains
    // primitive variables.

    // Simplest container is an array
    // An array needs a size at the declaration step
    // but the elements inside the array is optional
    int a[3] = {1,2,3}; // non-empty array (C-style array)
    double b[4]; // an empty array (C-style array)

    // C++ has another syntax/way to create an array
    // To use C++ style array, we need to include <array>
    std::array<std::string, 2> new_arr; // still need a fixed size
    // do not need to know the value of the array size
    for(int i = 0; i < new_arr.size(); i++) 
    {
        // use [] to access each element of the array
        // same C-style array
        new_arr[i] = "sentence";
    }

    // another popular container is a vector
    // vector is similar to an array, but you don't need to specify
    // the size at the declaration
    std::vector<double> v1; // an empty vector
    std::vector<float> v2 = {1,2,3}; // a non-empty vector
    // I try to put 0.2 in a memory block that wasn't properly 
    // allocated for a vector v1
    v1.push_back(0.2);
    std::cout << v1[0] << std::endl;
    v1[0] = 0.5;
    v1.push_back(1.1234);
    v1.push_back(0.5);
    std::cout << v1[1] << std::endl;
    std::cout << "v1 size: " << v1.size() << std::endl;
    // v2[0] = 0.3;
    // std::cout << v2[0] << ", " << v2[1] << ", " << v2[2] << std::endl;

    std::stack<int> s;
    for(int i =0; i<5;i++)
        s.push(i);
    while(!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    std::array<int,3> arr = {2,34,5};
    arr[1]; // 34
    // for an array/vector, a key is a number
    // a value is that datatype in the array

    // a key is a string, a value is double
    std::map<std::string, double> m;
    // adding an element to a map
    m.insert({"PennState", 6.6});
    m.insert({"Aerospace", 3.2});

    // to access map element
    std::cout << m["PennState"] << std::endl;
    std::cout << m["Aerospace"] << std::endl;










#if 0
    int (*fp)() = &foo;
    double (*fp_sum)(double, double) = &summation;

    std::cout << fp() << std::endl;
    std::cout << fp_sum(2,3) << std::endl;

    fp_sum = &subtraction; // point the function pointer to other functions

    // on the right side of the equation means that same thing
    // as a regular pointer. & gives an address

    // int is the return type of the function that we want to point to
    // (*fp)() --> *fp then do the second () or a function call operator
    // *fp()   -->  fp() then do *


  // Write a code with multiple files (.cpp / .h)
//   print("hello"); // the error arises because we haven't linked main.cpp with print.cpp yet

    // 1+2*0.1
    // std::cout << integrate(1,2,0.1) << std::endl;
    // double y = integrate(1,2,0.1);

    // double y = 1, y_dot = 3, dt = 0.1;
    // integrate_2(&y, y_dot, dt);
    // std::cout << y << std::endl;

    // integrate_3(y, y_dot, dt);
    // std::cout << y << std::endl;

    // double init_state = 10;
    // double derivative = some_dynamics(init_state);
    // double next_state;
    // integrate_2(&init_state, derivative, dt);

    // some_dynamics(init_state) is a number, not a function
    // this number is given to a function integrate_3 as an input
    // integrate_3(init_state, some_dynamics(init_state), dt);

    // f is a function
    // f(x) is a number
    // Instead of giving a number as an input to a functiion
    // we can also give a function as an input to another function
    // This concept is called a function pointer
    #endif
}