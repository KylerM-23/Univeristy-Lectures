// Exercise 101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* cube(int* number)
{
    int result = 0;
    result = *number * *number * *number;
    return &result;
}

int main()
{
    int n;
    int* p;
    cout << "Enter an integer \n";
    cin >> n;
    p = cube(&n);
    cout << "\nThe cube of " << n << " is " << *p << "\n";
    return 0;
}