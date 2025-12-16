#include "Span.hpp"

Span::Span() {}

Span::Span(int i) : N(i) tab() {}

Span::~Span() {}

int *Span::get_tab(void)
{
    return tab;
}


void Span::addNumber(int j)
{
    unsigned int i = 0;
    while (tab[i])
        i++;
    if (i >= N)
        throw std::out_of_range("le container est deja plein");
    tab[i] = j;
}


