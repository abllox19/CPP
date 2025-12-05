/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:41:58 by asoumare          #+#    #+#             */
/*   Updated: 2025/12/02 17:54:17 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "error : 1 argument requit" << std::endl;
        return 0;
    }
    ScalarConverter::convert(av);
}
