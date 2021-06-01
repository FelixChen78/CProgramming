#include <stdio.h>

int main()
{
    int c, i = 0, lim = 10;
    char s[lim];

    while ((c=getchar()) != EOF) {
        if (c != '\n') {
            if (i < lim - 1) {
                s[i] = c;
                i++;
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    printf("%s \n", s);
}