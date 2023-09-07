#include <iostream>
#include <string>

using namespace std; // if you don't want to type std::

struct Engine
{
  bool type;
  bool fuel_type;
};

struct Car
{
  std::string make;
  std::string model;
  unsigned short year;
  double fuel_tank_size;
  Engine engine;
};

int main()
{
  // Datatypes
  // Primitive Datatypes (Basic ones)

{
  int x = 10; 
  // 10 is store in a memory block as 00000110
  // Q: Where exactly is this 000001110 ?
  // A: It is stored at the address of x.
  // Q: What exactly is the address of x?
  // A: You ask a computer for it.
  // Q: How do we ask for it?
  // A: By putting a symbol & in front of the variable.
  std::cout << "This is the value of x: " << x << std::endl;
  std::cout << "This is the address of x: " << &x << std::endl;
}

  // Fancy Ones
  int y[3] = {1,2,3}; //array (a set of a primitive data type)

  // You can also create your own datatype from a collectionn
  // of primitive datatypes
  Car TK_car;
  TK_car.make = "Toyota";
  TK_car.model = "corolla";
  TK_car.year = 2017;
  TK_car.engine.fuel_type = 0; // 0 diesel; 1 others

  Car someone_car;
  someone_car.make = "Honda";
}
// I don't llke to code
