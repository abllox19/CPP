/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:14:06 by asoumare          #+#    #+#             */
/*   Updated: 2025/08/01 18:14:06 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(const Cat& other);
    Cat&operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
};

#endif
