#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>


int main(){
    std::vector<int> vec{1,2,3,4,5}; // vector is a dynamic array
    std::set<int> set{1,2,3,4,5};  // set is a collection of unique elements
    std::map<int, std::string> map{{1, "one"}, {2, "two"}, {3, "three"}}; // map is a collection of key-value pairs
    std::list<int> list{1,2,3,4,5}; // list is a doubly linked list

    std::cout << "Vector: ";
    for(auto i: vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "Set: ";
    for(auto i: set){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "Map: ";
    for(auto i: map){
        std::cout << i.first << " " << i.second << " ";
    }
    std::cout << std::endl;
    std::cout << "List: ";
    for(auto i: list){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}