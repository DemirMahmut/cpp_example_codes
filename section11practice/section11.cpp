#include <iostream>

// void Hello(){
//     std::cout << "Hello ";
//     return;
// }
// void sayHello(std::string name){
//     Hello();
//     std::cout << name << std::endl;
//     return;
// }
void Greeting(std::string name , std::string prefix = "Mr." , std::string suffix = ""){
    std::cout << "Hello " << prefix << " " << name << " " << suffix << std::endl;
    return;
} 
void setArray(int arr[], size_t size){
    for(size_t i = 0; i < size; i++)
        arr[i] = i;
    return;
}
void printArray(int arr[], size_t size){
    for(size_t i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return;
}
int main(){
    int arr[5] = {0,0,0,0,0};
    // std::string name;
    // std::cout << "Enter your name: ";
    // std::cin >> name;
    // sayHello(name);
    // Greeting(name, "Mrs.", "Jr.");
    
    setArray(arr, 5);
    printArray(arr, 5);
    for(auto i: arr)
        std::cout << arr[i] << " ";

    return 0;
}