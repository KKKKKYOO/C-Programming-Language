/**
 * Exercise 1-17: Write a program to print all input lines that are logner than 80 characters
*/

#include <stdio.h>
#define LIMIT 80
#define MAXLINE 1000

int get_line(char line[], int max_line_len);

int main(){
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0){
        if (len  > LIMIT){
            printf("%s", line);
        }
    }

    return 0;
}

int get_line(char line[], int max_line_len){
    int c, i;
    for (i = 0; i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n'){
    line[i] = c;
    ++i;
    }
    line[i] = '\0';
    return i;
}