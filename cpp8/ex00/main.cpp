/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:59:19 by asoumare          #+#    #+#             */
/*   Updated: 2025/12/16 21:24:37 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
    int i[5] = {15,42,41,42,35};
    
    try
    {
        std::cout << Easyfind(i, 15) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : "<< e.what() << '\n';
    }
    
    return 0;
}