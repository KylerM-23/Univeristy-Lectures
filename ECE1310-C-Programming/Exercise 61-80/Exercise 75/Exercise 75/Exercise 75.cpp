// Exercise 75.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int GCD(int m, int n)
{
    if (m == n)
    {
        return m;
    }
    else if (m > n)
    {
        return GCD(m - n, n);
    }
    else
    {
        return GCD(m, n - m);
    }
}
int main()
{
    int m = 0, n = 0, temp = 0,g = 0;
    cout << "Enter two numbers you want the LCD of\n";
    cin >> m;
    cout << "\nEnter another number\n";
    cin >> n;
    if (n > m)
    {
        temp = m;
        m = n;
        n = temp;
    }
    g = GCD(m, n);
    cout << "The LCD is " << (m/g)*(n/g)*g << "\n";

}

