// to solve the link issue, we need a header file
// we need to include the header file into all .cpp files
// that we need to link them together

// we also need to tell the compiler, which function
// and/or variables/struct/class that we need to link
#include <string>
void print(std::string s); // function prototype
// it only shows the name of the function, input & output arguments/datatypes