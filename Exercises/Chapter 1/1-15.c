/**
 * Rewrite the temperature conversion program to use a function for conversion
 * 
*/
#include <stdio.h>

int fcconversion(int f); // Function prototype

int main() {
    int low, high, step;
    low = 0;
    high = 300;
    step = 20;

    printf("F\t\tC\n");
    printf("----------------------\n");
    for (int f = low; f <= high; f += step) {
        printf("%d\t\t%d\n", f, fcconversion(f));
    }

    return 0;
}

int fcconversion(int f) {
    int c;
    c = 5 * (f - 32) / 9;
    return c;
}
