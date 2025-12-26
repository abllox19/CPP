#include "Span.hpp"

Span::Span() : N(10000) {}

Span::Span(unsigned int i) : N(i) {}

Span::~Span() {}

std::vector<int> Span::get_tab(void)
{
    return tab;
}

void Span::addNumber(int j)
{
    if (tab.size() >= N)
        throw std::out_of_range("le container est deja plein");
    tab.push_back(j);
}

int Span::shortestSpan()
{
    if (tab.size() < 2)
        throw std::out_of_range("le container n'a pas assez de nombres");

    // Copier puis trier
    std::vector<int> tmp = tab;
    std::sort(tmp.begin(), tmp.end());

    int min = tmp[1] - tmp[0];

    for (size_t i = 2; i < tmp.size(); i++)
    {
        int diff = tmp[i] - tmp[i - 1];
        if (diff < min)
            min = diff;
    }

    return min;
}

int Span::longestSpan()
{
    if (tab.size() < 2)
        throw std::out_of_range("le container n'a pas asser de nombre");
    else
    {    
        int min = tab[0], max = tab[0];
        for (size_t i = 0; i < tab.size(); i++)
        {
            if (tab[i] > max)
                max = tab[i];
            if (tab[i] < min)
                min = tab[i];
        }
        return max - min;
    }
}

void Span::addNumber(int begin, int end)
{
    size_t count = end - begin;

    if (tab.size() + count > N)
        throw std::out_of_range("le container n'a pas assez de place");
    while (begin <= end)
        tab.push_back(begin++);
}



