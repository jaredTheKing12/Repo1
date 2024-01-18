#include "vehicle.h"

// this is a regular function named accelerate
// this function is not a part of a class Car
void accelerate()
{
    vel += 1; // error
}

// this is a function named accelerate that is a member of 
// a class Car
void Car::accelerate() 
{
    this->vel += 1; // can access class members
}