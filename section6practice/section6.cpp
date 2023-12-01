#include <iostream>
#define PI 3.14159

int main(){
    int x = 5;
    double y = 5.0;
    float z = 5.0;
    unsigned int a = 5;

    std::cout << sizeof(x) << std::endl;
    std::cout << sizeof(y) << std::endl;
    std::cout << sizeof(z) << std::endl;
    std::cout << sizeof(a) << std::endl;
}