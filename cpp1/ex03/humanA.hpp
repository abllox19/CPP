/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:22:55 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/11 21:35:42 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon _weapon;

    public:
        HumanA(std::string name, Weapon &arme);
        ~HumanA();

        void attack();
};




