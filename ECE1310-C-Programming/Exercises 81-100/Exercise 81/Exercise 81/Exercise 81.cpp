// Exercise 81.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    unsigned int a = 15;
    printf("a is ... %08x \n", a);
    unsigned int b = 0x80000000;
    for (int i = 0; i < 32; i++)
    {
        if ((a & b) != 0)
        {
            cout << "1";
            count++;
        }
        else
        {
            cout << "0";
        }
        b = b >> 1;
    }
    cout << "\nThe number of 1's in the binary representation is " << count << "\n";
    return 0;


}

