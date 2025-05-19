/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:26:35 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/15 19:59:53 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->_type = str;
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
    std::cout << this->_type << std::endl;
    return Weapon::_type;
}