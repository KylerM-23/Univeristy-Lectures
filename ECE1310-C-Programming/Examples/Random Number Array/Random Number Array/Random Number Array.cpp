// Random Number Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define N 1000

void main()

{
    int r[N];
    int sum = 0;
    double avg = 0;

    for (int i = 0; i < N; i++)
    {
        r[i] = rand() % ((2));
        sum = sum + r[i];
    }
    
    avg = (sum*1.0) / N;
    cout << "The sum is " << sum << "\n";
    cout << "The average of the numbers is " << avg << "\n";
}