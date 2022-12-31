
#include <iostream>
#include <cmath>
using namespace std;

/*double distance(double x1, double x2, double y1, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1)*(y2 - y1));
}*/

double distance(double &x1, double &x2, double &y1, double &y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void main()
{
   double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
   cout << "We will be calculating the distance between two points.\n";
   cout << "Enter your x1:";
   cin >> x1;
   cout << "Enter your x2:";
   cin >> x2;
   cout << "Enter your y1:";
   cin >> y1;
   cout << "Enter your y2:";
   cin >> y2;
   cout << "The distance between the two points is " << distance(x1, x2, y1, y2) << "\n";
}
