
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    int i=0, r1 = 0, r2 = 0;
    char y='Y';
    ofstream out_stream;
    out_stream.open("outfile.txt");
    cout << "We will be playing a game where we simualte the rolling of dice.\n";
    while (y == 'Y')
    {
        r1 = 1 + rand() % 6;
        r2 = 1 + rand() % 6;
        cout << r1 + r2 << "\n";
        out_stream << r1 + r2 << "\n";

        cout << "Do you want to continue playing type Y or N for yes or no.\n";
        cin >> y;
    }
    return 0;
}