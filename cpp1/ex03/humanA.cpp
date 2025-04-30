/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:22:52 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/30 18:31:58 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"

void HumanA::attack()
{
    std::cout << this->name  << " " << Weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon arme)
{
    this->name = name;
    this->weapon = arme;
}

HumanA::~HumanA()
{
    std::cout << "Human destroyed !" << std::endl;
}