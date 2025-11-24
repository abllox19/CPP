/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:50 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:50 by asoumare         ###   ########.fr       */
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
