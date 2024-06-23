/*
    Exercise 1-20

    Write a program detab that replaces tabs in the input with the proper number of blanks to space
    to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a
    variable or a symbolic parameter?
*/

#include <stdio.h>
#define MAXLINE 1024 /* maximum input line size  */
#define TABSTOP 8

int getLine(char s[], int lim);
void detab(char out[], char in[]);

int main(void)
{
    int len;
    char result[MAXLINE], temp[MAXLINE];

    while ((len = getLine(temp, MAXLINE)) != EOF)
    {
        if (len > 0)
        {
            detab(result, temp);
            printf("%s", result);
        }
    }

    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != '\n'; i++)
        s[i] = c;

    if (s[0] == EOF)
        return s[0];
    else if (c == '\n')
        s[i++] = c;

    s[i] = '\0';

    return i - 1;
}

void detab(char result[], char temp[])
{
    int j = 0;

    // loop thru the temp string
    for (int i = 0; temp[i] != '\0'; ++i)
    {
        if (temp[i] == '\t')
        {
            int k = j; // preserve the index where the tab was found

            while (j < TABSTOP * ((k / TABSTOP) + 1))
            {
                result[j++] = ' ';
            }
        }
        else
        {
            result[j++] = temp[i];
        }
    }

    result[j] = '\0';

    return;
}
