/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abllox <abllox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:59:19 by asoumare          #+#    #+#             */
/*   Updated: 2025/12/25 20:10:49 by abllox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::string  t = " sddsnfkc";
    unsigned int r = 50;
    Span a(r);
    
    a.addNumber(9,15);
    
    std::vector<int> tab = a.get_tab();
    for (size_t i = 0; i < tab.size(); i++)
        std::cout << tab[i] << std::endl;
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;
}