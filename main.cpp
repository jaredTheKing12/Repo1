#include <iostream>
#include <vector>
#include <map>
#include <string>

#define ITERATOR 0

// create a generic type called "MY_TYPE"
template<typename MY_TYPE>
void print(MY_TYPE x)
{
    // I want this print function to be able to print
    // any primitive datatype that I'm giving to it
    std::cout << x << std::endl;
}

// what if I want to do a summation of
// std::vector<int> and std::vector<double> or std::array<double>
template<typename T, typename U>
T add_two_vectors(T a, U b)
{
    T c;
    for(int i = 0; i < a.size(); i++)
    {
        c.push_back(a[i] + b[i]);
    }
    return c;
}

// struct Car // all members in a struct are public by default
class Car // all members in a class are private by default
{
private:
    // a struct can contain variables
    double position = 0;
    double velocity = 0;
    
public:
    std::vector<char> something;
    // a struct can also contain functions
    void show_postion()
    {
        std::cout << position << std::endl;
    }

    void show_velocity()
    {
        std::cout << velocity << std::endl;
    }

    void move()
    {
        position += 1;
    }
};

int main()
{
    // struct / class
    // Car is a struct or a class
    // toyota is an object instantiated for a class Car
    Car toyota;
    // private means I cannot access class/struct members outside
    // of that class/struct
    toyota.show_postion();
    toyota.move();
    toyota.show_postion();

    // std::vector<int> x1 = {1,2,3};
    // std::vector<double> x2 = {1.1,2.2,3.3};
    // auto y = add_two_vectors(x2,x1);
    // for(auto i : y)
    //     std::cout << i << std::endl;

    // Today Topics:
    // Iterator, Template, Struct/Class

    // Template
    // For a function, I can give variables as an input
    // I can also give another as an input (function pointer)
    // With a template, I can have a datatype being an input to
    // a function.
    // All containers are template
    std::vector<int> v1 = {10,20,30}; // I'm giving int as an input to std::vector
    std::vector<std::map<char,int>> v2;
    // I'm giving char and int as inputs to std::map
    // I'm giving std::map as an input to std::vector
    // print(1.3);
    // print(10);
    // print('a');
    // print("world");

#if ITERATOR
    // Iterator is a fancy pointer for a container.
    std::vector<double> vector_double;
    vector_double.push_back(1.2);
    vector_double.push_back(1.1);
    vector_double.push_back(3.4);

    // normal, I can use a for loop with an integer i 
    // to access each element.
    for(unsigned int i = 0; i < vector_double.size(); i++)
    {
        std::cout << vector_double[i] << std::endl;
    }
     
    // v will be each element inside a vector
    // in each iteration, the value of v will change to
    // another element in the vector
    for(double v : vector_double)
    {
        std::cout << v << std::endl;
    }

    // the third method to access each element inside a container
    // is to use an iterator
    // declare a pointer specific to a container
    std::vector<double>::iterator itr;
    for(itr = vector_double.begin(); itr != vector_double.end(); itr++)
    {
        std::cout << *itr << std::endl;
    }

    // the fourth method
    for(auto it = vector_double.begin(); it != vector_double.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // an iterator with a map
    std::map<std::string,std::vector<int>> m;
    m.insert({"word",{1,2,3}});
    m.insert({"abc",{4,5,6}});
    m.insert({"hello",{7,8,9}});

    // If I want access each element of a map m
    // Since the key of a map is std::string, I cannot use
    // for(int i = 0; i < ...; i++)
    // This is when we have to use an iterator
    // First, I need to create an iterator for my map m
    // std::map<std::string,std::vector<int>>::iterator map_itr;
    for(auto map_itr = m.begin(); map_itr != m.end(); map_itr++)
    {
        std::cout << "Key: " << map_itr->first << ", ";
        std::cout << "Value: ";
        for(auto i : map_itr->second)
        {
            std::cout << i << ", ";
        }
        std::cout << std::endl;
    }
#endif
}   
    