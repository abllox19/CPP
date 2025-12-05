#include "whatever.hpp"

int main()
{
    std::string i = "moi", j = "toi";

    std::cout << i << " | " << j << std::endl;
    swap(i, j);
    std::cout << i << " | " << j << std::endl;
    int a = 2;
    int b = 3;
    std::cout << a << " | " << b << std::endl;
    swap( &a, &b );
    std::cout << a << " | " << b << std::endl;
}