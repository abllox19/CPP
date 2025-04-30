/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:44:48 by asoumare          #+#    #+#             */
/*   Updated: 2025/04/29 14:14:13 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string &strRef{str};
    std::string *stringPTR = &str;

    str = "HI THIS IS BRAIN";

    std::cout << &str << std::endl;
    std::cout << &strRef << std::endl;
    std::cout << &stringPTR << std::endl;

    std::cout << std::endl;

    std::cout << str << std::endl;
    std::cout << strRef << std::endl;
    std::cout << *stringPTR << std::endl;
}