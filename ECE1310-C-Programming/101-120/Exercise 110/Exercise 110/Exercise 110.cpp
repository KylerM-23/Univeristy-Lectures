// Exercise 110.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[20], b[20], c[20];
    cin >> a;
    cout << "\nThe string has length " << strlen(a);
    strcpy_s(b, a);
    cout << "\nAfter copying, string b is " << b << "\n";
    cout << "\nEnter string 3 \n";
    cin >> c;
    cout << "\nAfter comparing string b and c, results are " << strcmp(b, c) << "\n";
    strcat_s(a, c);
    cout << "\nCancatenate strings a and c results in " << a << "\n";
    return 0;

}