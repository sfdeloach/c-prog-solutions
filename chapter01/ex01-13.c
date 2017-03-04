/*
    Exercise 1-13

    Write a program to print a histogram of the lengths of words in its input. 
    It is easy to draw the histogram with the bars horizontal; a vertical 
    orientation is more challenging.
*/

#include<stdio.h>
#define ARRAY_SIZE 25

int main(void)
{
    int c, i, length, longest, largestBin, wordarray[ARRAY_SIZE];
    
    // Initialize the array buckets to zero
    length = longest = largestBin = 0;
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
                printf("WARNING: size of wordarray is too small!!!");
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
    
    // Find the bin with the most words
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (largestBin < wordarray[i]) {
            largestBin = wordarray[i];
        }
    }

    // Print results as horizontal bars
    printf("\n\nHISTOGRAM RESULTS:\n");
    for (c = longest; c > 0; --c) {
        printf("%3d \u2502 ", c);
        for (i = 0; i < wordarray[c]; ++i) {
            printf("\u2586");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print results as vertical bars
    for (i = largestBin; i > 0; i--) {
        for (c = 1; c < longest + 1; c++) {
            if (wordarray[c] >= i) {
                printf("  %s", "\u2588");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for (c = 1; c < 3 * longest + 1; c++) {
        printf("\u2500");
    }
    printf("\n");
    for (c = 1; c < longest + 1; c++) {
        printf("%3d", c);
    }
    printf("\n\n");
}








