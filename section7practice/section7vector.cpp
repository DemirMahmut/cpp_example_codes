#include <iostream>
#include <vector>

int main(){
    int i;
    std::vector <char> charVector = {'a', 'b', 'c', 'd', 'e'};
    std::vector <int> intVector ;

    for(i = 0; i < 6; i++){
        //intVector[i] = i+1;
        //intVector.at(i) = i+1;
        intVector.push_back(i+1);
        std::cout << intVector[i] << std::endl;
    }
    for(i = 0; i < charVector.size(); i++)
        std::cout << charVector[i] << " ";

    std::vector<std::vector<int>> vector2D;
    vector2D = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    std::cout << std::endl;
    for(i=0 ; i < vector2D.size(); i++){
        for(int j = 0; j < vector2D[i].size(); j++)
            std::cout << vector2D.at(i).at(j) << " ";
        std::cout << std::endl;
    }
    return 0;
}