#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->mp = 50;
    this->ad = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    this->mp--;
    std::cout << this->name << " is now in Gate keeper mode." << std::endl;
}

