
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[20], s2[20];
    cout << "Enter the first string ";
    cin.getline(s1, 20);
    cout << "Enter the second string ";
    cin.getline(s2, 20);
    cout << s2 <<"\n" <<s1;
    return 0;
}

