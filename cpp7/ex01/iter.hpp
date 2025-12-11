#pragma once

#include <iostream>
#include <string>

template<typename S, typename T>
void iter(S tab[], size_t size,  void (*f)(T))
{
    if (size < 1)
        return ;
    for (size_t i = 0; i < size; i++)
        f(tab[i]);
}
