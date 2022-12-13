#include "whatever.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n--------------------- MY MAIN---------------------\n" << std::endl;

    int x = 42;
    int y = 56;

    std::cout << "value of x: " << x << "\nvalue of y: " << y << "\nperforming swap..." << std::endl;
    swap(x, y);
    std::cout << "value of x: " << x << "\nvalue of y: " << y << std::endl;
    std::cout << "\nmin of " << x << " and " << y << " is " << ::min(x,y) << std::endl;
    std::cout << "\nmax of " << x << " and " << y << " is " << ::max(x,y) << std::endl;

    std::string s1 = "string 1";
    std::string s2 = "string 2";

    std::cout << "\nvalue of s1: " << s1 << "\nvalue of s2: " << s2 << "\nperforming swap..." << std::endl;
    swap(s1, s2);
    std::cout << "value of s1: " << s1 << "\nvalue of s2: " << s2 << std::endl;
    std::cout << "\nmin of " << s1 << " and " << s2 << " is " << ::min(s1,s2) << std::endl;
    std::cout << "\nmax of " << s1 << " and " << s2 << " is " << ::max(s1,s2) << std::endl;

    std::cout << "\n--------------------- MAIN FROM SUBJECT ---------------------\n" << std::endl;

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;

    return 0;
}