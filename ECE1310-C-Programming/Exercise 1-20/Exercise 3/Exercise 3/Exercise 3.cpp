#include <iostream>
using namespace std;

// fn =  First Name
// ln =  Last Name
// a  = Age
// b = Birthday in form dd/mm/yyyy
// m = Major

int main()
{
	char fn[80];
	char ln[80];
	char m[80];
	char b[80];
	int a;

	cout << "Hello I am your new best friend. Before we get to playing, I only need a little bit of personal information before we continue. \n";
	cout << "Enter your first name ";
	cin >> fn;
	cout << "Enter your last name ";
	cin >> ln;
	cout << "Enter your major, please use one word. ";
	cin >> m;
	cout << "Enter your age ";
	cin >> a;
	cout << fn << " is " << a << " years old. \n";
	return 0;
}