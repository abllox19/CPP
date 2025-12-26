#pragma once

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> tab;

public:
    Span();
    Span(unsigned int i);
    ~Span();

    std::vector<int> get_tab(void);

    void addNumber(int i);
    void addNumber(int begin, int end);
    int shortestSpan();
    int longestSpan();
};


