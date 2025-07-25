/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:48:50 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/10 22:03:35 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int nb = 18;
	Zombie	*horde = zombieHorde(nb, "ZZ");

	for (int i = 0; i < nb; i++)
		horde[i].announce();
	delete [] horde;
}