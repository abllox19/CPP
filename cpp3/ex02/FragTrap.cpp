/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:29:14 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:29:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->mp = 100;
    this->ad = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
    
    std::cout << "create a new player" << std::endl;
    std::cout << "name : "<< this->name << std::endl;
    std::cout << "healing points : "<< this->hp << std::endl;
    std::cout << "energy points : "<< this->mp << std::endl;
    std::cout << "attack domage : "<< this->ad << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : the player "<< this->name << " is dead !" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "we can do a positive high-five together ?" << std::endl;
}