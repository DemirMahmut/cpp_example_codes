#include <iostream>
#include <string>

class deepCopy
{
private:
    int num;
    std::string name;
    int *ptr;

public:
    void set_ptr(int tmp)
    {
        *ptr = tmp;
    }
    int get_ptr()
    {
        return *ptr;
    }
    deepCopy(int tmp); // default constructor

    deepCopy(const deepCopy &copy); // copy constructor

    ~deepCopy(); // destructor
};

deepCopy::deepCopy(int tmp)
{
    ptr = new int;
    *ptr = tmp;
}

deepCopy::deepCopy(const deepCopy &copy) : deepCopy(*copy.ptr)
{
    std::cout << "copy constructor called" << std::endl;
}

deepCopy::~deepCopy()
{
    delete ptr;
    std::cout << "destructor called" << std::endl;
}

void display(deepCopy c)
{
    std::cout << c.get_ptr() << std::endl;
}

int main()
{
    deepCopy c1(10);
    deepCopy c2 = c1;
    display(c2);
    return 0;
}
