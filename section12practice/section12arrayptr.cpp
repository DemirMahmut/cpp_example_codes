#include <iostream>

int main()
{
    int numbers[5]{1, 2, 3, 4, 5};
    int *ptr{numbers};
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "The value of numbers[" << i << "] is: " << *(ptr + i) << std::endl;
        std::cout << "The address of numbers[" << i << "] is: " << ptr + i << std::endl;
    }

    return 0;
}