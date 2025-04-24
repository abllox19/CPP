/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:04:34 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/24 19:19:50 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "(null)";
    this->shout = " : BraiiiiiiinnnzzzZ...";
	std::cout << "new Zombie created !" << std::endl;
}

void    Zombie::change_name(std::string name)
{
    this->name = name;
}

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].change_name(name);
	return (horde);
}