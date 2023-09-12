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
int add_one(int n)
{
  return n+1;
}

int main()
{
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
