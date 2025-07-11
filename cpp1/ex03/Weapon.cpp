/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:26:35 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/11 21:27:26 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->_type = str;
    std::cout << "weapon creation"<< std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed !" << std::endl;
}

void    Weapon::setType(std::string str)
{
    this->_type = str;
}

std::string &Weapon::getType(void)
{
    return Weapon::_type;
}