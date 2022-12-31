#include <iostream>
using namespace std;

double exp(double &base, int expo)
{
    if (expo == 0)
    {
        return 1;
    }
    return base * exp(base, expo - 1);
}
int main()
{
    double a= 0;
    int b = 0;
    cout << "We will calculate a^b.\n";
    cout << "Enter a value for a\n";
    cin >> a;
    cout << "\n";
    cout << "Enter a value for b\n";
    cin >> b;
    if (b < 0)
    {
        cout << "We can't process negative exponets";
        return 0;
    }
    cout << "\n";
    cout << a << "^" << b << "  is " << exp(a, b)<<"\n";
    return 0;
}
