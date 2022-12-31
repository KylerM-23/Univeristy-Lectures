#include <iostream>
#include <cmath>

using namespace std;

struct US_State
{
    string name;
    int population;
    int average_income;

};

void printArray(US_State state_array[],int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "The state " << state_array[i].name << " has a population of " << state_array[i].population << " with an average income of " << state_array[i].average_income << "\n";

    }
}

US_State* copy_Array(US_State Orignal_Array[],US_State Array_2[], int size)
{

    for (int i = 0; i < size; i++)
    {
        Array_2[i] = Orignal_Array[i];
    }
    
    return Array_2;
}

void sort1(US_State arrayx[], int size)
{
    US_State temp;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arrayx[j].population < arrayx[i].population)
                {
                    temp = arrayx[j];
                    arrayx[j] = arrayx[i];
                    arrayx[i] = temp;
                }
            }
            
        }
    }

void sort2(US_State arrayx[], int size)
{
    US_State temp;
    for (int pass = 0; pass < size; pass++)
    {
        for (int i = 0; i < (size - 1); i++)
        {
            if (arrayx[i+1].average_income < arrayx[i].average_income)
            {
                temp = arrayx[i+1];
                arrayx[i+1] = arrayx[i];
                arrayx[i] = temp;
            }
        }
    }
    return;
}

void data_analyses(US_State state_array[], int size)
{
    double pop_mean = 0, inc_mean = 0, sum=0, pop_variance=0, pop_standard = 0, inc_variance = 0, inc_standard = 0, divider = size;
    for (int i = 0; i < size; i++)
    {
        sum = state_array[i].population + sum;

    }
    pop_mean = sum / divider;
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + (state_array[i].population - pop_mean) * (state_array[i].population - pop_mean);

    }
    pop_variance = (sum) / divider;
    pop_standard = sqrt(pop_variance);
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = state_array[i].average_income + sum;
    }
    inc_mean = sum / divider;
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + (state_array[i].average_income - inc_mean) * (state_array[i].average_income - inc_mean);

    }
    inc_variance = (sum) / divider;
    inc_standard = sqrt(inc_variance);
    cout << "The mean state population is " << pop_mean << " with a variance of " << pop_variance << " with a standard deviation of " << pop_standard << "\n";
    cout << "The mean state income is " << inc_mean << " with a variance of " << inc_variance << " with a standard deviation of " << inc_standard << "\n";



}
int main()
{
    double mean = 0, variance = 0, standar_deviation = 0;
    double sum = 0;
    const int total_num_states = 50;
    int total = 50;
    US_State* population_pointer;
    US_State* income_pointer;
    
    US_State Original_US_States[total_num_states];
    US_State US_States_Population[total_num_states];
    US_State US_States_Income[total_num_states];

    int pop_number[total_num_states] = {4903185,731545,7278717,3017825,39512223,5758736,3565287,973764,21477737,10617423,1415872,1787065,12671821,6732219,3155070,2913314,4467673,4648794,1344212,6045680,6949503,9986857,5639632,2976149,6137428,1068778, 1934408 ,3080156,1359711,8882190,2096829,19453561,10488084,762062,11689100,3956971,4217737,12801989,1059361,5148714,884659,6833174,28995881,3205958 ,623989,8535519,7614893,1792147,5822434,578759 };
    int income_number[total_num_states] = {49861,74346,59246,47062,75277,71953,76348,64805,55462,58756,80212,55583,65030,55746,59955,58218,50247,47905,55602,83242,79835,56697,70315,44717,54478,55328,59566,58646,74991,81740,47169,67844,53855,63837,56111,51924,63426,60905,64340,52306,56274,52375,60629,71414,60782,72577,85203,44097,60773,61584 };

    string pop_state[total_num_states] = { "Alabama", "Alaska", "Arizona", "Arkansas", "California","Colorado","Connecticut","Delaware","Florida","Georgia","Hawaii","Idaho","Illinois","Indiana","Iowa","Kansas","Kentucky","Louisiana", "Maine", "Maryland"," Massachusetts", "Michigan", "Minnesota"," Mississippi"," Missouri"," Montana", "Nebraska","Nevada"," New Hampshire","New Jersey"," New Mexico"," New York","North Carolina","North Dakota","Ohio"," Oklahoma","Oregon"," Pennsylvania"," Rhode Island"," South Carolina"," South Dakota"," Tennessee"," Texas"," Utah"," Vermont"," Virginia"," Washington"," West Virginia"," Wisconsin"," Wyoming"};

    for (int i = 0; i < total_num_states; i++)
    {
        Original_US_States[i].name = pop_state[i];
        Original_US_States[i].population = pop_number[i];
        Original_US_States[i].average_income = income_number[i];
        
    }
    printArray(Original_US_States, total_num_states);
    cout << "\n";
    population_pointer = copy_Array(Original_US_States, US_States_Population, total_num_states);
    sort1(US_States_Population, total_num_states);
    cout << "\n";
    printArray( US_States_Population, total_num_states);
    income_pointer = copy_Array(Original_US_States,US_States_Income, total_num_states);
    sort2(US_States_Income, total_num_states);
    printArray(US_States_Income, total_num_states);

    int median_pop, median_inc, num;
    
    if (total % 2 == 0)
    {
        num = (total / 2) + 1;
        median_pop = US_States_Population[(num)].population;
        median_inc = US_States_Income[num].population;
    }
    else 
    {
        num = (total / 2);
        median_pop = US_States_Population[num].population;
        median_inc = US_States_Income[num].population;
    }
    cout << "\n";
    cout << "The state with the median population is " << US_States_Population[num].name << " with a population of " << median_pop << "\n";
    cout << "The state with the median income is " << US_States_Income[num].name << " with a average income of " << median_inc << "\n";

    
    cout << "\n";
    data_analyses(Original_US_States, total_num_states);
    
    return 0;
}
