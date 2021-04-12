#include <stdio.h>

#define LOWER 0 /* Lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

void printHelloWorld() // Ex 1-1
{
    char helloWorld[] = "Hello, World ! \n";
    printf("%s", helloWorld);

}

void unknownEscapeSequence() // Ex 1-2
{
    printf("\c"); /* Ignores backslash because \c is unknown*/
}
/** print Fahrenheit-Celsius table
        for fahrenheit = 0, 20, ..., 300 */
void fahrenheitCelsiusTable()
{
    //C = (5/9)(F-32)
    int fahrenheit, celsius;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%d\t%d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}

void celsiusFahrenheitTable() //Ex 1-3
{
    int fahrenheit, celsius;
    int lower, upper, step;
    lower = -20.0;
    upper = 150.0;
    step = 5.0;
    celsius = lower;

    while(celsius <= upper) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d\t%d\n", celsius, fahrenheit);
        celsius = celsius + step;
    }

}

void fahrenheitCelsiusTableFloat() // Ex 1-4
{
    float fahrenheit, celsius;
    float lower, upper, step;
    printf("__________________________ \n");
    printf("|Fahrenheit-Celsius Table| \n");
    printf("-------------------------- \n");

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("|\t%3.0f \t| \t%6.1f\t |\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    printf("-------------------------- \n");

}

void fahrenheitCelsiusReverse() // Ex 1-5
{
    float fahrenheit, celsius;
    printf("__________________________ \n");
    printf("|Fahrenheit-Celsius Table| \n");
    printf("-------------------------- \n");

    for (fahrenheit = UPPER; fahrenheit > LOWER; fahrenheit -= STEP) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("|\t%3.0f \t| \t%6.1f\t |\n", fahrenheit, celsius);
    }
    printf("-------------------------- \n");
}

void inputOutput()
{
    int c;
    c = getchar();
    while (c != EOF) {
//        putchar(c);
        printf("%c", c);
        c = getchar();
    }
}

void inputOutput2()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}

void eof() // Ex 1-6
{
    /**TO SIMULATE EOF:
     *  On mac use: ctrl + d
     *  On windows use: ctrl + z
    */
    printf("\nEnter char to output 0 or ctrl + d to output 1 ");
    printf("\ngetchar() != EOF: %i", getchar() != EOF); /* prints 1 when not EOF. prints 0 when EOF*/
}
void eof2() //Ex 1-7
{
    printf("Value of EOF = %d", EOF); /* prints value of EOF */
}


int main()
{
//    printHelloWorld();
//    unknownEscapeSequence();
//    fahrenheitCelsiusTable();
//    celsiusFahrenheitTable();
//    fahrenheitCelsiusTableFloat();
//    fahrenheitCelsiusReverse();
//    inputOutput();
//    inputOutput2();
//    eof();



    return 0;
}


