/*
    Exercise 1-19

    Write a function reverse(s) that reverses the character string s. Use it to write a program that
    reverses its input a line at a time.
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size  */

int getLine(char s[], int limit);
void reverse(char s[], int len);

int main(void)
{
    int len;
    char buffer[MAXLINE];

    while ((len = getLine(buffer, MAXLINE)) != EOF)
    {
        if (len > 0)
        {
            reverse(buffer, len);
            printf("%s", buffer);
        }
    }

    return 0;
}

void reverse(char s[], int len)
{
    char temp;
    --len;

    for (int i = 0; i < len; i++, len--)
    {
        temp = s[i];
        s[i] = s[len];
        s[len] = temp;
    }
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