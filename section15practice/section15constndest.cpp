#include <iostream>
#include <string>

class Base
{
private:
    int value;

public:
    Base() : value{0} { std::cout << "Base no-args constructor" << std::endl; }
    Base(int x) : value{x} { std::cout << "Base (int) overloaded constructor for: " << x << std::endl; }
    ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived : public Base
{
private:
    int doubled_value;

public:
    Derived() : Base{}, doubled_value{0} { std::cout << "Derived no-args constructor" << std::endl; }
    Derived(int x) : Base{x}, doubled_value{x * 2} { std::cout << "Derived (int) overloaded constructor for: " << doubled_value << std::endl; }
    ~Derived() { std::cout << "Derived destructor" << std::endl; }
};

int main()
{
    // Base b;
    {Base b{100};} // Parantezler iş bitince b'nin destructor'ını çağırır. Öbür türlü main'in sonuna kadar b'nin destructor'ı çağrılmaz.
    std::cout << "#####" << std::endl;
    // Derived d;
    Derived d2{100};
    return 0;
}
