/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:21:14 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/19 14:46:03 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char** av)
{
    if (ac != 4)
    {
        std::cout << "il me faut 3 argument dont le premier doit etre un ficher !" << std::endl;
        return (0);
    }

    std::ifstream txt{av[1]};
    std::ofstream data{"data.txt"};
    
    if (!txt.is_open())
    {
        std::cout << "ficher introuvable !" << std::endl;
        return 0;
    }
    
    std::string test;
    std::getline(txt >> std::ws, test);
    
    while (txt)
    {
        data << test;
        data << '\n';
        std::getline(txt >> std::ws, test);
    }
    
}