/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:24 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:24 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
public:
    Dog();
    ~Dog();

    void makeSound() const;
};

#endif
