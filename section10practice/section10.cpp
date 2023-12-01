#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

int main(){
    // char string[50];
    // char string2[100];
    // std::cout << "Enter a string: ";
    // std::cin >> string;
    // std::cout << string << ", has " << strlen(string) << " characters." << std::endl;
    // strcpy(string, "Hello");
    // std::cout << string << std::endl;
    // strcat(string, " there");
    // std::cout << string << std::endl;
    // std::cout << "Enter another string: ";
    // std::cin >> string2;
    // std::cout << string2 << std::endl;
    // std::cout << strcmp(string, string2) << std::endl;

    // std::string str = "Hello there";
    // for(auto c: str){
    //     std::cout << c << std::endl;
    // }
    // for(int c: str){
    //     std::cout << c << std::endl;
    // }
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    std::cout << str << std::endl;
    std::cout << strlen(str.c_str()) << std::endl;//bunu kullanmak için char array'e çevirmek gerekiyor.
    std::cout << str.length() << std::endl;//std::string'in kendi fonksiyonu
    return 0;
}