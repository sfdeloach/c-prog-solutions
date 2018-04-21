/*
    Exercise 1-15
     
    Rewrite the temperature conversion program of Section 1.2 to
    use a function for converstion.
*/

#include<stdio.h>

float ctof(int c)
{
    return c * (9.0/5.0) + 32.0;
}

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -40;
    upper = 180;
    step = 20;
    
    celsius = lower;
    printf("%5s  %8s", "deg C", "deg F\n");
    printf("--------------\n");
    while (celsius <= upper) {
        printf("%5.0f %8.1f\n", celsius, ctof(celsius));
        celsius += step;
    }

    return 0;
}


