// Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"

int main()
{
    //Time a(1, 20);
    //Time b(4, 20);

    //// a.print();          // 1+2i
    //// b.print();          // 4-2i

    //(std::cout << a) << std::endl; // operator<<((operator<<(cout, a), endl)

    Time d,d1;
    std::cin >> d;
    std::cin >> d1;

    Time d3 = d + d1;
    std::cout <<d3<<std::endl;
    if (d == d1)
    {
        std::cout << "Both the time values are equal"<<std::endl;
    }
    else if(d<d1)
    {
        std::cout << "first time less  than Second time"<<std::endl;
    }
    else
    {
        std::cout << "first time more than second time"<<std::endl;
    }

    std::cout << (std::string)d;
}

