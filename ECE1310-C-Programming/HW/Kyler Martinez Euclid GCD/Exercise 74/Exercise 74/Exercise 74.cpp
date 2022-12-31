// Exercise 74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Brute Force Method

/*
int GCD(int m, int n, int g)
{
    if (m % g == 0 && n % g == 0)
    {
        return g;
    }
    else
    {
        return GCD(m, n, g - 1);
    }
}
*/
//euclid

int GCD(int m, int n)
{
    if (m % n == 0)
    {
        return n;
    }
    else
    {
        return GCD(n, m % n);
    }
}
/*
//Dijkstra
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
*/
int main()
{
    int m = 0, n = 0, temp = 0;
    cout << "Enter two numbers you want the GCD of\n";
    cin >> m;
    cout << "\nEnter another number\n";
    cin >> n;
    if (n > m)
    {
        temp = m;
        m = n;
        n = temp;
    }
    cout << "The GCD is " << GCD(m, n) << "\n";

}
