#include <iostream>
using namespace std;

int main()
{
    int c = 1, T = 0;
    for (int i = 0; c > 0; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
        if (c == 5)
        {
            T = 1;
        }

        if (T == 0)
        {
            c++;
        }
        else 
        {
            c--;
        }
    }
    return 0;
}

/*
Code A
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

Code B
#include <iostream>
using namespace std;

int main()
{
    for (int i = 7; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

Code C
#include <iostream>
using namespace std;

int main()
{
    int co = 6, temp = 0;
    for (int i = 7; i > 0; i--)
    {
        for (int j = i; j > 0;j--)
        {

            if (7-co >=0 && i !=7)
            {
                cout << " "<< " ";
                co = co + 1;
                j = j + 1;
            }
            else
            {
                cout << "*"<<" ";
            }


        }
        co = i;
        cout << "\n";

    }
    return 0;
}

Code D
#include <iostream>
using namespace std;

int main()
{
    int c = 1;

    for (int i = 7; i > 0; i--)
    {
        for (int j = 7; j > 0; j--)
        {
            if (j > c)
            {
                cout << " " << " ";
            }
            else
            {
                cout << "*" << " ";
            }
        }
        c++;
        cout << "\n";
    }
    return 0;
}
*/