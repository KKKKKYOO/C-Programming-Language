/**
 * Exercise 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
*/
#include <stdio.h>
int main(){
    int c;
    int blank;
    while ((c = getchar()) != EOF)
        if (c != ' ')
            blank = 0;
        if (!blank)
            putchar(c);
        if (c == ' ')
            blank = 1;
}