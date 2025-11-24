/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:44 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:44 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &cpy);
    virtual ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal&rhs);

    virtual void makeSound() const;
    const std::string &getType(void) const;
};


#endif