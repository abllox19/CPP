/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:56:50 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/07 18:42:32 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string cmd;
	int i = 1;
	std::string search;
	const int size_max = 8;
	int size = 0;
	contact contact[size_max + 1];
	while (1)
	{
		std::cout << "faite une commande : ";
		std::cin >> cmd;

		if (cmd == "ADD")
		{
			std::cout<<"Entrez les informations sur le contact "<< (i) << std::endl;
			contact[i].add(i);
			i++;
			size++;
		}
		else if (cmd == "SEARCH")
		{
			std::cout << "id" << " | ";
			std::cout << "firstname " << "  | ";
			std::cout << "lastname   " << " | ";
			std::cout << "nickname" << std::endl;
			for(int j = 1; j <= size; j++)
			{
				contact[j].search();
			}
			std::cout << "choisissez l'id du contact a afficher : ";
			std::cin >> search;
			if (search[0] >= '1' && search[0] <= size + 48)
				contact[search[0] - 48].print_all();
			else
				std::cout << "l'id n'existe pas !" << std::endl;
		}
		else if (cmd == "EXIT")
			break;
		if (i >= 9)
			i = 1;
		if (size >= 9)
			size = 8;
	}
	return 0;
}