#include <iostream>
#include <string>
#include <vector>

void passByValue1(int num){
    num = 100;
    return;
}
void passByValue2(std::string s){
    s = "Changed";
    return;
}

void passByValue3(std::vector<std::string> v){
    v.clear();
    return;
}

int main(){
    int num = 10;
    std::string s = "Hello";
    int arr[] = {1,2,3,4,5};
    std::vector<std::string> v = {"one", "two", "three"};

    passByValue1(num);
    passByValue2(s);
    passByValue3(v);
    
    std::cout << "num: " << num << std::endl;
    std::cout << "s: " << s << std::endl;
    std::cout << "v: ";
    for(auto s: v)
        std::cout << s << " ";

    return 0;
}