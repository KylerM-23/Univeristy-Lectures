// Exercise 90.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printarray(int[], int);
int main()
{
    const int sizeA = 10;
    int ArrayA[sizeA] = { 3,2,5,7,1,8,0,2,9,10 };
    printarray(ArrayA, sizeA);
    return 0;
}

void printarray(int arrayx[], int sizeX)
{
    for (int i = 0; i <= sizeX - 1; i++)
    {
        cout << arrayx[i] << "\n";
    }
}
