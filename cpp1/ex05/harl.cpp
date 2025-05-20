/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:48:36 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/20 16:00:32 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

harl::harl(void)
{
    this->txt_1 = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    this->txt_2 = "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
    this->txt_3 = "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.";
    this->txt_4 = "This is unacceptable! I want to speak to the manager now.";
}

void harl::debug( void )
{
    std::cout << this->txt_1 << std::endl;
}

void harl::info( void )
{
    std::cout << this->txt_2 << std::endl;
}

void harl::warning( void )
{
    std::cout << this->txt_3 << std::endl;
}

void harl::error( void )
{
    std::cout << this->txt_4 << std::endl;
}

harl::~harl()
{
}