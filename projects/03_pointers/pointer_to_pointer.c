#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", x);
    printf("Value of p (address of x): %p\n", (void *)p);
    printf("Value of pp (address of p): %p\n", (void *)pp);
    printf("Value of *p (value of x): %d\n", *p);
    printf("Value of **pp (value of x): %d\n", **pp);

    return 0;
}
