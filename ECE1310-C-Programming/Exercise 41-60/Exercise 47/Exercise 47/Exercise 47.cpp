#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream out_stream;
	out_stream.open("Output.txt");

	int heads = 0,tails =  0,b=1000;
	while (b <= 10000)
	{
		heads = 0;
		tails = 0;

		for (int i = 0; i < b; i++)
		{
			if (rand() % 2 == 0)
			{
				heads++;
			}
			else
			{
				tails++;
			}
		}
		cout << "The amount of heads was " << heads << " and the amount of tails was " << tails;
		cout << "\nThis yeilds a probability of " << (100 * heads / b) << "% chance for heads and " << (100 * tails / b) << "% chance for tails\n";
		b = b + 1000;
	}
	out_stream.close();
	return 0;
}