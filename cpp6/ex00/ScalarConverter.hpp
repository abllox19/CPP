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

class ScalarConverter
{
public:
    ScalarConverter();
    ~ScalarConverter();

    static void convert(char **av);
    static void convertC(char c);
    static void convertI(int i);
    static void convertF(float f);
    static void convertD(double d);
};
