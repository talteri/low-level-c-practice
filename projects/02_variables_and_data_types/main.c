#include <stdio.h>
#include "include/variables.h"
#include "include/converter.h"

int main(void)
{
    printf("Lesson 2: Variables and Data Types\n");

    show_basic_variables();
    demonstrate_casting();

    double celsius_temperature = 25.0;
    double fahrenheit_temperature = celsius_to_fahrenheit(celsius_temperature);
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius_temperature, fahrenheit_temperature);
    double converted_back = fahrenheit_to_celsius(fahrenheit_temperature);
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit_temperature, converted_back);

    run_temperature_converter();

    return 0;
}