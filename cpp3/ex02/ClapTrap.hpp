/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:01:56 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/21 23:09:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        int hp;
        int mp;
        int ad;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &cpy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap&rhs);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int get_ad(void);
        int get_hp(void);
        int get_mp(void);
};

#endif