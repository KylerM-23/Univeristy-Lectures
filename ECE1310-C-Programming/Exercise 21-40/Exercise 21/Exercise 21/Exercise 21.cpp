#include <iostream>
using namespace std;

int main()
{
    float gn1 = 0, gn2=  0, gn3 = 0, average = 0;
    char g1;
    char g2;
    char g3;

    cout << "We will be determining whether you passed, depending on the average of three grades.\n";
    cout << "Note P means passed and F means failed";\
    cout << "Enter the first grade\n";
    cin >> gn1;
    cout << "Enter the second grade\n";
    cin >> gn2;
    cout << "Enter the third grade\n";
    cin >> gn3;
    average = (gn1 + gn2 + gn3) / 3;
    if (gn1 >= average)
    {
        g1 = 'p';
    }
    if (gn1 < average)
    {
        g1 = 'f';
    }
    if (gn2 >= average)
    {
        g2 = 'p';
    }
    if (gn2 < average)
    {
        g2 = 'f';
    }
    if (gn3 >= average)
    {
        g3 = 'p';
    }
    if (gn3 < average)
    {
        g3 = 'f';
    }
    cout << "With an average of " << average << " the first kid got a grade of " << g1 << " the second kid got a grade of " << g2 << " the third kid got a grade of " << g3;
    return 0;
}
