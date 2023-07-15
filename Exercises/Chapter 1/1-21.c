/**
 * Exercise 1-21: Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing.
 * Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
 * 
*/
#include <stdio.h>
#define N 4
#define MAXLINE 1000

int getline(char line[], int maxline);
int entab(int tabstop);

int main(){
    int tabstop = N;
    char line[MAXLINE];
    int len;
    
    while((len = getline(line, MAXLINE)) > 0){
        len = entab(tabstop);
        printf("%s", line);
    }

    return 0;
}

int entab(int tabstop){
    int c, i, j;
    extern char line[];

    int spaces = 0;
    int pos = 0;

    for(i = 0, j = 0; line[i] != '\0'; i++){
        if(line[i] == ' '){
            spaces++;

            if(spaces == tabstop){
                line[j++] = '\t';
                spaces = 0;
                pos += tabstop;
            }
        }
        else {
            for (; spaces > 0; spaces--) {
                if ((pos % tabstop) != 0) {
                    line[j++] = ' ';
                }
                else {
                    line[j++] = '\t';
                }
            }
            line[j++] = line[i];
            pos++;
        }
    }

    line[j] = '\0';
    return j;
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
