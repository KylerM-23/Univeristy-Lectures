#include <iostream>
using namespace std;

int main()
{
    int num = 2, i = 1;
    cout << num<<"\n";
    while (i < 20)
    {
        cout << num * 2<<"\n";
        num = num * 2;
        i = i + 1;
    }
    return 0;
}