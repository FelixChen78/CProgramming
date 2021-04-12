#include <stdio.h>

#define LOWER 0 /* Lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

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
void fahrenheitCelsiusReverse()
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
void fahrenheitCelsiusTableFloat()
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
void printHelloWorld()
{
    char helloWorld[] = "Hello, World ! \n";
    printf("%s", helloWorld);
}
int main()
{
//    printHelloWorld();
//    fahrenheitCelsiusTable();
//    fahrenheitCelsiusTableFloat();
    fahrenheitCelsiusReverse();
    return 0;
}


/**                          C PROGRAMMING                            */
/** CHEAT CHEAT
 * new line = \n
 * tab = \t
 * backslash = \\
 * double quote = \"
 * string format specifier = %s
 * character format specifier = %c
 * integer format specifier = %d or %i
 * float format specifier = %f
 * width and precision = eg. %6.2f a float where it is 6 character wide
 * and 2 characters wide after decimal point
 */

/** COMPILE AND RUN C PROGRAM
 * compile = cc fileName.c
 * run = a.out
 * run in current working directory = ./a.out
 */

/** CODE NAME CONVENTION
 * CLASSES: PASCAL CASE = ClassName
 * METHODS: CAMEL CASE = methodName
 * VARIABLES: CAMEL CASE = variableName
 */

/** GIT TERMINAL
 * git init
 * git add .
 * git commit -m "first commit"
 * git branch -m Main
 * git remote add origin https://github.com/FelixChen78/MyRepository.git
 * git push -u origin main
 */