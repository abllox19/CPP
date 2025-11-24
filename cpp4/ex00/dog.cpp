/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:18 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:18 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(void) : Animal("chien")
{
    std::cout << "petit chien debloquer" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "petit chien perdu" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << " : waf waf" << std::endl;
}