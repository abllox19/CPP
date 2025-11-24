/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:15:14 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:15:14 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
public:
    Cat();
    ~Cat();

    void makeSound() const;
};

#endif
