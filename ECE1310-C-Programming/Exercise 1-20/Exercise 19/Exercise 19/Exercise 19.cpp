// Exercise 19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   int num = 0;
   cout << "Enter a number and we'll tell you if it is divisble by 2 and 3\n";
   cin >> num;

   if (num % 3 == 0 && num % 2 == 0)
   {
       cout << "The number is divisible by 2 and 3\n";
   }
   else
   {
       cout << "The number isn't divisible by 2 and 3\n";
   }
}
