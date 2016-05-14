/*
    Exercise 1-13

    Write a program to print a histogram of the lengths of words in its input. 
    It is easy to draw the histogram with the bars horizontal; a vertical 
    orientation is more challenging.
*/

#include<stdio.h>
#define ARRAY_SIZE 20

main()
{
    int c, i, length, longest, wordarray[ARRAY_SIZE];
    
    // Initializations
    length = longest = 0;
    for (c = 0; c < ARRAY_SIZE; ++c) {
        wordarray[c] = 0;
    }
    
    // Count the length of each word
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (length < (ARRAY_SIZE - 1)) {
                ++wordarray[length];
                length = 0;
            }
            else {
                ++wordarray[ARRAY_SIZE - 1];
                length = 0;
            }
        }
        else {
            ++length;
        }
    }
    
    // Find the longest recorded word
    for (c = 0; c < ARRAY_SIZE; ++c) {
        if (wordarray[c] > 0) {
            longest = c;
        }
    }
    
    // Print results as horizontal bars
    for (c = longest; c > 0; --c) {
        printf("%3d \u2502 ", c);
        for (i = 0; i < wordarray[c]; ++i) {
            printf("\u2501");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print results as vertical bars
    
}

