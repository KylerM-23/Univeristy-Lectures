#include <iostream>

int main()
{
    unsigned int a = 0x0000FFFF;
    printf("Original: %08x\t\n", a);
    a = a >> 1;
    printf("Shift Right 1 bit: %08x\t", a);
    return 0;
}