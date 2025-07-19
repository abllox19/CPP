/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:31 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/19 21:20:01 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap j("joueur");
    ClapTrap a(j);
    ClapTrap b("f");

    b = a;
    
    std::cout << "\n a et b" << std::endl;
    std::cout << "hp : " << a.get_hp() << std::endl;
    std::cout << "hp : " << b.get_hp() << std::endl;
    std::cout << "hp : " << a.get_mp() << std::endl;
    std::cout << "hp : " << b.get_mp() << std::endl;
    std::cout << "a et b fin \n" << std::endl;

    
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