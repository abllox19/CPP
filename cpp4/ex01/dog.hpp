/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:14:28 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:14:28 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(const Dog& other);
    Dog&operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
};

#endif
