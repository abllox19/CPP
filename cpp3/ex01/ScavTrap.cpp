#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->mp = 50;
    this->ad = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;

    std::cout << "create a new player" << std::endl;
    std::cout << "name : "<< this->name << std::endl;
    std::cout << "healing points : "<< this->hp << std::endl;
    std::cout << "energy points : "<< this->mp << std::endl;
    std::cout << "attack domage : "<< this->ad << std::endl;
}

void ScavTrap::guardGate()
{
    this->mp--;
    std::cout << this->name << " is now in Gate keeper mode." << std::endl;
}

