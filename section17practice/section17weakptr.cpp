#include <iostream>
#include <memory>
#include <vector>

class weak_ptr
{
private:
    int a;

public:
    weak_ptr(int a) : a(a) { std::cout << "weak_ptr constructor" << std::endl; }
    ~weak_ptr() { std::cout << "weak_ptr destructor" << std::endl; }
    int get_data() const { return a; }

};

int main()
{
    std::vector<std::shared_ptr<weak_ptr>> v;
    v.push_back(std::make_shared<weak_ptr>(1));
    v.push_back(std::make_shared<weak_ptr>(2));
    v.push_back(std::make_shared<weak_ptr>(3));

    std::cout << "v[0].use_count() = " << v[0].use_count() << std::endl;
    std::cout << "v[1].use_count() = " << v[1].use_count() << std::endl;
    std::cout << "v[2].use_count() = " << v[2].use_count() << std::endl;

    std::cout << "v[0].get()->get_data() = " << v[0].get()->get_data() << std::endl;
    std::cout << "v[1].get()->get_data() = " << v[1].get()->get_data() << std::endl;
    std::cout << "v[2].get()->get_data() = " << v[2].get()->get_data() << std::endl;

    std::cout << "v[0].use_count() = " << v[0].use_count() << std::endl;
    std::cout << "v[1].use_count() = " << v[1].use_count() << std::endl;
    std::cout << "v[2].use_count() = " << v[2].use_count() << std::endl;
    
    return 0;
}