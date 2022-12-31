// Exercise 83.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double sum = 0,avg=0;
    int score[20] = {84,66,77,78,89,92,61,91,65,72,70,85,97,65,84,79,92,76,86,79};
    for (int i = 0; i < 20; i++)
    {
        sum = sum + score[i];
    }
    avg = sizeof(score)/sizeof(score[0]);
    cout << "The average is " << sum / avg << "\n";
    return 0;
}