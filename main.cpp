#include <iostream>
#include <vector>
#include <map>
#include <string>

int main()
{
    // Today Topics:
    // Iterator, Template, Struct/Class

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
}   
    