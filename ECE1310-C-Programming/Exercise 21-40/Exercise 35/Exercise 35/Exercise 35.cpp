#include <iostream>
using namespace std;

void main()
{
    int i = 0, sum = 0;
    cout << "We will print the sum of numbers from 1 to 20\n";
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 20);
    cout << sum;
}