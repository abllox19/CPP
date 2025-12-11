#include "iter.hpp"

void printconstant(const std::string &s)
{
    std::cout << s << " ";
}

template <typename T>
void printElement(T &x)
{
    std::cout << x << " ";
}

template <typename T>
void makeFun(T &x)
{
    x = x + x;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"Salut", "les", "42", "students"};

    std::cout << "== Int array ==" << std::endl;
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "== String array ==" << std::endl;
    iter(strArray, 4, printElement<std::string>);
    std::cout << std::endl;

    std::cout << "== Make Fun on int array ==\n";
    iter(intArray, 5, makeFun<int>);
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "== String array ==" << std::endl;
    // iter(strArray, 4, makeFun);
    iter(strArray, 4, printElement<std::string>);
    std::cout << std::endl;

    std::cout << "== Print constant string ==" << std::endl;
    iter(strArray, 4, printconstant);
    std::cout << std::endl;
    
    return 0;
}