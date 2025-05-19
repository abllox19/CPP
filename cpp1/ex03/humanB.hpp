/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:23:03 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/15 22:51:35 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon arme);
        void attack();
};
