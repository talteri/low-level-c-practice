#include <stdio.h>

int main()
{
    int x = 42;
    int *p = &x;

    // Print: value, address, value using pointer
    printf("Value: %d\n", x);
    printf("Address: %p\n", p);
    printf("Value using pointer: %d\n", *p);

    // Modify value using pointer
    *p = 123;
    printf("Modified value of x using pointer: %d\n", x);

    return 0;
}