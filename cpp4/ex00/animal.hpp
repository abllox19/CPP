/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:06 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:06 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &cpy);
    virtual ~Animal();

    Animal &operator=(const Animal&rhs);

    virtual void makeSound() const;
    const std::string &getType(void) const;
};


#endif