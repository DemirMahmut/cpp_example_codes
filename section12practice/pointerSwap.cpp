#include <iostream>

void swapThem(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int x = 5;
    int y = 10;
    std::cout << "x: " << x << ", y: " << y << std::endl;
    swapThem(&x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    return 0;
}