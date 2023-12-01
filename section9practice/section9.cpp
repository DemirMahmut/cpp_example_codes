#include <iostream>
#include <vector>

int main(){
    int sum, size {0}, x = 5;
    char array[5] = {'a', 'b', 'c', 'd', 'e'};
    for(auto i : array){
        std::cout << i << " " << std::endl;
        if(i == 'c')
            std::cout << "Yeah boyy that's my favorite letter" << std::endl;
        else
            std::cout << "That's an ordinary one" << std::endl;
    }
    for(auto temp : {1, 2, 3, 4, 5}){
        std::cout << temp << " ";
    }
    std::vector <std::vector<int>> multiplication_table;
    for(int i = 0; i < 10; i++){
        std::vector<int> temp;
        for(int j = 0; j < 10; j++){
            temp.push_back((i+1)*(j+1));
        }
        multiplication_table.push_back(temp);
    }
    
    std::cout << std::endl;
    for (auto i : multiplication_table) {
        for (auto j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    int choose;
    std::cout << "Choose a number: ";
    std::cin >> choose;
    std::cout << choose << " * " << choose << " = " << multiplication_table[choose-1][choose-1] << std::endl;
    for(int i = 0; i < 10; i++)
        std::cout << i+1 << " * " << choose << " = " << multiplication_table[choose-1][i] << std::endl;

    return 0;
}