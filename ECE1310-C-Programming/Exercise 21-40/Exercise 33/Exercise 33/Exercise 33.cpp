// Exercise 33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int Final = 0,sum = 0, product = 1;
    cout << "We will calculate the 10 Sigma i=1 (i Sigma j = 1 (j Pi k = 1 (k)))\n";
    for (int l = 1; l <= (10); l =l+1)
    {
        for (int k = 1; k <= l; k++)
        {
            for (int j = 1; j <= k; j++)
            
{
            product = j * product;
            }
            sum = sum + product;
            product = 1;
        }
        
        Final = Final + sum;
        sum = 0;
    }
    cout << Final<<"\n";
    return 0;
}

/*
Code A

int sum = 0, product = 1;
    cout << "We will calculate the sum of all prodcuts from a range of 1-1, 1-2, 1-3.\n";
    for (int l = 1; l <= (3); l =l+1)
    {
        for (int j = 1; j <= (l); j++)
        {
            product = j * product;
        }
        sum = sum + product;
        product = 1;
    }
    cout << sum<<"\n";
    return 0;*/