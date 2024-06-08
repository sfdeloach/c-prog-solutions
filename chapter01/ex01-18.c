/*
    Exercise 1-18

    Write a program to remove trailing blanks and tabs from each line of input, and to delete
    entirely blank lines.
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size  */

int getLine(char s[], int limit);
int trim(char s[], int len);

int main(void)
{
    int len, blanksAndTabs;
    char buffer[MAXLINE];

    while ((len = getLine(buffer, MAXLINE)) != -1)
    {
        blanksAndTabs = trim(buffer, len);

        if (len > 0 && len > blanksAndTabs)
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

int trim(char s[], int len)
{
    int blanksAndTabs, hasNewLine = 0;

    if (s[len] == '\n')
    {
        len--;
        hasNewLine = 1;
    }

    for (blanksAndTabs = 0; s[len] == ' ' || s[len] == '\t'; blanksAndTabs++)
    {
        s[len--] = '\0';
    }

    if (hasNewLine)
    {
        s[len + 1] = '\n';
        s[len + 2] = '\0';
    }

    return blanksAndTabs;
}