#pragma once

#include <iostream>
#include <stdexcept>
#include <stdlib.h>

template <typename T>
class Array
{
private:
    T* _tab;
    unsigned int _size;

public:
    Array(void) : _tab(NULL), _size(0) {}
    Array(unsigned int n) : _tab(new T[n]()), _size(n) {}
    Array(const Array& other) : _tab(NULL), _size(0) {*this = other;}
    ~Array() {}

    Array& operator=(const Array& other)
    {
        if (this != &other)
        {
            delete[] _tab;
            _size = other._size;
            _tab = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _tab[i] = other._tab[i];
        }
        return *this;
    }


    T& operator[](unsigned int index)
    {
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return _tab[index];
    }

    const T& operator[](unsigned int index) const
    {
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return _tab[index];
    }

    unsigned int size() const
    {
        return _size;
    }
};
