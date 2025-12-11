#include "whatever.hpp"
/*
int main()
{
    std::string i = "moi", j = "toi";
    std::string t;
    int v;

    std::cout << i << " | " << j << std::endl;
    swap(i, j);
    std::cout << i << " | " << j << std::endl;
    t = min(i, j);
    std::cout << "min = " << t << std::endl;
    t = max(i, j);
    std::cout << "max = " << t << std::endl;
    int a = 2;
    int b = 3;
    std::cout << a << " | " << b << std::endl;
    swap( a, b );
    std::cout << a << " | " << b << std::endl;
    v = min(a, b);
    std::cout << "min = " << v << std::endl;
    v = max(a, b);
    std::cout << "max = " << v << std::endl;
}*/

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}