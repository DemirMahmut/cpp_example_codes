#include <iostream>
#include <string>

class Base
{
private:
    std::string name;

public:
    // operator overloading
    friend std::ostream &operator<<(std::ostream &os, const Base &obj)
    {
        os << obj.name;
        return os;
    }

    Base() : name{"Base"} {}
    Base(const std::string &name) : name{name} {}
    ~Base() {}
};

class Derived : public Base
{
private:
    int value;

public:
    // operator overloading
    friend std::ostream &operator<<(std::ostream &os, const Derived &obj)
    {
        os << static_cast<const Base &>(obj) << " " << obj.value;
        return os;
    }

    Derived() : Base{}, value{0} {}
    Derived(const std::string &name, int value) : Base{name}, value{value} {}
    ~Derived() {}
};

int main()
{
    Base b{"Base"};
    std::cout << b << std::endl;

    Derived d{"Derived", 100};
    std::cout << d << std::endl;

    return 0;
}