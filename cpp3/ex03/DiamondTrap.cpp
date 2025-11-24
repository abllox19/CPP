/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:35:49 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/22 21:19:56 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    this->hp = 100;
    this->mp = 50;
    this->ad = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
    
    std::cout << "create a new player" << std::endl;
    std::cout << "name : "<< this->name << std::endl;
    std::cout << "healing points : "<< this->hp << std::endl;
    std::cout << "energy points : "<< this->mp << std::endl;
    std::cout << "attack domage : "<< this->ad << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "my name is : " << this->name << std::endl;
    std::cout << "my name ClapTrap is : " << ClapTrap::name << std::endl;
}
