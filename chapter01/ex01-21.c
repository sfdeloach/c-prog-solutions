/*
    Exercise 1-21

    Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks
    to achieve the same spacing. use the same tab stops as for detab. When either a tab or a single
    blank would suffice to reach a tab stop, which should be given preference?
*/

#include <stdio.h>
#define MAXLINE 1024 /* maximum input line size  */
#define TABSTOP 8

int getLine(char s[], int lim);
void entab(char out[], char in[]);

int main(void)
{
    int len;
    char result[MAXLINE], temp[MAXLINE];

    while ((len = getLine(temp, MAXLINE)) != EOF)
    {
        if (len > 0)
        {
            entab(result, temp);
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

// TODO
void entab(char result[], char temp[])
{
    int j = 0;

    // // loop thru the temp string
    // for (int i = 0; temp[i] != '\0'; ++i)
    // {
    //     if (temp[i] == '\t')
    //     {
    //         int k = j; // preserve the index where the tab was found

    //         while (j < TABSTOP * ((k / TABSTOP) + 1))
    //         {
    //             result[j++] = ' ';
    //         }
    //     }
    //     else
    //     {
    //         result[j++] = temp[i];
    //     }
    // }

    result[j] = '\0';

    return;
}
