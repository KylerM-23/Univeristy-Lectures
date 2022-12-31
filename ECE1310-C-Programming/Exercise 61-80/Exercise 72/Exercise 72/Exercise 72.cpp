
#include <iostream>
using namespace std;
int sum(int n)
//call by value 
{
    if (n == 0)
    {
        return 0;

    }
    else
    {
        return n + sum(n - 1);
    }
}
void main()
{
    int n = 0;
   cout << "We will calculate the sum of numbers from 1 to n. Enter a value for n\n";
   cin >> n;
   cout << "The answer is " << sum(n) << "\n";

}
