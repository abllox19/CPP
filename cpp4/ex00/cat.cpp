/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:09 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:09 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(void) : Animal("chat")
{
    std::cout << "petit chat debloquer" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "petit chat perdu" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << type << " : miaou miaou" << std::endl;
}