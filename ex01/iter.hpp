#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T t[], size_t size, void (*f)(T const &))
{
    for (size_t i = 0; i < size; i++)
    {
        f(t[i]);
    }
}

template <typename T>
void printf(T & toprint)
{
    std::cout << toprint ;
}

#endif