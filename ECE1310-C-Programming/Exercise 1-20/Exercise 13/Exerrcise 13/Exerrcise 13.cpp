#include <iostream>
using namespace std;

int main()
{
   int num1 = 0, num2 = 0;
   cout << "We will compare two numbers and determine the largest of the bunch.\n";
   cout << "Enter the first number\n";
   cin >> num1;
   cout << "\nEnter the second number\n";
   cin >> num2;
   if (num1 >= num2)
   {
       cout <<"\n"<< num1 << " is the biggest number\n";
       return 0;
   }
   else
   {
       cout <<"\n"<< num2 << " is the largest number\n";
       return 0;
   }
}

