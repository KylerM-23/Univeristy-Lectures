#include <iostream>
using namespace std;

void main()
{
    int Num = 0;
        cout << "We will determine you letter grade depeening on the percent you scored on your test.\nEnter the percent you got.\n";
        cin >> Num;
        Num = Num / 10;

        switch (Num)
        {
        case (10):
        case (9):
            cout << "You got an A on the test.\n";
            break;
        case (8):
            cout << "You got a B on the test.\n";
            break;
        case (7):
            cout << "You got a C on the test.\n";
            break;
        case (6):
            cout << "You got a D on the test.\n";
            break;
        default:
            cout << "You failed the test.\n";
            break;
    }
}