#include <iostream>
#include <string>

class shallowCopy
{
private:
    int num;
    std::string name;

public:
    shallowCopy()
    {
        num = 0;
        name = "None";
    }

    shallowCopy(int num, std::string name)
    {
        this->num = num;
        this->name = name;
    }

    void display()
    {
        std::cout << "num: " << num << std::endl;
        std::cout << "name: " << name << std::endl;
    }
};

int main()
{
    shallowCopy obj1(10, "obj1");
    shallowCopy obj2(obj1);

    obj1.display();
    obj2.display();

    return 0;
}