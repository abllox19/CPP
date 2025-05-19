/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:22:52 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/19 13:09:19 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}



HumanB::~HumanB()
{
    std::cout << "Human destroyed !" << std::endl;
}

void HumanB::setWeapon(Weapon arme)
{
    this->weapon = &arme;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " " << weapon->getType() << std::endl;
    else
        std::cout << name << " dont have weapon !" << std::endl;
}
