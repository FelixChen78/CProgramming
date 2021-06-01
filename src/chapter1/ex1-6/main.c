//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

int main()
{
    printf("\nEnter char to output 0 or ctrl + d to output 1 ");
    printf("\ngetchar() != EOF: %i", getchar() != EOF); /* prints 1 when not EOF. prints 0 when EOF*/
    return 0;
}