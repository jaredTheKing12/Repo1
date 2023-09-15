#include <iostream>
#include <string>

// any variables declared outside of the scope
// are called a global variables.
// It exists as long as the program runs.
int x = 10; 

int main()
{
  // the computer will automatically allocate a part of
  // mmeory for this int abc
  int abc = 1;

  // what if, I want empty 4 bytes of memory
  // I can ask for it using a pointer.
  int* def = new int; // int is 4 bytes
  // I have empty memory address of 4 bytes that this def
  // pointer is pointing at.

  // What if I want more than 4 bytes
  int* g = new int[5]; // 5*sizeof(int) == 5*4 = 20
  // g is still a local variables but it is pointing to
  // a memory address that gives me 20 bytes of memory
  std::cout << &g[0] << "," << &g[1] << std::endl;

  // int* hh;
  {
    int* h = new int[3]; // 12 bytes of memory
    // h is a stack/local variables
    // The scope of h is from line 28 to 34
    h[0] = 1357;
    // hh = &h[0];
  } // h will be destoryed here
  // what happen with the memory that h gave to me?
  // std::cout << "*hh: " << *hh << std::endl;
  // If I don't have hh, I will lose track of the memory
  // I got from h because h was destroy
  // However, the memory blocks that h gave me still there
  // inside the memory. I just do not have a way to access
  // those memory anymore.
  // This is called "memory leak"




  // std::cout << x << std::endl;

  {
    int x = 2;
    // std::cout << x << std::endl; // this line will use a local x instead
  }

  for(int i = 0; i < 10; i++)
  {
    // The static keyword put y at a different part of 
    // memory than not using a static keyword
    // int y = 100; // y is stored at stack memory
    // static int y = 100; // y is stored at static memory

    static int y = 100;
    y = y + 1;
    std::cout << y << ", " << &y << std::endl;
  } // y is not destroyed here because of static keyword

} // a,b,c,x,y,z will be removed from the memory at this line