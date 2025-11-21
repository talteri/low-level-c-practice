#include <stdio.h>

int main()
{
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    printf("Size of pointer to char: %zu bytes\n", sizeof(char *));
    printf("Size of pointer to int: %zu bytes\n", sizeof(int *));
    printf("Size of pointer to float: %zu bytes\n", sizeof(float *));
    printf("Size of pointer to double: %zu bytes\n", sizeof(double *));

    return 0;
}
