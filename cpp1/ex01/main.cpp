/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:48:50 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/24 19:17:44 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int nb = 10;
	Zombie	*horde = zombieHorde(nb, "Zombie");

	for (int i = 0; i < nb; i++)
		horde[i].announce();
	delete [] horde;
}