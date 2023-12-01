#include <iostream>

class Car
{
private:
    std::string carName;

public:
    Car() { std::cout << "Car created." << std::endl; };
    void setCarName(std::string carName) { this->carName = carName; };
    void printCarName() const { std::cout << "Car name: " << carName << std::endl; };
};

class Audi : public Car
{
private:
    std::string carName;

public:
    Audi() { std::cout << "Audi created." << std::endl; };
    void setCarName(std::string carName) { this->carName = carName; };
    void printCarName() const { std::cout << "Audi name: " << carName << std::endl; };
};

class BMW : public Car
{
private:
    std::string carName;

public:
    BMW() { std::cout << "BMW created." << std::endl; };
    void setCarName(std::string carName) { this->carName = carName; };
    void printCarName() const { std::cout << "BMW name: " << carName << std::endl; };
};

void printCarName(const Car &car)
{
    car.printCarName();
}

int main()
{
    Car *pCar = new Car();
    Car *pAudi = new Audi();
    Car *pBMW = new BMW();

    pCar->setCarName("Car");
    pAudi->setCarName("Audi");
    pBMW->setCarName("BMW");

    pCar->printCarName();
    pAudi->printCarName();
    pBMW->printCarName();

    delete pCar;
    delete pAudi;
    delete pBMW;

    return 0;
}