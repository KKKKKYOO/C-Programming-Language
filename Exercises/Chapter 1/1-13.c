/**
 * Exercise 1-13: Write a program to print a histogram of the length of words in its input.
 * It is easy to draw histogram with the bars horizontal; a vertical orientation is more challenging
*/
#include <stdio.h>

int main() {
    int c, len, num;
    len = 0;
    num = 1; // Start counting from 1 for the first word
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            printf("Word #%d length: ", num);
            for (int i = 0; i < len; i++) {
                printf("-");
            }
            printf("\n");
            len = 0; // Reset the length for the next word
            num++;   // Increment the word count
        } else {
            len++;
        }
    }

    return 0;
}
