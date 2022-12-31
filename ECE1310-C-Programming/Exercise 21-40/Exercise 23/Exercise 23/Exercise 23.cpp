#include <iostream>
using namespace std;

int main()
{
   float g = 0;

   cout << "We will calculate your letter grade after inputing your grade in percentage.\n";
   cout << "Enter your percentage\n";
   cin >> g;

   if (g >= 90)
   {
       cout << "You have an A, great job.";
       return 0;
   }
   else
   {
       if (90 > g && g >= 80)
       {
           cout << "You have a B, good job.";
           return 0;
       }

       else
       {
           if (80 > g&& g >= 70)
           {
               cout << "You have a C.";
               return 0;
           }
           else 
           {
               if (70 > g&& g >= 60)
               {
                   cout << "You have a D, you're barely passing.";
                   return 0;
               }
               else
               {
                   if (60 > g)
                   {
                       cout << "You have an F, you can do better than that.";
                       return 0;
                   }
               }
           }
       }
   }
}

