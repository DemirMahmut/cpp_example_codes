#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::for_each(vec.begin(), vec.end(), [](int x) { std::cout << x << std::endl; });
    return 0;
}