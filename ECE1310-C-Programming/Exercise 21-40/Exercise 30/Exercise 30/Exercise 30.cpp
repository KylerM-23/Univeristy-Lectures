#include <iostream>;
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i <= 20; i = i + 1)
	{
		sum = sum + i;
	}
	cout << "The sum of numbers from 1 to 20 is " << sum<< "\n";
	return 0;
}