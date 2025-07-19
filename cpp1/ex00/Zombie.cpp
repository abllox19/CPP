/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:10:54 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/12 17:10:55 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->shout = " : BraiiiiiiinnnzzzZ...";
	std::cout << "Zombie " << this->name << " !" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " destroyed !" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << this->shout << std::endl;
}

void	randomChump(std::string name)
{
	Zombie	z = Zombie(name);
	z.announce();
}

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}