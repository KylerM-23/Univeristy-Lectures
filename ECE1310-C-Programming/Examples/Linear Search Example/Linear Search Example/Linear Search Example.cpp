// Linear Search Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define N 10
void selectionsort(int arrayx[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arrayx[j] < arrayx[i])
            {
                temp = arrayx[j];
                arrayx[j] = arrayx[i];
                arrayx[i] = temp;
            }
        }
        for (int k = 0; k < size; k++)
        {
            cout << arrayx[k]<<" ";
        }
        cout << "\n";
    }
}
bool linear_search(int arrayx[], int size, int key)
{
    bool found = false;
    int current_inx = 0;
    int count = 0;
    cout << "The key is " << key << "\n";
    while (current_inx < size)
    {
        if (arrayx[current_inx] == key)
        {
            found = true;
            count++;
        }
        else
        {
            current_inx++;
        }
    }
    return found;
}
int main()
{
    int key = 99;
    int arrayA[N];
    for (int i = 0; i < N; i++)
    {
        arrayA[i] = 60 + rand() % 41;
        cout << arrayA[i] << " ";
    }
    cout << "\n\n";
    selectionsort(arrayA, N);
    for (int i = 0; i < N; i++)
    {
        cout << arrayA[i] << " ";
    }
    cout << "\n";
    /*if (linear_search(arrayA, N, key) == true)
    {
        cout << key << " was found in the array";
    }
    else 
    {
        cout << key << " was not found in the array";
    }*/
    return 0;
}
