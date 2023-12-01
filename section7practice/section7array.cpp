#include <iostream>
#define MAX 7

int main(){
    int Array[MAX] = {1, 2, 3, 4, 5, 6, 7};

    for(int i = 0; i < MAX; i++)
    std::cout << Array[i] << " ";
    std::cout << std::endl;
    int multiArray[MAX][MAX] {0};

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            multiArray[i][j] = (i * MAX) + j + 1;
            std::cout << multiArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;           
}