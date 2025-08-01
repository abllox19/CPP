/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:28:16 by asoumare          #+#    #+#             */
/*   Updated: 2025/07/21 23:15:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Wronganimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();

    void makeSound() const;
};

#endif
