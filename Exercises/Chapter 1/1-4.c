#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Celsius\t\tFahr\n");
    printf("---------------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%6.1f\t\t%3.0f\n", celsius, fahr);
        celsius += step;
    }
}