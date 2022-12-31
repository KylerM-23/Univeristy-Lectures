#include <iostream>
using namespace std;

int Large(int num1, int num2, int num3, int num4, int num5)
{
    
        if (num1 >= num2&&num1>=num3&&num1>=num4&&num1>=num5)
        {
            return num1;
        }
        if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
        {
            return num2;
        }
        if (num3 >= num2 && num3 >= num1 && num3 >= num4 && num3 >= num5)
        {
            return num3;
        }
        if (num4 >= num2 && num4 >= num3 && num4 >= num1 && num4 >= num5)
        {
            return num4;
        }
        else
        {
            return num5;
        }
    }


double Large(double num1, double num2, double num3, double num4, double num5)
{

    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
    {
        return num1;
    }
    if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
    {
        return num2;
    }
    if (num3 >= num2 && num3 >= num1 && num3 >= num4 && num3 >= num5)
    {
        return num3;
    }
    if (num4 >= num2 && num4 >= num3 && num4 >= num1 && num4 >= num5)
    {
        return num4;
    }
    else
    {
        return num5;
    }
}

int Pick(int q)
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    cout << "We will compare five numbers and determine the largest of the bunch.\n";
    cout << "Enter the first number\n";
    cin >> num1;
    cout << "\nEnter the second number\n";
    cin >> num2;
    cout << "\nEnter the third number\n";
    cin >> num3;
    cout << "\nEnter the fourth number\n";
    cin >> num4;
    cout << "\nEnter the fifth number\n";
    cin >> num5;
    return Large(num1, num2, num3, num4, num5);
}
double Pick(double q)
{
    double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    cout << "We will compare five numbers and determine the largest of the bunch.\n";
    cout << "Enter the first number\n";
    cin >> num1;
    cout << "\nEnter the second number\n";
    cin >> num2;
    cout << "\nEnter the third number\n";
    cin >> num3;
    cout << "\nEnter the fourth number\n";
    cin >> num4;
    cout << "\nEnter the fifth number\n";
    cin >> num5;
    return Large(num1, num2, num3, num4, num5);
}

void main()
{
    int q = 0;
    cout << "Type '1' for the program to use integers only or anything else for real numbers.";
    cin >> q;
    if (q == 1)
    {
        cout << "The largest number is " << Pick(1) << "\n";
    }
    else
    {
        cout << "The largest number is " << Pick(.35) << "\n";
    }


}
