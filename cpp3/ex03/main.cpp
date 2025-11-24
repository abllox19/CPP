/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:31 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/22 21:19:08 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("joueur");
    a.whoAmI();
    a.attack("a monster");
    a.takeDamage(a.get_ad());
    a.guardGate();
    a.beRepaired(10);

    std::cout << "mp : " << a.get_mp() << std::endl;
    std::cout << "hp : " << a.get_hp() << std::endl;
    
}
/*
int main()
{
    ScavTrap b("ScavTrap");
    FragTrap a("FragTrap");
    ClapTrap j("joueur");
    
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
    b.guardGate();
}
*/

    