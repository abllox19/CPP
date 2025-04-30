/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:26:35 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/29 15:29:05 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->_type = "void";
    std::cout << str << std::endl;
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