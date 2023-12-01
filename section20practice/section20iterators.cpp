#include <iostream>
#include <vector>
#include <set>


int main(){
    std::set<int> s1 = {1, 2, 3, 4, 5};
    auto it1 = s1.begin(); // iterator is a pointer to the element in the container
    while(it1 != s1.end()){
        std::cout << *it1 << std::endl;
        it1++;
    } 

    std::vector<int> v1 = {1, 2, 3, 4, 5};
    auto it2 = v1.begin();
    for(; it2 != v1.end(); it2++){
        std::cout << *it2 << std::endl;
    } 

    auto reverse_it2 = v1.rbegin();
    for(; reverse_it2 != v1.rend(); reverse_it2++){
        std::cout << *reverse_it2 << std::endl;
    }

    return 0;
}