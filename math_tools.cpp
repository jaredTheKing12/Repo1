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

// implementation of function members in a Matrix class
void Matrix::add_elements()
{
    for(int i = 0; i < this->num_rows; i++)
    {
        for(int j = 0; j < this->num_cols; j++)
        {
            double dat;
            std::cin >> dat;
            this->data[i][j] = dat;
        }
    }
}

void Matrix::set_num_rows(int n)
{
    this->num_rows = n;
}

// this is a function implememtation of a constructor
Matrix::Matrix()
{
    std::cout << "Matrix Created" << std::endl;
    this->num_cols = 13;
    this->num_rows = 10;
    for(int i = 0; i < this->num_rows; i++)
    {
        std::vector<double> tmp;
        for(int j = 0; j < this->num_cols; j++)
        {
            tmp.push_back(0);
        }
        this->data.push_back(tmp);
    }
}

Matrix::Matrix(int x)
{
    std::cout << "A constructor with input x: " << x << std::endl;
}

Matrix::Matrix(std::vector<std::vector<double>> v)
{
    this->data = v;
}

Matrix::~Matrix()
{
    std::cout << "Matrix Destroyed" << std::endl;
}

void Matrix::add_two(int x)
{

}

void Matrix::add_two(double x, float y)
{

}

void Matrix::operator+(double a)
{
    for(int i = 0; i < this->data.size(); i++)
    {
        for(int j = 0; j < this->data[i].size(); j++)
        {
            this->data[i][j] += a;
        }
    }
}

void Matrix::operator*(double a)
{
    for(int i = 0; i < this->data.size(); i++)
    {
        for(int j = 0; j < this->data[i].size(); j++)
        {
            this->data[i][j] *= a;
        }
    }
}

void Matrix::operator*(Matrix A)
{
    std::cout << "Matrix Multiplication" << std::endl;
}

double Matrix::operator-(int a)
{
    return -1;
}


void Matrix::print()
{
    for(int i = 0; i < this->data.size(); i++)
    {
        for(int j = 0; j < this->data[i].size(); j++)
        {
            std::cout << this->data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}