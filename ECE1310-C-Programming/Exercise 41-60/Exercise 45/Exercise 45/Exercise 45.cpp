
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    int i,r1=0,r2=0;
    ofstream out_stream;
    out_stream.open("outfile.txt");
    srand(time(0));
    r1 = 1 + rand() % 6;
    r2 = 1 + rand() % 6;
    cout << r1+r2 << "\t";
    out_stream << r1+r2 << "\n";
    return 0;
}