#include <stdio.h>
#include "../include/variables.h"

void show_basic_variables()
{
    int age = 25;
    float height = 1.75;
    double weight = 70.5;
    char initial = 'T';

    printf("=== Basic Variables ===\n");
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Weight: %.1lf kg\n", weight);
    printf("Initial: %c\n", initial);
    printf("=======================\n");
}

void demonstrate_casting()
{
    int a = 5, b = 2;
    float result_without_cast = a / b;
    float result_with_cast = (float)a / b;

    printf("=== Casting Example ===\n");
    printf("Without casting: %f\n", result_without_cast);
    printf("With casting: %.2f\n", result_with_cast);
    printf("========================\n");
}
