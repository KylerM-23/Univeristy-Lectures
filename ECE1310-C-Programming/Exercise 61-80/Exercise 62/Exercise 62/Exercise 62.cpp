#include <iostream>
using namespace std;

 int Smallest(int x, int y, int z)
{

	if (x <= y && x <= z)
	{
		return x;
	}

	if (y <=x && y <= z)
	{
		return y;
	}

	if (z<=x && z <= y)
	{
		return z;
	}
}
 /*
int Smallest(int &x, int &y, int &z)
{

	if (x <= y && x <= z)
	{
		return x;
	}

	if (y <=x && y <= z)
	{
		return y;
	}

	if (z<=x && z <= y)
	{
		return z;
	}
}*/

void main()
{
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "Comparing the three numbers\n";
	cout << "Enter the first number\n";
	cin >> n1;
	cout << "Enter the second number\n";
	cin >> n2;
	cout << "Enter the third number\n";
	cin >> n3;
	cout << "The smallest number is "<< Smallest(n1, n2, n3)<< "\n";
	
}
