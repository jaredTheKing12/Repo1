// to move print() to this print.cpp file
#include <iostream>
#include <string> // using <> will tell the compiler to
// look for the file inside the system folders

#include "print.h" // using "" to tell the compiler to look
// for print.h in a local/relative folder

void print(std::string s)
{
    // everything within {} part of the function is called
    // function implementation
    std::cout << s << std::endl;
}