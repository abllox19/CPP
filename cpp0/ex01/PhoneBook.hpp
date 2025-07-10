/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:24:12 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/10 19:18:54 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class PhoneBook
{
private:

public:
	PhoneBook(void);
	~PhoneBook();
	void cmd(void);
};
#endif