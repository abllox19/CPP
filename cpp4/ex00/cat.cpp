#include "cat.hpp"

Cat::Cat(void) : Animal("chat")
{
    std::cout << "petit chat debloquer" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "petit chat perdu" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << type << " : miaou miaou" << std::endl;
}