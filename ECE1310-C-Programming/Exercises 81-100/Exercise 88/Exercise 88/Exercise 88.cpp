// Exercise 88.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int sizeRow = 10;
const int sizeCol = 2;
void printarray(int arrayx[][sizeCol], int sizex, int sizey);

int main()
{
    int arrayA[sizeRow][sizeCol] = { 3,2,5,7,1,8,0,2,9,10,1,1,1,1,1,1,1,1,1,1};
    {
        for (int i = 0; i <= sizeCol - 1; i++)
        {
            for (int j = 0; j <= sizeRow - 1; j++)
            {
                cout << "i = " << i << " and j = " << j << " is ";
                cout << arrayA[j][i] << "\n";
            }
        }
    }
    cout << "\n";
    printarray(arrayA, sizeRow, sizeCol);
    return 0;
}

void printarray(int arrayx[sizeRow][sizeCol], int sizeX, int sizeY)
{
    for (int i = 0; i <= sizeY - 1; i++)
    {
        for (int j = 0; j <= sizeX - 1; j++)
        {
            cout << "i = " << i << " and j = " << j << " is ";
            cout << arrayx[j][i] << "\n";
        }
    }
}

