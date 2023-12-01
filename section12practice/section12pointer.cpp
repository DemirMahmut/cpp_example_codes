#include <iostream>
#include <string>

int main(){
    int x = 5;
    int *ptr = &x;
    std::cout << "The value of x is: " << x << std::endl;
    std::cout << "The address of x is: " << &x << std::endl;
    std::cout << "The value of ptr is: " << ptr << std::endl;
    std::cout << "The value of *ptr is: " << *ptr << std::endl;
    std::cout << "The address of ptr is: " << &ptr << std::endl;
    std::cout << "******************************" << std::endl;

    std::string name = "Mahmutabi";
    std::string *str_ptr {&name};
    std::cout << "The value of name is: " << name << std::endl;
    std::cout << "The address of name is: " << &name << std::endl;
    std::cout << "The value of str_ptr is: " << str_ptr << std::endl;
    std::cout << "The value of *str_ptr is: " << *str_ptr << std::endl;
    
    return 0;
}