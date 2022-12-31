#include <iostream>
using namespace std;

int main()
{
    int num, x;
    cout << "Is your number even or odd, let's find out. Input a number below\n";
    cin >> num;

    if (num%2 == 1)
    {
        cout << "Your number is odd";
    }
    else
    {
        cout << "The number is even";
    }
   
    return 0;

}
