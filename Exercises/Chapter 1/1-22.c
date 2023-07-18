/**
 * Exercise 1-22: Write a program to "fold" long input lines into two or more shorter linesafter the last non-blank character that occurs before the n-th column of input.
 * Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.
 * 
*/
#include <stdio.h>
#define MAXLINE 1000
#define N 10

int getline(char line[], int maxline);
void fold(char line[], int col);

int main() {
    int col = N;
    char line[MAXLINE];
    int len;

    while ((len = getline(line, MAXLINE)) > 0) {
        fold(line, col);
    }

    return 0;
}

int getline(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void fold(char line[], int col) {
    int pos = 0;
    int last_non_blank = -1;

    while (line[pos] != '\0') {
        if (line[pos] != ' ' && line[pos] != '\t') {
            last_non_blank = pos;
        }

        if (pos == col - 1) {
            if (last_non_blank == -1) {
                putchar(line[pos]);
                putchar('\n');
                pos++;
            } else {
                putchar('\n');
                pos = last_non_blank + 1;
                last_non_blank = -1;
            }
        } else {
            putchar(line[pos]);
            pos++;
        }
    }

    if (last_non_blank != -1 && pos > last_non_blank + 1) {
        putchar('\n');
    }
}
