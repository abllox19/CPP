/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:01:52 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/22 21:07:33 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), mp(10), ad(0)
{
    std::cout << "default constructor called" << std::endl;

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

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    *this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->name = rhs.name;
	this->ad = rhs.ad;
	this->hp = rhs.hp;
	this->mp = rhs.mp;

	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hp < 1 || this->mp < 1)
        return;
    this->mp--;
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
    this->mp--;
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
