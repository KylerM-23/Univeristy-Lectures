// Exercise 86.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct StudentRecord
{
    char ID;
    double score;
};

int main()
{
    double average = 0,sum = 0;
    StudentRecord ece1310[20] = { 'A',84,'B',66,'C',77,'D',78,'E',89,'F',92,'G',61,'H',91,'I',65,'J',72,'K',70,'L',85,'M',97,'N',65,'O',84,'P',79,'Q',92,'R',76,'S',86,'T',79 };
    for (int i = 0; i < 20; i++)
    {
        cout << ece1310[i].ID << " score:" << ece1310[i].score << "\n";
        sum = sum + ece1310[i].score;
    }
    average = sum / 20;
    cout << "The average of the class is " << average  << "\n";
}
