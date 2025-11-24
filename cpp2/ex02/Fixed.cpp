/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:08:06 by asoumare          #+#    #+#             */
/*   Updated: 2025/11/17 19:00:46 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : nb_fixe(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : nb_fixe(i << nb_bits)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i)
{
    // std::cout << "Float constructor called" << std::endl;
    this->nb_fixe = roundf(i *(1 << nb_bits)); 
}

Fixed::Fixed(const Fixed &cpy)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
	this->nb_fixe = rhs.getRawBits();
	return *this;
}
w
Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->nb_fixe;
}

void    Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

/******************** ex  02 ******************/

/*          operator cat 1          */


bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->nb_fixe > rhs.nb_fixe);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
    return (this->nb_fixe < rhs.nb_fixe);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
    return (this->nb_fixe >= rhs.nb_fixe);
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
    return (this->nb_fixe <= rhs.nb_fixe);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
    return (this->nb_fixe == rhs.nb_fixe);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
    return (this->nb_fixe != rhs.nb_fixe);
}


/*              operator cat 2              */


Fixed Fixed::operator*(const Fixed &rhs)
{
    this->nb_fixe = this->nb_fixe * rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator-(const Fixed &rhs)
{
    this->nb_fixe = this->nb_fixe - rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator/(const Fixed &rhs)
{
    this->nb_fixe = this->nb_fixe / rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &rhs)
{
    this->nb_fixe = this->nb_fixe + rhs.getRawBits();
    return *this;
}


/*                  operator cat 3              */


Fixed &Fixed::operator++(void)
{
    this->nb_fixe++;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    this->nb_fixe--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    this->nb_fixe++;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    this->nb_fixe--;
    return tmp;
}


/*              operator cat 4              */


Fixed	&Fixed::min(Fixed &rhs1, Fixed &rhs2)
{
	if (rhs1 <= rhs2)
		return (rhs1);
	return (rhs2);
}

Fixed	&Fixed::max(Fixed &rhs1, Fixed &rhs2)
{
	if (rhs1 >= rhs2)
		return (rhs1);
	return (rhs2);
}

const Fixed	&Fixed::min(const Fixed &rhs1, const Fixed &rhs2)
{
	if (rhs1 <= rhs2)
		return (rhs1);
	return (rhs2);
}

const Fixed	&Fixed::max(const Fixed &rhs1, const Fixed &rhs2)
{
	if (rhs1 >= rhs2)
		return (rhs1);
	return (rhs2);
}