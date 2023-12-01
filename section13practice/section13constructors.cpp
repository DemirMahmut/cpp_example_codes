#include <iostream>

class constructor
{
private:
    std::string name;
    int age;
public:
    std::string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    constructor(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    constructor(const constructor &copy)
    {
        name = copy.name;
        age = copy.age;
    }
};

void print(constructor c)
{
    std::cout << c.getname()   << std::endl;
    std::cout << c.getage() << std::endl;
}

int main()
{
    constructor c1("ali", 20);
    constructor c2 = c1;
    print(c2);
    return 0;
}

