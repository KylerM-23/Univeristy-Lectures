// Exercise 1-DA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;
void selectionsort(double arrayx[], int size)
{
    double temp = 0;
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
        //printArray(arrayx, size);
        //cout << "\n";
    }
}
double mean(double arrayx[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arrayx[i];
    }
    return sum / size;
}
double median(double arrayx[], int size)
{
    int index = 0;
    double median = 0;

    if (size % 2 == 0)
    {
        index = (size-1)/2;
        median = (arrayx[index]+arrayx[index + 1])/2;
    }
    else
    {
        index = (size-1) / 2;
        median = arrayx[index];
    }
    return median;
}
int main()
{
    ifstream high_file, low_file;
    high_file.open("High.txt");
    low_file.open("Low.txt");
    const int arraySize = 252;
    double temp = 0;
    double price_high[arraySize], price_low[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        high_file >> temp;
        price_high[i] = temp;
        low_file >> temp;
        price_low[i] = temp;
    }
    cout << "The average of the high prices is " << mean(price_high, arraySize) << "\n";
    cout << "The average of the low prices is " << mean(price_low, arraySize) << "\n";
    selectionsort(price_high, arraySize);
    selectionsort(price_low, arraySize);
    cout << "The median of the high prices is " << median(price_high, arraySize) << "\n";
    cout << "The median of the low prices is " << median(price_low, arraySize) << "\n";


    
}

/*Sort the arrays price_high and price_low. Determine the median for arrays price_high and price_low. 

 */