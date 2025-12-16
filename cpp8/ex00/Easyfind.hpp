#pragma once

#include <iostream>
#include <string>

template<typename T>
int Easyfind(T obj, int F)
{
    int i = 0;
    while (obj[i])
    {
        if (obj[i] == F)
            return obj[i];
        i++;
    }
    throw std::out_of_range("nombre introuvable");
}
