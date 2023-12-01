#include <iostream>
#include <vector>

template <typename T>
class Test
{
private:
    T obj;

public:
    Test(T obj)
    {
        this->obj = obj;
    }

    void print()
    {
        std::cout << obj << std::endl;
    }
};

int main()
{
    Test<std::string> test1("Hello");
    test1.print();
    Test<int> test2(5);
    test2.print();
    std::vector<Test<int>> test3;
    test3.push_back(Test<int>(1));
    test3.at(0).print();

    return 0;
}