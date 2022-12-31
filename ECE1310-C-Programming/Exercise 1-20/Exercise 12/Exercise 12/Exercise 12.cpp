#include <iostream>
using namespace std;

int main()
{
    int grade = 0;
    cout << "Please enter the percentage of the grade you got on your test\n";
    cin >> grade;
    if (grade >= 60)
    {
        cout << "You passed.\n";
        cout << "Your grade is " << grade;
    }
    else
    {
        cout << "You failed.\n";
        cout << "Your grade is " << grade;
    }
    return 0;

}


