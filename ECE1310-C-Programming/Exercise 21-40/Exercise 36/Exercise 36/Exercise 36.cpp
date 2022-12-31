#include <iostream>
using namespace std;

void main()
{
    int i = 1, product = 1;
   cout << "We will calculate the product of odd numbers from 1 to 15\n";
   do
   {
       product = i * product;
       i = i + 2;
   } while (i <= 15);
   cout << product;
}

