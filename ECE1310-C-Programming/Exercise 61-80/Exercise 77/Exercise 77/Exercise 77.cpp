#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 0x00001111;
    printf("%08x\n", a);
    a = ~a;
    printf("%08x\n",a);
    return 0;
}
