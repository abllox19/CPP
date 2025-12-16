/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:59:19 by asoumare          #+#    #+#             */
/*   Updated: 2025/12/16 22:28:23 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::string  t = " sddsnfkc";
    Span a(5);
    
    a.addNumber(1);
    a.addNumber(2);
    a.addNumber(3);
    a.addNumber(4);
    a.addNumber(5);
    a.addNumber(5);
    
    std::cout << a.get_tab()<< std::endl;
}