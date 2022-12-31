#include <iostream>
using namespace std;

void main()
{
    char Letter;
    cout << "Enter a letter and we will determine whether the letter is a vowel or consonant\nEnter the letter.\n";
    cin >> Letter;
    switch (Letter)
    {
    case 'a':
    case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "The letter is a vowel\n.";
            break;
        default:
            cout << "The letter is a consonant.\n";
            break;
        }
}