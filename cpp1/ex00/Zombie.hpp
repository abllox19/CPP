/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:10:58 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/12 17:10:59 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
    std::string shout;

public:
    Zombie(std::string name);
	void	announce(void);

    ~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif