/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:29:20 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:29:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

