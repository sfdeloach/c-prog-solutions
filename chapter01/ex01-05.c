/*
    Exercise 1-5
     
    Modify the temperature conversion program to print the table in reverse
    order, that is, from 300 degrees to 0;
*/

#include<stdio.h>

main()
{
    float fahr;
    
    printf("%5s  %8s", "deg F", "deg C\n");
    printf("--------------\n");
    
    for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%5.0f %8.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}
