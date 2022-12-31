#include <iostream>
using namespace std;

int main()
{
    int age = 0, t = 0;

    cout << "Enter your age and we will output your ticket price.\n";
    cin >> age;
    if (age <= 12)
    {
        t = 5;
    }
    if (age <= 18 && age > 12)
    {
        t = 7;
    }
    if (age <55 && age> 18)
    {
        t = 15;
    }
    if (age >= 55)
    {
        t = 10;
    }
    cout << "Your ticket price is $" << t<< "\n";

    
}
