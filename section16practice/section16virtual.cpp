#include <iostream>

class Animal{
    public:
        virtual void sound(){
            std::cout << "Animal sound" << std::endl;
        }
};

class Cat : public Animal{
    public:
        void sound(){
            std::cout << "Meow" << std::endl;
        }
};

class Dog : public Animal{
    public:
        void sound(){
            std::cout << "Bark" << std::endl;
        }
};

int main(){
    Animal *p1 = new Animal();
    Animal *p2 = new Cat();
    Animal *p3 = new Dog();

    p1 -> sound();
    p2 -> sound();
    p3 -> sound();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}