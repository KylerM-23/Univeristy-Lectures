#include <iostream>
using namespace std;

void main()
{
	int n1 = 0, n2 = 1, n = 0;
	cout << 0 << ", " << 1 << ", ";
	for (int i = 0; i < 18; i++)
	{
		n = n1 + n2;
		cout << n << ", ";
		n1 = n2;
		n2 = n;

	}
	cout << "\n";
}