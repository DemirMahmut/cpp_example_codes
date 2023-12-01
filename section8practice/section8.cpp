#include <iostream>

int main(){
    const double PI = 3.1415926535;
    int radius;
    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;
    std::cout << "Volume of a circle with radius " << radius << ": " << PI * radius * radius << std::endl;

    bool equality = false;
    bool inequality = false;
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    equality = (num1 == num2);
    inequality = (num1 != num2);
    std::cout << "Equality: " << equality << std::endl;
    std::cout << "Inequality: " << inequality << std::endl;
    
    return 0;    
}