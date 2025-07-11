/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:48:36 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/11 18:47:19 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

harl::harl(void)
{
    this->txt_1 = "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
    this->txt_2 = "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
    this->txt_3 = "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
    this->txt_4 = "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
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

void	harl::complain(std::string level)
{
    int i;
	// void    (harl::*functionPTRS[])( void ) = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (complains[i] == level)
            break;
	}
    switch(i)
    {
        case 0:
            harl::debug();
            /* fall through */
            
        case 1:
            harl::info();
            /* fall through */

        case 2:
            harl::warning();
            /* fall through */

        case 3:
            harl::error();
            break;

        default :
            return;
    }
}

harl::~harl()
{
}