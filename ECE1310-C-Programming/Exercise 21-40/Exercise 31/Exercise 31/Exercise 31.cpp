// Exercise 31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int product = 1;
    
    for (int i = 1; i <= 15; i++)
    
    {
        if (i%2 != 0)
        {
            product = product * i;
        }
    }

    cout << "Here is the product of odd numbers from 1 to 15\n"<<product;
    return 0;
}
