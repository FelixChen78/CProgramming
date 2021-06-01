//
// Created by Felix  Chen on 6/1/21.
//

#include <stdio.h>

int main()
{
    int fahrenheit, celsius;
    int lower, upper, step;
    lower = -20;
    upper = 150;
    step = 5;
    celsius = lower;

    while(celsius <= upper) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%d\t%d\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
    return 0;
}
