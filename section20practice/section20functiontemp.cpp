#include <iostream>
#include <vector>
#include <string>

template <typename T>
void tempFunction(T value) {
    std::cout << value << std::endl;
}

int main(){
    tempFunction<std::string>("Hello");
    tempFunction(5);
    tempFunction("Hello");

    return 0;
}

