#include <iostream>
#include <string>

void recursiveExample(int num){
    if(num == 0)
        return;
    if(num == 1){
        std::cout << num ;
        return;
    }
    std::cout << num << " * ";
    recursiveExample(num - 1);
    return;
}
int factorial(int num){
    if(num == 0)
        return 1;
    return num * factorial(num - 1);
}

int main(){
    int num;
    std::cout << "Enter a number that you want to start factorial: ";
    std::cin >> num;
    recursiveExample(num);
    std::cout << " = " << factorial(num) << std::endl;

    return 0;

}