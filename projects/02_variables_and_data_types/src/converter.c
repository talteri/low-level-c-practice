#include <stdio.h>
#include "../include/converter.h"

double celsius_to_fahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheit_to_celsius(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

void run_temperature_converter(void)
{
    double celsius, fahrenheit;
    int choice;

    printf("=== Temperature Converter ===\n");
    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("0 - Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 0)
    {
        if (choice == 1)
        {
            printf("Enter temperature in Celsius: ");
            if (scanf("%lf", &celsius) != 1)
            {
                printf("Invalid input. Please enter a numeric value.\n");
                // Clear the invalid input
                while (getchar() != '\n')
                    ;
                continue;
            }
            fahrenheit = celsius_to_fahrenheit(celsius);
            printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
        }
        else if (choice == 2)
        {
            printf("Enter tempratture in Farenheit: ");
            if (scanf("%lf", &fahrenheit) != 1)
            {
                printf("Invalid input. Please enter a numeric value.\n");
                // Clear the invalid input
                while (getchar() != '\n')
                    ;
                continue;
            }
            celsius = fahrenheit_to_celsius(fahrenheit);
            printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
        }
        else if (choice != 0)
        {
            printf("Invalid choice. Please try again.\n");
        }
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    }

    printf("Goodbye!\n");
}