/*
    Exercise 1-6
     
    Verify that the expression getchar() != EOF if 0 or 1
*/

#include<stdio.h>

main()
{
    int c, result;
    
    while (result = ((c = getchar()) != EOF)) {
        printf("c = %c, getchar() != EOF, %d\n", c, result);
    }
    printf("c = %c, getchar() != EOF, %d\n", c, result);
}
