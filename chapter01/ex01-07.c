/*
    Exercise 1-7

    Write a program to print the value of EOF
*/

#include <stdio.h>

int main(void)
{
    int value = EOF;

    printf("    EOF as an integer: %d\n", value);
    printf("EOF as an hexidecimal: %x\n", value);

    return 0;
}
