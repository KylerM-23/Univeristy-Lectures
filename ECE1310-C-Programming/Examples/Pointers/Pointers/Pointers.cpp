// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i, * p;
    cout << "Enter an integer value ... \n";
    cin >> i;
    p = &i;
    cout << "\nThe pointer p points to is ... " << *p << "\n";
    return 0;
}

