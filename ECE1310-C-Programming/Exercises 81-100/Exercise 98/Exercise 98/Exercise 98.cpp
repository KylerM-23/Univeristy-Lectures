#include <iostream>
using namespace std;

void main()
{
	int i = 0,temp =0, *p1, *p2, n1 = 1, n2 =1;
	p1 = &n1;
	p2 = &n2;

	cout << 0 << ", " << 1 << ", ";
	
	while (i < 18)
	{
		cout << *p1 + *p2 << ", ";
		temp = *p1 + *p2;
		*p1 = *p2;
		*p2 = temp;
		i = i + 1;


	}
	cout << "\n";
}
#include <iostream>
using namespace std;

/*
void main()
{
	int i = 0, n1 = 0, n2 = 1, n = 0;
	cout << 0 << ", " << 1 << ", ";
	while (i < 18)
	{
		n = n1 + n2;
		cout << n << ", ";
		n1 = n2;
		n2 = n;
		i = i + 1;

	}
	cout << "\n";
}
*/