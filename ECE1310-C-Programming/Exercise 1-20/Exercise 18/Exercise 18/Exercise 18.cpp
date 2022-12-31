#include <iostream>
using namespace std;

int main()
{
    float num = 0;
   cout << "We will check you number and see if it is in range [3:10]\n";
   cout << "Enter your number\n";
   cin >> num;
   if (num >= 3 && num <= 10)
   {
       cout << "\nYour number is in range.\n";
       return 0;
   }
   else
   {
       cout << "\nYour number isn't in range\n";
       return 0;
   }
}
