#include "dog.hpp"

Dog::Dog(void) : Animal("chien")
{
    brain = new Brain;
    std::cout << "petit chien debloquer" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "petit chien perdu" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << " : waf waf" << std::endl;
}