#include <iostream>
using namespace std;

struct Temp
{
    char scale;
    double degree;
};

Temp func_x(double d, char c)
{
    Temp x;
    x.degree = d;
    x.scale = c;
    return x;
}
int main()
{
     Temp room_f;
     room_f.scale = 'F';
     room_f.degree = 70;
     Temp room_c = func_x(20, 'C');
     cout << "Room temperature is " << room_f.degree << room_f.scale << " or " << room_c.degree << room_c.scale << "\n";
     return 0;
}