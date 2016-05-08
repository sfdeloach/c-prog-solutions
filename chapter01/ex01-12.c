/*
    Exercise 1-12

    Write a program that prints its input one word per line.
*/

#include<stdio.h>
#define IN 1
#define OUT 0

main()
{
    int c, word;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' && word == IN) {
            word = OUT;
            putchar('\n');
        }
        else if (c == ' ' && word == OUT) {
            /* do nothing */;   
        }
        else {
            word = IN;
            putchar(c);
        }
        
    }
}
