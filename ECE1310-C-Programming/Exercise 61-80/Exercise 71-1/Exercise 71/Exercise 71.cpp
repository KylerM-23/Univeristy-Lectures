// Exercise 71.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int exp(int b, int e)
{
    if (e == 0)
    {
        return 1;
    }
    else 
    {
        return b * exp(b, e - 1);
    }
}

void main()
{
    cout << exp(2,3)<<"\n";
}