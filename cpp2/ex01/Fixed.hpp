/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:08:12 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/16 20:30:07 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int nb_fixe;
    static const int	nb_bits = 8;

public:
    Fixed(void);
    Fixed(const int i);
    Fixed(const float i);
    Fixed(const Fixed &cpy);
    ~Fixed();

    Fixed &operator=(const Fixed&rhs);
    
    int		getRawBits(void) const;
	void	setRawBits(const int raw);
    float	toFloat(void) const;
    int     toInt(void) const;
    
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif