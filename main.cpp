#include <iostream>
struct A
{
    A(){std::cout << "constructor of A" << std::endl;}; // constructor of A
    ~A(){std::cout << "deconstructor A" << std::endl;}; // cdeonstructor of A
    int a;
    void aa(){}
};

struct B : virtual public A // the virtual keyword makes class A virtual, which means any classes that try to derive from class A receive the same members
{
    B(int b_in){std::cout << "Constructor of B" << std::endl; this->b = b_in;};
    ~B(){std::cout << "deconstructor B" << std::endl;}
    int b;
    void bb(){}
};

struct C : virtual public A
{
    C(int c_in){std::cout << "Constructor of C" << std::endl; this->c = c_in;};
    ~C(){std::cout << "deconstructor C" << std::endl;}
    int c;
    void cc(){}
};

struct D : public B, public C
{
    int d;
    D() : B(1), C(2) // pass arguments from a derived class to base classes
    {
        std::cout << "Constructor of D" << std::endl;
    };

    D(int x) : B(x), C(2)
    {
        std::cout << "Constructor of D wint int x" << std::endl;
    }

    D(int x, int y) : B(x), C(y)
    {
        std::cout << "Constructor of D wint int x, int y" << std::endl;
    }

    D(int x, int y, int z) : B(x), C(y), d(z) // pass int x to a class B, pass int y to a class C, set a variable d to int z
    {
        // this->d = z; // one way to set a variable member to an input argument
        std::cout << "Constructor of D wint int x, int y, int z" << std::endl;
    }

    ~D(){std::cout << "deconstructor D" << std::endl;}
    void dd()
    {
        // this->aa(); // error, class D doesn't know where to pick function aa() from
        // one solution is to specify which aa() you want class D to use
        // this->B::aa();
        // this->C::aa();

        // the other solution is to use a 'virtual inheritance'
        this->aa();
    }
};

int main()
{
    D ddd; // when an object from a derived class is created, constructors from its base classes are called too.
    // in ther order from the base class to the derived class.
    // The deconstructor functions are called in the opposite order.

    D ddd1(10), ddd2(10,20), ddd3(10,20,30);

}