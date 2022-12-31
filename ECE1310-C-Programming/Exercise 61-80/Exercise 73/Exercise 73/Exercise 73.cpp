#include <iostream>
using namespace std;

int Star(int n)
{
    if (n == 0)
    {
        return 0;
    }
    for (int j = n; j > 0; j--)
    {
        cout << "*";
    }
    cout << "\n";
    return Star(n - 1);

}
int main()
{
    Star(5);
}