#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 0x0000FFFF;
    unsigned int b = 0x22221111;
    unsigned int c = 0x00000000;
    printf("a: %08x\n", a);
    printf("b: %08x\n", b);
    c = a & b;
    printf("AND Result: %08x\n", c);
    c = a | b;
    printf("OR Result: %08x\n", c);
    c = a ^ b;
    printf("XOR Result: %08x\n", c);
    return 0;
}
