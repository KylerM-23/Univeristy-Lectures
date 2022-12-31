#include <iostream>
using namespace std;

int main()
{
	int n1 = 0, n2 = 0, n3 = 0, largest = 0;
	cout << "Comparing the three numbers\n";
	cout << "Enter the first number\n";
	cin >> n1;
	cout << "Enter the second number\n";
	cin >> n2;
	cout << "Enter the third number\n";
	cin >> n3;

	if (n1 >= n2 && n1 >= n3)
	{
		largest = n1;
		cout << "The largest number is " << largest;
		return 0;
	}

	if (n2 >= n1 && n2 >= n3)
	{
		largest = n2;
		cout << "The largest number is " << largest;
		return 0;
	}

	if (n3 >= n1 && n3 >= n2)
	{
		largest = n3;
		cout << "The largest number is " << largest;
		return 0;
	}
	}

