/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:08:06 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/16 20:21:35 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : nb_fixe(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : nb_fixe(i << nb_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i)
{
    std::cout << "Float constructor called" << std::endl;
    this->nb_fixe = roundf(i *(1 << nb_bits)); 
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->nb_fixe = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->nb_fixe;
}

void    Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
    this->nb_fixe = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)nb_fixe / (1 << nb_bits));
}

int	Fixed::toInt(void) const
{
	return ((int)(roundf((float)nb_fixe / (1 << nb_bits))));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}