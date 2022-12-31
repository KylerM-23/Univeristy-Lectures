// Exercise 44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i;
    ofstream out_stream;
    out_stream.open("outfile.txt");

    for (i = 1; i <= 50; i++)
    {
        cout << 1 + rand() % 6 << "\t";
        out_stream << 1 + rand() % 6 << "\n";
    }
    return 0;
}