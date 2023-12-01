#include <iostream>

class Test
{
private:
    static int count; // static member variable

public:
    Test() // constructor
    {
        count++; // increment static member variable
        std::cout << "Constructor called" << std::endl; 
    }

    static int getCount() // static member function
    {
        return count; // return static member variable
    }
};

int Test::count = 0; // initialize static member variable
int main()
{
    std::cout << Test::getCount() << std::endl;
    Test t1;
    Test t2;
    Test t3;
    std::cout << Test::getCount() << std::endl;

    return 0;
}
