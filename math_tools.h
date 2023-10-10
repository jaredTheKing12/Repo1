#include <vector>
#include <iostream>

// let's write a function that does an integration
double integrate_1(double x, double x_dot, double dt);
void integrate_2(double *x, double x_dot, double dt);
void integrate_3(double &x, double x_dot, double dt);

// *dyn is a function pointer to another function, which will be
// an input to this integrate_4 function
void integrate_4(double &x, double (*dyn)(double), double dt);

class Matrix
{
    int num_rows, num_cols; // these are not initialized
    // what if I want my vector of vectors to contain something
    // else beside double or a specific primitive datatype.
    std::vector<std::vector<double>> data; // not initialzed
public:
    // There are several ways to initialize variable members
    // within a class
    // 1) make variables public and set the value outside a class
    // 2) Create a get/set function
    // 3) Use a constructor

    Matrix(); // this is a constructor
    // A constructor has the same name as a class
    // A constructor is a special function member of a class
    // It will be called autonmatically when an object
    // is instantiate from a class

    Matrix(int x);
    Matrix(std::vector<std::vector<double>> v);

    void add_two(int x);
    void add_two(double x, float y);

    ~Matrix(); // this is deconstructor/destoryer
    // This is also a special function that will be called when
    // the object goes out of a scope

    void set_num_rows(int n);
    void add_elements();
    void transpose();

    // Operator Overloading Functions
    // I will overload a + operator
    // we want is to have a matrix plus a scalar = another matrix
    void operator+(double a);
    void operator*(double a);
    void operator*(Matrix A);
    double operator-(int a);

    void print();
};

// Template Class
// template class called AnotherMatrix with T as a generic type
// Note: When we use a template class, all of the function
// implementations must be in the header file.
// Cannot be separated into another .cpp file

namespace aersp{
    template<typename T> 
    class AnotherMatrix
    {
        std::vector<std::vector<T>> data;
    public:
        AnotherMatrix(){
            std::cout << "AnotherMatrix Created" << std::endl;
        }
        ~AnotherMatrix(){
            std::cout << "AnotherMatrix Destroyed" << std::endl;
        }
    };
}