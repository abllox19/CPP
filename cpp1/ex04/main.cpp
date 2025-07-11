/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:21:14 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/11 20:19:23 by asoumare         ###   ########.fr       */
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

    std::ifstream txt(av[1]);
    std::ofstream data("data.txt");
    Sed sed;
    std::cout << "creation de data.txt" << std::endl;
    
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
    
    std::cout << "copie de " << av[1] << std::endl;
    
    if (av[2] != av[3])
    {
        sed.repalce(av[2], av[3]);
        std::cout << "modifie les '" << av[2] << "' par '" << av[3] << "'."<< std::endl;
    }
    data << sed.get_txt();
}