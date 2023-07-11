/**
* Exercise 1-5: Modify the temperature conversion program to print the table in reverse order,
* that is, from 300 degrees to 0.
*/

#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Celsius\t\tFahr\n");
    printf("--------------------\n");

    celsius = upper;
    while (celsius >= lower) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%6.1f\t\t%3.0f\n", celsius, fahr);
        celsius -= step;
    }
}