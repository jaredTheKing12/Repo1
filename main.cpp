#include <iostream>
#include <string>

using namespace std; // if you don't want to type std::

struct Engine
{
  bool type;
  bool fuel_type;
};

// your custom datatype (structure or class) 
// has to be outside of the function
struct Car
{
  std::string make;
  std::string model;
  unsigned short year;
  double fuel_tank_size;
  Engine engine;
}; // do not forget a semi-colon

// a function named "add_one" that takes an integer as an input
// give another integer as the output.
// In general, a function can only return a single variable as
// an output
// int add_one(int n)
// {
//   return n+1;
// }

// what if we want to update more than one variables
// void function implies that there is no output from a function.
void add_one(int n)
{
  // {} determines the scope of the code.
  // the value of n is copied from the value of a at line
  // add_one(a);
  // n and a have the same value, but they have a different address
  // This means n and a are not really the same variable.
  n = n + 1; // 1 is added to n, not a
} // this is the end of a scope of n, which means n is gone at this line
// This is fine if you don't need n and a to be the same variable

// What if, you want to update the value of more than one variables
// within a function
void add_two(int* n, int* m) // we make n and m to be a pointer variable
{
  // // the pointer variable has an address of the other variable
  // // as its own value
  // std::cout << "n before add two: " << n << std::endl;
  // std::cout << "m before add two: " << m << std::endl;
  // // Theses lines below shifted the memory address where
  // // n and m are pointing to.
  // // As a result, n and m are not pointing to the memory address of
  // // a and b anymore.
  // n = n + 2; // this line means "address of n = address of n + 2"
  // m = m + 2; // this line means "address of m = address of m + 2"
  // std::cout << "n after add two: " << n << std::endl;
  // std::cout << "m after add two: " << m << std::endl;

  // To actually update the values of a and b, we need to
  // deference n and m
  std::cout << "dereferenced value n before add two: " << *n << std::endl;
  std::cout << "dereferenced value m before add two: " << *m << std::endl;
  *n = *n + 2; // this line means "dereferenced value of n = dereferenced value of n + 2"
  *m = *m + 2;
  std::cout << "dereferenced value n after add two: " << *n << std::endl;
  std::cout << "dereferenced value m after add two: " << *m << std::endl;
}

int main()
{
  // functions
  int a = 10, b = 20;;
  // add_two(a, b); // this has an error because a and b are a regular variable
  // but a pointer needs an address
  add_two(&a, &b); // give an address of a and b to pointers n and m
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;



/*
  // Datatypes
  int x = 1;
  x = 2;
  // a variable x has a value of 1 and it is stored somewhere
  // inside the memory, which has a specific memory address
  std::cout << "This is a value of x: " << x << std::endl;
  std::cout << "This is the address of x: " << &x << std::endl;

  // another fancy datatype
  int* x_ptr; // int* is a pointer. It is the same int *x_ptr;
  // we know that x is stored somewhere (&x) in the memory.
  // the pointer variable (x_ptr) is also stored somewhere in the memory.
  // The value of a pointer variable is an address 
  // of the other variable.
  x_ptr = &x; // set x_ptr to point to the address of x (reference)
  std::cout << "This is the value of x_ptr: " << x_ptr << std::endl;
  std::cout << "This is the address of x_ptr: " << &x_ptr << std::endl;

  // You can get back to value of the variable that a pointer
  // is point at by putting a * in front of a pointer variable
  // we can get the value of x from x_ptr
  // this is called "dereference" of a pointer
  std::cout << "Value of x obtained from x_ptr: " << *x_ptr << std::endl; 
 */
 { 
  // You can also create your own datatype from a collectionn
  // of primitive datatypes

  // Car (structure or class)
  // Any variables created from a structure/class is called an object.
  // The process of creating an object from a structure/class
  // is called an instantiation.
  Car TK_car; // Car is a stucture/class, and TK_Car is an object

  // Variables inside your structure/class are called 
  // "variable members"
  TK_car.make = "Toyota";
  TK_car.model = "corolla";
  TK_car.year = 2017;
  TK_car.engine.fuel_type = 0; // 0 diesel; 1 others

  Car someone_car; // somecar_car is also an object instantiated from a structure/class Car
  someone_car.make = "Honda";
 }
}
// I don't llke to code
