#include <iostream>
using namespace std;

void main()
{
	int i = 0, n1 = 0, n2 = 1, n = 0;
	cout << 0 << ", " << 1 << ", ";
	while (i < 18)
	{
		n = n1 + n2;
		cout << n<< ", ";
		n1 = n2;
		n2 = n;
		i = i + 1;
		
	}
	cout << "\n";
}