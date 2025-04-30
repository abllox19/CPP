/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:55:33 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/29 15:29:15 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string str);
    ~Weapon();
    std::string &getType(void);
    void setType(std::string str);
};
