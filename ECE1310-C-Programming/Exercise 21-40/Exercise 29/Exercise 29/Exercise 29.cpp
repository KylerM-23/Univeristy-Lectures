#include <iostream>
using namespace std;

void main()
{
    int i = 0;

    cout << "Integer\tSquare\tCube\n";
    
    while (i <= 10)
    {
        cout << i << "\t" << (i * i) << "\t" << (i * i * i)<<"\n";
        i = i + 1;
    }
    
}
