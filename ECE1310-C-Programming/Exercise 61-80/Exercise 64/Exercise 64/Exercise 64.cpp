#include <iostream>
using namespace std;

int reverser(int num)
{
    int temp = num,n1=0,n2=0,n3=0,n4=0,n5=0;
    n5 = num/10000;
    temp = temp - n5 * 10000;
    n4 = (temp) / 1000;
    temp = temp - n4 * 1000;
    n3 = (temp) / 100;
    temp = temp - n3 * 100;
    n2 = (temp) / 10;
    n1 = temp - n2 * 10; 
    return (n1*10000+n2*1000+n3*100+n4*10+n5);
}
void main()
{
    int num = 0, num2=0;
    cout << "Enter a 5 digit number and return the number with the digits reversed\n";
    cin >> num;
    num2 = reverser(num);
    cout << "You entered " << num << " and got " << num2 << "\n";
}