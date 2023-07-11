/**
 * Exercise 1-8: Write a program to count blanks, tabs, and new lines
*/
#include <stdio.h>
int main(){
    long nc = 0;
    int hit;
    int space;
    int tab;
    int newline;

    do{
        hit = getchar();
        
        if(hit == ' '){
            space++;
            hit++;
        } else if (hit == '\t'){
            tab++;
            hit++;
        } else if (hit == '\n'){
            newline++;
            hit++;
        }
    }
    while (hit != EOF);
    printf("Blank: %i\n", space);
    printf("Tab: %i\n", tab);
    printf("New Line: %i\n", newline);
    printf("total: %i\n", hit);

    return 0;
}