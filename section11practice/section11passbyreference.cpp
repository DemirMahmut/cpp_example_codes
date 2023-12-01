#include <iostream>
#include <string>
#include <vector>

void passByReference1(int &num){
    num = 100;
    return;
}
void passByReference2(std::string &s){
    s = "Changed";
    return;
}
void passByReference3(std::vector<std::string> &v){
    v.clear();
    return;
}
void passByReference4(std::vector<int> &vint){
    for(size_t i = 0; i < vint.size(); i++)
        vint.at(i) = i-2;
    return;
}

int main(){
    int num = 10;
    std::string s = "Hello";
    std::vector<std::string> v = {"one", "two", "three"};
    std::vector<int> vint = {1,2,3,4,5};

    passByReference1(num);
    passByReference2(s);
    passByReference3(v);
    passByReference4(vint);

    std::cout << "num: " << num << std::endl;
    std::cout << "s: " << s << std::endl;
    std::cout << "v: ";
    for(auto s: v)
        std::cout << s << " ";
    std::cout << std::endl;
    std::cout << "vint: ";
    for(auto i: vint)
        std::cout << i << " ";
    
    return 0;
}