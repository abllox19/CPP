/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:11:31 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:11:31 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(void) : Animal("chien")
{
    brain = new Brain;
    std::cout << "petit chien debloquer" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "petit chien debloquer" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog(void)
{
    if (brain) delete brain;
    std::cout << "petit chien perdu" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << " : waf waf" << std::endl;
}

void	Dog::getIdeas(void)const
{
	std::cout << "Idea of the Dog is: " << brain->getIdeas() << std::endl;
}
