/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:21:14 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/20 15:27:57 by asoumare         ###   ########.fr       */
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
    Sed sed;
    
    if (!txt.is_open())
    {
        std::cout << "ficher introuvable !" << std::endl;
        return 0;
    }
    
    std::string test;
    std::getline(txt >> std::ws, test);
    
    while (txt)
    {
        sed.print_in_txt(test);
        std::getline(txt >> std::ws, test);
    }

    if (av[2] != av[3])
    {
        sed.repalce(av[2], av[3]);
    }
    std::cout << sed.get_txt() << std::endl;
    data << sed.get_txt();
}