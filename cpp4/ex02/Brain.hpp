/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:10:37 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:48:04 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	*ideas;
	public:
		Brain();
		~Brain();
		Brain(Brain & ref);
		Brain & operator=(Brain const & rhs);
		std::string *getIdeas();
};

#endif