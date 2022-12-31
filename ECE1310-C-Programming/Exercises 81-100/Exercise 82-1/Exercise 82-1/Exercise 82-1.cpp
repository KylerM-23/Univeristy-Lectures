#include <iostream>
using namespace std;
#include <cmath>
#include <ctime>
//the plusone function can only increase a number by one and isn't very effient in it's work and can't be expanded to add differnet numbers.
//the plusfunct can add any two numbers and is more effeient when compared to plusone function.
//random numbers were chosen for both of the functions to prove that the functions work.

int plusone(unsigned int a)
{
	unsigned int carry = 1, b = 1, sum = 0,CarryActive = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((a & b) & carry) == pow(2, i) && CarryActive == 0)
		{
			if ((a & carry) == (1))
			{
				CarryActive = 1;
			}
			if (i == 0)
			{
				sum = sum ^ 0;
			}
			else 
			{
				sum = sum ^ carry;
			}
		}
		else if (((a & b)&carry) == pow(2, i) && CarryActive == 1)
		{
			sum = sum ^ 0;
			CarryActive = 1;
		}
		else if (((a & b) & carry) == 0 && CarryActive == 1)
		{
			sum = sum ^ carry;
			CarryActive = 0;
		}
		else if (((a & b) & carry) == 0 && CarryActive == 0)
		{
			CarryActive = 0;
			sum = sum ^ 0;
			if (i == 0)
			{
				sum = sum ^ carry;
			}

		}
		
		carry= carry << 1;
		b = b << 1;
	}
	return sum;
}

int plusfunct(unsigned int a, unsigned int b)
{
	unsigned int carry = 1, sum = 0, CarryActive = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((a & b) & carry) == 0 && CarryActive == 0)
		{
			if (((a & carry) == 0) && (b & carry) == 0)
			{
				sum = sum ^ 0;
			}
			else
			{
				sum = sum ^ carry;
			}
		}
		else if (((a & b) & carry) == pow(2, i) && CarryActive == 0)
		{
			sum = sum ^ 0;
			CarryActive = 1;
		}
		else if (((a & b) & carry) == pow(2, i) && CarryActive == 1)
		{
			sum = sum ^ carry;
			CarryActive = 1;
		}
		else if (((a & b) & carry) == 0 && CarryActive == 1)
		{
			if ((a & carry) == pow(2, i) || (b & carry) == pow(2, i))
			{
				sum = sum ^ 0;
				CarryActive = 1;
			}
			else
			{
				sum = sum ^ carry;
				CarryActive = 0;
			}
		}

		carry = carry << 1;
	}
	return sum;
}
int main()
{
	srand(time(0));
	unsigned int a = rand();
	unsigned int b = rand();
	unsigned int sum = 0, p1=0, p2=0;
	p1 = plusone(a);
	p2 = plusfunct(a, 1);
	cout << "a is " << a << " and adding 1 with plusone function is " << (p1) << "\n";
	cout << "a is " << a << " and adding 1 with plusfunct function is " << (p2) << "\n";
	a = rand();
	b = rand();
	sum = plusfunct(a, b);
	cout << "a is " << a << " b is " << b << " and the sum of the two is " << (sum) << "\n";
	return 0;
}