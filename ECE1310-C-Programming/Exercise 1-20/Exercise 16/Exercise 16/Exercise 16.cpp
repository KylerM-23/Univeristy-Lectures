#include <iostream>
using namespace std;

int main()
{
    int num1, num2, mu;
    cout << "Enter two numbers and we will determine if they are multiples of each other.";
    cin >> num1;
    cin >> num2;
   

    mu = num1 % num2;

    if (mu == 0)
    {
        cout << "The two numbers are multiples of each other";
    }

    else
    {
        cout << "The numbers aren't multiples of each other";
    }

    return 0;



}

