/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:24:00 by asoumare          #+#    #+#             */
/*   Updated: 2025/05/20 15:17:35 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
    private:
        std::string txt;
    public:
        Sed(void);
        ~Sed();
        
        void    print_in_txt(std::string str);
        std::string get_txt(void);
        void    repalce(char *dest, char *rep);
};

#endif