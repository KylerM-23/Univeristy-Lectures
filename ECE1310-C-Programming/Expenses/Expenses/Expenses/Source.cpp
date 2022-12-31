#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int Choice()
{
	int choice = 0;
	cout << "Please input the number for your selection:\n1.Display All Expenses\n2.Enter New Expense\n3.Erase All Expenses\n4.Exit Program\n\n";
	cin >> choice;
	cout << "\n";
	return choice;
}

int Data(int x)
{
	ifstream input_data;
	input_data.open("data.txt", ios::app);
	
	int  n, w = 0, r = 0, month = 0, day = 0, year = 0;
	double money = 0, avg = 0, total = 0, temp = 0;

	if (input_data.fail())
	{
		exit(1);
	}
	if (x == 1)
	{
		while (input_data >> n)
		{
			r = r + 1;
			switch (r)
			{
			case 1:
				temp = n;
				break;

			case 2:
				money = temp + (n / 100);
				break;

			case 3:
				month = n;
				break;

			case 4:
				day = n;
				break;

			case 5:
				year = n;
				r = 0;
				total = total + money;
				w = w + 1;
				cout << "On " << month << "/" << day << "/" << year << " you spent " << money << ".\n";
				break;
			}
		}
		avg = total / w;
		cout << "\n" << "You have spent a total of " << total << ". On average you spend " << avg << " on average per purchase.\n\n";
	}
	else
	{
		int dollar = 0, cent = 0;
		cout << "Input the dollar amount you spent.\n";
		cin >> dollar;
		input_data >> dollar;
	}
	input_data.close();
	
	return 0;
}

int Erase_Data()
{
	ofstream input_data;
	input_data.open("data.txt");

	if (input_data.fail())
	{
		exit(1);
	}

	input_data.close();
	cout << "Data has been erased.\n\n";
	return 0;
}

int main()
{
	bool active = true;
	int choice = 0;

	cout << "Welcome to the finace tracker.\n";

	while (active == true)
	{
		choice = Choice();
		switch (choice)
		{
		case 1:
			Data(1);
			break;
		case 2:
			Data(2);
			break;
		case 3:
			Erase_Data();
			break;
		case 4:
			cout << "Thank you for using the program, thank you.\n";
			active = false;
			break;
		default:
			cout << "An error has been made.\n";
			break;
		}
	}
	return 0;
}