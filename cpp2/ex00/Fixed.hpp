/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:30:36 by lle-briq          #+#    #+#             */
/*   Updated: 2025/07/16 19:37:32 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int nb_fixe;
		static const int	nb_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed&fixed);
		
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
