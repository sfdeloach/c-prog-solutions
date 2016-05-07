/*
    Exercise 1-3
     
    Modify the temperature conversion program to print a heading above the 
    table.
*/

#include<stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("%5s  %8s", "deg F", "deg C\n");
    printf("--------------\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%5.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
