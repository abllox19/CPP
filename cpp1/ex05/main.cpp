/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:00:48 by asoumare          #+#    #+#             */
/*   Updated: 2025/06/25 19:59:43 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main()
{
	harl	_harl;

		std::cout << "input: ";
		std::string input;
		getline(std::cin, input);
		_harl.complain(input);
		std::cout << std::endl;
}