// Exercise 2-DA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Population
{
    string state;
    int pop;

};

void selectionsort(Population arrayx[], int size)
{
    Population temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arrayx[j].pop < arrayx[i].pop)
            {
                temp = arrayx[j];
                arrayx[j]= arrayx[i];
                arrayx[i] = temp;
            }
        }
    }
}
int main()
{
    double mean= 0;
    double sum = 0;
    int total_num_states = 5;
    Population p2010[51];
    int pop_number[5] = { 4785401,714146,6413158,2921588,37338198};

    string pop_state[5] = { "Alabama", "Alaska", "Arizona", "Arkansas", "California" };

    for (int i = 0; i < 5; i++)
    {
        p2010[i].state = pop_state[i];
        p2010[i].pop = pop_number[i];
        sum = sum + p2010[i].pop;
    }
    mean = sum / total_num_states;
    for (int i = 0; i < 5; i++)
    {
        cout << p2010[i].state << " had a population of " << p2010[i].pop << " in 2010\n";
    }
    cout << "The mean is " << mean << "\n\n";
    selectionsort(p2010, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << p2010[i].state << " had a population of " << p2010[i].pop << " in 2010\n";
    }
    cout << "\nThe median is " << p2010[total_num_states / 2].state<<" with a population of "<< p2010[total_num_states / 2].pop<<"\n";
    }

