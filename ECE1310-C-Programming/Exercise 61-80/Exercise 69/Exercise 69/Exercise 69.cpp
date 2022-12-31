// Exercise 69.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int S(int i)
{
    int n = 0;
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return i + S(i - 1);
    }
}
int main()
{
    cout << S(5);
    return 0;
}
