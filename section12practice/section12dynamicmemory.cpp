#include <iostream>

int main()
{
    int *int_ptr{nullptr};
    size_t size;
    std::cout << "How many integers do you want to allocate? ";
    std::cin >> size;
    int_ptr = new int[size]; // bellekten size tane integer için yer ayrılmış oldu
    std::cout << "Address of the first element: " << int_ptr << std::endl;

    for (size_t i{0}; i < size; ++i)
    {
        std::cout << "Enter the value of the element " << i << ": ";
        std::cin >> int_ptr[i];
        std::cout << "Value of the element " << i << ": " << int_ptr[i] << std::endl;
        std::cout << "Address of the element " << i << ": " << &int_ptr[i] << std::endl;
    }

        delete[] int_ptr; // bellekten ayrılan yer belleğe geri verildi
    return 0;
}