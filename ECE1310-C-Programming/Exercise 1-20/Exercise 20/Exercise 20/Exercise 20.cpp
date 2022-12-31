// Exercise 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 0, n3 = 0, temp = 0;
    cout << "This program takes in two numbers to form a range and takes a third and checks if it's in range\n";
    cout << "Please enter one number that you want to be in your range\n";
    cin >> n1;
    cout << "Please enter another number that you want to be in your range\n";
    cin >> n2;
    
    if (n2 > n1)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    cout << "Please enter a number that you want checked.\n";
    cin >> n3;

    if (n3 >= n2 && n3 <= n1)
    {
        cout << n3 << " is in range of [" << n2 << ":" << n1 << "]\n";
        return 0;
    }

    else
    {
        cout << n3 << " is not in range of [" << n2 << ":" << n1 << "]\n";
        return 0;
    }
}
