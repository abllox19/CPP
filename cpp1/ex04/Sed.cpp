/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:52:20 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/11 20:10:44 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(void)
{
    this->txt = "";
}

void Sed::print_in_txt(std::string str)
{
    if (!this->txt.empty())
    {
        this->txt += '\n';
    }
    this->txt += str;
}

void    Sed::repalce(char *dest, char *rep)
{
    int i = 0;
    int j = 0;
    std::string txt;
    while (this->txt[i])
    {
        if (this->txt[i] == dest[j])
        {
            while (this->txt[i+j] == dest[j])
            {
                j++;
                if (dest[j] == '\0')
                {
                    txt += rep;
                    i += j-1;
                }
            }
            if (dest[j] != '\0')
                txt += this->txt[i];
        }
        else
            txt += this->txt[i];
        j = 0;
        i++;
    }
    this->txt = txt;
}


std::string Sed::get_txt(void)
{
    return this->txt;
}

Sed::~Sed()
{
}