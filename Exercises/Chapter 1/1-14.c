/**
 * Exercise 1-14: Write a program to print a histogram of the frequencies of different characters in its input:
 * 
*/
#include <stdio.h>

#define ALPHA 26
#define DIGIT 10

int main(){
    char c;
    char freq[ALPHA + DIGIT];

    for(int i = 0; i < (ALPHA + DIGIT); i++){
        freq[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c >= 'a' && c <= 'z'){
            ++freq[c-'a'];
        }
        else if (c >= '0' && c <= '9'){
            ++freq[c - '0' + ALPHA];
        }
    }

    for(int i = 0; i < (ALPHA + DIGIT); ++i){
        if(i < ALPHA){
            printf("%c: ", 'a' + i);
        }
        else if (i >= ALPHA){
            printf('%c: ', '0' + i - ALPHA);
        }

        for(int j = 0; j < freq[0]; j++){
            printf('-');
        }

        putchar('\n');
    }

    return 0;
}