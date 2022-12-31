// Exercise 85.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Time
{
    int hour;
    int min;
    int sec;
};
int main()
{
    Time breakfast_time;
    Time lunch_time;
    Time dinner_time;
    cout << "Enter the hour you eat breakfast\n";
    cin >> breakfast_time.hour;
    cout << "Enter the min you eat breakfast\n";
    cin >> breakfast_time.min;
    cout << "Enter the sec you eat breakfast\n";
    cin >> breakfast_time.sec;

    cout << "Enter the hour you eat lunch\n";
    cin >> lunch_time.hour;
    cout << "Enter the min you eat lunch\n";
    cin >> lunch_time.min;
    cout << "Enter the sec you eat lunch\n";
    cin >> lunch_time.sec;

    cout << "Enter the hour you eat dinner\n";
    cin >> dinner_time.hour;
    cout << "Enter the min you eat dinner\n";
    cin >> dinner_time.min;
    cout << "Enter the sec you eat dinner\n";
    cin >> dinner_time.sec;


    cout << "You eat breakfast at ";
    if (breakfast_time.hour < 10)
    {
        cout << "0" << breakfast_time.hour;
    }
    else
    {
        cout << breakfast_time.hour;
    }
    cout << ":";
    if (breakfast_time.min < 10)
    {
        cout << "0" << breakfast_time.min;
    }
    else
    {
        cout << breakfast_time.min;
    }
    cout << ":";
    if (breakfast_time.sec < 10)
    {
        cout << "0" << breakfast_time.sec;
    }
    else
    {
        cout << breakfast_time.sec;
    }

    cout << "\nYou eat lunch at " << lunch_time.hour<<":";

    if (lunch_time.min < 10)
    {
        cout << "0" << lunch_time.min;
    }
    else
    {
        cout << lunch_time.min;
    }
    cout << ":";
    if (lunch_time.sec < 10)
    {
        cout << "0" << lunch_time.sec;
    }
    else
    {
        cout << lunch_time.sec;
    }

    cout << "\nYou eat dinner at "<< dinner_time.hour<<":";
    
    if (dinner_time.min < 10)
    {
        cout << "0" << dinner_time.min;
    }
    else
    {
        cout << dinner_time.min;
    }
    cout << ":";
    if (dinner_time.sec < 10)
    {
        cout << "0" << dinner_time.sec;
    }
    else
    {
        cout << dinner_time.sec;
    }

    

}

