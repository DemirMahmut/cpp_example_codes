#include <iostream>
#include <memory>
#include <vector>

class smartPtr
{
private:
    int data;

public:
    smartPtr() : data{0} { std::cout << "no-args constructor for " << data << std::endl; }
    smartPtr(int d) : data{d} { std::cout << "overloaded constructor for " << data << std::endl; }
    ~smartPtr() { std::cout << "destructor for " << data << std::endl; }

    friend std::ostream &operator<<(std::ostream &os, const smartPtr &obj) // friend olmasaydi data ya ulasamazdik.
    {
        os << "smartPtr data: " << obj.data; // obj.data demek smartPtr class inin data degiskeni demek.
        return os;
    }
};

int main()
{

    std::unique_ptr<smartPtr> p1{new smartPtr{}};
    std::unique_ptr<smartPtr> p2{new smartPtr{100}};
    std::unique_ptr<smartPtr> p3 = std::make_unique<smartPtr>(200); // buradaki make_unique ile new ayni isi yapar. fakat new den daha guvenli bir yontemdir.

    p3 = std::move(p2); // p2 nin sahip oldugu bellek temizlenir ve p3 e aktarilir. p2 artik bos.

    if (!p2)
        std::cout << "p2 is nullptr" << std::endl;

    std::vector<std::unique_ptr<smartPtr>> vec;
    vec.push_back(std::make_unique<smartPtr>(1000));
    vec.push_back(std::move(p1)); // p1 in sahip oldugu bellek temizlenir ve vec e aktarilir. p1 artik bos.
    vec.push_back(std::move(p3)); // p3 un sahip oldugu bellek temizlenir ve vec e aktarilir. p3 artik bos.

    std::cout << "Print vector" << std::endl;
    for (const auto &ptr : vec)
        std::cout << *ptr << std::endl;
    return 0;
}