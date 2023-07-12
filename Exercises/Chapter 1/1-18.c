/**
 * Exercise 1-18: Write a program to remove trailing blanks and tabs from each line of input, and to delete antirely blank lines
*/
#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxlen);
void remove_trailing_blanks(char line[], int len);

int main(){
    char line[MAXLINE];
    int len;
    while((len = get_line(line, MAXLINE)) > 0){
        remove_trailing_blanks(line, len);
        printf("%s", line);
    }

    return 0;
}

int get_line(char line[], int maxlen){
    int c, i;
    for( i =0; i < maxlen -1 && (c = getchar()) != EOF && c != '\n'; i++){
        line[i] = c;
    }

    if (c == '\n'){
        line[i] = c;
        i++;
    }

    line[i] = '\0';

    return i;
}

void remove_trailing_blanks(char line[], int len){
    for(int i = 0; i < len; i++){
        if (line[i] == ' ' || line[i] == '\t'){
            line[i+1] = '\n';
            line[i+2] = '\0';
        }
    }
}