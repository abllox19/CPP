/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:23:03 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/11 21:35:32 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &arme);
        void attack();
};
