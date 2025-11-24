/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:14:02 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:14:02 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(void) : Animal("chat")
{
    brain = new Brain;
    std::cout << "petit chat debloquer" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    brain = new Brain(*other.brain); // deep copy
    std::cout << "petit chat debloquer" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain); // deep copy
    }
    return *this;
}

Cat::~Cat(void)
{
    if (brain) delete brain;
    std::cout << "petit chat perdu" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << type << " : miaou miaou" << std::endl;
}