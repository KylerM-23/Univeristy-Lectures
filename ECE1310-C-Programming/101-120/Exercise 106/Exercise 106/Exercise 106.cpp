// Exercise 106.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char mystring[20] = "Hi there.\n";
    cout << mystring;
    for (int i = 0; i <= 19; i++)
    {
        cout << mystring[i] << " ";

    }
    return 0;
}
