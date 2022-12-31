#include <iostream>
using namespace std;

int main()
{
    double l1=  0, l2= 0, l3= 0, c = 0,b = 0, a= 0;
    cout << "Can you make a rigth triangle with that?\n";
    cout << "\nEnter your first leg\n";
    cin >> l1;
    cout << "\nEnter your second leg\n";
    cin >> l2;
    cout << "\nEnter your third leg\n";
    cin >> l3;
    
    if (l1 == 0 || l2 == 0 || l3 == 0)
    {
        cout << "\nLook, you can't make a triangle with less than 3 legs. It's called a triangle for a reason.\n";
        return 0;
    }

    if (l1 >= l2 && l1 >= l3)
    {
        c = l1;
        b = l2;
        a = l3;
    }
    
    if (l2 >= l1 && l2 >= l3)
    {
        c = l2;
        b = l1;
        a = l3;
    }
    if (l3 >= l2 && l3 >= l1)
    {
        c = l3;
        b = l2;
        a = l1;
    }

 
    if (c * c == (a * a + b * b))
    {
        if (a == b)
            {
                cout << "\nYou can create an isosceles right triangle with hypotnese " << c << " and legs " << a << " and " << b << ".\n";
                return 0;
            }
        else 
        {
            cout << "\nYou can create a right triangle with hypotnese " << c << " and legs " << a << " and " << b << ".\n";
            return 0;
        }
        
    }

    if (c * c != (a * a + b * b))
    {
        cout << "\nSorry you can't make a triangle with those legs.\n";
        return 0;
    }
}
