/*
    Exercise 1-16

    Revise the main routine of the longest-line program so it will correctly print the length of
    arbitrarily long input lines, and as much as possible of the text.
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size  */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len, max = 0, lineNumber = 0, maxLineNumber = 0;
    char lineBuffer[MAXLINE], longest[MAXLINE];

    while ((len = getLine(lineBuffer, MAXLINE)) > 0)
    {
        lineNumber++;

        if (len > max)
        {
            max = len;
            maxLineNumber = lineNumber;
            copy(longest, lineBuffer);
        }
    }
    if (max > 0)
    {
        printf("line %d, chars %d\n", maxLineNumber, max);
        printf("%s", longest);
    }
    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
        
    if (c == '\n')
    {
        s[i++] = c;
    }

    s[i] = '\0';

    return i - 1;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}
