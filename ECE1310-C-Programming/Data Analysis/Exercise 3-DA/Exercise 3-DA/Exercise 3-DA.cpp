
#include <iostream>
#include <cmath>

using namespace std;

struct Population
{
    string state;
    int pop;

};


int main()
{
    double mean = 0, variance = 0, standar_deviation = 0;
    double sum = 0;
    int total_num_states = 5;
    Population p2010[51];
    int pop_number[5] = { 4785401,714146,6413158,2921588,37338198 };

    string pop_state[5] = { "Alabama", "Alaska", "Arizona", "Arkansas", "California" };

    for (int i = 0; i < total_num_states; i++)
    {
        p2010[i].state = pop_state[i];
        p2010[i].pop = pop_number[i];
        sum = sum + p2010[i].pop;
    }

    mean = sum / total_num_states;

    sum = 0;

    for (int i = 0; i < total_num_states; i++)
    {
        sum = sum + (p2010[i].pop - mean)* (p2010[i].pop - mean);
        
    }
    variance = (sum) / 4;
    standar_deviation = sqrt(variance);
    cout << "The mean of the states is " << mean << " the variance is " << variance << " and the standard deviation is " << standar_deviation<<"\n";

}
