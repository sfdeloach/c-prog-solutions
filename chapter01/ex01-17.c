/*
    Exercise 1-17

    Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>
#define LINE_LENGTH 80 /* print lines equal to or longer than this number */
#define MAXLINE 1000   /* maximum input line size  */

int getLine(char s[], int limit);

int main(void)
{
    int len;
    char buffer[MAXLINE];

    while ((len = getLine(buffer, MAXLINE)) != -1)
    {
        if (len >= LINE_LENGTH)
        {
            printf("%s", buffer);
        }
    }

    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (s[0] == EOF)
    {
        return -1;
    }

    if (c == '\n')
    {
        s[i++] = c;
    }

    s[i] = '\0';

    return i - 1;
}