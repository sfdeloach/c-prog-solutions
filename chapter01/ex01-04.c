/*
    Exercise 1-4
     
    Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include<stdio.h>

main()
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
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%5.0f %8.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
