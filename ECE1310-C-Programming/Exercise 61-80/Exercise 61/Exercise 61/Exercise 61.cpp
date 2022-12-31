#include <iostream>
using namespace std;

void factorial(int &n,int &product)
{
    for (int i = 1; i <= n; i++)
    {
        product = i * product;
    }

}
int main()
{
    int n = 0,product = 1;
    cout << "Enter the factorial you want to solve for: ";
    cin >> n;
    factorial(n, product);
    if (n < 0)
    {
        cout << "We can't process negative factorials\n";
        return 0;
    }
    cout << n << "! is " << product;
    return 0;

}
