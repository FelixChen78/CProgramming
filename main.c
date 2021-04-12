#include <stdio.h>
#include <stdlib.h>

#define LOWER 0 /* Lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

void printHelloWorld()
{
    char helloWorld[] = "Hello, World ! \n";
    printf("%s", helloWorld);
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

void eof()
{
    /**TO SIMULATE EOF:
     *  On mac use: ctrl + d
     *  On windows use: ctrl + z
    */
    printf("Value of EOF = %d", EOF); /* prints value of EOF */
    printf("\nEnter char to output 0 or ctrl + d to output 1 ");
    printf("\ngetchar() != EOF: %i", getchar() != EOF); /* prints 1 when not EOF. prints 0 when EOF*/
}
int main()
{
//    printHelloWorld();
//    fahrenheitCelsiusTable();
//    fahrenheitCelsiusTableFloat();
//    fahrenheitCelsiusReverse();
//    inputOutput();
//    inputOutput2();
    eof();


    return 0;
}


/**                            CHEAT CHEAT                                */


/**                            C PROGRAMMING                              */

/** C STRINGS
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



/**                              GIT/GITHUB                                   */

/** CLONE A EXISTING PROJECT FROM GITHUB
 * git clone <repository link>
 */

/** ADD PROJECT TO GITHUB
 * Initial commit and push to repository:
 * git init
 * git add .
 * git commit -m "first commit"
 * git branch -m Main
 * git remote add origin https://github.com/FelixChen78/MyRepository.git
 * git push -u origin main
 */

/** FORK REPOSITORY AND PULL REQUEST
 * Fork a GitHub repository.
 * Clone the forked repository to your local system.
 * Add a Git remote for the original repository.
 * Create a feature branch in which to place your changes.
 * Make your changes to the new branch.
 * Commit the changes to the branch.
 * Push the branch to GitHub.
 * Open a pull request from the new branch to the original repo.
 * Clean up after your pull request is merged.
 */


/** CREATE NEW BRANCH FROM MASTER BRANCH
 * git checkout main
 * git branch <new branch>
 * git checkout <new branch>
 */

/** ADD CHANGES TO BRANCH
 * git add . or git add -A
 * git commit -m "commit message"
 * git push -u origin <local-branch>
 */

/** MERGE CHANGES TO MASTER BRANCH
 * git add . or git add -A
 * git commit -m "commit message"
 * git checkout main
 * git merge <new branch>
 */

/** GIT COMMANDS
 * CREATE NEW BRANCH:
 *  git branch -m <local-branch>
 * ADD GITHUB REPOSITORY TO BRANCH:
 *  git remote add origin <github repository link>
 * PUSH COMMIT TO BRANCH:
 *  git push -u origin <local-branch>
 * DELETE BRANCH:
 *  git branch -d <local-branch>
 * ADD CHANGES TO GIT:
 *  git add .
 * COMMIT FILES TO GIT:
 *  git commit -m "message"
 * PUSH COMMIT TO BRANCH:
 *  git push -u origin <local-branch>
 * SWITCH BRANCH:
 *  git checkout <local-branch>
 * MERGE BRANCH INTO CURRENT BRANCH:
 *  git merge <local-branch>
 * CHECK USER COMMIT LOG:
 *  git log --graph
 * CREATE AND SWITCH TO NEW BRANCH:
 *  git checkout -b <local-branch>
 * CLONE REPOSITORY FROM GITHUB:
 *  git clone <repository link>
 */