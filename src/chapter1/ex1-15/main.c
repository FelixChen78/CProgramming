//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

void fahrenheitCelsiusAsFunction(); // Ex 1-15
void fahrenheitCelsiusAsFunction()
{
    int fahrenheit, celsius;
    printf("__________________________ \n");
    printf("|Fahrenheit-Celsius Table| \n");
    printf("-------------------------- \n");

    for (fahrenheit = LOWER; fahrenheit < UPPER; fahrenheit += STEP) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("|\t%3.0d \t| \t%6.1d\t |\n", fahrenheit, celsius);
    }
    printf("-------------------------- \n");
}

int main()
{
    fahrenheitCelsiusAsFunction();
    return 0;
}
