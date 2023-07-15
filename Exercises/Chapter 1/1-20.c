/**
 * Exercise 1-20: Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns. Should n be a variable or symbolic parameter?
*/
#include <stdio.h>
#define N 4
#define MAXLINE 1000

int detab(int tabstop);
int getline(char line[], int maxLine);

int main(){
    int tabstop = N;
    char line[MAXLINE];
    int len;
    while((len = getline(line, MAXLINE)) > 0){
        len = detab(tabstop);
        printf("%s", line);
    }

    return 0;
}

int detab(int tabstop){
    int c, i, j;
    extern char line[];

    for(i = 0, j = 0; line[i] != '\0'; ++i){
        if (line[i] == '\t'){
            for(int k = 0; k < tabstop; ++k){
                line[j++] = ' ';
            }
        } else {
            line[j++] = line[i];
        }
    }
    line[j] = '\0';
    return j;
}

int getline(char line[], int maxLine) {
    int c, i;
    
    for (i = 0; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

/**
 * n shuold be a symbolic parameter
*/