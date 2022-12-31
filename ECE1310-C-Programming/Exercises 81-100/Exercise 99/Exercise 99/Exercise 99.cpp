// Exercise 99.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void cube(int* number)
{
    *number = *number * *number * *number;
}
int main()
{
    int n;
    cout << "Enter an integer\n";
    cin >> n;
    cout << "\nThe cube of " << n << " is ";
    cube(&n);
    cout << n << "\n";
    return 0;
}
