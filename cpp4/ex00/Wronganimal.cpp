/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:41 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:41 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wronganimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "un Wrong_Animal est nee" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "un Wrong_Animal est nee et c'est un " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    *this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;

	return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "un Wrong_Animal est mort"<< std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return WrongAnimal::type;
}


void WrongAnimal::makeSound() const
{
    std::cout << " : ..." << std::endl;
}