/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:31 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/22 18:22:31 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap j("joueur");
    j.attack("cible");
    j.takeDamage(j.get_ad());
    std::cout << "mp : " << j.get_mp() << std::endl;
    std::cout << "hp : " << j.get_hp() << std::endl;

    j.beRepaired(1);
    std::cout << "mp : " << j.get_mp() << std::endl;
    std::cout << "hp : " << j.get_hp() << std::endl;
    
    j.beRepaired(5);
    std::cout << "mp : " << j.get_mp() << std::endl;
    std::cout << "hp : " << j.get_hp() << std::endl;
    

    j.attack("cible");
    j.takeDamage(j.get_ad());
    j.beRepaired(1);
    std::cout << "mp : " << j.get_mp() << std::endl;
    std::cout << "hp : " << j.get_hp() << std::endl;
}