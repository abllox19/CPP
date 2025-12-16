#pragma once

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
    Span(int i);
    ~Span();

    int *get_tab(void);

    void addNumber(int i);
};


