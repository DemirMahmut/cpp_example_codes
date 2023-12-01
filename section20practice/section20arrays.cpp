#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main(){
    std::array<int, 5> myArray{1, 2, 3, 4, 5};
    std::cout << myArray[0] << std::endl;
    std::cout << myArray.at(0) << std::endl;
    std::cout << myArray.size() << std::endl;
    std::cout << myArray.max_size() << std::endl;
    std::cout << myArray.empty() << std::endl; // 0 = false, 1 = true
    std::cout << myArray.front() << std::endl; // first element
    std::cout << myArray.back() << std::endl; // last element
    std::cout << myArray.data() << std::endl; // pointer to the first element
    std::cout << *myArray.data() << std::endl; // dereference the pointer to the first element

    return 0;
}