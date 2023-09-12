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

int main()
{
  // Datatypes
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
