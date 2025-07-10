/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:41:25 by asoumare          #+#    #+#             */
/*   Updated: 2025/06/30 19:31:48 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_up(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        i++;
    }
    std::cout << s << " ";
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac; i++)
        print_up(av[i]);
    return (0);
}