/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:01:52 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/22 18:28:10 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hp = 10;
    this->mp = 10;
    this->ad = 0;
    
    std::cout << "create a new player" << std::endl;
    std::cout << "name : "<< this->name << std::endl;
    std::cout << "healing points : "<< this->hp << std::endl;
    std::cout << "energy points : "<< this->mp << std::endl;
    std::cout << "attack domage : "<< this->ad << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "the player "<< this->name << " is dead !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hp < 1 || this->mp < 1)
        return;
    this-mp--;
    std::cout << "ClapTrap : " << this->name << " attacks " << target << ", causing " << this->ad <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hp -= amount;
    std::cout << "ClapTrap : " << this->name << " take " << amount <<" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp < 1 || this->mp < 1)
        return;
    this->hp += amount;
    this-mp--;
    std::cout << "ClapTrap : " << this->name << " restore " << amount <<" points of damage!" << std::endl;
}

int ClapTrap::get_ad(void)
{
    return (this->ad);
}

int ClapTrap::get_hp(void)
{
    return (this->hp);
}

int ClapTrap::get_mp(void)
{
    return (this->mp);
}
