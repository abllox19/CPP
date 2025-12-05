/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoumare <asoumare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:06:52 by asoumare          #+#    #+#             */
/*   Updated: 2025/12/02 17:47:10 by asoumare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>

typedef struct Data
{
	int i;
    Data *next;
}Data;


class Serializer
{
private:
    Serializer(/* args */);
    ~Serializer();

public:
    static __intptr_t serialize(Data* ptr);
    static Data* deserialize(__intptr_t raw);
};
