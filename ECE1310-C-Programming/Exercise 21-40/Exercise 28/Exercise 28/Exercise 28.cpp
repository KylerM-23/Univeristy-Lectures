#include <iostream>
using namespace std;

int main()
{
	int sum=0, num = 1;
	while (num <= 10)
	{
		sum = num + sum;
		num = num + 1;
	}
	cout << sum;
	return 0;
}