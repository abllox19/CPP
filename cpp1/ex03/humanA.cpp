/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:23:00 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/11 21:44:48 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"

HumanA::HumanA(std::string name, Weapon &arme) : _name(name), _weapon(arme) {}

HumanA::~HumanA()
{
    std::cout << "Human destroyed !" << std::endl;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}
