/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:48:24 by asoumare          #+#    #+#             */
/*   Updated: 2025/06/25 19:49:16 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

class harl
{
private:
    std::string txt_1;
    std::string txt_2;
    std::string txt_3;
    std::string txt_4;

public:
    harl(/* args */);
    ~harl();
    
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    
    void	complain(std::string level);
};


