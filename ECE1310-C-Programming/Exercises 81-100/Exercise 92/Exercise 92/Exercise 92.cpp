#include <iostream>
using namespace std;

bool linear_search(int arrayx[], int arraySize, int key)
{
    int index = 0;
    bool found = false;
    while ((index < arraySize))
    {
        if (arrayx[index] == key)
        {
            return true;
        }
        index++;
    }
    return false;
}
int main()
{
    int key = 0;
    bool found = 0;
    int score[20] = { 84,66,77,78,89,92,61,91,65,72,70,85,97,65,84,79,92,76,86,79 };
    cout << "Please enter the score you wish to find: ";
    cin >> key;
    cout << "\n Your score ";
    found = linear_search(score, 20, key);
    if (found == true)
    {
        cout << "was found. Your score is " << key<<"\n";
    }
    else 
    {
        cout << "was not found. Did you enter the wrong score?\n";
    }
    return 0;
}