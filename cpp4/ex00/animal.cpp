#include "animal.hpp"

Animal::Animal(void)
{
    std::cout << "un Animal est nee" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "un Animal est nee et c'est un " << type << std::endl;
}

Animal::Animal(const Animal &cpy)
{
    *this = cpy;
}

Animal &Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;

	return *this;
}

Animal::~Animal()
{
    std::cout << "un Animal est mort"<< std::endl;
}

const std::string& Animal::getType() const
{
    return Animal::type;
}


void Animal::makeSound() const
{
    std::cout << " : ..." << std::endl;
}