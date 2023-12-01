#include <iostream>
#include <string>

class Animal
{

private:
    std::string name;

public:
    Animal() { std::cout << "Animal created." << std::endl; };
    Animal(const Animal &other) : name(other.name) { std::cout << "Animal created by copying." << std::endl; };
    ~Animal() { std::cout << "Destructor called." << std::endl; };
    void setName(std::string name) { this->name = name; };
    void speak() const { std::cout << "My name is: " << name << std::endl; };
};

class Dog : public Animal
{

private:
    std::string name;

public:
    Dog() { std::cout << "Dog created." << std::endl; };
    Dog(const Dog &other) : name(other.name) { std::cout << "Dog created by copying." << std::endl; };
    ~Dog() { std::cout << "Dog destroyed." << std::endl; };
    void setName(std::string name) { this->name = name; };
    void speak() const { std::cout << "Woof! My name is: " << name << std::endl; };
};

void speak(const Animal &animal)
{
    animal.speak();
}

int main()
{
    Animal animal;
    animal.setName("Freddy");
    animal.speak();

    Dog dog;
    dog.setName("Bob");
    dog.speak();

    Animal *pAnimal = new Dog();
    pAnimal->setName("Puppy");
    pAnimal->speak();

    speak(animal);
    speak(dog);

    delete pAnimal;

    return 0;
}