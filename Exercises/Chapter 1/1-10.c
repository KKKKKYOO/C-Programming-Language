/**
 * Exercise 1-10: Write a program to copy its input to its ouput, replacing each tab by \t, each backspace by \b, and each backspash by \\.
 * This makes tabs and backspaces visibile in an unambiguous way.
*/
#include <stdio.h>

int main(){
    int c;
    while ((c = getchar()) != EOF){
        int flag = 0;
        if (c == '\t') {
            putchar('\\t');
            flag = 1;
        }
        if (c == '\b') {
            putchar('\\b');
            flag = 1;
        }
        if (c = '\\') {
            putchar('\\\\');
            flag = 1;
        }
        if (flag == 0){
            putchar(c);
        }
    }
    return 0;
}