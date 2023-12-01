#include <iostream>
#include <string>
#include <vector>

class Move
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Move(int d);
    // Copy Constructor
    Move(const Move &source);
    // Move Constructor
    Move(Move &&source) noexcept; // noexcept: bu fonksiyonun herhangi bir exception firlatmayacagini belirtir.
    // Destructor
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl; 
}

Move::Move(const Move &source) : Move(*source.data)
{
    std::cout << "Copy constructor - deep copy for: " << *data << std::endl;
}

Move::Move(Move &&source) noexcept : data{source.data}
{
    source.data = nullptr;
    std::cout << "Move constructor - moving resource: " << *data << std::endl;
}

Move::~Move()
{
    if (data != nullptr)
    {
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    }
    else
    {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete data;
}

int main()
{
    std::vector<Move> vec;
    vec.push_back(Move{10});

    return 0;
}