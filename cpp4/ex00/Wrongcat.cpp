#include "Wrongcat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong_chat")
{
    std::cout << "petit Wrong_chat debloquer" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "petit Wrong_chat perdu" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << type << " : miaou miaou" << std::endl;
}