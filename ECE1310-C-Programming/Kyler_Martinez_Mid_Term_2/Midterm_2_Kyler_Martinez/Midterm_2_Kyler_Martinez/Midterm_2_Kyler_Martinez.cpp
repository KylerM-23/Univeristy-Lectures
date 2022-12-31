// Midterm_2_Kyler_Martinez.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

//The global variables are for the recursive function and aren't acessible by Loop() due to scope.
//Six variables were chosen to cover enough digits from 25-50.
//I was unsure whether or not we have to tuurn the digits into one whole number or if we could output them sepreatly, so I did both since I was unsure. I do apologize if this was unnessary.
int b0 = -1, b1 = -1, b2 = -1, b3 = -1, b4 = -1, b5 = -1;

void Recursive(int num, int j)
{
    //For some reason my i wouldn't pass and update so I assigned it to another variable within the function so ti would pass. 
    int i = j;
    int q = num;
    if (q == 0)
    {
        //Allows for values 32 or over to work.
        if (b5 == 1)
        {
            cout << b5;
        }
        cout << b4 << b3 << b2 << b1 << b0;
        int binary = b0 + b1 * 10 + b2 * 100 + b3 * 1000 + b4 * 10000;
            if (b5 == 1)
            {
                binary = binary + b5 * 100000;
            }
        cout << "\nAs one number the binary number is "<<binary << "\n";
        //Returns nothing to work with the return type.
        return;
    }
    if (i == 0)
        {
            b0 = q % 2;
        }
    if (i == 1)
        {
            b1 = q % 2;
        }
        if (i == 2)
        {
            b2 = q % 2;
        }
        if (i == 3)
        {
            b3 = q % 2;
        }
        if (i == 4)
        {
            b4 = q % 2;
        }
        if (i == 5)
        {
            b5 = q % 2;
        }
      q = q / 2;
      return Recursive(q, i+1);
    
}
void Loop(int num)
{
    //These variables are local to the scope of the function Loop().
    int b0 = -1, b1 = -1, b2 = -1, b3 = -1, b4 = -1, b5 = -1;
    int q = num;
    for (int i = 0; q > 0; i++)
    {

        if (i == 0)
        {
            b0 = q % 2;
        }
        if (i == 1)
        {
            b1 = q % 2;
        }
        if (i == 2)
        {
            b2 = q % 2;
        }
        if (i == 3)
        {
            b3 = q % 2;
        }
        if (i == 4)
        {
            b4 = q % 2;
        }
        if (i == 5)
        {
            b5 = q % 2;
        }
        q = q / 2;
    }
    if (b5 == 1)
    {
        cout << b5;
    }
    cout << b4 << b3 << b2 << b1 << b0;
    int binary = b0 + b1 * 10 + b2 * 100 + b3 * 1000 + b4 * 10000;
    if (b5 == 1)
    {
        binary = binary + b5 * 100000;
    }
    cout << "\nAs one number the binary number is " << binary << "\n";
    return;
}

int main()
{
    srand(time(0));
    int num = 25 + rand() % (50 - 25 + 1);
    cout << "For for loop implementation " << num << " in binary is ";
    Loop(num);
    cout << "\n\n"<<"For recursive implementation " << num << " in binary is ";
    Recursive(num, 0);
    cout << "\n";
    return 0;
    
}