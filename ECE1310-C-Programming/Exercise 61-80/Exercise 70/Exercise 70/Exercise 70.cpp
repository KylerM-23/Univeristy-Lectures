
#include <iostream>
using namespace std;

int function(int n)
{
    switch(n)
    {
    case 0:
        return -1;
    case 1:
        return 2;
    default:
        return function(n - 1) + 3 * function(n - 2);
    }

}

void main()
{
    int n = 0;
    cout << "Enter a value for n for f(n) ";
    cin >> n;
    cout << "\n";
    cout << "f(" << n << ")= " << function(n) << "\n";
}
