/**
 * Exercise 1-19: Write a function reverse(s) that reverses the chracter string s. 
 * Use it to write a program that reverses its input a line at a time.
*/
#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int linelen);
int length(char line[]);
void reverse(char line[]);

int main(){
    char line[MAXLINE];
    int len;

    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int get_line(char line[], int linelen){
    int c, i; 

    for(i = 0; i < linelen - 1 && (c= getchar()) != EOF && c!= '\n'; ++i){
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}

int length(char line[]){
    int i;
    for(i = 0; line[i] != '\0'; i++)
        ;
    return i;
}

void reverse(char line[]){
    int head = 0;
    int tail = length(line) - 1;

    while(head < tail){
        char tmp = line[head];
        line[head] = line[tail];
        line[tail] = tmp;
        head++;
        tail--;
    }
}
