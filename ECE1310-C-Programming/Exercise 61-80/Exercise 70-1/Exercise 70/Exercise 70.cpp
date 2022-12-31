#include <iostream>
using namespace std;

int function(int n)
{
    if (n == 0)
    {
        return -1;
    }
    else if (n == 1)
    {
        return 2;
    }
    else
    {
        return function(n - 1) + 3 * function(n - 2);
    }
}

void main()
{
    cout << function(3)<<"\n";
}
